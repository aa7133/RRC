/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_MeasReportAppLayer_r15_H_
#define	_MeasReportAppLayer_r15_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasReportAppLayer_r15__criticalExtensions_PR {
	MeasReportAppLayer_r15__criticalExtensions_PR_NOTHING,	/* No components present */
	MeasReportAppLayer_r15__criticalExtensions_PR_measReportAppLayer_r15,
	MeasReportAppLayer_r15__criticalExtensions_PR_criticalExtensionsFuture
} MeasReportAppLayer_r15__criticalExtensions_PR;

/* Forward declarations */
struct MeasReportAppLayer_r15_IEs;

/* MeasReportAppLayer-r15 */
typedef struct MeasReportAppLayer_r15 {
	struct MeasReportAppLayer_r15__criticalExtensions {
		MeasReportAppLayer_r15__criticalExtensions_PR present;
		union MeasReportAppLayer_r15__criticalExtensions_u {
			struct MeasReportAppLayer_r15_IEs	*measReportAppLayer_r15;
			struct MeasReportAppLayer_r15__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasReportAppLayer_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasReportAppLayer_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasReportAppLayer_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasReportAppLayer_r15_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasReportAppLayer_r15_H_ */
#include "asn_internal.h"
