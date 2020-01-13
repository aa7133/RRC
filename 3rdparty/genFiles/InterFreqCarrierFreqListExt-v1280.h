/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_InterFreqCarrierFreqListExt_v1280_H_
#define	_InterFreqCarrierFreqListExt_v1280_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct InterFreqCarrierFreqInfo_v10j0;

/* InterFreqCarrierFreqListExt-v1280 */
typedef struct InterFreqCarrierFreqListExt_v1280 {
	A_SEQUENCE_OF(struct InterFreqCarrierFreqInfo_v10j0) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqCarrierFreqListExt_v1280_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqCarrierFreqListExt_v1280;
extern asn_SET_OF_specifics_t asn_SPC_InterFreqCarrierFreqListExt_v1280_specs_1;
extern asn_TYPE_member_t asn_MBR_InterFreqCarrierFreqListExt_v1280_1[1];
extern asn_per_constraints_t asn_PER_type_InterFreqCarrierFreqListExt_v1280_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _InterFreqCarrierFreqListExt_v1280_H_ */
#include "asn_internal.h"
