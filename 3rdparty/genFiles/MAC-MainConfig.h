/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_MAC_MainConfig_H_
#define	_MAC_MainConfig_H_


#include "asn_application.h"

/* Including external dependencies */
#include "TimeAlignmentTimer.h"
#include "NativeEnumerated.h"
#include "PeriodicBSR-Timer-r12.h"
#include "RetxBSR-Timer-r12.h"
#include "BOOLEAN.h"
#include "constr_SEQUENCE.h"
#include "NULL.h"
#include "constr_CHOICE.h"
#include "NativeInteger.h"
#include "DataInactivityTimer-r14.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MAC_MainConfig__ul_SCH_Config__maxHARQ_Tx {
	MAC_MainConfig__ul_SCH_Config__maxHARQ_Tx_n1	= 0,
	MAC_MainConfig__ul_SCH_Config__maxHARQ_Tx_n2	= 1,
	MAC_MainConfig__ul_SCH_Config__maxHARQ_Tx_n3	= 2,
	MAC_MainConfig__ul_SCH_Config__maxHARQ_Tx_n4	= 3,
	MAC_MainConfig__ul_SCH_Config__maxHARQ_Tx_n5	= 4,
	MAC_MainConfig__ul_SCH_Config__maxHARQ_Tx_n6	= 5,
	MAC_MainConfig__ul_SCH_Config__maxHARQ_Tx_n7	= 6,
	MAC_MainConfig__ul_SCH_Config__maxHARQ_Tx_n8	= 7,
	MAC_MainConfig__ul_SCH_Config__maxHARQ_Tx_n10	= 8,
	MAC_MainConfig__ul_SCH_Config__maxHARQ_Tx_n12	= 9,
	MAC_MainConfig__ul_SCH_Config__maxHARQ_Tx_n16	= 10,
	MAC_MainConfig__ul_SCH_Config__maxHARQ_Tx_n20	= 11,
	MAC_MainConfig__ul_SCH_Config__maxHARQ_Tx_n24	= 12,
	MAC_MainConfig__ul_SCH_Config__maxHARQ_Tx_n28	= 13,
	MAC_MainConfig__ul_SCH_Config__maxHARQ_Tx_spare2	= 14,
	MAC_MainConfig__ul_SCH_Config__maxHARQ_Tx_spare1	= 15
} e_MAC_MainConfig__ul_SCH_Config__maxHARQ_Tx;
typedef enum MAC_MainConfig__phr_Config_PR {
	MAC_MainConfig__phr_Config_PR_NOTHING,	/* No components present */
	MAC_MainConfig__phr_Config_PR_release,
	MAC_MainConfig__phr_Config_PR_setup
} MAC_MainConfig__phr_Config_PR;
typedef enum MAC_MainConfig__phr_Config__setup__periodicPHR_Timer {
	MAC_MainConfig__phr_Config__setup__periodicPHR_Timer_sf10	= 0,
	MAC_MainConfig__phr_Config__setup__periodicPHR_Timer_sf20	= 1,
	MAC_MainConfig__phr_Config__setup__periodicPHR_Timer_sf50	= 2,
	MAC_MainConfig__phr_Config__setup__periodicPHR_Timer_sf100	= 3,
	MAC_MainConfig__phr_Config__setup__periodicPHR_Timer_sf200	= 4,
	MAC_MainConfig__phr_Config__setup__periodicPHR_Timer_sf500	= 5,
	MAC_MainConfig__phr_Config__setup__periodicPHR_Timer_sf1000	= 6,
	MAC_MainConfig__phr_Config__setup__periodicPHR_Timer_infinity	= 7
} e_MAC_MainConfig__phr_Config__setup__periodicPHR_Timer;
typedef enum MAC_MainConfig__phr_Config__setup__prohibitPHR_Timer {
	MAC_MainConfig__phr_Config__setup__prohibitPHR_Timer_sf0	= 0,
	MAC_MainConfig__phr_Config__setup__prohibitPHR_Timer_sf10	= 1,
	MAC_MainConfig__phr_Config__setup__prohibitPHR_Timer_sf20	= 2,
	MAC_MainConfig__phr_Config__setup__prohibitPHR_Timer_sf50	= 3,
	MAC_MainConfig__phr_Config__setup__prohibitPHR_Timer_sf100	= 4,
	MAC_MainConfig__phr_Config__setup__prohibitPHR_Timer_sf200	= 5,
	MAC_MainConfig__phr_Config__setup__prohibitPHR_Timer_sf500	= 6,
	MAC_MainConfig__phr_Config__setup__prohibitPHR_Timer_sf1000	= 7
} e_MAC_MainConfig__phr_Config__setup__prohibitPHR_Timer;
typedef enum MAC_MainConfig__phr_Config__setup__dl_PathlossChange {
	MAC_MainConfig__phr_Config__setup__dl_PathlossChange_dB1	= 0,
	MAC_MainConfig__phr_Config__setup__dl_PathlossChange_dB3	= 1,
	MAC_MainConfig__phr_Config__setup__dl_PathlossChange_dB6	= 2,
	MAC_MainConfig__phr_Config__setup__dl_PathlossChange_infinity	= 3
} e_MAC_MainConfig__phr_Config__setup__dl_PathlossChange;
typedef enum MAC_MainConfig__ext2__mac_MainConfig_v1020__sCellDeactivationTimer_r10 {
	MAC_MainConfig__ext2__mac_MainConfig_v1020__sCellDeactivationTimer_r10_rf2	= 0,
	MAC_MainConfig__ext2__mac_MainConfig_v1020__sCellDeactivationTimer_r10_rf4	= 1,
	MAC_MainConfig__ext2__mac_MainConfig_v1020__sCellDeactivationTimer_r10_rf8	= 2,
	MAC_MainConfig__ext2__mac_MainConfig_v1020__sCellDeactivationTimer_r10_rf16	= 3,
	MAC_MainConfig__ext2__mac_MainConfig_v1020__sCellDeactivationTimer_r10_rf32	= 4,
	MAC_MainConfig__ext2__mac_MainConfig_v1020__sCellDeactivationTimer_r10_rf64	= 5,
	MAC_MainConfig__ext2__mac_MainConfig_v1020__sCellDeactivationTimer_r10_rf128	= 6,
	MAC_MainConfig__ext2__mac_MainConfig_v1020__sCellDeactivationTimer_r10_spare	= 7
} e_MAC_MainConfig__ext2__mac_MainConfig_v1020__sCellDeactivationTimer_r10;
typedef enum MAC_MainConfig__ext2__mac_MainConfig_v1020__extendedBSR_Sizes_r10 {
	MAC_MainConfig__ext2__mac_MainConfig_v1020__extendedBSR_Sizes_r10_setup	= 0
} e_MAC_MainConfig__ext2__mac_MainConfig_v1020__extendedBSR_Sizes_r10;
typedef enum MAC_MainConfig__ext2__mac_MainConfig_v1020__extendedPHR_r10 {
	MAC_MainConfig__ext2__mac_MainConfig_v1020__extendedPHR_r10_setup	= 0
} e_MAC_MainConfig__ext2__mac_MainConfig_v1020__extendedPHR_r10;
typedef enum MAC_MainConfig__ext4__dualConnectivityPHR_PR {
	MAC_MainConfig__ext4__dualConnectivityPHR_PR_NOTHING,	/* No components present */
	MAC_MainConfig__ext4__dualConnectivityPHR_PR_release,
	MAC_MainConfig__ext4__dualConnectivityPHR_PR_setup
} MAC_MainConfig__ext4__dualConnectivityPHR_PR;
typedef enum MAC_MainConfig__ext4__dualConnectivityPHR__setup__phr_ModeOtherCG_r12 {
	MAC_MainConfig__ext4__dualConnectivityPHR__setup__phr_ModeOtherCG_r12_real	= 0,
	MAC_MainConfig__ext4__dualConnectivityPHR__setup__phr_ModeOtherCG_r12_virtual	= 1
} e_MAC_MainConfig__ext4__dualConnectivityPHR__setup__phr_ModeOtherCG_r12;
typedef enum MAC_MainConfig__ext4__logicalChannelSR_Config_r12_PR {
	MAC_MainConfig__ext4__logicalChannelSR_Config_r12_PR_NOTHING,	/* No components present */
	MAC_MainConfig__ext4__logicalChannelSR_Config_r12_PR_release,
	MAC_MainConfig__ext4__logicalChannelSR_Config_r12_PR_setup
} MAC_MainConfig__ext4__logicalChannelSR_Config_r12_PR;
typedef enum MAC_MainConfig__ext4__logicalChannelSR_Config_r12__setup__logicalChannelSR_ProhibitTimer_r12 {
	MAC_MainConfig__ext4__logicalChannelSR_Config_r12__setup__logicalChannelSR_ProhibitTimer_r12_sf20	= 0,
	MAC_MainConfig__ext4__logicalChannelSR_Config_r12__setup__logicalChannelSR_ProhibitTimer_r12_sf40	= 1,
	MAC_MainConfig__ext4__logicalChannelSR_Config_r12__setup__logicalChannelSR_ProhibitTimer_r12_sf64	= 2,
	MAC_MainConfig__ext4__logicalChannelSR_Config_r12__setup__logicalChannelSR_ProhibitTimer_r12_sf128	= 3,
	MAC_MainConfig__ext4__logicalChannelSR_Config_r12__setup__logicalChannelSR_ProhibitTimer_r12_sf512	= 4,
	MAC_MainConfig__ext4__logicalChannelSR_Config_r12__setup__logicalChannelSR_ProhibitTimer_r12_sf1024	= 5,
	MAC_MainConfig__ext4__logicalChannelSR_Config_r12__setup__logicalChannelSR_ProhibitTimer_r12_sf2560	= 6,
	MAC_MainConfig__ext4__logicalChannelSR_Config_r12__setup__logicalChannelSR_ProhibitTimer_r12_spare1	= 7
} e_MAC_MainConfig__ext4__logicalChannelSR_Config_r12__setup__logicalChannelSR_ProhibitTimer_r12;
typedef enum MAC_MainConfig__ext5__eDRX_Config_CycleStartOffset_r13_PR {
	MAC_MainConfig__ext5__eDRX_Config_CycleStartOffset_r13_PR_NOTHING,	/* No components present */
	MAC_MainConfig__ext5__eDRX_Config_CycleStartOffset_r13_PR_release,
	MAC_MainConfig__ext5__eDRX_Config_CycleStartOffset_r13_PR_setup
} MAC_MainConfig__ext5__eDRX_Config_CycleStartOffset_r13_PR;
typedef enum MAC_MainConfig__ext5__eDRX_Config_CycleStartOffset_r13__setup_PR {
	MAC_MainConfig__ext5__eDRX_Config_CycleStartOffset_r13__setup_PR_NOTHING,	/* No components present */
	MAC_MainConfig__ext5__eDRX_Config_CycleStartOffset_r13__setup_PR_sf5120,
	MAC_MainConfig__ext5__eDRX_Config_CycleStartOffset_r13__setup_PR_sf10240
} MAC_MainConfig__ext5__eDRX_Config_CycleStartOffset_r13__setup_PR;
typedef enum MAC_MainConfig__ext6__drx_Config_r13_PR {
	MAC_MainConfig__ext6__drx_Config_r13_PR_NOTHING,	/* No components present */
	MAC_MainConfig__ext6__drx_Config_r13_PR_release,
	MAC_MainConfig__ext6__drx_Config_r13_PR_setup
} MAC_MainConfig__ext6__drx_Config_r13_PR;
typedef enum MAC_MainConfig__ext7__skipUplinkTx_r14_PR {
	MAC_MainConfig__ext7__skipUplinkTx_r14_PR_NOTHING,	/* No components present */
	MAC_MainConfig__ext7__skipUplinkTx_r14_PR_release,
	MAC_MainConfig__ext7__skipUplinkTx_r14_PR_setup
} MAC_MainConfig__ext7__skipUplinkTx_r14_PR;
typedef enum MAC_MainConfig__ext7__skipUplinkTx_r14__setup__skipUplinkTxSPS_r14 {
	MAC_MainConfig__ext7__skipUplinkTx_r14__setup__skipUplinkTxSPS_r14_true	= 0
} e_MAC_MainConfig__ext7__skipUplinkTx_r14__setup__skipUplinkTxSPS_r14;
typedef enum MAC_MainConfig__ext7__skipUplinkTx_r14__setup__skipUplinkTxDynamic_r14 {
	MAC_MainConfig__ext7__skipUplinkTx_r14__setup__skipUplinkTxDynamic_r14_true	= 0
} e_MAC_MainConfig__ext7__skipUplinkTx_r14__setup__skipUplinkTxDynamic_r14;
typedef enum MAC_MainConfig__ext7__dataInactivityTimerConfig_r14_PR {
	MAC_MainConfig__ext7__dataInactivityTimerConfig_r14_PR_NOTHING,	/* No components present */
	MAC_MainConfig__ext7__dataInactivityTimerConfig_r14_PR_release,
	MAC_MainConfig__ext7__dataInactivityTimerConfig_r14_PR_setup
} MAC_MainConfig__ext7__dataInactivityTimerConfig_r14_PR;
typedef enum MAC_MainConfig__ext8__rai_Activation_r14 {
	MAC_MainConfig__ext8__rai_Activation_r14_true	= 0
} e_MAC_MainConfig__ext8__rai_Activation_r14;
typedef enum MAC_MainConfig__ext9__shortTTI_AndSPT_r15_PR {
	MAC_MainConfig__ext9__shortTTI_AndSPT_r15_PR_NOTHING,	/* No components present */
	MAC_MainConfig__ext9__shortTTI_AndSPT_r15_PR_release,
	MAC_MainConfig__ext9__shortTTI_AndSPT_r15_PR_setup
} MAC_MainConfig__ext9__shortTTI_AndSPT_r15_PR;
typedef enum MAC_MainConfig__ext9__shortTTI_AndSPT_r15__setup__periodicBSR_Timer_r15 {
	MAC_MainConfig__ext9__shortTTI_AndSPT_r15__setup__periodicBSR_Timer_r15_sf1	= 0,
	MAC_MainConfig__ext9__shortTTI_AndSPT_r15__setup__periodicBSR_Timer_r15_sf5	= 1,
	MAC_MainConfig__ext9__shortTTI_AndSPT_r15__setup__periodicBSR_Timer_r15_sf10	= 2,
	MAC_MainConfig__ext9__shortTTI_AndSPT_r15__setup__periodicBSR_Timer_r15_sf16	= 3,
	MAC_MainConfig__ext9__shortTTI_AndSPT_r15__setup__periodicBSR_Timer_r15_sf20	= 4,
	MAC_MainConfig__ext9__shortTTI_AndSPT_r15__setup__periodicBSR_Timer_r15_sf32	= 5,
	MAC_MainConfig__ext9__shortTTI_AndSPT_r15__setup__periodicBSR_Timer_r15_sf40	= 6,
	MAC_MainConfig__ext9__shortTTI_AndSPT_r15__setup__periodicBSR_Timer_r15_sf64	= 7,
	MAC_MainConfig__ext9__shortTTI_AndSPT_r15__setup__periodicBSR_Timer_r15_sf80	= 8,
	MAC_MainConfig__ext9__shortTTI_AndSPT_r15__setup__periodicBSR_Timer_r15_sf128	= 9,
	MAC_MainConfig__ext9__shortTTI_AndSPT_r15__setup__periodicBSR_Timer_r15_sf160	= 10,
	MAC_MainConfig__ext9__shortTTI_AndSPT_r15__setup__periodicBSR_Timer_r15_sf320	= 11,
	MAC_MainConfig__ext9__shortTTI_AndSPT_r15__setup__periodicBSR_Timer_r15_sf640	= 12,
	MAC_MainConfig__ext9__shortTTI_AndSPT_r15__setup__periodicBSR_Timer_r15_sf1280	= 13,
	MAC_MainConfig__ext9__shortTTI_AndSPT_r15__setup__periodicBSR_Timer_r15_sf2560	= 14,
	MAC_MainConfig__ext9__shortTTI_AndSPT_r15__setup__periodicBSR_Timer_r15_infinity	= 15
} e_MAC_MainConfig__ext9__shortTTI_AndSPT_r15__setup__periodicBSR_Timer_r15;
typedef enum MAC_MainConfig__ext9__shortTTI_AndSPT_r15__setup__proc_Timeline_r15 {
	MAC_MainConfig__ext9__shortTTI_AndSPT_r15__setup__proc_Timeline_r15_nplus4set1	= 0,
	MAC_MainConfig__ext9__shortTTI_AndSPT_r15__setup__proc_Timeline_r15_nplus6set1	= 1,
	MAC_MainConfig__ext9__shortTTI_AndSPT_r15__setup__proc_Timeline_r15_nplus6set2	= 2,
	MAC_MainConfig__ext9__shortTTI_AndSPT_r15__setup__proc_Timeline_r15_nplus8set2	= 3
} e_MAC_MainConfig__ext9__shortTTI_AndSPT_r15__setup__proc_Timeline_r15;
typedef enum MAC_MainConfig__ext9__dormantStateTimers_r15_PR {
	MAC_MainConfig__ext9__dormantStateTimers_r15_PR_NOTHING,	/* No components present */
	MAC_MainConfig__ext9__dormantStateTimers_r15_PR_release,
	MAC_MainConfig__ext9__dormantStateTimers_r15_PR_setup
} MAC_MainConfig__ext9__dormantStateTimers_r15_PR;
typedef enum MAC_MainConfig__ext9__dormantStateTimers_r15__setup__sCellHibernationTimer_r15 {
	MAC_MainConfig__ext9__dormantStateTimers_r15__setup__sCellHibernationTimer_r15_rf2	= 0,
	MAC_MainConfig__ext9__dormantStateTimers_r15__setup__sCellHibernationTimer_r15_rf4	= 1,
	MAC_MainConfig__ext9__dormantStateTimers_r15__setup__sCellHibernationTimer_r15_rf8	= 2,
	MAC_MainConfig__ext9__dormantStateTimers_r15__setup__sCellHibernationTimer_r15_rf16	= 3,
	MAC_MainConfig__ext9__dormantStateTimers_r15__setup__sCellHibernationTimer_r15_rf32	= 4,
	MAC_MainConfig__ext9__dormantStateTimers_r15__setup__sCellHibernationTimer_r15_rf64	= 5,
	MAC_MainConfig__ext9__dormantStateTimers_r15__setup__sCellHibernationTimer_r15_rf128	= 6,
	MAC_MainConfig__ext9__dormantStateTimers_r15__setup__sCellHibernationTimer_r15_spare	= 7
} e_MAC_MainConfig__ext9__dormantStateTimers_r15__setup__sCellHibernationTimer_r15;
typedef enum MAC_MainConfig__ext9__dormantStateTimers_r15__setup__dormantSCellDeactivationTimer_r15 {
	MAC_MainConfig__ext9__dormantStateTimers_r15__setup__dormantSCellDeactivationTimer_r15_rf2	= 0,
	MAC_MainConfig__ext9__dormantStateTimers_r15__setup__dormantSCellDeactivationTimer_r15_rf4	= 1,
	MAC_MainConfig__ext9__dormantStateTimers_r15__setup__dormantSCellDeactivationTimer_r15_rf8	= 2,
	MAC_MainConfig__ext9__dormantStateTimers_r15__setup__dormantSCellDeactivationTimer_r15_rf16	= 3,
	MAC_MainConfig__ext9__dormantStateTimers_r15__setup__dormantSCellDeactivationTimer_r15_rf32	= 4,
	MAC_MainConfig__ext9__dormantStateTimers_r15__setup__dormantSCellDeactivationTimer_r15_rf64	= 5,
	MAC_MainConfig__ext9__dormantStateTimers_r15__setup__dormantSCellDeactivationTimer_r15_rf128	= 6,
	MAC_MainConfig__ext9__dormantStateTimers_r15__setup__dormantSCellDeactivationTimer_r15_rf320	= 7,
	MAC_MainConfig__ext9__dormantStateTimers_r15__setup__dormantSCellDeactivationTimer_r15_rf640	= 8,
	MAC_MainConfig__ext9__dormantStateTimers_r15__setup__dormantSCellDeactivationTimer_r15_rf1280	= 9,
	MAC_MainConfig__ext9__dormantStateTimers_r15__setup__dormantSCellDeactivationTimer_r15_rf2560	= 10,
	MAC_MainConfig__ext9__dormantStateTimers_r15__setup__dormantSCellDeactivationTimer_r15_rf5120	= 11,
	MAC_MainConfig__ext9__dormantStateTimers_r15__setup__dormantSCellDeactivationTimer_r15_rf10240	= 12,
	MAC_MainConfig__ext9__dormantStateTimers_r15__setup__dormantSCellDeactivationTimer_r15_spare3	= 13,
	MAC_MainConfig__ext9__dormantStateTimers_r15__setup__dormantSCellDeactivationTimer_r15_spare2	= 14,
	MAC_MainConfig__ext9__dormantStateTimers_r15__setup__dormantSCellDeactivationTimer_r15_spare1	= 15
} e_MAC_MainConfig__ext9__dormantStateTimers_r15__setup__dormantSCellDeactivationTimer_r15;

/* Forward declarations */
struct DRX_Config;
struct STAG_ToReleaseList_r11;
struct STAG_ToAddModList_r11;
struct DRX_Config_v1130;
struct DRX_Config_v1310;
struct DRX_Config_r13;
struct DRX_Config_r15;

/* MAC-MainConfig */
typedef struct MAC_MainConfig {
	struct MAC_MainConfig__ul_SCH_Config {
		long	*maxHARQ_Tx;	/* OPTIONAL */
		PeriodicBSR_Timer_r12_t	*periodicBSR_Timer;	/* OPTIONAL */
		RetxBSR_Timer_r12_t	 retxBSR_Timer;
		BOOLEAN_t	 ttiBundling;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ul_SCH_Config;
	struct DRX_Config	*drx_Config;	/* OPTIONAL */
	TimeAlignmentTimer_t	 timeAlignmentTimerDedicated;
	struct MAC_MainConfig__phr_Config {
		MAC_MainConfig__phr_Config_PR present;
		union MAC_MainConfig__phr_Config_u {
			NULL_t	 release;
			struct MAC_MainConfig__phr_Config__setup {
				long	 periodicPHR_Timer;
				long	 prohibitPHR_Timer;
				long	 dl_PathlossChange;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *phr_Config;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct MAC_MainConfig__ext1 {
		long	*sr_ProhibitTimer_r9;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct MAC_MainConfig__ext2 {
		struct MAC_MainConfig__ext2__mac_MainConfig_v1020 {
			long	*sCellDeactivationTimer_r10;	/* OPTIONAL */
			long	*extendedBSR_Sizes_r10;	/* OPTIONAL */
			long	*extendedPHR_r10;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *mac_MainConfig_v1020;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct MAC_MainConfig__ext3 {
		struct STAG_ToReleaseList_r11	*stag_ToReleaseList_r11;	/* OPTIONAL */
		struct STAG_ToAddModList_r11	*stag_ToAddModList_r11;	/* OPTIONAL */
		struct DRX_Config_v1130	*drx_Config_v1130;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct MAC_MainConfig__ext4 {
		BOOLEAN_t	*e_HARQ_Pattern_r12;	/* OPTIONAL */
		struct MAC_MainConfig__ext4__dualConnectivityPHR {
			MAC_MainConfig__ext4__dualConnectivityPHR_PR present;
			union MAC_MainConfig__ext4__dualConnectivityPHR_u {
				NULL_t	 release;
				struct MAC_MainConfig__ext4__dualConnectivityPHR__setup {
					long	 phr_ModeOtherCG_r12;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *dualConnectivityPHR;
		struct MAC_MainConfig__ext4__logicalChannelSR_Config_r12 {
			MAC_MainConfig__ext4__logicalChannelSR_Config_r12_PR present;
			union MAC_MainConfig__ext4__logicalChannelSR_Config_r12_u {
				NULL_t	 release;
				struct MAC_MainConfig__ext4__logicalChannelSR_Config_r12__setup {
					long	 logicalChannelSR_ProhibitTimer_r12;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *logicalChannelSR_Config_r12;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	struct MAC_MainConfig__ext5 {
		struct DRX_Config_v1310	*drx_Config_v1310;	/* OPTIONAL */
		BOOLEAN_t	*extendedPHR2_r13;	/* OPTIONAL */
		struct MAC_MainConfig__ext5__eDRX_Config_CycleStartOffset_r13 {
			MAC_MainConfig__ext5__eDRX_Config_CycleStartOffset_r13_PR present;
			union MAC_MainConfig__ext5__eDRX_Config_CycleStartOffset_r13_u {
				NULL_t	 release;
				struct MAC_MainConfig__ext5__eDRX_Config_CycleStartOffset_r13__setup {
					MAC_MainConfig__ext5__eDRX_Config_CycleStartOffset_r13__setup_PR present;
					union MAC_MainConfig__ext5__eDRX_Config_CycleStartOffset_r13__setup_u {
						long	 sf5120;
						long	 sf10240;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *eDRX_Config_CycleStartOffset_r13;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext5;
	struct MAC_MainConfig__ext6 {
		struct MAC_MainConfig__ext6__drx_Config_r13 {
			MAC_MainConfig__ext6__drx_Config_r13_PR present;
			union MAC_MainConfig__ext6__drx_Config_r13_u {
				NULL_t	 release;
				struct DRX_Config_r13	*setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *drx_Config_r13;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext6;
	struct MAC_MainConfig__ext7 {
		struct MAC_MainConfig__ext7__skipUplinkTx_r14 {
			MAC_MainConfig__ext7__skipUplinkTx_r14_PR present;
			union MAC_MainConfig__ext7__skipUplinkTx_r14_u {
				NULL_t	 release;
				struct MAC_MainConfig__ext7__skipUplinkTx_r14__setup {
					long	*skipUplinkTxSPS_r14;	/* OPTIONAL */
					long	*skipUplinkTxDynamic_r14;	/* OPTIONAL */
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *skipUplinkTx_r14;
		struct MAC_MainConfig__ext7__dataInactivityTimerConfig_r14 {
			MAC_MainConfig__ext7__dataInactivityTimerConfig_r14_PR present;
			union MAC_MainConfig__ext7__dataInactivityTimerConfig_r14_u {
				NULL_t	 release;
				struct MAC_MainConfig__ext7__dataInactivityTimerConfig_r14__setup {
					DataInactivityTimer_r14_t	 dataInactivityTimer_r14;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *dataInactivityTimerConfig_r14;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext7;
	struct MAC_MainConfig__ext8 {
		long	*rai_Activation_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext8;
	struct MAC_MainConfig__ext9 {
		struct MAC_MainConfig__ext9__shortTTI_AndSPT_r15 {
			MAC_MainConfig__ext9__shortTTI_AndSPT_r15_PR present;
			union MAC_MainConfig__ext9__shortTTI_AndSPT_r15_u {
				NULL_t	 release;
				struct MAC_MainConfig__ext9__shortTTI_AndSPT_r15__setup {
					struct DRX_Config_r15	*drx_Config_r15;	/* OPTIONAL */
					long	*periodicBSR_Timer_r15;	/* OPTIONAL */
					long	*proc_Timeline_r15;	/* OPTIONAL */
					long	*ssr_ProhibitTimer_r15;	/* OPTIONAL */
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *shortTTI_AndSPT_r15;
		BOOLEAN_t	*mpdcch_UL_HARQ_ACK_FeedbackConfig_r15;	/* OPTIONAL */
		struct MAC_MainConfig__ext9__dormantStateTimers_r15 {
			MAC_MainConfig__ext9__dormantStateTimers_r15_PR present;
			union MAC_MainConfig__ext9__dormantStateTimers_r15_u {
				NULL_t	 release;
				struct MAC_MainConfig__ext9__dormantStateTimers_r15__setup {
					long	*sCellHibernationTimer_r15;	/* OPTIONAL */
					long	*dormantSCellDeactivationTimer_r15;	/* OPTIONAL */
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *dormantStateTimers_r15;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext9;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MAC_MainConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_maxHARQ_Tx_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_periodicPHR_Timer_28;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_prohibitPHR_Timer_37;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dl_PathlossChange_46;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sCellDeactivationTimer_r10_56;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_extendedBSR_Sizes_r10_65;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_extendedPHR_r10_67;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_phr_ModeOtherCG_r12_78;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_logicalChannelSR_ProhibitTimer_r12_84;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_skipUplinkTxSPS_r14_109;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_skipUplinkTxDynamic_r14_111;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_rai_Activation_r14_118;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_periodicBSR_Timer_r15_125;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_proc_Timeline_r15_142;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sCellHibernationTimer_r15_152;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dormantSCellDeactivationTimer_r15_161;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MAC_MainConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_MAC_MainConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_MAC_MainConfig_1[13];

#ifdef __cplusplus
}
#endif

#endif	/* _MAC_MainConfig_H_ */
#include "asn_internal.h"
