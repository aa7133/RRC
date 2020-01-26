/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_RRCConnectionReestablishmentComplete_v920_IEs_H_
#define	_RRCConnectionReestablishmentComplete_v920_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionReestablishmentComplete_v920_IEs__rlf_InfoAvailable_r9 {
	RRCConnectionReestablishmentComplete_v920_IEs__rlf_InfoAvailable_r9_true	= 0
} e_RRCConnectionReestablishmentComplete_v920_IEs__rlf_InfoAvailable_r9;

/* Forward declarations */
struct RRCConnectionReestablishmentComplete_v8a0_IEs;

/* RRCConnectionReestablishmentComplete-v920-IEs */
typedef struct RRCConnectionReestablishmentComplete_v920_IEs {
	long	*rlf_InfoAvailable_r9;	/* OPTIONAL */
	struct RRCConnectionReestablishmentComplete_v8a0_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReestablishmentComplete_v920_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_rlf_InfoAvailable_r9_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReestablishmentComplete_v920_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReestablishmentComplete_v920_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionReestablishmentComplete_v920_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReestablishmentComplete_v920_IEs_H_ */
#include "asn_internal.h"
