/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_ShortTTI_r15_H_
#define	_ShortTTI_r15_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ShortTTI-Length-r15.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ShortTTI-r15 */
typedef struct ShortTTI_r15 {
	ShortTTI_Length_r15_t	*dl_STTI_Length_r15;	/* OPTIONAL */
	ShortTTI_Length_r15_t	*ul_STTI_Length_r15;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ShortTTI_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ShortTTI_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_ShortTTI_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_ShortTTI_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _ShortTTI_r15_H_ */
#include "asn_internal.h"
