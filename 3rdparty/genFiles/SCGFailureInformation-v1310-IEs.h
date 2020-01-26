/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_SCGFailureInformation_v1310_IEs_H_
#define	_SCGFailureInformation_v1310_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SCGFailureInformation-v1310-IEs */
typedef struct SCGFailureInformation_v1310_IEs {
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct SCGFailureInformation_v1310_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCGFailureInformation_v1310_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCGFailureInformation_v1310_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SCGFailureInformation_v1310_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SCGFailureInformation_v1310_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SCGFailureInformation_v1310_IEs_H_ */
#include "asn_internal.h"
