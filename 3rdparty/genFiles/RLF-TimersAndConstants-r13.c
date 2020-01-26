/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#include "RLF-TimersAndConstants-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_t301_v1310_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_t310_v1330_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_RLF_TimersAndConstants_r13_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_t301_v1310_value2enum_4[] = {
	{ 0,	6,	"ms2500" },
	{ 1,	6,	"ms3000" },
	{ 2,	6,	"ms3500" },
	{ 3,	6,	"ms4000" },
	{ 4,	6,	"ms5000" },
	{ 5,	6,	"ms6000" },
	{ 6,	6,	"ms8000" },
	{ 7,	7,	"ms10000" }
};
static const unsigned int asn_MAP_t301_v1310_enum2value_4[] = {
	7,	/* ms10000(7) */
	0,	/* ms2500(0) */
	1,	/* ms3000(1) */
	2,	/* ms3500(2) */
	3,	/* ms4000(3) */
	4,	/* ms5000(4) */
	5,	/* ms6000(5) */
	6	/* ms8000(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_t301_v1310_specs_4 = {
	asn_MAP_t301_v1310_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_t301_v1310_enum2value_4,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_t301_v1310_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_t301_v1310_4 = {
	"t301-v1310",
	"t301-v1310",
	&asn_OP_NativeEnumerated,
	asn_DEF_t301_v1310_tags_4,
	sizeof(asn_DEF_t301_v1310_tags_4)
		/sizeof(asn_DEF_t301_v1310_tags_4[0]) - 1, /* 1 */
	asn_DEF_t301_v1310_tags_4,	/* Same as above */
	sizeof(asn_DEF_t301_v1310_tags_4)
		/sizeof(asn_DEF_t301_v1310_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_t301_v1310_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_t301_v1310_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_t310_v1330_value2enum_15[] = {
	{ 0,	6,	"ms4000" },
	{ 1,	6,	"ms6000" }
};
static const unsigned int asn_MAP_t310_v1330_enum2value_15[] = {
	0,	/* ms4000(0) */
	1	/* ms6000(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_t310_v1330_specs_15 = {
	asn_MAP_t310_v1330_value2enum_15,	/* "tag" => N; sorted by tag */
	asn_MAP_t310_v1330_enum2value_15,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_t310_v1330_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_t310_v1330_15 = {
	"t310-v1330",
	"t310-v1330",
	&asn_OP_NativeEnumerated,
	asn_DEF_t310_v1330_tags_15,
	sizeof(asn_DEF_t310_v1330_tags_15)
		/sizeof(asn_DEF_t310_v1330_tags_15[0]) - 1, /* 1 */
	asn_DEF_t310_v1330_tags_15,	/* Same as above */
	sizeof(asn_DEF_t310_v1330_tags_15)
		/sizeof(asn_DEF_t310_v1330_tags_15[0]), /* 2 */
	{ 0, &asn_PER_type_t310_v1330_constr_15, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_t310_v1330_specs_15	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_14[] = {
	{ ATF_POINTER, 1, offsetof(struct RLF_TimersAndConstants_r13__setup__ext1, t310_v1330),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_t310_v1330_15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t310-v1330"
		},
};
static const int asn_MAP_ext1_oms_14[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_14[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* t310-v1330 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_14 = {
	sizeof(struct RLF_TimersAndConstants_r13__setup__ext1),
	offsetof(struct RLF_TimersAndConstants_r13__setup__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_14,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_14,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_14 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_14,
	sizeof(asn_DEF_ext1_tags_14)
		/sizeof(asn_DEF_ext1_tags_14[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_14,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_14)
		/sizeof(asn_DEF_ext1_tags_14[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_14,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RLF_TimersAndConstants_r13__setup, t301_v1310),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_t301_v1310_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t301-v1310"
		},
	{ ATF_POINTER, 1, offsetof(struct RLF_TimersAndConstants_r13__setup, ext1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ext1_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_setup_oms_3[] = { 1 };
static const ber_tlv_tag_t asn_DEF_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* t301-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ext1 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct RLF_TimersAndConstants_r13__setup),
	offsetof(struct RLF_TimersAndConstants_r13__setup, _asn_ctx),
	asn_MAP_setup_tag2el_3,
	2,	/* Count of tags in the map */
	asn_MAP_setup_oms_3,	/* Optional members */
	0, 1,	/* Root/Additions */
	1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_3 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_3,
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]) - 1, /* 1 */
	asn_DEF_setup_tags_3,	/* Same as above */
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_setup_3,
	2,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RLF_TimersAndConstants_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RLF_TimersAndConstants_r13, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_POINTER, 0, offsetof(struct RLF_TimersAndConstants_r13, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_RLF_TimersAndConstants_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_RLF_TimersAndConstants_r13_specs_1 = {
	sizeof(struct RLF_TimersAndConstants_r13),
	offsetof(struct RLF_TimersAndConstants_r13, _asn_ctx),
	offsetof(struct RLF_TimersAndConstants_r13, present),
	sizeof(((struct RLF_TimersAndConstants_r13 *)0)->present),
	asn_MAP_RLF_TimersAndConstants_r13_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_RLF_TimersAndConstants_r13 = {
	"RLF-TimersAndConstants-r13",
	"RLF-TimersAndConstants-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_RLF_TimersAndConstants_r13_constr_1, CHOICE_constraint },
	asn_MBR_RLF_TimersAndConstants_r13_1,
	2,	/* Elements count */
	&asn_SPC_RLF_TimersAndConstants_r13_specs_1	/* Additional specs */
};

