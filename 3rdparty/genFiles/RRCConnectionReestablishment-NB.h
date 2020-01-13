/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_RRCConnectionReestablishment_NB_H_
#define	_RRCConnectionReestablishment_NB_H_


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
typedef enum RRCConnectionReestablishment_NB__criticalExtensions_PR {
	RRCConnectionReestablishment_NB__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCConnectionReestablishment_NB__criticalExtensions_PR_c1,
	RRCConnectionReestablishment_NB__criticalExtensions_PR_criticalExtensionsFuture
} RRCConnectionReestablishment_NB__criticalExtensions_PR;
typedef enum RRCConnectionReestablishment_NB__criticalExtensions__c1_PR {
	RRCConnectionReestablishment_NB__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	RRCConnectionReestablishment_NB__criticalExtensions__c1_PR_rrcConnectionReestablishment_r13,
	RRCConnectionReestablishment_NB__criticalExtensions__c1_PR_spare1
} RRCConnectionReestablishment_NB__criticalExtensions__c1_PR;

/* Forward declarations */
struct RRCConnectionReestablishment_NB_r13_IEs;

/* RRCConnectionReestablishment-NB */
typedef struct RRCConnectionReestablishment_NB {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct RRCConnectionReestablishment_NB__criticalExtensions {
		RRCConnectionReestablishment_NB__criticalExtensions_PR present;
		union RRCConnectionReestablishment_NB__criticalExtensions_u {
			struct RRCConnectionReestablishment_NB__criticalExtensions__c1 {
				RRCConnectionReestablishment_NB__criticalExtensions__c1_PR present;
				union RRCConnectionReestablishment_NB__criticalExtensions__c1_u {
					struct RRCConnectionReestablishment_NB_r13_IEs	*rrcConnectionReestablishment_r13;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *c1;
			struct RRCConnectionReestablishment_NB__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReestablishment_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReestablishment_NB;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReestablishment_NB_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionReestablishment_NB_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReestablishment_NB_H_ */
#include "asn_internal.h"
