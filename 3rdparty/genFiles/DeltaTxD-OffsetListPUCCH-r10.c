/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "DeltaTxD-OffsetListPUCCH-r10.h"

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
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_deltaTxD_OffsetPUCCH_Format1_r10_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_deltaTxD_OffsetPUCCH_Format1a1b_r10_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_deltaTxD_OffsetPUCCH_Format22a2b_r10_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_deltaTxD_OffsetPUCCH_Format3_r10_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_deltaTxD_OffsetPUCCH_Format1_r10_value2enum_2[] = {
	{ 0,	3,	"dB0" },
	{ 1,	4,	"dB-2" }
};
static const unsigned int asn_MAP_deltaTxD_OffsetPUCCH_Format1_r10_enum2value_2[] = {
	1,	/* dB-2(1) */
	0	/* dB0(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_deltaTxD_OffsetPUCCH_Format1_r10_specs_2 = {
	asn_MAP_deltaTxD_OffsetPUCCH_Format1_r10_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_deltaTxD_OffsetPUCCH_Format1_r10_enum2value_2,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_deltaTxD_OffsetPUCCH_Format1_r10_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_deltaTxD_OffsetPUCCH_Format1_r10_2 = {
	"deltaTxD-OffsetPUCCH-Format1-r10",
	"deltaTxD-OffsetPUCCH-Format1-r10",
	&asn_OP_NativeEnumerated,
	asn_DEF_deltaTxD_OffsetPUCCH_Format1_r10_tags_2,
	sizeof(asn_DEF_deltaTxD_OffsetPUCCH_Format1_r10_tags_2)
		/sizeof(asn_DEF_deltaTxD_OffsetPUCCH_Format1_r10_tags_2[0]) - 1, /* 1 */
	asn_DEF_deltaTxD_OffsetPUCCH_Format1_r10_tags_2,	/* Same as above */
	sizeof(asn_DEF_deltaTxD_OffsetPUCCH_Format1_r10_tags_2)
		/sizeof(asn_DEF_deltaTxD_OffsetPUCCH_Format1_r10_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_deltaTxD_OffsetPUCCH_Format1_r10_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_deltaTxD_OffsetPUCCH_Format1_r10_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_deltaTxD_OffsetPUCCH_Format1a1b_r10_value2enum_5[] = {
	{ 0,	3,	"dB0" },
	{ 1,	4,	"dB-2" }
};
static const unsigned int asn_MAP_deltaTxD_OffsetPUCCH_Format1a1b_r10_enum2value_5[] = {
	1,	/* dB-2(1) */
	0	/* dB0(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_deltaTxD_OffsetPUCCH_Format1a1b_r10_specs_5 = {
	asn_MAP_deltaTxD_OffsetPUCCH_Format1a1b_r10_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_deltaTxD_OffsetPUCCH_Format1a1b_r10_enum2value_5,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_deltaTxD_OffsetPUCCH_Format1a1b_r10_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_deltaTxD_OffsetPUCCH_Format1a1b_r10_5 = {
	"deltaTxD-OffsetPUCCH-Format1a1b-r10",
	"deltaTxD-OffsetPUCCH-Format1a1b-r10",
	&asn_OP_NativeEnumerated,
	asn_DEF_deltaTxD_OffsetPUCCH_Format1a1b_r10_tags_5,
	sizeof(asn_DEF_deltaTxD_OffsetPUCCH_Format1a1b_r10_tags_5)
		/sizeof(asn_DEF_deltaTxD_OffsetPUCCH_Format1a1b_r10_tags_5[0]) - 1, /* 1 */
	asn_DEF_deltaTxD_OffsetPUCCH_Format1a1b_r10_tags_5,	/* Same as above */
	sizeof(asn_DEF_deltaTxD_OffsetPUCCH_Format1a1b_r10_tags_5)
		/sizeof(asn_DEF_deltaTxD_OffsetPUCCH_Format1a1b_r10_tags_5[0]), /* 2 */
	{ 0, &asn_PER_type_deltaTxD_OffsetPUCCH_Format1a1b_r10_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_deltaTxD_OffsetPUCCH_Format1a1b_r10_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_deltaTxD_OffsetPUCCH_Format22a2b_r10_value2enum_8[] = {
	{ 0,	3,	"dB0" },
	{ 1,	4,	"dB-2" }
};
static const unsigned int asn_MAP_deltaTxD_OffsetPUCCH_Format22a2b_r10_enum2value_8[] = {
	1,	/* dB-2(1) */
	0	/* dB0(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_deltaTxD_OffsetPUCCH_Format22a2b_r10_specs_8 = {
	asn_MAP_deltaTxD_OffsetPUCCH_Format22a2b_r10_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_deltaTxD_OffsetPUCCH_Format22a2b_r10_enum2value_8,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_deltaTxD_OffsetPUCCH_Format22a2b_r10_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_deltaTxD_OffsetPUCCH_Format22a2b_r10_8 = {
	"deltaTxD-OffsetPUCCH-Format22a2b-r10",
	"deltaTxD-OffsetPUCCH-Format22a2b-r10",
	&asn_OP_NativeEnumerated,
	asn_DEF_deltaTxD_OffsetPUCCH_Format22a2b_r10_tags_8,
	sizeof(asn_DEF_deltaTxD_OffsetPUCCH_Format22a2b_r10_tags_8)
		/sizeof(asn_DEF_deltaTxD_OffsetPUCCH_Format22a2b_r10_tags_8[0]) - 1, /* 1 */
	asn_DEF_deltaTxD_OffsetPUCCH_Format22a2b_r10_tags_8,	/* Same as above */
	sizeof(asn_DEF_deltaTxD_OffsetPUCCH_Format22a2b_r10_tags_8)
		/sizeof(asn_DEF_deltaTxD_OffsetPUCCH_Format22a2b_r10_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_deltaTxD_OffsetPUCCH_Format22a2b_r10_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_deltaTxD_OffsetPUCCH_Format22a2b_r10_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_deltaTxD_OffsetPUCCH_Format3_r10_value2enum_11[] = {
	{ 0,	3,	"dB0" },
	{ 1,	4,	"dB-2" }
};
static const unsigned int asn_MAP_deltaTxD_OffsetPUCCH_Format3_r10_enum2value_11[] = {
	1,	/* dB-2(1) */
	0	/* dB0(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_deltaTxD_OffsetPUCCH_Format3_r10_specs_11 = {
	asn_MAP_deltaTxD_OffsetPUCCH_Format3_r10_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_deltaTxD_OffsetPUCCH_Format3_r10_enum2value_11,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_deltaTxD_OffsetPUCCH_Format3_r10_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_deltaTxD_OffsetPUCCH_Format3_r10_11 = {
	"deltaTxD-OffsetPUCCH-Format3-r10",
	"deltaTxD-OffsetPUCCH-Format3-r10",
	&asn_OP_NativeEnumerated,
	asn_DEF_deltaTxD_OffsetPUCCH_Format3_r10_tags_11,
	sizeof(asn_DEF_deltaTxD_OffsetPUCCH_Format3_r10_tags_11)
		/sizeof(asn_DEF_deltaTxD_OffsetPUCCH_Format3_r10_tags_11[0]) - 1, /* 1 */
	asn_DEF_deltaTxD_OffsetPUCCH_Format3_r10_tags_11,	/* Same as above */
	sizeof(asn_DEF_deltaTxD_OffsetPUCCH_Format3_r10_tags_11)
		/sizeof(asn_DEF_deltaTxD_OffsetPUCCH_Format3_r10_tags_11[0]), /* 2 */
	{ 0, &asn_PER_type_deltaTxD_OffsetPUCCH_Format3_r10_constr_11, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_deltaTxD_OffsetPUCCH_Format3_r10_specs_11	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_DeltaTxD_OffsetListPUCCH_r10_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DeltaTxD_OffsetListPUCCH_r10, deltaTxD_OffsetPUCCH_Format1_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_deltaTxD_OffsetPUCCH_Format1_r10_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"deltaTxD-OffsetPUCCH-Format1-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DeltaTxD_OffsetListPUCCH_r10, deltaTxD_OffsetPUCCH_Format1a1b_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_deltaTxD_OffsetPUCCH_Format1a1b_r10_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"deltaTxD-OffsetPUCCH-Format1a1b-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DeltaTxD_OffsetListPUCCH_r10, deltaTxD_OffsetPUCCH_Format22a2b_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_deltaTxD_OffsetPUCCH_Format22a2b_r10_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"deltaTxD-OffsetPUCCH-Format22a2b-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DeltaTxD_OffsetListPUCCH_r10, deltaTxD_OffsetPUCCH_Format3_r10),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_deltaTxD_OffsetPUCCH_Format3_r10_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"deltaTxD-OffsetPUCCH-Format3-r10"
		},
};
static const ber_tlv_tag_t asn_DEF_DeltaTxD_OffsetListPUCCH_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DeltaTxD_OffsetListPUCCH_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* deltaTxD-OffsetPUCCH-Format1-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* deltaTxD-OffsetPUCCH-Format1a1b-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* deltaTxD-OffsetPUCCH-Format22a2b-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* deltaTxD-OffsetPUCCH-Format3-r10 */
};
asn_SEQUENCE_specifics_t asn_SPC_DeltaTxD_OffsetListPUCCH_r10_specs_1 = {
	sizeof(struct DeltaTxD_OffsetListPUCCH_r10),
	offsetof(struct DeltaTxD_OffsetListPUCCH_r10, _asn_ctx),
	asn_MAP_DeltaTxD_OffsetListPUCCH_r10_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DeltaTxD_OffsetListPUCCH_r10 = {
	"DeltaTxD-OffsetListPUCCH-r10",
	"DeltaTxD-OffsetListPUCCH-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_DeltaTxD_OffsetListPUCCH_r10_tags_1,
	sizeof(asn_DEF_DeltaTxD_OffsetListPUCCH_r10_tags_1)
		/sizeof(asn_DEF_DeltaTxD_OffsetListPUCCH_r10_tags_1[0]), /* 1 */
	asn_DEF_DeltaTxD_OffsetListPUCCH_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_DeltaTxD_OffsetListPUCCH_r10_tags_1)
		/sizeof(asn_DEF_DeltaTxD_OffsetListPUCCH_r10_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DeltaTxD_OffsetListPUCCH_r10_1,
	4,	/* Elements count */
	&asn_SPC_DeltaTxD_OffsetListPUCCH_r10_specs_1	/* Additional specs */
};

