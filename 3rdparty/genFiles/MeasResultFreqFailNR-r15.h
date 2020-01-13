/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_MeasResultFreqFailNR_r15_H_
#define	_MeasResultFreqFailNR_r15_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ARFCN-ValueNR-r15.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasResultCellListNR_r15;

/* MeasResultFreqFailNR-r15 */
typedef struct MeasResultFreqFailNR_r15 {
	ARFCN_ValueNR_r15_t	 carrierFreq_r15;
	struct MeasResultCellListNR_r15	*measResultCellList_r15;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultFreqFailNR_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultFreqFailNR_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasResultFreqFailNR_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResultFreqFailNR_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResultFreqFailNR_r15_H_ */
#include "asn_internal.h"
