/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_SL_MinT2Value_r15_H_
#define	_SL_MinT2Value_r15_H_


#include "asn_application.h"

/* Including external dependencies */
#include "SL-PriorityList-r13.h"
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SL-MinT2Value-r15 */
typedef struct SL_MinT2Value_r15 {
	SL_PriorityList_r13_t	 priorityList_r15;
	long	 minT2Value_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_MinT2Value_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_MinT2Value_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_MinT2Value_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_MinT2Value_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_MinT2Value_r15_H_ */
#include "asn_internal.h"
