/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_SL_DiscResourcePool_r12_H_
#define	_SL_DiscResourcePool_r12_H_


#include "asn_application.h"

/* Including external dependencies */
#include "SL-CP-Len-r12.h"
#include "NativeEnumerated.h"
#include "NativeInteger.h"
#include "SL-TF-ResourceConfig-r12.h"
#include "SL-TxParameters-r12.h"
#include "NULL.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"
#include "PhysCellIdList-r13.h"
#include "P-Max.h"
#include "ARFCN-ValueEUTRA.h"
#include "AdditionalSpectrumEmission.h"
#include "AdditionalSpectrumEmission-v10l0.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_DiscResourcePool_r12__discPeriod_r12 {
	SL_DiscResourcePool_r12__discPeriod_r12_rf32	= 0,
	SL_DiscResourcePool_r12__discPeriod_r12_rf64	= 1,
	SL_DiscResourcePool_r12__discPeriod_r12_rf128	= 2,
	SL_DiscResourcePool_r12__discPeriod_r12_rf256	= 3,
	SL_DiscResourcePool_r12__discPeriod_r12_rf512	= 4,
	SL_DiscResourcePool_r12__discPeriod_r12_rf1024	= 5,
	SL_DiscResourcePool_r12__discPeriod_r12_rf16_v1310	= 6,
	SL_DiscResourcePool_r12__discPeriod_r12_spare	= 7
} e_SL_DiscResourcePool_r12__discPeriod_r12;
typedef enum SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__poolSelection_r12_PR {
	SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__poolSelection_r12_PR_NOTHING,	/* No components present */
	SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__poolSelection_r12_PR_rsrpBased_r12,
	SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__poolSelection_r12_PR_random_r12
} SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__poolSelection_r12_PR;
typedef enum SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__txProbability_r12 {
	SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__txProbability_r12_p25	= 0,
	SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__txProbability_r12_p50	= 1,
	SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__txProbability_r12_p75	= 2,
	SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__txProbability_r12_p100	= 3
} e_SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__txProbability_r12;
typedef enum SL_DiscResourcePool_r12__ext1__discPeriod_v1310_PR {
	SL_DiscResourcePool_r12__ext1__discPeriod_v1310_PR_NOTHING,	/* No components present */
	SL_DiscResourcePool_r12__ext1__discPeriod_v1310_PR_release,
	SL_DiscResourcePool_r12__ext1__discPeriod_v1310_PR_setup
} SL_DiscResourcePool_r12__ext1__discPeriod_v1310_PR;
typedef enum SL_DiscResourcePool_r12__ext1__discPeriod_v1310__setup {
	SL_DiscResourcePool_r12__ext1__discPeriod_v1310__setup_rf4	= 0,
	SL_DiscResourcePool_r12__ext1__discPeriod_v1310__setup_rf6	= 1,
	SL_DiscResourcePool_r12__ext1__discPeriod_v1310__setup_rf7	= 2,
	SL_DiscResourcePool_r12__ext1__discPeriod_v1310__setup_rf8	= 3,
	SL_DiscResourcePool_r12__ext1__discPeriod_v1310__setup_rf12	= 4,
	SL_DiscResourcePool_r12__ext1__discPeriod_v1310__setup_rf14	= 5,
	SL_DiscResourcePool_r12__ext1__discPeriod_v1310__setup_rf24	= 6,
	SL_DiscResourcePool_r12__ext1__discPeriod_v1310__setup_rf28	= 7
} e_SL_DiscResourcePool_r12__ext1__discPeriod_v1310__setup;
typedef enum SL_DiscResourcePool_r12__ext1__rxParamsAddNeighFreq_r13_PR {
	SL_DiscResourcePool_r12__ext1__rxParamsAddNeighFreq_r13_PR_NOTHING,	/* No components present */
	SL_DiscResourcePool_r12__ext1__rxParamsAddNeighFreq_r13_PR_release,
	SL_DiscResourcePool_r12__ext1__rxParamsAddNeighFreq_r13_PR_setup
} SL_DiscResourcePool_r12__ext1__rxParamsAddNeighFreq_r13_PR;
typedef enum SL_DiscResourcePool_r12__ext1__txParamsAddNeighFreq_r13_PR {
	SL_DiscResourcePool_r12__ext1__txParamsAddNeighFreq_r13_PR_NOTHING,	/* No components present */
	SL_DiscResourcePool_r12__ext1__txParamsAddNeighFreq_r13_PR_release,
	SL_DiscResourcePool_r12__ext1__txParamsAddNeighFreq_r13_PR_setup
} SL_DiscResourcePool_r12__ext1__txParamsAddNeighFreq_r13_PR;
typedef enum SL_DiscResourcePool_r12__ext1__txParamsAddNeighFreq_r13__setup__freqInfo__ul_Bandwidth {
	SL_DiscResourcePool_r12__ext1__txParamsAddNeighFreq_r13__setup__freqInfo__ul_Bandwidth_n6	= 0,
	SL_DiscResourcePool_r12__ext1__txParamsAddNeighFreq_r13__setup__freqInfo__ul_Bandwidth_n15	= 1,
	SL_DiscResourcePool_r12__ext1__txParamsAddNeighFreq_r13__setup__freqInfo__ul_Bandwidth_n25	= 2,
	SL_DiscResourcePool_r12__ext1__txParamsAddNeighFreq_r13__setup__freqInfo__ul_Bandwidth_n50	= 3,
	SL_DiscResourcePool_r12__ext1__txParamsAddNeighFreq_r13__setup__freqInfo__ul_Bandwidth_n75	= 4,
	SL_DiscResourcePool_r12__ext1__txParamsAddNeighFreq_r13__setup__freqInfo__ul_Bandwidth_n100	= 5
} e_SL_DiscResourcePool_r12__ext1__txParamsAddNeighFreq_r13__setup__freqInfo__ul_Bandwidth;
typedef enum SL_DiscResourcePool_r12__ext2__txParamsAddNeighFreq_v1370_PR {
	SL_DiscResourcePool_r12__ext2__txParamsAddNeighFreq_v1370_PR_NOTHING,	/* No components present */
	SL_DiscResourcePool_r12__ext2__txParamsAddNeighFreq_v1370_PR_release,
	SL_DiscResourcePool_r12__ext2__txParamsAddNeighFreq_v1370_PR_setup
} SL_DiscResourcePool_r12__ext2__txParamsAddNeighFreq_v1370_PR;

/* Forward declarations */
struct SL_PoolSelectionConfig_r12;
struct TDD_Config;
struct TDD_Config_v1130;

/* SL-DiscResourcePool-r12 */
typedef struct SL_DiscResourcePool_r12 {
	SL_CP_Len_r12_t	 cp_Len_r12;
	long	 discPeriod_r12;
	long	 numRetx_r12;
	long	 numRepetition_r12;
	SL_TF_ResourceConfig_r12_t	 tf_ResourceConfig_r12;
	struct SL_DiscResourcePool_r12__txParameters_r12 {
		SL_TxParameters_r12_t	 txParametersGeneral_r12;
		struct SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12 {
			struct SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__poolSelection_r12 {
				SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__poolSelection_r12_PR present;
				union SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__poolSelection_r12_u {
					struct SL_PoolSelectionConfig_r12	*rsrpBased_r12;
					NULL_t	 random_r12;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} poolSelection_r12;
			long	 txProbability_r12;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *ue_SelectedResourceConfig_r12;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *txParameters_r12;
	struct SL_DiscResourcePool_r12__rxParameters_r12 {
		struct TDD_Config	*tdd_Config_r12;	/* OPTIONAL */
		long	 syncConfigIndex_r12;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rxParameters_r12;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct SL_DiscResourcePool_r12__ext1 {
		struct SL_DiscResourcePool_r12__ext1__discPeriod_v1310 {
			SL_DiscResourcePool_r12__ext1__discPeriod_v1310_PR present;
			union SL_DiscResourcePool_r12__ext1__discPeriod_v1310_u {
				NULL_t	 release;
				long	 setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *discPeriod_v1310;
		struct SL_DiscResourcePool_r12__ext1__rxParamsAddNeighFreq_r13 {
			SL_DiscResourcePool_r12__ext1__rxParamsAddNeighFreq_r13_PR present;
			union SL_DiscResourcePool_r12__ext1__rxParamsAddNeighFreq_r13_u {
				NULL_t	 release;
				struct SL_DiscResourcePool_r12__ext1__rxParamsAddNeighFreq_r13__setup {
					PhysCellIdList_r13_t	 physCellId_r13;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *rxParamsAddNeighFreq_r13;
		struct SL_DiscResourcePool_r12__ext1__txParamsAddNeighFreq_r13 {
			SL_DiscResourcePool_r12__ext1__txParamsAddNeighFreq_r13_PR present;
			union SL_DiscResourcePool_r12__ext1__txParamsAddNeighFreq_r13_u {
				NULL_t	 release;
				struct SL_DiscResourcePool_r12__ext1__txParamsAddNeighFreq_r13__setup {
					PhysCellIdList_r13_t	 physCellId_r13;
					P_Max_t	*p_Max;	/* OPTIONAL */
					struct TDD_Config	*tdd_Config_r13;	/* OPTIONAL */
					struct TDD_Config_v1130	*tdd_Config_v1130;	/* OPTIONAL */
					struct SL_DiscResourcePool_r12__ext1__txParamsAddNeighFreq_r13__setup__freqInfo {
						ARFCN_ValueEUTRA_t	*ul_CarrierFreq;	/* OPTIONAL */
						long	*ul_Bandwidth;	/* OPTIONAL */
						AdditionalSpectrumEmission_t	 additionalSpectrumEmission;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} freqInfo;
					long	 referenceSignalPower;
					long	*syncConfigIndex_r13;	/* OPTIONAL */
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *txParamsAddNeighFreq_r13;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct SL_DiscResourcePool_r12__ext2 {
		struct SL_DiscResourcePool_r12__ext2__txParamsAddNeighFreq_v1370 {
			SL_DiscResourcePool_r12__ext2__txParamsAddNeighFreq_v1370_PR present;
			union SL_DiscResourcePool_r12__ext2__txParamsAddNeighFreq_v1370_u {
				NULL_t	 release;
				struct SL_DiscResourcePool_r12__ext2__txParamsAddNeighFreq_v1370__setup {
					struct SL_DiscResourcePool_r12__ext2__txParamsAddNeighFreq_v1370__setup__freqInfo_v1370 {
						AdditionalSpectrumEmission_v10l0_t	 additionalSpectrumEmission_v1370;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} freqInfo_v1370;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *txParamsAddNeighFreq_v1370;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_DiscResourcePool_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_discPeriod_r12_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_txProbability_r12_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_setup_33;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ul_Bandwidth_55;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SL_DiscResourcePool_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_DiscResourcePool_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_DiscResourcePool_r12_1[9];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_DiscResourcePool_r12_H_ */
#include "asn_internal.h"
