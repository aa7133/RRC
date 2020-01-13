/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_AntennaInfoDedicated_v920_H_
#define	_AntennaInfoDedicated_v920_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BIT_STRING.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AntennaInfoDedicated_v920__codebookSubsetRestriction_v920_PR {
	AntennaInfoDedicated_v920__codebookSubsetRestriction_v920_PR_NOTHING,	/* No components present */
	AntennaInfoDedicated_v920__codebookSubsetRestriction_v920_PR_n2TxAntenna_tm8_r9,
	AntennaInfoDedicated_v920__codebookSubsetRestriction_v920_PR_n4TxAntenna_tm8_r9
} AntennaInfoDedicated_v920__codebookSubsetRestriction_v920_PR;

/* AntennaInfoDedicated-v920 */
typedef struct AntennaInfoDedicated_v920 {
	struct AntennaInfoDedicated_v920__codebookSubsetRestriction_v920 {
		AntennaInfoDedicated_v920__codebookSubsetRestriction_v920_PR present;
		union AntennaInfoDedicated_v920__codebookSubsetRestriction_v920_u {
			BIT_STRING_t	 n2TxAntenna_tm8_r9;
			BIT_STRING_t	 n4TxAntenna_tm8_r9;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *codebookSubsetRestriction_v920;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AntennaInfoDedicated_v920_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AntennaInfoDedicated_v920;
extern asn_SEQUENCE_specifics_t asn_SPC_AntennaInfoDedicated_v920_specs_1;
extern asn_TYPE_member_t asn_MBR_AntennaInfoDedicated_v920_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _AntennaInfoDedicated_v920_H_ */
#include "asn_internal.h"
