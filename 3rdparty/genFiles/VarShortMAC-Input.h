/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_VarShortMAC_Input_H_
#define	_VarShortMAC_Input_H_


#include "asn_application.h"

/* Including external dependencies */
#include "CellIdentity.h"
#include "PhysCellId.h"
#include "C-RNTI.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* VarShortMAC-Input */
typedef struct VarShortMAC_Input {
	CellIdentity_t	 cellIdentity;
	PhysCellId_t	 physCellId;
	C_RNTI_t	 c_RNTI;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VarShortMAC_Input_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VarShortMAC_Input;
extern asn_SEQUENCE_specifics_t asn_SPC_VarShortMAC_Input_specs_1;
extern asn_TYPE_member_t asn_MBR_VarShortMAC_Input_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _VarShortMAC_Input_H_ */
#include "asn_internal.h"
