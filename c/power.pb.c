/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.3 */

#include "power.pb.h"

#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t PowerInfo_fields[5] = {
    PB_FIELD(  1, UINT32  , OPTIONAL, STATIC  , FIRST, PowerInfo, batt, batt, 0),
    PB_FIELD(  2, INT32   , OPTIONAL, STATIC  , OTHER, PowerInfo, current, batt, 0),
    PB_FIELD(  3, UINT32  , OPTIONAL, STATIC  , OTHER, PowerInfo, soc, current, 0),
    PB_FIELD(  4, UINT32  , OPTIONAL, STATIC  , OTHER, PowerInfo, mppt, soc, 0),
    PB_LAST_FIELD
};


