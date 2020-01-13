/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_QuantityConfigEUTRA_v1310_H_
#define	_QuantityConfigEUTRA_v1310_H_


#include "asn_application.h"

/* Including external dependencies */
#include "FilterCoefficient.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* QuantityConfigEUTRA-v1310 */
typedef struct QuantityConfigEUTRA_v1310 {
	FilterCoefficient_t	*filterCoefficientRS_SINR_r13;	/* DEFAULT 4 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} QuantityConfigEUTRA_v1310_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_QuantityConfigEUTRA_v1310;
extern asn_SEQUENCE_specifics_t asn_SPC_QuantityConfigEUTRA_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_QuantityConfigEUTRA_v1310_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _QuantityConfigEUTRA_v1310_H_ */
#include "asn_internal.h"
