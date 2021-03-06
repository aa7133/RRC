/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#include "RadioResourceConfigCommon.h"

#include "RACH-ConfigCommon.h"
#include "PDSCH-ConfigCommon.h"
#include "PHICH-Config.h"
#include "PUCCH-ConfigCommon.h"
#include "SoundingRS-UL-ConfigCommon.h"
#include "UplinkPowerControlCommon.h"
#include "AntennaInfoCommon.h"
#include "TDD-Config.h"
#include "UplinkPowerControlCommon-v1020.h"
#include "TDD-Config-v1130.h"
#include "PUSCH-ConfigCommon-v1270.h"
#include "PRACH-Config-v1310.h"
#include "FreqHoppingParameters-r13.h"
#include "PDSCH-ConfigCommon-v1310.h"
#include "PUCCH-ConfigCommon-v1310.h"
#include "PUSCH-ConfigCommon-v1310.h"
#include "UplinkPowerControlCommon-v1310.h"
#include "HighSpeedConfig-r14.h"
#include "PRACH-Config-v1430.h"
#include "PUCCH-ConfigCommon-v1430.h"
#include "TDD-Config-v1430.h"
#include "TDD-Config-v1450.h"
#include "UplinkPowerControlCommon-v1530.h"
#include "HighSpeedConfig-v1530.h"
static asn_TYPE_member_t asn_MBR_ext1_15[] = {
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommon__ext1, uplinkPowerControlCommon_v1020),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkPowerControlCommon_v1020,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uplinkPowerControlCommon-v1020"
		},
};
static const int asn_MAP_ext1_oms_15[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* uplinkPowerControlCommon-v1020 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_15 = {
	sizeof(struct RadioResourceConfigCommon__ext1),
	offsetof(struct RadioResourceConfigCommon__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_15,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_15,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_15 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_15,
	sizeof(asn_DEF_ext1_tags_15)
		/sizeof(asn_DEF_ext1_tags_15[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_15,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_15)
		/sizeof(asn_DEF_ext1_tags_15[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_15,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_15	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_17[] = {
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommon__ext2, tdd_Config_v1130),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TDD_Config_v1130,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd-Config-v1130"
		},
};
static const int asn_MAP_ext2_oms_17[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext2_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_17[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* tdd-Config-v1130 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_17 = {
	sizeof(struct RadioResourceConfigCommon__ext2),
	offsetof(struct RadioResourceConfigCommon__ext2, _asn_ctx),
	asn_MAP_ext2_tag2el_17,
	1,	/* Count of tags in the map */
	asn_MAP_ext2_oms_17,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext2_17 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_ext2_tags_17,
	sizeof(asn_DEF_ext2_tags_17)
		/sizeof(asn_DEF_ext2_tags_17[0]) - 1, /* 1 */
	asn_DEF_ext2_tags_17,	/* Same as above */
	sizeof(asn_DEF_ext2_tags_17)
		/sizeof(asn_DEF_ext2_tags_17[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext2_17,
	1,	/* Elements count */
	&asn_SPC_ext2_specs_17	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext3_19[] = {
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommon__ext3, pusch_ConfigCommon_v1270),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUSCH_ConfigCommon_v1270,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pusch-ConfigCommon-v1270"
		},
};
static const int asn_MAP_ext3_oms_19[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext3_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext3_tag2el_19[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* pusch-ConfigCommon-v1270 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext3_specs_19 = {
	sizeof(struct RadioResourceConfigCommon__ext3),
	offsetof(struct RadioResourceConfigCommon__ext3, _asn_ctx),
	asn_MAP_ext3_tag2el_19,
	1,	/* Count of tags in the map */
	asn_MAP_ext3_oms_19,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext3_19 = {
	"ext3",
	"ext3",
	&asn_OP_SEQUENCE,
	asn_DEF_ext3_tags_19,
	sizeof(asn_DEF_ext3_tags_19)
		/sizeof(asn_DEF_ext3_tags_19[0]) - 1, /* 1 */
	asn_DEF_ext3_tags_19,	/* Same as above */
	sizeof(asn_DEF_ext3_tags_19)
		/sizeof(asn_DEF_ext3_tags_19[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext3_19,
	1,	/* Elements count */
	&asn_SPC_ext3_specs_19	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext4_21[] = {
	{ ATF_POINTER, 6, offsetof(struct RadioResourceConfigCommon__ext4, prach_Config_v1310),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PRACH_Config_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"prach-Config-v1310"
		},
	{ ATF_POINTER, 5, offsetof(struct RadioResourceConfigCommon__ext4, freqHoppingParameters_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FreqHoppingParameters_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"freqHoppingParameters-r13"
		},
	{ ATF_POINTER, 4, offsetof(struct RadioResourceConfigCommon__ext4, pdsch_ConfigCommon_v1310),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDSCH_ConfigCommon_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-ConfigCommon-v1310"
		},
	{ ATF_POINTER, 3, offsetof(struct RadioResourceConfigCommon__ext4, pucch_ConfigCommon_v1310),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUCCH_ConfigCommon_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pucch-ConfigCommon-v1310"
		},
	{ ATF_POINTER, 2, offsetof(struct RadioResourceConfigCommon__ext4, pusch_ConfigCommon_v1310),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUSCH_ConfigCommon_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pusch-ConfigCommon-v1310"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommon__ext4, uplinkPowerControlCommon_v1310),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkPowerControlCommon_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uplinkPowerControlCommon-v1310"
		},
};
static const int asn_MAP_ext4_oms_21[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_ext4_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext4_tag2el_21[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* prach-Config-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* freqHoppingParameters-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pdsch-ConfigCommon-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* pucch-ConfigCommon-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* pusch-ConfigCommon-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* uplinkPowerControlCommon-v1310 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext4_specs_21 = {
	sizeof(struct RadioResourceConfigCommon__ext4),
	offsetof(struct RadioResourceConfigCommon__ext4, _asn_ctx),
	asn_MAP_ext4_tag2el_21,
	6,	/* Count of tags in the map */
	asn_MAP_ext4_oms_21,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext4_21 = {
	"ext4",
	"ext4",
	&asn_OP_SEQUENCE,
	asn_DEF_ext4_tags_21,
	sizeof(asn_DEF_ext4_tags_21)
		/sizeof(asn_DEF_ext4_tags_21[0]) - 1, /* 1 */
	asn_DEF_ext4_tags_21,	/* Same as above */
	sizeof(asn_DEF_ext4_tags_21)
		/sizeof(asn_DEF_ext4_tags_21[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext4_21,
	6,	/* Elements count */
	&asn_SPC_ext4_specs_21	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext5_28[] = {
	{ ATF_POINTER, 4, offsetof(struct RadioResourceConfigCommon__ext5, highSpeedConfig_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HighSpeedConfig_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"highSpeedConfig-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct RadioResourceConfigCommon__ext5, prach_Config_v1430),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PRACH_Config_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"prach-Config-v1430"
		},
	{ ATF_POINTER, 2, offsetof(struct RadioResourceConfigCommon__ext5, pucch_ConfigCommon_v1430),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUCCH_ConfigCommon_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pucch-ConfigCommon-v1430"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommon__ext5, tdd_Config_v1430),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TDD_Config_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd-Config-v1430"
		},
};
static const int asn_MAP_ext5_oms_28[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_ext5_tags_28[] = {
	(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext5_tag2el_28[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* highSpeedConfig-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* prach-Config-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pucch-ConfigCommon-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* tdd-Config-v1430 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext5_specs_28 = {
	sizeof(struct RadioResourceConfigCommon__ext5),
	offsetof(struct RadioResourceConfigCommon__ext5, _asn_ctx),
	asn_MAP_ext5_tag2el_28,
	4,	/* Count of tags in the map */
	asn_MAP_ext5_oms_28,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext5_28 = {
	"ext5",
	"ext5",
	&asn_OP_SEQUENCE,
	asn_DEF_ext5_tags_28,
	sizeof(asn_DEF_ext5_tags_28)
		/sizeof(asn_DEF_ext5_tags_28[0]) - 1, /* 1 */
	asn_DEF_ext5_tags_28,	/* Same as above */
	sizeof(asn_DEF_ext5_tags_28)
		/sizeof(asn_DEF_ext5_tags_28[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext5_28,
	4,	/* Elements count */
	&asn_SPC_ext5_specs_28	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext6_33[] = {
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommon__ext6, tdd_Config_v1450),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TDD_Config_v1450,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd-Config-v1450"
		},
};
static const int asn_MAP_ext6_oms_33[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext6_tags_33[] = {
	(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext6_tag2el_33[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* tdd-Config-v1450 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext6_specs_33 = {
	sizeof(struct RadioResourceConfigCommon__ext6),
	offsetof(struct RadioResourceConfigCommon__ext6, _asn_ctx),
	asn_MAP_ext6_tag2el_33,
	1,	/* Count of tags in the map */
	asn_MAP_ext6_oms_33,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext6_33 = {
	"ext6",
	"ext6",
	&asn_OP_SEQUENCE,
	asn_DEF_ext6_tags_33,
	sizeof(asn_DEF_ext6_tags_33)
		/sizeof(asn_DEF_ext6_tags_33[0]) - 1, /* 1 */
	asn_DEF_ext6_tags_33,	/* Same as above */
	sizeof(asn_DEF_ext6_tags_33)
		/sizeof(asn_DEF_ext6_tags_33[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext6_33,
	1,	/* Elements count */
	&asn_SPC_ext6_specs_33	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext7_35[] = {
	{ ATF_POINTER, 2, offsetof(struct RadioResourceConfigCommon__ext7, uplinkPowerControlCommon_v1530),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkPowerControlCommon_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uplinkPowerControlCommon-v1530"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommon__ext7, highSpeedConfig_v1530),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HighSpeedConfig_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"highSpeedConfig-v1530"
		},
};
static const int asn_MAP_ext7_oms_35[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ext7_tags_35[] = {
	(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext7_tag2el_35[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* uplinkPowerControlCommon-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* highSpeedConfig-v1530 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext7_specs_35 = {
	sizeof(struct RadioResourceConfigCommon__ext7),
	offsetof(struct RadioResourceConfigCommon__ext7, _asn_ctx),
	asn_MAP_ext7_tag2el_35,
	2,	/* Count of tags in the map */
	asn_MAP_ext7_oms_35,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext7_35 = {
	"ext7",
	"ext7",
	&asn_OP_SEQUENCE,
	asn_DEF_ext7_tags_35,
	sizeof(asn_DEF_ext7_tags_35)
		/sizeof(asn_DEF_ext7_tags_35[0]) - 1, /* 1 */
	asn_DEF_ext7_tags_35,	/* Same as above */
	sizeof(asn_DEF_ext7_tags_35)
		/sizeof(asn_DEF_ext7_tags_35[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext7_35,
	2,	/* Elements count */
	&asn_SPC_ext7_specs_35	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RadioResourceConfigCommon_1[] = {
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommon, rach_ConfigCommon),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RACH_ConfigCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rach-ConfigCommon"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommon, prach_Config),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PRACH_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"prach-Config"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommon, pdsch_ConfigCommon),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDSCH_ConfigCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-ConfigCommon"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommon, pusch_ConfigCommon),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUSCH_ConfigCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pusch-ConfigCommon"
		},
	{ ATF_POINTER, 7, offsetof(struct RadioResourceConfigCommon, phich_Config),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PHICH_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"phich-Config"
		},
	{ ATF_POINTER, 6, offsetof(struct RadioResourceConfigCommon, pucch_ConfigCommon),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUCCH_ConfigCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pucch-ConfigCommon"
		},
	{ ATF_POINTER, 5, offsetof(struct RadioResourceConfigCommon, soundingRS_UL_ConfigCommon),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SoundingRS_UL_ConfigCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"soundingRS-UL-ConfigCommon"
		},
	{ ATF_POINTER, 4, offsetof(struct RadioResourceConfigCommon, uplinkPowerControlCommon),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkPowerControlCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uplinkPowerControlCommon"
		},
	{ ATF_POINTER, 3, offsetof(struct RadioResourceConfigCommon, antennaInfoCommon),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AntennaInfoCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"antennaInfoCommon"
		},
	{ ATF_POINTER, 2, offsetof(struct RadioResourceConfigCommon, p_Max),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_P_Max,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"p-Max"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommon, tdd_Config),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TDD_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd-Config"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigCommon, ul_CyclicPrefixLength),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_CyclicPrefixLength,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-CyclicPrefixLength"
		},
	{ ATF_POINTER, 7, offsetof(struct RadioResourceConfigCommon, ext1),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		0,
		&asn_DEF_ext1_15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
	{ ATF_POINTER, 6, offsetof(struct RadioResourceConfigCommon, ext2),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		0,
		&asn_DEF_ext2_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext2"
		},
	{ ATF_POINTER, 5, offsetof(struct RadioResourceConfigCommon, ext3),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		0,
		&asn_DEF_ext3_19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext3"
		},
	{ ATF_POINTER, 4, offsetof(struct RadioResourceConfigCommon, ext4),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		0,
		&asn_DEF_ext4_21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext4"
		},
	{ ATF_POINTER, 3, offsetof(struct RadioResourceConfigCommon, ext5),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		0,
		&asn_DEF_ext5_28,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext5"
		},
	{ ATF_POINTER, 2, offsetof(struct RadioResourceConfigCommon, ext6),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		0,
		&asn_DEF_ext6_33,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext6"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigCommon, ext7),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		0,
		&asn_DEF_ext7_35,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext7"
		},
};
static const int asn_MAP_RadioResourceConfigCommon_oms_1[] = { 0, 2, 4, 5, 6, 7, 8, 9, 10, 12, 13, 14, 15, 16, 17, 18 };
static const ber_tlv_tag_t asn_DEF_RadioResourceConfigCommon_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RadioResourceConfigCommon_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rach-ConfigCommon */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* prach-Config */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pdsch-ConfigCommon */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* pusch-ConfigCommon */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* phich-Config */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* pucch-ConfigCommon */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* soundingRS-UL-ConfigCommon */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* uplinkPowerControlCommon */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* antennaInfoCommon */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* p-Max */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* tdd-Config */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* ul-CyclicPrefixLength */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* ext2 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* ext3 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* ext4 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* ext5 */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* ext6 */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 } /* ext7 */
};
asn_SEQUENCE_specifics_t asn_SPC_RadioResourceConfigCommon_specs_1 = {
	sizeof(struct RadioResourceConfigCommon),
	offsetof(struct RadioResourceConfigCommon, _asn_ctx),
	asn_MAP_RadioResourceConfigCommon_tag2el_1,
	19,	/* Count of tags in the map */
	asn_MAP_RadioResourceConfigCommon_oms_1,	/* Optional members */
	9, 7,	/* Root/Additions */
	12,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigCommon = {
	"RadioResourceConfigCommon",
	"RadioResourceConfigCommon",
	&asn_OP_SEQUENCE,
	asn_DEF_RadioResourceConfigCommon_tags_1,
	sizeof(asn_DEF_RadioResourceConfigCommon_tags_1)
		/sizeof(asn_DEF_RadioResourceConfigCommon_tags_1[0]), /* 1 */
	asn_DEF_RadioResourceConfigCommon_tags_1,	/* Same as above */
	sizeof(asn_DEF_RadioResourceConfigCommon_tags_1)
		/sizeof(asn_DEF_RadioResourceConfigCommon_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RadioResourceConfigCommon_1,
	19,	/* Elements count */
	&asn_SPC_RadioResourceConfigCommon_specs_1	/* Additional specs */
};

