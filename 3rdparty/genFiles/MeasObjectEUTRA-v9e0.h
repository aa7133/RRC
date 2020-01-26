/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_MeasObjectEUTRA_v9e0_H_
#define	_MeasObjectEUTRA_v9e0_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ARFCN-ValueEUTRA-v9e0.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MeasObjectEUTRA-v9e0 */
typedef struct MeasObjectEUTRA_v9e0 {
	ARFCN_ValueEUTRA_v9e0_t	 carrierFreq_v9e0;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasObjectEUTRA_v9e0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasObjectEUTRA_v9e0;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasObjectEUTRA_v9e0_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasObjectEUTRA_v9e0_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasObjectEUTRA_v9e0_H_ */
#include "asn_internal.h"
