/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_SR_SPS_BSR_Config_NB_r15_H_
#define	_SR_SPS_BSR_Config_NB_r15_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NULL.h"
#include "C-RNTI.h"
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SR_SPS_BSR_Config_NB_r15_PR {
	SR_SPS_BSR_Config_NB_r15_PR_NOTHING,	/* No components present */
	SR_SPS_BSR_Config_NB_r15_PR_release,
	SR_SPS_BSR_Config_NB_r15_PR_setup
} SR_SPS_BSR_Config_NB_r15_PR;
typedef enum SR_SPS_BSR_Config_NB_r15__setup__semiPersistSchedIntervalUL_r15 {
	SR_SPS_BSR_Config_NB_r15__setup__semiPersistSchedIntervalUL_r15_sf128	= 0,
	SR_SPS_BSR_Config_NB_r15__setup__semiPersistSchedIntervalUL_r15_sf256	= 1,
	SR_SPS_BSR_Config_NB_r15__setup__semiPersistSchedIntervalUL_r15_sf512	= 2,
	SR_SPS_BSR_Config_NB_r15__setup__semiPersistSchedIntervalUL_r15_sf1024	= 3,
	SR_SPS_BSR_Config_NB_r15__setup__semiPersistSchedIntervalUL_r15_sf1280	= 4,
	SR_SPS_BSR_Config_NB_r15__setup__semiPersistSchedIntervalUL_r15_sf2048	= 5,
	SR_SPS_BSR_Config_NB_r15__setup__semiPersistSchedIntervalUL_r15_sf2560	= 6,
	SR_SPS_BSR_Config_NB_r15__setup__semiPersistSchedIntervalUL_r15_sf5120	= 7
} e_SR_SPS_BSR_Config_NB_r15__setup__semiPersistSchedIntervalUL_r15;

/* SR-SPS-BSR-Config-NB-r15 */
typedef struct SR_SPS_BSR_Config_NB_r15 {
	SR_SPS_BSR_Config_NB_r15_PR present;
	union SR_SPS_BSR_Config_NB_r15_u {
		NULL_t	 release;
		struct SR_SPS_BSR_Config_NB_r15__setup {
			C_RNTI_t	 semiPersistSchedC_RNTI_r15;
			long	 semiPersistSchedIntervalUL_r15;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SR_SPS_BSR_Config_NB_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_semiPersistSchedIntervalUL_r15_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SR_SPS_BSR_Config_NB_r15;
extern asn_CHOICE_specifics_t asn_SPC_SR_SPS_BSR_Config_NB_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_SR_SPS_BSR_Config_NB_r15_1[2];
extern asn_per_constraints_t asn_PER_type_SR_SPS_BSR_Config_NB_r15_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SR_SPS_BSR_Config_NB_r15_H_ */
#include "asn_internal.h"
