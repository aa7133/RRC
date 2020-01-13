/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_MAC_MainConfigSL_r12_H_
#define	_MAC_MainConfigSL_r12_H_


#include "asn_application.h"

/* Including external dependencies */
#include "PeriodicBSR-Timer-r12.h"
#include "RetxBSR-Timer-r12.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MAC-MainConfigSL-r12 */
typedef struct MAC_MainConfigSL_r12 {
	PeriodicBSR_Timer_r12_t	*periodic_BSR_TimerSL;	/* OPTIONAL */
	RetxBSR_Timer_r12_t	 retx_BSR_TimerSL;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MAC_MainConfigSL_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MAC_MainConfigSL_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_MAC_MainConfigSL_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_MAC_MainConfigSL_r12_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MAC_MainConfigSL_r12_H_ */
#include "asn_internal.h"
