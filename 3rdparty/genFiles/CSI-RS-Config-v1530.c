/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "CSI-RS-Config-v1530.h"

#include "CSI-RS-ConfigEMIMO-v1530.h"
asn_TYPE_member_t asn_MBR_CSI_RS_Config_v1530_1[] = {
	{ ATF_POINTER, 1, offsetof(struct CSI_RS_Config_v1530, eMIMO_Type_v1530),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_CSI_RS_ConfigEMIMO_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eMIMO-Type-v1530"
		},
};
static const int asn_MAP_CSI_RS_Config_v1530_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_CSI_RS_Config_v1530_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CSI_RS_Config_v1530_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* eMIMO-Type-v1530 */
};
asn_SEQUENCE_specifics_t asn_SPC_CSI_RS_Config_v1530_specs_1 = {
	sizeof(struct CSI_RS_Config_v1530),
	offsetof(struct CSI_RS_Config_v1530, _asn_ctx),
	asn_MAP_CSI_RS_Config_v1530_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_CSI_RS_Config_v1530_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CSI_RS_Config_v1530 = {
	"CSI-RS-Config-v1530",
	"CSI-RS-Config-v1530",
	&asn_OP_SEQUENCE,
	asn_DEF_CSI_RS_Config_v1530_tags_1,
	sizeof(asn_DEF_CSI_RS_Config_v1530_tags_1)
		/sizeof(asn_DEF_CSI_RS_Config_v1530_tags_1[0]), /* 1 */
	asn_DEF_CSI_RS_Config_v1530_tags_1,	/* Same as above */
	sizeof(asn_DEF_CSI_RS_Config_v1530_tags_1)
		/sizeof(asn_DEF_CSI_RS_Config_v1530_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CSI_RS_Config_v1530_1,
	1,	/* Elements count */
	&asn_SPC_CSI_RS_Config_v1530_specs_1	/* Additional specs */
};

