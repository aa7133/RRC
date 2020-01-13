/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_PhyLayerParameters_NB_v1430_H_
#define	_PhyLayerParameters_NB_v1430_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PhyLayerParameters_NB_v1430__multiCarrier_NPRACH_r14 {
	PhyLayerParameters_NB_v1430__multiCarrier_NPRACH_r14_supported	= 0
} e_PhyLayerParameters_NB_v1430__multiCarrier_NPRACH_r14;
typedef enum PhyLayerParameters_NB_v1430__twoHARQ_Processes_r14 {
	PhyLayerParameters_NB_v1430__twoHARQ_Processes_r14_supported	= 0
} e_PhyLayerParameters_NB_v1430__twoHARQ_Processes_r14;

/* PhyLayerParameters-NB-v1430 */
typedef struct PhyLayerParameters_NB_v1430 {
	long	*multiCarrier_NPRACH_r14;	/* OPTIONAL */
	long	*twoHARQ_Processes_r14;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhyLayerParameters_NB_v1430_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_multiCarrier_NPRACH_r14_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_twoHARQ_Processes_r14_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PhyLayerParameters_NB_v1430;
extern asn_SEQUENCE_specifics_t asn_SPC_PhyLayerParameters_NB_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_PhyLayerParameters_NB_v1430_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PhyLayerParameters_NB_v1430_H_ */
#include "asn_internal.h"
