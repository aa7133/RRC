/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_BandParameters_v10i0_H_
#define	_BandParameters_v10i0_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CA_MIMO_ParametersDL_v10i0;

/* BandParameters-v10i0 */
typedef struct BandParameters_v10i0 {
	struct BandParameters_v10i0__bandParametersDL_v10i0 {
		A_SEQUENCE_OF(struct CA_MIMO_ParametersDL_v10i0) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} bandParametersDL_v10i0;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandParameters_v10i0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BandParameters_v10i0;
extern asn_SEQUENCE_specifics_t asn_SPC_BandParameters_v10i0_specs_1;
extern asn_TYPE_member_t asn_MBR_BandParameters_v10i0_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _BandParameters_v10i0_H_ */
#include "asn_internal.h"
