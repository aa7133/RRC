/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "SL-InterFreqInfoV2X-r14.h"

#include "PLMN-IdentityList.h"
#include "SL-CommResourcePoolV2X-r14.h"
#include "SL-V2X-UE-ConfigList-r14.h"
#include "SL-V2X-FreqSelectionConfigList-r15.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_sl_Bandwidth_r14_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_additionalSpectrumEmissionV2X_r14_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_sl_Bandwidth_r14_value2enum_5[] = {
	{ 0,	2,	"n6" },
	{ 1,	3,	"n15" },
	{ 2,	3,	"n25" },
	{ 3,	3,	"n50" },
	{ 4,	3,	"n75" },
	{ 5,	4,	"n100" }
};
static const unsigned int asn_MAP_sl_Bandwidth_r14_enum2value_5[] = {
	5,	/* n100(5) */
	1,	/* n15(1) */
	2,	/* n25(2) */
	3,	/* n50(3) */
	0,	/* n6(0) */
	4	/* n75(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_sl_Bandwidth_r14_specs_5 = {
	asn_MAP_sl_Bandwidth_r14_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_sl_Bandwidth_r14_enum2value_5,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sl_Bandwidth_r14_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_Bandwidth_r14_5 = {
	"sl-Bandwidth-r14",
	"sl-Bandwidth-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_sl_Bandwidth_r14_tags_5,
	sizeof(asn_DEF_sl_Bandwidth_r14_tags_5)
		/sizeof(asn_DEF_sl_Bandwidth_r14_tags_5[0]) - 1, /* 1 */
	asn_DEF_sl_Bandwidth_r14_tags_5,	/* Same as above */
	sizeof(asn_DEF_sl_Bandwidth_r14_tags_5)
		/sizeof(asn_DEF_sl_Bandwidth_r14_tags_5[0]), /* 2 */
	{ 0, &asn_PER_type_sl_Bandwidth_r14_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sl_Bandwidth_r14_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_additionalSpectrumEmissionV2X_r14_16[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_InterFreqInfoV2X_r14__ext1__additionalSpectrumEmissionV2X_r14, choice.additionalSpectrumEmission_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AdditionalSpectrumEmission,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"additionalSpectrumEmission-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_InterFreqInfoV2X_r14__ext1__additionalSpectrumEmissionV2X_r14, choice.additionalSpectrumEmission_v1440),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AdditionalSpectrumEmission_v10l0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"additionalSpectrumEmission-v1440"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_additionalSpectrumEmissionV2X_r14_tag2el_16[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* additionalSpectrumEmission-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* additionalSpectrumEmission-v1440 */
};
static asn_CHOICE_specifics_t asn_SPC_additionalSpectrumEmissionV2X_r14_specs_16 = {
	sizeof(struct SL_InterFreqInfoV2X_r14__ext1__additionalSpectrumEmissionV2X_r14),
	offsetof(struct SL_InterFreqInfoV2X_r14__ext1__additionalSpectrumEmissionV2X_r14, _asn_ctx),
	offsetof(struct SL_InterFreqInfoV2X_r14__ext1__additionalSpectrumEmissionV2X_r14, present),
	sizeof(((struct SL_InterFreqInfoV2X_r14__ext1__additionalSpectrumEmissionV2X_r14 *)0)->present),
	asn_MAP_additionalSpectrumEmissionV2X_r14_tag2el_16,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_additionalSpectrumEmissionV2X_r14_16 = {
	"additionalSpectrumEmissionV2X-r14",
	"additionalSpectrumEmissionV2X-r14",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_additionalSpectrumEmissionV2X_r14_constr_16, CHOICE_constraint },
	asn_MBR_additionalSpectrumEmissionV2X_r14_16,
	2,	/* Elements count */
	&asn_SPC_additionalSpectrumEmissionV2X_r14_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_15[] = {
	{ ATF_POINTER, 1, offsetof(struct SL_InterFreqInfoV2X_r14__ext1, additionalSpectrumEmissionV2X_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_additionalSpectrumEmissionV2X_r14_16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"additionalSpectrumEmissionV2X-r14"
		},
};
static const int asn_MAP_ext1_oms_15[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* additionalSpectrumEmissionV2X-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_15 = {
	sizeof(struct SL_InterFreqInfoV2X_r14__ext1),
	offsetof(struct SL_InterFreqInfoV2X_r14__ext1, _asn_ctx),
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

static asn_TYPE_member_t asn_MBR_ext2_19[] = {
	{ ATF_POINTER, 1, offsetof(struct SL_InterFreqInfoV2X_r14__ext2, v2x_FreqSelectionConfigList_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_V2X_FreqSelectionConfigList_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-FreqSelectionConfigList-r15"
		},
};
static const int asn_MAP_ext2_oms_19[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext2_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_19[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* v2x-FreqSelectionConfigList-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_19 = {
	sizeof(struct SL_InterFreqInfoV2X_r14__ext2),
	offsetof(struct SL_InterFreqInfoV2X_r14__ext2, _asn_ctx),
	asn_MAP_ext2_tag2el_19,
	1,	/* Count of tags in the map */
	asn_MAP_ext2_oms_19,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext2_19 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_ext2_tags_19,
	sizeof(asn_DEF_ext2_tags_19)
		/sizeof(asn_DEF_ext2_tags_19[0]) - 1, /* 1 */
	asn_DEF_ext2_tags_19,	/* Same as above */
	sizeof(asn_DEF_ext2_tags_19)
		/sizeof(asn_DEF_ext2_tags_19[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext2_19,
	1,	/* Elements count */
	&asn_SPC_ext2_specs_19	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SL_InterFreqInfoV2X_r14_1[] = {
	{ ATF_POINTER, 1, offsetof(struct SL_InterFreqInfoV2X_r14, plmn_IdentityList_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_IdentityList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"plmn-IdentityList-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_InterFreqInfoV2X_r14, v2x_CommCarrierFreq_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-CommCarrierFreq-r14"
		},
	{ ATF_POINTER, 6, offsetof(struct SL_InterFreqInfoV2X_r14, sl_MaxTxPower_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_P_Max,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-MaxTxPower-r14"
		},
	{ ATF_POINTER, 5, offsetof(struct SL_InterFreqInfoV2X_r14, sl_Bandwidth_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sl_Bandwidth_r14_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-Bandwidth-r14"
		},
	{ ATF_POINTER, 4, offsetof(struct SL_InterFreqInfoV2X_r14, v2x_SchedulingPool_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_CommResourcePoolV2X_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-SchedulingPool-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct SL_InterFreqInfoV2X_r14, v2x_UE_ConfigList_r14),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_V2X_UE_ConfigList_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-UE-ConfigList-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct SL_InterFreqInfoV2X_r14, ext1),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_ext1_15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_InterFreqInfoV2X_r14, ext2),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_ext2_19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext2"
		},
};
static const int asn_MAP_SL_InterFreqInfoV2X_r14_oms_1[] = { 0, 2, 3, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_SL_InterFreqInfoV2X_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_InterFreqInfoV2X_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmn-IdentityList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* v2x-CommCarrierFreq-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sl-MaxTxPower-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sl-Bandwidth-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* v2x-SchedulingPool-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* v2x-UE-ConfigList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* ext2 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_InterFreqInfoV2X_r14_specs_1 = {
	sizeof(struct SL_InterFreqInfoV2X_r14),
	offsetof(struct SL_InterFreqInfoV2X_r14, _asn_ctx),
	asn_MAP_SL_InterFreqInfoV2X_r14_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_SL_InterFreqInfoV2X_r14_oms_1,	/* Optional members */
	5, 2,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_InterFreqInfoV2X_r14 = {
	"SL-InterFreqInfoV2X-r14",
	"SL-InterFreqInfoV2X-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_InterFreqInfoV2X_r14_tags_1,
	sizeof(asn_DEF_SL_InterFreqInfoV2X_r14_tags_1)
		/sizeof(asn_DEF_SL_InterFreqInfoV2X_r14_tags_1[0]), /* 1 */
	asn_DEF_SL_InterFreqInfoV2X_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_InterFreqInfoV2X_r14_tags_1)
		/sizeof(asn_DEF_SL_InterFreqInfoV2X_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_InterFreqInfoV2X_r14_1,
	8,	/* Elements count */
	&asn_SPC_SL_InterFreqInfoV2X_r14_specs_1	/* Additional specs */
};

