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
#ifndef  GOOGLE_YOUTUBE_API_ACTIVITY_CONTENT_DETAILS_UPLOAD_H_
#define  GOOGLE_YOUTUBE_API_ACTIVITY_CONTENT_DETAILS_UPLOAD_H_

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
 * Information about the uploaded video.
 *
 * @ingroup DataObject
 */
class ActivityContentDetailsUpload : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static ActivityContentDetailsUpload* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ActivityContentDetailsUpload(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ActivityContentDetailsUpload(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~ActivityContentDetailsUpload();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::ActivityContentDetailsUpload</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::ActivityContentDetailsUpload");
  }

  /**
   * Determine if the '<code>videoId</code>' attribute was set.
   *
   * @return true if the '<code>videoId</code>' attribute was set.
   */
  bool has_video_id() const {
    return Storage().isMember("videoId");
  }

  /**
   * Clears the '<code>videoId</code>' attribute.
   */
  void clear_video_id() {
    MutableStorage()->removeMember("videoId");
  }


  /**
   * Get the value of the '<code>videoId</code>' attribute.
   */
  const StringPiece get_video_id() const {
    const Json::Value& v = Storage("videoId");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>videoId</code>' attribute.
   *
   * The ID that YouTube uses to uniquely identify the uploaded video.
   *
   * @param[in] value The new value.
   */
  void set_video_id(const StringPiece& value) {
    *MutableStorage("videoId") = value.data();
  }

 private:
  void operator=(const ActivityContentDetailsUpload&);
};  // ActivityContentDetailsUpload
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_ACTIVITY_CONTENT_DETAILS_UPLOAD_H_
