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
// source:
// google/cloud/beyondcorp/clientgateways/v1/client_gateways_service.proto

#include "google/cloud/beyondcorp/client_gateways_client.h"
#include "google/cloud/beyondcorp/internal/client_gateways_option_defaults.h"
#include <memory>

namespace google {
namespace cloud {
namespace beyondcorp {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ClientGatewaysServiceClient::ClientGatewaysServiceClient(
    std::shared_ptr<ClientGatewaysServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(internal::MergeOptions(
          std::move(opts),
          beyondcorp_internal::ClientGatewaysServiceDefaultOptions(
              connection_->options()))) {}
ClientGatewaysServiceClient::~ClientGatewaysServiceClient() = default;

StreamRange<google::cloud::beyondcorp::clientgateways::v1::ClientGateway>
ClientGatewaysServiceClient::ListClientGateways(std::string const& parent,
                                                Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::beyondcorp::clientgateways::v1::ListClientGatewaysRequest
      request;
  request.set_parent(parent);
  return connection_->ListClientGateways(request);
}

StreamRange<google::cloud::beyondcorp::clientgateways::v1::ClientGateway>
ClientGatewaysServiceClient::ListClientGateways(
    google::cloud::beyondcorp::clientgateways::v1::ListClientGatewaysRequest
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListClientGateways(std::move(request));
}

StatusOr<google::cloud::beyondcorp::clientgateways::v1::ClientGateway>
ClientGatewaysServiceClient::GetClientGateway(std::string const& name,
                                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::beyondcorp::clientgateways::v1::GetClientGatewayRequest
      request;
  request.set_name(name);
  return connection_->GetClientGateway(request);
}

StatusOr<google::cloud::beyondcorp::clientgateways::v1::ClientGateway>
ClientGatewaysServiceClient::GetClientGateway(
    google::cloud::beyondcorp::clientgateways::v1::
        GetClientGatewayRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetClientGateway(request);
}

future<StatusOr<google::cloud::beyondcorp::clientgateways::v1::ClientGateway>>
ClientGatewaysServiceClient::CreateClientGateway(
    std::string const& parent,
    google::cloud::beyondcorp::clientgateways::v1::ClientGateway const&
        client_gateway,
    std::string const& client_gateway_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::beyondcorp::clientgateways::v1::CreateClientGatewayRequest
      request;
  request.set_parent(parent);
  *request.mutable_client_gateway() = client_gateway;
  request.set_client_gateway_id(client_gateway_id);
  return connection_->CreateClientGateway(request);
}

future<StatusOr<google::cloud::beyondcorp::clientgateways::v1::ClientGateway>>
ClientGatewaysServiceClient::CreateClientGateway(
    google::cloud::beyondcorp::clientgateways::v1::
        CreateClientGatewayRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateClientGateway(request);
}

future<StatusOr<google::cloud::beyondcorp::clientgateways::v1::
                    ClientGatewayOperationMetadata>>
ClientGatewaysServiceClient::DeleteClientGateway(std::string const& name,
                                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::beyondcorp::clientgateways::v1::DeleteClientGatewayRequest
      request;
  request.set_name(name);
  return connection_->DeleteClientGateway(request);
}

future<StatusOr<google::cloud::beyondcorp::clientgateways::v1::
                    ClientGatewayOperationMetadata>>
ClientGatewaysServiceClient::DeleteClientGateway(
    google::cloud::beyondcorp::clientgateways::v1::
        DeleteClientGatewayRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteClientGateway(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp
}  // namespace cloud
}  // namespace google