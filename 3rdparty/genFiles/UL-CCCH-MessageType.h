/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_UL_CCCH_MessageType_H_
#define	_UL_CCCH_MessageType_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_CHOICE.h"
#include "NULL.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UL_CCCH_MessageType_PR {
	UL_CCCH_MessageType_PR_NOTHING,	/* No components present */
	UL_CCCH_MessageType_PR_c1,
	UL_CCCH_MessageType_PR_messageClassExtension
} UL_CCCH_MessageType_PR;
typedef enum UL_CCCH_MessageType__c1_PR {
	UL_CCCH_MessageType__c1_PR_NOTHING,	/* No components present */
	UL_CCCH_MessageType__c1_PR_rrcConnectionReestablishmentRequest,
	UL_CCCH_MessageType__c1_PR_rrcConnectionRequest
} UL_CCCH_MessageType__c1_PR;
typedef enum UL_CCCH_MessageType__messageClassExtension_PR {
	UL_CCCH_MessageType__messageClassExtension_PR_NOTHING,	/* No components present */
	UL_CCCH_MessageType__messageClassExtension_PR_c2,
	UL_CCCH_MessageType__messageClassExtension_PR_messageClassExtensionFuture_r13
} UL_CCCH_MessageType__messageClassExtension_PR;
typedef enum UL_CCCH_MessageType__messageClassExtension__c2_PR {
	UL_CCCH_MessageType__messageClassExtension__c2_PR_NOTHING,	/* No components present */
	UL_CCCH_MessageType__messageClassExtension__c2_PR_rrcConnectionResumeRequest_r13
} UL_CCCH_MessageType__messageClassExtension__c2_PR;
typedef enum UL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r13_PR {
	UL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r13_PR_NOTHING,	/* No components present */
	UL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r13_PR_c3,
	UL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r13_PR_messageClassExtensionFuture_r15
} UL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r13_PR;
typedef enum UL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r13__c3_PR {
	UL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r13__c3_PR_NOTHING,	/* No components present */
	UL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r13__c3_PR_rrcEarlyDataRequest_r15,
	UL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r13__c3_PR_spare3,
	UL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r13__c3_PR_spare2,
	UL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r13__c3_PR_spare1
} UL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r13__c3_PR;

/* Forward declarations */
struct RRCConnectionReestablishmentRequest;
struct RRCConnectionRequest;
struct RRCConnectionResumeRequest_r13;
struct RRCEarlyDataRequest_r15;

/* UL-CCCH-MessageType */
typedef struct UL_CCCH_MessageType {
	UL_CCCH_MessageType_PR present;
	union UL_CCCH_MessageType_u {
		struct UL_CCCH_MessageType__c1 {
			UL_CCCH_MessageType__c1_PR present;
			union UL_CCCH_MessageType__c1_u {
				struct RRCConnectionReestablishmentRequest	*rrcConnectionReestablishmentRequest;
				struct RRCConnectionRequest	*rrcConnectionRequest;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *c1;
		struct UL_CCCH_MessageType__messageClassExtension {
			UL_CCCH_MessageType__messageClassExtension_PR present;
			union UL_CCCH_MessageType__messageClassExtension_u {
				struct UL_CCCH_MessageType__messageClassExtension__c2 {
					UL_CCCH_MessageType__messageClassExtension__c2_PR present;
					union UL_CCCH_MessageType__messageClassExtension__c2_u {
						struct RRCConnectionResumeRequest_r13	*rrcConnectionResumeRequest_r13;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *c2;
				struct UL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r13 {
					UL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r13_PR present;
					union UL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r13_u {
						struct UL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r13__c3 {
							UL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r13__c3_PR present;
							union UL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r13__c3_u {
								struct RRCEarlyDataRequest_r15	*rrcEarlyDataRequest_r15;
								NULL_t	 spare3;
								NULL_t	 spare2;
								NULL_t	 spare1;
							} choice;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} *c3;
						struct UL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r13__messageClassExtensionFuture_r15 {
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} *messageClassExtensionFuture_r15;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *messageClassExtensionFuture_r13;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *messageClassExtension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_CCCH_MessageType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_CCCH_MessageType;
extern asn_CHOICE_specifics_t asn_SPC_UL_CCCH_MessageType_specs_1;
extern asn_TYPE_member_t asn_MBR_UL_CCCH_MessageType_1[2];
extern asn_per_constraints_t asn_PER_type_UL_CCCH_MessageType_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _UL_CCCH_MessageType_H_ */
#include "asn_internal.h"