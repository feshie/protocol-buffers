# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: readings.proto

from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)




DESCRIPTOR = _descriptor.FileDescriptor(
  name='readings.proto',
  package='',
  serialized_pb='\n\x0ereadings.proto\"\x93\x01\n\x06Sample\x12\x0c\n\x04time\x18\x01 \x02(\x07\x12\x0c\n\x04\x62\x61tt\x18\x02 \x01(\x02\x12\x0c\n\x04temp\x18\x03 \x01(\x02\x12\x0c\n\x04\x61\x63\x63X\x18\x04 \x01(\x11\x12\x0c\n\x04\x61\x63\x63Y\x18\x05 \x01(\x11\x12\x0c\n\x04\x61\x63\x63Z\x18\x06 \x01(\x11\x12\x0c\n\x04\x41\x44\x43\x31\x18\x07 \x01(\r\x12\x0c\n\x04\x41\x44\x43\x32\x18\x08 \x01(\r\x12\x0c\n\x04rain\x18\t \x01(\r\x12\x0b\n\x03\x41VR\x18\n \x01(\x0c')




_SAMPLE = _descriptor.Descriptor(
  name='Sample',
  full_name='Sample',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='time', full_name='Sample.time', index=0,
      number=1, type=7, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='batt', full_name='Sample.batt', index=1,
      number=2, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='temp', full_name='Sample.temp', index=2,
      number=3, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='accX', full_name='Sample.accX', index=3,
      number=4, type=17, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='accY', full_name='Sample.accY', index=4,
      number=5, type=17, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='accZ', full_name='Sample.accZ', index=5,
      number=6, type=17, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ADC1', full_name='Sample.ADC1', index=6,
      number=7, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ADC2', full_name='Sample.ADC2', index=7,
      number=8, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='rain', full_name='Sample.rain', index=8,
      number=9, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='AVR', full_name='Sample.AVR', index=9,
      number=10, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value="",
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
  serialized_start=19,
  serialized_end=166,
)

DESCRIPTOR.message_types_by_name['Sample'] = _SAMPLE

class Sample(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _SAMPLE

  # @@protoc_insertion_point(class_scope:Sample)


# @@protoc_insertion_point(module_scope)