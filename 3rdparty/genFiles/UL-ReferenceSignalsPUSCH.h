/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_UL_ReferenceSignalsPUSCH_H_
#define	_UL_ReferenceSignalsPUSCH_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BOOLEAN.h"
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* UL-ReferenceSignalsPUSCH */
typedef struct UL_ReferenceSignalsPUSCH {
	BOOLEAN_t	 groupHoppingEnabled;
	long	 groupAssignmentPUSCH;
	BOOLEAN_t	 sequenceHoppingEnabled;
	long	 cyclicShift;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_ReferenceSignalsPUSCH_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_ReferenceSignalsPUSCH;
extern asn_SEQUENCE_specifics_t asn_SPC_UL_ReferenceSignalsPUSCH_specs_1;
extern asn_TYPE_member_t asn_MBR_UL_ReferenceSignalsPUSCH_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _UL_ReferenceSignalsPUSCH_H_ */
#include "asn_internal.h"
