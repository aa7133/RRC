/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_FreqPriorityEUTRA_r12_H_
#define	_FreqPriorityEUTRA_r12_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ARFCN-ValueEUTRA-r9.h"
#include "CellReselectionPriority.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* FreqPriorityEUTRA-r12 */
typedef struct FreqPriorityEUTRA_r12 {
	ARFCN_ValueEUTRA_r9_t	 carrierFreq_r12;
	CellReselectionPriority_t	 cellReselectionPriority_r12;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FreqPriorityEUTRA_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FreqPriorityEUTRA_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_FreqPriorityEUTRA_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_FreqPriorityEUTRA_r12_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _FreqPriorityEUTRA_r12_H_ */
#include "asn_internal.h"
