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
// source: google/cloud/dialogflow/cx/v3/environment.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_ENVIRONMENTS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_ENVIRONMENTS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/dialogflow/cx/v3/environment.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class EnvironmentsConnectionIdempotencyPolicy {
 public:
  virtual ~EnvironmentsConnectionIdempotencyPolicy() = 0;

  /// Create a new copy of this object.
  virtual std::unique_ptr<EnvironmentsConnectionIdempotencyPolicy> clone()
      const = 0;

  virtual google::cloud::Idempotency ListEnvironments(
      google::cloud::dialogflow::cx::v3::ListEnvironmentsRequest request) = 0;

  virtual google::cloud::Idempotency GetEnvironment(
      google::cloud::dialogflow::cx::v3::GetEnvironmentRequest const&
          request) = 0;

  virtual google::cloud::Idempotency CreateEnvironment(
      google::cloud::dialogflow::cx::v3::CreateEnvironmentRequest const&
          request) = 0;

  virtual google::cloud::Idempotency UpdateEnvironment(
      google::cloud::dialogflow::cx::v3::UpdateEnvironmentRequest const&
          request) = 0;

  virtual google::cloud::Idempotency DeleteEnvironment(
      google::cloud::dialogflow::cx::v3::DeleteEnvironmentRequest const&
          request) = 0;

  virtual google::cloud::Idempotency LookupEnvironmentHistory(
      google::cloud::dialogflow::cx::v3::LookupEnvironmentHistoryRequest
          request) = 0;

  virtual google::cloud::Idempotency RunContinuousTest(
      google::cloud::dialogflow::cx::v3::RunContinuousTestRequest const&
          request) = 0;

  virtual google::cloud::Idempotency ListContinuousTestResults(
      google::cloud::dialogflow::cx::v3::ListContinuousTestResultsRequest
          request) = 0;

  virtual google::cloud::Idempotency DeployFlow(
      google::cloud::dialogflow::cx::v3::DeployFlowRequest const& request) = 0;
};

std::unique_ptr<EnvironmentsConnectionIdempotencyPolicy>
MakeDefaultEnvironmentsConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_ENVIRONMENTS_CONNECTION_IDEMPOTENCY_POLICY_H