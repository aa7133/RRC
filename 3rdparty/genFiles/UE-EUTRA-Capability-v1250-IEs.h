/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_UE_EUTRA_Capability_v1250_IEs_H_
#define	_UE_EUTRA_Capability_v1250_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PhyLayerParameters_v1250;
struct RF_Parameters_v1250;
struct RLC_Parameters_r12;
struct UE_BasedNetwPerfMeasParameters_v1250;
struct WLAN_IW_Parameters_r12;
struct MeasParameters_v1250;
struct DC_Parameters_r12;
struct MBMS_Parameters_v1250;
struct MAC_Parameters_r12;
struct UE_EUTRA_CapabilityAddXDD_Mode_v1250;
struct SL_Parameters_r12;
struct UE_EUTRA_Capability_v1260_IEs;

/* UE-EUTRA-Capability-v1250-IEs */
typedef struct UE_EUTRA_Capability_v1250_IEs {
	struct PhyLayerParameters_v1250	*phyLayerParameters_v1250;	/* OPTIONAL */
	struct RF_Parameters_v1250	*rf_Parameters_v1250;	/* OPTIONAL */
	struct RLC_Parameters_r12	*rlc_Parameters_r12;	/* OPTIONAL */
	struct UE_BasedNetwPerfMeasParameters_v1250	*ue_BasedNetwPerfMeasParameters_v1250;	/* OPTIONAL */
	long	*ue_CategoryDL_r12;	/* OPTIONAL */
	long	*ue_CategoryUL_r12;	/* OPTIONAL */
	struct WLAN_IW_Parameters_r12	*wlan_IW_Parameters_r12;	/* OPTIONAL */
	struct MeasParameters_v1250	*measParameters_v1250;	/* OPTIONAL */
	struct DC_Parameters_r12	*dc_Parameters_r12;	/* OPTIONAL */
	struct MBMS_Parameters_v1250	*mbms_Parameters_v1250;	/* OPTIONAL */
	struct MAC_Parameters_r12	*mac_Parameters_r12;	/* OPTIONAL */
	struct UE_EUTRA_CapabilityAddXDD_Mode_v1250	*fdd_Add_UE_EUTRA_Capabilities_v1250;	/* OPTIONAL */
	struct UE_EUTRA_CapabilityAddXDD_Mode_v1250	*tdd_Add_UE_EUTRA_Capabilities_v1250;	/* OPTIONAL */
	struct SL_Parameters_r12	*sl_Parameters_r12;	/* OPTIONAL */
	struct UE_EUTRA_Capability_v1260_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_Capability_v1250_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v1250_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_Capability_v1250_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_EUTRA_Capability_v1250_IEs_1[15];

#ifdef __cplusplus
}
#endif

#endif	/* _UE_EUTRA_Capability_v1250_IEs_H_ */
#include "asn_internal.h"
