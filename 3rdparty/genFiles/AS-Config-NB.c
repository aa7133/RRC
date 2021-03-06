/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-InterNodeDefinitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#include "AS-Config-NB.h"

#include "CarrierFreq-NB-v1550.h"
static asn_TYPE_member_t asn_MBR_ext1_7[] = {
	{ ATF_POINTER, 1, offsetof(struct AS_Config_NB__ext1, sourceDL_CarrierFreq_v1550),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreq_NB_v1550,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceDL-CarrierFreq-v1550"
		},
};
static const int asn_MAP_ext1_oms_7[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* sourceDL-CarrierFreq-v1550 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_7 = {
	sizeof(struct AS_Config_NB__ext1),
	offsetof(struct AS_Config_NB__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_7,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_7,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_7 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_7,
	sizeof(asn_DEF_ext1_tags_7)
		/sizeof(asn_DEF_ext1_tags_7[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_7,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_7)
		/sizeof(asn_DEF_ext1_tags_7[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_7,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_AS_Config_NB_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config_NB, sourceRadioResourceConfig_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioResourceConfigDedicated_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceRadioResourceConfig-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config_NB, sourceSecurityAlgorithmConfig_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SecurityAlgorithmConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceSecurityAlgorithmConfig-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config_NB, sourceUE_Identity_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_C_RNTI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceUE-Identity-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config_NB, sourceDl_CarrierFreq_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreq_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceDl-CarrierFreq-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct AS_Config_NB, ext1),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_ext1_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_AS_Config_NB_oms_1[] = { 4 };
static const ber_tlv_tag_t asn_DEF_AS_Config_NB_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AS_Config_NB_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sourceRadioResourceConfig-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sourceSecurityAlgorithmConfig-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sourceUE-Identity-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sourceDl-CarrierFreq-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_AS_Config_NB_specs_1 = {
	sizeof(struct AS_Config_NB),
	offsetof(struct AS_Config_NB, _asn_ctx),
	asn_MAP_AS_Config_NB_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_AS_Config_NB_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AS_Config_NB = {
	"AS-Config-NB",
	"AS-Config-NB",
	&asn_OP_SEQUENCE,
	asn_DEF_AS_Config_NB_tags_1,
	sizeof(asn_DEF_AS_Config_NB_tags_1)
		/sizeof(asn_DEF_AS_Config_NB_tags_1[0]), /* 1 */
	asn_DEF_AS_Config_NB_tags_1,	/* Same as above */
	sizeof(asn_DEF_AS_Config_NB_tags_1)
		/sizeof(asn_DEF_AS_Config_NB_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_AS_Config_NB_1,
	5,	/* Elements count */
	&asn_SPC_AS_Config_NB_specs_1	/* Additional specs */
};

