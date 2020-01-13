/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_CQI_ReportModeAperiodic_H_
#define	_CQI_ReportModeAperiodic_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CQI_ReportModeAperiodic {
	CQI_ReportModeAperiodic_rm12	= 0,
	CQI_ReportModeAperiodic_rm20	= 1,
	CQI_ReportModeAperiodic_rm22	= 2,
	CQI_ReportModeAperiodic_rm30	= 3,
	CQI_ReportModeAperiodic_rm31	= 4,
	CQI_ReportModeAperiodic_rm32_v1250	= 5,
	CQI_ReportModeAperiodic_rm10_v1310	= 6,
	CQI_ReportModeAperiodic_rm11_v1310	= 7
} e_CQI_ReportModeAperiodic;

/* CQI-ReportModeAperiodic */
typedef long	 CQI_ReportModeAperiodic_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_CQI_ReportModeAperiodic_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_CQI_ReportModeAperiodic;
extern const asn_INTEGER_specifics_t asn_SPC_CQI_ReportModeAperiodic_specs_1;
asn_struct_free_f CQI_ReportModeAperiodic_free;
asn_struct_print_f CQI_ReportModeAperiodic_print;
asn_constr_check_f CQI_ReportModeAperiodic_constraint;
ber_type_decoder_f CQI_ReportModeAperiodic_decode_ber;
der_type_encoder_f CQI_ReportModeAperiodic_encode_der;
xer_type_decoder_f CQI_ReportModeAperiodic_decode_xer;
xer_type_encoder_f CQI_ReportModeAperiodic_encode_xer;
per_type_decoder_f CQI_ReportModeAperiodic_decode_uper;
per_type_encoder_f CQI_ReportModeAperiodic_encode_uper;
per_type_decoder_f CQI_ReportModeAperiodic_decode_aper;
per_type_encoder_f CQI_ReportModeAperiodic_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _CQI_ReportModeAperiodic_H_ */
#include "asn_internal.h"
