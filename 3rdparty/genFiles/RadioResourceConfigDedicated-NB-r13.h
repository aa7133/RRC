/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_RadioResourceConfigDedicated_NB_r13_H_
#define	_RadioResourceConfigDedicated_NB_r13_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NULL.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RadioResourceConfigDedicated_NB_r13__mac_MainConfig_r13_PR {
	RadioResourceConfigDedicated_NB_r13__mac_MainConfig_r13_PR_NOTHING,	/* No components present */
	RadioResourceConfigDedicated_NB_r13__mac_MainConfig_r13_PR_explicitValue_r13,
	RadioResourceConfigDedicated_NB_r13__mac_MainConfig_r13_PR_defaultValue_r13
} RadioResourceConfigDedicated_NB_r13__mac_MainConfig_r13_PR;

/* Forward declarations */
struct SRB_ToAddModList_NB_r13;
struct DRB_ToAddModList_NB_r13;
struct DRB_ToReleaseList_NB_r13;
struct PhysicalConfigDedicated_NB_r13;
struct RLF_TimersAndConstants_NB_r13;
struct MAC_MainConfig_NB_r13;
struct SchedulingRequestConfig_NB_r15;

/* RadioResourceConfigDedicated-NB-r13 */
typedef struct RadioResourceConfigDedicated_NB_r13 {
	struct SRB_ToAddModList_NB_r13	*srb_ToAddModList_r13;	/* OPTIONAL */
	struct DRB_ToAddModList_NB_r13	*drb_ToAddModList_r13;	/* OPTIONAL */
	struct DRB_ToReleaseList_NB_r13	*drb_ToReleaseList_r13;	/* OPTIONAL */
	struct RadioResourceConfigDedicated_NB_r13__mac_MainConfig_r13 {
		RadioResourceConfigDedicated_NB_r13__mac_MainConfig_r13_PR present;
		union RadioResourceConfigDedicated_NB_r13__mac_MainConfig_r13_u {
			struct MAC_MainConfig_NB_r13	*explicitValue_r13;
			NULL_t	 defaultValue_r13;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *mac_MainConfig_r13;
	struct PhysicalConfigDedicated_NB_r13	*physicalConfigDedicated_r13;	/* OPTIONAL */
	struct RLF_TimersAndConstants_NB_r13	*rlf_TimersAndConstants_r13;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct RadioResourceConfigDedicated_NB_r13__ext1 {
		struct SchedulingRequestConfig_NB_r15	*schedulingRequestConfig_r15;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioResourceConfigDedicated_NB_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigDedicated_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_RadioResourceConfigDedicated_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_RadioResourceConfigDedicated_NB_r13_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _RadioResourceConfigDedicated_NB_r13_H_ */
#include "asn_internal.h"
