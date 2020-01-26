/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#include "SC-MCCH-Message-r13.h"

static asn_TYPE_member_t asn_MBR_SC_MCCH_Message_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SC_MCCH_Message_r13, message),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SC_MCCH_MessageType_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"message"
		},
};
static const ber_tlv_tag_t asn_DEF_SC_MCCH_Message_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SC_MCCH_Message_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* message */
};
static asn_SEQUENCE_specifics_t asn_SPC_SC_MCCH_Message_r13_specs_1 = {
	sizeof(struct SC_MCCH_Message_r13),
	offsetof(struct SC_MCCH_Message_r13, _asn_ctx),
	asn_MAP_SC_MCCH_Message_r13_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SC_MCCH_Message_r13 = {
	"SC-MCCH-Message-r13",
	"SC-MCCH-Message-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_SC_MCCH_Message_r13_tags_1,
	sizeof(asn_DEF_SC_MCCH_Message_r13_tags_1)
		/sizeof(asn_DEF_SC_MCCH_Message_r13_tags_1[0]), /* 1 */
	asn_DEF_SC_MCCH_Message_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_SC_MCCH_Message_r13_tags_1)
		/sizeof(asn_DEF_SC_MCCH_Message_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SC_MCCH_Message_r13_1,
	1,	/* Elements count */
	&asn_SPC_SC_MCCH_Message_r13_specs_1	/* Additional specs */
};

