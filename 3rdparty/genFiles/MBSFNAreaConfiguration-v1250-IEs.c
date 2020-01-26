/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#include "MBSFNAreaConfiguration-v1250-IEs.h"

#include "PMCH-InfoListExt-r12.h"
#include "MBSFNAreaConfiguration-v1430-IEs.h"
asn_TYPE_member_t asn_MBR_MBSFNAreaConfiguration_v1250_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct MBSFNAreaConfiguration_v1250_IEs, pmch_InfoListExt_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PMCH_InfoListExt_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pmch-InfoListExt-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct MBSFNAreaConfiguration_v1250_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBSFNAreaConfiguration_v1430_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_MBSFNAreaConfiguration_v1250_IEs_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_MBSFNAreaConfiguration_v1250_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MBSFNAreaConfiguration_v1250_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pmch-InfoListExt-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_MBSFNAreaConfiguration_v1250_IEs_specs_1 = {
	sizeof(struct MBSFNAreaConfiguration_v1250_IEs),
	offsetof(struct MBSFNAreaConfiguration_v1250_IEs, _asn_ctx),
	asn_MAP_MBSFNAreaConfiguration_v1250_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_MBSFNAreaConfiguration_v1250_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MBSFNAreaConfiguration_v1250_IEs = {
	"MBSFNAreaConfiguration-v1250-IEs",
	"MBSFNAreaConfiguration-v1250-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_MBSFNAreaConfiguration_v1250_IEs_tags_1,
	sizeof(asn_DEF_MBSFNAreaConfiguration_v1250_IEs_tags_1)
		/sizeof(asn_DEF_MBSFNAreaConfiguration_v1250_IEs_tags_1[0]), /* 1 */
	asn_DEF_MBSFNAreaConfiguration_v1250_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_MBSFNAreaConfiguration_v1250_IEs_tags_1)
		/sizeof(asn_DEF_MBSFNAreaConfiguration_v1250_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MBSFNAreaConfiguration_v1250_IEs_1,
	2,	/* Elements count */
	&asn_SPC_MBSFNAreaConfiguration_v1250_IEs_specs_1	/* Additional specs */
};

