/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.3 */

#include "readings.pb.h"

#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t Sample_fields[11] = {
    PB_FIELD(  1, FIXED32 , REQUIRED, STATIC  , FIRST, Sample, time, time, 0),
    PB_FIELD(  2, FLOAT   , OPTIONAL, STATIC  , OTHER, Sample, batt, time, 0),
    PB_FIELD(  3, FLOAT   , OPTIONAL, STATIC  , OTHER, Sample, temp, batt, 0),
    PB_FIELD(  4, SINT32  , OPTIONAL, STATIC  , OTHER, Sample, accX, temp, 0),
    PB_FIELD(  5, SINT32  , OPTIONAL, STATIC  , OTHER, Sample, accY, accX, 0),
    PB_FIELD(  6, SINT32  , OPTIONAL, STATIC  , OTHER, Sample, accZ, accY, 0),
    PB_FIELD(  7, UINT32  , OPTIONAL, STATIC  , OTHER, Sample, ADC1, accZ, 0),
    PB_FIELD(  8, UINT32  , OPTIONAL, STATIC  , OTHER, Sample, ADC2, ADC1, 0),
    PB_FIELD(  9, UINT32  , OPTIONAL, STATIC  , OTHER, Sample, rain, ADC2, 0),
    PB_FIELD( 10, BYTES   , OPTIONAL, STATIC  , OTHER, Sample, AVR, rain, 0),
    PB_LAST_FIELD
};


