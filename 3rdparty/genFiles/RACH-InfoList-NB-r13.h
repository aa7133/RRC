/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_RACH_InfoList_NB_r13_H_
#define	_RACH_InfoList_NB_r13_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RACH_Info_NB_r13;

/* RACH-InfoList-NB-r13 */
typedef struct RACH_InfoList_NB_r13 {
	A_SEQUENCE_OF(struct RACH_Info_NB_r13) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RACH_InfoList_NB_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RACH_InfoList_NB_r13;
extern asn_SET_OF_specifics_t asn_SPC_RACH_InfoList_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_RACH_InfoList_NB_r13_1[1];
extern asn_per_constraints_t asn_PER_type_RACH_InfoList_NB_r13_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _RACH_InfoList_NB_r13_H_ */
#include "asn_internal.h"
