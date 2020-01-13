/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_SIB_Type_NB_v1530_H_
#define	_SIB_Type_NB_v1530_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SIB_Type_NB_v1530 {
	SIB_Type_NB_v1530_sibType23_NB_r15	= 0,
	SIB_Type_NB_v1530_spare7	= 1,
	SIB_Type_NB_v1530_spare6	= 2,
	SIB_Type_NB_v1530_spare5	= 3,
	SIB_Type_NB_v1530_spare4	= 4,
	SIB_Type_NB_v1530_spare3	= 5,
	SIB_Type_NB_v1530_spare2	= 6,
	SIB_Type_NB_v1530_spare1	= 7
} e_SIB_Type_NB_v1530;

/* SIB-Type-NB-v1530 */
typedef long	 SIB_Type_NB_v1530_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SIB_Type_NB_v1530_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SIB_Type_NB_v1530;
extern const asn_INTEGER_specifics_t asn_SPC_SIB_Type_NB_v1530_specs_1;
asn_struct_free_f SIB_Type_NB_v1530_free;
asn_struct_print_f SIB_Type_NB_v1530_print;
asn_constr_check_f SIB_Type_NB_v1530_constraint;
ber_type_decoder_f SIB_Type_NB_v1530_decode_ber;
der_type_encoder_f SIB_Type_NB_v1530_encode_der;
xer_type_decoder_f SIB_Type_NB_v1530_decode_xer;
xer_type_encoder_f SIB_Type_NB_v1530_encode_xer;
per_type_decoder_f SIB_Type_NB_v1530_decode_uper;
per_type_encoder_f SIB_Type_NB_v1530_encode_uper;
per_type_decoder_f SIB_Type_NB_v1530_decode_aper;
per_type_encoder_f SIB_Type_NB_v1530_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SIB_Type_NB_v1530_H_ */
#include "asn_internal.h"
