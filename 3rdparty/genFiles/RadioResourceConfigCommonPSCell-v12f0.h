/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_RadioResourceConfigCommonPSCell_v12f0_H_
#define	_RadioResourceConfigCommonPSCell_v12f0_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RadioResourceConfigCommonSCell-v10l0.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* RadioResourceConfigCommonPSCell-v12f0 */
typedef struct RadioResourceConfigCommonPSCell_v12f0 {
	RadioResourceConfigCommonSCell_v10l0_t	 basicFields_v12f0;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioResourceConfigCommonPSCell_v12f0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigCommonPSCell_v12f0;
extern asn_SEQUENCE_specifics_t asn_SPC_RadioResourceConfigCommonPSCell_v12f0_specs_1;
extern asn_TYPE_member_t asn_MBR_RadioResourceConfigCommonPSCell_v12f0_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RadioResourceConfigCommonPSCell_v12f0_H_ */
#include "asn_internal.h"
