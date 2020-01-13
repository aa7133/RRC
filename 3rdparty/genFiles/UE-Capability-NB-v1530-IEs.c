/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "UE-Capability-NB-v1530-IEs.h"

#include "PhyLayerParameters-NB-v1530.h"
#include "TDD-UE-Capability-NB-r15.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_earlyData_UP_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_earlyData_UP_r15_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_earlyData_UP_r15_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_earlyData_UP_r15_specs_2 = {
	asn_MAP_earlyData_UP_r15_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_earlyData_UP_r15_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_earlyData_UP_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_earlyData_UP_r15_2 = {
	"earlyData-UP-r15",
	"earlyData-UP-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_earlyData_UP_r15_tags_2,
	sizeof(asn_DEF_earlyData_UP_r15_tags_2)
		/sizeof(asn_DEF_earlyData_UP_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_earlyData_UP_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_earlyData_UP_r15_tags_2)
		/sizeof(asn_DEF_earlyData_UP_r15_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_earlyData_UP_r15_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_earlyData_UP_r15_specs_2	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_8 = {
	sizeof(struct UE_Capability_NB_v1530_IEs__nonCriticalExtension),
	offsetof(struct UE_Capability_NB_v1530_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_8 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_8,
	sizeof(asn_DEF_nonCriticalExtension_tags_8)
		/sizeof(asn_DEF_nonCriticalExtension_tags_8[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_8,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_8)
		/sizeof(asn_DEF_nonCriticalExtension_tags_8[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UE_Capability_NB_v1530_IEs_1[] = {
	{ ATF_POINTER, 1, offsetof(struct UE_Capability_NB_v1530_IEs, earlyData_UP_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_earlyData_UP_r15_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"earlyData-UP-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Capability_NB_v1530_IEs, rlc_Parameters_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RLC_Parameters_NB_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlc-Parameters-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Capability_NB_v1530_IEs, mac_Parameters_v1530),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MAC_Parameters_NB_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mac-Parameters-v1530"
		},
	{ ATF_POINTER, 3, offsetof(struct UE_Capability_NB_v1530_IEs, phyLayerParameters_v1530),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhyLayerParameters_NB_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"phyLayerParameters-v1530"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_Capability_NB_v1530_IEs, tdd_UE_Capability_r15),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TDD_UE_Capability_NB_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd-UE-Capability-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_Capability_NB_v1530_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_UE_Capability_NB_v1530_IEs_oms_1[] = { 0, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_UE_Capability_NB_v1530_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_Capability_NB_v1530_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* earlyData-UP-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rlc-Parameters-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* mac-Parameters-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* phyLayerParameters-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* tdd-UE-Capability-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_Capability_NB_v1530_IEs_specs_1 = {
	sizeof(struct UE_Capability_NB_v1530_IEs),
	offsetof(struct UE_Capability_NB_v1530_IEs, _asn_ctx),
	asn_MAP_UE_Capability_NB_v1530_IEs_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_UE_Capability_NB_v1530_IEs_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_Capability_NB_v1530_IEs = {
	"UE-Capability-NB-v1530-IEs",
	"UE-Capability-NB-v1530-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_Capability_NB_v1530_IEs_tags_1,
	sizeof(asn_DEF_UE_Capability_NB_v1530_IEs_tags_1)
		/sizeof(asn_DEF_UE_Capability_NB_v1530_IEs_tags_1[0]), /* 1 */
	asn_DEF_UE_Capability_NB_v1530_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_Capability_NB_v1530_IEs_tags_1)
		/sizeof(asn_DEF_UE_Capability_NB_v1530_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_Capability_NB_v1530_IEs_1,
	6,	/* Elements count */
	&asn_SPC_UE_Capability_NB_v1530_IEs_specs_1	/* Additional specs */
};

