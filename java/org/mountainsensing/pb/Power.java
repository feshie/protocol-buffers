// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: power.proto

package org.mountainsensing.pb;

public final class Power {
  private Power() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
  }
  public interface PowerInfoOrBuilder extends
      // @@protoc_insertion_point(interface_extends:PowerInfo)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>optional uint32 batt = 1;</code>
     *
     * <pre>
     **
     * Battery voltage, mV = batt * 0.625
     * </pre>
     */
    boolean hasBatt();
    /**
     * <code>optional uint32 batt = 1;</code>
     *
     * <pre>
     **
     * Battery voltage, mV = batt * 0.625
     * </pre>
     */
    int getBatt();

    /**
     * <code>optional int32 current = 2;</code>
     *
     * <pre>
     **
     * Charge current into the battery from the solar panel, mA = current * 0.15625
     * </pre>
     */
    boolean hasCurrent();
    /**
     * <code>optional int32 current = 2;</code>
     *
     * <pre>
     **
     * Charge current into the battery from the solar panel, mA = current * 0.15625
     * </pre>
     */
    int getCurrent();

    /**
     * <code>optional uint32 soc = 3;</code>
     *
     * <pre>
     **
     * State of charge of the battery, in %
     * </pre>
     */
    boolean hasSoc();
    /**
     * <code>optional uint32 soc = 3;</code>
     *
     * <pre>
     **
     * State of charge of the battery, in %
     * </pre>
     */
    int getSoc();

    /**
     * <code>optional uint32 mppt = 4;</code>
     *
     * <pre>
     **
     * Maximum power point tracking voltage, V = mppt / 10
     * </pre>
     */
    boolean hasMppt();
    /**
     * <code>optional uint32 mppt = 4;</code>
     *
     * <pre>
     **
     * Maximum power point tracking voltage, V = mppt / 10
     * </pre>
     */
    int getMppt();
  }
  /**
   * Protobuf type {@code PowerInfo}
   *
   * <pre>
   **
   * Represents statistics gathered by the power module
   * </pre>
   */
  public static final class PowerInfo extends
      com.google.protobuf.GeneratedMessage implements
      // @@protoc_insertion_point(message_implements:PowerInfo)
      PowerInfoOrBuilder {
    // Use PowerInfo.newBuilder() to construct.
    private PowerInfo(com.google.protobuf.GeneratedMessage.Builder<?> builder) {
      super(builder);
      this.unknownFields = builder.getUnknownFields();
    }
    private PowerInfo(boolean noInit) { this.unknownFields = com.google.protobuf.UnknownFieldSet.getDefaultInstance(); }

    private static final PowerInfo defaultInstance;
    public static PowerInfo getDefaultInstance() {
      return defaultInstance;
    }

    public PowerInfo getDefaultInstanceForType() {
      return defaultInstance;
    }

    private final com.google.protobuf.UnknownFieldSet unknownFields;
    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
        getUnknownFields() {
      return this.unknownFields;
    }
    private PowerInfo(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      initFields();
      int mutable_bitField0_ = 0;
      com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder();
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            default: {
              if (!parseUnknownField(input, unknownFields,
                                     extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
            case 8: {
              bitField0_ |= 0x00000001;
              batt_ = input.readUInt32();
              break;
            }
            case 16: {
              bitField0_ |= 0x00000002;
              current_ = input.readInt32();
              break;
            }
            case 24: {
              bitField0_ |= 0x00000004;
              soc_ = input.readUInt32();
              break;
            }
            case 32: {
              bitField0_ |= 0x00000008;
              mppt_ = input.readUInt32();
              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e.getMessage()).setUnfinishedMessage(this);
      } finally {
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return org.mountainsensing.pb.Power.internal_static_PowerInfo_descriptor;
    }

    protected com.google.protobuf.GeneratedMessage.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return org.mountainsensing.pb.Power.internal_static_PowerInfo_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              org.mountainsensing.pb.Power.PowerInfo.class, org.mountainsensing.pb.Power.PowerInfo.Builder.class);
    }

    public static com.google.protobuf.Parser<PowerInfo> PARSER =
        new com.google.protobuf.AbstractParser<PowerInfo>() {
      public PowerInfo parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new PowerInfo(input, extensionRegistry);
      }
    };

    @java.lang.Override
    public com.google.protobuf.Parser<PowerInfo> getParserForType() {
      return PARSER;
    }

    private int bitField0_;
    public static final int BATT_FIELD_NUMBER = 1;
    private int batt_;
    /**
     * <code>optional uint32 batt = 1;</code>
     *
     * <pre>
     **
     * Battery voltage, mV = batt * 0.625
     * </pre>
     */
    public boolean hasBatt() {
      return ((bitField0_ & 0x00000001) == 0x00000001);
    }
    /**
     * <code>optional uint32 batt = 1;</code>
     *
     * <pre>
     **
     * Battery voltage, mV = batt * 0.625
     * </pre>
     */
    public int getBatt() {
      return batt_;
    }

    public static final int CURRENT_FIELD_NUMBER = 2;
    private int current_;
    /**
     * <code>optional int32 current = 2;</code>
     *
     * <pre>
     **
     * Charge current into the battery from the solar panel, mA = current * 0.15625
     * </pre>
     */
    public boolean hasCurrent() {
      return ((bitField0_ & 0x00000002) == 0x00000002);
    }
    /**
     * <code>optional int32 current = 2;</code>
     *
     * <pre>
     **
     * Charge current into the battery from the solar panel, mA = current * 0.15625
     * </pre>
     */
    public int getCurrent() {
      return current_;
    }

    public static final int SOC_FIELD_NUMBER = 3;
    private int soc_;
    /**
     * <code>optional uint32 soc = 3;</code>
     *
     * <pre>
     **
     * State of charge of the battery, in %
     * </pre>
     */
    public boolean hasSoc() {
      return ((bitField0_ & 0x00000004) == 0x00000004);
    }
    /**
     * <code>optional uint32 soc = 3;</code>
     *
     * <pre>
     **
     * State of charge of the battery, in %
     * </pre>
     */
    public int getSoc() {
      return soc_;
    }

    public static final int MPPT_FIELD_NUMBER = 4;
    private int mppt_;
    /**
     * <code>optional uint32 mppt = 4;</code>
     *
     * <pre>
     **
     * Maximum power point tracking voltage, V = mppt / 10
     * </pre>
     */
    public boolean hasMppt() {
      return ((bitField0_ & 0x00000008) == 0x00000008);
    }
    /**
     * <code>optional uint32 mppt = 4;</code>
     *
     * <pre>
     **
     * Maximum power point tracking voltage, V = mppt / 10
     * </pre>
     */
    public int getMppt() {
      return mppt_;
    }

    private void initFields() {
      batt_ = 0;
      current_ = 0;
      soc_ = 0;
      mppt_ = 0;
    }
    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized == 1) return true;
      if (isInitialized == 0) return false;

      memoizedIsInitialized = 1;
      return true;
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      getSerializedSize();
      if (((bitField0_ & 0x00000001) == 0x00000001)) {
        output.writeUInt32(1, batt_);
      }
      if (((bitField0_ & 0x00000002) == 0x00000002)) {
        output.writeInt32(2, current_);
      }
      if (((bitField0_ & 0x00000004) == 0x00000004)) {
        output.writeUInt32(3, soc_);
      }
      if (((bitField0_ & 0x00000008) == 0x00000008)) {
        output.writeUInt32(4, mppt_);
      }
      getUnknownFields().writeTo(output);
    }

    private int memoizedSerializedSize = -1;
    public int getSerializedSize() {
      int size = memoizedSerializedSize;
      if (size != -1) return size;

      size = 0;
      if (((bitField0_ & 0x00000001) == 0x00000001)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt32Size(1, batt_);
      }
      if (((bitField0_ & 0x00000002) == 0x00000002)) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt32Size(2, current_);
      }
      if (((bitField0_ & 0x00000004) == 0x00000004)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt32Size(3, soc_);
      }
      if (((bitField0_ & 0x00000008) == 0x00000008)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt32Size(4, mppt_);
      }
      size += getUnknownFields().getSerializedSize();
      memoizedSerializedSize = size;
      return size;
    }

    private static final long serialVersionUID = 0L;
    @java.lang.Override
    protected java.lang.Object writeReplace()
        throws java.io.ObjectStreamException {
      return super.writeReplace();
    }

    public static org.mountainsensing.pb.Power.PowerInfo parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static org.mountainsensing.pb.Power.PowerInfo parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static org.mountainsensing.pb.Power.PowerInfo parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static org.mountainsensing.pb.Power.PowerInfo parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static org.mountainsensing.pb.Power.PowerInfo parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static org.mountainsensing.pb.Power.PowerInfo parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }
    public static org.mountainsensing.pb.Power.PowerInfo parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input);
    }
    public static org.mountainsensing.pb.Power.PowerInfo parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseDelimitedFrom(input, extensionRegistry);
    }
    public static org.mountainsensing.pb.Power.PowerInfo parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return PARSER.parseFrom(input);
    }
    public static org.mountainsensing.pb.Power.PowerInfo parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return PARSER.parseFrom(input, extensionRegistry);
    }

    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(org.mountainsensing.pb.Power.PowerInfo prototype) {
      return newBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() { return newBuilder(this); }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessage.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * Protobuf type {@code PowerInfo}
     *
     * <pre>
     **
     * Represents statistics gathered by the power module
     * </pre>
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessage.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:PowerInfo)
        org.mountainsensing.pb.Power.PowerInfoOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return org.mountainsensing.pb.Power.internal_static_PowerInfo_descriptor;
      }

      protected com.google.protobuf.GeneratedMessage.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return org.mountainsensing.pb.Power.internal_static_PowerInfo_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                org.mountainsensing.pb.Power.PowerInfo.class, org.mountainsensing.pb.Power.PowerInfo.Builder.class);
      }

      // Construct using org.mountainsensing.pb.Power.PowerInfo.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessage.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessage.alwaysUseFieldBuilders) {
        }
      }
      private static Builder create() {
        return new Builder();
      }

      public Builder clear() {
        super.clear();
        batt_ = 0;
        bitField0_ = (bitField0_ & ~0x00000001);
        current_ = 0;
        bitField0_ = (bitField0_ & ~0x00000002);
        soc_ = 0;
        bitField0_ = (bitField0_ & ~0x00000004);
        mppt_ = 0;
        bitField0_ = (bitField0_ & ~0x00000008);
        return this;
      }

      public Builder clone() {
        return create().mergeFrom(buildPartial());
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return org.mountainsensing.pb.Power.internal_static_PowerInfo_descriptor;
      }

      public org.mountainsensing.pb.Power.PowerInfo getDefaultInstanceForType() {
        return org.mountainsensing.pb.Power.PowerInfo.getDefaultInstance();
      }

      public org.mountainsensing.pb.Power.PowerInfo build() {
        org.mountainsensing.pb.Power.PowerInfo result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public org.mountainsensing.pb.Power.PowerInfo buildPartial() {
        org.mountainsensing.pb.Power.PowerInfo result = new org.mountainsensing.pb.Power.PowerInfo(this);
        int from_bitField0_ = bitField0_;
        int to_bitField0_ = 0;
        if (((from_bitField0_ & 0x00000001) == 0x00000001)) {
          to_bitField0_ |= 0x00000001;
        }
        result.batt_ = batt_;
        if (((from_bitField0_ & 0x00000002) == 0x00000002)) {
          to_bitField0_ |= 0x00000002;
        }
        result.current_ = current_;
        if (((from_bitField0_ & 0x00000004) == 0x00000004)) {
          to_bitField0_ |= 0x00000004;
        }
        result.soc_ = soc_;
        if (((from_bitField0_ & 0x00000008) == 0x00000008)) {
          to_bitField0_ |= 0x00000008;
        }
        result.mppt_ = mppt_;
        result.bitField0_ = to_bitField0_;
        onBuilt();
        return result;
      }

      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof org.mountainsensing.pb.Power.PowerInfo) {
          return mergeFrom((org.mountainsensing.pb.Power.PowerInfo)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(org.mountainsensing.pb.Power.PowerInfo other) {
        if (other == org.mountainsensing.pb.Power.PowerInfo.getDefaultInstance()) return this;
        if (other.hasBatt()) {
          setBatt(other.getBatt());
        }
        if (other.hasCurrent()) {
          setCurrent(other.getCurrent());
        }
        if (other.hasSoc()) {
          setSoc(other.getSoc());
        }
        if (other.hasMppt()) {
          setMppt(other.getMppt());
        }
        this.mergeUnknownFields(other.getUnknownFields());
        return this;
      }

      public final boolean isInitialized() {
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        org.mountainsensing.pb.Power.PowerInfo parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (org.mountainsensing.pb.Power.PowerInfo) e.getUnfinishedMessage();
          throw e;
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }
      private int bitField0_;

      private int batt_ ;
      /**
       * <code>optional uint32 batt = 1;</code>
       *
       * <pre>
       **
       * Battery voltage, mV = batt * 0.625
       * </pre>
       */
      public boolean hasBatt() {
        return ((bitField0_ & 0x00000001) == 0x00000001);
      }
      /**
       * <code>optional uint32 batt = 1;</code>
       *
       * <pre>
       **
       * Battery voltage, mV = batt * 0.625
       * </pre>
       */
      public int getBatt() {
        return batt_;
      }
      /**
       * <code>optional uint32 batt = 1;</code>
       *
       * <pre>
       **
       * Battery voltage, mV = batt * 0.625
       * </pre>
       */
      public Builder setBatt(int value) {
        bitField0_ |= 0x00000001;
        batt_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>optional uint32 batt = 1;</code>
       *
       * <pre>
       **
       * Battery voltage, mV = batt * 0.625
       * </pre>
       */
      public Builder clearBatt() {
        bitField0_ = (bitField0_ & ~0x00000001);
        batt_ = 0;
        onChanged();
        return this;
      }

      private int current_ ;
      /**
       * <code>optional int32 current = 2;</code>
       *
       * <pre>
       **
       * Charge current into the battery from the solar panel, mA = current * 0.15625
       * </pre>
       */
      public boolean hasCurrent() {
        return ((bitField0_ & 0x00000002) == 0x00000002);
      }
      /**
       * <code>optional int32 current = 2;</code>
       *
       * <pre>
       **
       * Charge current into the battery from the solar panel, mA = current * 0.15625
       * </pre>
       */
      public int getCurrent() {
        return current_;
      }
      /**
       * <code>optional int32 current = 2;</code>
       *
       * <pre>
       **
       * Charge current into the battery from the solar panel, mA = current * 0.15625
       * </pre>
       */
      public Builder setCurrent(int value) {
        bitField0_ |= 0x00000002;
        current_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>optional int32 current = 2;</code>
       *
       * <pre>
       **
       * Charge current into the battery from the solar panel, mA = current * 0.15625
       * </pre>
       */
      public Builder clearCurrent() {
        bitField0_ = (bitField0_ & ~0x00000002);
        current_ = 0;
        onChanged();
        return this;
      }

      private int soc_ ;
      /**
       * <code>optional uint32 soc = 3;</code>
       *
       * <pre>
       **
       * State of charge of the battery, in %
       * </pre>
       */
      public boolean hasSoc() {
        return ((bitField0_ & 0x00000004) == 0x00000004);
      }
      /**
       * <code>optional uint32 soc = 3;</code>
       *
       * <pre>
       **
       * State of charge of the battery, in %
       * </pre>
       */
      public int getSoc() {
        return soc_;
      }
      /**
       * <code>optional uint32 soc = 3;</code>
       *
       * <pre>
       **
       * State of charge of the battery, in %
       * </pre>
       */
      public Builder setSoc(int value) {
        bitField0_ |= 0x00000004;
        soc_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>optional uint32 soc = 3;</code>
       *
       * <pre>
       **
       * State of charge of the battery, in %
       * </pre>
       */
      public Builder clearSoc() {
        bitField0_ = (bitField0_ & ~0x00000004);
        soc_ = 0;
        onChanged();
        return this;
      }

      private int mppt_ ;
      /**
       * <code>optional uint32 mppt = 4;</code>
       *
       * <pre>
       **
       * Maximum power point tracking voltage, V = mppt / 10
       * </pre>
       */
      public boolean hasMppt() {
        return ((bitField0_ & 0x00000008) == 0x00000008);
      }
      /**
       * <code>optional uint32 mppt = 4;</code>
       *
       * <pre>
       **
       * Maximum power point tracking voltage, V = mppt / 10
       * </pre>
       */
      public int getMppt() {
        return mppt_;
      }
      /**
       * <code>optional uint32 mppt = 4;</code>
       *
       * <pre>
       **
       * Maximum power point tracking voltage, V = mppt / 10
       * </pre>
       */
      public Builder setMppt(int value) {
        bitField0_ |= 0x00000008;
        mppt_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>optional uint32 mppt = 4;</code>
       *
       * <pre>
       **
       * Maximum power point tracking voltage, V = mppt / 10
       * </pre>
       */
      public Builder clearMppt() {
        bitField0_ = (bitField0_ & ~0x00000008);
        mppt_ = 0;
        onChanged();
        return this;
      }

      // @@protoc_insertion_point(builder_scope:PowerInfo)
    }

    static {
      defaultInstance = new PowerInfo(true);
      defaultInstance.initFields();
    }

    // @@protoc_insertion_point(class_scope:PowerInfo)
  }

  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_PowerInfo_descriptor;
  private static
    com.google.protobuf.GeneratedMessage.FieldAccessorTable
      internal_static_PowerInfo_fieldAccessorTable;

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n\013power.proto\"E\n\tPowerInfo\022\014\n\004batt\030\001 \001(\r" +
      "\022\017\n\007current\030\002 \001(\005\022\013\n\003soc\030\003 \001(\r\022\014\n\004mppt\030\004" +
      " \001(\rB\030\n\026org.mountainsensing.pb"
    };
    com.google.protobuf.Descriptors.FileDescriptor.InternalDescriptorAssigner assigner =
        new com.google.protobuf.Descriptors.FileDescriptor.    InternalDescriptorAssigner() {
          public com.google.protobuf.ExtensionRegistry assignDescriptors(
              com.google.protobuf.Descriptors.FileDescriptor root) {
            descriptor = root;
            return null;
          }
        };
    com.google.protobuf.Descriptors.FileDescriptor
      .internalBuildGeneratedFileFrom(descriptorData,
        new com.google.protobuf.Descriptors.FileDescriptor[] {
        }, assigner);
    internal_static_PowerInfo_descriptor =
      getDescriptor().getMessageTypes().get(0);
    internal_static_PowerInfo_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessage.FieldAccessorTable(
        internal_static_PowerInfo_descriptor,
        new java.lang.String[] { "Batt", "Current", "Soc", "Mppt", });
  }

  // @@protoc_insertion_point(outer_class_scope)
}
