/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_BandParametersUL_r10_H_
#define	_BandParametersUL_r10_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CA_MIMO_ParametersUL_r10;

/* BandParametersUL-r10 */
typedef struct BandParametersUL_r10 {
	A_SEQUENCE_OF(struct CA_MIMO_ParametersUL_r10) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandParametersUL_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BandParametersUL_r10;
extern asn_SET_OF_specifics_t asn_SPC_BandParametersUL_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_BandParametersUL_r10_1[1];
extern asn_per_constraints_t asn_PER_type_BandParametersUL_r10_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _BandParametersUL_r10_H_ */
#include "asn_internal.h"
