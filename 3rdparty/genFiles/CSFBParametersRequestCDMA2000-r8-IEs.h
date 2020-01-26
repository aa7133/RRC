/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_CSFBParametersRequestCDMA2000_r8_IEs_H_
#define	_CSFBParametersRequestCDMA2000_r8_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CSFBParametersRequestCDMA2000_v8a0_IEs;

/* CSFBParametersRequestCDMA2000-r8-IEs */
typedef struct CSFBParametersRequestCDMA2000_r8_IEs {
	struct CSFBParametersRequestCDMA2000_v8a0_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSFBParametersRequestCDMA2000_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSFBParametersRequestCDMA2000_r8_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_CSFBParametersRequestCDMA2000_r8_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_CSFBParametersRequestCDMA2000_r8_IEs_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _CSFBParametersRequestCDMA2000_r8_IEs_H_ */
#include "asn_internal.h"
