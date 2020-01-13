/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_UAC_AC1_SelectAssistInfo_r15_H_
#define	_UAC_AC1_SelectAssistInfo_r15_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UAC_AC1_SelectAssistInfo_r15 {
	UAC_AC1_SelectAssistInfo_r15_a	= 0,
	UAC_AC1_SelectAssistInfo_r15_b	= 1,
	UAC_AC1_SelectAssistInfo_r15_c	= 2
} e_UAC_AC1_SelectAssistInfo_r15;

/* UAC-AC1-SelectAssistInfo-r15 */
typedef long	 UAC_AC1_SelectAssistInfo_r15_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_UAC_AC1_SelectAssistInfo_r15_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_UAC_AC1_SelectAssistInfo_r15;
extern const asn_INTEGER_specifics_t asn_SPC_UAC_AC1_SelectAssistInfo_r15_specs_1;
asn_struct_free_f UAC_AC1_SelectAssistInfo_r15_free;
asn_struct_print_f UAC_AC1_SelectAssistInfo_r15_print;
asn_constr_check_f UAC_AC1_SelectAssistInfo_r15_constraint;
ber_type_decoder_f UAC_AC1_SelectAssistInfo_r15_decode_ber;
der_type_encoder_f UAC_AC1_SelectAssistInfo_r15_encode_der;
xer_type_decoder_f UAC_AC1_SelectAssistInfo_r15_decode_xer;
xer_type_encoder_f UAC_AC1_SelectAssistInfo_r15_encode_xer;
per_type_decoder_f UAC_AC1_SelectAssistInfo_r15_decode_uper;
per_type_encoder_f UAC_AC1_SelectAssistInfo_r15_encode_uper;
per_type_decoder_f UAC_AC1_SelectAssistInfo_r15_decode_aper;
per_type_encoder_f UAC_AC1_SelectAssistInfo_r15_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _UAC_AC1_SelectAssistInfo_r15_H_ */
#include "asn_internal.h"
