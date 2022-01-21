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
// source: google/privacy/dlp/v2/dlp.proto

#include "google/cloud/dlp/dlp_connection.h"
#include "google/cloud/dlp/dlp_options.h"
#include "google/cloud/dlp/internal/dlp_option_defaults.h"
#include "google/cloud/dlp/internal/dlp_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace dlp {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DlpServiceConnection::~DlpServiceConnection() = default;

StatusOr<google::privacy::dlp::v2::InspectContentResponse>
DlpServiceConnection::InspectContent(
    google::privacy::dlp::v2::InspectContentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::RedactImageResponse>
DlpServiceConnection::RedactImage(
    google::privacy::dlp::v2::RedactImageRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::DeidentifyContentResponse>
DlpServiceConnection::DeidentifyContent(
    google::privacy::dlp::v2::DeidentifyContentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::ReidentifyContentResponse>
DlpServiceConnection::ReidentifyContent(
    google::privacy::dlp::v2::ReidentifyContentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::ListInfoTypesResponse>
DlpServiceConnection::ListInfoTypes(
    google::privacy::dlp::v2::ListInfoTypesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::InspectTemplate>
DlpServiceConnection::CreateInspectTemplate(
    google::privacy::dlp::v2::CreateInspectTemplateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::InspectTemplate>
DlpServiceConnection::UpdateInspectTemplate(
    google::privacy::dlp::v2::UpdateInspectTemplateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::InspectTemplate>
DlpServiceConnection::GetInspectTemplate(
    google::privacy::dlp::v2::GetInspectTemplateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::privacy::dlp::v2::InspectTemplate>
DlpServiceConnection::ListInspectTemplates(
    google::privacy::dlp::v2::ListInspectTemplatesRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::privacy::dlp::v2::InspectTemplate>>(
      std::move(request),
      [](google::privacy::dlp::v2::ListInspectTemplatesRequest const&) {
        return StatusOr<
            google::privacy::dlp::v2::ListInspectTemplatesResponse>{};
      },
      [](google::privacy::dlp::v2::ListInspectTemplatesResponse const&) {
        return std::vector<google::privacy::dlp::v2::InspectTemplate>();
      });
}

Status DlpServiceConnection::DeleteInspectTemplate(
    google::privacy::dlp::v2::DeleteInspectTemplateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
DlpServiceConnection::CreateDeidentifyTemplate(
    google::privacy::dlp::v2::CreateDeidentifyTemplateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
DlpServiceConnection::UpdateDeidentifyTemplate(
    google::privacy::dlp::v2::UpdateDeidentifyTemplateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
DlpServiceConnection::GetDeidentifyTemplate(
    google::privacy::dlp::v2::GetDeidentifyTemplateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::privacy::dlp::v2::DeidentifyTemplate>
DlpServiceConnection::ListDeidentifyTemplates(
    google::privacy::dlp::v2::ListDeidentifyTemplatesRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::privacy::dlp::v2::DeidentifyTemplate>>(
      std::move(request),
      [](google::privacy::dlp::v2::ListDeidentifyTemplatesRequest const&) {
        return StatusOr<
            google::privacy::dlp::v2::ListDeidentifyTemplatesResponse>{};
      },
      [](google::privacy::dlp::v2::ListDeidentifyTemplatesResponse const&) {
        return std::vector<google::privacy::dlp::v2::DeidentifyTemplate>();
      });
}

Status DlpServiceConnection::DeleteDeidentifyTemplate(
    google::privacy::dlp::v2::DeleteDeidentifyTemplateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::JobTrigger>
DlpServiceConnection::CreateJobTrigger(
    google::privacy::dlp::v2::CreateJobTriggerRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::JobTrigger>
DlpServiceConnection::UpdateJobTrigger(
    google::privacy::dlp::v2::UpdateJobTriggerRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::HybridInspectResponse>
DlpServiceConnection::HybridInspectJobTrigger(
    google::privacy::dlp::v2::HybridInspectJobTriggerRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::JobTrigger>
DlpServiceConnection::GetJobTrigger(
    google::privacy::dlp::v2::GetJobTriggerRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::privacy::dlp::v2::JobTrigger>
DlpServiceConnection::ListJobTriggers(
    google::privacy::dlp::v2::ListJobTriggersRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::privacy::dlp::v2::JobTrigger>>(
      std::move(request),
      [](google::privacy::dlp::v2::ListJobTriggersRequest const&) {
        return StatusOr<google::privacy::dlp::v2::ListJobTriggersResponse>{};
      },
      [](google::privacy::dlp::v2::ListJobTriggersResponse const&) {
        return std::vector<google::privacy::dlp::v2::JobTrigger>();
      });
}

Status DlpServiceConnection::DeleteJobTrigger(
    google::privacy::dlp::v2::DeleteJobTriggerRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::DlpJob>
DlpServiceConnection::ActivateJobTrigger(
    google::privacy::dlp::v2::ActivateJobTriggerRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::DlpJob> DlpServiceConnection::CreateDlpJob(
    google::privacy::dlp::v2::CreateDlpJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::privacy::dlp::v2::DlpJob> DlpServiceConnection::ListDlpJobs(
    google::privacy::dlp::v2::ListDlpJobsRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::privacy::dlp::v2::DlpJob>>(
      std::move(request),
      [](google::privacy::dlp::v2::ListDlpJobsRequest const&) {
        return StatusOr<google::privacy::dlp::v2::ListDlpJobsResponse>{};
      },
      [](google::privacy::dlp::v2::ListDlpJobsResponse const&) {
        return std::vector<google::privacy::dlp::v2::DlpJob>();
      });
}

StatusOr<google::privacy::dlp::v2::DlpJob> DlpServiceConnection::GetDlpJob(
    google::privacy::dlp::v2::GetDlpJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status DlpServiceConnection::DeleteDlpJob(
    google::privacy::dlp::v2::DeleteDlpJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status DlpServiceConnection::CancelDlpJob(
    google::privacy::dlp::v2::CancelDlpJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::StoredInfoType>
DlpServiceConnection::CreateStoredInfoType(
    google::privacy::dlp::v2::CreateStoredInfoTypeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::StoredInfoType>
DlpServiceConnection::UpdateStoredInfoType(
    google::privacy::dlp::v2::UpdateStoredInfoTypeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::StoredInfoType>
DlpServiceConnection::GetStoredInfoType(
    google::privacy::dlp::v2::GetStoredInfoTypeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::privacy::dlp::v2::StoredInfoType>
DlpServiceConnection::ListStoredInfoTypes(
    google::privacy::dlp::v2::ListStoredInfoTypesRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::privacy::dlp::v2::StoredInfoType>>(
      std::move(request),
      [](google::privacy::dlp::v2::ListStoredInfoTypesRequest const&) {
        return StatusOr<
            google::privacy::dlp::v2::ListStoredInfoTypesResponse>{};
      },
      [](google::privacy::dlp::v2::ListStoredInfoTypesResponse const&) {
        return std::vector<google::privacy::dlp::v2::StoredInfoType>();
      });
}

Status DlpServiceConnection::DeleteStoredInfoType(
    google::privacy::dlp::v2::DeleteStoredInfoTypeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::HybridInspectResponse>
DlpServiceConnection::HybridInspectDlpJob(
    google::privacy::dlp::v2::HybridInspectDlpJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status DlpServiceConnection::FinishDlpJob(
    google::privacy::dlp::v2::FinishDlpJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

namespace {
class DlpServiceConnectionImpl : public DlpServiceConnection {
 public:
  DlpServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<dlp_internal::DlpServiceStub> stub,
      Options const& options)
      : background_(std::move(background)),
        stub_(std::move(stub)),
        retry_policy_prototype_(
            options.get<DlpServiceRetryPolicyOption>()->clone()),
        backoff_policy_prototype_(
            options.get<DlpServiceBackoffPolicyOption>()->clone()),
        idempotency_policy_(
            options.get<DlpServiceConnectionIdempotencyPolicyOption>()
                ->clone()) {}

  ~DlpServiceConnectionImpl() override = default;

  StatusOr<google::privacy::dlp::v2::InspectContentResponse> InspectContent(
      google::privacy::dlp::v2::InspectContentRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->InspectContent(request),
        [this](grpc::ClientContext& context,
               google::privacy::dlp::v2::InspectContentRequest const& request) {
          return stub_->InspectContent(context, request);
        },
        request, __func__);
  }

  StatusOr<google::privacy::dlp::v2::RedactImageResponse> RedactImage(
      google::privacy::dlp::v2::RedactImageRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->RedactImage(request),
        [this](grpc::ClientContext& context,
               google::privacy::dlp::v2::RedactImageRequest const& request) {
          return stub_->RedactImage(context, request);
        },
        request, __func__);
  }

  StatusOr<google::privacy::dlp::v2::DeidentifyContentResponse>
  DeidentifyContent(google::privacy::dlp::v2::DeidentifyContentRequest const&
                        request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->DeidentifyContent(request),
        [this](
            grpc::ClientContext& context,
            google::privacy::dlp::v2::DeidentifyContentRequest const& request) {
          return stub_->DeidentifyContent(context, request);
        },
        request, __func__);
  }

  StatusOr<google::privacy::dlp::v2::ReidentifyContentResponse>
  ReidentifyContent(google::privacy::dlp::v2::ReidentifyContentRequest const&
                        request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->ReidentifyContent(request),
        [this](
            grpc::ClientContext& context,
            google::privacy::dlp::v2::ReidentifyContentRequest const& request) {
          return stub_->ReidentifyContent(context, request);
        },
        request, __func__);
  }

  StatusOr<google::privacy::dlp::v2::ListInfoTypesResponse> ListInfoTypes(
      google::privacy::dlp::v2::ListInfoTypesRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->ListInfoTypes(request),
        [this](grpc::ClientContext& context,
               google::privacy::dlp::v2::ListInfoTypesRequest const& request) {
          return stub_->ListInfoTypes(context, request);
        },
        request, __func__);
  }

  StatusOr<google::privacy::dlp::v2::InspectTemplate> CreateInspectTemplate(
      google::privacy::dlp::v2::CreateInspectTemplateRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->CreateInspectTemplate(request),
        [this](grpc::ClientContext& context,
               google::privacy::dlp::v2::CreateInspectTemplateRequest const&
                   request) {
          return stub_->CreateInspectTemplate(context, request);
        },
        request, __func__);
  }

  StatusOr<google::privacy::dlp::v2::InspectTemplate> UpdateInspectTemplate(
      google::privacy::dlp::v2::UpdateInspectTemplateRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->UpdateInspectTemplate(request),
        [this](grpc::ClientContext& context,
               google::privacy::dlp::v2::UpdateInspectTemplateRequest const&
                   request) {
          return stub_->UpdateInspectTemplate(context, request);
        },
        request, __func__);
  }

  StatusOr<google::privacy::dlp::v2::InspectTemplate> GetInspectTemplate(
      google::privacy::dlp::v2::GetInspectTemplateRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->GetInspectTemplate(request),
        [this](grpc::ClientContext& context,
               google::privacy::dlp::v2::GetInspectTemplateRequest const&
                   request) {
          return stub_->GetInspectTemplate(context, request);
        },
        request, __func__);
  }

  StreamRange<google::privacy::dlp::v2::InspectTemplate> ListInspectTemplates(
      google::privacy::dlp::v2::ListInspectTemplatesRequest request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry = std::shared_ptr<DlpServiceRetryPolicy const>(retry_policy());
    auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
    auto idempotency = idempotency_policy()->ListInspectTemplates(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::privacy::dlp::v2::InspectTemplate>>(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name](
            google::privacy::dlp::v2::ListInspectTemplatesRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](
                  grpc::ClientContext& context,
                  google::privacy::dlp::v2::ListInspectTemplatesRequest const&
                      request) {
                return stub->ListInspectTemplates(context, request);
              },
              r, function_name);
        },
        [](google::privacy::dlp::v2::ListInspectTemplatesResponse r) {
          std::vector<google::privacy::dlp::v2::InspectTemplate> result(
              r.inspect_templates().size());
          auto& messages = *r.mutable_inspect_templates();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  Status DeleteInspectTemplate(
      google::privacy::dlp::v2::DeleteInspectTemplateRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->DeleteInspectTemplate(request),
        [this](grpc::ClientContext& context,
               google::privacy::dlp::v2::DeleteInspectTemplateRequest const&
                   request) {
          return stub_->DeleteInspectTemplate(context, request);
        },
        request, __func__);
  }

  StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
  CreateDeidentifyTemplate(
      google::privacy::dlp::v2::CreateDeidentifyTemplateRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->CreateDeidentifyTemplate(request),
        [this](grpc::ClientContext& context,
               google::privacy::dlp::v2::CreateDeidentifyTemplateRequest const&
                   request) {
          return stub_->CreateDeidentifyTemplate(context, request);
        },
        request, __func__);
  }

  StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
  UpdateDeidentifyTemplate(
      google::privacy::dlp::v2::UpdateDeidentifyTemplateRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->UpdateDeidentifyTemplate(request),
        [this](grpc::ClientContext& context,
               google::privacy::dlp::v2::UpdateDeidentifyTemplateRequest const&
                   request) {
          return stub_->UpdateDeidentifyTemplate(context, request);
        },
        request, __func__);
  }

  StatusOr<google::privacy::dlp::v2::DeidentifyTemplate> GetDeidentifyTemplate(
      google::privacy::dlp::v2::GetDeidentifyTemplateRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->GetDeidentifyTemplate(request),
        [this](grpc::ClientContext& context,
               google::privacy::dlp::v2::GetDeidentifyTemplateRequest const&
                   request) {
          return stub_->GetDeidentifyTemplate(context, request);
        },
        request, __func__);
  }

  StreamRange<google::privacy::dlp::v2::DeidentifyTemplate>
  ListDeidentifyTemplates(
      google::privacy::dlp::v2::ListDeidentifyTemplatesRequest request)
      override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry = std::shared_ptr<DlpServiceRetryPolicy const>(retry_policy());
    auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
    auto idempotency = idempotency_policy()->ListDeidentifyTemplates(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::privacy::dlp::v2::DeidentifyTemplate>>(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name](
            google::privacy::dlp::v2::ListDeidentifyTemplatesRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](grpc::ClientContext& context,
                     google::privacy::dlp::v2::
                         ListDeidentifyTemplatesRequest const& request) {
                return stub->ListDeidentifyTemplates(context, request);
              },
              r, function_name);
        },
        [](google::privacy::dlp::v2::ListDeidentifyTemplatesResponse r) {
          std::vector<google::privacy::dlp::v2::DeidentifyTemplate> result(
              r.deidentify_templates().size());
          auto& messages = *r.mutable_deidentify_templates();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  Status DeleteDeidentifyTemplate(
      google::privacy::dlp::v2::DeleteDeidentifyTemplateRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->DeleteDeidentifyTemplate(request),
        [this](grpc::ClientContext& context,
               google::privacy::dlp::v2::DeleteDeidentifyTemplateRequest const&
                   request) {
          return stub_->DeleteDeidentifyTemplate(context, request);
        },
        request, __func__);
  }

  StatusOr<google::privacy::dlp::v2::JobTrigger> CreateJobTrigger(
      google::privacy::dlp::v2::CreateJobTriggerRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->CreateJobTrigger(request),
        [this](
            grpc::ClientContext& context,
            google::privacy::dlp::v2::CreateJobTriggerRequest const& request) {
          return stub_->CreateJobTrigger(context, request);
        },
        request, __func__);
  }

  StatusOr<google::privacy::dlp::v2::JobTrigger> UpdateJobTrigger(
      google::privacy::dlp::v2::UpdateJobTriggerRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->UpdateJobTrigger(request),
        [this](
            grpc::ClientContext& context,
            google::privacy::dlp::v2::UpdateJobTriggerRequest const& request) {
          return stub_->UpdateJobTrigger(context, request);
        },
        request, __func__);
  }

  StatusOr<google::privacy::dlp::v2::HybridInspectResponse>
  HybridInspectJobTrigger(
      google::privacy::dlp::v2::HybridInspectJobTriggerRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->HybridInspectJobTrigger(request),
        [this](grpc::ClientContext& context,
               google::privacy::dlp::v2::HybridInspectJobTriggerRequest const&
                   request) {
          return stub_->HybridInspectJobTrigger(context, request);
        },
        request, __func__);
  }

  StatusOr<google::privacy::dlp::v2::JobTrigger> GetJobTrigger(
      google::privacy::dlp::v2::GetJobTriggerRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->GetJobTrigger(request),
        [this](grpc::ClientContext& context,
               google::privacy::dlp::v2::GetJobTriggerRequest const& request) {
          return stub_->GetJobTrigger(context, request);
        },
        request, __func__);
  }

  StreamRange<google::privacy::dlp::v2::JobTrigger> ListJobTriggers(
      google::privacy::dlp::v2::ListJobTriggersRequest request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry = std::shared_ptr<DlpServiceRetryPolicy const>(retry_policy());
    auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
    auto idempotency = idempotency_policy()->ListJobTriggers(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::privacy::dlp::v2::JobTrigger>>(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name](
            google::privacy::dlp::v2::ListJobTriggersRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](grpc::ClientContext& context,
                     google::privacy::dlp::v2::ListJobTriggersRequest const&
                         request) {
                return stub->ListJobTriggers(context, request);
              },
              r, function_name);
        },
        [](google::privacy::dlp::v2::ListJobTriggersResponse r) {
          std::vector<google::privacy::dlp::v2::JobTrigger> result(
              r.job_triggers().size());
          auto& messages = *r.mutable_job_triggers();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  Status DeleteJobTrigger(
      google::privacy::dlp::v2::DeleteJobTriggerRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->DeleteJobTrigger(request),
        [this](
            grpc::ClientContext& context,
            google::privacy::dlp::v2::DeleteJobTriggerRequest const& request) {
          return stub_->DeleteJobTrigger(context, request);
        },
        request, __func__);
  }

  StatusOr<google::privacy::dlp::v2::DlpJob> ActivateJobTrigger(
      google::privacy::dlp::v2::ActivateJobTriggerRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->ActivateJobTrigger(request),
        [this](grpc::ClientContext& context,
               google::privacy::dlp::v2::ActivateJobTriggerRequest const&
                   request) {
          return stub_->ActivateJobTrigger(context, request);
        },
        request, __func__);
  }

  StatusOr<google::privacy::dlp::v2::DlpJob> CreateDlpJob(
      google::privacy::dlp::v2::CreateDlpJobRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->CreateDlpJob(request),
        [this](grpc::ClientContext& context,
               google::privacy::dlp::v2::CreateDlpJobRequest const& request) {
          return stub_->CreateDlpJob(context, request);
        },
        request, __func__);
  }

  StreamRange<google::privacy::dlp::v2::DlpJob> ListDlpJobs(
      google::privacy::dlp::v2::ListDlpJobsRequest request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry = std::shared_ptr<DlpServiceRetryPolicy const>(retry_policy());
    auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
    auto idempotency = idempotency_policy()->ListDlpJobs(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::privacy::dlp::v2::DlpJob>>(
        std::move(request),
        [stub, retry, backoff, idempotency,
         function_name](google::privacy::dlp::v2::ListDlpJobsRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](
                  grpc::ClientContext& context,
                  google::privacy::dlp::v2::ListDlpJobsRequest const& request) {
                return stub->ListDlpJobs(context, request);
              },
              r, function_name);
        },
        [](google::privacy::dlp::v2::ListDlpJobsResponse r) {
          std::vector<google::privacy::dlp::v2::DlpJob> result(r.jobs().size());
          auto& messages = *r.mutable_jobs();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  StatusOr<google::privacy::dlp::v2::DlpJob> GetDlpJob(
      google::privacy::dlp::v2::GetDlpJobRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->GetDlpJob(request),
        [this](grpc::ClientContext& context,
               google::privacy::dlp::v2::GetDlpJobRequest const& request) {
          return stub_->GetDlpJob(context, request);
        },
        request, __func__);
  }

  Status DeleteDlpJob(
      google::privacy::dlp::v2::DeleteDlpJobRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->DeleteDlpJob(request),
        [this](grpc::ClientContext& context,
               google::privacy::dlp::v2::DeleteDlpJobRequest const& request) {
          return stub_->DeleteDlpJob(context, request);
        },
        request, __func__);
  }

  Status CancelDlpJob(
      google::privacy::dlp::v2::CancelDlpJobRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->CancelDlpJob(request),
        [this](grpc::ClientContext& context,
               google::privacy::dlp::v2::CancelDlpJobRequest const& request) {
          return stub_->CancelDlpJob(context, request);
        },
        request, __func__);
  }

  StatusOr<google::privacy::dlp::v2::StoredInfoType> CreateStoredInfoType(
      google::privacy::dlp::v2::CreateStoredInfoTypeRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->CreateStoredInfoType(request),
        [this](grpc::ClientContext& context,
               google::privacy::dlp::v2::CreateStoredInfoTypeRequest const&
                   request) {
          return stub_->CreateStoredInfoType(context, request);
        },
        request, __func__);
  }

  StatusOr<google::privacy::dlp::v2::StoredInfoType> UpdateStoredInfoType(
      google::privacy::dlp::v2::UpdateStoredInfoTypeRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->UpdateStoredInfoType(request),
        [this](grpc::ClientContext& context,
               google::privacy::dlp::v2::UpdateStoredInfoTypeRequest const&
                   request) {
          return stub_->UpdateStoredInfoType(context, request);
        },
        request, __func__);
  }

  StatusOr<google::privacy::dlp::v2::StoredInfoType> GetStoredInfoType(
      google::privacy::dlp::v2::GetStoredInfoTypeRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->GetStoredInfoType(request),
        [this](
            grpc::ClientContext& context,
            google::privacy::dlp::v2::GetStoredInfoTypeRequest const& request) {
          return stub_->GetStoredInfoType(context, request);
        },
        request, __func__);
  }

  StreamRange<google::privacy::dlp::v2::StoredInfoType> ListStoredInfoTypes(
      google::privacy::dlp::v2::ListStoredInfoTypesRequest request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry = std::shared_ptr<DlpServiceRetryPolicy const>(retry_policy());
    auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
    auto idempotency = idempotency_policy()->ListStoredInfoTypes(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::privacy::dlp::v2::StoredInfoType>>(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name](
            google::privacy::dlp::v2::ListStoredInfoTypesRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](grpc::ClientContext& context,
                     google::privacy::dlp::v2::ListStoredInfoTypesRequest const&
                         request) {
                return stub->ListStoredInfoTypes(context, request);
              },
              r, function_name);
        },
        [](google::privacy::dlp::v2::ListStoredInfoTypesResponse r) {
          std::vector<google::privacy::dlp::v2::StoredInfoType> result(
              r.stored_info_types().size());
          auto& messages = *r.mutable_stored_info_types();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  Status DeleteStoredInfoType(
      google::privacy::dlp::v2::DeleteStoredInfoTypeRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->DeleteStoredInfoType(request),
        [this](grpc::ClientContext& context,
               google::privacy::dlp::v2::DeleteStoredInfoTypeRequest const&
                   request) {
          return stub_->DeleteStoredInfoType(context, request);
        },
        request, __func__);
  }

  StatusOr<google::privacy::dlp::v2::HybridInspectResponse> HybridInspectDlpJob(
      google::privacy::dlp::v2::HybridInspectDlpJobRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->HybridInspectDlpJob(request),
        [this](grpc::ClientContext& context,
               google::privacy::dlp::v2::HybridInspectDlpJobRequest const&
                   request) {
          return stub_->HybridInspectDlpJob(context, request);
        },
        request, __func__);
  }

  Status FinishDlpJob(
      google::privacy::dlp::v2::FinishDlpJobRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->FinishDlpJob(request),
        [this](grpc::ClientContext& context,
               google::privacy::dlp::v2::FinishDlpJobRequest const& request) {
          return stub_->FinishDlpJob(context, request);
        },
        request, __func__);
  }

 private:
  std::unique_ptr<DlpServiceRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<DlpServiceRetryPolicyOption>()) {
      return options.get<DlpServiceRetryPolicyOption>()->clone();
    }
    return retry_policy_prototype_->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<DlpServiceBackoffPolicyOption>()) {
      return options.get<DlpServiceBackoffPolicyOption>()->clone();
    }
    return backoff_policy_prototype_->clone();
  }

  std::unique_ptr<DlpServiceConnectionIdempotencyPolicy> idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<DlpServiceConnectionIdempotencyPolicyOption>()) {
      return options.get<DlpServiceConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return idempotency_policy_->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<dlp_internal::DlpServiceStub> stub_;
  std::unique_ptr<DlpServiceRetryPolicy const> retry_policy_prototype_;
  std::unique_ptr<BackoffPolicy const> backoff_policy_prototype_;
  std::unique_ptr<DlpServiceConnectionIdempotencyPolicy> idempotency_policy_;
};
}  // namespace

std::shared_ptr<DlpServiceConnection> MakeDlpServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 DlpServicePolicyOptionList>(options, __func__);
  options = dlp_internal::DlpServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub =
      dlp_internal::CreateDefaultDlpServiceStub(background->cq(), options);
  return std::make_shared<DlpServiceConnectionImpl>(std::move(background),
                                                    std::move(stub), options);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dlp
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace dlp_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<dlp::DlpServiceConnection> MakeDlpServiceConnection(
    std::shared_ptr<DlpServiceStub> stub, Options options) {
  options = DlpServiceDefaultOptions(std::move(options));
  return std::make_shared<dlp::DlpServiceConnectionImpl>(
      internal::MakeBackgroundThreadsFactory(options)(), std::move(stub),
      std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dlp_internal
}  // namespace cloud
}  // namespace google