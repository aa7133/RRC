/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_SupportedUDC_r15_H_
#define	_SupportedUDC_r15_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SupportedUDC_r15__supportedStandardDic_r15 {
	SupportedUDC_r15__supportedStandardDic_r15_supported	= 0
} e_SupportedUDC_r15__supportedStandardDic_r15;

/* Forward declarations */
struct SupportedOperatorDic_r15;

/* SupportedUDC-r15 */
typedef struct SupportedUDC_r15 {
	long	*supportedStandardDic_r15;	/* OPTIONAL */
	struct SupportedOperatorDic_r15	*supportedOperatorDic_r15;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SupportedUDC_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_supportedStandardDic_r15_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SupportedUDC_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_SupportedUDC_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_SupportedUDC_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SupportedUDC_r15_H_ */
#include "asn_internal.h"
