/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_UplinkPowerControlDedicatedSCell_v1310_H_
#define	_UplinkPowerControlDedicatedSCell_v1310_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DeltaTxD_OffsetListPUCCH_r10;

/* UplinkPowerControlDedicatedSCell-v1310 */
typedef struct UplinkPowerControlDedicatedSCell_v1310 {
	long	 p0_UE_PUCCH;
	struct DeltaTxD_OffsetListPUCCH_r10	*deltaTxD_OffsetListPUCCH_r10;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UplinkPowerControlDedicatedSCell_v1310_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UplinkPowerControlDedicatedSCell_v1310;
extern asn_SEQUENCE_specifics_t asn_SPC_UplinkPowerControlDedicatedSCell_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_UplinkPowerControlDedicatedSCell_v1310_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _UplinkPowerControlDedicatedSCell_v1310_H_ */
#include "asn_internal.h"
