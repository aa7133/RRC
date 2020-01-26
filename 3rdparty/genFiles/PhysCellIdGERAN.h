/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_PhysCellIdGERAN_H_
#define	_PhysCellIdGERAN_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BIT_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PhysCellIdGERAN */
typedef struct PhysCellIdGERAN {
	BIT_STRING_t	 networkColourCode;
	BIT_STRING_t	 baseStationColourCode;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhysCellIdGERAN_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PhysCellIdGERAN;
extern asn_SEQUENCE_specifics_t asn_SPC_PhysCellIdGERAN_specs_1;
extern asn_TYPE_member_t asn_MBR_PhysCellIdGERAN_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PhysCellIdGERAN_H_ */
#include "asn_internal.h"
