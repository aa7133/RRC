/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_AffectedCarrierFreq_v1310_H_
#define	_AffectedCarrierFreq_v1310_H_


#include "asn_application.h"

/* Including external dependencies */
#include "MeasObjectId-v1310.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AffectedCarrierFreq-v1310 */
typedef struct AffectedCarrierFreq_v1310 {
	MeasObjectId_v1310_t	*carrierFreq_v1310;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AffectedCarrierFreq_v1310_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AffectedCarrierFreq_v1310;
extern asn_SEQUENCE_specifics_t asn_SPC_AffectedCarrierFreq_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_AffectedCarrierFreq_v1310_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _AffectedCarrierFreq_v1310_H_ */
#include "asn_internal.h"
