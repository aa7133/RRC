/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#include "DLInformationTransfer-r8-IEs.h"

#include "DLInformationTransfer-v8a0-IEs.h"
static asn_per_constraints_t asn_PER_type_dedicatedInfoType_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_dedicatedInfoType_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DLInformationTransfer_r8_IEs__dedicatedInfoType, choice.dedicatedInfoNAS),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DedicatedInfoNAS,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dedicatedInfoNAS"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DLInformationTransfer_r8_IEs__dedicatedInfoType, choice.dedicatedInfoCDMA2000_1XRTT),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DedicatedInfoCDMA2000,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dedicatedInfoCDMA2000-1XRTT"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DLInformationTransfer_r8_IEs__dedicatedInfoType, choice.dedicatedInfoCDMA2000_HRPD),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DedicatedInfoCDMA2000,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dedicatedInfoCDMA2000-HRPD"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_dedicatedInfoType_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dedicatedInfoNAS */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dedicatedInfoCDMA2000-1XRTT */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* dedicatedInfoCDMA2000-HRPD */
};
static asn_CHOICE_specifics_t asn_SPC_dedicatedInfoType_specs_2 = {
	sizeof(struct DLInformationTransfer_r8_IEs__dedicatedInfoType),
	offsetof(struct DLInformationTransfer_r8_IEs__dedicatedInfoType, _asn_ctx),
	offsetof(struct DLInformationTransfer_r8_IEs__dedicatedInfoType, present),
	sizeof(((struct DLInformationTransfer_r8_IEs__dedicatedInfoType *)0)->present),
	asn_MAP_dedicatedInfoType_tag2el_2,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dedicatedInfoType_2 = {
	"dedicatedInfoType",
	"dedicatedInfoType",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_dedicatedInfoType_constr_2, CHOICE_constraint },
	asn_MBR_dedicatedInfoType_2,
	3,	/* Elements count */
	&asn_SPC_dedicatedInfoType_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_DLInformationTransfer_r8_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DLInformationTransfer_r8_IEs, dedicatedInfoType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_dedicatedInfoType_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dedicatedInfoType"
		},
	{ ATF_POINTER, 1, offsetof(struct DLInformationTransfer_r8_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DLInformationTransfer_v8a0_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_DLInformationTransfer_r8_IEs_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_DLInformationTransfer_r8_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DLInformationTransfer_r8_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dedicatedInfoType */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_DLInformationTransfer_r8_IEs_specs_1 = {
	sizeof(struct DLInformationTransfer_r8_IEs),
	offsetof(struct DLInformationTransfer_r8_IEs, _asn_ctx),
	asn_MAP_DLInformationTransfer_r8_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_DLInformationTransfer_r8_IEs_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DLInformationTransfer_r8_IEs = {
	"DLInformationTransfer-r8-IEs",
	"DLInformationTransfer-r8-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_DLInformationTransfer_r8_IEs_tags_1,
	sizeof(asn_DEF_DLInformationTransfer_r8_IEs_tags_1)
		/sizeof(asn_DEF_DLInformationTransfer_r8_IEs_tags_1[0]), /* 1 */
	asn_DEF_DLInformationTransfer_r8_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_DLInformationTransfer_r8_IEs_tags_1)
		/sizeof(asn_DEF_DLInformationTransfer_r8_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DLInformationTransfer_r8_IEs_1,
	2,	/* Elements count */
	&asn_SPC_DLInformationTransfer_r8_IEs_specs_1	/* Additional specs */
};

