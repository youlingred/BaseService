// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: define_pro.proto

#ifndef PROTOBUF_define_5fpro_2eproto__INCLUDED
#define PROTOBUF_define_5fpro_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_define_5fpro_2eproto();
void protobuf_AssignDesc_define_5fpro_2eproto();
void protobuf_ShutdownFile_define_5fpro_2eproto();


enum TEvent {
  EventInvalid = 0,
  EventPlayerUp = 2,
  EventCostMoney = 40,
  EventLogin = 46
};
bool TEvent_IsValid(int value);
const TEvent TEvent_MIN = EventInvalid;
const TEvent TEvent_MAX = EventLogin;
const int TEvent_ARRAYSIZE = TEvent_MAX + 1;

const ::google::protobuf::EnumDescriptor* TEvent_descriptor();
inline const ::std::string& TEvent_Name(TEvent value) {
  return ::google::protobuf::internal::NameOfEnum(
    TEvent_descriptor(), value);
}
inline bool TEvent_Parse(
    const ::std::string& name, TEvent* value) {
  return ::google::protobuf::internal::ParseNamedEnum<TEvent>(
    TEvent_descriptor(), name, value);
}
enum TPlayerFlagBit {
  PLAYER_FLAG_TEST_0 = 0,
  PLAYER_FLAG_FIRST_CARD_ONE = 1,
  PLAYER_FLAG_FIRST_CARD_TEN = 2
};
bool TPlayerFlagBit_IsValid(int value);
const TPlayerFlagBit TPlayerFlagBit_MIN = PLAYER_FLAG_TEST_0;
const TPlayerFlagBit TPlayerFlagBit_MAX = PLAYER_FLAG_FIRST_CARD_TEN;
const int TPlayerFlagBit_ARRAYSIZE = TPlayerFlagBit_MAX + 1;

const ::google::protobuf::EnumDescriptor* TPlayerFlagBit_descriptor();
inline const ::std::string& TPlayerFlagBit_Name(TPlayerFlagBit value) {
  return ::google::protobuf::internal::NameOfEnum(
    TPlayerFlagBit_descriptor(), value);
}
inline bool TPlayerFlagBit_Parse(
    const ::std::string& name, TPlayerFlagBit* value) {
  return ::google::protobuf::internal::ParseNamedEnum<TPlayerFlagBit>(
    TPlayerFlagBit_descriptor(), name, value);
}
enum TErrorType {
  INVALID_TYPE = 0,
  ACCOUNT_LOGGED = 1,
  SERVER_FULL = 2,
  SERVER_NOT_OPEN = 3,
  TEXT_SUCESS = 4,
  TEXT_FAIL = 5,
  PWD_ERROR = 6,
  PLAYER_ONLINE_TO_FES = 7,
  PLAYER_EXISTS = 8,
  PLAYER_RELOAD = 9,
  SUCESS = 23,
  NO_AUTH_TYPE = 24,
  CONFIG_NOT_FOUND = 33,
  NOT_ENOUGH_MONEY = 37,
  PLAYER_BASE_ERROR = 128
};
bool TErrorType_IsValid(int value);
const TErrorType TErrorType_MIN = INVALID_TYPE;
const TErrorType TErrorType_MAX = PLAYER_BASE_ERROR;
const int TErrorType_ARRAYSIZE = TErrorType_MAX + 1;

const ::google::protobuf::EnumDescriptor* TErrorType_descriptor();
inline const ::std::string& TErrorType_Name(TErrorType value) {
  return ::google::protobuf::internal::NameOfEnum(
    TErrorType_descriptor(), value);
}
inline bool TErrorType_Parse(
    const ::std::string& name, TErrorType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<TErrorType>(
    TErrorType_descriptor(), name, value);
}
enum TAuthType {
  AUTH_TYPE_MY = 1,
  AUTH_TYPE_BBS = 2,
  AUTH_TYPE_360 = 3
};
bool TAuthType_IsValid(int value);
const TAuthType TAuthType_MIN = AUTH_TYPE_MY;
const TAuthType TAuthType_MAX = AUTH_TYPE_360;
const int TAuthType_ARRAYSIZE = TAuthType_MAX + 1;

const ::google::protobuf::EnumDescriptor* TAuthType_descriptor();
inline const ::std::string& TAuthType_Name(TAuthType value) {
  return ::google::protobuf::internal::NameOfEnum(
    TAuthType_descriptor(), value);
}
inline bool TAuthType_Parse(
    const ::std::string& name, TAuthType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<TAuthType>(
    TAuthType_descriptor(), name, value);
}
enum TGender {
  MALE = 1,
  FEMALE = 2
};
bool TGender_IsValid(int value);
const TGender TGender_MIN = MALE;
const TGender TGender_MAX = FEMALE;
const int TGender_ARRAYSIZE = TGender_MAX + 1;

const ::google::protobuf::EnumDescriptor* TGender_descriptor();
inline const ::std::string& TGender_Name(TGender value) {
  return ::google::protobuf::internal::NameOfEnum(
    TGender_descriptor(), value);
}
inline bool TGender_Parse(
    const ::std::string& name, TGender* value) {
  return ::google::protobuf::internal::ParseNamedEnum<TGender>(
    TGender_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::TEvent> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::TEvent>() {
  return ::TEvent_descriptor();
}
template <> struct is_proto_enum< ::TPlayerFlagBit> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::TPlayerFlagBit>() {
  return ::TPlayerFlagBit_descriptor();
}
template <> struct is_proto_enum< ::TErrorType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::TErrorType>() {
  return ::TErrorType_descriptor();
}
template <> struct is_proto_enum< ::TAuthType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::TAuthType>() {
  return ::TAuthType_descriptor();
}
template <> struct is_proto_enum< ::TGender> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::TGender>() {
  return ::TGender_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_define_5fpro_2eproto__INCLUDED
