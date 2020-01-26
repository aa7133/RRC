/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_SecurityConfigHO_H_
#define	_SecurityConfigHO_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BOOLEAN.h"
#include "NextHopChainingCount.h"
#include "constr_SEQUENCE.h"
#include "SecurityAlgorithmConfig.h"
#include "OCTET_STRING.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SecurityConfigHO__handoverType_PR {
	SecurityConfigHO__handoverType_PR_NOTHING,	/* No components present */
	SecurityConfigHO__handoverType_PR_intraLTE,
	SecurityConfigHO__handoverType_PR_interRAT
} SecurityConfigHO__handoverType_PR;

/* Forward declarations */
struct SecurityAlgorithmConfig;

/* SecurityConfigHO */
typedef struct SecurityConfigHO {
	struct SecurityConfigHO__handoverType {
		SecurityConfigHO__handoverType_PR present;
		union SecurityConfigHO__handoverType_u {
			struct SecurityConfigHO__handoverType__intraLTE {
				struct SecurityAlgorithmConfig	*securityAlgorithmConfig;	/* OPTIONAL */
				BOOLEAN_t	 keyChangeIndicator;
				NextHopChainingCount_t	 nextHopChainingCount;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *intraLTE;
			struct SecurityConfigHO__handoverType__interRAT {
				SecurityAlgorithmConfig_t	 securityAlgorithmConfig;
				OCTET_STRING_t	 nas_SecurityParamToEUTRA;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *interRAT;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} handoverType;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SecurityConfigHO_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SecurityConfigHO;
extern asn_SEQUENCE_specifics_t asn_SPC_SecurityConfigHO_specs_1;
extern asn_TYPE_member_t asn_MBR_SecurityConfigHO_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _SecurityConfigHO_H_ */
#include "asn_internal.h"
