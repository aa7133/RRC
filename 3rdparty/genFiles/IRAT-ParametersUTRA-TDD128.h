/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_IRAT_ParametersUTRA_TDD128_H_
#define	_IRAT_ParametersUTRA_TDD128_H_


#include "asn_application.h"

/* Including external dependencies */
#include "SupportedBandListUTRA-TDD128.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* IRAT-ParametersUTRA-TDD128 */
typedef struct IRAT_ParametersUTRA_TDD128 {
	SupportedBandListUTRA_TDD128_t	 supportedBandListUTRA_TDD128;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IRAT_ParametersUTRA_TDD128_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IRAT_ParametersUTRA_TDD128;
extern asn_SEQUENCE_specifics_t asn_SPC_IRAT_ParametersUTRA_TDD128_specs_1;
extern asn_TYPE_member_t asn_MBR_IRAT_ParametersUTRA_TDD128_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _IRAT_ParametersUTRA_TDD128_H_ */
#include "asn_internal.h"
