/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_CounterCheckResponse_H_
#define	_CounterCheckResponse_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CounterCheckResponse__criticalExtensions_PR {
	CounterCheckResponse__criticalExtensions_PR_NOTHING,	/* No components present */
	CounterCheckResponse__criticalExtensions_PR_counterCheckResponse_r8,
	CounterCheckResponse__criticalExtensions_PR_criticalExtensionsFuture
} CounterCheckResponse__criticalExtensions_PR;

/* Forward declarations */
struct CounterCheckResponse_r8_IEs;

/* CounterCheckResponse */
typedef struct CounterCheckResponse {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct CounterCheckResponse__criticalExtensions {
		CounterCheckResponse__criticalExtensions_PR present;
		union CounterCheckResponse__criticalExtensions_u {
			struct CounterCheckResponse_r8_IEs	*counterCheckResponse_r8;
			struct CounterCheckResponse__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CounterCheckResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CounterCheckResponse;
extern asn_SEQUENCE_specifics_t asn_SPC_CounterCheckResponse_specs_1;
extern asn_TYPE_member_t asn_MBR_CounterCheckResponse_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CounterCheckResponse_H_ */
#include "asn_internal.h"
