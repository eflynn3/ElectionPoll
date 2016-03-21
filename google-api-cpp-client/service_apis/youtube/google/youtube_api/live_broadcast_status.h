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
#ifndef  GOOGLE_YOUTUBE_API_LIVE_BROADCAST_STATUS_H_
#define  GOOGLE_YOUTUBE_API_LIVE_BROADCAST_STATUS_H_

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
 * No description provided.
 *
 * @ingroup DataObject
 */
class LiveBroadcastStatus : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static LiveBroadcastStatus* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit LiveBroadcastStatus(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit LiveBroadcastStatus(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~LiveBroadcastStatus();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::LiveBroadcastStatus</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::LiveBroadcastStatus");
  }

  /**
   * Determine if the '<code>lifeCycleStatus</code>' attribute was set.
   *
   * @return true if the '<code>lifeCycleStatus</code>' attribute was set.
   */
  bool has_life_cycle_status() const {
    return Storage().isMember("lifeCycleStatus");
  }

  /**
   * Clears the '<code>lifeCycleStatus</code>' attribute.
   */
  void clear_life_cycle_status() {
    MutableStorage()->removeMember("lifeCycleStatus");
  }


  /**
   * Get the value of the '<code>lifeCycleStatus</code>' attribute.
   */
  const StringPiece get_life_cycle_status() const {
    const Json::Value& v = Storage("lifeCycleStatus");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>lifeCycleStatus</code>' attribute.
   *
   * The broadcast's status. The status can be updated using the API's
   * liveBroadcasts.transition method.
   *
   * @param[in] value The new value.
   */
  void set_life_cycle_status(const StringPiece& value) {
    *MutableStorage("lifeCycleStatus") = value.data();
  }

  /**
   * Determine if the '<code>liveBroadcastPriority</code>' attribute was set.
   *
   * @return true if the '<code>liveBroadcastPriority</code>' attribute was set.
   */
  bool has_live_broadcast_priority() const {
    return Storage().isMember("liveBroadcastPriority");
  }

  /**
   * Clears the '<code>liveBroadcastPriority</code>' attribute.
   */
  void clear_live_broadcast_priority() {
    MutableStorage()->removeMember("liveBroadcastPriority");
  }


  /**
   * Get the value of the '<code>liveBroadcastPriority</code>' attribute.
   */
  const StringPiece get_live_broadcast_priority() const {
    const Json::Value& v = Storage("liveBroadcastPriority");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>liveBroadcastPriority</code>' attribute.
   *
   * Priority of the live broadcast event (internal state).
   *
   * @param[in] value The new value.
   */
  void set_live_broadcast_priority(const StringPiece& value) {
    *MutableStorage("liveBroadcastPriority") = value.data();
  }

  /**
   * Determine if the '<code>privacyStatus</code>' attribute was set.
   *
   * @return true if the '<code>privacyStatus</code>' attribute was set.
   */
  bool has_privacy_status() const {
    return Storage().isMember("privacyStatus");
  }

  /**
   * Clears the '<code>privacyStatus</code>' attribute.
   */
  void clear_privacy_status() {
    MutableStorage()->removeMember("privacyStatus");
  }


  /**
   * Get the value of the '<code>privacyStatus</code>' attribute.
   */
  const StringPiece get_privacy_status() const {
    const Json::Value& v = Storage("privacyStatus");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>privacyStatus</code>' attribute.
   *
   * The broadcast's privacy status. Note that the broadcast represents exactly
   * one YouTube video, so the privacy settings are identical to those supported
   * for videos. In addition, you can set this field by modifying the broadcast
   * resource or by setting the privacyStatus field of the corresponding video
   * resource.
   *
   * @param[in] value The new value.
   */
  void set_privacy_status(const StringPiece& value) {
    *MutableStorage("privacyStatus") = value.data();
  }

  /**
   * Determine if the '<code>recordingStatus</code>' attribute was set.
   *
   * @return true if the '<code>recordingStatus</code>' attribute was set.
   */
  bool has_recording_status() const {
    return Storage().isMember("recordingStatus");
  }

  /**
   * Clears the '<code>recordingStatus</code>' attribute.
   */
  void clear_recording_status() {
    MutableStorage()->removeMember("recordingStatus");
  }


  /**
   * Get the value of the '<code>recordingStatus</code>' attribute.
   */
  const StringPiece get_recording_status() const {
    const Json::Value& v = Storage("recordingStatus");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>recordingStatus</code>' attribute.
   *
   * The broadcast's recording status.
   *
   * @param[in] value The new value.
   */
  void set_recording_status(const StringPiece& value) {
    *MutableStorage("recordingStatus") = value.data();
  }

 private:
  void operator=(const LiveBroadcastStatus&);
};  // LiveBroadcastStatus
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_LIVE_BROADCAST_STATUS_H_
