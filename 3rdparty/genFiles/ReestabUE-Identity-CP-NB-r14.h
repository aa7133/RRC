/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_ReestabUE_Identity_CP_NB_r14_H_
#define	_ReestabUE_Identity_CP_NB_r14_H_


#include "asn_application.h"

/* Including external dependencies */
#include "S-TMSI.h"
#include "BIT_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ReestabUE-Identity-CP-NB-r14 */
typedef struct ReestabUE_Identity_CP_NB_r14 {
	S_TMSI_t	 s_TMSI_r14;
	BIT_STRING_t	 ul_NAS_MAC_r14;
	BIT_STRING_t	 ul_NAS_Count_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReestabUE_Identity_CP_NB_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReestabUE_Identity_CP_NB_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_ReestabUE_Identity_CP_NB_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_ReestabUE_Identity_CP_NB_r14_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _ReestabUE_Identity_CP_NB_r14_H_ */
#include "asn_internal.h"
