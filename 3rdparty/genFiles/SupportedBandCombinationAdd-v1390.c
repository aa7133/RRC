/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#include "SupportedBandCombinationAdd-v1390.h"

#include "BandCombinationParameters-v1390.h"
asn_per_constraints_t asn_PER_type_SupportedBandCombinationAdd_v1390_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_SupportedBandCombinationAdd_v1390_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_BandCombinationParameters_v1390,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_SupportedBandCombinationAdd_v1390_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_SupportedBandCombinationAdd_v1390_specs_1 = {
	sizeof(struct SupportedBandCombinationAdd_v1390),
	offsetof(struct SupportedBandCombinationAdd_v1390, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_SupportedBandCombinationAdd_v1390 = {
	"SupportedBandCombinationAdd-v1390",
	"SupportedBandCombinationAdd-v1390",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_SupportedBandCombinationAdd_v1390_tags_1,
	sizeof(asn_DEF_SupportedBandCombinationAdd_v1390_tags_1)
		/sizeof(asn_DEF_SupportedBandCombinationAdd_v1390_tags_1[0]), /* 1 */
	asn_DEF_SupportedBandCombinationAdd_v1390_tags_1,	/* Same as above */
	sizeof(asn_DEF_SupportedBandCombinationAdd_v1390_tags_1)
		/sizeof(asn_DEF_SupportedBandCombinationAdd_v1390_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_SupportedBandCombinationAdd_v1390_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_SupportedBandCombinationAdd_v1390_1,
	1,	/* Single element */
	&asn_SPC_SupportedBandCombinationAdd_v1390_specs_1	/* Additional specs */
};

