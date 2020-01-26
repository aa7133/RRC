/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_WhiteCellsToAddMod_r13_H_
#define	_WhiteCellsToAddMod_r13_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "PhysCellIdRange.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* WhiteCellsToAddMod-r13 */
typedef struct WhiteCellsToAddMod_r13 {
	long	 cellIndex_r13;
	PhysCellIdRange_t	 physCellIdRange_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} WhiteCellsToAddMod_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WhiteCellsToAddMod_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_WhiteCellsToAddMod_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_WhiteCellsToAddMod_r13_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _WhiteCellsToAddMod_r13_H_ */
#include "asn_internal.h"
