/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_MobilityControlInfoV2X_r14_H_
#define	_MobilityControlInfoV2X_r14_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SL_CommResourcePoolV2X_r14;
struct SL_CommRxPoolListV2X_r14;
struct SL_SyncConfigListV2X_r14;
struct SL_CBR_CommonTxConfigList_r14;

/* MobilityControlInfoV2X-r14 */
typedef struct MobilityControlInfoV2X_r14 {
	struct SL_CommResourcePoolV2X_r14	*v2x_CommTxPoolExceptional_r14;	/* OPTIONAL */
	struct SL_CommRxPoolListV2X_r14	*v2x_CommRxPool_r14;	/* OPTIONAL */
	struct SL_SyncConfigListV2X_r14	*v2x_CommSyncConfig_r14;	/* OPTIONAL */
	struct SL_CBR_CommonTxConfigList_r14	*cbr_MobilityTxConfigList_r14;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MobilityControlInfoV2X_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MobilityControlInfoV2X_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_MobilityControlInfoV2X_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_MobilityControlInfoV2X_r14_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _MobilityControlInfoV2X_r14_H_ */
#include "asn_internal.h"
