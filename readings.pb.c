/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.2.9-dev at Mon Dec  8 14:38:43 2014. */

#include "readings.pb.h"



const pb_field_t Sample_fields[11] = {
    PB_FIELD2(  1, FIXED32 , REQUIRED, STATIC  , FIRST, Sample, time, time, 0),
    PB_FIELD2(  2, FLOAT   , OPTIONAL, STATIC  , OTHER, Sample, batt, time, 0),
    PB_FIELD2(  3, FLOAT   , OPTIONAL, STATIC  , OTHER, Sample, temp, batt, 0),
    PB_FIELD2(  4, SINT32  , OPTIONAL, STATIC  , OTHER, Sample, accX, temp, 0),
    PB_FIELD2(  5, SINT32  , OPTIONAL, STATIC  , OTHER, Sample, accY, accX, 0),
    PB_FIELD2(  6, SINT32  , OPTIONAL, STATIC  , OTHER, Sample, accZ, accY, 0),
    PB_FIELD2(  7, UINT32  , OPTIONAL, STATIC  , OTHER, Sample, ADC1, accZ, 0),
    PB_FIELD2(  8, UINT32  , OPTIONAL, STATIC  , OTHER, Sample, ADC2, ADC1, 0),
    PB_FIELD2(  9, UINT32  , OPTIONAL, STATIC  , OTHER, Sample, rain, ADC2, 0),
    PB_FIELD2( 10, BYTES   , OPTIONAL, STATIC  , OTHER, Sample, AVR, rain, 0),
    PB_LAST_FIELD
};


