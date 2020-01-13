/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_CellAccessRelatedInfo_5GC_r15_H_
#define	_CellAccessRelatedInfo_5GC_r15_H_


#include "asn_application.h"

/* Including external dependencies */
#include "PLMN-IdentityList-r15.h"
#include "RAN-AreaCode-r15.h"
#include "TrackingAreaCode-5GC-r15.h"
#include "CellIdentity-5GC-r15.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* CellAccessRelatedInfo-5GC-r15 */
typedef struct CellAccessRelatedInfo_5GC_r15 {
	PLMN_IdentityList_r15_t	 plmn_IdentityList_r15;
	RAN_AreaCode_r15_t	*ran_AreaCode_r15;	/* OPTIONAL */
	TrackingAreaCode_5GC_r15_t	 trackingAreaCode_5GC_r15;
	CellIdentity_5GC_r15_t	 cellIdentity_5GC_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellAccessRelatedInfo_5GC_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellAccessRelatedInfo_5GC_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_CellAccessRelatedInfo_5GC_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_CellAccessRelatedInfo_5GC_r15_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _CellAccessRelatedInfo_5GC_r15_H_ */
#include "asn_internal.h"
