/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_SystemInformationBlockType14_r11_H_
#define	_SystemInformationBlockType14_r11_H_


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
typedef enum SystemInformationBlockType14_r11__eab_Param_r11_PR {
	SystemInformationBlockType14_r11__eab_Param_r11_PR_NOTHING,	/* No components present */
	SystemInformationBlockType14_r11__eab_Param_r11_PR_eab_Common_r11,
	SystemInformationBlockType14_r11__eab_Param_r11_PR_eab_PerPLMN_List_r11
} SystemInformationBlockType14_r11__eab_Param_r11_PR;
typedef enum SystemInformationBlockType14_r11__ext1__eab_PerRSRP_r15 {
	SystemInformationBlockType14_r11__ext1__eab_PerRSRP_r15_thresh0	= 0,
	SystemInformationBlockType14_r11__ext1__eab_PerRSRP_r15_thresh1	= 1,
	SystemInformationBlockType14_r11__ext1__eab_PerRSRP_r15_thresh2	= 2,
	SystemInformationBlockType14_r11__ext1__eab_PerRSRP_r15_thresh3	= 3
} e_SystemInformationBlockType14_r11__ext1__eab_PerRSRP_r15;

/* Forward declarations */
struct EAB_Config_r11;
struct EAB_ConfigPLMN_r11;

/* SystemInformationBlockType14-r11 */
typedef struct SystemInformationBlockType14_r11 {
	struct SystemInformationBlockType14_r11__eab_Param_r11 {
		SystemInformationBlockType14_r11__eab_Param_r11_PR present;
		union SystemInformationBlockType14_r11__eab_Param_r11_u {
			struct EAB_Config_r11	*eab_Common_r11;
			struct SystemInformationBlockType14_r11__eab_Param_r11__eab_PerPLMN_List_r11 {
				A_SEQUENCE_OF(struct EAB_ConfigPLMN_r11) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *eab_PerPLMN_List_r11;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *eab_Param_r11;
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct SystemInformationBlockType14_r11__ext1 {
		long	*eab_PerRSRP_r15;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType14_r11_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_eab_PerRSRP_r15_9;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType14_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType14_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType14_r11_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType14_r11_H_ */
#include "asn_internal.h"
