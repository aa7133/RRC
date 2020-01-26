/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#include "UE-EUTRA-Capability-v1310-IEs.h"

#include "MAC-Parameters-v1310.h"
#include "PhyLayerParameters-v1310.h"
#include "RF-Parameters-v1310.h"
#include "MeasParameters-v1310.h"
#include "DC-Parameters-v1310.h"
#include "SL-Parameters-v1310.h"
#include "SCPTM-Parameters-r13.h"
#include "CE-Parameters-r13.h"
#include "LAA-Parameters-r13.h"
#include "LWA-Parameters-r13.h"
#include "UE-EUTRA-CapabilityAddXDD-Mode-v1310.h"
#include "UE-EUTRA-Capability-v1320-IEs.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_ue_CategoryDL_v1310_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ue_CategoryUL_v1310_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ue_CategoryDL_v1310_value2enum_2[] = {
	{ 0,	3,	"n17" },
	{ 1,	2,	"m1" }
};
static const unsigned int asn_MAP_ue_CategoryDL_v1310_enum2value_2[] = {
	1,	/* m1(1) */
	0	/* n17(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ue_CategoryDL_v1310_specs_2 = {
	asn_MAP_ue_CategoryDL_v1310_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_ue_CategoryDL_v1310_enum2value_2,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ue_CategoryDL_v1310_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ue_CategoryDL_v1310_2 = {
	"ue-CategoryDL-v1310",
	"ue-CategoryDL-v1310",
	&asn_OP_NativeEnumerated,
	asn_DEF_ue_CategoryDL_v1310_tags_2,
	sizeof(asn_DEF_ue_CategoryDL_v1310_tags_2)
		/sizeof(asn_DEF_ue_CategoryDL_v1310_tags_2[0]) - 1, /* 1 */
	asn_DEF_ue_CategoryDL_v1310_tags_2,	/* Same as above */
	sizeof(asn_DEF_ue_CategoryDL_v1310_tags_2)
		/sizeof(asn_DEF_ue_CategoryDL_v1310_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_ue_CategoryDL_v1310_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ue_CategoryDL_v1310_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ue_CategoryUL_v1310_value2enum_5[] = {
	{ 0,	3,	"n14" },
	{ 1,	2,	"m1" }
};
static const unsigned int asn_MAP_ue_CategoryUL_v1310_enum2value_5[] = {
	1,	/* m1(1) */
	0	/* n14(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ue_CategoryUL_v1310_specs_5 = {
	asn_MAP_ue_CategoryUL_v1310_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_ue_CategoryUL_v1310_enum2value_5,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ue_CategoryUL_v1310_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ue_CategoryUL_v1310_5 = {
	"ue-CategoryUL-v1310",
	"ue-CategoryUL-v1310",
	&asn_OP_NativeEnumerated,
	asn_DEF_ue_CategoryUL_v1310_tags_5,
	sizeof(asn_DEF_ue_CategoryUL_v1310_tags_5)
		/sizeof(asn_DEF_ue_CategoryUL_v1310_tags_5[0]) - 1, /* 1 */
	asn_DEF_ue_CategoryUL_v1310_tags_5,	/* Same as above */
	sizeof(asn_DEF_ue_CategoryUL_v1310_tags_5)
		/sizeof(asn_DEF_ue_CategoryUL_v1310_tags_5[0]), /* 2 */
	{ 0, &asn_PER_type_ue_CategoryUL_v1310_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ue_CategoryUL_v1310_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UE_EUTRA_Capability_v1310_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct UE_EUTRA_Capability_v1310_IEs, ue_CategoryDL_v1310),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ue_CategoryDL_v1310_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-CategoryDL-v1310"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_EUTRA_Capability_v1310_IEs, ue_CategoryUL_v1310),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ue_CategoryUL_v1310_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-CategoryUL-v1310"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_EUTRA_Capability_v1310_IEs, pdcp_Parameters_v1310),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCP_Parameters_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdcp-Parameters-v1310"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_EUTRA_Capability_v1310_IEs, rlc_Parameters_v1310),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RLC_Parameters_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlc-Parameters-v1310"
		},
	{ ATF_POINTER, 8, offsetof(struct UE_EUTRA_Capability_v1310_IEs, mac_Parameters_v1310),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MAC_Parameters_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mac-Parameters-v1310"
		},
	{ ATF_POINTER, 7, offsetof(struct UE_EUTRA_Capability_v1310_IEs, phyLayerParameters_v1310),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhyLayerParameters_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"phyLayerParameters-v1310"
		},
	{ ATF_POINTER, 6, offsetof(struct UE_EUTRA_Capability_v1310_IEs, rf_Parameters_v1310),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RF_Parameters_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rf-Parameters-v1310"
		},
	{ ATF_POINTER, 5, offsetof(struct UE_EUTRA_Capability_v1310_IEs, measParameters_v1310),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasParameters_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measParameters-v1310"
		},
	{ ATF_POINTER, 4, offsetof(struct UE_EUTRA_Capability_v1310_IEs, dc_Parameters_v1310),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DC_Parameters_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dc-Parameters-v1310"
		},
	{ ATF_POINTER, 3, offsetof(struct UE_EUTRA_Capability_v1310_IEs, sl_Parameters_v1310),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_Parameters_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-Parameters-v1310"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_EUTRA_Capability_v1310_IEs, scptm_Parameters_r13),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCPTM_Parameters_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"scptm-Parameters-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_EUTRA_Capability_v1310_IEs, ce_Parameters_r13),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CE_Parameters_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ce-Parameters-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_EUTRA_Capability_v1310_IEs, interRAT_ParametersWLAN_r13),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IRAT_ParametersWLAN_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interRAT-ParametersWLAN-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_EUTRA_Capability_v1310_IEs, laa_Parameters_r13),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LAA_Parameters_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"laa-Parameters-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_EUTRA_Capability_v1310_IEs, lwa_Parameters_r13),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LWA_Parameters_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lwa-Parameters-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_EUTRA_Capability_v1310_IEs, wlan_IW_Parameters_v1310),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WLAN_IW_Parameters_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"wlan-IW-Parameters-v1310"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_EUTRA_Capability_v1310_IEs, lwip_Parameters_r13),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LWIP_Parameters_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lwip-Parameters-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct UE_EUTRA_Capability_v1310_IEs, fdd_Add_UE_EUTRA_Capabilities_v1310),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fdd-Add-UE-EUTRA-Capabilities-v1310"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_EUTRA_Capability_v1310_IEs, tdd_Add_UE_EUTRA_Capabilities_v1310),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd-Add-UE-EUTRA-Capabilities-v1310"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_EUTRA_Capability_v1310_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_EUTRA_Capability_v1320_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_UE_EUTRA_Capability_v1310_IEs_oms_1[] = { 0, 1, 4, 5, 6, 7, 8, 9, 10, 11, 13, 14, 17, 18, 19 };
static const ber_tlv_tag_t asn_DEF_UE_EUTRA_Capability_v1310_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_EUTRA_Capability_v1310_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-CategoryDL-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ue-CategoryUL-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pdcp-Parameters-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rlc-Parameters-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* mac-Parameters-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* phyLayerParameters-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* rf-Parameters-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* measParameters-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* dc-Parameters-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* sl-Parameters-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* scptm-Parameters-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* ce-Parameters-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* interRAT-ParametersWLAN-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* laa-Parameters-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* lwa-Parameters-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* wlan-IW-Parameters-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* lwip-Parameters-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* fdd-Add-UE-EUTRA-Capabilities-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 }, /* tdd-Add-UE-EUTRA-Capabilities-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 19, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_Capability_v1310_IEs_specs_1 = {
	sizeof(struct UE_EUTRA_Capability_v1310_IEs),
	offsetof(struct UE_EUTRA_Capability_v1310_IEs, _asn_ctx),
	asn_MAP_UE_EUTRA_Capability_v1310_IEs_tag2el_1,
	20,	/* Count of tags in the map */
	asn_MAP_UE_EUTRA_Capability_v1310_IEs_oms_1,	/* Optional members */
	15, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v1310_IEs = {
	"UE-EUTRA-Capability-v1310-IEs",
	"UE-EUTRA-Capability-v1310-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_EUTRA_Capability_v1310_IEs_tags_1,
	sizeof(asn_DEF_UE_EUTRA_Capability_v1310_IEs_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_Capability_v1310_IEs_tags_1[0]), /* 1 */
	asn_DEF_UE_EUTRA_Capability_v1310_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_EUTRA_Capability_v1310_IEs_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_Capability_v1310_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_EUTRA_Capability_v1310_IEs_1,
	20,	/* Elements count */
	&asn_SPC_UE_EUTRA_Capability_v1310_IEs_specs_1	/* Additional specs */
};

