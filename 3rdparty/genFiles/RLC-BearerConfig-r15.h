/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_RLC_BearerConfig_r15_H_
#define	_RLC_BearerConfig_r15_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NULL.h"
#include "NativeInteger.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RLC_BearerConfig_r15_PR {
	RLC_BearerConfig_r15_PR_NOTHING,	/* No components present */
	RLC_BearerConfig_r15_PR_release,
	RLC_BearerConfig_r15_PR_setup
} RLC_BearerConfig_r15_PR;
typedef enum RLC_BearerConfig_r15__setup__logicalChannelIdentityConfig_r15_PR {
	RLC_BearerConfig_r15__setup__logicalChannelIdentityConfig_r15_PR_NOTHING,	/* No components present */
	RLC_BearerConfig_r15__setup__logicalChannelIdentityConfig_r15_PR_logicalChannelIdentity_r15,
	RLC_BearerConfig_r15__setup__logicalChannelIdentityConfig_r15_PR_logicalChannelIdentityExt_r15
} RLC_BearerConfig_r15__setup__logicalChannelIdentityConfig_r15_PR;

/* Forward declarations */
struct RLC_Config_r15;
struct LogicalChannelConfig;

/* RLC-BearerConfig-r15 */
typedef struct RLC_BearerConfig_r15 {
	RLC_BearerConfig_r15_PR present;
	union RLC_BearerConfig_r15_u {
		NULL_t	 release;
		struct RLC_BearerConfig_r15__setup {
			struct RLC_Config_r15	*rlc_Config_r15;	/* OPTIONAL */
			struct RLC_BearerConfig_r15__setup__logicalChannelIdentityConfig_r15 {
				RLC_BearerConfig_r15__setup__logicalChannelIdentityConfig_r15_PR present;
				union RLC_BearerConfig_r15__setup__logicalChannelIdentityConfig_r15_u {
					long	 logicalChannelIdentity_r15;
					long	 logicalChannelIdentityExt_r15;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} logicalChannelIdentityConfig_r15;
			struct LogicalChannelConfig	*logicalChannelConfig_r15;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RLC_BearerConfig_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RLC_BearerConfig_r15;
extern asn_CHOICE_specifics_t asn_SPC_RLC_BearerConfig_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_RLC_BearerConfig_r15_1[2];
extern asn_per_constraints_t asn_PER_type_RLC_BearerConfig_r15_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _RLC_BearerConfig_r15_H_ */
#include "asn_internal.h"
