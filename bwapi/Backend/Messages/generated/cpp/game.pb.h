// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: game.proto

#ifndef PROTOBUF_INCLUDED_game_2eproto
#define PROTOBUF_INCLUDED_game_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_game_2eproto 

namespace protobuf_game_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_game_2eproto
namespace bwapi {
namespace game {
class FrameUpdate;
class FrameUpdateDefaultTypeInternal;
extern FrameUpdateDefaultTypeInternal _FrameUpdate_default_instance_;
}  // namespace game
}  // namespace bwapi
namespace google {
namespace protobuf {
template<> ::bwapi::game::FrameUpdate* Arena::CreateMaybeMessage<::bwapi::game::FrameUpdate>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace bwapi {
namespace game {

// ===================================================================

class FrameUpdate : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:bwapi.game.FrameUpdate) */ {
 public:
  FrameUpdate();
  virtual ~FrameUpdate();

  FrameUpdate(const FrameUpdate& from);

  inline FrameUpdate& operator=(const FrameUpdate& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  FrameUpdate(FrameUpdate&& from) noexcept
    : FrameUpdate() {
    *this = ::std::move(from);
  }

  inline FrameUpdate& operator=(FrameUpdate&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const FrameUpdate& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const FrameUpdate* internal_default_instance() {
    return reinterpret_cast<const FrameUpdate*>(
               &_FrameUpdate_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(FrameUpdate* other);
  friend void swap(FrameUpdate& a, FrameUpdate& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline FrameUpdate* New() const final {
    return CreateMaybeMessage<FrameUpdate>(NULL);
  }

  FrameUpdate* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<FrameUpdate>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const FrameUpdate& from);
  void MergeFrom(const FrameUpdate& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(FrameUpdate* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // uint32 frameNumber = 1;
  void clear_framenumber();
  static const int kFrameNumberFieldNumber = 1;
  ::google::protobuf::uint32 framenumber() const;
  void set_framenumber(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:bwapi.game.FrameUpdate)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 framenumber_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_game_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// FrameUpdate

// uint32 frameNumber = 1;
inline void FrameUpdate::clear_framenumber() {
  framenumber_ = 0u;
}
inline ::google::protobuf::uint32 FrameUpdate::framenumber() const {
  // @@protoc_insertion_point(field_get:bwapi.game.FrameUpdate.frameNumber)
  return framenumber_;
}
inline void FrameUpdate::set_framenumber(::google::protobuf::uint32 value) {
  
  framenumber_ = value;
  // @@protoc_insertion_point(field_set:bwapi.game.FrameUpdate.frameNumber)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace game
}  // namespace bwapi

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_game_2eproto
