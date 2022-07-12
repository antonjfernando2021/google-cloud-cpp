// Copyright 2018 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/storage/internal/curl_handle_factory.h"
#include "google/cloud/storage/options.h"

namespace google {
namespace cloud {
namespace storage {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace internal {

void CurlHandleFactory::SetCurlStringOption(CURL* handle, CURLoption option_tag,
                                            char const* value) {
  curl_easy_setopt(handle, option_tag, value);
}

std::shared_ptr<CurlHandleFactory> GetDefaultCurlHandleFactory() {
  static auto const* const kFactory =
      new auto(std::make_shared<DefaultCurlHandleFactory>());
  return *kFactory;
}

std::shared_ptr<CurlHandleFactory> GetDefaultCurlHandleFactory(
    Options const& options) {
  if (!options.get<CARootsFilePathOption>().empty()) {
    return std::make_shared<DefaultCurlHandleFactory>(options);
  }
  return GetDefaultCurlHandleFactory();
}

DefaultCurlHandleFactory::DefaultCurlHandleFactory(Options const& o) {
  if (o.has<CARootsFilePathOption>()) cainfo_ = o.get<CARootsFilePathOption>();
  if (o.has<CAPathOption>()) capath_ = o.get<CAPathOption>();
}

rest_internal::CurlPtr DefaultCurlHandleFactory::CreateHandle() {
  auto curl = rest_internal::MakeCurlPtr();
  SetCurlOptions(curl.get());
  return curl;
}

void DefaultCurlHandleFactory::CleanupHandle(rest_internal::CurlPtr h) {
  if (!h) return;
  char* ip;
  auto res = curl_easy_getinfo(h.get(), CURLINFO_LOCAL_IP, &ip);
  if (res == CURLE_OK && ip != nullptr) {
    std::lock_guard<std::mutex> lk(mu_);
    last_client_ip_address_ = ip;
  }
  h.reset();
}

rest_internal::CurlMulti DefaultCurlHandleFactory::CreateMultiHandle() {
  return rest_internal::CurlMulti(curl_multi_init(), &curl_multi_cleanup);
}

void DefaultCurlHandleFactory::CleanupMultiHandle(
    rest_internal::CurlMulti&& m) {
  m.reset();
}

void DefaultCurlHandleFactory::SetCurlOptions(CURL* handle) {
  if (cainfo_) {
    SetCurlStringOption(handle, CURLOPT_CAINFO, cainfo_->c_str());
  }
  if (capath_) {
    SetCurlStringOption(handle, CURLOPT_CAPATH, capath_->c_str());
  }
}

PooledCurlHandleFactory::PooledCurlHandleFactory(std::size_t maximum_size,
                                                 Options const& o)
    : maximum_size_(maximum_size) {
  if (o.has<CARootsFilePathOption>()) cainfo_ = o.get<CARootsFilePathOption>();
  if (o.has<CAPathOption>()) capath_ = o.get<CAPathOption>();
}

PooledCurlHandleFactory::~PooledCurlHandleFactory() {
  for (auto* h : handles_) {
    curl_easy_cleanup(h);
  }
  for (auto* m : multi_handles_) {
    curl_multi_cleanup(m);
  }
}

rest_internal::CurlPtr PooledCurlHandleFactory::CreateHandle() {
  std::unique_lock<std::mutex> lk(mu_);
  if (!handles_.empty()) {
    auto* handle = handles_.back();
    // Clear all the options in the handle so we do not leak its previous state.
    (void)curl_easy_reset(handle);
    handles_.pop_back();
    rest_internal::CurlPtr curl(handle, &curl_easy_cleanup);
    SetCurlOptions(curl.get());
    return curl;
  }
  auto curl = rest_internal::MakeCurlPtr();
  SetCurlOptions(curl.get());
  return curl;
}

void PooledCurlHandleFactory::CleanupHandle(rest_internal::CurlPtr h) {
  if (!h) return;
  std::unique_lock<std::mutex> lk(mu_);
  char* ip;
  auto res = curl_easy_getinfo(h.get(), CURLINFO_LOCAL_IP, &ip);
  if (res == CURLE_OK && ip != nullptr) {
    last_client_ip_address_ = ip;
  }
  while (handles_.size() >= maximum_size_) {
    auto* tmp = handles_.front();
    handles_.erase(handles_.begin());
    curl_easy_cleanup(tmp);
  }
  handles_.push_back(h.get());
  // The handles_ vector now has ownership, so release it.
  (void)h.release();
}

rest_internal::CurlMulti PooledCurlHandleFactory::CreateMultiHandle() {
  std::unique_lock<std::mutex> lk(mu_);
  if (!multi_handles_.empty()) {
    auto* m = multi_handles_.back();
    multi_handles_.pop_back();
    return rest_internal::CurlMulti(m, &curl_multi_cleanup);
  }
  return rest_internal::CurlMulti(curl_multi_init(), &curl_multi_cleanup);
}

void PooledCurlHandleFactory::CleanupMultiHandle(rest_internal::CurlMulti&& m) {
  if (!m) return;
  std::unique_lock<std::mutex> lk(mu_);
  while (multi_handles_.size() >= maximum_size_) {
    auto* tmp = multi_handles_.front();
    multi_handles_.erase(multi_handles_.begin());
    curl_multi_cleanup(tmp);
  }
  multi_handles_.push_back(m.get());
  // The multi_handles_ vector now has ownership, so release it.
  (void)m.release();
}

void PooledCurlHandleFactory::SetCurlOptions(CURL* handle) {
  if (cainfo_) {
    SetCurlStringOption(handle, CURLOPT_CAINFO, cainfo_->c_str());
  }
  if (capath_) {
    SetCurlStringOption(handle, CURLOPT_CAPATH, capath_->c_str());
  }
}

}  // namespace internal
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storage
}  // namespace cloud
}  // namespace google
