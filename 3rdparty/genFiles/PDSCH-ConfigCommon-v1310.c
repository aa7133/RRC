/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#include "PDSCH-ConfigCommon-v1310.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_pdsch_maxNumRepetitionCEmodeA_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_pdsch_maxNumRepetitionCEmodeB_r13_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_pdsch_maxNumRepetitionCEmodeA_r13_value2enum_2[] = {
	{ 0,	3,	"r16" },
	{ 1,	3,	"r32" }
};
static const unsigned int asn_MAP_pdsch_maxNumRepetitionCEmodeA_r13_enum2value_2[] = {
	0,	/* r16(0) */
	1	/* r32(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_pdsch_maxNumRepetitionCEmodeA_r13_specs_2 = {
	asn_MAP_pdsch_maxNumRepetitionCEmodeA_r13_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_pdsch_maxNumRepetitionCEmodeA_r13_enum2value_2,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_pdsch_maxNumRepetitionCEmodeA_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pdsch_maxNumRepetitionCEmodeA_r13_2 = {
	"pdsch-maxNumRepetitionCEmodeA-r13",
	"pdsch-maxNumRepetitionCEmodeA-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_pdsch_maxNumRepetitionCEmodeA_r13_tags_2,
	sizeof(asn_DEF_pdsch_maxNumRepetitionCEmodeA_r13_tags_2)
		/sizeof(asn_DEF_pdsch_maxNumRepetitionCEmodeA_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_pdsch_maxNumRepetitionCEmodeA_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_pdsch_maxNumRepetitionCEmodeA_r13_tags_2)
		/sizeof(asn_DEF_pdsch_maxNumRepetitionCEmodeA_r13_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_pdsch_maxNumRepetitionCEmodeA_r13_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_pdsch_maxNumRepetitionCEmodeA_r13_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_pdsch_maxNumRepetitionCEmodeB_r13_value2enum_5[] = {
	{ 0,	4,	"r192" },
	{ 1,	4,	"r256" },
	{ 2,	4,	"r384" },
	{ 3,	4,	"r512" },
	{ 4,	4,	"r768" },
	{ 5,	5,	"r1024" },
	{ 6,	5,	"r1536" },
	{ 7,	5,	"r2048" }
};
static const unsigned int asn_MAP_pdsch_maxNumRepetitionCEmodeB_r13_enum2value_5[] = {
	5,	/* r1024(5) */
	6,	/* r1536(6) */
	0,	/* r192(0) */
	7,	/* r2048(7) */
	1,	/* r256(1) */
	2,	/* r384(2) */
	3,	/* r512(3) */
	4	/* r768(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_pdsch_maxNumRepetitionCEmodeB_r13_specs_5 = {
	asn_MAP_pdsch_maxNumRepetitionCEmodeB_r13_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_pdsch_maxNumRepetitionCEmodeB_r13_enum2value_5,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_pdsch_maxNumRepetitionCEmodeB_r13_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pdsch_maxNumRepetitionCEmodeB_r13_5 = {
	"pdsch-maxNumRepetitionCEmodeB-r13",
	"pdsch-maxNumRepetitionCEmodeB-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_pdsch_maxNumRepetitionCEmodeB_r13_tags_5,
	sizeof(asn_DEF_pdsch_maxNumRepetitionCEmodeB_r13_tags_5)
		/sizeof(asn_DEF_pdsch_maxNumRepetitionCEmodeB_r13_tags_5[0]) - 1, /* 1 */
	asn_DEF_pdsch_maxNumRepetitionCEmodeB_r13_tags_5,	/* Same as above */
	sizeof(asn_DEF_pdsch_maxNumRepetitionCEmodeB_r13_tags_5)
		/sizeof(asn_DEF_pdsch_maxNumRepetitionCEmodeB_r13_tags_5[0]), /* 2 */
	{ 0, &asn_PER_type_pdsch_maxNumRepetitionCEmodeB_r13_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_pdsch_maxNumRepetitionCEmodeB_r13_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PDSCH_ConfigCommon_v1310_1[] = {
	{ ATF_POINTER, 2, offsetof(struct PDSCH_ConfigCommon_v1310, pdsch_maxNumRepetitionCEmodeA_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_pdsch_maxNumRepetitionCEmodeA_r13_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-maxNumRepetitionCEmodeA-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct PDSCH_ConfigCommon_v1310, pdsch_maxNumRepetitionCEmodeB_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_pdsch_maxNumRepetitionCEmodeB_r13_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-maxNumRepetitionCEmodeB-r13"
		},
};
static const int asn_MAP_PDSCH_ConfigCommon_v1310_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_PDSCH_ConfigCommon_v1310_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PDSCH_ConfigCommon_v1310_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pdsch-maxNumRepetitionCEmodeA-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* pdsch-maxNumRepetitionCEmodeB-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_PDSCH_ConfigCommon_v1310_specs_1 = {
	sizeof(struct PDSCH_ConfigCommon_v1310),
	offsetof(struct PDSCH_ConfigCommon_v1310, _asn_ctx),
	asn_MAP_PDSCH_ConfigCommon_v1310_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_PDSCH_ConfigCommon_v1310_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PDSCH_ConfigCommon_v1310 = {
	"PDSCH-ConfigCommon-v1310",
	"PDSCH-ConfigCommon-v1310",
	&asn_OP_SEQUENCE,
	asn_DEF_PDSCH_ConfigCommon_v1310_tags_1,
	sizeof(asn_DEF_PDSCH_ConfigCommon_v1310_tags_1)
		/sizeof(asn_DEF_PDSCH_ConfigCommon_v1310_tags_1[0]), /* 1 */
	asn_DEF_PDSCH_ConfigCommon_v1310_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDSCH_ConfigCommon_v1310_tags_1)
		/sizeof(asn_DEF_PDSCH_ConfigCommon_v1310_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PDSCH_ConfigCommon_v1310_1,
	2,	/* Elements count */
	&asn_SPC_PDSCH_ConfigCommon_v1310_specs_1	/* Additional specs */
};

