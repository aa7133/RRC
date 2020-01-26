/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#include "UL-DCCH-MessageType-NB.h"

#include "RRCConnectionReconfigurationComplete-NB.h"
#include "RRCConnectionReestablishmentComplete-NB.h"
#include "RRCConnectionSetupComplete-NB.h"
#include "SecurityModeComplete.h"
#include "SecurityModeFailure.h"
#include "UECapabilityInformation-NB.h"
#include "ULInformationTransfer-NB.h"
#include "RRCConnectionResumeComplete-NB.h"
static asn_per_constraints_t asn_PER_type_c1_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_UL_DCCH_MessageType_NB_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_c1_2[] = {
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType_NB__c1, choice.rrcConnectionReconfigurationComplete_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionReconfigurationComplete_NB,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrcConnectionReconfigurationComplete-r13"
		},
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType_NB__c1, choice.rrcConnectionReestablishmentComplete_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionReestablishmentComplete_NB,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrcConnectionReestablishmentComplete-r13"
		},
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType_NB__c1, choice.rrcConnectionSetupComplete_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionSetupComplete_NB,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrcConnectionSetupComplete-r13"
		},
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType_NB__c1, choice.securityModeComplete_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SecurityModeComplete,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"securityModeComplete-r13"
		},
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType_NB__c1, choice.securityModeFailure_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SecurityModeFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"securityModeFailure-r13"
		},
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType_NB__c1, choice.ueCapabilityInformation_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UECapabilityInformation_NB,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ueCapabilityInformation-r13"
		},
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType_NB__c1, choice.ulInformationTransfer_r13),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ULInformationTransfer_NB,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ulInformationTransfer-r13"
		},
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType_NB__c1, choice.rrcConnectionResumeComplete_r13),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionResumeComplete_NB,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrcConnectionResumeComplete-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType_NB__c1, choice.spare8),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spare8"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType_NB__c1, choice.spare7),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spare7"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType_NB__c1, choice.spare6),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spare6"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType_NB__c1, choice.spare5),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spare5"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType_NB__c1, choice.spare4),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spare4"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType_NB__c1, choice.spare3),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spare3"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType_NB__c1, choice.spare2),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spare2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DCCH_MessageType_NB__c1, choice.spare1),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spare1"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_c1_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrcConnectionReconfigurationComplete-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rrcConnectionReestablishmentComplete-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rrcConnectionSetupComplete-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* securityModeComplete-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* securityModeFailure-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ueCapabilityInformation-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* ulInformationTransfer-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* rrcConnectionResumeComplete-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* spare8 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* spare7 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* spare6 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* spare5 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* spare4 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* spare3 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* spare2 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 } /* spare1 */
};
static asn_CHOICE_specifics_t asn_SPC_c1_specs_2 = {
	sizeof(struct UL_DCCH_MessageType_NB__c1),
	offsetof(struct UL_DCCH_MessageType_NB__c1, _asn_ctx),
	offsetof(struct UL_DCCH_MessageType_NB__c1, present),
	sizeof(((struct UL_DCCH_MessageType_NB__c1 *)0)->present),
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

static const ber_tlv_tag_t asn_DEF_messageClassExtension_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_messageClassExtension_specs_19 = {
	sizeof(struct UL_DCCH_MessageType_NB__messageClassExtension),
	offsetof(struct UL_DCCH_MessageType_NB__messageClassExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_messageClassExtension_19 = {
	"messageClassExtension",
	"messageClassExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_messageClassExtension_tags_19,
	sizeof(asn_DEF_messageClassExtension_tags_19)
		/sizeof(asn_DEF_messageClassExtension_tags_19[0]) - 1, /* 1 */
	asn_DEF_messageClassExtension_tags_19,	/* Same as above */
	sizeof(asn_DEF_messageClassExtension_tags_19)
		/sizeof(asn_DEF_messageClassExtension_tags_19[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_messageClassExtension_specs_19	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UL_DCCH_MessageType_NB_1[] = {
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType_NB, choice.c1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_c1_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"c1"
		},
	{ ATF_POINTER, 0, offsetof(struct UL_DCCH_MessageType_NB, choice.messageClassExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_messageClassExtension_19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"messageClassExtension"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_UL_DCCH_MessageType_NB_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* c1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* messageClassExtension */
};
asn_CHOICE_specifics_t asn_SPC_UL_DCCH_MessageType_NB_specs_1 = {
	sizeof(struct UL_DCCH_MessageType_NB),
	offsetof(struct UL_DCCH_MessageType_NB, _asn_ctx),
	offsetof(struct UL_DCCH_MessageType_NB, present),
	sizeof(((struct UL_DCCH_MessageType_NB *)0)->present),
	asn_MAP_UL_DCCH_MessageType_NB_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_UL_DCCH_MessageType_NB = {
	"UL-DCCH-MessageType-NB",
	"UL-DCCH-MessageType-NB",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_UL_DCCH_MessageType_NB_constr_1, CHOICE_constraint },
	asn_MBR_UL_DCCH_MessageType_NB_1,
	2,	/* Elements count */
	&asn_SPC_UL_DCCH_MessageType_NB_specs_1	/* Additional specs */
};

