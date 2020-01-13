/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_SystemInformationBlockType10_H_
#define	_SystemInformationBlockType10_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BIT_STRING.h"
#include "OCTET_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SystemInformationBlockType10 */
typedef struct SystemInformationBlockType10 {
	BIT_STRING_t	 messageIdentifier;
	BIT_STRING_t	 serialNumber;
	OCTET_STRING_t	 warningType;
	OCTET_STRING_t	*dummy;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType10;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType10_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType10_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType10_H_ */
#include "asn_internal.h"
