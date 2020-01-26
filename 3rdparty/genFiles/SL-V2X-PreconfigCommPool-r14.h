/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-Sidelink-Preconf"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_SL_V2X_PreconfigCommPool_r14_H_
#define	_SL_V2X_PreconfigCommPool_r14_H_


#include "asn_application.h"

/* Including external dependencies */
#include "SubframeBitmapSL-r14.h"
#include "BOOLEAN.h"
#include "NativeEnumerated.h"
#include "NativeInteger.h"
#include "P0-SL-r12.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14 {
	SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n4	= 0,
	SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n5	= 1,
	SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n6	= 2,
	SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n8	= 3,
	SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n9	= 4,
	SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n10	= 5,
	SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n12	= 6,
	SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n15	= 7,
	SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n16	= 8,
	SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n18	= 9,
	SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n20	= 10,
	SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n25	= 11,
	SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n30	= 12,
	SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n48	= 13,
	SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n50	= 14,
	SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n72	= 15,
	SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n75	= 16,
	SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n96	= 17,
	SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_n100	= 18,
	SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_spare13	= 19,
	SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_spare12	= 20,
	SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_spare11	= 21,
	SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_spare10	= 22,
	SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_spare9	= 23,
	SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_spare8	= 24,
	SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_spare7	= 25,
	SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_spare6	= 26,
	SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_spare5	= 27,
	SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_spare4	= 28,
	SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_spare3	= 29,
	SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_spare2	= 30,
	SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14_spare1	= 31
} e_SL_V2X_PreconfigCommPool_r14__sizeSubchannel_r14;
typedef enum SL_V2X_PreconfigCommPool_r14__numSubchannel_r14 {
	SL_V2X_PreconfigCommPool_r14__numSubchannel_r14_n1	= 0,
	SL_V2X_PreconfigCommPool_r14__numSubchannel_r14_n3	= 1,
	SL_V2X_PreconfigCommPool_r14__numSubchannel_r14_n5	= 2,
	SL_V2X_PreconfigCommPool_r14__numSubchannel_r14_n8	= 3,
	SL_V2X_PreconfigCommPool_r14__numSubchannel_r14_n10	= 4,
	SL_V2X_PreconfigCommPool_r14__numSubchannel_r14_n15	= 5,
	SL_V2X_PreconfigCommPool_r14__numSubchannel_r14_n20	= 6,
	SL_V2X_PreconfigCommPool_r14__numSubchannel_r14_spare1	= 7
} e_SL_V2X_PreconfigCommPool_r14__numSubchannel_r14;

/* Forward declarations */
struct SL_OffsetIndicator_r12;
struct SL_CBR_PPPP_TxPreconfigList_r14;
struct SL_P2X_ResourceSelectionConfig_r14;
struct SL_SyncAllowed_r14;
struct SL_RestrictResourceReservationPeriodList_r14;
struct SL_MinT2ValueList_r15;
struct SL_CBR_PPPP_TxPreconfigList_v1530;

/* SL-V2X-PreconfigCommPool-r14 */
typedef struct SL_V2X_PreconfigCommPool_r14 {
	struct SL_OffsetIndicator_r12	*sl_OffsetIndicator_r14;	/* OPTIONAL */
	SubframeBitmapSL_r14_t	 sl_Subframe_r14;
	BOOLEAN_t	 adjacencyPSCCH_PSSCH_r14;
	long	 sizeSubchannel_r14;
	long	 numSubchannel_r14;
	long	 startRB_Subchannel_r14;
	long	*startRB_PSCCH_Pool_r14;	/* OPTIONAL */
	P0_SL_r12_t	 dataTxParameters_r14;
	long	*zoneID_r14;	/* OPTIONAL */
	long	*threshS_RSSI_CBR_r14;	/* OPTIONAL */
	struct SL_CBR_PPPP_TxPreconfigList_r14	*cbr_pssch_TxConfigList_r14;	/* OPTIONAL */
	struct SL_P2X_ResourceSelectionConfig_r14	*resourceSelectionConfigP2X_r14;	/* OPTIONAL */
	struct SL_SyncAllowed_r14	*syncAllowed_r14;	/* OPTIONAL */
	struct SL_RestrictResourceReservationPeriodList_r14	*restrictResourceReservationPeriod_r14;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct SL_V2X_PreconfigCommPool_r14__ext1 {
		struct SL_MinT2ValueList_r15	*sl_MinT2ValueList_r15;	/* OPTIONAL */
		struct SL_CBR_PPPP_TxPreconfigList_v1530	*cbr_pssch_TxConfigList_v1530;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_V2X_PreconfigCommPool_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_sizeSubchannel_r14_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_numSubchannel_r14_38;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SL_V2X_PreconfigCommPool_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_V2X_PreconfigCommPool_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_V2X_PreconfigCommPool_r14_1[15];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_V2X_PreconfigCommPool_r14_H_ */
#include "asn_internal.h"
