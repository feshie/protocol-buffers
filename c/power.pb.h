/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.6 */

#ifndef PB_POWER_PB_H_INCLUDED
#define PB_POWER_PB_H_INCLUDED
#include "pb.h"
/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _PowerInfo {
    bool has_batt;
    uint16_t batt;
    bool has_current;
    int16_t current;
    bool has_soc;
    uint16_t soc;
    bool has_mppt;
    uint16_t mppt;
/* @@protoc_insertion_point(struct:PowerInfo) */
} PowerInfo;

/* Default values for struct fields */

/* Initializer values for message structs */
#define PowerInfo_init_default                   {false, 0, false, 0, false, 0, false, 0}
#define PowerInfo_init_zero                      {false, 0, false, 0, false, 0, false, 0}

/* Field tags (for use in manual encoding/decoding) */
#define PowerInfo_batt_tag                       1
#define PowerInfo_current_tag                    2
#define PowerInfo_soc_tag                        3
#define PowerInfo_mppt_tag                       4

/* Struct field encoding specification for nanopb */
extern const pb_field_t PowerInfo_fields[5];

/* Maximum encoded size of messages (where known) */
#define PowerInfo_size                           29

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define POWER_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
