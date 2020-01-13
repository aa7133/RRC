/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "MeasResultServCell-NB-r14.h"

asn_TYPE_member_t asn_MBR_MeasResultServCell_NB_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultServCell_NB_r14, nrsrpResult_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NRSRP_Range_NB_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nrsrpResult-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultServCell_NB_r14, nrsrqResult_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NRSRQ_Range_NB_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nrsrqResult-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_MeasResultServCell_NB_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasResultServCell_NB_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nrsrpResult-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nrsrqResult-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasResultServCell_NB_r14_specs_1 = {
	sizeof(struct MeasResultServCell_NB_r14),
	offsetof(struct MeasResultServCell_NB_r14, _asn_ctx),
	asn_MAP_MeasResultServCell_NB_r14_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasResultServCell_NB_r14 = {
	"MeasResultServCell-NB-r14",
	"MeasResultServCell-NB-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasResultServCell_NB_r14_tags_1,
	sizeof(asn_DEF_MeasResultServCell_NB_r14_tags_1)
		/sizeof(asn_DEF_MeasResultServCell_NB_r14_tags_1[0]), /* 1 */
	asn_DEF_MeasResultServCell_NB_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasResultServCell_NB_r14_tags_1)
		/sizeof(asn_DEF_MeasResultServCell_NB_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasResultServCell_NB_r14_1,
	2,	/* Elements count */
	&asn_SPC_MeasResultServCell_NB_r14_specs_1	/* Additional specs */
};

