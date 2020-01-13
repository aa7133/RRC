/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_RSS_Config_r15_H_
#define	_RSS_Config_r15_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RSS_Config_r15__duration_r15 {
	RSS_Config_r15__duration_r15_sf8	= 0,
	RSS_Config_r15__duration_r15_sf16	= 1,
	RSS_Config_r15__duration_r15_sf32	= 2,
	RSS_Config_r15__duration_r15_sf40	= 3
} e_RSS_Config_r15__duration_r15;
typedef enum RSS_Config_r15__periodicity_r15 {
	RSS_Config_r15__periodicity_r15_ms160	= 0,
	RSS_Config_r15__periodicity_r15_ms320	= 1,
	RSS_Config_r15__periodicity_r15_ms640	= 2,
	RSS_Config_r15__periodicity_r15_ms1280	= 3
} e_RSS_Config_r15__periodicity_r15;
typedef enum RSS_Config_r15__powerBoost_r15 {
	RSS_Config_r15__powerBoost_r15_dB0	= 0,
	RSS_Config_r15__powerBoost_r15_dB3	= 1,
	RSS_Config_r15__powerBoost_r15_dB4dot8	= 2,
	RSS_Config_r15__powerBoost_r15_dB6	= 3
} e_RSS_Config_r15__powerBoost_r15;

/* RSS-Config-r15 */
typedef struct RSS_Config_r15 {
	long	 duration_r15;
	long	 freqLocation_r15;
	long	 periodicity_r15;
	long	 powerBoost_r15;
	long	 timeOffset_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RSS_Config_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_duration_r15_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_periodicity_r15_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_powerBoost_r15_13;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RSS_Config_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_RSS_Config_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_RSS_Config_r15_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _RSS_Config_r15_H_ */
#include "asn_internal.h"
