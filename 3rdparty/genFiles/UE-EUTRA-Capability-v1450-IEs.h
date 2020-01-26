/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_UE_EUTRA_Capability_v1450_IEs_H_
#define	_UE_EUTRA_Capability_v1450_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OtherParameters-v1450.h"
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PhyLayerParameters_v1450;
struct RF_Parameters_v1450;
struct UE_EUTRA_Capability_v1460_IEs;

/* UE-EUTRA-Capability-v1450-IEs */
typedef struct UE_EUTRA_Capability_v1450_IEs {
	struct PhyLayerParameters_v1450	*phyLayerParameters_v1450;	/* OPTIONAL */
	struct RF_Parameters_v1450	*rf_Parameters_v1450;	/* OPTIONAL */
	OtherParameters_v1450_t	 otherParameters_v1450;
	long	*ue_CategoryDL_v1450;	/* OPTIONAL */
	struct UE_EUTRA_Capability_v1460_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_Capability_v1450_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v1450_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_Capability_v1450_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_EUTRA_Capability_v1450_IEs_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _UE_EUTRA_Capability_v1450_IEs_H_ */
#include "asn_internal.h"
