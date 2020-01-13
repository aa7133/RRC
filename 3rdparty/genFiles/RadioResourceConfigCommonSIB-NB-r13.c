/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "RadioResourceConfigCommonSIB-NB-r13.h"

#include "DL-GapConfig-NB-r13.h"
#include "NPRACH-ConfigSIB-NB-v1330.h"
#include "NPRACH-ConfigSIB-NB-v1450.h"
#include "NPRACH-ConfigSIB-NB-v1530.h"
#include "DL-GapConfig-NB-v1530.h"
#include "WUS-Config-NB-r15.h"
#include "NPRACH-ConfigSIB-NB-v1550.h"
static asn_TYPE_member_t asn_MBR_ext1_11[] = {
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommonSIB_NB_r13__ext1, nprach_Config_v1330),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NPRACH_ConfigSIB_NB_v1330,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-Config-v1330"
		},
};
static const int asn_MAP_ext1_oms_11[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* nprach-Config-v1330 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_11 = {
	sizeof(struct RadioResourceConfigCommonSIB_NB_r13__ext1),
	offsetof(struct RadioResourceConfigCommonSIB_NB_r13__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_11,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_11,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_11 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_11,
	sizeof(asn_DEF_ext1_tags_11)
		/sizeof(asn_DEF_ext1_tags_11[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_11,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_11)
		/sizeof(asn_DEF_ext1_tags_11[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_11,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_13[] = {
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommonSIB_NB_r13__ext2, nprach_Config_v1450),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NPRACH_ConfigSIB_NB_v1450,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-Config-v1450"
		},
};
static const int asn_MAP_ext2_oms_13[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext2_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* nprach-Config-v1450 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_13 = {
	sizeof(struct RadioResourceConfigCommonSIB_NB_r13__ext2),
	offsetof(struct RadioResourceConfigCommonSIB_NB_r13__ext2, _asn_ctx),
	asn_MAP_ext2_tag2el_13,
	1,	/* Count of tags in the map */
	asn_MAP_ext2_oms_13,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext2_13 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_ext2_tags_13,
	sizeof(asn_DEF_ext2_tags_13)
		/sizeof(asn_DEF_ext2_tags_13[0]) - 1, /* 1 */
	asn_DEF_ext2_tags_13,	/* Same as above */
	sizeof(asn_DEF_ext2_tags_13)
		/sizeof(asn_DEF_ext2_tags_13[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext2_13,
	1,	/* Elements count */
	&asn_SPC_ext2_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext3_15[] = {
	{ ATF_POINTER, 3, offsetof(struct RadioResourceConfigCommonSIB_NB_r13__ext3, nprach_Config_v1530),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NPRACH_ConfigSIB_NB_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-Config-v1530"
		},
	{ ATF_POINTER, 2, offsetof(struct RadioResourceConfigCommonSIB_NB_r13__ext3, dl_Gap_v1530),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_GapConfig_NB_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-Gap-v1530"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommonSIB_NB_r13__ext3, wus_Config_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WUS_Config_NB_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"wus-Config-r15"
		},
};
static const int asn_MAP_ext3_oms_15[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_ext3_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext3_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nprach-Config-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dl-Gap-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* wus-Config-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext3_specs_15 = {
	sizeof(struct RadioResourceConfigCommonSIB_NB_r13__ext3),
	offsetof(struct RadioResourceConfigCommonSIB_NB_r13__ext3, _asn_ctx),
	asn_MAP_ext3_tag2el_15,
	3,	/* Count of tags in the map */
	asn_MAP_ext3_oms_15,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext3_15 = {
	"ext3",
	"ext3",
	&asn_OP_SEQUENCE,
	asn_DEF_ext3_tags_15,
	sizeof(asn_DEF_ext3_tags_15)
		/sizeof(asn_DEF_ext3_tags_15[0]) - 1, /* 1 */
	asn_DEF_ext3_tags_15,	/* Same as above */
	sizeof(asn_DEF_ext3_tags_15)
		/sizeof(asn_DEF_ext3_tags_15[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext3_15,
	3,	/* Elements count */
	&asn_SPC_ext3_specs_15	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext4_19[] = {
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommonSIB_NB_r13__ext4, nprach_Config_v1550),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NPRACH_ConfigSIB_NB_v1550,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-Config-v1550"
		},
};
static const int asn_MAP_ext4_oms_19[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext4_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext4_tag2el_19[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* nprach-Config-v1550 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext4_specs_19 = {
	sizeof(struct RadioResourceConfigCommonSIB_NB_r13__ext4),
	offsetof(struct RadioResourceConfigCommonSIB_NB_r13__ext4, _asn_ctx),
	asn_MAP_ext4_tag2el_19,
	1,	/* Count of tags in the map */
	asn_MAP_ext4_oms_19,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext4_19 = {
	"ext4",
	"ext4",
	&asn_OP_SEQUENCE,
	asn_DEF_ext4_tags_19,
	sizeof(asn_DEF_ext4_tags_19)
		/sizeof(asn_DEF_ext4_tags_19[0]) - 1, /* 1 */
	asn_DEF_ext4_tags_19,	/* Same as above */
	sizeof(asn_DEF_ext4_tags_19)
		/sizeof(asn_DEF_ext4_tags_19[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext4_19,
	1,	/* Elements count */
	&asn_SPC_ext4_specs_19	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RadioResourceConfigCommonSIB_NB_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSIB_NB_r13, rach_ConfigCommon_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RACH_ConfigCommon_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rach-ConfigCommon-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSIB_NB_r13, bcch_Config_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BCCH_Config_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bcch-Config-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSIB_NB_r13, pcch_Config_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PCCH_Config_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pcch-Config-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSIB_NB_r13, nprach_Config_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NPRACH_ConfigSIB_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-Config-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSIB_NB_r13, npdsch_ConfigCommon_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NPDSCH_ConfigCommon_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"npdsch-ConfigCommon-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSIB_NB_r13, npusch_ConfigCommon_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NPUSCH_ConfigCommon_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"npusch-ConfigCommon-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommonSIB_NB_r13, dl_Gap_r13),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_GapConfig_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-Gap-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommonSIB_NB_r13, uplinkPowerControlCommon_r13),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkPowerControlCommon_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uplinkPowerControlCommon-r13"
		},
	{ ATF_POINTER, 4, offsetof(struct RadioResourceConfigCommonSIB_NB_r13, ext1),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		0,
		&asn_DEF_ext1_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
	{ ATF_POINTER, 3, offsetof(struct RadioResourceConfigCommonSIB_NB_r13, ext2),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		0,
		&asn_DEF_ext2_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext2"
		},
	{ ATF_POINTER, 2, offsetof(struct RadioResourceConfigCommonSIB_NB_r13, ext3),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		0,
		&asn_DEF_ext3_15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext3"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommonSIB_NB_r13, ext4),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		0,
		&asn_DEF_ext4_19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext4"
		},
};
static const int asn_MAP_RadioResourceConfigCommonSIB_NB_r13_oms_1[] = { 6, 8, 9, 10, 11 };
static const ber_tlv_tag_t asn_DEF_RadioResourceConfigCommonSIB_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RadioResourceConfigCommonSIB_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rach-ConfigCommon-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* bcch-Config-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pcch-Config-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* nprach-Config-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* npdsch-ConfigCommon-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* npusch-ConfigCommon-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* dl-Gap-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* uplinkPowerControlCommon-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* ext2 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* ext3 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 } /* ext4 */
};
asn_SEQUENCE_specifics_t asn_SPC_RadioResourceConfigCommonSIB_NB_r13_specs_1 = {
	sizeof(struct RadioResourceConfigCommonSIB_NB_r13),
	offsetof(struct RadioResourceConfigCommonSIB_NB_r13, _asn_ctx),
	asn_MAP_RadioResourceConfigCommonSIB_NB_r13_tag2el_1,
	12,	/* Count of tags in the map */
	asn_MAP_RadioResourceConfigCommonSIB_NB_r13_oms_1,	/* Optional members */
	1, 4,	/* Root/Additions */
	8,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigCommonSIB_NB_r13 = {
	"RadioResourceConfigCommonSIB-NB-r13",
	"RadioResourceConfigCommonSIB-NB-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_RadioResourceConfigCommonSIB_NB_r13_tags_1,
	sizeof(asn_DEF_RadioResourceConfigCommonSIB_NB_r13_tags_1)
		/sizeof(asn_DEF_RadioResourceConfigCommonSIB_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_RadioResourceConfigCommonSIB_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_RadioResourceConfigCommonSIB_NB_r13_tags_1)
		/sizeof(asn_DEF_RadioResourceConfigCommonSIB_NB_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RadioResourceConfigCommonSIB_NB_r13_1,
	12,	/* Elements count */
	&asn_SPC_RadioResourceConfigCommonSIB_NB_r13_specs_1	/* Additional specs */
};

