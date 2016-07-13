/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.6 */

#include "settings.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t SensorConfig_fields[8] = {
    PB_FIELD(  1, BOOL    , REQUIRED, STATIC  , FIRST, SensorConfig, hasADC1, hasADC1, 0),
    PB_FIELD(  2, BOOL    , REQUIRED, STATIC  , OTHER, SensorConfig, hasADC2, hasADC1, 0),
    PB_FIELD(  3, BOOL    , REQUIRED, STATIC  , OTHER, SensorConfig, hasRain, hasADC2, 0),
    PB_FIELD(  4, UINT32  , OPTIONAL, STATIC  , OTHER, SensorConfig, avrID, hasRain, 0),
    PB_FIELD(  5, UINT32  , REQUIRED, STATIC  , OTHER, SensorConfig, interval, avrID, 0),
    PB_FIELD(  6, UENUM   , REQUIRED, STATIC  , OTHER, SensorConfig, routingMode, interval, 0),
    PB_FIELD(  7, UINT32  , OPTIONAL, STATIC  , OTHER, SensorConfig, powerID, routingMode, 0),
    PB_LAST_FIELD
};


/* @@protoc_insertion_point(eof) */
