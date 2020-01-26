/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_SL_ResourcesInterFreq_r13_H_
#define	_SL_ResourcesInterFreq_r13_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SL_DiscRxPoolList_r12;
struct SL_DiscTxResourcesInterFreq_r13;

/* SL-ResourcesInterFreq-r13 */
typedef struct SL_ResourcesInterFreq_r13 {
	struct SL_DiscRxPoolList_r12	*discRxResourcesInterFreq_r13;	/* OPTIONAL */
	struct SL_DiscTxResourcesInterFreq_r13	*discTxResourcesInterFreq_r13;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_ResourcesInterFreq_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_ResourcesInterFreq_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_ResourcesInterFreq_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_ResourcesInterFreq_r13_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_ResourcesInterFreq_r13_H_ */
#include "asn_internal.h"
