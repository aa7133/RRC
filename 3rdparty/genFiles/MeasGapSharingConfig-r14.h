/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_MeasGapSharingConfig_r14_H_
#define	_MeasGapSharingConfig_r14_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NULL.h"
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasGapSharingConfig_r14_PR {
	MeasGapSharingConfig_r14_PR_NOTHING,	/* No components present */
	MeasGapSharingConfig_r14_PR_release,
	MeasGapSharingConfig_r14_PR_setup
} MeasGapSharingConfig_r14_PR;
typedef enum MeasGapSharingConfig_r14__setup__measGapSharingScheme_r14 {
	MeasGapSharingConfig_r14__setup__measGapSharingScheme_r14_scheme00	= 0,
	MeasGapSharingConfig_r14__setup__measGapSharingScheme_r14_scheme01	= 1,
	MeasGapSharingConfig_r14__setup__measGapSharingScheme_r14_scheme10	= 2,
	MeasGapSharingConfig_r14__setup__measGapSharingScheme_r14_scheme11	= 3
} e_MeasGapSharingConfig_r14__setup__measGapSharingScheme_r14;

/* MeasGapSharingConfig-r14 */
typedef struct MeasGapSharingConfig_r14 {
	MeasGapSharingConfig_r14_PR present;
	union MeasGapSharingConfig_r14_u {
		NULL_t	 release;
		struct MeasGapSharingConfig_r14__setup {
			long	 measGapSharingScheme_r14;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasGapSharingConfig_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_measGapSharingScheme_r14_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MeasGapSharingConfig_r14;
extern asn_CHOICE_specifics_t asn_SPC_MeasGapSharingConfig_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasGapSharingConfig_r14_1[2];
extern asn_per_constraints_t asn_PER_type_MeasGapSharingConfig_r14_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasGapSharingConfig_r14_H_ */
#include "asn_internal.h"
