// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: fusion/proto/async_fusion_config.proto

#ifndef PROTOBUF_fusion_2fproto_2fasync_5ffusion_5fconfig_2eproto__INCLUDED
#define PROTOBUF_fusion_2fproto_2fasync_5ffusion_5fconfig_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace apollo_perception_standalone {
namespace async_fusion_config {
class ModelConfigs;
class ModelConfigsDefaultTypeInternal;
extern ModelConfigsDefaultTypeInternal _ModelConfigs_default_instance_;
}  // namespace async_fusion_config
}  // namespace apollo_perception_standalone

namespace apollo_perception_standalone {
namespace async_fusion_config {

namespace protobuf_fusion_2fproto_2fasync_5ffusion_5fconfig_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_fusion_2fproto_2fasync_5ffusion_5fconfig_2eproto

// ===================================================================

class ModelConfigs : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo_perception_standalone.async_fusion_config.ModelConfigs) */ {
 public:
  ModelConfigs();
  virtual ~ModelConfigs();

  ModelConfigs(const ModelConfigs& from);

  inline ModelConfigs& operator=(const ModelConfigs& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ModelConfigs& default_instance();

  static inline const ModelConfigs* internal_default_instance() {
    return reinterpret_cast<const ModelConfigs*>(
               &_ModelConfigs_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(ModelConfigs* other);

  // implements Message ----------------------------------------------

  inline ModelConfigs* New() const PROTOBUF_FINAL { return New(NULL); }

  ModelConfigs* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ModelConfigs& from);
  void MergeFrom(const ModelConfigs& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ModelConfigs* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string name = 1 [default = "AsyncFusion"];
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional string version = 2 [default = "1.0.0"];
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 2;
  const ::std::string& version() const;
  void set_version(const ::std::string& value);
  #if LANG_CXX11
  void set_version(::std::string&& value);
  #endif
  void set_version(const char* value);
  void set_version(const char* value, size_t size);
  ::std::string* mutable_version();
  ::std::string* release_version();
  void set_allocated_version(::std::string* version);

  // optional string match_method = 3 [default = "hm_matcher"];
  bool has_match_method() const;
  void clear_match_method();
  static const int kMatchMethodFieldNumber = 3;
  const ::std::string& match_method() const;
  void set_match_method(const ::std::string& value);
  #if LANG_CXX11
  void set_match_method(::std::string&& value);
  #endif
  void set_match_method(const char* value);
  void set_match_method(const char* value, size_t size);
  ::std::string* mutable_match_method();
  ::std::string* release_match_method();
  void set_allocated_match_method(::std::string* match_method);

  // optional string publish_sensor = 11 [default = "velodyne_64"];
  bool has_publish_sensor() const;
  void clear_publish_sensor();
  static const int kPublishSensorFieldNumber = 11;
  const ::std::string& publish_sensor() const;
  void set_publish_sensor(const ::std::string& value);
  #if LANG_CXX11
  void set_publish_sensor(::std::string&& value);
  #endif
  void set_publish_sensor(const char* value);
  void set_publish_sensor(const char* value, size_t size);
  ::std::string* mutable_publish_sensor();
  ::std::string* release_publish_sensor();
  void set_allocated_publish_sensor(::std::string* publish_sensor);

  // optional float max_match_distance = 4 [default = 4];
  bool has_max_match_distance() const;
  void clear_max_match_distance();
  static const int kMaxMatchDistanceFieldNumber = 4;
  float max_match_distance() const;
  void set_max_match_distance(float value);

  // optional float max_lidar_invisible_period = 5 [default = 0.25];
  bool has_max_lidar_invisible_period() const;
  void clear_max_lidar_invisible_period();
  static const int kMaxLidarInvisiblePeriodFieldNumber = 5;
  float max_lidar_invisible_period() const;
  void set_max_lidar_invisible_period(float value);

  // optional float max_radar_invisible_period = 6 [default = 0.25];
  bool has_max_radar_invisible_period() const;
  void clear_max_radar_invisible_period();
  static const int kMaxRadarInvisiblePeriodFieldNumber = 6;
  float max_radar_invisible_period() const;
  void set_max_radar_invisible_period(float value);

  // optional float max_radar_confident_angle = 7 [default = 30];
  bool has_max_radar_confident_angle() const;
  void clear_max_radar_confident_angle();
  static const int kMaxRadarConfidentAngleFieldNumber = 7;
  float max_radar_confident_angle() const;
  void set_max_radar_confident_angle(float value);

  // optional float min_radar_confident_distance = 8 [default = 40];
  bool has_min_radar_confident_distance() const;
  void clear_min_radar_confident_distance();
  static const int kMinRadarConfidentDistanceFieldNumber = 8;
  float min_radar_confident_distance() const;
  void set_min_radar_confident_distance(float value);

  // optional bool publish_if_has_lidar = 9 [default = true];
  bool has_publish_if_has_lidar() const;
  void clear_publish_if_has_lidar();
  static const int kPublishIfHasLidarFieldNumber = 9;
  bool publish_if_has_lidar() const;
  void set_publish_if_has_lidar(bool value);

  // optional bool publish_if_has_radar = 10 [default = true];
  bool has_publish_if_has_radar() const;
  void clear_publish_if_has_radar();
  static const int kPublishIfHasRadarFieldNumber = 10;
  bool publish_if_has_radar() const;
  void set_publish_if_has_radar(bool value);

  // optional bool use_radar = 12 [default = true];
  bool has_use_radar() const;
  void clear_use_radar();
  static const int kUseRadarFieldNumber = 12;
  bool use_radar() const;
  void set_use_radar(bool value);

  // optional bool use_lidar = 13 [default = true];
  bool has_use_lidar() const;
  void clear_use_lidar();
  static const int kUseLidarFieldNumber = 13;
  bool use_lidar() const;
  void set_use_lidar(bool value);

  // @@protoc_insertion_point(class_scope:apollo_perception_standalone.async_fusion_config.ModelConfigs)
 private:
  void set_has_name();
  void clear_has_name();
  void set_has_version();
  void clear_has_version();
  void set_has_match_method();
  void clear_has_match_method();
  void set_has_max_match_distance();
  void clear_has_max_match_distance();
  void set_has_max_lidar_invisible_period();
  void clear_has_max_lidar_invisible_period();
  void set_has_max_radar_invisible_period();
  void clear_has_max_radar_invisible_period();
  void set_has_max_radar_confident_angle();
  void clear_has_max_radar_confident_angle();
  void set_has_min_radar_confident_distance();
  void clear_has_min_radar_confident_distance();
  void set_has_publish_if_has_lidar();
  void clear_has_publish_if_has_lidar();
  void set_has_publish_if_has_radar();
  void clear_has_publish_if_has_radar();
  void set_has_publish_sensor();
  void clear_has_publish_sensor();
  void set_has_use_radar();
  void clear_has_use_radar();
  void set_has_use_lidar();
  void clear_has_use_lidar();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  static ::google::protobuf::internal::ExplicitlyConstructed< ::std::string> _default_name_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  static ::google::protobuf::internal::ExplicitlyConstructed< ::std::string> _default_version_;
  ::google::protobuf::internal::ArenaStringPtr version_;
  static ::google::protobuf::internal::ExplicitlyConstructed< ::std::string> _default_match_method_;
  ::google::protobuf::internal::ArenaStringPtr match_method_;
  static ::google::protobuf::internal::ExplicitlyConstructed< ::std::string> _default_publish_sensor_;
  ::google::protobuf::internal::ArenaStringPtr publish_sensor_;
  float max_match_distance_;
  float max_lidar_invisible_period_;
  float max_radar_invisible_period_;
  float max_radar_confident_angle_;
  float min_radar_confident_distance_;
  bool publish_if_has_lidar_;
  bool publish_if_has_radar_;
  bool use_radar_;
  bool use_lidar_;
  friend struct protobuf_fusion_2fproto_2fasync_5ffusion_5fconfig_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ModelConfigs

// optional string name = 1 [default = "AsyncFusion"];
inline bool ModelConfigs::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ModelConfigs::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ModelConfigs::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ModelConfigs::clear_name() {
  name_.ClearToDefaultNoArena(&ModelConfigs::_default_name_.get());
  clear_has_name();
}
inline const ::std::string& ModelConfigs::name() const {
  // @@protoc_insertion_point(field_get:apollo_perception_standalone.async_fusion_config.ModelConfigs.name)
  return name_.GetNoArena();
}
inline void ModelConfigs::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&ModelConfigs::_default_name_.get(), value);
  // @@protoc_insertion_point(field_set:apollo_perception_standalone.async_fusion_config.ModelConfigs.name)
}
#if LANG_CXX11
inline void ModelConfigs::set_name(::std::string&& value) {
  set_has_name();
  name_.SetNoArena(
    &ModelConfigs::_default_name_.get(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:apollo_perception_standalone.async_fusion_config.ModelConfigs.name)
}
#endif
inline void ModelConfigs::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_name();
  name_.SetNoArena(&ModelConfigs::_default_name_.get(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo_perception_standalone.async_fusion_config.ModelConfigs.name)
}
inline void ModelConfigs::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&ModelConfigs::_default_name_.get(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo_perception_standalone.async_fusion_config.ModelConfigs.name)
}
inline ::std::string* ModelConfigs::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:apollo_perception_standalone.async_fusion_config.ModelConfigs.name)
  return name_.MutableNoArena(&ModelConfigs::_default_name_.get());
}
inline ::std::string* ModelConfigs::release_name() {
  // @@protoc_insertion_point(field_release:apollo_perception_standalone.async_fusion_config.ModelConfigs.name)
  clear_has_name();
  return name_.ReleaseNoArena(&ModelConfigs::_default_name_.get());
}
inline void ModelConfigs::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&ModelConfigs::_default_name_.get(), name);
  // @@protoc_insertion_point(field_set_allocated:apollo_perception_standalone.async_fusion_config.ModelConfigs.name)
}

// optional string version = 2 [default = "1.0.0"];
inline bool ModelConfigs::has_version() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ModelConfigs::set_has_version() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ModelConfigs::clear_has_version() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ModelConfigs::clear_version() {
  version_.ClearToDefaultNoArena(&ModelConfigs::_default_version_.get());
  clear_has_version();
}
inline const ::std::string& ModelConfigs::version() const {
  // @@protoc_insertion_point(field_get:apollo_perception_standalone.async_fusion_config.ModelConfigs.version)
  return version_.GetNoArena();
}
inline void ModelConfigs::set_version(const ::std::string& value) {
  set_has_version();
  version_.SetNoArena(&ModelConfigs::_default_version_.get(), value);
  // @@protoc_insertion_point(field_set:apollo_perception_standalone.async_fusion_config.ModelConfigs.version)
}
#if LANG_CXX11
inline void ModelConfigs::set_version(::std::string&& value) {
  set_has_version();
  version_.SetNoArena(
    &ModelConfigs::_default_version_.get(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:apollo_perception_standalone.async_fusion_config.ModelConfigs.version)
}
#endif
inline void ModelConfigs::set_version(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_version();
  version_.SetNoArena(&ModelConfigs::_default_version_.get(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo_perception_standalone.async_fusion_config.ModelConfigs.version)
}
inline void ModelConfigs::set_version(const char* value, size_t size) {
  set_has_version();
  version_.SetNoArena(&ModelConfigs::_default_version_.get(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo_perception_standalone.async_fusion_config.ModelConfigs.version)
}
inline ::std::string* ModelConfigs::mutable_version() {
  set_has_version();
  // @@protoc_insertion_point(field_mutable:apollo_perception_standalone.async_fusion_config.ModelConfigs.version)
  return version_.MutableNoArena(&ModelConfigs::_default_version_.get());
}
inline ::std::string* ModelConfigs::release_version() {
  // @@protoc_insertion_point(field_release:apollo_perception_standalone.async_fusion_config.ModelConfigs.version)
  clear_has_version();
  return version_.ReleaseNoArena(&ModelConfigs::_default_version_.get());
}
inline void ModelConfigs::set_allocated_version(::std::string* version) {
  if (version != NULL) {
    set_has_version();
  } else {
    clear_has_version();
  }
  version_.SetAllocatedNoArena(&ModelConfigs::_default_version_.get(), version);
  // @@protoc_insertion_point(field_set_allocated:apollo_perception_standalone.async_fusion_config.ModelConfigs.version)
}

// optional string match_method = 3 [default = "hm_matcher"];
inline bool ModelConfigs::has_match_method() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ModelConfigs::set_has_match_method() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ModelConfigs::clear_has_match_method() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ModelConfigs::clear_match_method() {
  match_method_.ClearToDefaultNoArena(&ModelConfigs::_default_match_method_.get());
  clear_has_match_method();
}
inline const ::std::string& ModelConfigs::match_method() const {
  // @@protoc_insertion_point(field_get:apollo_perception_standalone.async_fusion_config.ModelConfigs.match_method)
  return match_method_.GetNoArena();
}
inline void ModelConfigs::set_match_method(const ::std::string& value) {
  set_has_match_method();
  match_method_.SetNoArena(&ModelConfigs::_default_match_method_.get(), value);
  // @@protoc_insertion_point(field_set:apollo_perception_standalone.async_fusion_config.ModelConfigs.match_method)
}
#if LANG_CXX11
inline void ModelConfigs::set_match_method(::std::string&& value) {
  set_has_match_method();
  match_method_.SetNoArena(
    &ModelConfigs::_default_match_method_.get(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:apollo_perception_standalone.async_fusion_config.ModelConfigs.match_method)
}
#endif
inline void ModelConfigs::set_match_method(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_match_method();
  match_method_.SetNoArena(&ModelConfigs::_default_match_method_.get(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo_perception_standalone.async_fusion_config.ModelConfigs.match_method)
}
inline void ModelConfigs::set_match_method(const char* value, size_t size) {
  set_has_match_method();
  match_method_.SetNoArena(&ModelConfigs::_default_match_method_.get(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo_perception_standalone.async_fusion_config.ModelConfigs.match_method)
}
inline ::std::string* ModelConfigs::mutable_match_method() {
  set_has_match_method();
  // @@protoc_insertion_point(field_mutable:apollo_perception_standalone.async_fusion_config.ModelConfigs.match_method)
  return match_method_.MutableNoArena(&ModelConfigs::_default_match_method_.get());
}
inline ::std::string* ModelConfigs::release_match_method() {
  // @@protoc_insertion_point(field_release:apollo_perception_standalone.async_fusion_config.ModelConfigs.match_method)
  clear_has_match_method();
  return match_method_.ReleaseNoArena(&ModelConfigs::_default_match_method_.get());
}
inline void ModelConfigs::set_allocated_match_method(::std::string* match_method) {
  if (match_method != NULL) {
    set_has_match_method();
  } else {
    clear_has_match_method();
  }
  match_method_.SetAllocatedNoArena(&ModelConfigs::_default_match_method_.get(), match_method);
  // @@protoc_insertion_point(field_set_allocated:apollo_perception_standalone.async_fusion_config.ModelConfigs.match_method)
}

// optional float max_match_distance = 4 [default = 4];
inline bool ModelConfigs::has_max_match_distance() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ModelConfigs::set_has_max_match_distance() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ModelConfigs::clear_has_max_match_distance() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ModelConfigs::clear_max_match_distance() {
  max_match_distance_ = 4;
  clear_has_max_match_distance();
}
inline float ModelConfigs::max_match_distance() const {
  // @@protoc_insertion_point(field_get:apollo_perception_standalone.async_fusion_config.ModelConfigs.max_match_distance)
  return max_match_distance_;
}
inline void ModelConfigs::set_max_match_distance(float value) {
  set_has_max_match_distance();
  max_match_distance_ = value;
  // @@protoc_insertion_point(field_set:apollo_perception_standalone.async_fusion_config.ModelConfigs.max_match_distance)
}

// optional float max_lidar_invisible_period = 5 [default = 0.25];
inline bool ModelConfigs::has_max_lidar_invisible_period() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ModelConfigs::set_has_max_lidar_invisible_period() {
  _has_bits_[0] |= 0x00000020u;
}
inline void ModelConfigs::clear_has_max_lidar_invisible_period() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void ModelConfigs::clear_max_lidar_invisible_period() {
  max_lidar_invisible_period_ = 0.25f;
  clear_has_max_lidar_invisible_period();
}
inline float ModelConfigs::max_lidar_invisible_period() const {
  // @@protoc_insertion_point(field_get:apollo_perception_standalone.async_fusion_config.ModelConfigs.max_lidar_invisible_period)
  return max_lidar_invisible_period_;
}
inline void ModelConfigs::set_max_lidar_invisible_period(float value) {
  set_has_max_lidar_invisible_period();
  max_lidar_invisible_period_ = value;
  // @@protoc_insertion_point(field_set:apollo_perception_standalone.async_fusion_config.ModelConfigs.max_lidar_invisible_period)
}

// optional float max_radar_invisible_period = 6 [default = 0.25];
inline bool ModelConfigs::has_max_radar_invisible_period() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void ModelConfigs::set_has_max_radar_invisible_period() {
  _has_bits_[0] |= 0x00000040u;
}
inline void ModelConfigs::clear_has_max_radar_invisible_period() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void ModelConfigs::clear_max_radar_invisible_period() {
  max_radar_invisible_period_ = 0.25f;
  clear_has_max_radar_invisible_period();
}
inline float ModelConfigs::max_radar_invisible_period() const {
  // @@protoc_insertion_point(field_get:apollo_perception_standalone.async_fusion_config.ModelConfigs.max_radar_invisible_period)
  return max_radar_invisible_period_;
}
inline void ModelConfigs::set_max_radar_invisible_period(float value) {
  set_has_max_radar_invisible_period();
  max_radar_invisible_period_ = value;
  // @@protoc_insertion_point(field_set:apollo_perception_standalone.async_fusion_config.ModelConfigs.max_radar_invisible_period)
}

// optional float max_radar_confident_angle = 7 [default = 30];
inline bool ModelConfigs::has_max_radar_confident_angle() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void ModelConfigs::set_has_max_radar_confident_angle() {
  _has_bits_[0] |= 0x00000080u;
}
inline void ModelConfigs::clear_has_max_radar_confident_angle() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void ModelConfigs::clear_max_radar_confident_angle() {
  max_radar_confident_angle_ = 30;
  clear_has_max_radar_confident_angle();
}
inline float ModelConfigs::max_radar_confident_angle() const {
  // @@protoc_insertion_point(field_get:apollo_perception_standalone.async_fusion_config.ModelConfigs.max_radar_confident_angle)
  return max_radar_confident_angle_;
}
inline void ModelConfigs::set_max_radar_confident_angle(float value) {
  set_has_max_radar_confident_angle();
  max_radar_confident_angle_ = value;
  // @@protoc_insertion_point(field_set:apollo_perception_standalone.async_fusion_config.ModelConfigs.max_radar_confident_angle)
}

// optional float min_radar_confident_distance = 8 [default = 40];
inline bool ModelConfigs::has_min_radar_confident_distance() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void ModelConfigs::set_has_min_radar_confident_distance() {
  _has_bits_[0] |= 0x00000100u;
}
inline void ModelConfigs::clear_has_min_radar_confident_distance() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void ModelConfigs::clear_min_radar_confident_distance() {
  min_radar_confident_distance_ = 40;
  clear_has_min_radar_confident_distance();
}
inline float ModelConfigs::min_radar_confident_distance() const {
  // @@protoc_insertion_point(field_get:apollo_perception_standalone.async_fusion_config.ModelConfigs.min_radar_confident_distance)
  return min_radar_confident_distance_;
}
inline void ModelConfigs::set_min_radar_confident_distance(float value) {
  set_has_min_radar_confident_distance();
  min_radar_confident_distance_ = value;
  // @@protoc_insertion_point(field_set:apollo_perception_standalone.async_fusion_config.ModelConfigs.min_radar_confident_distance)
}

// optional bool publish_if_has_lidar = 9 [default = true];
inline bool ModelConfigs::has_publish_if_has_lidar() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void ModelConfigs::set_has_publish_if_has_lidar() {
  _has_bits_[0] |= 0x00000200u;
}
inline void ModelConfigs::clear_has_publish_if_has_lidar() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void ModelConfigs::clear_publish_if_has_lidar() {
  publish_if_has_lidar_ = true;
  clear_has_publish_if_has_lidar();
}
inline bool ModelConfigs::publish_if_has_lidar() const {
  // @@protoc_insertion_point(field_get:apollo_perception_standalone.async_fusion_config.ModelConfigs.publish_if_has_lidar)
  return publish_if_has_lidar_;
}
inline void ModelConfigs::set_publish_if_has_lidar(bool value) {
  set_has_publish_if_has_lidar();
  publish_if_has_lidar_ = value;
  // @@protoc_insertion_point(field_set:apollo_perception_standalone.async_fusion_config.ModelConfigs.publish_if_has_lidar)
}

// optional bool publish_if_has_radar = 10 [default = true];
inline bool ModelConfigs::has_publish_if_has_radar() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void ModelConfigs::set_has_publish_if_has_radar() {
  _has_bits_[0] |= 0x00000400u;
}
inline void ModelConfigs::clear_has_publish_if_has_radar() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void ModelConfigs::clear_publish_if_has_radar() {
  publish_if_has_radar_ = true;
  clear_has_publish_if_has_radar();
}
inline bool ModelConfigs::publish_if_has_radar() const {
  // @@protoc_insertion_point(field_get:apollo_perception_standalone.async_fusion_config.ModelConfigs.publish_if_has_radar)
  return publish_if_has_radar_;
}
inline void ModelConfigs::set_publish_if_has_radar(bool value) {
  set_has_publish_if_has_radar();
  publish_if_has_radar_ = value;
  // @@protoc_insertion_point(field_set:apollo_perception_standalone.async_fusion_config.ModelConfigs.publish_if_has_radar)
}

// optional string publish_sensor = 11 [default = "velodyne_64"];
inline bool ModelConfigs::has_publish_sensor() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ModelConfigs::set_has_publish_sensor() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ModelConfigs::clear_has_publish_sensor() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ModelConfigs::clear_publish_sensor() {
  publish_sensor_.ClearToDefaultNoArena(&ModelConfigs::_default_publish_sensor_.get());
  clear_has_publish_sensor();
}
inline const ::std::string& ModelConfigs::publish_sensor() const {
  // @@protoc_insertion_point(field_get:apollo_perception_standalone.async_fusion_config.ModelConfigs.publish_sensor)
  return publish_sensor_.GetNoArena();
}
inline void ModelConfigs::set_publish_sensor(const ::std::string& value) {
  set_has_publish_sensor();
  publish_sensor_.SetNoArena(&ModelConfigs::_default_publish_sensor_.get(), value);
  // @@protoc_insertion_point(field_set:apollo_perception_standalone.async_fusion_config.ModelConfigs.publish_sensor)
}
#if LANG_CXX11
inline void ModelConfigs::set_publish_sensor(::std::string&& value) {
  set_has_publish_sensor();
  publish_sensor_.SetNoArena(
    &ModelConfigs::_default_publish_sensor_.get(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:apollo_perception_standalone.async_fusion_config.ModelConfigs.publish_sensor)
}
#endif
inline void ModelConfigs::set_publish_sensor(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_publish_sensor();
  publish_sensor_.SetNoArena(&ModelConfigs::_default_publish_sensor_.get(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo_perception_standalone.async_fusion_config.ModelConfigs.publish_sensor)
}
inline void ModelConfigs::set_publish_sensor(const char* value, size_t size) {
  set_has_publish_sensor();
  publish_sensor_.SetNoArena(&ModelConfigs::_default_publish_sensor_.get(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo_perception_standalone.async_fusion_config.ModelConfigs.publish_sensor)
}
inline ::std::string* ModelConfigs::mutable_publish_sensor() {
  set_has_publish_sensor();
  // @@protoc_insertion_point(field_mutable:apollo_perception_standalone.async_fusion_config.ModelConfigs.publish_sensor)
  return publish_sensor_.MutableNoArena(&ModelConfigs::_default_publish_sensor_.get());
}
inline ::std::string* ModelConfigs::release_publish_sensor() {
  // @@protoc_insertion_point(field_release:apollo_perception_standalone.async_fusion_config.ModelConfigs.publish_sensor)
  clear_has_publish_sensor();
  return publish_sensor_.ReleaseNoArena(&ModelConfigs::_default_publish_sensor_.get());
}
inline void ModelConfigs::set_allocated_publish_sensor(::std::string* publish_sensor) {
  if (publish_sensor != NULL) {
    set_has_publish_sensor();
  } else {
    clear_has_publish_sensor();
  }
  publish_sensor_.SetAllocatedNoArena(&ModelConfigs::_default_publish_sensor_.get(), publish_sensor);
  // @@protoc_insertion_point(field_set_allocated:apollo_perception_standalone.async_fusion_config.ModelConfigs.publish_sensor)
}

// optional bool use_radar = 12 [default = true];
inline bool ModelConfigs::has_use_radar() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void ModelConfigs::set_has_use_radar() {
  _has_bits_[0] |= 0x00000800u;
}
inline void ModelConfigs::clear_has_use_radar() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void ModelConfigs::clear_use_radar() {
  use_radar_ = true;
  clear_has_use_radar();
}
inline bool ModelConfigs::use_radar() const {
  // @@protoc_insertion_point(field_get:apollo_perception_standalone.async_fusion_config.ModelConfigs.use_radar)
  return use_radar_;
}
inline void ModelConfigs::set_use_radar(bool value) {
  set_has_use_radar();
  use_radar_ = value;
  // @@protoc_insertion_point(field_set:apollo_perception_standalone.async_fusion_config.ModelConfigs.use_radar)
}

// optional bool use_lidar = 13 [default = true];
inline bool ModelConfigs::has_use_lidar() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void ModelConfigs::set_has_use_lidar() {
  _has_bits_[0] |= 0x00001000u;
}
inline void ModelConfigs::clear_has_use_lidar() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void ModelConfigs::clear_use_lidar() {
  use_lidar_ = true;
  clear_has_use_lidar();
}
inline bool ModelConfigs::use_lidar() const {
  // @@protoc_insertion_point(field_get:apollo_perception_standalone.async_fusion_config.ModelConfigs.use_lidar)
  return use_lidar_;
}
inline void ModelConfigs::set_use_lidar(bool value) {
  set_has_use_lidar();
  use_lidar_ = value;
  // @@protoc_insertion_point(field_set:apollo_perception_standalone.async_fusion_config.ModelConfigs.use_lidar)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace async_fusion_config
}  // namespace apollo_perception_standalone

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_fusion_2fproto_2fasync_5ffusion_5fconfig_2eproto__INCLUDED
