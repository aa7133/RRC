/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_HandoverPreparationInformation_v1320_IEs_H_
#define	_HandoverPreparationInformation_v1320_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AS_Config_v1320;
struct AS_Context_v1320;
struct HandoverPreparationInformation_v1430_IEs;

/* HandoverPreparationInformation-v1320-IEs */
typedef struct HandoverPreparationInformation_v1320_IEs {
	struct AS_Config_v1320	*as_Config_v1320;	/* OPTIONAL */
	struct AS_Context_v1320	*as_Context_v1320;	/* OPTIONAL */
	struct HandoverPreparationInformation_v1430_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandoverPreparationInformation_v1320_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HandoverPreparationInformation_v1320_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_HandoverPreparationInformation_v1320_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_HandoverPreparationInformation_v1320_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _HandoverPreparationInformation_v1320_IEs_H_ */
#include "asn_internal.h"
