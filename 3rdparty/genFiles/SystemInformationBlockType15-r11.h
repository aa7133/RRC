/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_SystemInformationBlockType15_r11_H_
#define	_SystemInformationBlockType15_r11_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MBMS_SAI_List_r11;
struct MBMS_SAI_InterFreqList_r11;
struct MBMS_SAI_InterFreqList_v1140;
struct MBMS_CarrierType_r14;
struct MBMS_InterFreqCarrierTypeList_r14;

/* SystemInformationBlockType15-r11 */
typedef struct SystemInformationBlockType15_r11 {
	struct MBMS_SAI_List_r11	*mbms_SAI_IntraFreq_r11;	/* OPTIONAL */
	struct MBMS_SAI_InterFreqList_r11	*mbms_SAI_InterFreqList_r11;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct SystemInformationBlockType15_r11__ext1 {
		struct MBMS_SAI_InterFreqList_v1140	*mbms_SAI_InterFreqList_v1140;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct SystemInformationBlockType15_r11__ext2 {
		struct MBMS_CarrierType_r14	*mbms_IntraFreqCarrierType_r14;	/* OPTIONAL */
		struct MBMS_InterFreqCarrierTypeList_r14	*mbms_InterFreqCarrierTypeList_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType15_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType15_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType15_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType15_r11_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType15_r11_H_ */
#include "asn_internal.h"
