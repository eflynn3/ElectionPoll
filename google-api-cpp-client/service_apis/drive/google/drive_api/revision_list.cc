// Copyright 2010 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

// This code was generated by google-apis-code-generator 1.5.1
//   C++ generator version: 0.1.3

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Drive API (drive/v2)
// Description:
//   The API to interact with Drive.
// Classes:
//   RevisionList
// Documentation:
//   https://developers.google.com/drive/

#include "google/drive_api/revision_list.h"
#include <string>
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/drive_api/revision.h"


#include <string>
#include "googleapis/strings/strcat.h"

namespace google_drive_api {
using namespace googleapis;


// Object factory method (static).
RevisionList* RevisionList::New() {
  return new client::JsonCppCapsule<RevisionList>;
}

// Standard immutable constructor.
RevisionList::RevisionList(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
RevisionList::RevisionList(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
RevisionList::~RevisionList() {
}
}  // namespace google_drive_api
