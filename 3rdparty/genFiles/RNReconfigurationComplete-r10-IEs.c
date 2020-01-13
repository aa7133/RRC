/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "RNReconfigurationComplete-r10-IEs.h"

static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_3 = {
	sizeof(struct RNReconfigurationComplete_r10_IEs__nonCriticalExtension),
	offsetof(struct RNReconfigurationComplete_r10_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_3 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_3,
	sizeof(asn_DEF_nonCriticalExtension_tags_3)
		/sizeof(asn_DEF_nonCriticalExtension_tags_3[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_3,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_3)
		/sizeof(asn_DEF_nonCriticalExtension_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RNReconfigurationComplete_r10_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct RNReconfigurationComplete_r10_IEs, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct RNReconfigurationComplete_r10_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_RNReconfigurationComplete_r10_IEs_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_RNReconfigurationComplete_r10_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RNReconfigurationComplete_r10_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_RNReconfigurationComplete_r10_IEs_specs_1 = {
	sizeof(struct RNReconfigurationComplete_r10_IEs),
	offsetof(struct RNReconfigurationComplete_r10_IEs, _asn_ctx),
	asn_MAP_RNReconfigurationComplete_r10_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_RNReconfigurationComplete_r10_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RNReconfigurationComplete_r10_IEs = {
	"RNReconfigurationComplete-r10-IEs",
	"RNReconfigurationComplete-r10-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_RNReconfigurationComplete_r10_IEs_tags_1,
	sizeof(asn_DEF_RNReconfigurationComplete_r10_IEs_tags_1)
		/sizeof(asn_DEF_RNReconfigurationComplete_r10_IEs_tags_1[0]), /* 1 */
	asn_DEF_RNReconfigurationComplete_r10_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RNReconfigurationComplete_r10_IEs_tags_1)
		/sizeof(asn_DEF_RNReconfigurationComplete_r10_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RNReconfigurationComplete_r10_IEs_1,
	2,	/* Elements count */
	&asn_SPC_RNReconfigurationComplete_r10_IEs_specs_1	/* Additional specs */
};
