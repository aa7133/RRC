/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_UECapabilityEnquiry_v1510_IEs_H_
#define	_UECapabilityEnquiry_v1510_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UECapabilityEnquiry_v1530_IEs;

/* UECapabilityEnquiry-v1510-IEs */
typedef struct UECapabilityEnquiry_v1510_IEs {
	OCTET_STRING_t	*requestedFreqBandsNR_MRDC_r15;	/* OPTIONAL */
	struct UECapabilityEnquiry_v1530_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UECapabilityEnquiry_v1510_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UECapabilityEnquiry_v1510_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UECapabilityEnquiry_v1510_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UECapabilityEnquiry_v1510_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _UECapabilityEnquiry_v1510_IEs_H_ */
#include "asn_internal.h"
