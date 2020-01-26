/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_AntennaInfoDedicated_v1430_H_
#define	_AntennaInfoDedicated_v1430_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AntennaInfoDedicated_v1430__ce_UE_TxAntennaSelection_config_r14 {
	AntennaInfoDedicated_v1430__ce_UE_TxAntennaSelection_config_r14_on	= 0
} e_AntennaInfoDedicated_v1430__ce_UE_TxAntennaSelection_config_r14;

/* AntennaInfoDedicated-v1430 */
typedef struct AntennaInfoDedicated_v1430 {
	long	*ce_UE_TxAntennaSelection_config_r14;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AntennaInfoDedicated_v1430_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ce_UE_TxAntennaSelection_config_r14_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_AntennaInfoDedicated_v1430;
extern asn_SEQUENCE_specifics_t asn_SPC_AntennaInfoDedicated_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_AntennaInfoDedicated_v1430_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _AntennaInfoDedicated_v1430_H_ */
#include "asn_internal.h"
