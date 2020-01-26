/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#include "MeasResultServCellSCG-r12.h"

static asn_TYPE_member_t asn_MBR_measResultSCell_r12_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultServCellSCG_r12__measResultSCell_r12, rsrpResultSCell_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrpResultSCell-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultServCellSCG_r12__measResultSCell_r12, rsrqResultSCell_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrqResultSCell-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_measResultSCell_r12_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_measResultSCell_r12_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rsrpResultSCell-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* rsrqResultSCell-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_measResultSCell_r12_specs_3 = {
	sizeof(struct MeasResultServCellSCG_r12__measResultSCell_r12),
	offsetof(struct MeasResultServCellSCG_r12__measResultSCell_r12, _asn_ctx),
	asn_MAP_measResultSCell_r12_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measResultSCell_r12_3 = {
	"measResultSCell-r12",
	"measResultSCell-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_measResultSCell_r12_tags_3,
	sizeof(asn_DEF_measResultSCell_r12_tags_3)
		/sizeof(asn_DEF_measResultSCell_r12_tags_3[0]) - 1, /* 1 */
	asn_DEF_measResultSCell_r12_tags_3,	/* Same as above */
	sizeof(asn_DEF_measResultSCell_r12_tags_3)
		/sizeof(asn_DEF_measResultSCell_r12_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_measResultSCell_r12_3,
	2,	/* Elements count */
	&asn_SPC_measResultSCell_r12_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_measResultSCell_v1310_9[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultServCellSCG_r12__ext1__measResultSCell_v1310, rs_sinr_ResultSCell_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RS_SINR_Range_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rs-sinr-ResultSCell-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_measResultSCell_v1310_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_measResultSCell_v1310_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* rs-sinr-ResultSCell-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_measResultSCell_v1310_specs_9 = {
	sizeof(struct MeasResultServCellSCG_r12__ext1__measResultSCell_v1310),
	offsetof(struct MeasResultServCellSCG_r12__ext1__measResultSCell_v1310, _asn_ctx),
	asn_MAP_measResultSCell_v1310_tag2el_9,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measResultSCell_v1310_9 = {
	"measResultSCell-v1310",
	"measResultSCell-v1310",
	&asn_OP_SEQUENCE,
	asn_DEF_measResultSCell_v1310_tags_9,
	sizeof(asn_DEF_measResultSCell_v1310_tags_9)
		/sizeof(asn_DEF_measResultSCell_v1310_tags_9[0]) - 1, /* 1 */
	asn_DEF_measResultSCell_v1310_tags_9,	/* Same as above */
	sizeof(asn_DEF_measResultSCell_v1310_tags_9)
		/sizeof(asn_DEF_measResultSCell_v1310_tags_9[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_measResultSCell_v1310_9,
	1,	/* Elements count */
	&asn_SPC_measResultSCell_v1310_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_7[] = {
	{ ATF_POINTER, 2, offsetof(struct MeasResultServCellSCG_r12__ext1, servCellId_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ServCellIndex_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"servCellId-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultServCellSCG_r12__ext1, measResultSCell_v1310),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_measResultSCell_v1310_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultSCell-v1310"
		},
};
static const int asn_MAP_ext1_oms_7[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* servCellId-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* measResultSCell-v1310 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_7 = {
	sizeof(struct MeasResultServCellSCG_r12__ext1),
	offsetof(struct MeasResultServCellSCG_r12__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_7,
	2,	/* Count of tags in the map */
	asn_MAP_ext1_oms_7,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_7 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_7,
	sizeof(asn_DEF_ext1_tags_7)
		/sizeof(asn_DEF_ext1_tags_7[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_7,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_7)
		/sizeof(asn_DEF_ext1_tags_7[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_7,
	2,	/* Elements count */
	&asn_SPC_ext1_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MeasResultServCellSCG_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultServCellSCG_r12, servCellId_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ServCellIndex_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"servCellId-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultServCellSCG_r12, measResultSCell_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_measResultSCell_r12_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultSCell-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultServCellSCG_r12, ext1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_ext1_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_MeasResultServCellSCG_r12_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_MeasResultServCellSCG_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasResultServCellSCG_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* servCellId-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measResultSCell-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasResultServCellSCG_r12_specs_1 = {
	sizeof(struct MeasResultServCellSCG_r12),
	offsetof(struct MeasResultServCellSCG_r12, _asn_ctx),
	asn_MAP_MeasResultServCellSCG_r12_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_MeasResultServCellSCG_r12_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasResultServCellSCG_r12 = {
	"MeasResultServCellSCG-r12",
	"MeasResultServCellSCG-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasResultServCellSCG_r12_tags_1,
	sizeof(asn_DEF_MeasResultServCellSCG_r12_tags_1)
		/sizeof(asn_DEF_MeasResultServCellSCG_r12_tags_1[0]), /* 1 */
	asn_DEF_MeasResultServCellSCG_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasResultServCellSCG_r12_tags_1)
		/sizeof(asn_DEF_MeasResultServCellSCG_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasResultServCellSCG_r12_1,
	3,	/* Elements count */
	&asn_SPC_MeasResultServCellSCG_r12_specs_1	/* Additional specs */
};

