/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_BarringPerACDC_Category_r13_H_
#define	_BarringPerACDC_Category_r13_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BarringPerACDC_Category_r13__acdc_BarringConfig_r13__ac_BarringFactor_r13 {
	BarringPerACDC_Category_r13__acdc_BarringConfig_r13__ac_BarringFactor_r13_p00	= 0,
	BarringPerACDC_Category_r13__acdc_BarringConfig_r13__ac_BarringFactor_r13_p05	= 1,
	BarringPerACDC_Category_r13__acdc_BarringConfig_r13__ac_BarringFactor_r13_p10	= 2,
	BarringPerACDC_Category_r13__acdc_BarringConfig_r13__ac_BarringFactor_r13_p15	= 3,
	BarringPerACDC_Category_r13__acdc_BarringConfig_r13__ac_BarringFactor_r13_p20	= 4,
	BarringPerACDC_Category_r13__acdc_BarringConfig_r13__ac_BarringFactor_r13_p25	= 5,
	BarringPerACDC_Category_r13__acdc_BarringConfig_r13__ac_BarringFactor_r13_p30	= 6,
	BarringPerACDC_Category_r13__acdc_BarringConfig_r13__ac_BarringFactor_r13_p40	= 7,
	BarringPerACDC_Category_r13__acdc_BarringConfig_r13__ac_BarringFactor_r13_p50	= 8,
	BarringPerACDC_Category_r13__acdc_BarringConfig_r13__ac_BarringFactor_r13_p60	= 9,
	BarringPerACDC_Category_r13__acdc_BarringConfig_r13__ac_BarringFactor_r13_p70	= 10,
	BarringPerACDC_Category_r13__acdc_BarringConfig_r13__ac_BarringFactor_r13_p75	= 11,
	BarringPerACDC_Category_r13__acdc_BarringConfig_r13__ac_BarringFactor_r13_p80	= 12,
	BarringPerACDC_Category_r13__acdc_BarringConfig_r13__ac_BarringFactor_r13_p85	= 13,
	BarringPerACDC_Category_r13__acdc_BarringConfig_r13__ac_BarringFactor_r13_p90	= 14,
	BarringPerACDC_Category_r13__acdc_BarringConfig_r13__ac_BarringFactor_r13_p95	= 15
} e_BarringPerACDC_Category_r13__acdc_BarringConfig_r13__ac_BarringFactor_r13;
typedef enum BarringPerACDC_Category_r13__acdc_BarringConfig_r13__ac_BarringTime_r13 {
	BarringPerACDC_Category_r13__acdc_BarringConfig_r13__ac_BarringTime_r13_s4	= 0,
	BarringPerACDC_Category_r13__acdc_BarringConfig_r13__ac_BarringTime_r13_s8	= 1,
	BarringPerACDC_Category_r13__acdc_BarringConfig_r13__ac_BarringTime_r13_s16	= 2,
	BarringPerACDC_Category_r13__acdc_BarringConfig_r13__ac_BarringTime_r13_s32	= 3,
	BarringPerACDC_Category_r13__acdc_BarringConfig_r13__ac_BarringTime_r13_s64	= 4,
	BarringPerACDC_Category_r13__acdc_BarringConfig_r13__ac_BarringTime_r13_s128	= 5,
	BarringPerACDC_Category_r13__acdc_BarringConfig_r13__ac_BarringTime_r13_s256	= 6,
	BarringPerACDC_Category_r13__acdc_BarringConfig_r13__ac_BarringTime_r13_s512	= 7
} e_BarringPerACDC_Category_r13__acdc_BarringConfig_r13__ac_BarringTime_r13;

/* BarringPerACDC-Category-r13 */
typedef struct BarringPerACDC_Category_r13 {
	long	 acdc_Category_r13;
	struct BarringPerACDC_Category_r13__acdc_BarringConfig_r13 {
		long	 ac_BarringFactor_r13;
		long	 ac_BarringTime_r13;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *acdc_BarringConfig_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BarringPerACDC_Category_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ac_BarringFactor_r13_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ac_BarringTime_r13_21;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_BarringPerACDC_Category_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_BarringPerACDC_Category_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_BarringPerACDC_Category_r13_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _BarringPerACDC_Category_r13_H_ */
#include "asn_internal.h"
