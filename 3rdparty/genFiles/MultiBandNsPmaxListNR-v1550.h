/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_MultiBandNsPmaxListNR_v1550_H_
#define	_MultiBandNsPmaxListNR_v1550_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NS_PmaxListNR_r15;

/* MultiBandNsPmaxListNR-v1550 */
typedef struct MultiBandNsPmaxListNR_v1550 {
	A_SEQUENCE_OF(struct NS_PmaxListNR_r15) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MultiBandNsPmaxListNR_v1550_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MultiBandNsPmaxListNR_v1550;
extern asn_SET_OF_specifics_t asn_SPC_MultiBandNsPmaxListNR_v1550_specs_1;
extern asn_TYPE_member_t asn_MBR_MultiBandNsPmaxListNR_v1550_1[1];
extern asn_per_constraints_t asn_PER_type_MultiBandNsPmaxListNR_v1550_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _MultiBandNsPmaxListNR_v1550_H_ */
#include "asn_internal.h"