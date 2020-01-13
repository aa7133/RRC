/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_SRS_CapabilityPerBandPair_v14b0_H_
#define	_SRS_CapabilityPerBandPair_v14b0_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SRS_CapabilityPerBandPair_v14b0__srs_FlexibleTiming_r14 {
	SRS_CapabilityPerBandPair_v14b0__srs_FlexibleTiming_r14_supported	= 0
} e_SRS_CapabilityPerBandPair_v14b0__srs_FlexibleTiming_r14;
typedef enum SRS_CapabilityPerBandPair_v14b0__srs_HARQ_ReferenceConfig_r14 {
	SRS_CapabilityPerBandPair_v14b0__srs_HARQ_ReferenceConfig_r14_supported	= 0
} e_SRS_CapabilityPerBandPair_v14b0__srs_HARQ_ReferenceConfig_r14;

/* SRS-CapabilityPerBandPair-v14b0 */
typedef struct SRS_CapabilityPerBandPair_v14b0 {
	long	*srs_FlexibleTiming_r14;	/* OPTIONAL */
	long	*srs_HARQ_ReferenceConfig_r14;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SRS_CapabilityPerBandPair_v14b0_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_srs_FlexibleTiming_r14_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_srs_HARQ_ReferenceConfig_r14_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SRS_CapabilityPerBandPair_v14b0;
extern asn_SEQUENCE_specifics_t asn_SPC_SRS_CapabilityPerBandPair_v14b0_specs_1;
extern asn_TYPE_member_t asn_MBR_SRS_CapabilityPerBandPair_v14b0_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SRS_CapabilityPerBandPair_v14b0_H_ */
#include "asn_internal.h"