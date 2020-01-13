/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_RRCConnectionReconfiguration_v1510_IEs_H_
#define	_RRCConnectionReconfiguration_v1510_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "OCTET_STRING.h"
#include "NULL.h"
#include "BOOLEAN.h"
#include "P-Max.h"
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionReconfiguration_v1510_IEs__nr_Config_r15_PR {
	RRCConnectionReconfiguration_v1510_IEs__nr_Config_r15_PR_NOTHING,	/* No components present */
	RRCConnectionReconfiguration_v1510_IEs__nr_Config_r15_PR_release,
	RRCConnectionReconfiguration_v1510_IEs__nr_Config_r15_PR_setup
} RRCConnectionReconfiguration_v1510_IEs__nr_Config_r15_PR;

/* Forward declarations */
struct TDM_PatternConfig_r15;
struct RRCConnectionReconfiguration_v1530_IEs;

/* RRCConnectionReconfiguration-v1510-IEs */
typedef struct RRCConnectionReconfiguration_v1510_IEs {
	struct RRCConnectionReconfiguration_v1510_IEs__nr_Config_r15 {
		RRCConnectionReconfiguration_v1510_IEs__nr_Config_r15_PR present;
		union RRCConnectionReconfiguration_v1510_IEs__nr_Config_r15_u {
			NULL_t	 release;
			struct RRCConnectionReconfiguration_v1510_IEs__nr_Config_r15__setup {
				BOOLEAN_t	 endc_ReleaseAndAdd_r15;
				OCTET_STRING_t	*nr_SecondaryCellGroupConfig_r15;	/* OPTIONAL */
				P_Max_t	*p_MaxEUTRA_r15;	/* OPTIONAL */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nr_Config_r15;
	long	*sk_Counter_r15;	/* OPTIONAL */
	OCTET_STRING_t	*nr_RadioBearerConfig1_r15;	/* OPTIONAL */
	OCTET_STRING_t	*nr_RadioBearerConfig2_r15;	/* OPTIONAL */
	struct TDM_PatternConfig_r15	*tdm_PatternConfig_r15;	/* OPTIONAL */
	struct RRCConnectionReconfiguration_v1530_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReconfiguration_v1510_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReconfiguration_v1510_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReconfiguration_v1510_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionReconfiguration_v1510_IEs_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReconfiguration_v1510_IEs_H_ */
#include "asn_internal.h"
