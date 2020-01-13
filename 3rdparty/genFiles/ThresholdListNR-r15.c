/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "ThresholdListNR-r15.h"

asn_TYPE_member_t asn_MBR_ThresholdListNR_r15_1[] = {
	{ ATF_POINTER, 3, offsetof(struct ThresholdListNR_r15, nr_RSRP_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_RangeNR_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nr-RSRP-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct ThresholdListNR_r15, nr_RSRQ_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_RangeNR_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nr-RSRQ-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct ThresholdListNR_r15, nr_SINR_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RS_SINR_RangeNR_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nr-SINR-r15"
		},
};
static const int asn_MAP_ThresholdListNR_r15_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_ThresholdListNR_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ThresholdListNR_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nr-RSRP-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nr-RSRQ-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nr-SINR-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_ThresholdListNR_r15_specs_1 = {
	sizeof(struct ThresholdListNR_r15),
	offsetof(struct ThresholdListNR_r15, _asn_ctx),
	asn_MAP_ThresholdListNR_r15_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_ThresholdListNR_r15_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ThresholdListNR_r15 = {
	"ThresholdListNR-r15",
	"ThresholdListNR-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_ThresholdListNR_r15_tags_1,
	sizeof(asn_DEF_ThresholdListNR_r15_tags_1)
		/sizeof(asn_DEF_ThresholdListNR_r15_tags_1[0]), /* 1 */
	asn_DEF_ThresholdListNR_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_ThresholdListNR_r15_tags_1)
		/sizeof(asn_DEF_ThresholdListNR_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ThresholdListNR_r15_1,
	3,	/* Elements count */
	&asn_SPC_ThresholdListNR_r15_specs_1	/* Additional specs */
};

