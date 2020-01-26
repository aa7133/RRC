/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_DRX_Config_NB_r13_H_
#define	_DRX_Config_NB_r13_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NULL.h"
#include "NativeEnumerated.h"
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DRX_Config_NB_r13_PR {
	DRX_Config_NB_r13_PR_NOTHING,	/* No components present */
	DRX_Config_NB_r13_PR_release,
	DRX_Config_NB_r13_PR_setup
} DRX_Config_NB_r13_PR;
typedef enum DRX_Config_NB_r13__setup__onDurationTimer_r13 {
	DRX_Config_NB_r13__setup__onDurationTimer_r13_pp1	= 0,
	DRX_Config_NB_r13__setup__onDurationTimer_r13_pp2	= 1,
	DRX_Config_NB_r13__setup__onDurationTimer_r13_pp3	= 2,
	DRX_Config_NB_r13__setup__onDurationTimer_r13_pp4	= 3,
	DRX_Config_NB_r13__setup__onDurationTimer_r13_pp8	= 4,
	DRX_Config_NB_r13__setup__onDurationTimer_r13_pp16	= 5,
	DRX_Config_NB_r13__setup__onDurationTimer_r13_pp32	= 6,
	DRX_Config_NB_r13__setup__onDurationTimer_r13_spare	= 7
} e_DRX_Config_NB_r13__setup__onDurationTimer_r13;
typedef enum DRX_Config_NB_r13__setup__drx_InactivityTimer_r13 {
	DRX_Config_NB_r13__setup__drx_InactivityTimer_r13_pp0	= 0,
	DRX_Config_NB_r13__setup__drx_InactivityTimer_r13_pp1	= 1,
	DRX_Config_NB_r13__setup__drx_InactivityTimer_r13_pp2	= 2,
	DRX_Config_NB_r13__setup__drx_InactivityTimer_r13_pp3	= 3,
	DRX_Config_NB_r13__setup__drx_InactivityTimer_r13_pp4	= 4,
	DRX_Config_NB_r13__setup__drx_InactivityTimer_r13_pp8	= 5,
	DRX_Config_NB_r13__setup__drx_InactivityTimer_r13_pp16	= 6,
	DRX_Config_NB_r13__setup__drx_InactivityTimer_r13_pp32	= 7
} e_DRX_Config_NB_r13__setup__drx_InactivityTimer_r13;
typedef enum DRX_Config_NB_r13__setup__drx_RetransmissionTimer_r13 {
	DRX_Config_NB_r13__setup__drx_RetransmissionTimer_r13_pp0	= 0,
	DRX_Config_NB_r13__setup__drx_RetransmissionTimer_r13_pp1	= 1,
	DRX_Config_NB_r13__setup__drx_RetransmissionTimer_r13_pp2	= 2,
	DRX_Config_NB_r13__setup__drx_RetransmissionTimer_r13_pp4	= 3,
	DRX_Config_NB_r13__setup__drx_RetransmissionTimer_r13_pp6	= 4,
	DRX_Config_NB_r13__setup__drx_RetransmissionTimer_r13_pp8	= 5,
	DRX_Config_NB_r13__setup__drx_RetransmissionTimer_r13_pp16	= 6,
	DRX_Config_NB_r13__setup__drx_RetransmissionTimer_r13_pp24	= 7,
	DRX_Config_NB_r13__setup__drx_RetransmissionTimer_r13_pp33	= 8,
	DRX_Config_NB_r13__setup__drx_RetransmissionTimer_r13_spare7	= 9,
	DRX_Config_NB_r13__setup__drx_RetransmissionTimer_r13_spare6	= 10,
	DRX_Config_NB_r13__setup__drx_RetransmissionTimer_r13_spare5	= 11,
	DRX_Config_NB_r13__setup__drx_RetransmissionTimer_r13_spare4	= 12,
	DRX_Config_NB_r13__setup__drx_RetransmissionTimer_r13_spare3	= 13,
	DRX_Config_NB_r13__setup__drx_RetransmissionTimer_r13_spare2	= 14,
	DRX_Config_NB_r13__setup__drx_RetransmissionTimer_r13_spare1	= 15
} e_DRX_Config_NB_r13__setup__drx_RetransmissionTimer_r13;
typedef enum DRX_Config_NB_r13__setup__drx_Cycle_r13 {
	DRX_Config_NB_r13__setup__drx_Cycle_r13_sf256	= 0,
	DRX_Config_NB_r13__setup__drx_Cycle_r13_sf512	= 1,
	DRX_Config_NB_r13__setup__drx_Cycle_r13_sf1024	= 2,
	DRX_Config_NB_r13__setup__drx_Cycle_r13_sf1536	= 3,
	DRX_Config_NB_r13__setup__drx_Cycle_r13_sf2048	= 4,
	DRX_Config_NB_r13__setup__drx_Cycle_r13_sf3072	= 5,
	DRX_Config_NB_r13__setup__drx_Cycle_r13_sf4096	= 6,
	DRX_Config_NB_r13__setup__drx_Cycle_r13_sf4608	= 7,
	DRX_Config_NB_r13__setup__drx_Cycle_r13_sf6144	= 8,
	DRX_Config_NB_r13__setup__drx_Cycle_r13_sf7680	= 9,
	DRX_Config_NB_r13__setup__drx_Cycle_r13_sf8192	= 10,
	DRX_Config_NB_r13__setup__drx_Cycle_r13_sf9216	= 11,
	DRX_Config_NB_r13__setup__drx_Cycle_r13_spare4	= 12,
	DRX_Config_NB_r13__setup__drx_Cycle_r13_spare3	= 13,
	DRX_Config_NB_r13__setup__drx_Cycle_r13_spare2	= 14,
	DRX_Config_NB_r13__setup__drx_Cycle_r13_spare1	= 15
} e_DRX_Config_NB_r13__setup__drx_Cycle_r13;
typedef enum DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13 {
	DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13_pp0	= 0,
	DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13_pp1	= 1,
	DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13_pp2	= 2,
	DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13_pp4	= 3,
	DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13_pp6	= 4,
	DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13_pp8	= 5,
	DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13_pp16	= 6,
	DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13_pp24	= 7,
	DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13_pp33	= 8,
	DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13_pp40	= 9,
	DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13_pp64	= 10,
	DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13_pp80	= 11,
	DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13_pp96	= 12,
	DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13_pp112	= 13,
	DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13_pp128	= 14,
	DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13_pp160	= 15,
	DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13_pp320	= 16
} e_DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13;

/* DRX-Config-NB-r13 */
typedef struct DRX_Config_NB_r13 {
	DRX_Config_NB_r13_PR present;
	union DRX_Config_NB_r13_u {
		NULL_t	 release;
		struct DRX_Config_NB_r13__setup {
			long	 onDurationTimer_r13;
			long	 drx_InactivityTimer_r13;
			long	 drx_RetransmissionTimer_r13;
			long	 drx_Cycle_r13;
			long	 drx_StartOffset_r13;
			long	 drx_ULRetransmissionTimer_r13;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DRX_Config_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_onDurationTimer_r13_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_drx_InactivityTimer_r13_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_drx_RetransmissionTimer_r13_22;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_drx_Cycle_r13_39;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_drx_ULRetransmissionTimer_r13_57;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_DRX_Config_NB_r13;
extern asn_CHOICE_specifics_t asn_SPC_DRX_Config_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_DRX_Config_NB_r13_1[2];
extern asn_per_constraints_t asn_PER_type_DRX_Config_NB_r13_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _DRX_Config_NB_r13_H_ */
#include "asn_internal.h"
