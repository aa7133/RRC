/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_BandCombinationParameters_v1450_H_
#define	_BandCombinationParameters_v1450_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BandParameters_v1450;

/* BandCombinationParameters-v1450 */
typedef struct BandCombinationParameters_v1450 {
	struct BandCombinationParameters_v1450__bandParameterList_v1450 {
		A_SEQUENCE_OF(struct BandParameters_v1450) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *bandParameterList_v1450;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandCombinationParameters_v1450_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BandCombinationParameters_v1450;
extern asn_SEQUENCE_specifics_t asn_SPC_BandCombinationParameters_v1450_specs_1;
extern asn_TYPE_member_t asn_MBR_BandCombinationParameters_v1450_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _BandCombinationParameters_v1450_H_ */
#include "asn_internal.h"
