/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_RF_Parameters_v1530_H_
#define	_RF_Parameters_v1530_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RF_Parameters_v1530__sTTI_SPT_Supported_r15 {
	RF_Parameters_v1530__sTTI_SPT_Supported_r15_supported	= 0
} e_RF_Parameters_v1530__sTTI_SPT_Supported_r15;
typedef enum RF_Parameters_v1530__powerClass_14dBm_r15 {
	RF_Parameters_v1530__powerClass_14dBm_r15_supported	= 0
} e_RF_Parameters_v1530__powerClass_14dBm_r15;

/* Forward declarations */
struct SupportedBandCombination_v1530;
struct SupportedBandCombinationAdd_v1530;
struct SupportedBandCombinationReduced_v1530;

/* RF-Parameters-v1530 */
typedef struct RF_Parameters_v1530 {
	long	*sTTI_SPT_Supported_r15;	/* OPTIONAL */
	struct SupportedBandCombination_v1530	*supportedBandCombination_v1530;	/* OPTIONAL */
	struct SupportedBandCombinationAdd_v1530	*supportedBandCombinationAdd_v1530;	/* OPTIONAL */
	struct SupportedBandCombinationReduced_v1530	*supportedBandCombinationReduced_v1530;	/* OPTIONAL */
	long	*powerClass_14dBm_r15;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RF_Parameters_v1530_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_sTTI_SPT_Supported_r15_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_powerClass_14dBm_r15_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RF_Parameters_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_RF_Parameters_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_RF_Parameters_v1530_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _RF_Parameters_v1530_H_ */
#include "asn_internal.h"
