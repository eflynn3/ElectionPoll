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
//   YouTube Data API (youtube/v3)
// Description:
//   Programmatic access to YouTube features.
// Classes:
//   LocalizedProperty
// Documentation:
//   https://developers.google.com/youtube/v3

#include "google/youtube_api/localized_property.h"
#include <string>
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/youtube_api/language_tag.h"
#include "google/youtube_api/localized_string.h"


#include <string>
#include "googleapis/strings/strcat.h"

namespace google_youtube_api {
using namespace googleapis;


// Object factory method (static).
LocalizedProperty* LocalizedProperty::New() {
  return new client::JsonCppCapsule<LocalizedProperty>;
}

// Standard immutable constructor.
LocalizedProperty::LocalizedProperty(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
LocalizedProperty::LocalizedProperty(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
LocalizedProperty::~LocalizedProperty() {
}
}  // namespace google_youtube_api
