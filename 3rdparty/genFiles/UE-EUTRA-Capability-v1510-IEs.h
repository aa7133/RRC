/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_UE_EUTRA_Capability_v1510_IEs_H_
#define	_UE_EUTRA_Capability_v1510_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IRAT_ParametersNR_r15;
struct FeatureSetsEUTRA_r15;
struct PDCP_ParametersNR_r15;
struct UE_EUTRA_CapabilityAddXDD_Mode_v1510;
struct UE_EUTRA_Capability_v1520_IEs;

/* UE-EUTRA-Capability-v1510-IEs */
typedef struct UE_EUTRA_Capability_v1510_IEs {
	struct IRAT_ParametersNR_r15	*irat_ParametersNR_r15;	/* OPTIONAL */
	struct FeatureSetsEUTRA_r15	*featureSetsEUTRA_r15;	/* OPTIONAL */
	struct PDCP_ParametersNR_r15	*pdcp_ParametersNR_r15;	/* OPTIONAL */
	struct UE_EUTRA_CapabilityAddXDD_Mode_v1510	*fdd_Add_UE_EUTRA_Capabilities_v1510;	/* OPTIONAL */
	struct UE_EUTRA_CapabilityAddXDD_Mode_v1510	*tdd_Add_UE_EUTRA_Capabilities_v1510;	/* OPTIONAL */
	struct UE_EUTRA_Capability_v1520_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_Capability_v1510_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v1510_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_Capability_v1510_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_EUTRA_Capability_v1510_IEs_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _UE_EUTRA_Capability_v1510_IEs_H_ */
#include "asn_internal.h"
