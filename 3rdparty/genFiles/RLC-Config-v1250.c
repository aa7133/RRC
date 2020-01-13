/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "RLC-Config-v1250.h"

asn_TYPE_member_t asn_MBR_RLC_Config_v1250_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RLC_Config_v1250, ul_extended_RLC_LI_Field_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-extended-RLC-LI-Field-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RLC_Config_v1250, dl_extended_RLC_LI_Field_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-extended-RLC-LI-Field-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_RLC_Config_v1250_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RLC_Config_v1250_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-extended-RLC-LI-Field-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dl-extended-RLC-LI-Field-r12 */
};
asn_SEQUENCE_specifics_t asn_SPC_RLC_Config_v1250_specs_1 = {
	sizeof(struct RLC_Config_v1250),
	offsetof(struct RLC_Config_v1250, _asn_ctx),
	asn_MAP_RLC_Config_v1250_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RLC_Config_v1250 = {
	"RLC-Config-v1250",
	"RLC-Config-v1250",
	&asn_OP_SEQUENCE,
	asn_DEF_RLC_Config_v1250_tags_1,
	sizeof(asn_DEF_RLC_Config_v1250_tags_1)
		/sizeof(asn_DEF_RLC_Config_v1250_tags_1[0]), /* 1 */
	asn_DEF_RLC_Config_v1250_tags_1,	/* Same as above */
	sizeof(asn_DEF_RLC_Config_v1250_tags_1)
		/sizeof(asn_DEF_RLC_Config_v1250_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RLC_Config_v1250_1,
	2,	/* Elements count */
	&asn_SPC_RLC_Config_v1250_specs_1	/* Additional specs */
};

