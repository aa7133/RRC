/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_NeighCellSI_AcquisitionParameters_v1550_H_
#define	_NeighCellSI_AcquisitionParameters_v1550_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NeighCellSI_AcquisitionParameters_v1550__eutra_CGI_Reporting_ENDC_r15 {
	NeighCellSI_AcquisitionParameters_v1550__eutra_CGI_Reporting_ENDC_r15_supported	= 0
} e_NeighCellSI_AcquisitionParameters_v1550__eutra_CGI_Reporting_ENDC_r15;
typedef enum NeighCellSI_AcquisitionParameters_v1550__utra_GERAN_CGI_Reporting_ENDC_r15 {
	NeighCellSI_AcquisitionParameters_v1550__utra_GERAN_CGI_Reporting_ENDC_r15_supported	= 0
} e_NeighCellSI_AcquisitionParameters_v1550__utra_GERAN_CGI_Reporting_ENDC_r15;

/* NeighCellSI-AcquisitionParameters-v1550 */
typedef struct NeighCellSI_AcquisitionParameters_v1550 {
	long	*eutra_CGI_Reporting_ENDC_r15;	/* OPTIONAL */
	long	*utra_GERAN_CGI_Reporting_ENDC_r15;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NeighCellSI_AcquisitionParameters_v1550_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_eutra_CGI_Reporting_ENDC_r15_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_utra_GERAN_CGI_Reporting_ENDC_r15_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NeighCellSI_AcquisitionParameters_v1550;
extern asn_SEQUENCE_specifics_t asn_SPC_NeighCellSI_AcquisitionParameters_v1550_specs_1;
extern asn_TYPE_member_t asn_MBR_NeighCellSI_AcquisitionParameters_v1550_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NeighCellSI_AcquisitionParameters_v1550_H_ */
#include "asn_internal.h"
