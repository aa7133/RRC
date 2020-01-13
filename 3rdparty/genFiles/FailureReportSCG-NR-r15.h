/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_FailureReportSCG_NR_r15_H_
#define	_FailureReportSCG_NR_r15_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "OCTET_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FailureReportSCG_NR_r15__failureType_r15 {
	FailureReportSCG_NR_r15__failureType_r15_t310_Expiry	= 0,
	FailureReportSCG_NR_r15__failureType_r15_randomAccessProblem	= 1,
	FailureReportSCG_NR_r15__failureType_r15_rlc_MaxNumRetx	= 2,
	FailureReportSCG_NR_r15__failureType_r15_synchReconfigFailureSCG	= 3,
	FailureReportSCG_NR_r15__failureType_r15_scg_reconfigFailure	= 4,
	FailureReportSCG_NR_r15__failureType_r15_srb3_IntegrityFailure	= 5
} e_FailureReportSCG_NR_r15__failureType_r15;

/* Forward declarations */
struct MeasResultFreqListFailNR_r15;

/* FailureReportSCG-NR-r15 */
typedef struct FailureReportSCG_NR_r15 {
	long	 failureType_r15;
	struct MeasResultFreqListFailNR_r15	*measResultFreqListNR_r15;	/* OPTIONAL */
	OCTET_STRING_t	*measResultSCG_r15;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FailureReportSCG_NR_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_failureType_r15_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_FailureReportSCG_NR_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_FailureReportSCG_NR_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_FailureReportSCG_NR_r15_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _FailureReportSCG_NR_r15_H_ */
#include "asn_internal.h"
