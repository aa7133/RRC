/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#include "SL-SyncAllowed-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_gnss_Sync_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_enb_Sync_r14_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ue_Sync_r14_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_gnss_Sync_r14_value2enum_2[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_gnss_Sync_r14_enum2value_2[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_gnss_Sync_r14_specs_2 = {
	asn_MAP_gnss_Sync_r14_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_gnss_Sync_r14_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_gnss_Sync_r14_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_gnss_Sync_r14_2 = {
	"gnss-Sync-r14",
	"gnss-Sync-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_gnss_Sync_r14_tags_2,
	sizeof(asn_DEF_gnss_Sync_r14_tags_2)
		/sizeof(asn_DEF_gnss_Sync_r14_tags_2[0]) - 1, /* 1 */
	asn_DEF_gnss_Sync_r14_tags_2,	/* Same as above */
	sizeof(asn_DEF_gnss_Sync_r14_tags_2)
		/sizeof(asn_DEF_gnss_Sync_r14_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_gnss_Sync_r14_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_gnss_Sync_r14_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_enb_Sync_r14_value2enum_4[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_enb_Sync_r14_enum2value_4[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_enb_Sync_r14_specs_4 = {
	asn_MAP_enb_Sync_r14_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_enb_Sync_r14_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_enb_Sync_r14_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_enb_Sync_r14_4 = {
	"enb-Sync-r14",
	"enb-Sync-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_enb_Sync_r14_tags_4,
	sizeof(asn_DEF_enb_Sync_r14_tags_4)
		/sizeof(asn_DEF_enb_Sync_r14_tags_4[0]) - 1, /* 1 */
	asn_DEF_enb_Sync_r14_tags_4,	/* Same as above */
	sizeof(asn_DEF_enb_Sync_r14_tags_4)
		/sizeof(asn_DEF_enb_Sync_r14_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_enb_Sync_r14_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_enb_Sync_r14_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ue_Sync_r14_value2enum_6[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_ue_Sync_r14_enum2value_6[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ue_Sync_r14_specs_6 = {
	asn_MAP_ue_Sync_r14_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_ue_Sync_r14_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ue_Sync_r14_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ue_Sync_r14_6 = {
	"ue-Sync-r14",
	"ue-Sync-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_ue_Sync_r14_tags_6,
	sizeof(asn_DEF_ue_Sync_r14_tags_6)
		/sizeof(asn_DEF_ue_Sync_r14_tags_6[0]) - 1, /* 1 */
	asn_DEF_ue_Sync_r14_tags_6,	/* Same as above */
	sizeof(asn_DEF_ue_Sync_r14_tags_6)
		/sizeof(asn_DEF_ue_Sync_r14_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_ue_Sync_r14_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ue_Sync_r14_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SL_SyncAllowed_r14_1[] = {
	{ ATF_POINTER, 3, offsetof(struct SL_SyncAllowed_r14, gnss_Sync_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_gnss_Sync_r14_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gnss-Sync-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct SL_SyncAllowed_r14, enb_Sync_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_enb_Sync_r14_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"enb-Sync-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_SyncAllowed_r14, ue_Sync_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ue_Sync_r14_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-Sync-r14"
		},
};
static const int asn_MAP_SL_SyncAllowed_r14_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_SL_SyncAllowed_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_SyncAllowed_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gnss-Sync-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* enb-Sync-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ue-Sync-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_SyncAllowed_r14_specs_1 = {
	sizeof(struct SL_SyncAllowed_r14),
	offsetof(struct SL_SyncAllowed_r14, _asn_ctx),
	asn_MAP_SL_SyncAllowed_r14_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SL_SyncAllowed_r14_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_SyncAllowed_r14 = {
	"SL-SyncAllowed-r14",
	"SL-SyncAllowed-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_SyncAllowed_r14_tags_1,
	sizeof(asn_DEF_SL_SyncAllowed_r14_tags_1)
		/sizeof(asn_DEF_SL_SyncAllowed_r14_tags_1[0]), /* 1 */
	asn_DEF_SL_SyncAllowed_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_SyncAllowed_r14_tags_1)
		/sizeof(asn_DEF_SL_SyncAllowed_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_SyncAllowed_r14_1,
	3,	/* Elements count */
	&asn_SPC_SL_SyncAllowed_r14_specs_1	/* Additional specs */
};

