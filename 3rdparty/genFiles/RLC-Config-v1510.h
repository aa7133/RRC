/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_RLC_Config_v1510_H_
#define	_RLC_Config_v1510_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RLC_Config_v1510__reestablishRLC_r15 {
	RLC_Config_v1510__reestablishRLC_r15_true	= 0
} e_RLC_Config_v1510__reestablishRLC_r15;

/* RLC-Config-v1510 */
typedef struct RLC_Config_v1510 {
	long	 reestablishRLC_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RLC_Config_v1510_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_reestablishRLC_r15_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RLC_Config_v1510;
extern asn_SEQUENCE_specifics_t asn_SPC_RLC_Config_v1510_specs_1;
extern asn_TYPE_member_t asn_MBR_RLC_Config_v1510_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RLC_Config_v1510_H_ */
#include "asn_internal.h"
