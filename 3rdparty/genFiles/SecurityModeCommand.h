/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_SecurityModeCommand_H_
#define	_SecurityModeCommand_H_


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
typedef enum SecurityModeCommand__criticalExtensions_PR {
	SecurityModeCommand__criticalExtensions_PR_NOTHING,	/* No components present */
	SecurityModeCommand__criticalExtensions_PR_c1,
	SecurityModeCommand__criticalExtensions_PR_criticalExtensionsFuture
} SecurityModeCommand__criticalExtensions_PR;
typedef enum SecurityModeCommand__criticalExtensions__c1_PR {
	SecurityModeCommand__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	SecurityModeCommand__criticalExtensions__c1_PR_securityModeCommand_r8,
	SecurityModeCommand__criticalExtensions__c1_PR_spare3,
	SecurityModeCommand__criticalExtensions__c1_PR_spare2,
	SecurityModeCommand__criticalExtensions__c1_PR_spare1
} SecurityModeCommand__criticalExtensions__c1_PR;

/* Forward declarations */
struct SecurityModeCommand_r8_IEs;

/* SecurityModeCommand */
typedef struct SecurityModeCommand {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct SecurityModeCommand__criticalExtensions {
		SecurityModeCommand__criticalExtensions_PR present;
		union SecurityModeCommand__criticalExtensions_u {
			struct SecurityModeCommand__criticalExtensions__c1 {
				SecurityModeCommand__criticalExtensions__c1_PR present;
				union SecurityModeCommand__criticalExtensions__c1_u {
					struct SecurityModeCommand_r8_IEs	*securityModeCommand_r8;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *c1;
			struct SecurityModeCommand__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SecurityModeCommand_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SecurityModeCommand;
extern asn_SEQUENCE_specifics_t asn_SPC_SecurityModeCommand_specs_1;
extern asn_TYPE_member_t asn_MBR_SecurityModeCommand_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SecurityModeCommand_H_ */
#include "asn_internal.h"
