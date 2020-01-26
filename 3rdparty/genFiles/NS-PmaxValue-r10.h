/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_NS_PmaxValue_r10_H_
#define	_NS_PmaxValue_r10_H_


#include "asn_application.h"

/* Including external dependencies */
#include "P-Max.h"
#include "AdditionalSpectrumEmission.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* NS-PmaxValue-r10 */
typedef struct NS_PmaxValue_r10 {
	P_Max_t	*additionalPmax_r10;	/* OPTIONAL */
	AdditionalSpectrumEmission_t	 additionalSpectrumEmission;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NS_PmaxValue_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NS_PmaxValue_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_NS_PmaxValue_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_NS_PmaxValue_r10_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NS_PmaxValue_r10_H_ */
#include "asn_internal.h"
