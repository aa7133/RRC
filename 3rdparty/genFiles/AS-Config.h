/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_AS_Config_H_
#define	_AS_Config_H_


#include "asn_application.h"

/* Including external dependencies */
#include "MeasConfig.h"
#include "RadioResourceConfigDedicated.h"
#include "SecurityAlgorithmConfig.h"
#include "C-RNTI.h"
#include "MasterInformationBlock.h"
#include "SystemInformationBlockType1.h"
#include "SystemInformationBlockType2.h"
#include "AntennaInfoCommon.h"
#include "ARFCN-ValueEUTRA.h"
#include "OCTET_STRING.h"
#include "OtherConfig-r9.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SCellToAddModList_r10;
struct SCG_Config_r12;
struct AS_ConfigNR_r15;
struct AS_Config_v1550;

/* AS-Config */
typedef struct AS_Config {
	MeasConfig_t	 sourceMeasConfig;
	RadioResourceConfigDedicated_t	 sourceRadioResourceConfig;
	SecurityAlgorithmConfig_t	 sourceSecurityAlgorithmConfig;
	C_RNTI_t	 sourceUE_Identity;
	MasterInformationBlock_t	 sourceMasterInformationBlock;
	SystemInformationBlockType1_t	 sourceSystemInformationBlockType1;
	SystemInformationBlockType2_t	 sourceSystemInformationBlockType2;
	AntennaInfoCommon_t	 antennaInfoCommon;
	ARFCN_ValueEUTRA_t	 sourceDl_CarrierFreq;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct AS_Config__ext1 {
		OCTET_STRING_t	*sourceSystemInformationBlockType1Ext;	/* OPTIONAL */
		OtherConfig_r9_t	 sourceOtherConfig_r9;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct AS_Config__ext2 {
		struct SCellToAddModList_r10	*sourceSCellConfigList_r10;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct AS_Config__ext3 {
		struct SCG_Config_r12	*sourceConfigSCG_r12;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct AS_Config__ext4 {
		struct AS_ConfigNR_r15	*as_ConfigNR_r15;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	struct AS_Config__ext5 {
		struct AS_Config_v1550	*as_Config_v1550;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext5;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AS_Config_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AS_Config;
extern asn_SEQUENCE_specifics_t asn_SPC_AS_Config_specs_1;
extern asn_TYPE_member_t asn_MBR_AS_Config_1[14];

#ifdef __cplusplus
}
#endif

#endif	/* _AS_Config_H_ */
#include "asn_internal.h"
