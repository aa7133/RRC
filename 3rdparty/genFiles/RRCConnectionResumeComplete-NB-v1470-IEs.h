/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_RRCConnectionResumeComplete_NB_v1470_IEs_H_
#define	_RRCConnectionResumeComplete_NB_v1470_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasResultServCell_NB_r14;

/* RRCConnectionResumeComplete-NB-v1470-IEs */
typedef struct RRCConnectionResumeComplete_NB_v1470_IEs {
	struct MeasResultServCell_NB_r14	*measResultServCell_r14;	/* OPTIONAL */
	struct RRCConnectionResumeComplete_NB_v1470_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionResumeComplete_NB_v1470_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionResumeComplete_NB_v1470_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionResumeComplete_NB_v1470_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionResumeComplete_NB_v1470_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionResumeComplete_NB_v1470_IEs_H_ */
#include "asn_internal.h"
