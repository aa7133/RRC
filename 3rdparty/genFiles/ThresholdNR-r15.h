/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_ThresholdNR_r15_H_
#define	_ThresholdNR_r15_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RSRP-RangeNR-r15.h"
#include "RSRQ-RangeNR-r15.h"
#include "RS-SINR-RangeNR-r15.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ThresholdNR_r15_PR {
	ThresholdNR_r15_PR_NOTHING,	/* No components present */
	ThresholdNR_r15_PR_nr_RSRP_r15,
	ThresholdNR_r15_PR_nr_RSRQ_r15,
	ThresholdNR_r15_PR_nr_SINR_r15
} ThresholdNR_r15_PR;

/* ThresholdNR-r15 */
typedef struct ThresholdNR_r15 {
	ThresholdNR_r15_PR present;
	union ThresholdNR_r15_u {
		RSRP_RangeNR_r15_t	 nr_RSRP_r15;
		RSRQ_RangeNR_r15_t	 nr_RSRQ_r15;
		RS_SINR_RangeNR_r15_t	 nr_SINR_r15;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ThresholdNR_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ThresholdNR_r15;
extern asn_CHOICE_specifics_t asn_SPC_ThresholdNR_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_ThresholdNR_r15_1[3];
extern asn_per_constraints_t asn_PER_type_ThresholdNR_r15_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ThresholdNR_r15_H_ */
#include "asn_internal.h"
