/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_RRCConnectionReject_NB_H_
#define	_RRCConnectionReject_NB_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NULL.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionReject_NB__criticalExtensions_PR {
	RRCConnectionReject_NB__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCConnectionReject_NB__criticalExtensions_PR_c1,
	RRCConnectionReject_NB__criticalExtensions_PR_criticalExtensionsFuture
} RRCConnectionReject_NB__criticalExtensions_PR;
typedef enum RRCConnectionReject_NB__criticalExtensions__c1_PR {
	RRCConnectionReject_NB__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	RRCConnectionReject_NB__criticalExtensions__c1_PR_rrcConnectionReject_r13,
	RRCConnectionReject_NB__criticalExtensions__c1_PR_spare1
} RRCConnectionReject_NB__criticalExtensions__c1_PR;

/* Forward declarations */
struct RRCConnectionReject_NB_r13_IEs;

/* RRCConnectionReject-NB */
typedef struct RRCConnectionReject_NB {
	struct RRCConnectionReject_NB__criticalExtensions {
		RRCConnectionReject_NB__criticalExtensions_PR present;
		union RRCConnectionReject_NB__criticalExtensions_u {
			struct RRCConnectionReject_NB__criticalExtensions__c1 {
				RRCConnectionReject_NB__criticalExtensions__c1_PR present;
				union RRCConnectionReject_NB__criticalExtensions__c1_u {
					struct RRCConnectionReject_NB_r13_IEs	*rrcConnectionReject_r13;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *c1;
			struct RRCConnectionReject_NB__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReject_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReject_NB;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReject_NB_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionReject_NB_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReject_NB_H_ */
#include "asn_internal.h"
