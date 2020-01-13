/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_InterFreqRSTDMeasurementIndication_r10_H_
#define	_InterFreqRSTDMeasurementIndication_r10_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NULL.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum InterFreqRSTDMeasurementIndication_r10__criticalExtensions_PR {
	InterFreqRSTDMeasurementIndication_r10__criticalExtensions_PR_NOTHING,	/* No components present */
	InterFreqRSTDMeasurementIndication_r10__criticalExtensions_PR_c1,
	InterFreqRSTDMeasurementIndication_r10__criticalExtensions_PR_criticalExtensionsFuture
} InterFreqRSTDMeasurementIndication_r10__criticalExtensions_PR;
typedef enum InterFreqRSTDMeasurementIndication_r10__criticalExtensions__c1_PR {
	InterFreqRSTDMeasurementIndication_r10__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	InterFreqRSTDMeasurementIndication_r10__criticalExtensions__c1_PR_interFreqRSTDMeasurementIndication_r10,
	InterFreqRSTDMeasurementIndication_r10__criticalExtensions__c1_PR_spare3,
	InterFreqRSTDMeasurementIndication_r10__criticalExtensions__c1_PR_spare2,
	InterFreqRSTDMeasurementIndication_r10__criticalExtensions__c1_PR_spare1
} InterFreqRSTDMeasurementIndication_r10__criticalExtensions__c1_PR;

/* Forward declarations */
struct InterFreqRSTDMeasurementIndication_r10_IEs;

/* InterFreqRSTDMeasurementIndication-r10 */
typedef struct InterFreqRSTDMeasurementIndication_r10 {
	struct InterFreqRSTDMeasurementIndication_r10__criticalExtensions {
		InterFreqRSTDMeasurementIndication_r10__criticalExtensions_PR present;
		union InterFreqRSTDMeasurementIndication_r10__criticalExtensions_u {
			struct InterFreqRSTDMeasurementIndication_r10__criticalExtensions__c1 {
				InterFreqRSTDMeasurementIndication_r10__criticalExtensions__c1_PR present;
				union InterFreqRSTDMeasurementIndication_r10__criticalExtensions__c1_u {
					struct InterFreqRSTDMeasurementIndication_r10_IEs	*interFreqRSTDMeasurementIndication_r10;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *c1;
			struct InterFreqRSTDMeasurementIndication_r10__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqRSTDMeasurementIndication_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqRSTDMeasurementIndication_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_InterFreqRSTDMeasurementIndication_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_InterFreqRSTDMeasurementIndication_r10_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _InterFreqRSTDMeasurementIndication_r10_H_ */
#include "asn_internal.h"