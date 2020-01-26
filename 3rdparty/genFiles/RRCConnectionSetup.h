/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_RRCConnectionSetup_H_
#define	_RRCConnectionSetup_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "NULL.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionSetup__criticalExtensions_PR {
	RRCConnectionSetup__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCConnectionSetup__criticalExtensions_PR_c1,
	RRCConnectionSetup__criticalExtensions_PR_criticalExtensionsFuture
} RRCConnectionSetup__criticalExtensions_PR;
typedef enum RRCConnectionSetup__criticalExtensions__c1_PR {
	RRCConnectionSetup__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	RRCConnectionSetup__criticalExtensions__c1_PR_rrcConnectionSetup_r8,
	RRCConnectionSetup__criticalExtensions__c1_PR_spare7,
	RRCConnectionSetup__criticalExtensions__c1_PR_spare6,
	RRCConnectionSetup__criticalExtensions__c1_PR_spare5,
	RRCConnectionSetup__criticalExtensions__c1_PR_spare4,
	RRCConnectionSetup__criticalExtensions__c1_PR_spare3,
	RRCConnectionSetup__criticalExtensions__c1_PR_spare2,
	RRCConnectionSetup__criticalExtensions__c1_PR_spare1
} RRCConnectionSetup__criticalExtensions__c1_PR;

/* Forward declarations */
struct RRCConnectionSetup_r8_IEs;

/* RRCConnectionSetup */
typedef struct RRCConnectionSetup {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct RRCConnectionSetup__criticalExtensions {
		RRCConnectionSetup__criticalExtensions_PR present;
		union RRCConnectionSetup__criticalExtensions_u {
			struct RRCConnectionSetup__criticalExtensions__c1 {
				RRCConnectionSetup__criticalExtensions__c1_PR present;
				union RRCConnectionSetup__criticalExtensions__c1_u {
					struct RRCConnectionSetup_r8_IEs	*rrcConnectionSetup_r8;
					NULL_t	 spare7;
					NULL_t	 spare6;
					NULL_t	 spare5;
					NULL_t	 spare4;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *c1;
			struct RRCConnectionSetup__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionSetup_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionSetup;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionSetup_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionSetup_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionSetup_H_ */
#include "asn_internal.h"
