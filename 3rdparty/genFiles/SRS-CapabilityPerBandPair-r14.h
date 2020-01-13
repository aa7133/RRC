/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_SRS_CapabilityPerBandPair_r14_H_
#define	_SRS_CapabilityPerBandPair_r14_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SRS_CapabilityPerBandPair_r14__retuningInfo__rf_RetuningTimeDL_r14 {
	SRS_CapabilityPerBandPair_r14__retuningInfo__rf_RetuningTimeDL_r14_n0	= 0,
	SRS_CapabilityPerBandPair_r14__retuningInfo__rf_RetuningTimeDL_r14_n0dot5	= 1,
	SRS_CapabilityPerBandPair_r14__retuningInfo__rf_RetuningTimeDL_r14_n1	= 2,
	SRS_CapabilityPerBandPair_r14__retuningInfo__rf_RetuningTimeDL_r14_n1dot5	= 3,
	SRS_CapabilityPerBandPair_r14__retuningInfo__rf_RetuningTimeDL_r14_n2	= 4,
	SRS_CapabilityPerBandPair_r14__retuningInfo__rf_RetuningTimeDL_r14_n2dot5	= 5,
	SRS_CapabilityPerBandPair_r14__retuningInfo__rf_RetuningTimeDL_r14_n3	= 6,
	SRS_CapabilityPerBandPair_r14__retuningInfo__rf_RetuningTimeDL_r14_n3dot5	= 7,
	SRS_CapabilityPerBandPair_r14__retuningInfo__rf_RetuningTimeDL_r14_n4	= 8,
	SRS_CapabilityPerBandPair_r14__retuningInfo__rf_RetuningTimeDL_r14_n4dot5	= 9,
	SRS_CapabilityPerBandPair_r14__retuningInfo__rf_RetuningTimeDL_r14_n5	= 10,
	SRS_CapabilityPerBandPair_r14__retuningInfo__rf_RetuningTimeDL_r14_n5dot5	= 11,
	SRS_CapabilityPerBandPair_r14__retuningInfo__rf_RetuningTimeDL_r14_n6	= 12,
	SRS_CapabilityPerBandPair_r14__retuningInfo__rf_RetuningTimeDL_r14_n6dot5	= 13,
	SRS_CapabilityPerBandPair_r14__retuningInfo__rf_RetuningTimeDL_r14_n7	= 14,
	SRS_CapabilityPerBandPair_r14__retuningInfo__rf_RetuningTimeDL_r14_spare1	= 15
} e_SRS_CapabilityPerBandPair_r14__retuningInfo__rf_RetuningTimeDL_r14;
typedef enum SRS_CapabilityPerBandPair_r14__retuningInfo__rf_RetuningTimeUL_r14 {
	SRS_CapabilityPerBandPair_r14__retuningInfo__rf_RetuningTimeUL_r14_n0	= 0,
	SRS_CapabilityPerBandPair_r14__retuningInfo__rf_RetuningTimeUL_r14_n0dot5	= 1,
	SRS_CapabilityPerBandPair_r14__retuningInfo__rf_RetuningTimeUL_r14_n1	= 2,
	SRS_CapabilityPerBandPair_r14__retuningInfo__rf_RetuningTimeUL_r14_n1dot5	= 3,
	SRS_CapabilityPerBandPair_r14__retuningInfo__rf_RetuningTimeUL_r14_n2	= 4,
	SRS_CapabilityPerBandPair_r14__retuningInfo__rf_RetuningTimeUL_r14_n2dot5	= 5,
	SRS_CapabilityPerBandPair_r14__retuningInfo__rf_RetuningTimeUL_r14_n3	= 6,
	SRS_CapabilityPerBandPair_r14__retuningInfo__rf_RetuningTimeUL_r14_n3dot5	= 7,
	SRS_CapabilityPerBandPair_r14__retuningInfo__rf_RetuningTimeUL_r14_n4	= 8,
	SRS_CapabilityPerBandPair_r14__retuningInfo__rf_RetuningTimeUL_r14_n4dot5	= 9,
	SRS_CapabilityPerBandPair_r14__retuningInfo__rf_RetuningTimeUL_r14_n5	= 10,
	SRS_CapabilityPerBandPair_r14__retuningInfo__rf_RetuningTimeUL_r14_n5dot5	= 11,
	SRS_CapabilityPerBandPair_r14__retuningInfo__rf_RetuningTimeUL_r14_n6	= 12,
	SRS_CapabilityPerBandPair_r14__retuningInfo__rf_RetuningTimeUL_r14_n6dot5	= 13,
	SRS_CapabilityPerBandPair_r14__retuningInfo__rf_RetuningTimeUL_r14_n7	= 14,
	SRS_CapabilityPerBandPair_r14__retuningInfo__rf_RetuningTimeUL_r14_spare1	= 15
} e_SRS_CapabilityPerBandPair_r14__retuningInfo__rf_RetuningTimeUL_r14;

/* SRS-CapabilityPerBandPair-r14 */
typedef struct SRS_CapabilityPerBandPair_r14 {
	struct SRS_CapabilityPerBandPair_r14__retuningInfo {
		long	*rf_RetuningTimeDL_r14;	/* OPTIONAL */
		long	*rf_RetuningTimeUL_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} retuningInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SRS_CapabilityPerBandPair_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_rf_RetuningTimeDL_r14_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_rf_RetuningTimeUL_r14_20;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SRS_CapabilityPerBandPair_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_SRS_CapabilityPerBandPair_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_SRS_CapabilityPerBandPair_r14_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _SRS_CapabilityPerBandPair_r14_H_ */
#include "asn_internal.h"
