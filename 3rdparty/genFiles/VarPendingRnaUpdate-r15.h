/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_VarPendingRnaUpdate_r15_H_
#define	_VarPendingRnaUpdate_r15_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BOOLEAN.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* VarPendingRnaUpdate-r15 */
typedef struct VarPendingRnaUpdate_r15 {
	BOOLEAN_t	*pendingRnaUpdate;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VarPendingRnaUpdate_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VarPendingRnaUpdate_r15;

#ifdef __cplusplus
}
#endif

#endif	/* _VarPendingRnaUpdate_r15_H_ */
#include "asn_internal.h"
