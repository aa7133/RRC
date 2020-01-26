/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_PosSchedulingInfo_r15_H_
#define	_PosSchedulingInfo_r15_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "PosSIB-MappingInfo-r15.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PosSchedulingInfo_r15__posSI_Periodicity_r15 {
	PosSchedulingInfo_r15__posSI_Periodicity_r15_rf8	= 0,
	PosSchedulingInfo_r15__posSI_Periodicity_r15_rf16	= 1,
	PosSchedulingInfo_r15__posSI_Periodicity_r15_rf32	= 2,
	PosSchedulingInfo_r15__posSI_Periodicity_r15_rf64	= 3,
	PosSchedulingInfo_r15__posSI_Periodicity_r15_rf128	= 4,
	PosSchedulingInfo_r15__posSI_Periodicity_r15_rf256	= 5,
	PosSchedulingInfo_r15__posSI_Periodicity_r15_rf512	= 6
} e_PosSchedulingInfo_r15__posSI_Periodicity_r15;

/* PosSchedulingInfo-r15 */
typedef struct PosSchedulingInfo_r15 {
	long	 posSI_Periodicity_r15;
	PosSIB_MappingInfo_r15_t	 posSIB_MappingInfo_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PosSchedulingInfo_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_posSI_Periodicity_r15_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PosSchedulingInfo_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_PosSchedulingInfo_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_PosSchedulingInfo_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PosSchedulingInfo_r15_H_ */
#include "asn_internal.h"
