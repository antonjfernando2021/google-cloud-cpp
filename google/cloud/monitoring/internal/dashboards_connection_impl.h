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
// source: google/monitoring/dashboard/v1/dashboards_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_INTERNAL_DASHBOARDS_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_INTERNAL_DASHBOARDS_CONNECTION_IMPL_H

#include "google/cloud/monitoring/dashboards_connection.h"
#include "google/cloud/monitoring/dashboards_connection_idempotency_policy.h"
#include "google/cloud/monitoring/dashboards_options.h"
#include "google/cloud/monitoring/internal/dashboards_retry_traits.h"
#include "google/cloud/monitoring/internal/dashboards_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace monitoring_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DashboardsServiceConnectionImpl
    : public monitoring::DashboardsServiceConnection {
 public:
  ~DashboardsServiceConnectionImpl() override = default;

  DashboardsServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<monitoring_internal::DashboardsServiceStub> stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::monitoring::dashboard::v1::Dashboard> CreateDashboard(
      google::monitoring::dashboard::v1::CreateDashboardRequest const& request)
      override;

  StreamRange<google::monitoring::dashboard::v1::Dashboard> ListDashboards(
      google::monitoring::dashboard::v1::ListDashboardsRequest request)
      override;

  StatusOr<google::monitoring::dashboard::v1::Dashboard> GetDashboard(
      google::monitoring::dashboard::v1::GetDashboardRequest const& request)
      override;

  Status DeleteDashboard(
      google::monitoring::dashboard::v1::DeleteDashboardRequest const& request)
      override;

  StatusOr<google::monitoring::dashboard::v1::Dashboard> UpdateDashboard(
      google::monitoring::dashboard::v1::UpdateDashboardRequest const& request)
      override;

 private:
  std::unique_ptr<monitoring::DashboardsServiceRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<monitoring::DashboardsServiceRetryPolicyOption>()) {
      return options.get<monitoring::DashboardsServiceRetryPolicyOption>()
          ->clone();
    }
    return options_.get<monitoring::DashboardsServiceRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<monitoring::DashboardsServiceBackoffPolicyOption>()) {
      return options.get<monitoring::DashboardsServiceBackoffPolicyOption>()
          ->clone();
    }
    return options_.get<monitoring::DashboardsServiceBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<monitoring::DashboardsServiceConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            monitoring::DashboardsServiceConnectionIdempotencyPolicyOption>()) {
      return options
          .get<monitoring::DashboardsServiceConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<monitoring::DashboardsServiceConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<monitoring_internal::DashboardsServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_INTERNAL_DASHBOARDS_CONNECTION_IMPL_H