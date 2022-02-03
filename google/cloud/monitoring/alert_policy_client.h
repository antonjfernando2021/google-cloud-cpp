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
// source: google/monitoring/v3/alert_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_ALERT_POLICY_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_ALERT_POLICY_CLIENT_H

#include "google/cloud/monitoring/alert_policy_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace monitoring {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// The AlertPolicyService API is used to manage (list, create, delete,
/// edit) alert policies in Stackdriver Monitoring. An alerting policy is
/// a description of the conditions under which some aspect of your
/// system is considered to be "unhealthy" and the ways to notify
/// people or services about this state. In addition to using this API, alert
/// policies can also be managed through
/// [Stackdriver Monitoring](https://cloud.google.com/monitoring/docs/),
/// which can be reached by clicking the "Monitoring" tab in
/// [Cloud Console](https://console.cloud.google.com/).
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class AlertPolicyServiceClient {
 public:
  explicit AlertPolicyServiceClient(
      std::shared_ptr<AlertPolicyServiceConnection> connection,
      Options options = {});
  ~AlertPolicyServiceClient();

  //@{
  // @name Copy and move support
  AlertPolicyServiceClient(AlertPolicyServiceClient const&) = default;
  AlertPolicyServiceClient& operator=(AlertPolicyServiceClient const&) =
      default;
  AlertPolicyServiceClient(AlertPolicyServiceClient&&) = default;
  AlertPolicyServiceClient& operator=(AlertPolicyServiceClient&&) = default;
  //@}

  //@{
  // @name Equality
  friend bool operator==(AlertPolicyServiceClient const& a,
                         AlertPolicyServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(AlertPolicyServiceClient const& a,
                         AlertPolicyServiceClient const& b) {
    return !(a == b);
  }
  //@}

  ///
  /// Lists the existing alerting policies for the workspace.
  ///
  /// @param name  Required. The
  /// [project](https://cloud.google.com/monitoring/api/v3#project_name)
  ///  whose alert policies are to be listed. The format is:
  ///      projects/[PROJECT_ID_OR_NUMBER]
  ///  Note that this field names the parent container in which the alerting
  ///  policies to be listed are stored. To retrieve a single alerting policy
  ///  by name, use the
  ///  [GetAlertPolicy][google.monitoring.v3.AlertPolicyService.GetAlertPolicy]
  ///  operation, instead.
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::monitoring::v3::AlertPolicy,google/monitoring/v3/alert.proto#L39}
  ///
  /// [google.monitoring.v3.ListAlertPoliciesRequest]:
  /// @googleapis_reference_link{google/monitoring/v3/alert_service.proto#L138}
  /// [google.monitoring.v3.AlertPolicy]:
  /// @googleapis_reference_link{google/monitoring/v3/alert.proto#L39}
  ///
  StreamRange<google::monitoring::v3::AlertPolicy> ListAlertPolicies(
      std::string const& name, Options options = {});

  ///
  /// Lists the existing alerting policies for the workspace.
  ///
  /// @param request
  /// @googleapis_link{google::monitoring::v3::ListAlertPoliciesRequest,google/monitoring/v3/alert_service.proto#L138}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::monitoring::v3::AlertPolicy,google/monitoring/v3/alert.proto#L39}
  ///
  /// [google.monitoring.v3.ListAlertPoliciesRequest]:
  /// @googleapis_reference_link{google/monitoring/v3/alert_service.proto#L138}
  /// [google.monitoring.v3.AlertPolicy]:
  /// @googleapis_reference_link{google/monitoring/v3/alert.proto#L39}
  ///
  StreamRange<google::monitoring::v3::AlertPolicy> ListAlertPolicies(
      google::monitoring::v3::ListAlertPoliciesRequest request,
      Options options = {});

  ///
  /// Gets a single alerting policy.
  ///
  /// @param name  Required. The alerting policy to retrieve. The format is:
  ///      projects/[PROJECT_ID_OR_NUMBER]/alertPolicies/[ALERT_POLICY_ID]
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::monitoring::v3::AlertPolicy,google/monitoring/v3/alert.proto#L39}
  ///
  /// [google.monitoring.v3.GetAlertPolicyRequest]:
  /// @googleapis_reference_link{google/monitoring/v3/alert_service.proto#L125}
  /// [google.monitoring.v3.AlertPolicy]:
  /// @googleapis_reference_link{google/monitoring/v3/alert.proto#L39}
  ///
  StatusOr<google::monitoring::v3::AlertPolicy> GetAlertPolicy(
      std::string const& name, Options options = {});

  ///
  /// Gets a single alerting policy.
  ///
  /// @param request
  /// @googleapis_link{google::monitoring::v3::GetAlertPolicyRequest,google/monitoring/v3/alert_service.proto#L125}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::monitoring::v3::AlertPolicy,google/monitoring/v3/alert.proto#L39}
  ///
  /// [google.monitoring.v3.GetAlertPolicyRequest]:
  /// @googleapis_reference_link{google/monitoring/v3/alert_service.proto#L125}
  /// [google.monitoring.v3.AlertPolicy]:
  /// @googleapis_reference_link{google/monitoring/v3/alert.proto#L39}
  ///
  StatusOr<google::monitoring::v3::AlertPolicy> GetAlertPolicy(
      google::monitoring::v3::GetAlertPolicyRequest const& request,
      Options options = {});

  ///
  /// Creates a new alerting policy.
  ///
  /// @param name  Required. The
  /// [project](https://cloud.google.com/monitoring/api/v3#project_name) in
  ///  which to create the alerting policy. The format is:
  ///      projects/[PROJECT_ID_OR_NUMBER]
  ///  Note that this field names the parent container in which the alerting
  ///  policy will be written, not the name of the created policy. |name| must
  ///  be a host project of a workspace, otherwise INVALID_ARGUMENT error will
  ///  return. The alerting policy that is returned will have a name that
  ///  contains a normalized representation of this name as a prefix but adds a
  ///  suffix of the form `/alertPolicies/[ALERT_POLICY_ID]`, identifying the
  ///  policy in the container.
  /// @param alert_policy  Required. The requested alerting policy. You should
  /// omit the `name` field in this
  ///  policy. The name will be returned in the new policy, including
  ///  a new `[ALERT_POLICY_ID]` value.
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::monitoring::v3::AlertPolicy,google/monitoring/v3/alert.proto#L39}
  ///
  /// [google.monitoring.v3.CreateAlertPolicyRequest]:
  /// @googleapis_reference_link{google/monitoring/v3/alert_service.proto#L98}
  /// [google.monitoring.v3.AlertPolicy]:
  /// @googleapis_reference_link{google/monitoring/v3/alert.proto#L39}
  ///
  StatusOr<google::monitoring::v3::AlertPolicy> CreateAlertPolicy(
      std::string const& name,
      google::monitoring::v3::AlertPolicy const& alert_policy,
      Options options = {});

  ///
  /// Creates a new alerting policy.
  ///
  /// @param request
  /// @googleapis_link{google::monitoring::v3::CreateAlertPolicyRequest,google/monitoring/v3/alert_service.proto#L98}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::monitoring::v3::AlertPolicy,google/monitoring/v3/alert.proto#L39}
  ///
  /// [google.monitoring.v3.CreateAlertPolicyRequest]:
  /// @googleapis_reference_link{google/monitoring/v3/alert_service.proto#L98}
  /// [google.monitoring.v3.AlertPolicy]:
  /// @googleapis_reference_link{google/monitoring/v3/alert.proto#L39}
  ///
  StatusOr<google::monitoring::v3::AlertPolicy> CreateAlertPolicy(
      google::monitoring::v3::CreateAlertPolicyRequest const& request,
      Options options = {});

  ///
  /// Deletes an alerting policy.
  ///
  /// @param name  Required. The alerting policy to delete. The format is:
  ///      projects/[PROJECT_ID_OR_NUMBER]/alertPolicies/[ALERT_POLICY_ID]
  ///  For more information, see
  ///  [AlertPolicy][google.monitoring.v3.AlertPolicy].
  /// @param options  Optional. Operation options.
  ///
  /// [google.monitoring.v3.DeleteAlertPolicyRequest]:
  /// @googleapis_reference_link{google/monitoring/v3/alert_service.proto#L228}
  ///
  Status DeleteAlertPolicy(std::string const& name, Options options = {});

  ///
  /// Deletes an alerting policy.
  ///
  /// @param request
  /// @googleapis_link{google::monitoring::v3::DeleteAlertPolicyRequest,google/monitoring/v3/alert_service.proto#L228}
  /// @param options  Optional. Operation options.
  ///
  /// [google.monitoring.v3.DeleteAlertPolicyRequest]:
  /// @googleapis_reference_link{google/monitoring/v3/alert_service.proto#L228}
  ///
  Status DeleteAlertPolicy(
      google::monitoring::v3::DeleteAlertPolicyRequest const& request,
      Options options = {});

  ///
  /// Updates an alerting policy. You can either replace the entire policy with
  /// a new one or replace only certain fields in the current alerting policy by
  /// specifying the fields to be updated via `updateMask`. Returns the
  /// updated alerting policy.
  ///
  /// @param update_mask  Optional. A list of alerting policy field names. If
  /// this field is not
  ///  empty, each listed field in the existing alerting policy is set to the
  ///  value of the corresponding field in the supplied policy (`alert_policy`),
  ///  or to the field's default value if the field is not in the supplied
  ///  alerting policy.  Fields not listed retain their previous value.
  ///  Examples of valid field masks include `display_name`, `documentation`,
  ///  `documentation.content`, `documentation.mime_type`, `user_labels`,
  ///  `user_label.nameofkey`, `enabled`, `conditions`, `combiner`, etc.
  ///  If this field is empty, then the supplied alerting policy replaces the
  ///  existing policy. It is the same as deleting the existing policy and
  ///  adding the supplied policy, except for the following:
  ///  +   The new policy will have the same `[ALERT_POLICY_ID]` as the former
  ///      policy. This gives you continuity with the former policy in your
  ///      notifications and incidents.
  ///  +   Conditions in the new policy will keep their former `[CONDITION_ID]`
  ///  if
  ///      the supplied condition includes the `name` field with that
  ///      `[CONDITION_ID]`. If the supplied condition omits the `name` field,
  ///      then a new `[CONDITION_ID]` is created.
  /// @param alert_policy  Required. The updated alerting policy or the updated
  /// values for the
  ///  fields listed in `update_mask`.
  ///  If `update_mask` is not empty, any fields in this policy that are
  ///  not in `update_mask` are ignored.
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::monitoring::v3::AlertPolicy,google/monitoring/v3/alert.proto#L39}
  ///
  /// [google.monitoring.v3.UpdateAlertPolicyRequest]:
  /// @googleapis_reference_link{google/monitoring/v3/alert_service.proto#L196}
  /// [google.monitoring.v3.AlertPolicy]:
  /// @googleapis_reference_link{google/monitoring/v3/alert.proto#L39}
  ///
  StatusOr<google::monitoring::v3::AlertPolicy> UpdateAlertPolicy(
      google::protobuf::FieldMask const& update_mask,
      google::monitoring::v3::AlertPolicy const& alert_policy,
      Options options = {});

  ///
  /// Updates an alerting policy. You can either replace the entire policy with
  /// a new one or replace only certain fields in the current alerting policy by
  /// specifying the fields to be updated via `updateMask`. Returns the
  /// updated alerting policy.
  ///
  /// @param request
  /// @googleapis_link{google::monitoring::v3::UpdateAlertPolicyRequest,google/monitoring/v3/alert_service.proto#L196}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::monitoring::v3::AlertPolicy,google/monitoring/v3/alert.proto#L39}
  ///
  /// [google.monitoring.v3.UpdateAlertPolicyRequest]:
  /// @googleapis_reference_link{google/monitoring/v3/alert_service.proto#L196}
  /// [google.monitoring.v3.AlertPolicy]:
  /// @googleapis_reference_link{google/monitoring/v3/alert.proto#L39}
  ///
  StatusOr<google::monitoring::v3::AlertPolicy> UpdateAlertPolicy(
      google::monitoring::v3::UpdateAlertPolicyRequest const& request,
      Options options = {});

 private:
  std::shared_ptr<AlertPolicyServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_ALERT_POLICY_CLIENT_H