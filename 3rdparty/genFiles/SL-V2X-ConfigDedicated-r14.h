/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_SL_V2X_ConfigDedicated_r14_H_
#define	_SL_V2X_ConfigDedicated_r14_H_


#include "asn_application.h"

/* Including external dependencies */
#include "SL-Priority-r13.h"
#include "SL-TypeTxSync-r14.h"
#include "NULL.h"
#include "C-RNTI.h"
#include "MAC-MainConfigSL-r12.h"
#include "NativeInteger.h"
#include "LogicalChGroupInfoList-r13.h"
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_V2X_ConfigDedicated_r14__commTxResources_r14_PR {
	SL_V2X_ConfigDedicated_r14__commTxResources_r14_PR_NOTHING,	/* No components present */
	SL_V2X_ConfigDedicated_r14__commTxResources_r14_PR_release,
	SL_V2X_ConfigDedicated_r14__commTxResources_r14_PR_setup
} SL_V2X_ConfigDedicated_r14__commTxResources_r14_PR;
typedef enum SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup_PR {
	SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup_PR_NOTHING,	/* No components present */
	SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup_PR_scheduled_r14,
	SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup_PR_ue_Selected_r14
} SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup_PR;
typedef enum SL_V2X_ConfigDedicated_r14__ext1__commTxResources_v1530_PR {
	SL_V2X_ConfigDedicated_r14__ext1__commTxResources_v1530_PR_NOTHING,	/* No components present */
	SL_V2X_ConfigDedicated_r14__ext1__commTxResources_v1530_PR_release,
	SL_V2X_ConfigDedicated_r14__ext1__commTxResources_v1530_PR_setup
} SL_V2X_ConfigDedicated_r14__ext1__commTxResources_v1530_PR;
typedef enum SL_V2X_ConfigDedicated_r14__ext1__commTxResources_v1530__setup_PR {
	SL_V2X_ConfigDedicated_r14__ext1__commTxResources_v1530__setup_PR_NOTHING,	/* No components present */
	SL_V2X_ConfigDedicated_r14__ext1__commTxResources_v1530__setup_PR_scheduled_v1530,
	SL_V2X_ConfigDedicated_r14__ext1__commTxResources_v1530__setup_PR_ue_Selected_v1530
} SL_V2X_ConfigDedicated_r14__ext1__commTxResources_v1530__setup_PR;
typedef enum SL_V2X_ConfigDedicated_r14__ext1__slss_TxMultiFreq_r15 {
	SL_V2X_ConfigDedicated_r14__ext1__slss_TxMultiFreq_r15_true	= 0
} e_SL_V2X_ConfigDedicated_r14__ext1__slss_TxMultiFreq_r15;
typedef enum SL_V2X_ConfigDedicated_r14__ext2__slss_TxDisabled_r15 {
	SL_V2X_ConfigDedicated_r14__ext2__slss_TxDisabled_r15_true	= 0
} e_SL_V2X_ConfigDedicated_r14__ext2__slss_TxDisabled_r15;

/* Forward declarations */
struct SL_InterFreqInfoListV2X_r14;
struct SL_CBR_CommonTxConfigList_r14;
struct SL_CommResourcePoolV2X_r14;
struct SL_TxPoolToReleaseListV2X_r14;
struct SL_TxPoolToAddModListV2X_r14;
struct SL_CommTxPoolSensingConfig_r14;
struct SL_V2X_PacketDuplicationConfig_r15;
struct SL_V2X_SyncFreqList_r15;
struct LogicalChGroupInfoList_v1530;
struct SL_V2X_FreqSelectionConfigList_r15;

/* SL-V2X-ConfigDedicated-r14 */
typedef struct SL_V2X_ConfigDedicated_r14 {
	struct SL_V2X_ConfigDedicated_r14__commTxResources_r14 {
		SL_V2X_ConfigDedicated_r14__commTxResources_r14_PR present;
		union SL_V2X_ConfigDedicated_r14__commTxResources_r14_u {
			NULL_t	 release;
			struct SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup {
				SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup_PR present;
				union SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup_u {
					struct SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup__scheduled_r14 {
						C_RNTI_t	 sl_V_RNTI_r14;
						MAC_MainConfigSL_r12_t	 mac_MainConfig_r14;
						struct SL_CommResourcePoolV2X_r14	*v2x_SchedulingPool_r14;	/* OPTIONAL */
						long	*mcs_r14;	/* OPTIONAL */
						LogicalChGroupInfoList_r13_t	 logicalChGroupInfoList_r14;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} *scheduled_r14;
					struct SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup__ue_Selected_r14 {
						struct SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup__ue_Selected_r14__v2x_CommTxPoolNormalDedicated_r14 {
							struct SL_TxPoolToReleaseListV2X_r14	*poolToReleaseList_r14;	/* OPTIONAL */
							struct SL_TxPoolToAddModListV2X_r14	*poolToAddModList_r14;	/* OPTIONAL */
							struct SL_CommTxPoolSensingConfig_r14	*v2x_CommTxPoolSensingConfig_r14;	/* OPTIONAL */
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} v2x_CommTxPoolNormalDedicated_r14;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} *ue_Selected_r14;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *commTxResources_r14;
	struct SL_InterFreqInfoListV2X_r14	*v2x_InterFreqInfoList_r14;	/* OPTIONAL */
	SL_Priority_r13_t	*thresSL_TxPrioritization_r14;	/* OPTIONAL */
	SL_TypeTxSync_r14_t	*typeTxSync_r14;	/* OPTIONAL */
	struct SL_CBR_CommonTxConfigList_r14	*cbr_DedicatedTxConfigList_r14;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct SL_V2X_ConfigDedicated_r14__ext1 {
		struct SL_V2X_ConfigDedicated_r14__ext1__commTxResources_v1530 {
			SL_V2X_ConfigDedicated_r14__ext1__commTxResources_v1530_PR present;
			union SL_V2X_ConfigDedicated_r14__ext1__commTxResources_v1530_u {
				NULL_t	 release;
				struct SL_V2X_ConfigDedicated_r14__ext1__commTxResources_v1530__setup {
					SL_V2X_ConfigDedicated_r14__ext1__commTxResources_v1530__setup_PR present;
					union SL_V2X_ConfigDedicated_r14__ext1__commTxResources_v1530__setup_u {
						struct SL_V2X_ConfigDedicated_r14__ext1__commTxResources_v1530__setup__scheduled_v1530 {
							struct LogicalChGroupInfoList_v1530	*logicalChGroupInfoList_v1530;	/* OPTIONAL */
							long	*mcs_r15;	/* OPTIONAL */
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} *scheduled_v1530;
						struct SL_V2X_ConfigDedicated_r14__ext1__commTxResources_v1530__setup__ue_Selected_v1530 {
							struct SL_V2X_FreqSelectionConfigList_r15	*v2x_FreqSelectionConfigList_r15;	/* OPTIONAL */
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} *ue_Selected_v1530;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *commTxResources_v1530;
		struct SL_V2X_PacketDuplicationConfig_r15	*v2x_PacketDuplicationConfig_r15;	/* OPTIONAL */
		struct SL_V2X_SyncFreqList_r15	*syncFreqList_r15;	/* OPTIONAL */
		long	*slss_TxMultiFreq_r15;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct SL_V2X_ConfigDedicated_r14__ext2 {
		long	*slss_TxDisabled_r15;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_V2X_ConfigDedicated_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_slss_TxMultiFreq_r15_32;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_slss_TxDisabled_r15_35;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SL_V2X_ConfigDedicated_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_V2X_ConfigDedicated_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_V2X_ConfigDedicated_r14_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_V2X_ConfigDedicated_r14_H_ */
#include "asn_internal.h"
