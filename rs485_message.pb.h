// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rs485_message.proto

#ifndef PROTOBUF_rs485_5fmessage_2eproto__INCLUDED
#define PROTOBUF_rs485_5fmessage_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_rs485_5fmessage_2eproto();
void protobuf_AssignDesc_rs485_5fmessage_2eproto();
void protobuf_ShutdownFile_rs485_5fmessage_2eproto();

class Rs485;
class OwData;
class AnalogData;
class TempAccelData;

enum Rs485_Type {
  Rs485_Type_READ = 0,
  Rs485_Type_DATA = 1
};
bool Rs485_Type_IsValid(int value);
const Rs485_Type Rs485_Type_Type_MIN = Rs485_Type_READ;
const Rs485_Type Rs485_Type_Type_MAX = Rs485_Type_DATA;
const int Rs485_Type_Type_ARRAYSIZE = Rs485_Type_Type_MAX + 1;

const ::google::protobuf::EnumDescriptor* Rs485_Type_descriptor();
inline const ::std::string& Rs485_Type_Name(Rs485_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    Rs485_Type_descriptor(), value);
}
inline bool Rs485_Type_Parse(
    const ::std::string& name, Rs485_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Rs485_Type>(
    Rs485_Type_descriptor(), name, value);
}
enum Rs485_Sensor {
  Rs485_Sensor_OW = 0,
  Rs485_Sensor_TA_CHAIN = 1,
  Rs485_Sensor_ADC0 = 2,
  Rs485_Sensor_ADC1 = 3,
  Rs485_Sensor_ADC2 = 4,
  Rs485_Sensor_ADC3 = 5
};
bool Rs485_Sensor_IsValid(int value);
const Rs485_Sensor Rs485_Sensor_Sensor_MIN = Rs485_Sensor_OW;
const Rs485_Sensor Rs485_Sensor_Sensor_MAX = Rs485_Sensor_ADC3;
const int Rs485_Sensor_Sensor_ARRAYSIZE = Rs485_Sensor_Sensor_MAX + 1;

const ::google::protobuf::EnumDescriptor* Rs485_Sensor_descriptor();
inline const ::std::string& Rs485_Sensor_Name(Rs485_Sensor value) {
  return ::google::protobuf::internal::NameOfEnum(
    Rs485_Sensor_descriptor(), value);
}
inline bool Rs485_Sensor_Parse(
    const ::std::string& name, Rs485_Sensor* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Rs485_Sensor>(
    Rs485_Sensor_descriptor(), name, value);
}
// ===================================================================

class Rs485 : public ::google::protobuf::Message {
 public:
  Rs485();
  virtual ~Rs485();

  Rs485(const Rs485& from);

  inline Rs485& operator=(const Rs485& from) {
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
  static const Rs485& default_instance();

  void Swap(Rs485* other);

  // implements Message ----------------------------------------------

  Rs485* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Rs485& from);
  void MergeFrom(const Rs485& from);
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

  typedef Rs485_Type Type;
  static const Type READ = Rs485_Type_READ;
  static const Type DATA = Rs485_Type_DATA;
  static inline bool Type_IsValid(int value) {
    return Rs485_Type_IsValid(value);
  }
  static const Type Type_MIN =
    Rs485_Type_Type_MIN;
  static const Type Type_MAX =
    Rs485_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    Rs485_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return Rs485_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return Rs485_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return Rs485_Type_Parse(name, value);
  }

  typedef Rs485_Sensor Sensor;
  static const Sensor OW = Rs485_Sensor_OW;
  static const Sensor TA_CHAIN = Rs485_Sensor_TA_CHAIN;
  static const Sensor ADC0 = Rs485_Sensor_ADC0;
  static const Sensor ADC1 = Rs485_Sensor_ADC1;
  static const Sensor ADC2 = Rs485_Sensor_ADC2;
  static const Sensor ADC3 = Rs485_Sensor_ADC3;
  static inline bool Sensor_IsValid(int value) {
    return Rs485_Sensor_IsValid(value);
  }
  static const Sensor Sensor_MIN =
    Rs485_Sensor_Sensor_MIN;
  static const Sensor Sensor_MAX =
    Rs485_Sensor_Sensor_MAX;
  static const int Sensor_ARRAYSIZE =
    Rs485_Sensor_Sensor_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Sensor_descriptor() {
    return Rs485_Sensor_descriptor();
  }
  static inline const ::std::string& Sensor_Name(Sensor value) {
    return Rs485_Sensor_Name(value);
  }
  static inline bool Sensor_Parse(const ::std::string& name,
      Sensor* value) {
    return Rs485_Sensor_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required int32 dst = 1;
  inline bool has_dst() const;
  inline void clear_dst();
  static const int kDstFieldNumber = 1;
  inline ::google::protobuf::int32 dst() const;
  inline void set_dst(::google::protobuf::int32 value);

  // required .Rs485.Type type = 2 [default = READ];
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 2;
  inline ::Rs485_Type type() const;
  inline void set_type(::Rs485_Type value);

  // optional .Rs485.Sensor sensor = 3;
  inline bool has_sensor() const;
  inline void clear_sensor();
  static const int kSensorFieldNumber = 3;
  inline ::Rs485_Sensor sensor() const;
  inline void set_sensor(::Rs485_Sensor value);

  // repeated .OwData ow = 4;
  inline int ow_size() const;
  inline void clear_ow();
  static const int kOwFieldNumber = 4;
  inline const ::OwData& ow(int index) const;
  inline ::OwData* mutable_ow(int index);
  inline ::OwData* add_ow();
  inline const ::google::protobuf::RepeatedPtrField< ::OwData >&
      ow() const;
  inline ::google::protobuf::RepeatedPtrField< ::OwData >*
      mutable_ow();

  // repeated .AnalogData ad = 5;
  inline int ad_size() const;
  inline void clear_ad();
  static const int kAdFieldNumber = 5;
  inline const ::AnalogData& ad(int index) const;
  inline ::AnalogData* mutable_ad(int index);
  inline ::AnalogData* add_ad();
  inline const ::google::protobuf::RepeatedPtrField< ::AnalogData >&
      ad() const;
  inline ::google::protobuf::RepeatedPtrField< ::AnalogData >*
      mutable_ad();

  // repeated .TempAccelData tad = 6;
  inline int tad_size() const;
  inline void clear_tad();
  static const int kTadFieldNumber = 6;
  inline const ::TempAccelData& tad(int index) const;
  inline ::TempAccelData* mutable_tad(int index);
  inline ::TempAccelData* add_tad();
  inline const ::google::protobuf::RepeatedPtrField< ::TempAccelData >&
      tad() const;
  inline ::google::protobuf::RepeatedPtrField< ::TempAccelData >*
      mutable_tad();

  // @@protoc_insertion_point(class_scope:Rs485)
 private:
  inline void set_has_dst();
  inline void clear_has_dst();
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_sensor();
  inline void clear_has_sensor();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 dst_;
  int type_;
  ::google::protobuf::RepeatedPtrField< ::OwData > ow_;
  ::google::protobuf::RepeatedPtrField< ::AnalogData > ad_;
  ::google::protobuf::RepeatedPtrField< ::TempAccelData > tad_;
  int sensor_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(6 + 31) / 32];

  friend void  protobuf_AddDesc_rs485_5fmessage_2eproto();
  friend void protobuf_AssignDesc_rs485_5fmessage_2eproto();
  friend void protobuf_ShutdownFile_rs485_5fmessage_2eproto();

  void InitAsDefaultInstance();
  static Rs485* default_instance_;
};
// -------------------------------------------------------------------

class OwData : public ::google::protobuf::Message {
 public:
  OwData();
  virtual ~OwData();

  OwData(const OwData& from);

  inline OwData& operator=(const OwData& from) {
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
  static const OwData& default_instance();

  void Swap(OwData* other);

  // implements Message ----------------------------------------------

  OwData* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const OwData& from);
  void MergeFrom(const OwData& from);
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

  // required int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // required float value = 2;
  inline bool has_value() const;
  inline void clear_value();
  static const int kValueFieldNumber = 2;
  inline float value() const;
  inline void set_value(float value);

  // @@protoc_insertion_point(class_scope:OwData)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_value();
  inline void clear_has_value();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 id_;
  float value_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_rs485_5fmessage_2eproto();
  friend void protobuf_AssignDesc_rs485_5fmessage_2eproto();
  friend void protobuf_ShutdownFile_rs485_5fmessage_2eproto();

  void InitAsDefaultInstance();
  static OwData* default_instance_;
};
// -------------------------------------------------------------------

class AnalogData : public ::google::protobuf::Message {
 public:
  AnalogData();
  virtual ~AnalogData();

  AnalogData(const AnalogData& from);

  inline AnalogData& operator=(const AnalogData& from) {
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
  static const AnalogData& default_instance();

  void Swap(AnalogData* other);

  // implements Message ----------------------------------------------

  AnalogData* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AnalogData& from);
  void MergeFrom(const AnalogData& from);
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

  // required int32 adc = 1;
  inline bool has_adc() const;
  inline void clear_adc();
  static const int kAdcFieldNumber = 1;
  inline ::google::protobuf::int32 adc() const;
  inline void set_adc(::google::protobuf::int32 value);

  // required float value = 2;
  inline bool has_value() const;
  inline void clear_value();
  static const int kValueFieldNumber = 2;
  inline float value() const;
  inline void set_value(float value);

  // @@protoc_insertion_point(class_scope:AnalogData)
 private:
  inline void set_has_adc();
  inline void clear_has_adc();
  inline void set_has_value();
  inline void clear_has_value();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 adc_;
  float value_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_rs485_5fmessage_2eproto();
  friend void protobuf_AssignDesc_rs485_5fmessage_2eproto();
  friend void protobuf_ShutdownFile_rs485_5fmessage_2eproto();

  void InitAsDefaultInstance();
  static AnalogData* default_instance_;
};
// -------------------------------------------------------------------

class TempAccelData : public ::google::protobuf::Message {
 public:
  TempAccelData();
  virtual ~TempAccelData();

  TempAccelData(const TempAccelData& from);

  inline TempAccelData& operator=(const TempAccelData& from) {
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
  static const TempAccelData& default_instance();

  void Swap(TempAccelData* other);

  // implements Message ----------------------------------------------

  TempAccelData* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TempAccelData& from);
  void MergeFrom(const TempAccelData& from);
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

  // required int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // required float pitch = 2;
  inline bool has_pitch() const;
  inline void clear_pitch();
  static const int kPitchFieldNumber = 2;
  inline float pitch() const;
  inline void set_pitch(float value);

  // required float roll = 3;
  inline bool has_roll() const;
  inline void clear_roll();
  static const int kRollFieldNumber = 3;
  inline float roll() const;
  inline void set_roll(float value);

  // required float temp = 4;
  inline bool has_temp() const;
  inline void clear_temp();
  static const int kTempFieldNumber = 4;
  inline float temp() const;
  inline void set_temp(float value);

  // @@protoc_insertion_point(class_scope:TempAccelData)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_pitch();
  inline void clear_has_pitch();
  inline void set_has_roll();
  inline void clear_has_roll();
  inline void set_has_temp();
  inline void clear_has_temp();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 id_;
  float pitch_;
  float roll_;
  float temp_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_rs485_5fmessage_2eproto();
  friend void protobuf_AssignDesc_rs485_5fmessage_2eproto();
  friend void protobuf_ShutdownFile_rs485_5fmessage_2eproto();

  void InitAsDefaultInstance();
  static TempAccelData* default_instance_;
};
// ===================================================================


// ===================================================================

// Rs485

// required int32 dst = 1;
inline bool Rs485::has_dst() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Rs485::set_has_dst() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Rs485::clear_has_dst() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Rs485::clear_dst() {
  dst_ = 0;
  clear_has_dst();
}
inline ::google::protobuf::int32 Rs485::dst() const {
  return dst_;
}
inline void Rs485::set_dst(::google::protobuf::int32 value) {
  set_has_dst();
  dst_ = value;
}

// required .Rs485.Type type = 2 [default = READ];
inline bool Rs485::has_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Rs485::set_has_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Rs485::clear_has_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Rs485::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::Rs485_Type Rs485::type() const {
  return static_cast< ::Rs485_Type >(type_);
}
inline void Rs485::set_type(::Rs485_Type value) {
  assert(::Rs485_Type_IsValid(value));
  set_has_type();
  type_ = value;
}

// optional .Rs485.Sensor sensor = 3;
inline bool Rs485::has_sensor() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Rs485::set_has_sensor() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Rs485::clear_has_sensor() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Rs485::clear_sensor() {
  sensor_ = 0;
  clear_has_sensor();
}
inline ::Rs485_Sensor Rs485::sensor() const {
  return static_cast< ::Rs485_Sensor >(sensor_);
}
inline void Rs485::set_sensor(::Rs485_Sensor value) {
  assert(::Rs485_Sensor_IsValid(value));
  set_has_sensor();
  sensor_ = value;
}

// repeated .OwData ow = 4;
inline int Rs485::ow_size() const {
  return ow_.size();
}
inline void Rs485::clear_ow() {
  ow_.Clear();
}
inline const ::OwData& Rs485::ow(int index) const {
  return ow_.Get(index);
}
inline ::OwData* Rs485::mutable_ow(int index) {
  return ow_.Mutable(index);
}
inline ::OwData* Rs485::add_ow() {
  return ow_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::OwData >&
Rs485::ow() const {
  return ow_;
}
inline ::google::protobuf::RepeatedPtrField< ::OwData >*
Rs485::mutable_ow() {
  return &ow_;
}

// repeated .AnalogData ad = 5;
inline int Rs485::ad_size() const {
  return ad_.size();
}
inline void Rs485::clear_ad() {
  ad_.Clear();
}
inline const ::AnalogData& Rs485::ad(int index) const {
  return ad_.Get(index);
}
inline ::AnalogData* Rs485::mutable_ad(int index) {
  return ad_.Mutable(index);
}
inline ::AnalogData* Rs485::add_ad() {
  return ad_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::AnalogData >&
Rs485::ad() const {
  return ad_;
}
inline ::google::protobuf::RepeatedPtrField< ::AnalogData >*
Rs485::mutable_ad() {
  return &ad_;
}

// repeated .TempAccelData tad = 6;
inline int Rs485::tad_size() const {
  return tad_.size();
}
inline void Rs485::clear_tad() {
  tad_.Clear();
}
inline const ::TempAccelData& Rs485::tad(int index) const {
  return tad_.Get(index);
}
inline ::TempAccelData* Rs485::mutable_tad(int index) {
  return tad_.Mutable(index);
}
inline ::TempAccelData* Rs485::add_tad() {
  return tad_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::TempAccelData >&
Rs485::tad() const {
  return tad_;
}
inline ::google::protobuf::RepeatedPtrField< ::TempAccelData >*
Rs485::mutable_tad() {
  return &tad_;
}

// -------------------------------------------------------------------

// OwData

// required int32 id = 1;
inline bool OwData::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void OwData::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void OwData::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void OwData::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 OwData::id() const {
  return id_;
}
inline void OwData::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// required float value = 2;
inline bool OwData::has_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void OwData::set_has_value() {
  _has_bits_[0] |= 0x00000002u;
}
inline void OwData::clear_has_value() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void OwData::clear_value() {
  value_ = 0;
  clear_has_value();
}
inline float OwData::value() const {
  return value_;
}
inline void OwData::set_value(float value) {
  set_has_value();
  value_ = value;
}

// -------------------------------------------------------------------

// AnalogData

// required int32 adc = 1;
inline bool AnalogData::has_adc() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AnalogData::set_has_adc() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AnalogData::clear_has_adc() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AnalogData::clear_adc() {
  adc_ = 0;
  clear_has_adc();
}
inline ::google::protobuf::int32 AnalogData::adc() const {
  return adc_;
}
inline void AnalogData::set_adc(::google::protobuf::int32 value) {
  set_has_adc();
  adc_ = value;
}

// required float value = 2;
inline bool AnalogData::has_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void AnalogData::set_has_value() {
  _has_bits_[0] |= 0x00000002u;
}
inline void AnalogData::clear_has_value() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void AnalogData::clear_value() {
  value_ = 0;
  clear_has_value();
}
inline float AnalogData::value() const {
  return value_;
}
inline void AnalogData::set_value(float value) {
  set_has_value();
  value_ = value;
}

// -------------------------------------------------------------------

// TempAccelData

// required int32 id = 1;
inline bool TempAccelData::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TempAccelData::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TempAccelData::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TempAccelData::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 TempAccelData::id() const {
  return id_;
}
inline void TempAccelData::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// required float pitch = 2;
inline bool TempAccelData::has_pitch() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void TempAccelData::set_has_pitch() {
  _has_bits_[0] |= 0x00000002u;
}
inline void TempAccelData::clear_has_pitch() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void TempAccelData::clear_pitch() {
  pitch_ = 0;
  clear_has_pitch();
}
inline float TempAccelData::pitch() const {
  return pitch_;
}
inline void TempAccelData::set_pitch(float value) {
  set_has_pitch();
  pitch_ = value;
}

// required float roll = 3;
inline bool TempAccelData::has_roll() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void TempAccelData::set_has_roll() {
  _has_bits_[0] |= 0x00000004u;
}
inline void TempAccelData::clear_has_roll() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void TempAccelData::clear_roll() {
  roll_ = 0;
  clear_has_roll();
}
inline float TempAccelData::roll() const {
  return roll_;
}
inline void TempAccelData::set_roll(float value) {
  set_has_roll();
  roll_ = value;
}

// required float temp = 4;
inline bool TempAccelData::has_temp() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void TempAccelData::set_has_temp() {
  _has_bits_[0] |= 0x00000008u;
}
inline void TempAccelData::clear_has_temp() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void TempAccelData::clear_temp() {
  temp_ = 0;
  clear_has_temp();
}
inline float TempAccelData::temp() const {
  return temp_;
}
inline void TempAccelData::set_temp(float value) {
  set_has_temp();
  temp_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Rs485_Type>() {
  return ::Rs485_Type_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Rs485_Sensor>() {
  return ::Rs485_Sensor_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_rs485_5fmessage_2eproto__INCLUDED
