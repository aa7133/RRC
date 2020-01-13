/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-Sidelink-Preconf"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "SL-PreconfigV2X-Sync-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_syncRefMinHyst_r14_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_syncRefDiffHyst_r14_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_slss_TxDisabled_r15_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_syncRefMinHyst_r14_value2enum_6[] = {
	{ 0,	3,	"dB0" },
	{ 1,	3,	"dB3" },
	{ 2,	3,	"dB6" },
	{ 3,	3,	"dB9" },
	{ 4,	4,	"dB12" }
};
static const unsigned int asn_MAP_syncRefMinHyst_r14_enum2value_6[] = {
	0,	/* dB0(0) */
	4,	/* dB12(4) */
	1,	/* dB3(1) */
	2,	/* dB6(2) */
	3	/* dB9(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_syncRefMinHyst_r14_specs_6 = {
	asn_MAP_syncRefMinHyst_r14_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_syncRefMinHyst_r14_enum2value_6,	/* N => "tag"; sorted by N */
	5,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_syncRefMinHyst_r14_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_syncRefMinHyst_r14_6 = {
	"syncRefMinHyst-r14",
	"syncRefMinHyst-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_syncRefMinHyst_r14_tags_6,
	sizeof(asn_DEF_syncRefMinHyst_r14_tags_6)
		/sizeof(asn_DEF_syncRefMinHyst_r14_tags_6[0]) - 1, /* 1 */
	asn_DEF_syncRefMinHyst_r14_tags_6,	/* Same as above */
	sizeof(asn_DEF_syncRefMinHyst_r14_tags_6)
		/sizeof(asn_DEF_syncRefMinHyst_r14_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_syncRefMinHyst_r14_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_syncRefMinHyst_r14_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_syncRefDiffHyst_r14_value2enum_12[] = {
	{ 0,	3,	"dB0" },
	{ 1,	3,	"dB3" },
	{ 2,	3,	"dB6" },
	{ 3,	3,	"dB9" },
	{ 4,	4,	"dB12" },
	{ 5,	5,	"dBinf" }
};
static const unsigned int asn_MAP_syncRefDiffHyst_r14_enum2value_12[] = {
	0,	/* dB0(0) */
	4,	/* dB12(4) */
	1,	/* dB3(1) */
	2,	/* dB6(2) */
	3,	/* dB9(3) */
	5	/* dBinf(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_syncRefDiffHyst_r14_specs_12 = {
	asn_MAP_syncRefDiffHyst_r14_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_syncRefDiffHyst_r14_enum2value_12,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_syncRefDiffHyst_r14_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_syncRefDiffHyst_r14_12 = {
	"syncRefDiffHyst-r14",
	"syncRefDiffHyst-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_syncRefDiffHyst_r14_tags_12,
	sizeof(asn_DEF_syncRefDiffHyst_r14_tags_12)
		/sizeof(asn_DEF_syncRefDiffHyst_r14_tags_12[0]) - 1, /* 1 */
	asn_DEF_syncRefDiffHyst_r14_tags_12,	/* Same as above */
	sizeof(asn_DEF_syncRefDiffHyst_r14_tags_12)
		/sizeof(asn_DEF_syncRefDiffHyst_r14_tags_12[0]), /* 2 */
	{ 0, &asn_PER_type_syncRefDiffHyst_r14_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_syncRefDiffHyst_r14_specs_12	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_slss_TxDisabled_r15_value2enum_21[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_slss_TxDisabled_r15_enum2value_21[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_slss_TxDisabled_r15_specs_21 = {
	asn_MAP_slss_TxDisabled_r15_value2enum_21,	/* "tag" => N; sorted by tag */
	asn_MAP_slss_TxDisabled_r15_enum2value_21,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_slss_TxDisabled_r15_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_slss_TxDisabled_r15_21 = {
	"slss-TxDisabled-r15",
	"slss-TxDisabled-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_slss_TxDisabled_r15_tags_21,
	sizeof(asn_DEF_slss_TxDisabled_r15_tags_21)
		/sizeof(asn_DEF_slss_TxDisabled_r15_tags_21[0]) - 1, /* 1 */
	asn_DEF_slss_TxDisabled_r15_tags_21,	/* Same as above */
	sizeof(asn_DEF_slss_TxDisabled_r15_tags_21)
		/sizeof(asn_DEF_slss_TxDisabled_r15_tags_21[0]), /* 2 */
	{ 0, &asn_PER_type_slss_TxDisabled_r15_constr_21, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_slss_TxDisabled_r15_specs_21	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_20[] = {
	{ ATF_POINTER, 1, offsetof(struct SL_PreconfigV2X_Sync_r14__ext1, slss_TxDisabled_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_slss_TxDisabled_r15_21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"slss-TxDisabled-r15"
		},
};
static const int asn_MAP_ext1_oms_20[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_20[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* slss-TxDisabled-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_20 = {
	sizeof(struct SL_PreconfigV2X_Sync_r14__ext1),
	offsetof(struct SL_PreconfigV2X_Sync_r14__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_20,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_20,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_20 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_20,
	sizeof(asn_DEF_ext1_tags_20)
		/sizeof(asn_DEF_ext1_tags_20[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_20,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_20)
		/sizeof(asn_DEF_ext1_tags_20[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_20,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_20	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SL_PreconfigV2X_Sync_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PreconfigV2X_Sync_r14, syncOffsetIndicators_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_V2X_SyncOffsetIndicators_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"syncOffsetIndicators-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PreconfigV2X_Sync_r14, syncTxParameters_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_P0_SL_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"syncTxParameters-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PreconfigV2X_Sync_r14, syncTxThreshOoC_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_RangeSL3_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"syncTxThreshOoC-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PreconfigV2X_Sync_r14, filterCoefficient_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FilterCoefficient,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"filterCoefficient-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PreconfigV2X_Sync_r14, syncRefMinHyst_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_syncRefMinHyst_r14_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"syncRefMinHyst-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_PreconfigV2X_Sync_r14, syncRefDiffHyst_r14),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_syncRefDiffHyst_r14_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"syncRefDiffHyst-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_PreconfigV2X_Sync_r14, ext1),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_ext1_20,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_SL_PreconfigV2X_Sync_r14_oms_1[] = { 6 };
static const ber_tlv_tag_t asn_DEF_SL_PreconfigV2X_Sync_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_PreconfigV2X_Sync_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* syncOffsetIndicators-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* syncTxParameters-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* syncTxThreshOoC-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* filterCoefficient-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* syncRefMinHyst-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* syncRefDiffHyst-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_PreconfigV2X_Sync_r14_specs_1 = {
	sizeof(struct SL_PreconfigV2X_Sync_r14),
	offsetof(struct SL_PreconfigV2X_Sync_r14, _asn_ctx),
	asn_MAP_SL_PreconfigV2X_Sync_r14_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_SL_PreconfigV2X_Sync_r14_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_PreconfigV2X_Sync_r14 = {
	"SL-PreconfigV2X-Sync-r14",
	"SL-PreconfigV2X-Sync-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_PreconfigV2X_Sync_r14_tags_1,
	sizeof(asn_DEF_SL_PreconfigV2X_Sync_r14_tags_1)
		/sizeof(asn_DEF_SL_PreconfigV2X_Sync_r14_tags_1[0]), /* 1 */
	asn_DEF_SL_PreconfigV2X_Sync_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_PreconfigV2X_Sync_r14_tags_1)
		/sizeof(asn_DEF_SL_PreconfigV2X_Sync_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_PreconfigV2X_Sync_r14_1,
	7,	/* Elements count */
	&asn_SPC_SL_PreconfigV2X_Sync_r14_specs_1	/* Additional specs */
};
