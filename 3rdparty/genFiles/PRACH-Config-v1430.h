/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_PRACH_Config_v1430_H_
#define	_PRACH_Config_v1430_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PRACH-Config-v1430 */
typedef struct PRACH_Config_v1430 {
	long	 rootSequenceIndexHighSpeed_r14;
	long	 zeroCorrelationZoneConfigHighSpeed_r14;
	long	 prach_ConfigIndexHighSpeed_r14;
	long	 prach_FreqOffsetHighSpeed_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PRACH_Config_v1430_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PRACH_Config_v1430;
extern asn_SEQUENCE_specifics_t asn_SPC_PRACH_Config_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_PRACH_Config_v1430_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _PRACH_Config_v1430_H_ */
#include "asn_internal.h"
