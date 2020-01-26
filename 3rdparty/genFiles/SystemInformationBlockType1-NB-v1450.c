/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#include "SystemInformationBlockType1-NB-v1450.h"

#include "SystemInformationBlockType1-NB-v1530.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_nrs_CRS_PowerOffset_v1450_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_nrs_CRS_PowerOffset_v1450_value2enum_2[] = {
	{ 0,	4,	"dB-6" },
	{ 1,	9,	"dB-4dot77" },
	{ 2,	4,	"dB-3" },
	{ 3,	9,	"dB-1dot77" },
	{ 4,	3,	"dB0" },
	{ 5,	3,	"dB1" },
	{ 6,	8,	"dB1dot23" },
	{ 7,	3,	"dB2" },
	{ 8,	3,	"dB3" },
	{ 9,	3,	"dB4" },
	{ 10,	8,	"dB4dot23" },
	{ 11,	3,	"dB5" },
	{ 12,	3,	"dB6" },
	{ 13,	3,	"dB7" },
	{ 14,	3,	"dB8" },
	{ 15,	3,	"dB9" }
};
static const unsigned int asn_MAP_nrs_CRS_PowerOffset_v1450_enum2value_2[] = {
	3,	/* dB-1dot77(3) */
	2,	/* dB-3(2) */
	1,	/* dB-4dot77(1) */
	0,	/* dB-6(0) */
	4,	/* dB0(4) */
	5,	/* dB1(5) */
	6,	/* dB1dot23(6) */
	7,	/* dB2(7) */
	8,	/* dB3(8) */
	9,	/* dB4(9) */
	10,	/* dB4dot23(10) */
	11,	/* dB5(11) */
	12,	/* dB6(12) */
	13,	/* dB7(13) */
	14,	/* dB8(14) */
	15	/* dB9(15) */
};
static const asn_INTEGER_specifics_t asn_SPC_nrs_CRS_PowerOffset_v1450_specs_2 = {
	asn_MAP_nrs_CRS_PowerOffset_v1450_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_nrs_CRS_PowerOffset_v1450_enum2value_2,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_nrs_CRS_PowerOffset_v1450_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nrs_CRS_PowerOffset_v1450_2 = {
	"nrs-CRS-PowerOffset-v1450",
	"nrs-CRS-PowerOffset-v1450",
	&asn_OP_NativeEnumerated,
	asn_DEF_nrs_CRS_PowerOffset_v1450_tags_2,
	sizeof(asn_DEF_nrs_CRS_PowerOffset_v1450_tags_2)
		/sizeof(asn_DEF_nrs_CRS_PowerOffset_v1450_tags_2[0]) - 1, /* 1 */
	asn_DEF_nrs_CRS_PowerOffset_v1450_tags_2,	/* Same as above */
	sizeof(asn_DEF_nrs_CRS_PowerOffset_v1450_tags_2)
		/sizeof(asn_DEF_nrs_CRS_PowerOffset_v1450_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_nrs_CRS_PowerOffset_v1450_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_nrs_CRS_PowerOffset_v1450_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SystemInformationBlockType1_NB_v1450_1[] = {
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType1_NB_v1450, nrs_CRS_PowerOffset_v1450),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_nrs_CRS_PowerOffset_v1450_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nrs-CRS-PowerOffset-v1450"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType1_NB_v1450, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType1_NB_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_SystemInformationBlockType1_NB_v1450_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_SystemInformationBlockType1_NB_v1450_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType1_NB_v1450_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nrs-CRS-PowerOffset-v1450 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType1_NB_v1450_specs_1 = {
	sizeof(struct SystemInformationBlockType1_NB_v1450),
	offsetof(struct SystemInformationBlockType1_NB_v1450, _asn_ctx),
	asn_MAP_SystemInformationBlockType1_NB_v1450_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType1_NB_v1450_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType1_NB_v1450 = {
	"SystemInformationBlockType1-NB-v1450",
	"SystemInformationBlockType1-NB-v1450",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemInformationBlockType1_NB_v1450_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType1_NB_v1450_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType1_NB_v1450_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType1_NB_v1450_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType1_NB_v1450_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType1_NB_v1450_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SystemInformationBlockType1_NB_v1450_1,
	2,	/* Elements count */
	&asn_SPC_SystemInformationBlockType1_NB_v1450_specs_1	/* Additional specs */
};

