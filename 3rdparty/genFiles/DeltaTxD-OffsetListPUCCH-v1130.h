/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_DeltaTxD_OffsetListPUCCH_v1130_H_
#define	_DeltaTxD_OffsetListPUCCH_v1130_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DeltaTxD_OffsetListPUCCH_v1130__deltaTxD_OffsetPUCCH_Format1bCS_r11 {
	DeltaTxD_OffsetListPUCCH_v1130__deltaTxD_OffsetPUCCH_Format1bCS_r11_dB0	= 0,
	DeltaTxD_OffsetListPUCCH_v1130__deltaTxD_OffsetPUCCH_Format1bCS_r11_dB_1	= 1
} e_DeltaTxD_OffsetListPUCCH_v1130__deltaTxD_OffsetPUCCH_Format1bCS_r11;

/* DeltaTxD-OffsetListPUCCH-v1130 */
typedef struct DeltaTxD_OffsetListPUCCH_v1130 {
	long	 deltaTxD_OffsetPUCCH_Format1bCS_r11;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DeltaTxD_OffsetListPUCCH_v1130_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_deltaTxD_OffsetPUCCH_Format1bCS_r11_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_DeltaTxD_OffsetListPUCCH_v1130;
extern asn_SEQUENCE_specifics_t asn_SPC_DeltaTxD_OffsetListPUCCH_v1130_specs_1;
extern asn_TYPE_member_t asn_MBR_DeltaTxD_OffsetListPUCCH_v1130_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _DeltaTxD_OffsetListPUCCH_v1130_H_ */
#include "asn_internal.h"
