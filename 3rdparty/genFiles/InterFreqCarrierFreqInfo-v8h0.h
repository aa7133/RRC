/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_InterFreqCarrierFreqInfo_v8h0_H_
#define	_InterFreqCarrierFreqInfo_v8h0_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MultiBandInfoList;

/* InterFreqCarrierFreqInfo-v8h0 */
typedef struct InterFreqCarrierFreqInfo_v8h0 {
	struct MultiBandInfoList	*multiBandInfoList;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqCarrierFreqInfo_v8h0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqCarrierFreqInfo_v8h0;
extern asn_SEQUENCE_specifics_t asn_SPC_InterFreqCarrierFreqInfo_v8h0_specs_1;
extern asn_TYPE_member_t asn_MBR_InterFreqCarrierFreqInfo_v8h0_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _InterFreqCarrierFreqInfo_v8h0_H_ */
#include "asn_internal.h"
