/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_MeasResultCellSFTD_r15_H_
#define	_MeasResultCellSFTD_r15_H_


#include "asn_application.h"

/* Including external dependencies */
#include "PhysCellIdNR-r15.h"
#include "NativeInteger.h"
#include "RSRP-RangeNR-r15.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MeasResultCellSFTD-r15 */
typedef struct MeasResultCellSFTD_r15 {
	PhysCellIdNR_r15_t	 physCellId_r15;
	long	 sfn_OffsetResult_r15;
	long	 frameBoundaryOffsetResult_r15;
	RSRP_RangeNR_r15_t	*rsrpResult_r15;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultCellSFTD_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultCellSFTD_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasResultCellSFTD_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResultCellSFTD_r15_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResultCellSFTD_r15_H_ */
#include "asn_internal.h"
