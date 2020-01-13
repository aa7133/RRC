/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_DL_DCCH_MessageType_NB_H_
#define	_DL_DCCH_MessageType_NB_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NULL.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_DCCH_MessageType_NB_PR {
	DL_DCCH_MessageType_NB_PR_NOTHING,	/* No components present */
	DL_DCCH_MessageType_NB_PR_c1,
	DL_DCCH_MessageType_NB_PR_messageClassExtension
} DL_DCCH_MessageType_NB_PR;
typedef enum DL_DCCH_MessageType_NB__c1_PR {
	DL_DCCH_MessageType_NB__c1_PR_NOTHING,	/* No components present */
	DL_DCCH_MessageType_NB__c1_PR_dlInformationTransfer_r13,
	DL_DCCH_MessageType_NB__c1_PR_rrcConnectionReconfiguration_r13,
	DL_DCCH_MessageType_NB__c1_PR_rrcConnectionRelease_r13,
	DL_DCCH_MessageType_NB__c1_PR_securityModeCommand_r13,
	DL_DCCH_MessageType_NB__c1_PR_ueCapabilityEnquiry_r13,
	DL_DCCH_MessageType_NB__c1_PR_rrcConnectionResume_r13,
	DL_DCCH_MessageType_NB__c1_PR_spare2,
	DL_DCCH_MessageType_NB__c1_PR_spare1
} DL_DCCH_MessageType_NB__c1_PR;

/* Forward declarations */
struct DLInformationTransfer_NB;
struct RRCConnectionReconfiguration_NB;
struct RRCConnectionRelease_NB;
struct SecurityModeCommand;
struct UECapabilityEnquiry_NB;
struct RRCConnectionResume_NB;

/* DL-DCCH-MessageType-NB */
typedef struct DL_DCCH_MessageType_NB {
	DL_DCCH_MessageType_NB_PR present;
	union DL_DCCH_MessageType_NB_u {
		struct DL_DCCH_MessageType_NB__c1 {
			DL_DCCH_MessageType_NB__c1_PR present;
			union DL_DCCH_MessageType_NB__c1_u {
				struct DLInformationTransfer_NB	*dlInformationTransfer_r13;
				struct RRCConnectionReconfiguration_NB	*rrcConnectionReconfiguration_r13;
				struct RRCConnectionRelease_NB	*rrcConnectionRelease_r13;
				struct SecurityModeCommand	*securityModeCommand_r13;
				struct UECapabilityEnquiry_NB	*ueCapabilityEnquiry_r13;
				struct RRCConnectionResume_NB	*rrcConnectionResume_r13;
				NULL_t	 spare2;
				NULL_t	 spare1;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *c1;
		struct DL_DCCH_MessageType_NB__messageClassExtension {
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *messageClassExtension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_DCCH_MessageType_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_DCCH_MessageType_NB;
extern asn_CHOICE_specifics_t asn_SPC_DL_DCCH_MessageType_NB_specs_1;
extern asn_TYPE_member_t asn_MBR_DL_DCCH_MessageType_NB_1[2];
extern asn_per_constraints_t asn_PER_type_DL_DCCH_MessageType_NB_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_DCCH_MessageType_NB_H_ */
#include "asn_internal.h"
