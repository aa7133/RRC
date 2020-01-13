/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_UE_Capability_NB_Ext_r14_IEs_H_
#define	_UE_Capability_NB_Ext_r14_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "RF-Parameters-NB-v1430.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_Capability_NB_Ext_r14_IEs__ue_Category_NB_r14 {
	UE_Capability_NB_Ext_r14_IEs__ue_Category_NB_r14_nb2	= 0
} e_UE_Capability_NB_Ext_r14_IEs__ue_Category_NB_r14;

/* Forward declarations */
struct MAC_Parameters_NB_r14;
struct PhyLayerParameters_NB_v1430;
struct UE_Capability_NB_v1440_IEs;

/* UE-Capability-NB-Ext-r14-IEs */
typedef struct UE_Capability_NB_Ext_r14_IEs {
	long	*ue_Category_NB_r14;	/* OPTIONAL */
	struct MAC_Parameters_NB_r14	*mac_Parameters_r14;	/* OPTIONAL */
	struct PhyLayerParameters_NB_v1430	*phyLayerParameters_v1430;	/* OPTIONAL */
	RF_Parameters_NB_v1430_t	 rf_Parameters_v1430;
	struct UE_Capability_NB_v1440_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Capability_NB_Ext_r14_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ue_Category_NB_r14_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UE_Capability_NB_Ext_r14_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_Capability_NB_Ext_r14_IEs_H_ */
#include "asn_internal.h"
