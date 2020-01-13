/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_PhyLayerParameters_NB_v1530_H_
#define	_PhyLayerParameters_NB_v1530_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PhyLayerParameters_NB_v1530__mixedOperationMode_r15 {
	PhyLayerParameters_NB_v1530__mixedOperationMode_r15_supported	= 0
} e_PhyLayerParameters_NB_v1530__mixedOperationMode_r15;
typedef enum PhyLayerParameters_NB_v1530__sr_WithHARQ_ACK_r15 {
	PhyLayerParameters_NB_v1530__sr_WithHARQ_ACK_r15_supported	= 0
} e_PhyLayerParameters_NB_v1530__sr_WithHARQ_ACK_r15;
typedef enum PhyLayerParameters_NB_v1530__sr_WithoutHARQ_ACK_r15 {
	PhyLayerParameters_NB_v1530__sr_WithoutHARQ_ACK_r15_supported	= 0
} e_PhyLayerParameters_NB_v1530__sr_WithoutHARQ_ACK_r15;
typedef enum PhyLayerParameters_NB_v1530__nprach_Format2_r15 {
	PhyLayerParameters_NB_v1530__nprach_Format2_r15_supported	= 0
} e_PhyLayerParameters_NB_v1530__nprach_Format2_r15;
typedef enum PhyLayerParameters_NB_v1530__additionalTransmissionSIB1_r15 {
	PhyLayerParameters_NB_v1530__additionalTransmissionSIB1_r15_supported	= 0
} e_PhyLayerParameters_NB_v1530__additionalTransmissionSIB1_r15;
typedef enum PhyLayerParameters_NB_v1530__npusch_3dot75kHz_SCS_TDD_r15 {
	PhyLayerParameters_NB_v1530__npusch_3dot75kHz_SCS_TDD_r15_supported	= 0
} e_PhyLayerParameters_NB_v1530__npusch_3dot75kHz_SCS_TDD_r15;

/* PhyLayerParameters-NB-v1530 */
typedef struct PhyLayerParameters_NB_v1530 {
	long	*mixedOperationMode_r15;	/* OPTIONAL */
	long	*sr_WithHARQ_ACK_r15;	/* OPTIONAL */
	long	*sr_WithoutHARQ_ACK_r15;	/* OPTIONAL */
	long	*nprach_Format2_r15;	/* OPTIONAL */
	long	*additionalTransmissionSIB1_r15;	/* OPTIONAL */
	long	*npusch_3dot75kHz_SCS_TDD_r15;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhyLayerParameters_NB_v1530_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_mixedOperationMode_r15_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sr_WithHARQ_ACK_r15_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sr_WithoutHARQ_ACK_r15_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_nprach_Format2_r15_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_additionalTransmissionSIB1_r15_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_npusch_3dot75kHz_SCS_TDD_r15_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PhyLayerParameters_NB_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_PhyLayerParameters_NB_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_PhyLayerParameters_NB_v1530_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _PhyLayerParameters_NB_v1530_H_ */
#include "asn_internal.h"
