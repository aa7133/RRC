/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_UL_ConfigCommon_NB_v1530_H_
#define	_UL_ConfigCommon_NB_v1530_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NPRACH_ParametersListFmt2_NB_r15;

/* UL-ConfigCommon-NB-v1530 */
typedef struct UL_ConfigCommon_NB_v1530 {
	struct NPRACH_ParametersListFmt2_NB_r15	*nprach_ParametersListFmt2_r15;	/* OPTIONAL */
	struct NPRACH_ParametersListFmt2_NB_r15	*nprach_ParametersListFmt2EDT_r15;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_ConfigCommon_NB_v1530_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_ConfigCommon_NB_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_UL_ConfigCommon_NB_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_UL_ConfigCommon_NB_v1530_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _UL_ConfigCommon_NB_v1530_H_ */
#include "asn_internal.h"