/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_T_PollRetransmit_H_
#define	_T_PollRetransmit_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum T_PollRetransmit {
	T_PollRetransmit_ms5	= 0,
	T_PollRetransmit_ms10	= 1,
	T_PollRetransmit_ms15	= 2,
	T_PollRetransmit_ms20	= 3,
	T_PollRetransmit_ms25	= 4,
	T_PollRetransmit_ms30	= 5,
	T_PollRetransmit_ms35	= 6,
	T_PollRetransmit_ms40	= 7,
	T_PollRetransmit_ms45	= 8,
	T_PollRetransmit_ms50	= 9,
	T_PollRetransmit_ms55	= 10,
	T_PollRetransmit_ms60	= 11,
	T_PollRetransmit_ms65	= 12,
	T_PollRetransmit_ms70	= 13,
	T_PollRetransmit_ms75	= 14,
	T_PollRetransmit_ms80	= 15,
	T_PollRetransmit_ms85	= 16,
	T_PollRetransmit_ms90	= 17,
	T_PollRetransmit_ms95	= 18,
	T_PollRetransmit_ms100	= 19,
	T_PollRetransmit_ms105	= 20,
	T_PollRetransmit_ms110	= 21,
	T_PollRetransmit_ms115	= 22,
	T_PollRetransmit_ms120	= 23,
	T_PollRetransmit_ms125	= 24,
	T_PollRetransmit_ms130	= 25,
	T_PollRetransmit_ms135	= 26,
	T_PollRetransmit_ms140	= 27,
	T_PollRetransmit_ms145	= 28,
	T_PollRetransmit_ms150	= 29,
	T_PollRetransmit_ms155	= 30,
	T_PollRetransmit_ms160	= 31,
	T_PollRetransmit_ms165	= 32,
	T_PollRetransmit_ms170	= 33,
	T_PollRetransmit_ms175	= 34,
	T_PollRetransmit_ms180	= 35,
	T_PollRetransmit_ms185	= 36,
	T_PollRetransmit_ms190	= 37,
	T_PollRetransmit_ms195	= 38,
	T_PollRetransmit_ms200	= 39,
	T_PollRetransmit_ms205	= 40,
	T_PollRetransmit_ms210	= 41,
	T_PollRetransmit_ms215	= 42,
	T_PollRetransmit_ms220	= 43,
	T_PollRetransmit_ms225	= 44,
	T_PollRetransmit_ms230	= 45,
	T_PollRetransmit_ms235	= 46,
	T_PollRetransmit_ms240	= 47,
	T_PollRetransmit_ms245	= 48,
	T_PollRetransmit_ms250	= 49,
	T_PollRetransmit_ms300	= 50,
	T_PollRetransmit_ms350	= 51,
	T_PollRetransmit_ms400	= 52,
	T_PollRetransmit_ms450	= 53,
	T_PollRetransmit_ms500	= 54,
	T_PollRetransmit_ms800_v1310	= 55,
	T_PollRetransmit_ms1000_v1310	= 56,
	T_PollRetransmit_ms2000_v1310	= 57,
	T_PollRetransmit_ms4000_v1310	= 58,
	T_PollRetransmit_spare5	= 59,
	T_PollRetransmit_spare4	= 60,
	T_PollRetransmit_spare3	= 61,
	T_PollRetransmit_spare2	= 62,
	T_PollRetransmit_spare1	= 63
} e_T_PollRetransmit;

/* T-PollRetransmit */
typedef long	 T_PollRetransmit_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_T_PollRetransmit_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_T_PollRetransmit;
extern const asn_INTEGER_specifics_t asn_SPC_T_PollRetransmit_specs_1;
asn_struct_free_f T_PollRetransmit_free;
asn_struct_print_f T_PollRetransmit_print;
asn_constr_check_f T_PollRetransmit_constraint;
ber_type_decoder_f T_PollRetransmit_decode_ber;
der_type_encoder_f T_PollRetransmit_encode_der;
xer_type_decoder_f T_PollRetransmit_decode_xer;
xer_type_encoder_f T_PollRetransmit_encode_xer;
per_type_decoder_f T_PollRetransmit_decode_uper;
per_type_encoder_f T_PollRetransmit_encode_uper;
per_type_decoder_f T_PollRetransmit_decode_aper;
per_type_encoder_f T_PollRetransmit_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _T_PollRetransmit_H_ */
#include "asn_internal.h"
