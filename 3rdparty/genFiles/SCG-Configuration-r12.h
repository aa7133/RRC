/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_SCG_Configuration_r12_H_
#define	_SCG_Configuration_r12_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NULL.h"
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SCG_Configuration_r12_PR {
	SCG_Configuration_r12_PR_NOTHING,	/* No components present */
	SCG_Configuration_r12_PR_release,
	SCG_Configuration_r12_PR_setup
} SCG_Configuration_r12_PR;

/* Forward declarations */
struct SCG_ConfigPartSCG_r12;
struct PowerCoordinationInfo_r12;

/* SCG-Configuration-r12 */
typedef struct SCG_Configuration_r12 {
	SCG_Configuration_r12_PR present;
	union SCG_Configuration_r12_u {
		NULL_t	 release;
		struct SCG_Configuration_r12__setup {
			struct SCG_Configuration_r12__setup__scg_ConfigPartMCG_r12 {
				long	*scg_Counter_r12;	/* OPTIONAL */
				struct PowerCoordinationInfo_r12	*powerCoordinationInfo_r12;	/* OPTIONAL */
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *scg_ConfigPartMCG_r12;
			struct SCG_ConfigPartSCG_r12	*scg_ConfigPartSCG_r12;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCG_Configuration_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCG_Configuration_r12;
extern asn_CHOICE_specifics_t asn_SPC_SCG_Configuration_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_SCG_Configuration_r12_1[2];
extern asn_per_constraints_t asn_PER_type_SCG_Configuration_r12_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SCG_Configuration_r12_H_ */
#include "asn_internal.h"
