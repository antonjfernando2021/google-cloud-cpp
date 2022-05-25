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
// source: google/cloud/accessapproval/v1/accessapproval.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ACCESSAPPROVAL_ACCESS_APPROVAL_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ACCESSAPPROVAL_ACCESS_APPROVAL_CONNECTION_H

#include "google/cloud/accessapproval/access_approval_connection_idempotency_policy.h"
#include "google/cloud/accessapproval/internal/access_approval_retry_traits.h"
#include "google/cloud/accessapproval/internal/access_approval_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace accessapproval {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using AccessApprovalRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        accessapproval_internal::AccessApprovalRetryTraits>;

using AccessApprovalLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        accessapproval_internal::AccessApprovalRetryTraits>;

using AccessApprovalLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        accessapproval_internal::AccessApprovalRetryTraits>;

class AccessApprovalConnection {
 public:
  virtual ~AccessApprovalConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::accessapproval::v1::ApprovalRequest>
  ListApprovalRequests(
      google::cloud::accessapproval::v1::ListApprovalRequestsMessage request);

  virtual StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
  GetApprovalRequest(
      google::cloud::accessapproval::v1::GetApprovalRequestMessage const&
          request);

  virtual StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
  ApproveApprovalRequest(
      google::cloud::accessapproval::v1::ApproveApprovalRequestMessage const&
          request);

  virtual StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
  DismissApprovalRequest(
      google::cloud::accessapproval::v1::DismissApprovalRequestMessage const&
          request);

  virtual StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
  InvalidateApprovalRequest(
      google::cloud::accessapproval::v1::InvalidateApprovalRequestMessage const&
          request);

  virtual StatusOr<google::cloud::accessapproval::v1::AccessApprovalSettings>
  GetAccessApprovalSettings(
      google::cloud::accessapproval::v1::GetAccessApprovalSettingsMessage const&
          request);

  virtual StatusOr<google::cloud::accessapproval::v1::AccessApprovalSettings>
  UpdateAccessApprovalSettings(
      google::cloud::accessapproval::v1::
          UpdateAccessApprovalSettingsMessage const& request);

  virtual Status DeleteAccessApprovalSettings(
      google::cloud::accessapproval::v1::
          DeleteAccessApprovalSettingsMessage const& request);

  virtual StatusOr<
      google::cloud::accessapproval::v1::AccessApprovalServiceAccount>
  GetAccessApprovalServiceAccount(
      google::cloud::accessapproval::v1::
          GetAccessApprovalServiceAccountMessage const& request);
};

std::shared_ptr<AccessApprovalConnection> MakeAccessApprovalConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace accessapproval
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace accessapproval_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<accessapproval::AccessApprovalConnection>
MakeAccessApprovalConnection(std::shared_ptr<AccessApprovalStub> stub,
                             Options options);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace accessapproval_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ACCESSAPPROVAL_ACCESS_APPROVAL_CONNECTION_H
