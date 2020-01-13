/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_InterFreqCarrierFreqInfo_v10l0_H_
#define	_InterFreqCarrierFreqInfo_v10l0_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NS_PmaxList_v10l0;
struct MultiBandInfoList_v10l0;

/* InterFreqCarrierFreqInfo-v10l0 */
typedef struct InterFreqCarrierFreqInfo_v10l0 {
	struct NS_PmaxList_v10l0	*freqBandInfo_v10l0;	/* OPTIONAL */
	struct MultiBandInfoList_v10l0	*multiBandInfoList_v10l0;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqCarrierFreqInfo_v10l0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqCarrierFreqInfo_v10l0;
extern asn_SEQUENCE_specifics_t asn_SPC_InterFreqCarrierFreqInfo_v10l0_specs_1;
extern asn_TYPE_member_t asn_MBR_InterFreqCarrierFreqInfo_v10l0_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _InterFreqCarrierFreqInfo_v10l0_H_ */
#include "asn_internal.h"
