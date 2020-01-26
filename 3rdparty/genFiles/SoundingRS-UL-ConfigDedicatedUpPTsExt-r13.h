/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_SoundingRS_UL_ConfigDedicatedUpPTsExt_r13_H_
#define	_SoundingRS_UL_ConfigDedicatedUpPTsExt_r13_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NULL.h"
#include "NativeEnumerated.h"
#include "NativeInteger.h"
#include "BOOLEAN.h"
#include "SRS-AntennaPort.h"
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SoundingRS_UL_ConfigDedicatedUpPTsExt_r13_PR {
	SoundingRS_UL_ConfigDedicatedUpPTsExt_r13_PR_NOTHING,	/* No components present */
	SoundingRS_UL_ConfigDedicatedUpPTsExt_r13_PR_release,
	SoundingRS_UL_ConfigDedicatedUpPTsExt_r13_PR_setup
} SoundingRS_UL_ConfigDedicatedUpPTsExt_r13_PR;
typedef enum SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup__srs_UpPtsAdd_r13 {
	SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup__srs_UpPtsAdd_r13_sym2	= 0,
	SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup__srs_UpPtsAdd_r13_sym4	= 1
} e_SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup__srs_UpPtsAdd_r13;
typedef enum SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup__srs_Bandwidth_r13 {
	SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup__srs_Bandwidth_r13_bw0	= 0,
	SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup__srs_Bandwidth_r13_bw1	= 1,
	SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup__srs_Bandwidth_r13_bw2	= 2,
	SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup__srs_Bandwidth_r13_bw3	= 3
} e_SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup__srs_Bandwidth_r13;
typedef enum SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup__srs_HoppingBandwidth_r13 {
	SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup__srs_HoppingBandwidth_r13_hbw0	= 0,
	SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup__srs_HoppingBandwidth_r13_hbw1	= 1,
	SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup__srs_HoppingBandwidth_r13_hbw2	= 2,
	SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup__srs_HoppingBandwidth_r13_hbw3	= 3
} e_SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup__srs_HoppingBandwidth_r13;
typedef enum SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup__cyclicShift_r13 {
	SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup__cyclicShift_r13_cs0	= 0,
	SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup__cyclicShift_r13_cs1	= 1,
	SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup__cyclicShift_r13_cs2	= 2,
	SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup__cyclicShift_r13_cs3	= 3,
	SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup__cyclicShift_r13_cs4	= 4,
	SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup__cyclicShift_r13_cs5	= 5,
	SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup__cyclicShift_r13_cs6	= 6,
	SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup__cyclicShift_r13_cs7	= 7,
	SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup__cyclicShift_r13_cs8	= 8,
	SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup__cyclicShift_r13_cs9	= 9,
	SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup__cyclicShift_r13_cs10	= 10,
	SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup__cyclicShift_r13_cs11	= 11
} e_SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup__cyclicShift_r13;
typedef enum SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup__transmissionCombNum_r13 {
	SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup__transmissionCombNum_r13_n2	= 0,
	SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup__transmissionCombNum_r13_n4	= 1
} e_SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup__transmissionCombNum_r13;

/* SoundingRS-UL-ConfigDedicatedUpPTsExt-r13 */
typedef struct SoundingRS_UL_ConfigDedicatedUpPTsExt_r13 {
	SoundingRS_UL_ConfigDedicatedUpPTsExt_r13_PR present;
	union SoundingRS_UL_ConfigDedicatedUpPTsExt_r13_u {
		NULL_t	 release;
		struct SoundingRS_UL_ConfigDedicatedUpPTsExt_r13__setup {
			long	 srs_UpPtsAdd_r13;
			long	 srs_Bandwidth_r13;
			long	 srs_HoppingBandwidth_r13;
			long	 freqDomainPosition_r13;
			BOOLEAN_t	 duration_r13;
			long	 srs_ConfigIndex_r13;
			long	 transmissionComb_r13;
			long	 cyclicShift_r13;
			SRS_AntennaPort_t	 srs_AntennaPort_r13;
			long	 transmissionCombNum_r13;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SoundingRS_UL_ConfigDedicatedUpPTsExt_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_srs_UpPtsAdd_r13_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_srs_Bandwidth_r13_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_srs_HoppingBandwidth_r13_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_cyclicShift_r13_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_transmissionCombNum_r13_35;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SoundingRS_UL_ConfigDedicatedUpPTsExt_r13;
extern asn_CHOICE_specifics_t asn_SPC_SoundingRS_UL_ConfigDedicatedUpPTsExt_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_SoundingRS_UL_ConfigDedicatedUpPTsExt_r13_1[2];
extern asn_per_constraints_t asn_PER_type_SoundingRS_UL_ConfigDedicatedUpPTsExt_r13_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SoundingRS_UL_ConfigDedicatedUpPTsExt_r13_H_ */
#include "asn_internal.h"
