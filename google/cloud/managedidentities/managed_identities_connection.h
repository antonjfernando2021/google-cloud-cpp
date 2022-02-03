// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/managedidentities/v1/managed_identities_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MANAGEDIDENTITIES_MANAGED_IDENTITIES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MANAGEDIDENTITIES_MANAGED_IDENTITIES_CONNECTION_H

#include "google/cloud/managedidentities/internal/managed_identities_retry_traits.h"
#include "google/cloud/managedidentities/internal/managed_identities_stub.h"
#include "google/cloud/managedidentities/managed_identities_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace managedidentities {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ManagedIdentitiesServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        managedidentities_internal::ManagedIdentitiesServiceRetryTraits>;

using ManagedIdentitiesServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        managedidentities_internal::ManagedIdentitiesServiceRetryTraits>;

using ManagedIdentitiesServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        managedidentities_internal::ManagedIdentitiesServiceRetryTraits>;

class ManagedIdentitiesServiceConnection {
 public:
  virtual ~ManagedIdentitiesServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::managedidentities::v1::Domain>>
  CreateMicrosoftAdDomain(google::cloud::managedidentities::v1::
                              CreateMicrosoftAdDomainRequest const& request);

  virtual StatusOr<
      google::cloud::managedidentities::v1::ResetAdminPasswordResponse>
  ResetAdminPassword(
      google::cloud::managedidentities::v1::ResetAdminPasswordRequest const&
          request);

  virtual StreamRange<google::cloud::managedidentities::v1::Domain> ListDomains(
      google::cloud::managedidentities::v1::ListDomainsRequest request);

  virtual StatusOr<google::cloud::managedidentities::v1::Domain> GetDomain(
      google::cloud::managedidentities::v1::GetDomainRequest const& request);

  virtual future<StatusOr<google::cloud::managedidentities::v1::Domain>>
  UpdateDomain(
      google::cloud::managedidentities::v1::UpdateDomainRequest const& request);

  virtual future<StatusOr<google::cloud::managedidentities::v1::OpMetadata>>
  DeleteDomain(
      google::cloud::managedidentities::v1::DeleteDomainRequest const& request);

  virtual future<StatusOr<google::cloud::managedidentities::v1::Domain>>
  AttachTrust(
      google::cloud::managedidentities::v1::AttachTrustRequest const& request);

  virtual future<StatusOr<google::cloud::managedidentities::v1::Domain>>
  ReconfigureTrust(
      google::cloud::managedidentities::v1::ReconfigureTrustRequest const&
          request);

  virtual future<StatusOr<google::cloud::managedidentities::v1::Domain>>
  DetachTrust(
      google::cloud::managedidentities::v1::DetachTrustRequest const& request);

  virtual future<StatusOr<google::cloud::managedidentities::v1::Domain>>
  ValidateTrust(
      google::cloud::managedidentities::v1::ValidateTrustRequest const&
          request);
};

std::shared_ptr<ManagedIdentitiesServiceConnection>
MakeManagedIdentitiesServiceConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace managedidentities
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace managedidentities_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<managedidentities::ManagedIdentitiesServiceConnection>
MakeManagedIdentitiesServiceConnection(
    std::shared_ptr<ManagedIdentitiesServiceStub> stub, Options options);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace managedidentities_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MANAGEDIDENTITIES_MANAGED_IDENTITIES_CONNECTION_H