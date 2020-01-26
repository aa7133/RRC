/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_RRCConnectionSetupComplete_v1530_IEs_H_
#define	_RRCConnectionSetupComplete_v1530_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "NG-5G-S-TMSI-r15.h"
#include "BIT_STRING.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionSetupComplete_v1530_IEs__logMeasAvailableBT_r15 {
	RRCConnectionSetupComplete_v1530_IEs__logMeasAvailableBT_r15_true	= 0
} e_RRCConnectionSetupComplete_v1530_IEs__logMeasAvailableBT_r15;
typedef enum RRCConnectionSetupComplete_v1530_IEs__logMeasAvailableWLAN_r15 {
	RRCConnectionSetupComplete_v1530_IEs__logMeasAvailableWLAN_r15_true	= 0
} e_RRCConnectionSetupComplete_v1530_IEs__logMeasAvailableWLAN_r15;
typedef enum RRCConnectionSetupComplete_v1530_IEs__idleMeasAvailable_r15 {
	RRCConnectionSetupComplete_v1530_IEs__idleMeasAvailable_r15_true	= 0
} e_RRCConnectionSetupComplete_v1530_IEs__idleMeasAvailable_r15;
typedef enum RRCConnectionSetupComplete_v1530_IEs__flightPathInfoAvailable_r15 {
	RRCConnectionSetupComplete_v1530_IEs__flightPathInfoAvailable_r15_true	= 0
} e_RRCConnectionSetupComplete_v1530_IEs__flightPathInfoAvailable_r15;
typedef enum RRCConnectionSetupComplete_v1530_IEs__connectTo5GC_r15 {
	RRCConnectionSetupComplete_v1530_IEs__connectTo5GC_r15_true	= 0
} e_RRCConnectionSetupComplete_v1530_IEs__connectTo5GC_r15;
typedef enum RRCConnectionSetupComplete_v1530_IEs__ng_5G_S_TMSI_Bits_r15_PR {
	RRCConnectionSetupComplete_v1530_IEs__ng_5G_S_TMSI_Bits_r15_PR_NOTHING,	/* No components present */
	RRCConnectionSetupComplete_v1530_IEs__ng_5G_S_TMSI_Bits_r15_PR_ng_5G_S_TMSI_r15,
	RRCConnectionSetupComplete_v1530_IEs__ng_5G_S_TMSI_Bits_r15_PR_ng_5G_S_TMSI_Part2_r15
} RRCConnectionSetupComplete_v1530_IEs__ng_5G_S_TMSI_Bits_r15_PR;

/* Forward declarations */
struct RegisteredAMF_r15;
struct RRCConnectionSetupComplete_v1540_IEs;
struct S_NSSAI_r15;

/* RRCConnectionSetupComplete-v1530-IEs */
typedef struct RRCConnectionSetupComplete_v1530_IEs {
	long	*logMeasAvailableBT_r15;	/* OPTIONAL */
	long	*logMeasAvailableWLAN_r15;	/* OPTIONAL */
	long	*idleMeasAvailable_r15;	/* OPTIONAL */
	long	*flightPathInfoAvailable_r15;	/* OPTIONAL */
	long	*connectTo5GC_r15;	/* OPTIONAL */
	struct RegisteredAMF_r15	*registeredAMF_r15;	/* OPTIONAL */
	struct RRCConnectionSetupComplete_v1530_IEs__s_NSSAI_list_r15 {
		A_SEQUENCE_OF(struct S_NSSAI_r15) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *s_NSSAI_list_r15;
	struct RRCConnectionSetupComplete_v1530_IEs__ng_5G_S_TMSI_Bits_r15 {
		RRCConnectionSetupComplete_v1530_IEs__ng_5G_S_TMSI_Bits_r15_PR present;
		union RRCConnectionSetupComplete_v1530_IEs__ng_5G_S_TMSI_Bits_r15_u {
			NG_5G_S_TMSI_r15_t	 ng_5G_S_TMSI_r15;
			BIT_STRING_t	 ng_5G_S_TMSI_Part2_r15;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ng_5G_S_TMSI_Bits_r15;
	struct RRCConnectionSetupComplete_v1540_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionSetupComplete_v1530_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_logMeasAvailableBT_r15_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_logMeasAvailableWLAN_r15_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_idleMeasAvailable_r15_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_flightPathInfoAvailable_r15_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_connectTo5GC_r15_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionSetupComplete_v1530_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionSetupComplete_v1530_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionSetupComplete_v1530_IEs_1[9];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionSetupComplete_v1530_IEs_H_ */
#include "asn_internal.h"
