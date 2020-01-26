/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_PUSCH_EnhancementsConfig_r14_H_
#define	_PUSCH_EnhancementsConfig_r14_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NULL.h"
#include "NativeInteger.h"
#include "NativeEnumerated.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PUSCH_EnhancementsConfig_r14_PR {
	PUSCH_EnhancementsConfig_r14_PR_NOTHING,	/* No components present */
	PUSCH_EnhancementsConfig_r14_PR_release,
	PUSCH_EnhancementsConfig_r14_PR_setup
} PUSCH_EnhancementsConfig_r14_PR;
typedef enum PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14_PR {
	PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14_PR_NOTHING,	/* No components present */
	PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14_PR_interval_FDD_PUSCH_Enh_r14,
	PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14_PR_interval_TDD_PUSCH_Enh_r14
} PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14_PR;
typedef enum PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14__interval_FDD_PUSCH_Enh_r14 {
	PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14__interval_FDD_PUSCH_Enh_r14_int1	= 0,
	PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14__interval_FDD_PUSCH_Enh_r14_int2	= 1,
	PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14__interval_FDD_PUSCH_Enh_r14_int4	= 2,
	PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14__interval_FDD_PUSCH_Enh_r14_int8	= 3
} e_PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14__interval_FDD_PUSCH_Enh_r14;
typedef enum PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14__interval_TDD_PUSCH_Enh_r14 {
	PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14__interval_TDD_PUSCH_Enh_r14_int1	= 0,
	PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14__interval_TDD_PUSCH_Enh_r14_int5	= 1,
	PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14__interval_TDD_PUSCH_Enh_r14_int10	= 2,
	PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14__interval_TDD_PUSCH_Enh_r14_int20	= 3
} e_PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14__interval_TDD_PUSCH_Enh_r14;

/* PUSCH-EnhancementsConfig-r14 */
typedef struct PUSCH_EnhancementsConfig_r14 {
	PUSCH_EnhancementsConfig_r14_PR present;
	union PUSCH_EnhancementsConfig_r14_u {
		NULL_t	 release;
		struct PUSCH_EnhancementsConfig_r14__setup {
			long	*pusch_HoppingOffsetPUSCH_Enh_r14;	/* OPTIONAL */
			struct PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14 {
				PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14_PR present;
				union PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14_u {
					long	 interval_FDD_PUSCH_Enh_r14;
					long	 interval_TDD_PUSCH_Enh_r14;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *interval_ULHoppingPUSCH_Enh_r14;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUSCH_EnhancementsConfig_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_interval_FDD_PUSCH_Enh_r14_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_interval_TDD_PUSCH_Enh_r14_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PUSCH_EnhancementsConfig_r14;
extern asn_CHOICE_specifics_t asn_SPC_PUSCH_EnhancementsConfig_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_PUSCH_EnhancementsConfig_r14_1[2];
extern asn_per_constraints_t asn_PER_type_PUSCH_EnhancementsConfig_r14_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _PUSCH_EnhancementsConfig_r14_H_ */
#include "asn_internal.h"
