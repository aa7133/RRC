/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_RRCConnectionReconfiguration_r8_IEs_H_
#define	_RRCConnectionReconfiguration_r8_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "DedicatedInfoNAS.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasConfig;
struct MobilityControlInfo;
struct RadioResourceConfigDedicated;
struct SecurityConfigHO;
struct RRCConnectionReconfiguration_v890_IEs;

/* RRCConnectionReconfiguration-r8-IEs */
typedef struct RRCConnectionReconfiguration_r8_IEs {
	struct MeasConfig	*measConfig;	/* OPTIONAL */
	struct MobilityControlInfo	*mobilityControlInfo;	/* OPTIONAL */
	struct RRCConnectionReconfiguration_r8_IEs__dedicatedInfoNASList {
		A_SEQUENCE_OF(DedicatedInfoNAS_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *dedicatedInfoNASList;
	struct RadioResourceConfigDedicated	*radioResourceConfigDedicated;	/* OPTIONAL */
	struct SecurityConfigHO	*securityConfigHO;	/* OPTIONAL */
	struct RRCConnectionReconfiguration_v890_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReconfiguration_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReconfiguration_r8_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReconfiguration_r8_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionReconfiguration_r8_IEs_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReconfiguration_r8_IEs_H_ */
#include "asn_internal.h"
