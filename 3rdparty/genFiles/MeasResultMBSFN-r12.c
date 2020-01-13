/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "MeasResultMBSFN-r12.h"

#include "BLER-Result-r12.h"
#include "DataBLER-MCH-ResultList-r12.h"
static asn_TYPE_member_t asn_MBR_mbsfn_Area_r12_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultMBSFN_r12__mbsfn_Area_r12, mbsfn_AreaId_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBSFN_AreaId_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbsfn-AreaId-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultMBSFN_r12__mbsfn_Area_r12, carrierFreq_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_mbsfn_Area_r12_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_mbsfn_Area_r12_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mbsfn-AreaId-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* carrierFreq-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_mbsfn_Area_r12_specs_2 = {
	sizeof(struct MeasResultMBSFN_r12__mbsfn_Area_r12),
	offsetof(struct MeasResultMBSFN_r12__mbsfn_Area_r12, _asn_ctx),
	asn_MAP_mbsfn_Area_r12_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mbsfn_Area_r12_2 = {
	"mbsfn-Area-r12",
	"mbsfn-Area-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_mbsfn_Area_r12_tags_2,
	sizeof(asn_DEF_mbsfn_Area_r12_tags_2)
		/sizeof(asn_DEF_mbsfn_Area_r12_tags_2[0]) - 1, /* 1 */
	asn_DEF_mbsfn_Area_r12_tags_2,	/* Same as above */
	sizeof(asn_DEF_mbsfn_Area_r12_tags_2)
		/sizeof(asn_DEF_mbsfn_Area_r12_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_mbsfn_Area_r12_2,
	2,	/* Elements count */
	&asn_SPC_mbsfn_Area_r12_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MeasResultMBSFN_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultMBSFN_r12, mbsfn_Area_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_mbsfn_Area_r12_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbsfn-Area-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultMBSFN_r12, rsrpResultMBSFN_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrpResultMBSFN-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultMBSFN_r12, rsrqResultMBSFN_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBSFN_RSRQ_Range_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrqResultMBSFN-r12"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasResultMBSFN_r12, signallingBLER_Result_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BLER_Result_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"signallingBLER-Result-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultMBSFN_r12, dataBLER_MCH_ResultList_r12),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DataBLER_MCH_ResultList_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dataBLER-MCH-ResultList-r12"
		},
};
static const int asn_MAP_MeasResultMBSFN_r12_oms_1[] = { 3, 4 };
static const ber_tlv_tag_t asn_DEF_MeasResultMBSFN_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasResultMBSFN_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mbsfn-Area-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rsrpResultMBSFN-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rsrqResultMBSFN-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* signallingBLER-Result-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* dataBLER-MCH-ResultList-r12 */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasResultMBSFN_r12_specs_1 = {
	sizeof(struct MeasResultMBSFN_r12),
	offsetof(struct MeasResultMBSFN_r12, _asn_ctx),
	asn_MAP_MeasResultMBSFN_r12_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_MeasResultMBSFN_r12_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasResultMBSFN_r12 = {
	"MeasResultMBSFN-r12",
	"MeasResultMBSFN-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasResultMBSFN_r12_tags_1,
	sizeof(asn_DEF_MeasResultMBSFN_r12_tags_1)
		/sizeof(asn_DEF_MeasResultMBSFN_r12_tags_1[0]), /* 1 */
	asn_DEF_MeasResultMBSFN_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasResultMBSFN_r12_tags_1)
		/sizeof(asn_DEF_MeasResultMBSFN_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasResultMBSFN_r12_1,
	5,	/* Elements count */
	&asn_SPC_MeasResultMBSFN_r12_specs_1	/* Additional specs */
};

