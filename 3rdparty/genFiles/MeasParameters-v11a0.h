/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_MeasParameters_v11a0_H_
#define	_MeasParameters_v11a0_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasParameters_v11a0__benefitsFromInterruption_r11 {
	MeasParameters_v11a0__benefitsFromInterruption_r11_true	= 0
} e_MeasParameters_v11a0__benefitsFromInterruption_r11;

/* MeasParameters-v11a0 */
typedef struct MeasParameters_v11a0 {
	long	*benefitsFromInterruption_r11;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasParameters_v11a0_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_benefitsFromInterruption_r11_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MeasParameters_v11a0;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasParameters_v11a0_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasParameters_v11a0_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasParameters_v11a0_H_ */
#include "asn_internal.h"
