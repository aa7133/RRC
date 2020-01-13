/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_Other_Parameters_v1530_H_
#define	_Other_Parameters_v1530_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Other_Parameters_v1530__assistInfoBitForLC_r15 {
	Other_Parameters_v1530__assistInfoBitForLC_r15_supported	= 0
} e_Other_Parameters_v1530__assistInfoBitForLC_r15;
typedef enum Other_Parameters_v1530__timeReferenceProvision_r15 {
	Other_Parameters_v1530__timeReferenceProvision_r15_supported	= 0
} e_Other_Parameters_v1530__timeReferenceProvision_r15;
typedef enum Other_Parameters_v1530__flightPathPlan_r15 {
	Other_Parameters_v1530__flightPathPlan_r15_supported	= 0
} e_Other_Parameters_v1530__flightPathPlan_r15;

/* Other-Parameters-v1530 */
typedef struct Other_Parameters_v1530 {
	long	*assistInfoBitForLC_r15;	/* OPTIONAL */
	long	*timeReferenceProvision_r15;	/* OPTIONAL */
	long	*flightPathPlan_r15;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Other_Parameters_v1530_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_assistInfoBitForLC_r15_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_timeReferenceProvision_r15_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_flightPathPlan_r15_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_Other_Parameters_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_Other_Parameters_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_Other_Parameters_v1530_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _Other_Parameters_v1530_H_ */
#include "asn_internal.h"