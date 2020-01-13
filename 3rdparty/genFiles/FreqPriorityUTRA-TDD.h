/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_FreqPriorityUTRA_TDD_H_
#define	_FreqPriorityUTRA_TDD_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ARFCN-ValueUTRA.h"
#include "CellReselectionPriority.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* FreqPriorityUTRA-TDD */
typedef struct FreqPriorityUTRA_TDD {
	ARFCN_ValueUTRA_t	 carrierFreq;
	CellReselectionPriority_t	 cellReselectionPriority;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FreqPriorityUTRA_TDD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FreqPriorityUTRA_TDD;
extern asn_SEQUENCE_specifics_t asn_SPC_FreqPriorityUTRA_TDD_specs_1;
extern asn_TYPE_member_t asn_MBR_FreqPriorityUTRA_TDD_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _FreqPriorityUTRA_TDD_H_ */
#include "asn_internal.h"
