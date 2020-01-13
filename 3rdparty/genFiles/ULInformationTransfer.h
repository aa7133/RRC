/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_ULInformationTransfer_H_
#define	_ULInformationTransfer_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NULL.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ULInformationTransfer__criticalExtensions_PR {
	ULInformationTransfer__criticalExtensions_PR_NOTHING,	/* No components present */
	ULInformationTransfer__criticalExtensions_PR_c1,
	ULInformationTransfer__criticalExtensions_PR_criticalExtensionsFuture
} ULInformationTransfer__criticalExtensions_PR;
typedef enum ULInformationTransfer__criticalExtensions__c1_PR {
	ULInformationTransfer__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	ULInformationTransfer__criticalExtensions__c1_PR_ulInformationTransfer_r8,
	ULInformationTransfer__criticalExtensions__c1_PR_spare3,
	ULInformationTransfer__criticalExtensions__c1_PR_spare2,
	ULInformationTransfer__criticalExtensions__c1_PR_spare1
} ULInformationTransfer__criticalExtensions__c1_PR;

/* Forward declarations */
struct ULInformationTransfer_r8_IEs;

/* ULInformationTransfer */
typedef struct ULInformationTransfer {
	struct ULInformationTransfer__criticalExtensions {
		ULInformationTransfer__criticalExtensions_PR present;
		union ULInformationTransfer__criticalExtensions_u {
			struct ULInformationTransfer__criticalExtensions__c1 {
				ULInformationTransfer__criticalExtensions__c1_PR present;
				union ULInformationTransfer__criticalExtensions__c1_u {
					struct ULInformationTransfer_r8_IEs	*ulInformationTransfer_r8;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *c1;
			struct ULInformationTransfer__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ULInformationTransfer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ULInformationTransfer;
extern asn_SEQUENCE_specifics_t asn_SPC_ULInformationTransfer_specs_1;
extern asn_TYPE_member_t asn_MBR_ULInformationTransfer_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _ULInformationTransfer_H_ */
#include "asn_internal.h"
