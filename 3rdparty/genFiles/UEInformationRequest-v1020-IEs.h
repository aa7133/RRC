/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_UEInformationRequest_v1020_IEs_H_
#define	_UEInformationRequest_v1020_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UEInformationRequest_v1020_IEs__logMeasReportReq_r10 {
	UEInformationRequest_v1020_IEs__logMeasReportReq_r10_true	= 0
} e_UEInformationRequest_v1020_IEs__logMeasReportReq_r10;

/* Forward declarations */
struct UEInformationRequest_v1130_IEs;

/* UEInformationRequest-v1020-IEs */
typedef struct UEInformationRequest_v1020_IEs {
	long	*logMeasReportReq_r10;	/* OPTIONAL */
	struct UEInformationRequest_v1130_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEInformationRequest_v1020_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_logMeasReportReq_r10_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UEInformationRequest_v1020_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UEInformationRequest_v1020_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UEInformationRequest_v1020_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _UEInformationRequest_v1020_IEs_H_ */
#include "asn_internal.h"