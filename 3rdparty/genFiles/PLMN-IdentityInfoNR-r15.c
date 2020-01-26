/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#include "PLMN-IdentityInfoNR-r15.h"

asn_TYPE_member_t asn_MBR_PLMN_IdentityInfoNR_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PLMN_IdentityInfoNR_r15, plmn_IdentityList_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_IdentityListNR_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"plmn-IdentityList-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct PLMN_IdentityInfoNR_r15, trackingAreaCode_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TrackingAreaCodeNR_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"trackingAreaCode-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct PLMN_IdentityInfoNR_r15, ran_AreaCode_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RAN_AreaCode_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ran-AreaCode-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PLMN_IdentityInfoNR_r15, cellIdentity_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIdentityNR_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellIdentity-r15"
		},
};
static const int asn_MAP_PLMN_IdentityInfoNR_r15_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_PLMN_IdentityInfoNR_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PLMN_IdentityInfoNR_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmn-IdentityList-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* trackingAreaCode-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ran-AreaCode-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* cellIdentity-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_PLMN_IdentityInfoNR_r15_specs_1 = {
	sizeof(struct PLMN_IdentityInfoNR_r15),
	offsetof(struct PLMN_IdentityInfoNR_r15, _asn_ctx),
	asn_MAP_PLMN_IdentityInfoNR_r15_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_PLMN_IdentityInfoNR_r15_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PLMN_IdentityInfoNR_r15 = {
	"PLMN-IdentityInfoNR-r15",
	"PLMN-IdentityInfoNR-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_PLMN_IdentityInfoNR_r15_tags_1,
	sizeof(asn_DEF_PLMN_IdentityInfoNR_r15_tags_1)
		/sizeof(asn_DEF_PLMN_IdentityInfoNR_r15_tags_1[0]), /* 1 */
	asn_DEF_PLMN_IdentityInfoNR_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_PLMN_IdentityInfoNR_r15_tags_1)
		/sizeof(asn_DEF_PLMN_IdentityInfoNR_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PLMN_IdentityInfoNR_r15_1,
	4,	/* Elements count */
	&asn_SPC_PLMN_IdentityInfoNR_r15_specs_1	/* Additional specs */
};

