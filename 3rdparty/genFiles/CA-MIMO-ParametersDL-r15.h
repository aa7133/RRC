/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_CA_MIMO_ParametersDL_r15_H_
#define	_CA_MIMO_ParametersDL_r15_H_


#include "asn_application.h"

/* Including external dependencies */
#include "MIMO-CapabilityDL-r10.h"
#include "NativeEnumerated.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CA_MIMO_ParametersDL_r15__fourLayerTM3_TM4_r15 {
	CA_MIMO_ParametersDL_r15__fourLayerTM3_TM4_r15_supported	= 0
} e_CA_MIMO_ParametersDL_r15__fourLayerTM3_TM4_r15;

/* Forward declarations */
struct IntraBandContiguousCC_Info_r12;

/* CA-MIMO-ParametersDL-r15 */
typedef struct CA_MIMO_ParametersDL_r15 {
	MIMO_CapabilityDL_r10_t	*supportedMIMO_CapabilityDL_r15;	/* OPTIONAL */
	long	*fourLayerTM3_TM4_r15;	/* OPTIONAL */
	struct CA_MIMO_ParametersDL_r15__intraBandContiguousCC_InfoList_r15 {
		A_SEQUENCE_OF(struct IntraBandContiguousCC_Info_r12) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *intraBandContiguousCC_InfoList_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CA_MIMO_ParametersDL_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_fourLayerTM3_TM4_r15_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CA_MIMO_ParametersDL_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_CA_MIMO_ParametersDL_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_CA_MIMO_ParametersDL_r15_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _CA_MIMO_ParametersDL_r15_H_ */
#include "asn_internal.h"
