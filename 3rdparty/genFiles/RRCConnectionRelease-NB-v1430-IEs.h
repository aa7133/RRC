/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_RRCConnectionRelease_NB_v1430_IEs_H_
#define	_RRCConnectionRelease_NB_v1430_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RedirectedCarrierInfo_NB_v1430;
struct RRCConnectionRelease_NB_v1530_IEs;

/* RRCConnectionRelease-NB-v1430-IEs */
typedef struct RRCConnectionRelease_NB_v1430_IEs {
	struct RedirectedCarrierInfo_NB_v1430	*redirectedCarrierInfo_v1430;	/* OPTIONAL */
	long	*extendedWaitTime_CPdata_r14;	/* OPTIONAL */
	struct RRCConnectionRelease_NB_v1530_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionRelease_NB_v1430_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionRelease_NB_v1430_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionRelease_NB_v1430_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionRelease_NB_v1430_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionRelease_NB_v1430_IEs_H_ */
#include "asn_internal.h"
