# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: settings.proto

from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)




DESCRIPTOR = _descriptor.FileDescriptor(
  name='settings.proto',
  package='',
  serialized_pb='\n\x0esettings.proto\"c\n\x0cSensorConfig\x12\x0f\n\x07hasADC1\x18\x01 \x02(\x08\x12\x0f\n\x07hasADC2\x18\x02 \x02(\x08\x12\x0f\n\x07hasRain\x18\x03 \x02(\x08\x12\x0e\n\x06\x61vrIDs\x18\x04 \x03(\r\x12\x10\n\x08interval\x18\x05 \x02(\x04\"H\n\nPOSTConfig\x12\n\n\x02ip\x18\x01 \x03(\r\x12\x0c\n\x04port\x18\x02 \x02(\r\x12\x10\n\x08interval\x18\x03 \x02(\x04\x12\x0e\n\x06offset\x18\x04 \x01(\x04')




_SENSORCONFIG = _descriptor.Descriptor(
  name='SensorConfig',
  full_name='SensorConfig',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='hasADC1', full_name='SensorConfig.hasADC1', index=0,
      number=1, type=8, cpp_type=7, label=2,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='hasADC2', full_name='SensorConfig.hasADC2', index=1,
      number=2, type=8, cpp_type=7, label=2,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='hasRain', full_name='SensorConfig.hasRain', index=2,
      number=3, type=8, cpp_type=7, label=2,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='avrIDs', full_name='SensorConfig.avrIDs', index=3,
      number=4, type=13, cpp_type=3, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='interval', full_name='SensorConfig.interval', index=4,
      number=5, type=4, cpp_type=4, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=18,
  serialized_end=117,
)


_POSTCONFIG = _descriptor.Descriptor(
  name='POSTConfig',
  full_name='POSTConfig',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='ip', full_name='POSTConfig.ip', index=0,
      number=1, type=13, cpp_type=3, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='port', full_name='POSTConfig.port', index=1,
      number=2, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='interval', full_name='POSTConfig.interval', index=2,
      number=3, type=4, cpp_type=4, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='offset', full_name='POSTConfig.offset', index=3,
      number=4, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=119,
  serialized_end=191,
)

DESCRIPTOR.message_types_by_name['SensorConfig'] = _SENSORCONFIG
DESCRIPTOR.message_types_by_name['POSTConfig'] = _POSTCONFIG

class SensorConfig(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _SENSORCONFIG

  # @@protoc_insertion_point(class_scope:SensorConfig)

class POSTConfig(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _POSTCONFIG

  # @@protoc_insertion_point(class_scope:POSTConfig)


# @@protoc_insertion_point(module_scope)