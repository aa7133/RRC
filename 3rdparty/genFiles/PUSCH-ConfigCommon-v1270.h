/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_PUSCH_ConfigCommon_v1270_H_
#define	_PUSCH_ConfigCommon_v1270_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PUSCH_ConfigCommon_v1270__enable64QAM_v1270 {
	PUSCH_ConfigCommon_v1270__enable64QAM_v1270_true	= 0
} e_PUSCH_ConfigCommon_v1270__enable64QAM_v1270;

/* PUSCH-ConfigCommon-v1270 */
typedef struct PUSCH_ConfigCommon_v1270 {
	long	 enable64QAM_v1270;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUSCH_ConfigCommon_v1270_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_enable64QAM_v1270_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PUSCH_ConfigCommon_v1270;
extern asn_SEQUENCE_specifics_t asn_SPC_PUSCH_ConfigCommon_v1270_specs_1;
extern asn_TYPE_member_t asn_MBR_PUSCH_ConfigCommon_v1270_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _PUSCH_ConfigCommon_v1270_H_ */
#include "asn_internal.h"