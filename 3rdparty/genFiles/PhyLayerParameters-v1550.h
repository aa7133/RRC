/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_PhyLayerParameters_v1550_H_
#define	_PhyLayerParameters_v1550_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PhyLayerParameters_v1550__dmrs_OverheadReduction_r15 {
	PhyLayerParameters_v1550__dmrs_OverheadReduction_r15_supported	= 0
} e_PhyLayerParameters_v1550__dmrs_OverheadReduction_r15;

/* PhyLayerParameters-v1550 */
typedef struct PhyLayerParameters_v1550 {
	long	*dmrs_OverheadReduction_r15;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhyLayerParameters_v1550_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_dmrs_OverheadReduction_r15_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PhyLayerParameters_v1550;
extern asn_SEQUENCE_specifics_t asn_SPC_PhyLayerParameters_v1550_specs_1;
extern asn_TYPE_member_t asn_MBR_PhyLayerParameters_v1550_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _PhyLayerParameters_v1550_H_ */
#include "asn_internal.h"
