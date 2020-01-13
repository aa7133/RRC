/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "InterFreqCarrierFreqInfo-v10l0.h"

#include "NS-PmaxList-v10l0.h"
#include "MultiBandInfoList-v10l0.h"
asn_TYPE_member_t asn_MBR_InterFreqCarrierFreqInfo_v10l0_1[] = {
	{ ATF_POINTER, 2, offsetof(struct InterFreqCarrierFreqInfo_v10l0, freqBandInfo_v10l0),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NS_PmaxList_v10l0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"freqBandInfo-v10l0"
		},
	{ ATF_POINTER, 1, offsetof(struct InterFreqCarrierFreqInfo_v10l0, multiBandInfoList_v10l0),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MultiBandInfoList_v10l0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"multiBandInfoList-v10l0"
		},
};
static const int asn_MAP_InterFreqCarrierFreqInfo_v10l0_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_InterFreqCarrierFreqInfo_v10l0_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_InterFreqCarrierFreqInfo_v10l0_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* freqBandInfo-v10l0 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* multiBandInfoList-v10l0 */
};
asn_SEQUENCE_specifics_t asn_SPC_InterFreqCarrierFreqInfo_v10l0_specs_1 = {
	sizeof(struct InterFreqCarrierFreqInfo_v10l0),
	offsetof(struct InterFreqCarrierFreqInfo_v10l0, _asn_ctx),
	asn_MAP_InterFreqCarrierFreqInfo_v10l0_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_InterFreqCarrierFreqInfo_v10l0_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_InterFreqCarrierFreqInfo_v10l0 = {
	"InterFreqCarrierFreqInfo-v10l0",
	"InterFreqCarrierFreqInfo-v10l0",
	&asn_OP_SEQUENCE,
	asn_DEF_InterFreqCarrierFreqInfo_v10l0_tags_1,
	sizeof(asn_DEF_InterFreqCarrierFreqInfo_v10l0_tags_1)
		/sizeof(asn_DEF_InterFreqCarrierFreqInfo_v10l0_tags_1[0]), /* 1 */
	asn_DEF_InterFreqCarrierFreqInfo_v10l0_tags_1,	/* Same as above */
	sizeof(asn_DEF_InterFreqCarrierFreqInfo_v10l0_tags_1)
		/sizeof(asn_DEF_InterFreqCarrierFreqInfo_v10l0_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_InterFreqCarrierFreqInfo_v10l0_1,
	2,	/* Elements count */
	&asn_SPC_InterFreqCarrierFreqInfo_v10l0_specs_1	/* Additional specs */
};

