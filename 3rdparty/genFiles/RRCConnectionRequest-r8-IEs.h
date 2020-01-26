/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_RRCConnectionRequest_r8_IEs_H_
#define	_RRCConnectionRequest_r8_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "InitialUE-Identity.h"
#include "EstablishmentCause.h"
#include "BIT_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* RRCConnectionRequest-r8-IEs */
typedef struct RRCConnectionRequest_r8_IEs {
	InitialUE_Identity_t	 ue_Identity;
	EstablishmentCause_t	 establishmentCause;
	BIT_STRING_t	 spare;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionRequest_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionRequest_r8_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionRequest_r8_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionRequest_r8_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionRequest_r8_IEs_H_ */
#include "asn_internal.h"
