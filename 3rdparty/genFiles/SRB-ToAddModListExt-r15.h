/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_SRB_ToAddModListExt_r15_H_
#define	_SRB_ToAddModListExt_r15_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SRB_ToAddMod;

/* SRB-ToAddModListExt-r15 */
typedef struct SRB_ToAddModListExt_r15 {
	A_SEQUENCE_OF(struct SRB_ToAddMod) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SRB_ToAddModListExt_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SRB_ToAddModListExt_r15;
extern asn_SET_OF_specifics_t asn_SPC_SRB_ToAddModListExt_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_SRB_ToAddModListExt_r15_1[1];
extern asn_per_constraints_t asn_PER_type_SRB_ToAddModListExt_r15_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SRB_ToAddModListExt_r15_H_ */
#include "asn_internal.h"
