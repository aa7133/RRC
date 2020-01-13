/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "BandCombinationParametersExt-r10.h"

asn_TYPE_member_t asn_MBR_BandCombinationParametersExt_r10_1[] = {
	{ ATF_POINTER, 1, offsetof(struct BandCombinationParametersExt_r10, supportedBandwidthCombinationSet_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SupportedBandwidthCombinationSet_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedBandwidthCombinationSet-r10"
		},
};
static const int asn_MAP_BandCombinationParametersExt_r10_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_BandCombinationParametersExt_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BandCombinationParametersExt_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* supportedBandwidthCombinationSet-r10 */
};
asn_SEQUENCE_specifics_t asn_SPC_BandCombinationParametersExt_r10_specs_1 = {
	sizeof(struct BandCombinationParametersExt_r10),
	offsetof(struct BandCombinationParametersExt_r10, _asn_ctx),
	asn_MAP_BandCombinationParametersExt_r10_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_BandCombinationParametersExt_r10_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BandCombinationParametersExt_r10 = {
	"BandCombinationParametersExt-r10",
	"BandCombinationParametersExt-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_BandCombinationParametersExt_r10_tags_1,
	sizeof(asn_DEF_BandCombinationParametersExt_r10_tags_1)
		/sizeof(asn_DEF_BandCombinationParametersExt_r10_tags_1[0]), /* 1 */
	asn_DEF_BandCombinationParametersExt_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_BandCombinationParametersExt_r10_tags_1)
		/sizeof(asn_DEF_BandCombinationParametersExt_r10_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_BandCombinationParametersExt_r10_1,
	1,	/* Elements count */
	&asn_SPC_BandCombinationParametersExt_r10_specs_1	/* Additional specs */
};

