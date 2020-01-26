/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_DL_GapConfig_NB_v1530_H_
#define	_DL_GapConfig_NB_v1530_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_GapConfig_NB_v1530__dl_GapPeriodicity_v1530 {
	DL_GapConfig_NB_v1530__dl_GapPeriodicity_v1530_sf1024	= 0
} e_DL_GapConfig_NB_v1530__dl_GapPeriodicity_v1530;

/* DL-GapConfig-NB-v1530 */
typedef struct DL_GapConfig_NB_v1530 {
	long	 dl_GapPeriodicity_v1530;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_GapConfig_NB_v1530_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_dl_GapPeriodicity_v1530_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_DL_GapConfig_NB_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_DL_GapConfig_NB_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_DL_GapConfig_NB_v1530_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _DL_GapConfig_NB_v1530_H_ */
#include "asn_internal.h"
