/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_SL_V2X_ConfigCommon_r14_H_
#define	_SL_V2X_ConfigCommon_r14_H_


#include "asn_application.h"

/* Including external dependencies */
#include "SL-TypeTxSync-r14.h"
#include "SL-Priority-r13.h"
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SL_CommRxPoolListV2X_r14;
struct SL_CommTxPoolListV2X_r14;
struct SL_CommResourcePoolV2X_r14;
struct SL_SyncConfigListV2X_r14;
struct SL_InterFreqInfoListV2X_r14;
struct SL_CommTxPoolSensingConfig_r14;
struct SL_ZoneConfig_r14;
struct SL_AnchorCarrierFreqList_V2X_r14;
struct SL_CBR_CommonTxConfigList_r14;

/* SL-V2X-ConfigCommon-r14 */
typedef struct SL_V2X_ConfigCommon_r14 {
	struct SL_CommRxPoolListV2X_r14	*v2x_CommRxPool_r14;	/* OPTIONAL */
	struct SL_CommTxPoolListV2X_r14	*v2x_CommTxPoolNormalCommon_r14;	/* OPTIONAL */
	struct SL_CommTxPoolListV2X_r14	*p2x_CommTxPoolNormalCommon_r14;	/* OPTIONAL */
	struct SL_CommResourcePoolV2X_r14	*v2x_CommTxPoolExceptional_r14;	/* OPTIONAL */
	struct SL_SyncConfigListV2X_r14	*v2x_SyncConfig_r14;	/* OPTIONAL */
	struct SL_InterFreqInfoListV2X_r14	*v2x_InterFreqInfoList_r14;	/* OPTIONAL */
	struct SL_CommTxPoolSensingConfig_r14	*v2x_ResourceSelectionConfig_r14;	/* OPTIONAL */
	struct SL_ZoneConfig_r14	*zoneConfig_r14;	/* OPTIONAL */
	SL_TypeTxSync_r14_t	*typeTxSync_r14;	/* OPTIONAL */
	SL_Priority_r13_t	*thresSL_TxPrioritization_r14;	/* OPTIONAL */
	struct SL_AnchorCarrierFreqList_V2X_r14	*anchorCarrierFreqList_r14;	/* OPTIONAL */
	long	*offsetDFN_r14;	/* OPTIONAL */
	struct SL_CBR_CommonTxConfigList_r14	*cbr_CommonTxConfigList_r14;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_V2X_ConfigCommon_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_V2X_ConfigCommon_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_V2X_ConfigCommon_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_V2X_ConfigCommon_r14_1[13];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_V2X_ConfigCommon_r14_H_ */
#include "asn_internal.h"
