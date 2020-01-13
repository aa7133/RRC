/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_TimeReferenceInfo_r15_H_
#define	_TimeReferenceInfo_r15_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ReferenceTime-r15.h"
#include "NativeInteger.h"
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TimeReferenceInfo_r15__timeInfoType_r15 {
	TimeReferenceInfo_r15__timeInfoType_r15_localClock	= 0
} e_TimeReferenceInfo_r15__timeInfoType_r15;

/* TimeReferenceInfo-r15 */
typedef struct TimeReferenceInfo_r15 {
	ReferenceTime_r15_t	 time_r15;
	long	*uncertainty_r15;	/* OPTIONAL */
	long	*timeInfoType_r15;	/* OPTIONAL */
	long	*referenceSFN_r15;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TimeReferenceInfo_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_timeInfoType_r15_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_TimeReferenceInfo_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_TimeReferenceInfo_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_TimeReferenceInfo_r15_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _TimeReferenceInfo_r15_H_ */
#include "asn_internal.h"
