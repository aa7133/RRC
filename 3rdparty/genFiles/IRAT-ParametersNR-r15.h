/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_IRAT_ParametersNR_r15_H_
#define	_IRAT_ParametersNR_r15_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IRAT_ParametersNR_r15__en_DC_r15 {
	IRAT_ParametersNR_r15__en_DC_r15_supported	= 0
} e_IRAT_ParametersNR_r15__en_DC_r15;
typedef enum IRAT_ParametersNR_r15__eventB2_r15 {
	IRAT_ParametersNR_r15__eventB2_r15_supported	= 0
} e_IRAT_ParametersNR_r15__eventB2_r15;

/* Forward declarations */
struct SupportedBandListNR_r15;

/* IRAT-ParametersNR-r15 */
typedef struct IRAT_ParametersNR_r15 {
	long	*en_DC_r15;	/* OPTIONAL */
	long	*eventB2_r15;	/* OPTIONAL */
	struct SupportedBandListNR_r15	*supportedBandListEN_DC_r15;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IRAT_ParametersNR_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_en_DC_r15_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_eventB2_r15_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_IRAT_ParametersNR_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_IRAT_ParametersNR_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_IRAT_ParametersNR_r15_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _IRAT_ParametersNR_r15_H_ */
#include "asn_internal.h"
