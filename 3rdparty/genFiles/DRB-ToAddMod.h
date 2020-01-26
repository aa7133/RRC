/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_DRB_ToAddMod_H_
#define	_DRB_ToAddMod_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "DRB-Identity.h"
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"
#include "BOOLEAN.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DRB_ToAddMod__ext1__drb_TypeChange_r12 {
	DRB_ToAddMod__ext1__drb_TypeChange_r12_toMCG	= 0
} e_DRB_ToAddMod__ext1__drb_TypeChange_r12;
typedef enum DRB_ToAddMod__ext2__drb_TypeLWIP_r13 {
	DRB_ToAddMod__ext2__drb_TypeLWIP_r13_lwip	= 0,
	DRB_ToAddMod__ext2__drb_TypeLWIP_r13_lwip_DL_only	= 1,
	DRB_ToAddMod__ext2__drb_TypeLWIP_r13_lwip_UL_only	= 2,
	DRB_ToAddMod__ext2__drb_TypeLWIP_r13_eutran	= 3
} e_DRB_ToAddMod__ext2__drb_TypeLWIP_r13;
typedef enum DRB_ToAddMod__ext3__lwa_WLAN_AC_r14 {
	DRB_ToAddMod__ext3__lwa_WLAN_AC_r14_ac_bk	= 0,
	DRB_ToAddMod__ext3__lwa_WLAN_AC_r14_ac_be	= 1,
	DRB_ToAddMod__ext3__lwa_WLAN_AC_r14_ac_vi	= 2,
	DRB_ToAddMod__ext3__lwa_WLAN_AC_r14_ac_vo	= 3
} e_DRB_ToAddMod__ext3__lwa_WLAN_AC_r14;

/* Forward declarations */
struct PDCP_Config;
struct RLC_Config;
struct LogicalChannelConfig;
struct RLC_Config_v1250;
struct RLC_Config_v1310;
struct RLC_Config_v1430;
struct RLC_Config_v1510;
struct RLC_Config_v1530;
struct RLC_BearerConfig_r15;

/* DRB-ToAddMod */
typedef struct DRB_ToAddMod {
	long	*eps_BearerIdentity;	/* OPTIONAL */
	DRB_Identity_t	 drb_Identity;
	struct PDCP_Config	*pdcp_Config;	/* OPTIONAL */
	struct RLC_Config	*rlc_Config;	/* OPTIONAL */
	long	*logicalChannelIdentity;	/* OPTIONAL */
	struct LogicalChannelConfig	*logicalChannelConfig;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct DRB_ToAddMod__ext1 {
		long	*drb_TypeChange_r12;	/* OPTIONAL */
		struct RLC_Config_v1250	*rlc_Config_v1250;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct DRB_ToAddMod__ext2 {
		struct RLC_Config_v1310	*rlc_Config_v1310;	/* OPTIONAL */
		BOOLEAN_t	*drb_TypeLWA_r13;	/* OPTIONAL */
		long	*drb_TypeLWIP_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct DRB_ToAddMod__ext3 {
		struct RLC_Config_v1430	*rlc_Config_v1430;	/* OPTIONAL */
		BOOLEAN_t	*lwip_UL_Aggregation_r14;	/* OPTIONAL */
		BOOLEAN_t	*lwip_DL_Aggregation_r14;	/* OPTIONAL */
		long	*lwa_WLAN_AC_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct DRB_ToAddMod__ext4 {
		struct RLC_Config_v1510	*rlc_Config_v1510;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	struct DRB_ToAddMod__ext5 {
		struct RLC_Config_v1530	*rlc_Config_v1530;	/* OPTIONAL */
		struct RLC_BearerConfig_r15	*rlc_BearerConfigSecondary_r15;	/* OPTIONAL */
		long	*logicalChannelIdentity_r15;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext5;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DRB_ToAddMod_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_drb_TypeChange_r12_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_drb_TypeLWIP_r13_16;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_lwa_WLAN_AC_r14_25;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_DRB_ToAddMod;
extern asn_SEQUENCE_specifics_t asn_SPC_DRB_ToAddMod_specs_1;
extern asn_TYPE_member_t asn_MBR_DRB_ToAddMod_1[11];

#ifdef __cplusplus
}
#endif

#endif	/* _DRB_ToAddMod_H_ */
#include "asn_internal.h"
