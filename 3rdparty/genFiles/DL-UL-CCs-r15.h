/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_DL_UL_CCs_r15_H_
#define	_DL_UL_CCs_r15_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* DL-UL-CCs-r15 */
typedef struct DL_UL_CCs_r15 {
	long	*maxNumberDL_CCs_r15;	/* OPTIONAL */
	long	*maxNumberUL_CCs_r15;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_UL_CCs_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_UL_CCs_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_DL_UL_CCs_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_DL_UL_CCs_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _DL_UL_CCs_r15_H_ */
#include "asn_internal.h"
