/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_RRCConnectionRelease_v9e0_IEs_H_
#define	_RRCConnectionRelease_v9e0_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RedirectedCarrierInfo_v9e0;
struct IdleModeMobilityControlInfo_v9e0;

/* RRCConnectionRelease-v9e0-IEs */
typedef struct RRCConnectionRelease_v9e0_IEs {
	struct RedirectedCarrierInfo_v9e0	*redirectedCarrierInfo_v9e0;	/* OPTIONAL */
	struct IdleModeMobilityControlInfo_v9e0	*idleModeMobilityControlInfo_v9e0;	/* OPTIONAL */
	struct RRCConnectionRelease_v9e0_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionRelease_v9e0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionRelease_v9e0_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionRelease_v9e0_IEs_H_ */
#include "asn_internal.h"
