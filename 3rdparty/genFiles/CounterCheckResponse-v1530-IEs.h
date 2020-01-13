/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_CounterCheckResponse_v1530_IEs_H_
#define	_CounterCheckResponse_v1530_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DRB_CountInfoListExt_r15;

/* CounterCheckResponse-v1530-IEs */
typedef struct CounterCheckResponse_v1530_IEs {
	struct DRB_CountInfoListExt_r15	*drb_CountInfoListExt_r15;	/* OPTIONAL */
	struct CounterCheckResponse_v1530_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CounterCheckResponse_v1530_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CounterCheckResponse_v1530_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_CounterCheckResponse_v1530_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_CounterCheckResponse_v1530_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CounterCheckResponse_v1530_IEs_H_ */
#include "asn_internal.h"
