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
// Generated from:
//   Version: v3
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.3
#ifndef  GOOGLE_YOUTUBE_API_CHANNEL_SECTION_TARGETING_H_
#define  GOOGLE_YOUTUBE_API_CHANNEL_SECTION_TARGETING_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * ChannelSection targeting setting.
 *
 * @ingroup DataObject
 */
class ChannelSectionTargeting : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static ChannelSectionTargeting* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ChannelSectionTargeting(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ChannelSectionTargeting(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~ChannelSectionTargeting();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::ChannelSectionTargeting</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::ChannelSectionTargeting");
  }

  /**
   * Determine if the '<code>countries</code>' attribute was set.
   *
   * @return true if the '<code>countries</code>' attribute was set.
   */
  bool has_countries() const {
    return Storage().isMember("countries");
  }

  /**
   * Clears the '<code>countries</code>' attribute.
   */
  void clear_countries() {
    MutableStorage()->removeMember("countries");
  }


  /**
   * Get a reference to the value of the '<code>countries</code>' attribute.
   */
  const client::JsonCppArray<string > get_countries() const {
     const Json::Value& storage = Storage("countries");
    return client::JsonValueToCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>countries</code>'
   * property.
   *
   * The country the channel section is targeting.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<string > mutable_countries() {
    Json::Value* storage = MutableStorage("countries");
    return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Determine if the '<code>languages</code>' attribute was set.
   *
   * @return true if the '<code>languages</code>' attribute was set.
   */
  bool has_languages() const {
    return Storage().isMember("languages");
  }

  /**
   * Clears the '<code>languages</code>' attribute.
   */
  void clear_languages() {
    MutableStorage()->removeMember("languages");
  }


  /**
   * Get a reference to the value of the '<code>languages</code>' attribute.
   */
  const client::JsonCppArray<string > get_languages() const {
     const Json::Value& storage = Storage("languages");
    return client::JsonValueToCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>languages</code>'
   * property.
   *
   * The language the channel section is targeting.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<string > mutable_languages() {
    Json::Value* storage = MutableStorage("languages");
    return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Determine if the '<code>regions</code>' attribute was set.
   *
   * @return true if the '<code>regions</code>' attribute was set.
   */
  bool has_regions() const {
    return Storage().isMember("regions");
  }

  /**
   * Clears the '<code>regions</code>' attribute.
   */
  void clear_regions() {
    MutableStorage()->removeMember("regions");
  }


  /**
   * Get a reference to the value of the '<code>regions</code>' attribute.
   */
  const client::JsonCppArray<string > get_regions() const {
     const Json::Value& storage = Storage("regions");
    return client::JsonValueToCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>regions</code>' property.
   *
   * The region the channel section is targeting.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<string > mutable_regions() {
    Json::Value* storage = MutableStorage("regions");
    return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<string > >(storage);
  }

 private:
  void operator=(const ChannelSectionTargeting&);
};  // ChannelSectionTargeting
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_CHANNEL_SECTION_TARGETING_H_
