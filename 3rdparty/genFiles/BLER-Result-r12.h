/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_BLER_Result_r12_H_
#define	_BLER_Result_r12_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BLER-Range-r12.h"
#include "BIT_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* BLER-Result-r12 */
typedef struct BLER_Result_r12 {
	BLER_Range_r12_t	 bler_r12;
	struct BLER_Result_r12__blocksReceived_r12 {
		BIT_STRING_t	 n_r12;
		BIT_STRING_t	 m_r12;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} blocksReceived_r12;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BLER_Result_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BLER_Result_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_BLER_Result_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_BLER_Result_r12_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _BLER_Result_r12_H_ */
#include "asn_internal.h"
