/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_IRAT_ParametersGERAN_v920_H_
#define	_IRAT_ParametersGERAN_v920_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IRAT_ParametersGERAN_v920__dtm_r9 {
	IRAT_ParametersGERAN_v920__dtm_r9_supported	= 0
} e_IRAT_ParametersGERAN_v920__dtm_r9;
typedef enum IRAT_ParametersGERAN_v920__e_RedirectionGERAN_r9 {
	IRAT_ParametersGERAN_v920__e_RedirectionGERAN_r9_supported	= 0
} e_IRAT_ParametersGERAN_v920__e_RedirectionGERAN_r9;

/* IRAT-ParametersGERAN-v920 */
typedef struct IRAT_ParametersGERAN_v920 {
	long	*dtm_r9;	/* OPTIONAL */
	long	*e_RedirectionGERAN_r9;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IRAT_ParametersGERAN_v920_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_dtm_r9_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_e_RedirectionGERAN_r9_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_IRAT_ParametersGERAN_v920;
extern asn_SEQUENCE_specifics_t asn_SPC_IRAT_ParametersGERAN_v920_specs_1;
extern asn_TYPE_member_t asn_MBR_IRAT_ParametersGERAN_v920_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _IRAT_ParametersGERAN_v920_H_ */
#include "asn_internal.h"
