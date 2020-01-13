/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-InterNodeDefinitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_UEPagingCoverageInformation_NB_H_
#define	_UEPagingCoverageInformation_NB_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NULL.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UEPagingCoverageInformation_NB__criticalExtensions_PR {
	UEPagingCoverageInformation_NB__criticalExtensions_PR_NOTHING,	/* No components present */
	UEPagingCoverageInformation_NB__criticalExtensions_PR_c1,
	UEPagingCoverageInformation_NB__criticalExtensions_PR_criticalExtensionsFuture
} UEPagingCoverageInformation_NB__criticalExtensions_PR;
typedef enum UEPagingCoverageInformation_NB__criticalExtensions__c1_PR {
	UEPagingCoverageInformation_NB__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	UEPagingCoverageInformation_NB__criticalExtensions__c1_PR_uePagingCoverageInformation_r13,
	UEPagingCoverageInformation_NB__criticalExtensions__c1_PR_spare3,
	UEPagingCoverageInformation_NB__criticalExtensions__c1_PR_spare2,
	UEPagingCoverageInformation_NB__criticalExtensions__c1_PR_spare1
} UEPagingCoverageInformation_NB__criticalExtensions__c1_PR;

/* Forward declarations */
struct UEPagingCoverageInformation_NB_IEs;

/* UEPagingCoverageInformation-NB */
typedef struct UEPagingCoverageInformation_NB {
	struct UEPagingCoverageInformation_NB__criticalExtensions {
		UEPagingCoverageInformation_NB__criticalExtensions_PR present;
		union UEPagingCoverageInformation_NB__criticalExtensions_u {
			struct UEPagingCoverageInformation_NB__criticalExtensions__c1 {
				UEPagingCoverageInformation_NB__criticalExtensions__c1_PR present;
				union UEPagingCoverageInformation_NB__criticalExtensions__c1_u {
					struct UEPagingCoverageInformation_NB_IEs	*uePagingCoverageInformation_r13;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *c1;
			struct UEPagingCoverageInformation_NB__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEPagingCoverageInformation_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEPagingCoverageInformation_NB;

#ifdef __cplusplus
}
#endif

#endif	/* _UEPagingCoverageInformation_NB_H_ */
#include "asn_internal.h"
