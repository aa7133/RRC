/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_UEPagingCoverageInformation_H_
#define	_UEPagingCoverageInformation_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NULL.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UEPagingCoverageInformation__criticalExtensions_PR {
	UEPagingCoverageInformation__criticalExtensions_PR_NOTHING,	/* No components present */
	UEPagingCoverageInformation__criticalExtensions_PR_c1,
	UEPagingCoverageInformation__criticalExtensions_PR_criticalExtensionsFuture
} UEPagingCoverageInformation__criticalExtensions_PR;
typedef enum UEPagingCoverageInformation__criticalExtensions__c1_PR {
	UEPagingCoverageInformation__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	UEPagingCoverageInformation__criticalExtensions__c1_PR_uePagingCoverageInformation_r13,
	UEPagingCoverageInformation__criticalExtensions__c1_PR_spare7,
	UEPagingCoverageInformation__criticalExtensions__c1_PR_spare6,
	UEPagingCoverageInformation__criticalExtensions__c1_PR_spare5,
	UEPagingCoverageInformation__criticalExtensions__c1_PR_spare4,
	UEPagingCoverageInformation__criticalExtensions__c1_PR_spare3,
	UEPagingCoverageInformation__criticalExtensions__c1_PR_spare2,
	UEPagingCoverageInformation__criticalExtensions__c1_PR_spare1
} UEPagingCoverageInformation__criticalExtensions__c1_PR;

/* Forward declarations */
struct UEPagingCoverageInformation_r13_IEs;

/* UEPagingCoverageInformation */
typedef struct UEPagingCoverageInformation {
	struct UEPagingCoverageInformation__criticalExtensions {
		UEPagingCoverageInformation__criticalExtensions_PR present;
		union UEPagingCoverageInformation__criticalExtensions_u {
			struct UEPagingCoverageInformation__criticalExtensions__c1 {
				UEPagingCoverageInformation__criticalExtensions__c1_PR present;
				union UEPagingCoverageInformation__criticalExtensions__c1_u {
					struct UEPagingCoverageInformation_r13_IEs	*uePagingCoverageInformation_r13;
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
			struct UEPagingCoverageInformation__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEPagingCoverageInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEPagingCoverageInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _UEPagingCoverageInformation_H_ */
#include "asn_internal.h"
