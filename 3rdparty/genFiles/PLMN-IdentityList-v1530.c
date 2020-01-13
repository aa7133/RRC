/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "PLMN-IdentityList-v1530.h"

#include "PLMN-IdentityInfo-v1530.h"
asn_per_constraints_t asn_PER_type_PLMN_IdentityList_v1530_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  6 }	/* (SIZE(1..6)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_PLMN_IdentityList_v1530_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_PLMN_IdentityInfo_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_PLMN_IdentityList_v1530_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_PLMN_IdentityList_v1530_specs_1 = {
	sizeof(struct PLMN_IdentityList_v1530),
	offsetof(struct PLMN_IdentityList_v1530, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_PLMN_IdentityList_v1530 = {
	"PLMN-IdentityList-v1530",
	"PLMN-IdentityList-v1530",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_PLMN_IdentityList_v1530_tags_1,
	sizeof(asn_DEF_PLMN_IdentityList_v1530_tags_1)
		/sizeof(asn_DEF_PLMN_IdentityList_v1530_tags_1[0]), /* 1 */
	asn_DEF_PLMN_IdentityList_v1530_tags_1,	/* Same as above */
	sizeof(asn_DEF_PLMN_IdentityList_v1530_tags_1)
		/sizeof(asn_DEF_PLMN_IdentityList_v1530_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_PLMN_IdentityList_v1530_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_PLMN_IdentityList_v1530_1,
	1,	/* Single element */
	&asn_SPC_PLMN_IdentityList_v1530_specs_1	/* Additional specs */
};

