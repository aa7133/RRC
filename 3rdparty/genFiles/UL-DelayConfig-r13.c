/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "UL-DelayConfig-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_delayThreshold_r13_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_UL_DelayConfig_r13_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_delayThreshold_r13_value2enum_4[] = {
	{ 0,	4,	"ms30" },
	{ 1,	4,	"ms40" },
	{ 2,	4,	"ms50" },
	{ 3,	4,	"ms60" },
	{ 4,	4,	"ms70" },
	{ 5,	4,	"ms80" },
	{ 6,	4,	"ms90" },
	{ 7,	5,	"ms100" },
	{ 8,	5,	"ms150" },
	{ 9,	5,	"ms300" },
	{ 10,	5,	"ms500" },
	{ 11,	5,	"ms750" },
	{ 12,	6,	"spare4" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_delayThreshold_r13_enum2value_4[] = {
	7,	/* ms100(7) */
	8,	/* ms150(8) */
	0,	/* ms30(0) */
	9,	/* ms300(9) */
	1,	/* ms40(1) */
	2,	/* ms50(2) */
	10,	/* ms500(10) */
	3,	/* ms60(3) */
	4,	/* ms70(4) */
	11,	/* ms750(11) */
	5,	/* ms80(5) */
	6,	/* ms90(6) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13,	/* spare3(13) */
	12	/* spare4(12) */
};
static const asn_INTEGER_specifics_t asn_SPC_delayThreshold_r13_specs_4 = {
	asn_MAP_delayThreshold_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_delayThreshold_r13_enum2value_4,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_delayThreshold_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_delayThreshold_r13_4 = {
	"delayThreshold-r13",
	"delayThreshold-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_delayThreshold_r13_tags_4,
	sizeof(asn_DEF_delayThreshold_r13_tags_4)
		/sizeof(asn_DEF_delayThreshold_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_delayThreshold_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_delayThreshold_r13_tags_4)
		/sizeof(asn_DEF_delayThreshold_r13_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_delayThreshold_r13_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_delayThreshold_r13_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DelayConfig_r13__setup, delayThreshold_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_delayThreshold_r13_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"delayThreshold-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* delayThreshold-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct UL_DelayConfig_r13__setup),
	offsetof(struct UL_DelayConfig_r13__setup, _asn_ctx),
	asn_MAP_setup_tag2el_3,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
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
	1,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UL_DelayConfig_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DelayConfig_r13, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_POINTER, 0, offsetof(struct UL_DelayConfig_r13, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_UL_DelayConfig_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_UL_DelayConfig_r13_specs_1 = {
	sizeof(struct UL_DelayConfig_r13),
	offsetof(struct UL_DelayConfig_r13, _asn_ctx),
	offsetof(struct UL_DelayConfig_r13, present),
	sizeof(((struct UL_DelayConfig_r13 *)0)->present),
	asn_MAP_UL_DelayConfig_r13_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_UL_DelayConfig_r13 = {
	"UL-DelayConfig-r13",
	"UL-DelayConfig-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_UL_DelayConfig_r13_constr_1, CHOICE_constraint },
	asn_MBR_UL_DelayConfig_r13_1,
	2,	/* Elements count */
	&asn_SPC_UL_DelayConfig_r13_specs_1	/* Additional specs */
};

