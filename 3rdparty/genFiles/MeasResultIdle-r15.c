/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "MeasResultIdle-r15.h"

#include "MeasResultIdleListEUTRA-r15.h"
static asn_per_constraints_t asn_PER_type_measResultNeighCells_r15_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_measResultServingCell_r15_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultIdle_r15__measResultServingCell_r15, rsrpResult_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrpResult-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultIdle_r15__measResultServingCell_r15, rsrqResult_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_Range_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrqResult-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_measResultServingCell_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_measResultServingCell_r15_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rsrpResult-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* rsrqResult-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_measResultServingCell_r15_specs_2 = {
	sizeof(struct MeasResultIdle_r15__measResultServingCell_r15),
	offsetof(struct MeasResultIdle_r15__measResultServingCell_r15, _asn_ctx),
	asn_MAP_measResultServingCell_r15_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measResultServingCell_r15_2 = {
	"measResultServingCell-r15",
	"measResultServingCell-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_measResultServingCell_r15_tags_2,
	sizeof(asn_DEF_measResultServingCell_r15_tags_2)
		/sizeof(asn_DEF_measResultServingCell_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_measResultServingCell_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_measResultServingCell_r15_tags_2)
		/sizeof(asn_DEF_measResultServingCell_r15_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_measResultServingCell_r15_2,
	2,	/* Elements count */
	&asn_SPC_measResultServingCell_r15_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_measResultNeighCells_r15_5[] = {
	{ ATF_POINTER, 0, offsetof(struct MeasResultIdle_r15__measResultNeighCells_r15, choice.measResultIdleListEUTRA_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultIdleListEUTRA_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultIdleListEUTRA-r15"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_measResultNeighCells_r15_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* measResultIdleListEUTRA-r15 */
};
static asn_CHOICE_specifics_t asn_SPC_measResultNeighCells_r15_specs_5 = {
	sizeof(struct MeasResultIdle_r15__measResultNeighCells_r15),
	offsetof(struct MeasResultIdle_r15__measResultNeighCells_r15, _asn_ctx),
	offsetof(struct MeasResultIdle_r15__measResultNeighCells_r15, present),
	sizeof(((struct MeasResultIdle_r15__measResultNeighCells_r15 *)0)->present),
	asn_MAP_measResultNeighCells_r15_tag2el_5,
	1,	/* Count of tags in the map */
	0, 0,
	1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measResultNeighCells_r15_5 = {
	"measResultNeighCells-r15",
	"measResultNeighCells-r15",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_measResultNeighCells_r15_constr_5, CHOICE_constraint },
	asn_MBR_measResultNeighCells_r15_5,
	1,	/* Elements count */
	&asn_SPC_measResultNeighCells_r15_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MeasResultIdle_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultIdle_r15, measResultServingCell_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_measResultServingCell_r15_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultServingCell-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultIdle_r15, measResultNeighCells_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_measResultNeighCells_r15_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultNeighCells-r15"
		},
};
static const int asn_MAP_MeasResultIdle_r15_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_MeasResultIdle_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasResultIdle_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measResultServingCell-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* measResultNeighCells-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasResultIdle_r15_specs_1 = {
	sizeof(struct MeasResultIdle_r15),
	offsetof(struct MeasResultIdle_r15, _asn_ctx),
	asn_MAP_MeasResultIdle_r15_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_MeasResultIdle_r15_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasResultIdle_r15 = {
	"MeasResultIdle-r15",
	"MeasResultIdle-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasResultIdle_r15_tags_1,
	sizeof(asn_DEF_MeasResultIdle_r15_tags_1)
		/sizeof(asn_DEF_MeasResultIdle_r15_tags_1[0]), /* 1 */
	asn_DEF_MeasResultIdle_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasResultIdle_r15_tags_1)
		/sizeof(asn_DEF_MeasResultIdle_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasResultIdle_r15_1,
	2,	/* Elements count */
	&asn_SPC_MeasResultIdle_r15_specs_1	/* Additional specs */
};

