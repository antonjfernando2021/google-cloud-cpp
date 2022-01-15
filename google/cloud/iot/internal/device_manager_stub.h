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
// source: google/cloud/iot/v1/device_manager.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IOT_INTERNAL_DEVICE_MANAGER_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IOT_INTERNAL_DEVICE_MANAGER_STUB_H

#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/iot/v1/device_manager.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace iot_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DeviceManagerStub {
 public:
  virtual ~DeviceManagerStub() = 0;

  virtual StatusOr<google::cloud::iot::v1::DeviceRegistry> CreateDeviceRegistry(
      grpc::ClientContext& context,
      google::cloud::iot::v1::CreateDeviceRegistryRequest const& request) = 0;

  virtual StatusOr<google::cloud::iot::v1::DeviceRegistry> GetDeviceRegistry(
      grpc::ClientContext& context,
      google::cloud::iot::v1::GetDeviceRegistryRequest const& request) = 0;

  virtual StatusOr<google::cloud::iot::v1::DeviceRegistry> UpdateDeviceRegistry(
      grpc::ClientContext& context,
      google::cloud::iot::v1::UpdateDeviceRegistryRequest const& request) = 0;

  virtual Status DeleteDeviceRegistry(
      grpc::ClientContext& context,
      google::cloud::iot::v1::DeleteDeviceRegistryRequest const& request) = 0;

  virtual StatusOr<google::cloud::iot::v1::ListDeviceRegistriesResponse>
  ListDeviceRegistries(
      grpc::ClientContext& context,
      google::cloud::iot::v1::ListDeviceRegistriesRequest const& request) = 0;

  virtual StatusOr<google::cloud::iot::v1::Device> CreateDevice(
      grpc::ClientContext& context,
      google::cloud::iot::v1::CreateDeviceRequest const& request) = 0;

  virtual StatusOr<google::cloud::iot::v1::Device> GetDevice(
      grpc::ClientContext& context,
      google::cloud::iot::v1::GetDeviceRequest const& request) = 0;

  virtual StatusOr<google::cloud::iot::v1::Device> UpdateDevice(
      grpc::ClientContext& context,
      google::cloud::iot::v1::UpdateDeviceRequest const& request) = 0;

  virtual Status DeleteDevice(
      grpc::ClientContext& context,
      google::cloud::iot::v1::DeleteDeviceRequest const& request) = 0;

  virtual StatusOr<google::cloud::iot::v1::ListDevicesResponse> ListDevices(
      grpc::ClientContext& context,
      google::cloud::iot::v1::ListDevicesRequest const& request) = 0;

  virtual StatusOr<google::cloud::iot::v1::DeviceConfig>
  ModifyCloudToDeviceConfig(
      grpc::ClientContext& context,
      google::cloud::iot::v1::ModifyCloudToDeviceConfigRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::iot::v1::ListDeviceConfigVersionsResponse>
  ListDeviceConfigVersions(
      grpc::ClientContext& context,
      google::cloud::iot::v1::ListDeviceConfigVersionsRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::iot::v1::ListDeviceStatesResponse>
  ListDeviceStates(
      grpc::ClientContext& context,
      google::cloud::iot::v1::ListDeviceStatesRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::SetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::GetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(
      grpc::ClientContext& context,
      google::iam::v1::TestIamPermissionsRequest const& request) = 0;

  virtual StatusOr<google::cloud::iot::v1::SendCommandToDeviceResponse>
  SendCommandToDevice(
      grpc::ClientContext& context,
      google::cloud::iot::v1::SendCommandToDeviceRequest const& request) = 0;

  virtual StatusOr<google::cloud::iot::v1::BindDeviceToGatewayResponse>
  BindDeviceToGateway(
      grpc::ClientContext& context,
      google::cloud::iot::v1::BindDeviceToGatewayRequest const& request) = 0;

  virtual StatusOr<google::cloud::iot::v1::UnbindDeviceFromGatewayResponse>
  UnbindDeviceFromGateway(
      grpc::ClientContext& context,
      google::cloud::iot::v1::UnbindDeviceFromGatewayRequest const&
          request) = 0;
};

class DefaultDeviceManagerStub : public DeviceManagerStub {
 public:
  explicit DefaultDeviceManagerStub(
      std::unique_ptr<google::cloud::iot::v1::DeviceManager::StubInterface>
          grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::cloud::iot::v1::DeviceRegistry> CreateDeviceRegistry(
      grpc::ClientContext& client_context,
      google::cloud::iot::v1::CreateDeviceRegistryRequest const& request)
      override;

  StatusOr<google::cloud::iot::v1::DeviceRegistry> GetDeviceRegistry(
      grpc::ClientContext& client_context,
      google::cloud::iot::v1::GetDeviceRegistryRequest const& request) override;

  StatusOr<google::cloud::iot::v1::DeviceRegistry> UpdateDeviceRegistry(
      grpc::ClientContext& client_context,
      google::cloud::iot::v1::UpdateDeviceRegistryRequest const& request)
      override;

  Status DeleteDeviceRegistry(
      grpc::ClientContext& client_context,
      google::cloud::iot::v1::DeleteDeviceRegistryRequest const& request)
      override;

  StatusOr<google::cloud::iot::v1::ListDeviceRegistriesResponse>
  ListDeviceRegistries(
      grpc::ClientContext& client_context,
      google::cloud::iot::v1::ListDeviceRegistriesRequest const& request)
      override;

  StatusOr<google::cloud::iot::v1::Device> CreateDevice(
      grpc::ClientContext& client_context,
      google::cloud::iot::v1::CreateDeviceRequest const& request) override;

  StatusOr<google::cloud::iot::v1::Device> GetDevice(
      grpc::ClientContext& client_context,
      google::cloud::iot::v1::GetDeviceRequest const& request) override;

  StatusOr<google::cloud::iot::v1::Device> UpdateDevice(
      grpc::ClientContext& client_context,
      google::cloud::iot::v1::UpdateDeviceRequest const& request) override;

  Status DeleteDevice(
      grpc::ClientContext& client_context,
      google::cloud::iot::v1::DeleteDeviceRequest const& request) override;

  StatusOr<google::cloud::iot::v1::ListDevicesResponse> ListDevices(
      grpc::ClientContext& client_context,
      google::cloud::iot::v1::ListDevicesRequest const& request) override;

  StatusOr<google::cloud::iot::v1::DeviceConfig> ModifyCloudToDeviceConfig(
      grpc::ClientContext& client_context,
      google::cloud::iot::v1::ModifyCloudToDeviceConfigRequest const& request)
      override;

  StatusOr<google::cloud::iot::v1::ListDeviceConfigVersionsResponse>
  ListDeviceConfigVersions(
      grpc::ClientContext& client_context,
      google::cloud::iot::v1::ListDeviceConfigVersionsRequest const& request)
      override;

  StatusOr<google::cloud::iot::v1::ListDeviceStatesResponse> ListDeviceStates(
      grpc::ClientContext& client_context,
      google::cloud::iot::v1::ListDeviceStatesRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& client_context,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& client_context,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& client_context,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StatusOr<google::cloud::iot::v1::SendCommandToDeviceResponse>
  SendCommandToDevice(grpc::ClientContext& client_context,
                      google::cloud::iot::v1::SendCommandToDeviceRequest const&
                          request) override;

  StatusOr<google::cloud::iot::v1::BindDeviceToGatewayResponse>
  BindDeviceToGateway(grpc::ClientContext& client_context,
                      google::cloud::iot::v1::BindDeviceToGatewayRequest const&
                          request) override;

  StatusOr<google::cloud::iot::v1::UnbindDeviceFromGatewayResponse>
  UnbindDeviceFromGateway(
      grpc::ClientContext& client_context,
      google::cloud::iot::v1::UnbindDeviceFromGatewayRequest const& request)
      override;

 private:
  std::unique_ptr<google::cloud::iot::v1::DeviceManager::StubInterface>
      grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iot_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IOT_INTERNAL_DEVICE_MANAGER_STUB_H