/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_BCCH_DL_SCH_Message_MBMS_H_
#define	_BCCH_DL_SCH_Message_MBMS_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BCCH-DL-SCH-MessageType-MBMS-r14.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* BCCH-DL-SCH-Message-MBMS */
typedef struct BCCH_DL_SCH_Message_MBMS {
	BCCH_DL_SCH_MessageType_MBMS_r14_t	 message;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BCCH_DL_SCH_Message_MBMS_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BCCH_DL_SCH_Message_MBMS;

#ifdef __cplusplus
}
#endif

#endif	/* _BCCH_DL_SCH_Message_MBMS_H_ */
#include "asn_internal.h"
