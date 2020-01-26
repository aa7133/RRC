/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_SoundingRS_UL_ConfigDedicated_v1310_H_
#define	_SoundingRS_UL_ConfigDedicated_v1310_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NULL.h"
#include "NativeInteger.h"
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SoundingRS_UL_ConfigDedicated_v1310_PR {
	SoundingRS_UL_ConfigDedicated_v1310_PR_NOTHING,	/* No components present */
	SoundingRS_UL_ConfigDedicated_v1310_PR_release,
	SoundingRS_UL_ConfigDedicated_v1310_PR_setup
} SoundingRS_UL_ConfigDedicated_v1310_PR;
typedef enum SoundingRS_UL_ConfigDedicated_v1310__setup__cyclicShift_v1310 {
	SoundingRS_UL_ConfigDedicated_v1310__setup__cyclicShift_v1310_cs8	= 0,
	SoundingRS_UL_ConfigDedicated_v1310__setup__cyclicShift_v1310_cs9	= 1,
	SoundingRS_UL_ConfigDedicated_v1310__setup__cyclicShift_v1310_cs10	= 2,
	SoundingRS_UL_ConfigDedicated_v1310__setup__cyclicShift_v1310_cs11	= 3
} e_SoundingRS_UL_ConfigDedicated_v1310__setup__cyclicShift_v1310;
typedef enum SoundingRS_UL_ConfigDedicated_v1310__setup__transmissionCombNum_r13 {
	SoundingRS_UL_ConfigDedicated_v1310__setup__transmissionCombNum_r13_n2	= 0,
	SoundingRS_UL_ConfigDedicated_v1310__setup__transmissionCombNum_r13_n4	= 1
} e_SoundingRS_UL_ConfigDedicated_v1310__setup__transmissionCombNum_r13;

/* SoundingRS-UL-ConfigDedicated-v1310 */
typedef struct SoundingRS_UL_ConfigDedicated_v1310 {
	SoundingRS_UL_ConfigDedicated_v1310_PR present;
	union SoundingRS_UL_ConfigDedicated_v1310_u {
		NULL_t	 release;
		struct SoundingRS_UL_ConfigDedicated_v1310__setup {
			long	*transmissionComb_v1310;	/* OPTIONAL */
			long	*cyclicShift_v1310;	/* OPTIONAL */
			long	*transmissionCombNum_r13;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SoundingRS_UL_ConfigDedicated_v1310_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_cyclicShift_v1310_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_transmissionCombNum_r13_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SoundingRS_UL_ConfigDedicated_v1310;
extern asn_CHOICE_specifics_t asn_SPC_SoundingRS_UL_ConfigDedicated_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_SoundingRS_UL_ConfigDedicated_v1310_1[2];
extern asn_per_constraints_t asn_PER_type_SoundingRS_UL_ConfigDedicated_v1310_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SoundingRS_UL_ConfigDedicated_v1310_H_ */
#include "asn_internal.h"
