/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_CarrierFreqListUTRA_FDD_Ext_r12_H_
#define	_CarrierFreqListUTRA_FDD_Ext_r12_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CarrierFreqUTRA_FDD_Ext_r12;

/* CarrierFreqListUTRA-FDD-Ext-r12 */
typedef struct CarrierFreqListUTRA_FDD_Ext_r12 {
	A_SEQUENCE_OF(struct CarrierFreqUTRA_FDD_Ext_r12) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CarrierFreqListUTRA_FDD_Ext_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CarrierFreqListUTRA_FDD_Ext_r12;
extern asn_SET_OF_specifics_t asn_SPC_CarrierFreqListUTRA_FDD_Ext_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_CarrierFreqListUTRA_FDD_Ext_r12_1[1];
extern asn_per_constraints_t asn_PER_type_CarrierFreqListUTRA_FDD_Ext_r12_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _CarrierFreqListUTRA_FDD_Ext_r12_H_ */
#include "asn_internal.h"
