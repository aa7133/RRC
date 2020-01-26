/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#include "UL-DCCH-MessageType.h"

#include "CSFBParametersRequestCDMA2000.h"
#include "MeasurementReport.h"
#include "RRCConnectionReconfigurationComplete.h"
#include "RRCConnectionReestablishmentComplete.h"
#include "RRCConnectionSetupComplete.h"
#include "SecurityModeComplete.h"
#include "SecurityModeFailure.h"
#include "UECapabilityInformation.h"
#include "ULHandoverPreparationTransfer.h"
#include "ULInformationTransfer.h"
#include "CounterCheckResponse.h"
#include "UEInformationResponse-r9.h"
#include "ProximityIndication-r9.h"
#include "RNReconfigurationComplete-r10.h"
#include "MBMSCountingResponse-r10.h"
#include "InterFreqRSTDMeasurementIndication-r10.h"
#include "UEAssistanceInformation-r11.h"
#include "InDeviceCoexIndication-r11.h"
#include "MBMSInterestIndication-r11.h"
#include "SCGFailureInformation-r12.h"
#include "SidelinkUEInformation-r12.h"
#include "WLANConnectionStatusReport-r13.h"
#include "RRCConnectionResumeComplete-r13.h"
#include "ULInformationTransferMRDC-r15.h"
#include "SCGFailureInformationNR-r15.h"
#include "MeasReportAppLayer-r15.h"
#include "FailureInformation-r15.h"
static asn_per_constraints_t asn_PER_type_c1_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_c2_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_messageClassExtension_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_UL_DCCH_MessageType_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_c1_2[] = {
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType__c1, choice.csfbParametersRequestCDMA2000),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSFBParametersRequestCDMA2000,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csfbParametersRequestCDMA2000"
		},
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType__c1, choice.measurementReport),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasurementReport,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measurementReport"
		},
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType__c1, choice.rrcConnectionReconfigurationComplete),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionReconfigurationComplete,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrcConnectionReconfigurationComplete"
		},
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType__c1, choice.rrcConnectionReestablishmentComplete),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionReestablishmentComplete,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrcConnectionReestablishmentComplete"
		},
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType__c1, choice.rrcConnectionSetupComplete),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionSetupComplete,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrcConnectionSetupComplete"
		},
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType__c1, choice.securityModeComplete),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SecurityModeComplete,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"securityModeComplete"
		},
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType__c1, choice.securityModeFailure),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SecurityModeFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"securityModeFailure"
		},
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType__c1, choice.ueCapabilityInformation),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UECapabilityInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ueCapabilityInformation"
		},
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType__c1, choice.ulHandoverPreparationTransfer),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ULHandoverPreparationTransfer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ulHandoverPreparationTransfer"
		},
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType__c1, choice.ulInformationTransfer),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ULInformationTransfer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ulInformationTransfer"
		},
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType__c1, choice.counterCheckResponse),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CounterCheckResponse,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"counterCheckResponse"
		},
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType__c1, choice.ueInformationResponse_r9),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UEInformationResponse_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ueInformationResponse-r9"
		},
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType__c1, choice.proximityIndication_r9),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProximityIndication_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"proximityIndication-r9"
		},
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType__c1, choice.rnReconfigurationComplete_r10),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RNReconfigurationComplete_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rnReconfigurationComplete-r10"
		},
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType__c1, choice.mbmsCountingResponse_r10),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMSCountingResponse_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbmsCountingResponse-r10"
		},
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType__c1, choice.interFreqRSTDMeasurementIndication_r10),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterFreqRSTDMeasurementIndication_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interFreqRSTDMeasurementIndication-r10"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_c1_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* csfbParametersRequestCDMA2000 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measurementReport */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rrcConnectionReconfigurationComplete */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rrcConnectionReestablishmentComplete */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* rrcConnectionSetupComplete */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* securityModeComplete */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* securityModeFailure */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* ueCapabilityInformation */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* ulHandoverPreparationTransfer */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* ulInformationTransfer */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* counterCheckResponse */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* ueInformationResponse-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* proximityIndication-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* rnReconfigurationComplete-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* mbmsCountingResponse-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 } /* interFreqRSTDMeasurementIndication-r10 */
};
static asn_CHOICE_specifics_t asn_SPC_c1_specs_2 = {
	sizeof(struct UL_DCCH_MessageType__c1),
	offsetof(struct UL_DCCH_MessageType__c1, _asn_ctx),
	offsetof(struct UL_DCCH_MessageType__c1, present),
	sizeof(((struct UL_DCCH_MessageType__c1 *)0)->present),
	asn_MAP_c1_tag2el_2,
	16,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_c1_2 = {
	"c1",
	"c1",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_c1_constr_2, CHOICE_constraint },
	asn_MBR_c1_2,
	16,	/* Elements count */
	&asn_SPC_c1_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_c2_20[] = {
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType__messageClassExtension__c2, choice.ueAssistanceInformation_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UEAssistanceInformation_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ueAssistanceInformation-r11"
		},
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType__messageClassExtension__c2, choice.inDeviceCoexIndication_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InDeviceCoexIndication_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"inDeviceCoexIndication-r11"
		},
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType__messageClassExtension__c2, choice.mbmsInterestIndication_r11),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMSInterestIndication_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbmsInterestIndication-r11"
		},
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType__messageClassExtension__c2, choice.scgFailureInformation_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCGFailureInformation_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"scgFailureInformation-r12"
		},
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType__messageClassExtension__c2, choice.sidelinkUEInformation_r12),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SidelinkUEInformation_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sidelinkUEInformation-r12"
		},
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType__messageClassExtension__c2, choice.wlanConnectionStatusReport_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WLANConnectionStatusReport_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"wlanConnectionStatusReport-r13"
		},
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType__messageClassExtension__c2, choice.rrcConnectionResumeComplete_r13),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionResumeComplete_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrcConnectionResumeComplete-r13"
		},
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType__messageClassExtension__c2, choice.ulInformationTransferMRDC_r15),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ULInformationTransferMRDC_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ulInformationTransferMRDC-r15"
		},
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType__messageClassExtension__c2, choice.scgFailureInformationNR_r15),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCGFailureInformationNR_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"scgFailureInformationNR-r15"
		},
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType__messageClassExtension__c2, choice.measReportAppLayer_r15),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasReportAppLayer_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measReportAppLayer-r15"
		},
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType__messageClassExtension__c2, choice.failureInformation_r15),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FailureInformation_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"failureInformation-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType__messageClassExtension__c2, choice.spare5),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spare5"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType__messageClassExtension__c2, choice.spare4),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spare4"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType__messageClassExtension__c2, choice.spare3),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spare3"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType__messageClassExtension__c2, choice.spare2),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spare2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType__messageClassExtension__c2, choice.spare1),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spare1"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_c2_tag2el_20[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ueAssistanceInformation-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* inDeviceCoexIndication-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* mbmsInterestIndication-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* scgFailureInformation-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sidelinkUEInformation-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* wlanConnectionStatusReport-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* rrcConnectionResumeComplete-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* ulInformationTransferMRDC-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* scgFailureInformationNR-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* measReportAppLayer-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* failureInformation-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* spare5 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* spare4 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* spare3 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* spare2 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 } /* spare1 */
};
static asn_CHOICE_specifics_t asn_SPC_c2_specs_20 = {
	sizeof(struct UL_DCCH_MessageType__messageClassExtension__c2),
	offsetof(struct UL_DCCH_MessageType__messageClassExtension__c2, _asn_ctx),
	offsetof(struct UL_DCCH_MessageType__messageClassExtension__c2, present),
	sizeof(((struct UL_DCCH_MessageType__messageClassExtension__c2 *)0)->present),
	asn_MAP_c2_tag2el_20,
	16,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_c2_20 = {
	"c2",
	"c2",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_c2_constr_20, CHOICE_constraint },
	asn_MBR_c2_20,
	16,	/* Elements count */
	&asn_SPC_c2_specs_20	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_messageClassExtensionFuture_r11_tags_37[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_messageClassExtensionFuture_r11_specs_37 = {
	sizeof(struct UL_DCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r11),
	offsetof(struct UL_DCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r11, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_messageClassExtensionFuture_r11_37 = {
	"messageClassExtensionFuture-r11",
	"messageClassExtensionFuture-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_messageClassExtensionFuture_r11_tags_37,
	sizeof(asn_DEF_messageClassExtensionFuture_r11_tags_37)
		/sizeof(asn_DEF_messageClassExtensionFuture_r11_tags_37[0]) - 1, /* 1 */
	asn_DEF_messageClassExtensionFuture_r11_tags_37,	/* Same as above */
	sizeof(asn_DEF_messageClassExtensionFuture_r11_tags_37)
		/sizeof(asn_DEF_messageClassExtensionFuture_r11_tags_37[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_messageClassExtensionFuture_r11_specs_37	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_messageClassExtension_19[] = {
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType__messageClassExtension, choice.c2),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_c2_20,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"c2"
		},
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType__messageClassExtension, choice.messageClassExtensionFuture_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_messageClassExtensionFuture_r11_37,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"messageClassExtensionFuture-r11"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_messageClassExtension_tag2el_19[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* c2 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* messageClassExtensionFuture-r11 */
};
static asn_CHOICE_specifics_t asn_SPC_messageClassExtension_specs_19 = {
	sizeof(struct UL_DCCH_MessageType__messageClassExtension),
	offsetof(struct UL_DCCH_MessageType__messageClassExtension, _asn_ctx),
	offsetof(struct UL_DCCH_MessageType__messageClassExtension, present),
	sizeof(((struct UL_DCCH_MessageType__messageClassExtension *)0)->present),
	asn_MAP_messageClassExtension_tag2el_19,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_messageClassExtension_19 = {
	"messageClassExtension",
	"messageClassExtension",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_messageClassExtension_constr_19, CHOICE_constraint },
	asn_MBR_messageClassExtension_19,
	2,	/* Elements count */
	&asn_SPC_messageClassExtension_specs_19	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UL_DCCH_MessageType_1[] = {
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType, choice.c1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_c1_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"c1"
		},
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType, choice.messageClassExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_messageClassExtension_19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"messageClassExtension"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_UL_DCCH_MessageType_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* c1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* messageClassExtension */
};
asn_CHOICE_specifics_t asn_SPC_UL_DCCH_MessageType_specs_1 = {
	sizeof(struct UL_DCCH_MessageType),
	offsetof(struct UL_DCCH_MessageType, _asn_ctx),
	offsetof(struct UL_DCCH_MessageType, present),
	sizeof(((struct UL_DCCH_MessageType *)0)->present),
	asn_MAP_UL_DCCH_MessageType_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_UL_DCCH_MessageType = {
	"UL-DCCH-MessageType",
	"UL-DCCH-MessageType",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_UL_DCCH_MessageType_constr_1, CHOICE_constraint },
	asn_MBR_UL_DCCH_MessageType_1,
	2,	/* Elements count */
	&asn_SPC_UL_DCCH_MessageType_specs_1	/* Additional specs */
};

