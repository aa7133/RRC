/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_SSB_IndexList_r15_H_
#define	_SSB_IndexList_r15_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RS-IndexNR-r15.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SSB-IndexList-r15 */
typedef struct SSB_IndexList_r15 {
	A_SEQUENCE_OF(RS_IndexNR_r15_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SSB_IndexList_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SSB_IndexList_r15;
extern asn_SET_OF_specifics_t asn_SPC_SSB_IndexList_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_SSB_IndexList_r15_1[1];
extern asn_per_constraints_t asn_PER_type_SSB_IndexList_r15_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SSB_IndexList_r15_H_ */
#include "asn_internal.h"
