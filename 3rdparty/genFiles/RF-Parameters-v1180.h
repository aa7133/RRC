/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_RF_Parameters_v1180_H_
#define	_RF_Parameters_v1180_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "FreqBandIndicator-r11.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RF_Parameters_v1180__freqBandRetrieval_r11 {
	RF_Parameters_v1180__freqBandRetrieval_r11_supported	= 0
} e_RF_Parameters_v1180__freqBandRetrieval_r11;

/* Forward declarations */
struct SupportedBandCombinationAdd_r11;

/* RF-Parameters-v1180 */
typedef struct RF_Parameters_v1180 {
	long	*freqBandRetrieval_r11;	/* OPTIONAL */
	struct RF_Parameters_v1180__requestedBands_r11 {
		A_SEQUENCE_OF(FreqBandIndicator_r11_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *requestedBands_r11;
	struct SupportedBandCombinationAdd_r11	*supportedBandCombinationAdd_r11;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RF_Parameters_v1180_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_freqBandRetrieval_r11_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RF_Parameters_v1180;
extern asn_SEQUENCE_specifics_t asn_SPC_RF_Parameters_v1180_specs_1;
extern asn_TYPE_member_t asn_MBR_RF_Parameters_v1180_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _RF_Parameters_v1180_H_ */
#include "asn_internal.h"
