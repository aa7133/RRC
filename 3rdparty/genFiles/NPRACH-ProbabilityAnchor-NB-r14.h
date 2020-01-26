/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_NPRACH_ProbabilityAnchor_NB_r14_H_
#define	_NPRACH_ProbabilityAnchor_NB_r14_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NPRACH_ProbabilityAnchor_NB_r14__nprach_ProbabilityAnchor_r14 {
	NPRACH_ProbabilityAnchor_NB_r14__nprach_ProbabilityAnchor_r14_zero	= 0,
	NPRACH_ProbabilityAnchor_NB_r14__nprach_ProbabilityAnchor_r14_oneSixteenth	= 1,
	NPRACH_ProbabilityAnchor_NB_r14__nprach_ProbabilityAnchor_r14_oneFifteenth	= 2,
	NPRACH_ProbabilityAnchor_NB_r14__nprach_ProbabilityAnchor_r14_oneFourteenth	= 3,
	NPRACH_ProbabilityAnchor_NB_r14__nprach_ProbabilityAnchor_r14_oneThirteenth	= 4,
	NPRACH_ProbabilityAnchor_NB_r14__nprach_ProbabilityAnchor_r14_oneTwelfth	= 5,
	NPRACH_ProbabilityAnchor_NB_r14__nprach_ProbabilityAnchor_r14_oneEleventh	= 6,
	NPRACH_ProbabilityAnchor_NB_r14__nprach_ProbabilityAnchor_r14_oneTenth	= 7,
	NPRACH_ProbabilityAnchor_NB_r14__nprach_ProbabilityAnchor_r14_oneNinth	= 8,
	NPRACH_ProbabilityAnchor_NB_r14__nprach_ProbabilityAnchor_r14_oneEighth	= 9,
	NPRACH_ProbabilityAnchor_NB_r14__nprach_ProbabilityAnchor_r14_oneSeventh	= 10,
	NPRACH_ProbabilityAnchor_NB_r14__nprach_ProbabilityAnchor_r14_oneSixth	= 11,
	NPRACH_ProbabilityAnchor_NB_r14__nprach_ProbabilityAnchor_r14_oneFifth	= 12,
	NPRACH_ProbabilityAnchor_NB_r14__nprach_ProbabilityAnchor_r14_oneFourth	= 13,
	NPRACH_ProbabilityAnchor_NB_r14__nprach_ProbabilityAnchor_r14_oneThird	= 14,
	NPRACH_ProbabilityAnchor_NB_r14__nprach_ProbabilityAnchor_r14_oneHalf	= 15
} e_NPRACH_ProbabilityAnchor_NB_r14__nprach_ProbabilityAnchor_r14;

/* NPRACH-ProbabilityAnchor-NB-r14 */
typedef struct NPRACH_ProbabilityAnchor_NB_r14 {
	long	*nprach_ProbabilityAnchor_r14;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NPRACH_ProbabilityAnchor_NB_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_nprach_ProbabilityAnchor_r14_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NPRACH_ProbabilityAnchor_NB_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_NPRACH_ProbabilityAnchor_NB_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_NPRACH_ProbabilityAnchor_NB_r14_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _NPRACH_ProbabilityAnchor_NB_r14_H_ */
#include "asn_internal.h"
