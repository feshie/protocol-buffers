# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: rs485_message.proto

from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)




DESCRIPTOR = _descriptor.FileDescriptor(
  name='rs485_message.proto',
  package='',
  serialized_pb='\n\x13rs485_message.proto\"\x83\x02\n\x05Rs485\x12\x0b\n\x03\x64st\x18\x01 \x02(\x05\x12\x1f\n\x04type\x18\x02 \x02(\x0e\x32\x0b.Rs485.Type:\x04READ\x12\x1d\n\x06sensor\x18\x03 \x01(\x0e\x32\r.Rs485.Sensor\x12\x13\n\x02ow\x18\x04 \x03(\x0b\x32\x07.OwData\x12\x17\n\x02\x61\x64\x18\x05 \x03(\x0b\x32\x0b.AnalogData\x12\x1b\n\x03tad\x18\x06 \x03(\x0b\x32\x0e.TempAccelData\"\x1a\n\x04Type\x12\x08\n\x04READ\x10\x00\x12\x08\n\x04\x44\x41TA\x10\x01\"F\n\x06Sensor\x12\x06\n\x02OW\x10\x00\x12\x0c\n\x08TA_CHAIN\x10\x01\x12\x08\n\x04\x41\x44\x43\x30\x10\x02\x12\x08\n\x04\x41\x44\x43\x31\x10\x03\x12\x08\n\x04\x41\x44\x43\x32\x10\x04\x12\x08\n\x04\x41\x44\x43\x33\x10\x05\"#\n\x06OwData\x12\n\n\x02id\x18\x01 \x02(\x05\x12\r\n\x05value\x18\x02 \x02(\x02\"(\n\nAnalogData\x12\x0b\n\x03\x61\x64\x63\x18\x01 \x02(\x05\x12\r\n\x05value\x18\x02 \x02(\x02\"F\n\rTempAccelData\x12\n\n\x02id\x18\x01 \x02(\x05\x12\r\n\x05pitch\x18\x02 \x02(\x02\x12\x0c\n\x04roll\x18\x03 \x02(\x02\x12\x0c\n\x04temp\x18\x04 \x02(\x02')



_RS485_TYPE = _descriptor.EnumDescriptor(
  name='Type',
  full_name='Rs485.Type',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='READ', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='DATA', index=1, number=1,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=185,
  serialized_end=211,
)

_RS485_SENSOR = _descriptor.EnumDescriptor(
  name='Sensor',
  full_name='Rs485.Sensor',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='OW', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='TA_CHAIN', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ADC0', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ADC1', index=3, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ADC2', index=4, number=4,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ADC3', index=5, number=5,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=213,
  serialized_end=283,
)


_RS485 = _descriptor.Descriptor(
  name='Rs485',
  full_name='Rs485',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='dst', full_name='Rs485.dst', index=0,
      number=1, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='type', full_name='Rs485.type', index=1,
      number=2, type=14, cpp_type=8, label=2,
      has_default_value=True, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='sensor', full_name='Rs485.sensor', index=2,
      number=3, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ow', full_name='Rs485.ow', index=3,
      number=4, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ad', full_name='Rs485.ad', index=4,
      number=5, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='tad', full_name='Rs485.tad', index=5,
      number=6, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _RS485_TYPE,
    _RS485_SENSOR,
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=24,
  serialized_end=283,
)


_OWDATA = _descriptor.Descriptor(
  name='OwData',
  full_name='OwData',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='OwData.id', index=0,
      number=1, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='value', full_name='OwData.value', index=1,
      number=2, type=2, cpp_type=6, label=2,
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
  serialized_start=285,
  serialized_end=320,
)


_ANALOGDATA = _descriptor.Descriptor(
  name='AnalogData',
  full_name='AnalogData',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='adc', full_name='AnalogData.adc', index=0,
      number=1, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='value', full_name='AnalogData.value', index=1,
      number=2, type=2, cpp_type=6, label=2,
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
  serialized_start=322,
  serialized_end=362,
)


_TEMPACCELDATA = _descriptor.Descriptor(
  name='TempAccelData',
  full_name='TempAccelData',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='TempAccelData.id', index=0,
      number=1, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='pitch', full_name='TempAccelData.pitch', index=1,
      number=2, type=2, cpp_type=6, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='roll', full_name='TempAccelData.roll', index=2,
      number=3, type=2, cpp_type=6, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='temp', full_name='TempAccelData.temp', index=3,
      number=4, type=2, cpp_type=6, label=2,
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
  serialized_start=364,
  serialized_end=434,
)

_RS485.fields_by_name['type'].enum_type = _RS485_TYPE
_RS485.fields_by_name['sensor'].enum_type = _RS485_SENSOR
_RS485.fields_by_name['ow'].message_type = _OWDATA
_RS485.fields_by_name['ad'].message_type = _ANALOGDATA
_RS485.fields_by_name['tad'].message_type = _TEMPACCELDATA
_RS485_TYPE.containing_type = _RS485;
_RS485_SENSOR.containing_type = _RS485;
DESCRIPTOR.message_types_by_name['Rs485'] = _RS485
DESCRIPTOR.message_types_by_name['OwData'] = _OWDATA
DESCRIPTOR.message_types_by_name['AnalogData'] = _ANALOGDATA
DESCRIPTOR.message_types_by_name['TempAccelData'] = _TEMPACCELDATA

class Rs485(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _RS485

  # @@protoc_insertion_point(class_scope:Rs485)

class OwData(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _OWDATA

  # @@protoc_insertion_point(class_scope:OwData)

class AnalogData(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _ANALOGDATA

  # @@protoc_insertion_point(class_scope:AnalogData)

class TempAccelData(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _TEMPACCELDATA

  # @@protoc_insertion_point(class_scope:TempAccelData)


# @@protoc_insertion_point(module_scope)
