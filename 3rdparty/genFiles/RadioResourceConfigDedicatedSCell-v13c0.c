/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#include "RadioResourceConfigDedicatedSCell-v13c0.h"

asn_TYPE_member_t asn_MBR_RadioResourceConfigDedicatedSCell_v13c0_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigDedicatedSCell_v13c0, physicalConfigDedicatedSCell_v13c0),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysicalConfigDedicatedSCell_v13c0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physicalConfigDedicatedSCell-v13c0"
		},
};
static const ber_tlv_tag_t asn_DEF_RadioResourceConfigDedicatedSCell_v13c0_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RadioResourceConfigDedicatedSCell_v13c0_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* physicalConfigDedicatedSCell-v13c0 */
};
asn_SEQUENCE_specifics_t asn_SPC_RadioResourceConfigDedicatedSCell_v13c0_specs_1 = {
	sizeof(struct RadioResourceConfigDedicatedSCell_v13c0),
	offsetof(struct RadioResourceConfigDedicatedSCell_v13c0, _asn_ctx),
	asn_MAP_RadioResourceConfigDedicatedSCell_v13c0_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigDedicatedSCell_v13c0 = {
	"RadioResourceConfigDedicatedSCell-v13c0",
	"RadioResourceConfigDedicatedSCell-v13c0",
	&asn_OP_SEQUENCE,
	asn_DEF_RadioResourceConfigDedicatedSCell_v13c0_tags_1,
	sizeof(asn_DEF_RadioResourceConfigDedicatedSCell_v13c0_tags_1)
		/sizeof(asn_DEF_RadioResourceConfigDedicatedSCell_v13c0_tags_1[0]), /* 1 */
	asn_DEF_RadioResourceConfigDedicatedSCell_v13c0_tags_1,	/* Same as above */
	sizeof(asn_DEF_RadioResourceConfigDedicatedSCell_v13c0_tags_1)
		/sizeof(asn_DEF_RadioResourceConfigDedicatedSCell_v13c0_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RadioResourceConfigDedicatedSCell_v13c0_1,
	1,	/* Elements count */
	&asn_SPC_RadioResourceConfigDedicatedSCell_v13c0_specs_1	/* Additional specs */
};

