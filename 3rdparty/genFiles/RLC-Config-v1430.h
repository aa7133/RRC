/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_RLC_Config_v1430_H_
#define	_RLC_Config_v1430_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NULL.h"
#include "PollByte-r14.h"
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RLC_Config_v1430_PR {
	RLC_Config_v1430_PR_NOTHING,	/* No components present */
	RLC_Config_v1430_PR_release,
	RLC_Config_v1430_PR_setup
} RLC_Config_v1430_PR;

/* RLC-Config-v1430 */
typedef struct RLC_Config_v1430 {
	RLC_Config_v1430_PR present;
	union RLC_Config_v1430_u {
		NULL_t	 release;
		struct RLC_Config_v1430__setup {
			PollByte_r14_t	 pollByte_r14;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RLC_Config_v1430_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RLC_Config_v1430;
extern asn_CHOICE_specifics_t asn_SPC_RLC_Config_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_RLC_Config_v1430_1[2];
extern asn_per_constraints_t asn_PER_type_RLC_Config_v1430_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _RLC_Config_v1430_H_ */
#include "asn_internal.h"
