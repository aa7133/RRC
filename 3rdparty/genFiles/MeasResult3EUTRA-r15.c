/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "MeasResult3EUTRA-r15.h"

#include "MeasResultEUTRA.h"
#include "MeasResultListEUTRA.h"
asn_TYPE_member_t asn_MBR_MeasResult3EUTRA_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResult3EUTRA_r15, carrierFreq_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasResult3EUTRA_r15, measResultServingCell_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultServingCell-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResult3EUTRA_r15, measResultNeighCellList_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultListEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultNeighCellList-r15"
		},
};
static const int asn_MAP_MeasResult3EUTRA_r15_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_MeasResult3EUTRA_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasResult3EUTRA_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreq-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measResultServingCell-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* measResultNeighCellList-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasResult3EUTRA_r15_specs_1 = {
	sizeof(struct MeasResult3EUTRA_r15),
	offsetof(struct MeasResult3EUTRA_r15, _asn_ctx),
	asn_MAP_MeasResult3EUTRA_r15_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_MeasResult3EUTRA_r15_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasResult3EUTRA_r15 = {
	"MeasResult3EUTRA-r15",
	"MeasResult3EUTRA-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasResult3EUTRA_r15_tags_1,
	sizeof(asn_DEF_MeasResult3EUTRA_r15_tags_1)
		/sizeof(asn_DEF_MeasResult3EUTRA_r15_tags_1[0]), /* 1 */
	asn_DEF_MeasResult3EUTRA_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasResult3EUTRA_r15_tags_1)
		/sizeof(asn_DEF_MeasResult3EUTRA_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasResult3EUTRA_r15_1,
	3,	/* Elements count */
	&asn_SPC_MeasResult3EUTRA_r15_specs_1	/* Additional specs */
};

