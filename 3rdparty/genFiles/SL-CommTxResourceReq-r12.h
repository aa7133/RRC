/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_SL_CommTxResourceReq_r12_H_
#define	_SL_CommTxResourceReq_r12_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ARFCN-ValueEUTRA-r9.h"
#include "SL-DestinationInfoList-r12.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SL-CommTxResourceReq-r12 */
typedef struct SL_CommTxResourceReq_r12 {
	ARFCN_ValueEUTRA_r9_t	*carrierFreq_r12;	/* OPTIONAL */
	SL_DestinationInfoList_r12_t	 destinationInfoList_r12;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_CommTxResourceReq_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_CommTxResourceReq_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_CommTxResourceReq_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_CommTxResourceReq_r12_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_CommTxResourceReq_r12_H_ */
#include "asn_internal.h"
