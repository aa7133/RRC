/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_SCGFailureInformation_v12d0_IEs_H_
#define	_SCGFailureInformation_v12d0_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FailureReportSCG_v12d0;

/* SCGFailureInformation-v12d0-IEs */
typedef struct SCGFailureInformation_v12d0_IEs {
	struct FailureReportSCG_v12d0	*failureReportSCG_v12d0;	/* OPTIONAL */
	struct SCGFailureInformation_v12d0_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCGFailureInformation_v12d0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCGFailureInformation_v12d0_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _SCGFailureInformation_v12d0_IEs_H_ */
#include "asn_internal.h"
