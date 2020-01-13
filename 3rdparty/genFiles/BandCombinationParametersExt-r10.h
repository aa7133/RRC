/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_BandCombinationParametersExt_r10_H_
#define	_BandCombinationParametersExt_r10_H_


#include "asn_application.h"

/* Including external dependencies */
#include "SupportedBandwidthCombinationSet-r10.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* BandCombinationParametersExt-r10 */
typedef struct BandCombinationParametersExt_r10 {
	SupportedBandwidthCombinationSet_r10_t	*supportedBandwidthCombinationSet_r10;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandCombinationParametersExt_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BandCombinationParametersExt_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_BandCombinationParametersExt_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_BandCombinationParametersExt_r10_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _BandCombinationParametersExt_r10_H_ */
#include "asn_internal.h"
