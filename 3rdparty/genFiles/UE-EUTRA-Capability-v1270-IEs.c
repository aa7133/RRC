/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "UE-EUTRA-Capability-v1270-IEs.h"

#include "RF-Parameters-v1270.h"
#include "UE-EUTRA-Capability-v1280-IEs.h"
asn_TYPE_member_t asn_MBR_UE_EUTRA_Capability_v1270_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct UE_EUTRA_Capability_v1270_IEs, rf_Parameters_v1270),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RF_Parameters_v1270,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rf-Parameters-v1270"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_EUTRA_Capability_v1270_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_EUTRA_Capability_v1280_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_UE_EUTRA_Capability_v1270_IEs_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_UE_EUTRA_Capability_v1270_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_EUTRA_Capability_v1270_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rf-Parameters-v1270 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_Capability_v1270_IEs_specs_1 = {
	sizeof(struct UE_EUTRA_Capability_v1270_IEs),
	offsetof(struct UE_EUTRA_Capability_v1270_IEs, _asn_ctx),
	asn_MAP_UE_EUTRA_Capability_v1270_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_UE_EUTRA_Capability_v1270_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v1270_IEs = {
	"UE-EUTRA-Capability-v1270-IEs",
	"UE-EUTRA-Capability-v1270-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_EUTRA_Capability_v1270_IEs_tags_1,
	sizeof(asn_DEF_UE_EUTRA_Capability_v1270_IEs_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_Capability_v1270_IEs_tags_1[0]), /* 1 */
	asn_DEF_UE_EUTRA_Capability_v1270_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_EUTRA_Capability_v1270_IEs_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_Capability_v1270_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_EUTRA_Capability_v1270_IEs_1,
	2,	/* Elements count */
	&asn_SPC_UE_EUTRA_Capability_v1270_IEs_specs_1	/* Additional specs */
};

