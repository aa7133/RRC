/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_RRCConnectionReconfiguration_NB_H_
#define	_RRCConnectionReconfiguration_NB_H_


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
typedef enum RRCConnectionReconfiguration_NB__criticalExtensions_PR {
	RRCConnectionReconfiguration_NB__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCConnectionReconfiguration_NB__criticalExtensions_PR_c1,
	RRCConnectionReconfiguration_NB__criticalExtensions_PR_criticalExtensionsFuture
} RRCConnectionReconfiguration_NB__criticalExtensions_PR;
typedef enum RRCConnectionReconfiguration_NB__criticalExtensions__c1_PR {
	RRCConnectionReconfiguration_NB__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	RRCConnectionReconfiguration_NB__criticalExtensions__c1_PR_rrcConnectionReconfiguration_r13,
	RRCConnectionReconfiguration_NB__criticalExtensions__c1_PR_spare1
} RRCConnectionReconfiguration_NB__criticalExtensions__c1_PR;

/* Forward declarations */
struct RRCConnectionReconfiguration_NB_r13_IEs;

/* RRCConnectionReconfiguration-NB */
typedef struct RRCConnectionReconfiguration_NB {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct RRCConnectionReconfiguration_NB__criticalExtensions {
		RRCConnectionReconfiguration_NB__criticalExtensions_PR present;
		union RRCConnectionReconfiguration_NB__criticalExtensions_u {
			struct RRCConnectionReconfiguration_NB__criticalExtensions__c1 {
				RRCConnectionReconfiguration_NB__criticalExtensions__c1_PR present;
				union RRCConnectionReconfiguration_NB__criticalExtensions__c1_u {
					struct RRCConnectionReconfiguration_NB_r13_IEs	*rrcConnectionReconfiguration_r13;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *c1;
			struct RRCConnectionReconfiguration_NB__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReconfiguration_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReconfiguration_NB;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReconfiguration_NB_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionReconfiguration_NB_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReconfiguration_NB_H_ */
#include "asn_internal.h"
