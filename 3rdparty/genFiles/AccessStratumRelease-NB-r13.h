/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_AccessStratumRelease_NB_r13_H_
#define	_AccessStratumRelease_NB_r13_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AccessStratumRelease_NB_r13 {
	AccessStratumRelease_NB_r13_rel13	= 0,
	AccessStratumRelease_NB_r13_rel14	= 1,
	AccessStratumRelease_NB_r13_rel15	= 2,
	AccessStratumRelease_NB_r13_spare5	= 3,
	AccessStratumRelease_NB_r13_spare4	= 4,
	AccessStratumRelease_NB_r13_spare3	= 5,
	AccessStratumRelease_NB_r13_spare2	= 6,
	AccessStratumRelease_NB_r13_spare1	= 7
	/*
	 * Enumeration is extensible
	 */
} e_AccessStratumRelease_NB_r13;

/* AccessStratumRelease-NB-r13 */
typedef long	 AccessStratumRelease_NB_r13_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_AccessStratumRelease_NB_r13_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_AccessStratumRelease_NB_r13;
extern const asn_INTEGER_specifics_t asn_SPC_AccessStratumRelease_NB_r13_specs_1;
asn_struct_free_f AccessStratumRelease_NB_r13_free;
asn_struct_print_f AccessStratumRelease_NB_r13_print;
asn_constr_check_f AccessStratumRelease_NB_r13_constraint;
ber_type_decoder_f AccessStratumRelease_NB_r13_decode_ber;
der_type_encoder_f AccessStratumRelease_NB_r13_encode_der;
xer_type_decoder_f AccessStratumRelease_NB_r13_decode_xer;
xer_type_encoder_f AccessStratumRelease_NB_r13_encode_xer;
per_type_decoder_f AccessStratumRelease_NB_r13_decode_uper;
per_type_encoder_f AccessStratumRelease_NB_r13_encode_uper;
per_type_decoder_f AccessStratumRelease_NB_r13_decode_aper;
per_type_encoder_f AccessStratumRelease_NB_r13_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _AccessStratumRelease_NB_r13_H_ */
#include "asn_internal.h"
