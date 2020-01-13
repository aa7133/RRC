/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_MeasObjectEUTRA_H_
#define	_MeasObjectEUTRA_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ARFCN-ValueEUTRA.h"
#include "AllowedMeasBandwidth.h"
#include "PresenceAntennaPort1.h"
#include "NeighCellConfig.h"
#include "Q-OffsetRange.h"
#include "PhysCellId.h"
#include "MeasCycleSCell-r10.h"
#include "constr_SEQUENCE.h"
#include "BOOLEAN.h"
#include "NULL.h"
#include "NativeEnumerated.h"
#include "constr_CHOICE.h"
#include "ARFCN-ValueEUTRA-v9e0.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasObjectEUTRA__ext3__t312_r12_PR {
	MeasObjectEUTRA__ext3__t312_r12_PR_NOTHING,	/* No components present */
	MeasObjectEUTRA__ext3__t312_r12_PR_release,
	MeasObjectEUTRA__ext3__t312_r12_PR_setup
} MeasObjectEUTRA__ext3__t312_r12_PR;
typedef enum MeasObjectEUTRA__ext3__t312_r12__setup {
	MeasObjectEUTRA__ext3__t312_r12__setup_ms0	= 0,
	MeasObjectEUTRA__ext3__t312_r12__setup_ms50	= 1,
	MeasObjectEUTRA__ext3__t312_r12__setup_ms100	= 2,
	MeasObjectEUTRA__ext3__t312_r12__setup_ms200	= 3,
	MeasObjectEUTRA__ext3__t312_r12__setup_ms300	= 4,
	MeasObjectEUTRA__ext3__t312_r12__setup_ms400	= 5,
	MeasObjectEUTRA__ext3__t312_r12__setup_ms500	= 6,
	MeasObjectEUTRA__ext3__t312_r12__setup_ms1000	= 7
} e_MeasObjectEUTRA__ext3__t312_r12__setup;

/* Forward declarations */
struct CellIndexList;
struct CellsToAddModList;
struct BlackCellsToAddModList;
struct MeasSubframePatternConfigNeigh_r10;
struct AltTTT_CellsToAddModList_r12;
struct MeasDS_Config_r12;
struct WhiteCellsToAddModList_r13;
struct RMTC_Config_r13;
struct Tx_ResourcePoolMeasList_r14;
struct MeasSensing_Config_r15;

/* MeasObjectEUTRA */
typedef struct MeasObjectEUTRA {
	ARFCN_ValueEUTRA_t	 carrierFreq;
	AllowedMeasBandwidth_t	 allowedMeasBandwidth;
	PresenceAntennaPort1_t	 presenceAntennaPort1;
	NeighCellConfig_t	 neighCellConfig;
	Q_OffsetRange_t	*offsetFreq;	/* DEFAULT 15 */
	struct CellIndexList	*cellsToRemoveList;	/* OPTIONAL */
	struct CellsToAddModList	*cellsToAddModList;	/* OPTIONAL */
	struct CellIndexList	*blackCellsToRemoveList;	/* OPTIONAL */
	struct BlackCellsToAddModList	*blackCellsToAddModList;	/* OPTIONAL */
	PhysCellId_t	*cellForWhichToReportCGI;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct MeasObjectEUTRA__ext1 {
		MeasCycleSCell_r10_t	*measCycleSCell_r10;	/* OPTIONAL */
		struct MeasSubframePatternConfigNeigh_r10	*measSubframePatternConfigNeigh_r10;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct MeasObjectEUTRA__ext2 {
		BOOLEAN_t	*widebandRSRQ_Meas_r11;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct MeasObjectEUTRA__ext3 {
		struct CellIndexList	*altTTT_CellsToRemoveList_r12;	/* OPTIONAL */
		struct AltTTT_CellsToAddModList_r12	*altTTT_CellsToAddModList_r12;	/* OPTIONAL */
		struct MeasObjectEUTRA__ext3__t312_r12 {
			MeasObjectEUTRA__ext3__t312_r12_PR present;
			union MeasObjectEUTRA__ext3__t312_r12_u {
				NULL_t	 release;
				long	 setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *t312_r12;
		BOOLEAN_t	*reducedMeasPerformance_r12;	/* OPTIONAL */
		struct MeasDS_Config_r12	*measDS_Config_r12;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct MeasObjectEUTRA__ext4 {
		struct CellIndexList	*whiteCellsToRemoveList_r13;	/* OPTIONAL */
		struct WhiteCellsToAddModList_r13	*whiteCellsToAddModList_r13;	/* OPTIONAL */
		struct RMTC_Config_r13	*rmtc_Config_r13;	/* OPTIONAL */
		ARFCN_ValueEUTRA_v9e0_t	*carrierFreq_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	struct MeasObjectEUTRA__ext5 {
		struct Tx_ResourcePoolMeasList_r14	*tx_ResourcePoolToRemoveList_r14;	/* OPTIONAL */
		struct Tx_ResourcePoolMeasList_r14	*tx_ResourcePoolToAddList_r14;	/* OPTIONAL */
		BOOLEAN_t	*fembms_MixedCarrier_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext5;
	struct MeasObjectEUTRA__ext6 {
		struct MeasSensing_Config_r15	*measSensing_Config_r15;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext6;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasObjectEUTRA_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_setup_23;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MeasObjectEUTRA;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasObjectEUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasObjectEUTRA_1[16];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasObjectEUTRA_H_ */
#include "asn_internal.h"
