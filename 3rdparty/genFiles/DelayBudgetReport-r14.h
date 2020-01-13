/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_DelayBudgetReport_r14_H_
#define	_DelayBudgetReport_r14_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DelayBudgetReport_r14_PR {
	DelayBudgetReport_r14_PR_NOTHING,	/* No components present */
	DelayBudgetReport_r14_PR_type1,
	DelayBudgetReport_r14_PR_type2
} DelayBudgetReport_r14_PR;
typedef enum DelayBudgetReport_r14__type1 {
	DelayBudgetReport_r14__type1_msMinus1280	= 0,
	DelayBudgetReport_r14__type1_msMinus640	= 1,
	DelayBudgetReport_r14__type1_msMinus320	= 2,
	DelayBudgetReport_r14__type1_msMinus160	= 3,
	DelayBudgetReport_r14__type1_msMinus80	= 4,
	DelayBudgetReport_r14__type1_msMinus60	= 5,
	DelayBudgetReport_r14__type1_msMinus40	= 6,
	DelayBudgetReport_r14__type1_msMinus20	= 7,
	DelayBudgetReport_r14__type1_ms0	= 8,
	DelayBudgetReport_r14__type1_ms20	= 9,
	DelayBudgetReport_r14__type1_ms40	= 10,
	DelayBudgetReport_r14__type1_ms60	= 11,
	DelayBudgetReport_r14__type1_ms80	= 12,
	DelayBudgetReport_r14__type1_ms160	= 13,
	DelayBudgetReport_r14__type1_ms320	= 14,
	DelayBudgetReport_r14__type1_ms640	= 15,
	DelayBudgetReport_r14__type1_ms1280	= 16
} e_DelayBudgetReport_r14__type1;
typedef enum DelayBudgetReport_r14__type2 {
	DelayBudgetReport_r14__type2_msMinus192	= 0,
	DelayBudgetReport_r14__type2_msMinus168	= 1,
	DelayBudgetReport_r14__type2_msMinus144	= 2,
	DelayBudgetReport_r14__type2_msMinus120	= 3,
	DelayBudgetReport_r14__type2_msMinus96	= 4,
	DelayBudgetReport_r14__type2_msMinus72	= 5,
	DelayBudgetReport_r14__type2_msMinus48	= 6,
	DelayBudgetReport_r14__type2_msMinus24	= 7,
	DelayBudgetReport_r14__type2_ms0	= 8,
	DelayBudgetReport_r14__type2_ms24	= 9,
	DelayBudgetReport_r14__type2_ms48	= 10,
	DelayBudgetReport_r14__type2_ms72	= 11,
	DelayBudgetReport_r14__type2_ms96	= 12,
	DelayBudgetReport_r14__type2_ms120	= 13,
	DelayBudgetReport_r14__type2_ms144	= 14,
	DelayBudgetReport_r14__type2_ms168	= 15,
	DelayBudgetReport_r14__type2_ms192	= 16
} e_DelayBudgetReport_r14__type2;

/* DelayBudgetReport-r14 */
typedef struct DelayBudgetReport_r14 {
	DelayBudgetReport_r14_PR present;
	union DelayBudgetReport_r14_u {
		long	 type1;
		long	 type2;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DelayBudgetReport_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_type1_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_type2_20;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_DelayBudgetReport_r14;
extern asn_CHOICE_specifics_t asn_SPC_DelayBudgetReport_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_DelayBudgetReport_r14_1[2];
extern asn_per_constraints_t asn_PER_type_DelayBudgetReport_r14_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _DelayBudgetReport_r14_H_ */
#include "asn_internal.h"
