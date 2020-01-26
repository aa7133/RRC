/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#include "CellSelectionInfoCE-v1530.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_powerClass14dBm_Offset_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_powerClass14dBm_Offset_r15_value2enum_2[] = {
	{ 0,	4,	"dB-6" },
	{ 1,	4,	"dB-3" },
	{ 2,	3,	"dB3" },
	{ 3,	3,	"dB6" },
	{ 4,	3,	"dB9" },
	{ 5,	4,	"dB12" }
};
static const unsigned int asn_MAP_powerClass14dBm_Offset_r15_enum2value_2[] = {
	1,	/* dB-3(1) */
	0,	/* dB-6(0) */
	5,	/* dB12(5) */
	2,	/* dB3(2) */
	3,	/* dB6(3) */
	4	/* dB9(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_powerClass14dBm_Offset_r15_specs_2 = {
	asn_MAP_powerClass14dBm_Offset_r15_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_powerClass14dBm_Offset_r15_enum2value_2,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_powerClass14dBm_Offset_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_powerClass14dBm_Offset_r15_2 = {
	"powerClass14dBm-Offset-r15",
	"powerClass14dBm-Offset-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_powerClass14dBm_Offset_r15_tags_2,
	sizeof(asn_DEF_powerClass14dBm_Offset_r15_tags_2)
		/sizeof(asn_DEF_powerClass14dBm_Offset_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_powerClass14dBm_Offset_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_powerClass14dBm_Offset_r15_tags_2)
		/sizeof(asn_DEF_powerClass14dBm_Offset_r15_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_powerClass14dBm_Offset_r15_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_powerClass14dBm_Offset_r15_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CellSelectionInfoCE_v1530_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellSelectionInfoCE_v1530, powerClass14dBm_Offset_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_powerClass14dBm_Offset_r15_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"powerClass14dBm-Offset-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_CellSelectionInfoCE_v1530_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CellSelectionInfoCE_v1530_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* powerClass14dBm-Offset-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_CellSelectionInfoCE_v1530_specs_1 = {
	sizeof(struct CellSelectionInfoCE_v1530),
	offsetof(struct CellSelectionInfoCE_v1530, _asn_ctx),
	asn_MAP_CellSelectionInfoCE_v1530_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CellSelectionInfoCE_v1530 = {
	"CellSelectionInfoCE-v1530",
	"CellSelectionInfoCE-v1530",
	&asn_OP_SEQUENCE,
	asn_DEF_CellSelectionInfoCE_v1530_tags_1,
	sizeof(asn_DEF_CellSelectionInfoCE_v1530_tags_1)
		/sizeof(asn_DEF_CellSelectionInfoCE_v1530_tags_1[0]), /* 1 */
	asn_DEF_CellSelectionInfoCE_v1530_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellSelectionInfoCE_v1530_tags_1)
		/sizeof(asn_DEF_CellSelectionInfoCE_v1530_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CellSelectionInfoCE_v1530_1,
	1,	/* Elements count */
	&asn_SPC_CellSelectionInfoCE_v1530_specs_1	/* Additional specs */
};

