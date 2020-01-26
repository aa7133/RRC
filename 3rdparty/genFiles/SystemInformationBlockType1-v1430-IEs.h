/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_SystemInformationBlockType1_v1430_IEs_H_
#define	_SystemInformationBlockType1_v1430_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SystemInformationBlockType1_v1430_IEs__eCallOverIMS_Support_r14 {
	SystemInformationBlockType1_v1430_IEs__eCallOverIMS_Support_r14_true	= 0
} e_SystemInformationBlockType1_v1430_IEs__eCallOverIMS_Support_r14;

/* Forward declarations */
struct TDD_Config_v1430;
struct SystemInformationBlockType1_v1450_IEs;
struct CellAccessRelatedInfo_r14;

/* SystemInformationBlockType1-v1430-IEs */
typedef struct SystemInformationBlockType1_v1430_IEs {
	long	*eCallOverIMS_Support_r14;	/* OPTIONAL */
	struct TDD_Config_v1430	*tdd_Config_v1430;	/* OPTIONAL */
	struct SystemInformationBlockType1_v1430_IEs__cellAccessRelatedInfoList_r14 {
		A_SEQUENCE_OF(struct CellAccessRelatedInfo_r14) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cellAccessRelatedInfoList_r14;
	struct SystemInformationBlockType1_v1450_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType1_v1430_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_eCallOverIMS_Support_r14_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType1_v1430_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType1_v1430_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType1_v1430_IEs_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType1_v1430_IEs_H_ */
#include "asn_internal.h"
