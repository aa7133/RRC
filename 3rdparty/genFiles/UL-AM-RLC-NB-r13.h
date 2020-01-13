/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_UL_AM_RLC_NB_r13_H_
#define	_UL_AM_RLC_NB_r13_H_


#include "asn_application.h"

/* Including external dependencies */
#include "T-PollRetransmit-NB-r13.h"
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UL_AM_RLC_NB_r13__maxRetxThreshold_r13 {
	UL_AM_RLC_NB_r13__maxRetxThreshold_r13_t1	= 0,
	UL_AM_RLC_NB_r13__maxRetxThreshold_r13_t2	= 1,
	UL_AM_RLC_NB_r13__maxRetxThreshold_r13_t3	= 2,
	UL_AM_RLC_NB_r13__maxRetxThreshold_r13_t4	= 3,
	UL_AM_RLC_NB_r13__maxRetxThreshold_r13_t6	= 4,
	UL_AM_RLC_NB_r13__maxRetxThreshold_r13_t8	= 5,
	UL_AM_RLC_NB_r13__maxRetxThreshold_r13_t16	= 6,
	UL_AM_RLC_NB_r13__maxRetxThreshold_r13_t32	= 7
} e_UL_AM_RLC_NB_r13__maxRetxThreshold_r13;

/* UL-AM-RLC-NB-r13 */
typedef struct UL_AM_RLC_NB_r13 {
	T_PollRetransmit_NB_r13_t	 t_PollRetransmit_r13;
	long	 maxRetxThreshold_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_AM_RLC_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_maxRetxThreshold_r13_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UL_AM_RLC_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_UL_AM_RLC_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_UL_AM_RLC_NB_r13_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _UL_AM_RLC_NB_r13_H_ */
#include "asn_internal.h"
