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
// source: google/devtools/containeranalysis/v1/containeranalysis.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTAINERANALYSIS_INTERNAL_CONTAINER_ANALYSIS_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTAINERANALYSIS_INTERNAL_CONTAINER_ANALYSIS_STUB_H

#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/devtools/containeranalysis/v1/containeranalysis.grpc.pb.h>
#include <grafeas/v1/grafeas.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace containeranalysis_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ContainerAnalysisStub {
 public:
  virtual ~ContainerAnalysisStub() = 0;

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

  virtual StatusOr<
      google::devtools::containeranalysis::v1::VulnerabilityOccurrencesSummary>
  GetVulnerabilityOccurrencesSummary(
      grpc::ClientContext& context,
      google::devtools::containeranalysis::v1::
          GetVulnerabilityOccurrencesSummaryRequest const& request) = 0;
};

class DefaultContainerAnalysisStub : public ContainerAnalysisStub {
 public:
  explicit DefaultContainerAnalysisStub(
      std::unique_ptr<google::devtools::containeranalysis::v1::
                          ContainerAnalysis::StubInterface>
          grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& client_context,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& client_context,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& client_context,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StatusOr<
      google::devtools::containeranalysis::v1::VulnerabilityOccurrencesSummary>
  GetVulnerabilityOccurrencesSummary(
      grpc::ClientContext& client_context,
      google::devtools::containeranalysis::v1::
          GetVulnerabilityOccurrencesSummaryRequest const& request) override;

 private:
  std::unique_ptr<
      google::devtools::containeranalysis::v1::ContainerAnalysis::StubInterface>
      grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace containeranalysis_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTAINERANALYSIS_INTERNAL_CONTAINER_ANALYSIS_STUB_H