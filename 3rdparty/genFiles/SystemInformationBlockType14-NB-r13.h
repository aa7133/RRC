/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_SystemInformationBlockType14_NB_r13_H_
#define	_SystemInformationBlockType14_NB_r13_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_CHOICE.h"
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SystemInformationBlockType14_NB_r13__ab_Param_r13_PR {
	SystemInformationBlockType14_NB_r13__ab_Param_r13_PR_NOTHING,	/* No components present */
	SystemInformationBlockType14_NB_r13__ab_Param_r13_PR_ab_Common_r13,
	SystemInformationBlockType14_NB_r13__ab_Param_r13_PR_ab_PerPLMN_List_r13
} SystemInformationBlockType14_NB_r13__ab_Param_r13_PR;
typedef enum SystemInformationBlockType14_NB_r13__ext1__ab_PerNRSRP_r15 {
	SystemInformationBlockType14_NB_r13__ext1__ab_PerNRSRP_r15_thresh1	= 0,
	SystemInformationBlockType14_NB_r13__ext1__ab_PerNRSRP_r15_thresh2	= 1
} e_SystemInformationBlockType14_NB_r13__ext1__ab_PerNRSRP_r15;

/* Forward declarations */
struct AB_Config_NB_r13;
struct AB_ConfigPLMN_NB_r13;

/* SystemInformationBlockType14-NB-r13 */
typedef struct SystemInformationBlockType14_NB_r13 {
	struct SystemInformationBlockType14_NB_r13__ab_Param_r13 {
		SystemInformationBlockType14_NB_r13__ab_Param_r13_PR present;
		union SystemInformationBlockType14_NB_r13__ab_Param_r13_u {
			struct AB_Config_NB_r13	*ab_Common_r13;
			struct SystemInformationBlockType14_NB_r13__ab_Param_r13__ab_PerPLMN_List_r13 {
				A_SEQUENCE_OF(struct AB_ConfigPLMN_NB_r13) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *ab_PerPLMN_List_r13;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ab_Param_r13;
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct SystemInformationBlockType14_NB_r13__ext1 {
		long	*ab_PerNRSRP_r15;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType14_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ab_PerNRSRP_r15_9;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType14_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType14_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType14_NB_r13_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType14_NB_r13_H_ */
#include "asn_internal.h"
