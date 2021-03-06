/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_MasterInformationBlock_NB_H_
#define	_MasterInformationBlock_NB_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BIT_STRING.h"
#include "NativeInteger.h"
#include "BOOLEAN.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MasterInformationBlock_NB__operationModeInfo_r13_PR {
	MasterInformationBlock_NB__operationModeInfo_r13_PR_NOTHING,	/* No components present */
	MasterInformationBlock_NB__operationModeInfo_r13_PR_inband_SamePCI_r13,
	MasterInformationBlock_NB__operationModeInfo_r13_PR_inband_DifferentPCI_r13,
	MasterInformationBlock_NB__operationModeInfo_r13_PR_guardband_r13,
	MasterInformationBlock_NB__operationModeInfo_r13_PR_standalone_r13
} MasterInformationBlock_NB__operationModeInfo_r13_PR;

/* Forward declarations */
struct Inband_SamePCI_NB_r13;
struct Inband_DifferentPCI_NB_r13;
struct Guardband_NB_r13;
struct Standalone_NB_r13;

/* MasterInformationBlock-NB */
typedef struct MasterInformationBlock_NB {
	BIT_STRING_t	 systemFrameNumber_MSB_r13;
	BIT_STRING_t	 hyperSFN_LSB_r13;
	long	 schedulingInfoSIB1_r13;
	long	 systemInfoValueTag_r13;
	BOOLEAN_t	 ab_Enabled_r13;
	struct MasterInformationBlock_NB__operationModeInfo_r13 {
		MasterInformationBlock_NB__operationModeInfo_r13_PR present;
		union MasterInformationBlock_NB__operationModeInfo_r13_u {
			struct Inband_SamePCI_NB_r13	*inband_SamePCI_r13;
			struct Inband_DifferentPCI_NB_r13	*inband_DifferentPCI_r13;
			struct Guardband_NB_r13	*guardband_r13;
			struct Standalone_NB_r13	*standalone_r13;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} operationModeInfo_r13;
	BOOLEAN_t	 additionalTransmissionSIB1_r15;
	BIT_STRING_t	 spare;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MasterInformationBlock_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MasterInformationBlock_NB;
extern asn_SEQUENCE_specifics_t asn_SPC_MasterInformationBlock_NB_specs_1;
extern asn_TYPE_member_t asn_MBR_MasterInformationBlock_NB_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _MasterInformationBlock_NB_H_ */
#include "asn_internal.h"
