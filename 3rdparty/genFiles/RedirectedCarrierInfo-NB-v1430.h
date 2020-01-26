/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_RedirectedCarrierInfo_NB_v1430_H_
#define	_RedirectedCarrierInfo_NB_v1430_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RedirectedCarrierInfo_NB_v1430__redirectedCarrierOffsetDedicated_r14 {
	RedirectedCarrierInfo_NB_v1430__redirectedCarrierOffsetDedicated_r14_dB1	= 0,
	RedirectedCarrierInfo_NB_v1430__redirectedCarrierOffsetDedicated_r14_dB2	= 1,
	RedirectedCarrierInfo_NB_v1430__redirectedCarrierOffsetDedicated_r14_dB3	= 2,
	RedirectedCarrierInfo_NB_v1430__redirectedCarrierOffsetDedicated_r14_dB4	= 3,
	RedirectedCarrierInfo_NB_v1430__redirectedCarrierOffsetDedicated_r14_dB5	= 4,
	RedirectedCarrierInfo_NB_v1430__redirectedCarrierOffsetDedicated_r14_dB6	= 5,
	RedirectedCarrierInfo_NB_v1430__redirectedCarrierOffsetDedicated_r14_dB8	= 6,
	RedirectedCarrierInfo_NB_v1430__redirectedCarrierOffsetDedicated_r14_dB10	= 7,
	RedirectedCarrierInfo_NB_v1430__redirectedCarrierOffsetDedicated_r14_dB12	= 8,
	RedirectedCarrierInfo_NB_v1430__redirectedCarrierOffsetDedicated_r14_dB14	= 9,
	RedirectedCarrierInfo_NB_v1430__redirectedCarrierOffsetDedicated_r14_dB16	= 10,
	RedirectedCarrierInfo_NB_v1430__redirectedCarrierOffsetDedicated_r14_dB18	= 11,
	RedirectedCarrierInfo_NB_v1430__redirectedCarrierOffsetDedicated_r14_dB20	= 12,
	RedirectedCarrierInfo_NB_v1430__redirectedCarrierOffsetDedicated_r14_dB22	= 13,
	RedirectedCarrierInfo_NB_v1430__redirectedCarrierOffsetDedicated_r14_dB24	= 14,
	RedirectedCarrierInfo_NB_v1430__redirectedCarrierOffsetDedicated_r14_dB26	= 15
} e_RedirectedCarrierInfo_NB_v1430__redirectedCarrierOffsetDedicated_r14;
typedef enum RedirectedCarrierInfo_NB_v1430__t322_r14 {
	RedirectedCarrierInfo_NB_v1430__t322_r14_min5	= 0,
	RedirectedCarrierInfo_NB_v1430__t322_r14_min10	= 1,
	RedirectedCarrierInfo_NB_v1430__t322_r14_min20	= 2,
	RedirectedCarrierInfo_NB_v1430__t322_r14_min30	= 3,
	RedirectedCarrierInfo_NB_v1430__t322_r14_min60	= 4,
	RedirectedCarrierInfo_NB_v1430__t322_r14_min120	= 5,
	RedirectedCarrierInfo_NB_v1430__t322_r14_min180	= 6,
	RedirectedCarrierInfo_NB_v1430__t322_r14_spare1	= 7
} e_RedirectedCarrierInfo_NB_v1430__t322_r14;

/* RedirectedCarrierInfo-NB-v1430 */
typedef struct RedirectedCarrierInfo_NB_v1430 {
	long	 redirectedCarrierOffsetDedicated_r14;
	long	 t322_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RedirectedCarrierInfo_NB_v1430_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_redirectedCarrierOffsetDedicated_r14_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_t322_r14_19;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RedirectedCarrierInfo_NB_v1430;
extern asn_SEQUENCE_specifics_t asn_SPC_RedirectedCarrierInfo_NB_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_RedirectedCarrierInfo_NB_v1430_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RedirectedCarrierInfo_NB_v1430_H_ */
#include "asn_internal.h"
