/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_IntraBandContiguousCC_Info_r12_H_
#define	_IntraBandContiguousCC_Info_r12_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "MIMO-CapabilityDL-r10.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IntraBandContiguousCC_Info_r12__fourLayerTM3_TM4_perCC_r12 {
	IntraBandContiguousCC_Info_r12__fourLayerTM3_TM4_perCC_r12_supported	= 0
} e_IntraBandContiguousCC_Info_r12__fourLayerTM3_TM4_perCC_r12;
typedef enum IntraBandContiguousCC_Info_r12__supportedCSI_Proc_r12 {
	IntraBandContiguousCC_Info_r12__supportedCSI_Proc_r12_n1	= 0,
	IntraBandContiguousCC_Info_r12__supportedCSI_Proc_r12_n3	= 1,
	IntraBandContiguousCC_Info_r12__supportedCSI_Proc_r12_n4	= 2
} e_IntraBandContiguousCC_Info_r12__supportedCSI_Proc_r12;

/* IntraBandContiguousCC-Info-r12 */
typedef struct IntraBandContiguousCC_Info_r12 {
	long	*fourLayerTM3_TM4_perCC_r12;	/* OPTIONAL */
	MIMO_CapabilityDL_r10_t	*supportedMIMO_CapabilityDL_r12;	/* OPTIONAL */
	long	*supportedCSI_Proc_r12;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntraBandContiguousCC_Info_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_fourLayerTM3_TM4_perCC_r12_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_supportedCSI_Proc_r12_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_IntraBandContiguousCC_Info_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_IntraBandContiguousCC_Info_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_IntraBandContiguousCC_Info_r12_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _IntraBandContiguousCC_Info_r12_H_ */
#include "asn_internal.h"
