/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_DLInformationTransfer_NB_r13_IEs_H_
#define	_DLInformationTransfer_NB_r13_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "DedicatedInfoNAS.h"
#include "OCTET_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* DLInformationTransfer-NB-r13-IEs */
typedef struct DLInformationTransfer_NB_r13_IEs {
	DedicatedInfoNAS_t	 dedicatedInfoNAS_r13;
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct DLInformationTransfer_NB_r13_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DLInformationTransfer_NB_r13_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DLInformationTransfer_NB_r13_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_DLInformationTransfer_NB_r13_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_DLInformationTransfer_NB_r13_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _DLInformationTransfer_NB_r13_IEs_H_ */
#include "asn_internal.h"
