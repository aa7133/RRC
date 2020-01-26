/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_RRCConnectionReconfiguration_v12f0_IEs_H_
#define	_RRCConnectionReconfiguration_v12f0_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SCG_Configuration_v12f0;
struct RRCConnectionReconfiguration_v1370_IEs;

/* RRCConnectionReconfiguration-v12f0-IEs */
typedef struct RRCConnectionReconfiguration_v12f0_IEs {
	struct SCG_Configuration_v12f0	*scg_Configuration_v12f0;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct RRCConnectionReconfiguration_v1370_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReconfiguration_v12f0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReconfiguration_v12f0_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReconfiguration_v12f0_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionReconfiguration_v12f0_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReconfiguration_v12f0_IEs_H_ */
#include "asn_internal.h"
