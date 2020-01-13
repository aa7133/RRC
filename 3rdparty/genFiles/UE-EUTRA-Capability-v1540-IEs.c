/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "UE-EUTRA-Capability-v1540-IEs.h"

#include "PhyLayerParameters-v1540.h"
#include "UE-EUTRA-CapabilityAddXDD-Mode-v1540.h"
#include "SL-Parameters-v1540.h"
#include "IRAT-ParametersNR-v1540.h"
#include "UE-EUTRA-Capability-v1550-IEs.h"
asn_TYPE_member_t asn_MBR_UE_EUTRA_Capability_v1540_IEs_1[] = {
	{ ATF_POINTER, 1, offsetof(struct UE_EUTRA_Capability_v1540_IEs, phyLayerParameters_v1540),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhyLayerParameters_v1540,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"phyLayerParameters-v1540"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_EUTRA_Capability_v1540_IEs, otherParameters_v1540),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Other_Parameters_v1540,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"otherParameters-v1540"
		},
	{ ATF_POINTER, 5, offsetof(struct UE_EUTRA_Capability_v1540_IEs, fdd_Add_UE_EUTRA_Capabilities_v1540),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1540,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fdd-Add-UE-EUTRA-Capabilities-v1540"
		},
	{ ATF_POINTER, 4, offsetof(struct UE_EUTRA_Capability_v1540_IEs, tdd_Add_UE_EUTRA_Capabilities_v1540),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1540,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd-Add-UE-EUTRA-Capabilities-v1540"
		},
	{ ATF_POINTER, 3, offsetof(struct UE_EUTRA_Capability_v1540_IEs, sl_Parameters_v1540),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_Parameters_v1540,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-Parameters-v1540"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_EUTRA_Capability_v1540_IEs, irat_ParametersNR_v1540),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IRAT_ParametersNR_v1540,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"irat-ParametersNR-v1540"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_EUTRA_Capability_v1540_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_EUTRA_Capability_v1550_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_UE_EUTRA_Capability_v1540_IEs_oms_1[] = { 0, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_UE_EUTRA_Capability_v1540_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_EUTRA_Capability_v1540_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* phyLayerParameters-v1540 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* otherParameters-v1540 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* fdd-Add-UE-EUTRA-Capabilities-v1540 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* tdd-Add-UE-EUTRA-Capabilities-v1540 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sl-Parameters-v1540 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* irat-ParametersNR-v1540 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_Capability_v1540_IEs_specs_1 = {
	sizeof(struct UE_EUTRA_Capability_v1540_IEs),
	offsetof(struct UE_EUTRA_Capability_v1540_IEs, _asn_ctx),
	asn_MAP_UE_EUTRA_Capability_v1540_IEs_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_UE_EUTRA_Capability_v1540_IEs_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v1540_IEs = {
	"UE-EUTRA-Capability-v1540-IEs",
	"UE-EUTRA-Capability-v1540-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_EUTRA_Capability_v1540_IEs_tags_1,
	sizeof(asn_DEF_UE_EUTRA_Capability_v1540_IEs_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_Capability_v1540_IEs_tags_1[0]), /* 1 */
	asn_DEF_UE_EUTRA_Capability_v1540_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_EUTRA_Capability_v1540_IEs_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_Capability_v1540_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_EUTRA_Capability_v1540_IEs_1,
	7,	/* Elements count */
	&asn_SPC_UE_EUTRA_Capability_v1540_IEs_specs_1	/* Additional specs */
};

