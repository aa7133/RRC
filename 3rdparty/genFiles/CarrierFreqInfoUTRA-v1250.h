/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_CarrierFreqInfoUTRA_v1250_H_
#define	_CarrierFreqInfoUTRA_v1250_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CarrierFreqInfoUTRA_v1250__reducedMeasPerformance_r12 {
	CarrierFreqInfoUTRA_v1250__reducedMeasPerformance_r12_true	= 0
} e_CarrierFreqInfoUTRA_v1250__reducedMeasPerformance_r12;

/* CarrierFreqInfoUTRA-v1250 */
typedef struct CarrierFreqInfoUTRA_v1250 {
	long	*reducedMeasPerformance_r12;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CarrierFreqInfoUTRA_v1250_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_reducedMeasPerformance_r12_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CarrierFreqInfoUTRA_v1250;
extern asn_SEQUENCE_specifics_t asn_SPC_CarrierFreqInfoUTRA_v1250_specs_1;
extern asn_TYPE_member_t asn_MBR_CarrierFreqInfoUTRA_v1250_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _CarrierFreqInfoUTRA_v1250_H_ */
#include "asn_internal.h"
