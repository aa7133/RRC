/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_SPS_ConfigUL_ToAddModList_r14_H_
#define	_SPS_ConfigUL_ToAddModList_r14_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SPS_ConfigUL;

/* SPS-ConfigUL-ToAddModList-r14 */
typedef struct SPS_ConfigUL_ToAddModList_r14 {
	A_SEQUENCE_OF(struct SPS_ConfigUL) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SPS_ConfigUL_ToAddModList_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SPS_ConfigUL_ToAddModList_r14;
extern asn_SET_OF_specifics_t asn_SPC_SPS_ConfigUL_ToAddModList_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_SPS_ConfigUL_ToAddModList_r14_1[1];
extern asn_per_constraints_t asn_PER_type_SPS_ConfigUL_ToAddModList_r14_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SPS_ConfigUL_ToAddModList_r14_H_ */
#include "asn_internal.h"
