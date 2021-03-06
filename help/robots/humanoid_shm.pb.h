// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: humanoid_shm.proto

#ifndef PROTOBUF_humanoid_5fshm_2eproto__INCLUDED
#define PROTOBUF_humanoid_5fshm_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
#include "component_base.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_humanoid_5fshm_2eproto();
void protobuf_AssignDesc_humanoid_5fshm_2eproto();
void protobuf_ShutdownFile_humanoid_5fshm_2eproto();

class M3HumanoidShmStatus;
class M3HumanoidShmCommand;
class M3HumanoidShmParam;

// ===================================================================

class M3HumanoidShmStatus : public ::google::protobuf::Message {
 public:
  M3HumanoidShmStatus();
  virtual ~M3HumanoidShmStatus();
  
  M3HumanoidShmStatus(const M3HumanoidShmStatus& from);
  
  inline M3HumanoidShmStatus& operator=(const M3HumanoidShmStatus& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const M3HumanoidShmStatus& default_instance();
  
  void Swap(M3HumanoidShmStatus* other);
  
  // implements Message ----------------------------------------------
  
  M3HumanoidShmStatus* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const M3HumanoidShmStatus& from);
  void MergeFrom(const M3HumanoidShmStatus& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional .M3BaseStatus base = 1;
  inline bool has_base() const;
  inline void clear_base();
  static const int kBaseFieldNumber = 1;
  inline const ::M3BaseStatus& base() const;
  inline ::M3BaseStatus* mutable_base();
  inline ::M3BaseStatus* release_base();
  
  // optional double test = 2;
  inline bool has_test() const;
  inline void clear_test();
  static const int kTestFieldNumber = 2;
  inline double test() const;
  inline void set_test(double value);
  
  // @@protoc_insertion_point(class_scope:M3HumanoidShmStatus)
 private:
  inline void set_has_base();
  inline void clear_has_base();
  inline void set_has_test();
  inline void clear_has_test();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::M3BaseStatus* base_;
  double test_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_humanoid_5fshm_2eproto();
  friend void protobuf_AssignDesc_humanoid_5fshm_2eproto();
  friend void protobuf_ShutdownFile_humanoid_5fshm_2eproto();
  
  void InitAsDefaultInstance();
  static M3HumanoidShmStatus* default_instance_;
};
// -------------------------------------------------------------------

class M3HumanoidShmCommand : public ::google::protobuf::Message {
 public:
  M3HumanoidShmCommand();
  virtual ~M3HumanoidShmCommand();
  
  M3HumanoidShmCommand(const M3HumanoidShmCommand& from);
  
  inline M3HumanoidShmCommand& operator=(const M3HumanoidShmCommand& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const M3HumanoidShmCommand& default_instance();
  
  void Swap(M3HumanoidShmCommand* other);
  
  // implements Message ----------------------------------------------
  
  M3HumanoidShmCommand* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const M3HumanoidShmCommand& from);
  void MergeFrom(const M3HumanoidShmCommand& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional double test = 1;
  inline bool has_test() const;
  inline void clear_test();
  static const int kTestFieldNumber = 1;
  inline double test() const;
  inline void set_test(double value);
  
  // @@protoc_insertion_point(class_scope:M3HumanoidShmCommand)
 private:
  inline void set_has_test();
  inline void clear_has_test();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  double test_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_humanoid_5fshm_2eproto();
  friend void protobuf_AssignDesc_humanoid_5fshm_2eproto();
  friend void protobuf_ShutdownFile_humanoid_5fshm_2eproto();
  
  void InitAsDefaultInstance();
  static M3HumanoidShmCommand* default_instance_;
};
// -------------------------------------------------------------------

class M3HumanoidShmParam : public ::google::protobuf::Message {
 public:
  M3HumanoidShmParam();
  virtual ~M3HumanoidShmParam();
  
  M3HumanoidShmParam(const M3HumanoidShmParam& from);
  
  inline M3HumanoidShmParam& operator=(const M3HumanoidShmParam& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const M3HumanoidShmParam& default_instance();
  
  void Swap(M3HumanoidShmParam* other);
  
  // implements Message ----------------------------------------------
  
  M3HumanoidShmParam* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const M3HumanoidShmParam& from);
  void MergeFrom(const M3HumanoidShmParam& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional double test = 1;
  inline bool has_test() const;
  inline void clear_test();
  static const int kTestFieldNumber = 1;
  inline double test() const;
  inline void set_test(double value);
  
  // @@protoc_insertion_point(class_scope:M3HumanoidShmParam)
 private:
  inline void set_has_test();
  inline void clear_has_test();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  double test_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_humanoid_5fshm_2eproto();
  friend void protobuf_AssignDesc_humanoid_5fshm_2eproto();
  friend void protobuf_ShutdownFile_humanoid_5fshm_2eproto();
  
  void InitAsDefaultInstance();
  static M3HumanoidShmParam* default_instance_;
};
// ===================================================================


// ===================================================================

// M3HumanoidShmStatus

// optional .M3BaseStatus base = 1;
inline bool M3HumanoidShmStatus::has_base() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void M3HumanoidShmStatus::set_has_base() {
  _has_bits_[0] |= 0x00000001u;
}
inline void M3HumanoidShmStatus::clear_has_base() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void M3HumanoidShmStatus::clear_base() {
  if (base_ != NULL) base_->::M3BaseStatus::Clear();
  clear_has_base();
}
inline const ::M3BaseStatus& M3HumanoidShmStatus::base() const {
  return base_ != NULL ? *base_ : *default_instance_->base_;
}
inline ::M3BaseStatus* M3HumanoidShmStatus::mutable_base() {
  set_has_base();
  if (base_ == NULL) base_ = new ::M3BaseStatus;
  return base_;
}
inline ::M3BaseStatus* M3HumanoidShmStatus::release_base() {
  clear_has_base();
  ::M3BaseStatus* temp = base_;
  base_ = NULL;
  return temp;
}

// optional double test = 2;
inline bool M3HumanoidShmStatus::has_test() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void M3HumanoidShmStatus::set_has_test() {
  _has_bits_[0] |= 0x00000002u;
}
inline void M3HumanoidShmStatus::clear_has_test() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void M3HumanoidShmStatus::clear_test() {
  test_ = 0;
  clear_has_test();
}
inline double M3HumanoidShmStatus::test() const {
  return test_;
}
inline void M3HumanoidShmStatus::set_test(double value) {
  set_has_test();
  test_ = value;
}

// -------------------------------------------------------------------

// M3HumanoidShmCommand

// optional double test = 1;
inline bool M3HumanoidShmCommand::has_test() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void M3HumanoidShmCommand::set_has_test() {
  _has_bits_[0] |= 0x00000001u;
}
inline void M3HumanoidShmCommand::clear_has_test() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void M3HumanoidShmCommand::clear_test() {
  test_ = 0;
  clear_has_test();
}
inline double M3HumanoidShmCommand::test() const {
  return test_;
}
inline void M3HumanoidShmCommand::set_test(double value) {
  set_has_test();
  test_ = value;
}

// -------------------------------------------------------------------

// M3HumanoidShmParam

// optional double test = 1;
inline bool M3HumanoidShmParam::has_test() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void M3HumanoidShmParam::set_has_test() {
  _has_bits_[0] |= 0x00000001u;
}
inline void M3HumanoidShmParam::clear_has_test() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void M3HumanoidShmParam::clear_test() {
  test_ = 0;
  clear_has_test();
}
inline double M3HumanoidShmParam::test() const {
  return test_;
}
inline void M3HumanoidShmParam::set_test(double value) {
  set_has_test();
  test_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_humanoid_5fshm_2eproto__INCLUDED
