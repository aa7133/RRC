/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_RNReconfiguration_r10_IEs_H_
#define	_RNReconfiguration_r10_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RN_SystemInfo_r10;
struct RN_SubframeConfig_r10;

/* RNReconfiguration-r10-IEs */
typedef struct RNReconfiguration_r10_IEs {
	struct RN_SystemInfo_r10	*rn_SystemInfo_r10;	/* OPTIONAL */
	struct RN_SubframeConfig_r10	*rn_SubframeConfig_r10;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct RNReconfiguration_r10_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RNReconfiguration_r10_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RNReconfiguration_r10_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RNReconfiguration_r10_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RNReconfiguration_r10_IEs_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _RNReconfiguration_r10_IEs_H_ */
#include "asn_internal.h"
