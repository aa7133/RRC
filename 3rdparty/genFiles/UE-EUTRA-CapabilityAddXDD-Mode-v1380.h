/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_UE_EUTRA_CapabilityAddXDD_Mode_v1380_H_
#define	_UE_EUTRA_CapabilityAddXDD_Mode_v1380_H_


#include "asn_application.h"

/* Including external dependencies */
#include "CE-Parameters-v1380.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* UE-EUTRA-CapabilityAddXDD-Mode-v1380 */
typedef struct UE_EUTRA_CapabilityAddXDD_Mode_v1380 {
	CE_Parameters_v1380_t	 ce_Parameters_v1380;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_CapabilityAddXDD_Mode_v1380_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1380;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_CapabilityAddXDD_Mode_v1380_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_EUTRA_CapabilityAddXDD_Mode_v1380_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _UE_EUTRA_CapabilityAddXDD_Mode_v1380_H_ */
#include "asn_internal.h"
