/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_SL_V2X_CommTxResourceReq_r14_H_
#define	_SL_V2X_CommTxResourceReq_r14_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "SL-TypeTxSync-r14.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SL_DestinationInfoList_r12;

/* SL-V2X-CommTxResourceReq-r14 */
typedef struct SL_V2X_CommTxResourceReq_r14 {
	long	*carrierFreqCommTx_r14;	/* OPTIONAL */
	SL_TypeTxSync_r14_t	*v2x_TypeTxSync_r14;	/* OPTIONAL */
	struct SL_DestinationInfoList_r12	*v2x_DestinationInfoList_r14;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_V2X_CommTxResourceReq_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_V2X_CommTxResourceReq_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_V2X_CommTxResourceReq_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_V2X_CommTxResourceReq_r14_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_V2X_CommTxResourceReq_r14_H_ */
#include "asn_internal.h"
