/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_WLANConnectionStatusReport_r13_H_
#define	_WLANConnectionStatusReport_r13_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NULL.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum WLANConnectionStatusReport_r13__criticalExtensions_PR {
	WLANConnectionStatusReport_r13__criticalExtensions_PR_NOTHING,	/* No components present */
	WLANConnectionStatusReport_r13__criticalExtensions_PR_c1,
	WLANConnectionStatusReport_r13__criticalExtensions_PR_criticalExtensionsFuture
} WLANConnectionStatusReport_r13__criticalExtensions_PR;
typedef enum WLANConnectionStatusReport_r13__criticalExtensions__c1_PR {
	WLANConnectionStatusReport_r13__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	WLANConnectionStatusReport_r13__criticalExtensions__c1_PR_wlanConnectionStatusReport_r13,
	WLANConnectionStatusReport_r13__criticalExtensions__c1_PR_spare3,
	WLANConnectionStatusReport_r13__criticalExtensions__c1_PR_spare2,
	WLANConnectionStatusReport_r13__criticalExtensions__c1_PR_spare1
} WLANConnectionStatusReport_r13__criticalExtensions__c1_PR;

/* Forward declarations */
struct WLANConnectionStatusReport_r13_IEs;

/* WLANConnectionStatusReport-r13 */
typedef struct WLANConnectionStatusReport_r13 {
	struct WLANConnectionStatusReport_r13__criticalExtensions {
		WLANConnectionStatusReport_r13__criticalExtensions_PR present;
		union WLANConnectionStatusReport_r13__criticalExtensions_u {
			struct WLANConnectionStatusReport_r13__criticalExtensions__c1 {
				WLANConnectionStatusReport_r13__criticalExtensions__c1_PR present;
				union WLANConnectionStatusReport_r13__criticalExtensions__c1_u {
					struct WLANConnectionStatusReport_r13_IEs	*wlanConnectionStatusReport_r13;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *c1;
			struct WLANConnectionStatusReport_r13__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} WLANConnectionStatusReport_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WLANConnectionStatusReport_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_WLANConnectionStatusReport_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_WLANConnectionStatusReport_r13_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _WLANConnectionStatusReport_r13_H_ */
#include "asn_internal.h"
