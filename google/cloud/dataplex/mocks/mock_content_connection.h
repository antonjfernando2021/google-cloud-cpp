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
// source: google/cloud/dataplex/v1/content.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_MOCKS_MOCK_CONTENT_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_MOCKS_MOCK_CONTENT_CONNECTION_H

#include "google/cloud/dataplex/content_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace dataplex_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class MockContentServiceConnection : public dataplex::ContentServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dataplex::v1::Content>, CreateContent,
      (google::cloud::dataplex::v1::CreateContentRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dataplex::v1::Content>, UpdateContent,
      (google::cloud::dataplex::v1::UpdateContentRequest const& request),
      (override));

  MOCK_METHOD(
      Status, DeleteContent,
      (google::cloud::dataplex::v1::DeleteContentRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::dataplex::v1::Content>, GetContent,
              (google::cloud::dataplex::v1::GetContentRequest const& request),
              (override));

  MOCK_METHOD(StreamRange<google::cloud::dataplex::v1::Content>, ListContent,
              (google::cloud::dataplex::v1::ListContentRequest request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_MOCKS_MOCK_CONTENT_CONNECTION_H