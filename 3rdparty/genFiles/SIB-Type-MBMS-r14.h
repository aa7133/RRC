/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_SIB_Type_MBMS_r14_H_
#define	_SIB_Type_MBMS_r14_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SIB_Type_MBMS_r14 {
	SIB_Type_MBMS_r14_sibType10	= 0,
	SIB_Type_MBMS_r14_sibType11	= 1,
	SIB_Type_MBMS_r14_sibType12_v920	= 2,
	SIB_Type_MBMS_r14_sibType13_v920	= 3,
	SIB_Type_MBMS_r14_sibType15_v1130	= 4,
	SIB_Type_MBMS_r14_sibType16_v1130	= 5
	/*
	 * Enumeration is extensible
	 */
} e_SIB_Type_MBMS_r14;

/* SIB-Type-MBMS-r14 */
typedef long	 SIB_Type_MBMS_r14_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SIB_Type_MBMS_r14_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SIB_Type_MBMS_r14;
extern const asn_INTEGER_specifics_t asn_SPC_SIB_Type_MBMS_r14_specs_1;
asn_struct_free_f SIB_Type_MBMS_r14_free;
asn_struct_print_f SIB_Type_MBMS_r14_print;
asn_constr_check_f SIB_Type_MBMS_r14_constraint;
ber_type_decoder_f SIB_Type_MBMS_r14_decode_ber;
der_type_encoder_f SIB_Type_MBMS_r14_encode_der;
xer_type_decoder_f SIB_Type_MBMS_r14_decode_xer;
xer_type_encoder_f SIB_Type_MBMS_r14_encode_xer;
per_type_decoder_f SIB_Type_MBMS_r14_decode_uper;
per_type_encoder_f SIB_Type_MBMS_r14_encode_uper;
per_type_decoder_f SIB_Type_MBMS_r14_decode_aper;
per_type_encoder_f SIB_Type_MBMS_r14_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SIB_Type_MBMS_r14_H_ */
#include "asn_internal.h"
