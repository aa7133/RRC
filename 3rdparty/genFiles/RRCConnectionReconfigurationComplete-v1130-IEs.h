/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_RRCConnectionReconfigurationComplete_v1130_IEs_H_
#define	_RRCConnectionReconfigurationComplete_v1130_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionReconfigurationComplete_v1130_IEs__connEstFailInfoAvailable_r11 {
	RRCConnectionReconfigurationComplete_v1130_IEs__connEstFailInfoAvailable_r11_true	= 0
} e_RRCConnectionReconfigurationComplete_v1130_IEs__connEstFailInfoAvailable_r11;

/* Forward declarations */
struct RRCConnectionReconfigurationComplete_v1250_IEs;

/* RRCConnectionReconfigurationComplete-v1130-IEs */
typedef struct RRCConnectionReconfigurationComplete_v1130_IEs {
	long	*connEstFailInfoAvailable_r11;	/* OPTIONAL */
	struct RRCConnectionReconfigurationComplete_v1250_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReconfigurationComplete_v1130_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_connEstFailInfoAvailable_r11_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReconfigurationComplete_v1130_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReconfigurationComplete_v1130_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionReconfigurationComplete_v1130_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReconfigurationComplete_v1130_IEs_H_ */
#include "asn_internal.h"
