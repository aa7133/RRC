/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_HandoverPreparationInformation_r8_IEs_H_
#define	_HandoverPreparationInformation_r8_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "UE-CapabilityRAT-ContainerList.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AS_Config;
struct RRM_Config;
struct AS_Context;
struct HandoverPreparationInformation_v920_IEs;

/* HandoverPreparationInformation-r8-IEs */
typedef struct HandoverPreparationInformation_r8_IEs {
	UE_CapabilityRAT_ContainerList_t	 ue_RadioAccessCapabilityInfo;
	struct AS_Config	*as_Config;	/* OPTIONAL */
	struct RRM_Config	*rrm_Config;	/* OPTIONAL */
	struct AS_Context	*as_Context;	/* OPTIONAL */
	struct HandoverPreparationInformation_v920_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandoverPreparationInformation_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HandoverPreparationInformation_r8_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_HandoverPreparationInformation_r8_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_HandoverPreparationInformation_r8_IEs_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _HandoverPreparationInformation_r8_IEs_H_ */
#include "asn_internal.h"
