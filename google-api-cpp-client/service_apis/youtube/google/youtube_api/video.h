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
#ifndef  GOOGLE_YOUTUBE_API_VIDEO_H_
#define  GOOGLE_YOUTUBE_API_VIDEO_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/youtube_api/video_age_gating.h"
#include "google/youtube_api/video_content_details.h"
#include "google/youtube_api/video_conversion_pings.h"
#include "google/youtube_api/video_file_details.h"
#include "google/youtube_api/video_live_streaming_details.h"
#include "google/youtube_api/video_localization.h"
#include "google/youtube_api/video_monetization_details.h"
#include "google/youtube_api/video_player.h"
#include "google/youtube_api/video_processing_details.h"
#include "google/youtube_api/video_project_details.h"
#include "google/youtube_api/video_recording_details.h"
#include "google/youtube_api/video_snippet.h"
#include "google/youtube_api/video_statistics.h"
#include "google/youtube_api/video_status.h"
#include "google/youtube_api/video_suggestions.h"
#include "google/youtube_api/video_topic_details.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * A video resource represents a YouTube video.
 *
 * @ingroup DataObject
 */
class Video : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static Video* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Video(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Video(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~Video();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::Video</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::Video");
  }

  /**
   * Determine if the '<code>ageGating</code>' attribute was set.
   *
   * @return true if the '<code>ageGating</code>' attribute was set.
   */
  bool has_age_gating() const {
    return Storage().isMember("ageGating");
  }

  /**
   * Clears the '<code>ageGating</code>' attribute.
   */
  void clear_age_gating() {
    MutableStorage()->removeMember("ageGating");
  }


  /**
   * Get a reference to the value of the '<code>ageGating</code>' attribute.
   */
  const VideoAgeGating get_age_gating() const;

  /**
   * Gets a reference to a mutable value of the '<code>ageGating</code>'
   * property.
   *
   * Age restriction details related to a video. This data can only be retrieved
   * by the video owner.
   *
   * @return The result can be modified to change the attribute value.
   */
  VideoAgeGating mutable_ageGating();

  /**
   * Determine if the '<code>contentDetails</code>' attribute was set.
   *
   * @return true if the '<code>contentDetails</code>' attribute was set.
   */
  bool has_content_details() const {
    return Storage().isMember("contentDetails");
  }

  /**
   * Clears the '<code>contentDetails</code>' attribute.
   */
  void clear_content_details() {
    MutableStorage()->removeMember("contentDetails");
  }


  /**
   * Get a reference to the value of the '<code>contentDetails</code>'
   * attribute.
   */
  const VideoContentDetails get_content_details() const;

  /**
   * Gets a reference to a mutable value of the '<code>contentDetails</code>'
   * property.
   *
   * The contentDetails object contains information about the video content,
   * including the length of the video and its aspect ratio.
   *
   * @return The result can be modified to change the attribute value.
   */
  VideoContentDetails mutable_contentDetails();

  /**
   * Determine if the '<code>conversionPings</code>' attribute was set.
   *
   * @return true if the '<code>conversionPings</code>' attribute was set.
   */
  bool has_conversion_pings() const {
    return Storage().isMember("conversionPings");
  }

  /**
   * Clears the '<code>conversionPings</code>' attribute.
   */
  void clear_conversion_pings() {
    MutableStorage()->removeMember("conversionPings");
  }


  /**
   * Get a reference to the value of the '<code>conversionPings</code>'
   * attribute.
   */
  const VideoConversionPings get_conversion_pings() const;

  /**
   * Gets a reference to a mutable value of the '<code>conversionPings</code>'
   * property.
   *
   * The conversionPings object encapsulates information about url pings that
   * need to be respected by the App in different video contexts.
   *
   * @return The result can be modified to change the attribute value.
   */
  VideoConversionPings mutable_conversionPings();

  /**
   * Determine if the '<code>etag</code>' attribute was set.
   *
   * @return true if the '<code>etag</code>' attribute was set.
   */
  bool has_etag() const {
    return Storage().isMember("etag");
  }

  /**
   * Clears the '<code>etag</code>' attribute.
   */
  void clear_etag() {
    MutableStorage()->removeMember("etag");
  }


  /**
   * Get the value of the '<code>etag</code>' attribute.
   */
  const StringPiece get_etag() const {
    const Json::Value& v = Storage("etag");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>etag</code>' attribute.
   *
   * Etag of this resource.
   *
   * @param[in] value The new value.
   */
  void set_etag(const StringPiece& value) {
    *MutableStorage("etag") = value.data();
  }

  /**
   * Determine if the '<code>fileDetails</code>' attribute was set.
   *
   * @return true if the '<code>fileDetails</code>' attribute was set.
   */
  bool has_file_details() const {
    return Storage().isMember("fileDetails");
  }

  /**
   * Clears the '<code>fileDetails</code>' attribute.
   */
  void clear_file_details() {
    MutableStorage()->removeMember("fileDetails");
  }


  /**
   * Get a reference to the value of the '<code>fileDetails</code>' attribute.
   */
  const VideoFileDetails get_file_details() const;

  /**
   * Gets a reference to a mutable value of the '<code>fileDetails</code>'
   * property.
   *
   * The fileDetails object encapsulates information about the video file that
   * was uploaded to YouTube, including the file's resolution, duration, audio
   * and video codecs, stream bitrates, and more. This data can only be
   * retrieved by the video owner.
   *
   * @return The result can be modified to change the attribute value.
   */
  VideoFileDetails mutable_fileDetails();

  /**
   * Determine if the '<code>id</code>' attribute was set.
   *
   * @return true if the '<code>id</code>' attribute was set.
   */
  bool has_id() const {
    return Storage().isMember("id");
  }

  /**
   * Clears the '<code>id</code>' attribute.
   */
  void clear_id() {
    MutableStorage()->removeMember("id");
  }


  /**
   * Get the value of the '<code>id</code>' attribute.
   */
  const StringPiece get_id() const {
    const Json::Value& v = Storage("id");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>id</code>' attribute.
   *
   * The ID that YouTube uses to uniquely identify the video.
   *
   * @param[in] value The new value.
   */
  void set_id(const StringPiece& value) {
    *MutableStorage("id") = value.data();
  }

  /**
   * Determine if the '<code>kind</code>' attribute was set.
   *
   * @return true if the '<code>kind</code>' attribute was set.
   */
  bool has_kind() const {
    return Storage().isMember("kind");
  }

  /**
   * Clears the '<code>kind</code>' attribute.
   */
  void clear_kind() {
    MutableStorage()->removeMember("kind");
  }


  /**
   * Get the value of the '<code>kind</code>' attribute.
   */
  const StringPiece get_kind() const {
    const Json::Value& v = Storage("kind");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>kind</code>' attribute.
   *
   * Identifies what kind of resource this is. Value: the fixed string
   * "youtube#video".
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>liveStreamingDetails</code>' attribute was set.
   *
   * @return true if the '<code>liveStreamingDetails</code>' attribute was set.
   */
  bool has_live_streaming_details() const {
    return Storage().isMember("liveStreamingDetails");
  }

  /**
   * Clears the '<code>liveStreamingDetails</code>' attribute.
   */
  void clear_live_streaming_details() {
    MutableStorage()->removeMember("liveStreamingDetails");
  }


  /**
   * Get a reference to the value of the '<code>liveStreamingDetails</code>'
   * attribute.
   */
  const VideoLiveStreamingDetails get_live_streaming_details() const;

  /**
   * Gets a reference to a mutable value of the
   * '<code>liveStreamingDetails</code>' property.
   *
   * The liveStreamingDetails object contains metadata about a live video
   * broadcast. The object will only be present in a video resource if the video
   * is an upcoming, live, or completed live broadcast.
   *
   * @return The result can be modified to change the attribute value.
   */
  VideoLiveStreamingDetails mutable_liveStreamingDetails();

  /**
   * Determine if the '<code>localizations</code>' attribute was set.
   *
   * @return true if the '<code>localizations</code>' attribute was set.
   */
  bool has_localizations() const {
    return Storage().isMember("localizations");
  }

  /**
   * Clears the '<code>localizations</code>' attribute.
   */
  void clear_localizations() {
    MutableStorage()->removeMember("localizations");
  }


  /**
   * Get a reference to the value of the '<code>localizations</code>' attribute.
   */
  const client::JsonCppAssociativeArray<VideoLocalization > get_localizations() const;

  /**
   * Gets a reference to a mutable value of the '<code>localizations</code>'
   * property.
   *
   * List with all localizations.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppAssociativeArray<VideoLocalization > mutable_localizations();

  /**
   * Determine if the '<code>monetizationDetails</code>' attribute was set.
   *
   * @return true if the '<code>monetizationDetails</code>' attribute was set.
   */
  bool has_monetization_details() const {
    return Storage().isMember("monetizationDetails");
  }

  /**
   * Clears the '<code>monetizationDetails</code>' attribute.
   */
  void clear_monetization_details() {
    MutableStorage()->removeMember("monetizationDetails");
  }


  /**
   * Get a reference to the value of the '<code>monetizationDetails</code>'
   * attribute.
   */
  const VideoMonetizationDetails get_monetization_details() const;

  /**
   * Gets a reference to a mutable value of the
   * '<code>monetizationDetails</code>' property.
   *
   * The monetizationDetails object encapsulates information about the
   * monetization status of the video.
   *
   * @return The result can be modified to change the attribute value.
   */
  VideoMonetizationDetails mutable_monetizationDetails();

  /**
   * Determine if the '<code>player</code>' attribute was set.
   *
   * @return true if the '<code>player</code>' attribute was set.
   */
  bool has_player() const {
    return Storage().isMember("player");
  }

  /**
   * Clears the '<code>player</code>' attribute.
   */
  void clear_player() {
    MutableStorage()->removeMember("player");
  }


  /**
   * Get a reference to the value of the '<code>player</code>' attribute.
   */
  const VideoPlayer get_player() const;

  /**
   * Gets a reference to a mutable value of the '<code>player</code>' property.
   *
   * The player object contains information that you would use to play the video
   * in an embedded player.
   *
   * @return The result can be modified to change the attribute value.
   */
  VideoPlayer mutable_player();

  /**
   * Determine if the '<code>processingDetails</code>' attribute was set.
   *
   * @return true if the '<code>processingDetails</code>' attribute was set.
   */
  bool has_processing_details() const {
    return Storage().isMember("processingDetails");
  }

  /**
   * Clears the '<code>processingDetails</code>' attribute.
   */
  void clear_processing_details() {
    MutableStorage()->removeMember("processingDetails");
  }


  /**
   * Get a reference to the value of the '<code>processingDetails</code>'
   * attribute.
   */
  const VideoProcessingDetails get_processing_details() const;

  /**
   * Gets a reference to a mutable value of the '<code>processingDetails</code>'
   * property.
   *
   * The processingProgress object encapsulates information about YouTube's
   * progress in processing the uploaded video file. The properties in the
   * object identify the current processing status and an estimate of the time
   * remaining until YouTube finishes processing the video. This part also
   * indicates whether different types of data or content, such as file details
   * or thumbnail images, are available for the video.
   *
   * The processingProgress object is designed to be polled so that the video
   * uploaded can track the progress that YouTube has made in processing the
   * uploaded video file. This data can only be retrieved by the video owner.
   *
   * @return The result can be modified to change the attribute value.
   */
  VideoProcessingDetails mutable_processingDetails();

  /**
   * Determine if the '<code>projectDetails</code>' attribute was set.
   *
   * @return true if the '<code>projectDetails</code>' attribute was set.
   */
  bool has_project_details() const {
    return Storage().isMember("projectDetails");
  }

  /**
   * Clears the '<code>projectDetails</code>' attribute.
   */
  void clear_project_details() {
    MutableStorage()->removeMember("projectDetails");
  }


  /**
   * Get a reference to the value of the '<code>projectDetails</code>'
   * attribute.
   */
  const VideoProjectDetails get_project_details() const;

  /**
   * Gets a reference to a mutable value of the '<code>projectDetails</code>'
   * property.
   *
   * The projectDetails object contains information about the project specific
   * video metadata.
   *
   * @return The result can be modified to change the attribute value.
   */
  VideoProjectDetails mutable_projectDetails();

  /**
   * Determine if the '<code>recordingDetails</code>' attribute was set.
   *
   * @return true if the '<code>recordingDetails</code>' attribute was set.
   */
  bool has_recording_details() const {
    return Storage().isMember("recordingDetails");
  }

  /**
   * Clears the '<code>recordingDetails</code>' attribute.
   */
  void clear_recording_details() {
    MutableStorage()->removeMember("recordingDetails");
  }


  /**
   * Get a reference to the value of the '<code>recordingDetails</code>'
   * attribute.
   */
  const VideoRecordingDetails get_recording_details() const;

  /**
   * Gets a reference to a mutable value of the '<code>recordingDetails</code>'
   * property.
   *
   * The recordingDetails object encapsulates information about the location,
   * date and address where the video was recorded.
   *
   * @return The result can be modified to change the attribute value.
   */
  VideoRecordingDetails mutable_recordingDetails();

  /**
   * Determine if the '<code>snippet</code>' attribute was set.
   *
   * @return true if the '<code>snippet</code>' attribute was set.
   */
  bool has_snippet() const {
    return Storage().isMember("snippet");
  }

  /**
   * Clears the '<code>snippet</code>' attribute.
   */
  void clear_snippet() {
    MutableStorage()->removeMember("snippet");
  }


  /**
   * Get a reference to the value of the '<code>snippet</code>' attribute.
   */
  const VideoSnippet get_snippet() const;

  /**
   * Gets a reference to a mutable value of the '<code>snippet</code>' property.
   *
   * The snippet object contains basic details about the video, such as its
   * title, description, and category.
   *
   * @return The result can be modified to change the attribute value.
   */
  VideoSnippet mutable_snippet();

  /**
   * Determine if the '<code>statistics</code>' attribute was set.
   *
   * @return true if the '<code>statistics</code>' attribute was set.
   */
  bool has_statistics() const {
    return Storage().isMember("statistics");
  }

  /**
   * Clears the '<code>statistics</code>' attribute.
   */
  void clear_statistics() {
    MutableStorage()->removeMember("statistics");
  }


  /**
   * Get a reference to the value of the '<code>statistics</code>' attribute.
   */
  const VideoStatistics get_statistics() const;

  /**
   * Gets a reference to a mutable value of the '<code>statistics</code>'
   * property.
   *
   * The statistics object contains statistics about the video.
   *
   * @return The result can be modified to change the attribute value.
   */
  VideoStatistics mutable_statistics();

  /**
   * Determine if the '<code>status</code>' attribute was set.
   *
   * @return true if the '<code>status</code>' attribute was set.
   */
  bool has_status() const {
    return Storage().isMember("status");
  }

  /**
   * Clears the '<code>status</code>' attribute.
   */
  void clear_status() {
    MutableStorage()->removeMember("status");
  }


  /**
   * Get a reference to the value of the '<code>status</code>' attribute.
   */
  const VideoStatus get_status() const;

  /**
   * Gets a reference to a mutable value of the '<code>status</code>' property.
   *
   * The status object contains information about the video's uploading,
   * processing, and privacy statuses.
   *
   * @return The result can be modified to change the attribute value.
   */
  VideoStatus mutable_status();

  /**
   * Determine if the '<code>suggestions</code>' attribute was set.
   *
   * @return true if the '<code>suggestions</code>' attribute was set.
   */
  bool has_suggestions() const {
    return Storage().isMember("suggestions");
  }

  /**
   * Clears the '<code>suggestions</code>' attribute.
   */
  void clear_suggestions() {
    MutableStorage()->removeMember("suggestions");
  }


  /**
   * Get a reference to the value of the '<code>suggestions</code>' attribute.
   */
  const VideoSuggestions get_suggestions() const;

  /**
   * Gets a reference to a mutable value of the '<code>suggestions</code>'
   * property.
   *
   * The suggestions object encapsulates suggestions that identify opportunities
   * to improve the video quality or the metadata for the uploaded video. This
   * data can only be retrieved by the video owner.
   *
   * @return The result can be modified to change the attribute value.
   */
  VideoSuggestions mutable_suggestions();

  /**
   * Determine if the '<code>topicDetails</code>' attribute was set.
   *
   * @return true if the '<code>topicDetails</code>' attribute was set.
   */
  bool has_topic_details() const {
    return Storage().isMember("topicDetails");
  }

  /**
   * Clears the '<code>topicDetails</code>' attribute.
   */
  void clear_topic_details() {
    MutableStorage()->removeMember("topicDetails");
  }


  /**
   * Get a reference to the value of the '<code>topicDetails</code>' attribute.
   */
  const VideoTopicDetails get_topic_details() const;

  /**
   * Gets a reference to a mutable value of the '<code>topicDetails</code>'
   * property.
   *
   * The topicDetails object encapsulates information about Freebase topics
   * associated with the video.
   *
   * @return The result can be modified to change the attribute value.
   */
  VideoTopicDetails mutable_topicDetails();

 private:
  void operator=(const Video&);
};  // Video
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_VIDEO_H_
