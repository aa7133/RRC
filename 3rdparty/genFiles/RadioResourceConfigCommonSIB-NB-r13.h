/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_RadioResourceConfigCommonSIB_NB_r13_H_
#define	_RadioResourceConfigCommonSIB_NB_r13_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RACH-ConfigCommon-NB-r13.h"
#include "BCCH-Config-NB-r13.h"
#include "PCCH-Config-NB-r13.h"
#include "NPRACH-ConfigSIB-NB-r13.h"
#include "NPDSCH-ConfigCommon-NB-r13.h"
#include "NPUSCH-ConfigCommon-NB-r13.h"
#include "UplinkPowerControlCommon-NB-r13.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DL_GapConfig_NB_r13;
struct NPRACH_ConfigSIB_NB_v1330;
struct NPRACH_ConfigSIB_NB_v1450;
struct NPRACH_ConfigSIB_NB_v1530;
struct DL_GapConfig_NB_v1530;
struct WUS_Config_NB_r15;
struct NPRACH_ConfigSIB_NB_v1550;

/* RadioResourceConfigCommonSIB-NB-r13 */
typedef struct RadioResourceConfigCommonSIB_NB_r13 {
	RACH_ConfigCommon_NB_r13_t	 rach_ConfigCommon_r13;
	BCCH_Config_NB_r13_t	 bcch_Config_r13;
	PCCH_Config_NB_r13_t	 pcch_Config_r13;
	NPRACH_ConfigSIB_NB_r13_t	 nprach_Config_r13;
	NPDSCH_ConfigCommon_NB_r13_t	 npdsch_ConfigCommon_r13;
	NPUSCH_ConfigCommon_NB_r13_t	 npusch_ConfigCommon_r13;
	struct DL_GapConfig_NB_r13	*dl_Gap_r13;	/* OPTIONAL */
	UplinkPowerControlCommon_NB_r13_t	 uplinkPowerControlCommon_r13;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct RadioResourceConfigCommonSIB_NB_r13__ext1 {
		struct NPRACH_ConfigSIB_NB_v1330	*nprach_Config_v1330;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct RadioResourceConfigCommonSIB_NB_r13__ext2 {
		struct NPRACH_ConfigSIB_NB_v1450	*nprach_Config_v1450;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct RadioResourceConfigCommonSIB_NB_r13__ext3 {
		struct NPRACH_ConfigSIB_NB_v1530	*nprach_Config_v1530;	/* OPTIONAL */
		struct DL_GapConfig_NB_v1530	*dl_Gap_v1530;	/* OPTIONAL */
		struct WUS_Config_NB_r15	*wus_Config_r15;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct RadioResourceConfigCommonSIB_NB_r13__ext4 {
		struct NPRACH_ConfigSIB_NB_v1550	*nprach_Config_v1550;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioResourceConfigCommonSIB_NB_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigCommonSIB_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_RadioResourceConfigCommonSIB_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_RadioResourceConfigCommonSIB_NB_r13_1[12];

#ifdef __cplusplus
}
#endif

#endif	/* _RadioResourceConfigCommonSIB_NB_r13_H_ */
#include "asn_internal.h"
