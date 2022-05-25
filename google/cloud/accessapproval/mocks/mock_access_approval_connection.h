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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ACCESSAPPROVAL_MOCKS_MOCK_ACCESS_APPROVAL_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ACCESSAPPROVAL_MOCKS_MOCK_ACCESS_APPROVAL_CONNECTION_H

#include "google/cloud/accessapproval/access_approval_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace accessapproval_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class MockAccessApprovalConnection
    : public accessapproval::AccessApprovalConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StreamRange<google::cloud::accessapproval::v1::ApprovalRequest>,
      ListApprovalRequests,
      (google::cloud::accessapproval::v1::ListApprovalRequestsMessage request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>,
      GetApprovalRequest,
      (google::cloud::accessapproval::v1::GetApprovalRequestMessage const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>,
      ApproveApprovalRequest,
      (google::cloud::accessapproval::v1::ApproveApprovalRequestMessage const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>,
      DismissApprovalRequest,
      (google::cloud::accessapproval::v1::DismissApprovalRequestMessage const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>,
              InvalidateApprovalRequest,
              (google::cloud::accessapproval::v1::
                   InvalidateApprovalRequestMessage const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::accessapproval::v1::AccessApprovalSettings>,
      GetAccessApprovalSettings,
      (google::cloud::accessapproval::v1::
           GetAccessApprovalSettingsMessage const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::accessapproval::v1::AccessApprovalSettings>,
      UpdateAccessApprovalSettings,
      (google::cloud::accessapproval::v1::
           UpdateAccessApprovalSettingsMessage const& request),
      (override));

  MOCK_METHOD(Status, DeleteAccessApprovalSettings,
              (google::cloud::accessapproval::v1::
                   DeleteAccessApprovalSettingsMessage const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::accessapproval::v1::AccessApprovalServiceAccount>,
      GetAccessApprovalServiceAccount,
      (google::cloud::accessapproval::v1::
           GetAccessApprovalServiceAccountMessage const& request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace accessapproval_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ACCESSAPPROVAL_MOCKS_MOCK_ACCESS_APPROVAL_CONNECTION_H
