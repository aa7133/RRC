/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "UE-EUTRA-Capability-v1440-IEs.h"

#include "UE-EUTRA-Capability-v1450-IEs.h"
asn_TYPE_member_t asn_MBR_UE_EUTRA_Capability_v1440_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_EUTRA_Capability_v1440_IEs, lwa_Parameters_v1440),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LWA_Parameters_v1440,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lwa-Parameters-v1440"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_EUTRA_Capability_v1440_IEs, mac_Parameters_v1440),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MAC_Parameters_v1440,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mac-Parameters-v1440"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_EUTRA_Capability_v1440_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_EUTRA_Capability_v1450_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_UE_EUTRA_Capability_v1440_IEs_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_UE_EUTRA_Capability_v1440_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_EUTRA_Capability_v1440_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* lwa-Parameters-v1440 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mac-Parameters-v1440 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_Capability_v1440_IEs_specs_1 = {
	sizeof(struct UE_EUTRA_Capability_v1440_IEs),
	offsetof(struct UE_EUTRA_Capability_v1440_IEs, _asn_ctx),
	asn_MAP_UE_EUTRA_Capability_v1440_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_UE_EUTRA_Capability_v1440_IEs_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v1440_IEs = {
	"UE-EUTRA-Capability-v1440-IEs",
	"UE-EUTRA-Capability-v1440-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_EUTRA_Capability_v1440_IEs_tags_1,
	sizeof(asn_DEF_UE_EUTRA_Capability_v1440_IEs_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_Capability_v1440_IEs_tags_1[0]), /* 1 */
	asn_DEF_UE_EUTRA_Capability_v1440_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_EUTRA_Capability_v1440_IEs_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_Capability_v1440_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_EUTRA_Capability_v1440_IEs_1,
	3,	/* Elements count */
	&asn_SPC_UE_EUTRA_Capability_v1440_IEs_specs_1	/* Additional specs */
};

