/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_CellIdentityNR_r15_H_
#define	_CellIdentityNR_r15_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BIT_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* CellIdentityNR-r15 */
typedef BIT_STRING_t	 CellIdentityNR_r15_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_CellIdentityNR_r15_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_CellIdentityNR_r15;
asn_struct_free_f CellIdentityNR_r15_free;
asn_struct_print_f CellIdentityNR_r15_print;
asn_constr_check_f CellIdentityNR_r15_constraint;
ber_type_decoder_f CellIdentityNR_r15_decode_ber;
der_type_encoder_f CellIdentityNR_r15_encode_der;
xer_type_decoder_f CellIdentityNR_r15_decode_xer;
xer_type_encoder_f CellIdentityNR_r15_encode_xer;
per_type_decoder_f CellIdentityNR_r15_decode_uper;
per_type_encoder_f CellIdentityNR_r15_encode_uper;
per_type_decoder_f CellIdentityNR_r15_decode_aper;
per_type_encoder_f CellIdentityNR_r15_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _CellIdentityNR_r15_H_ */
#include "asn_internal.h"
