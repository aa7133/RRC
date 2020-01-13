/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_RLC_Config_H_
#define	_RLC_Config_H_


#include "asn_application.h"

/* Including external dependencies */
#include "UL-AM-RLC.h"
#include "DL-AM-RLC.h"
#include "constr_SEQUENCE.h"
#include "UL-UM-RLC.h"
#include "DL-UM-RLC.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RLC_Config_PR {
	RLC_Config_PR_NOTHING,	/* No components present */
	RLC_Config_PR_am,
	RLC_Config_PR_um_Bi_Directional,
	RLC_Config_PR_um_Uni_Directional_UL,
	RLC_Config_PR_um_Uni_Directional_DL
	/* Extensions may appear below */
	
} RLC_Config_PR;

/* RLC-Config */
typedef struct RLC_Config {
	RLC_Config_PR present;
	union RLC_Config_u {
		struct RLC_Config__am {
			UL_AM_RLC_t	 ul_AM_RLC;
			DL_AM_RLC_t	 dl_AM_RLC;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *am;
		struct RLC_Config__um_Bi_Directional {
			UL_UM_RLC_t	 ul_UM_RLC;
			DL_UM_RLC_t	 dl_UM_RLC;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *um_Bi_Directional;
		struct RLC_Config__um_Uni_Directional_UL {
			UL_UM_RLC_t	 ul_UM_RLC;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *um_Uni_Directional_UL;
		struct RLC_Config__um_Uni_Directional_DL {
			DL_UM_RLC_t	 dl_UM_RLC;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *um_Uni_Directional_DL;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RLC_Config_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RLC_Config;
extern asn_CHOICE_specifics_t asn_SPC_RLC_Config_specs_1;
extern asn_TYPE_member_t asn_MBR_RLC_Config_1[4];
extern asn_per_constraints_t asn_PER_type_RLC_Config_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _RLC_Config_H_ */
#include "asn_internal.h"
