/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#include "SL-ZoneConfig-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_zoneIdLongiMod_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 4)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_zoneIdLatiMod_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 4)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_zoneLength_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_zoneWidth_r14_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_zoneIdLongiMod_r14_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (1..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_zoneIdLatiMod_r14_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (1..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_zoneLength_r14_value2enum_2[] = {
	{ 0,	2,	"m5" },
	{ 1,	3,	"m10" },
	{ 2,	3,	"m20" },
	{ 3,	3,	"m50" },
	{ 4,	4,	"m100" },
	{ 5,	4,	"m200" },
	{ 6,	4,	"m500" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_zoneLength_r14_enum2value_2[] = {
	1,	/* m10(1) */
	4,	/* m100(4) */
	2,	/* m20(2) */
	5,	/* m200(5) */
	0,	/* m5(0) */
	3,	/* m50(3) */
	6,	/* m500(6) */
	7	/* spare1(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_zoneLength_r14_specs_2 = {
	asn_MAP_zoneLength_r14_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_zoneLength_r14_enum2value_2,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_zoneLength_r14_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_zoneLength_r14_2 = {
	"zoneLength-r14",
	"zoneLength-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_zoneLength_r14_tags_2,
	sizeof(asn_DEF_zoneLength_r14_tags_2)
		/sizeof(asn_DEF_zoneLength_r14_tags_2[0]) - 1, /* 1 */
	asn_DEF_zoneLength_r14_tags_2,	/* Same as above */
	sizeof(asn_DEF_zoneLength_r14_tags_2)
		/sizeof(asn_DEF_zoneLength_r14_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_zoneLength_r14_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_zoneLength_r14_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_zoneWidth_r14_value2enum_11[] = {
	{ 0,	2,	"m5" },
	{ 1,	3,	"m10" },
	{ 2,	3,	"m20" },
	{ 3,	3,	"m50" },
	{ 4,	4,	"m100" },
	{ 5,	4,	"m200" },
	{ 6,	4,	"m500" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_zoneWidth_r14_enum2value_11[] = {
	1,	/* m10(1) */
	4,	/* m100(4) */
	2,	/* m20(2) */
	5,	/* m200(5) */
	0,	/* m5(0) */
	3,	/* m50(3) */
	6,	/* m500(6) */
	7	/* spare1(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_zoneWidth_r14_specs_11 = {
	asn_MAP_zoneWidth_r14_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_zoneWidth_r14_enum2value_11,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_zoneWidth_r14_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_zoneWidth_r14_11 = {
	"zoneWidth-r14",
	"zoneWidth-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_zoneWidth_r14_tags_11,
	sizeof(asn_DEF_zoneWidth_r14_tags_11)
		/sizeof(asn_DEF_zoneWidth_r14_tags_11[0]) - 1, /* 1 */
	asn_DEF_zoneWidth_r14_tags_11,	/* Same as above */
	sizeof(asn_DEF_zoneWidth_r14_tags_11)
		/sizeof(asn_DEF_zoneWidth_r14_tags_11[0]), /* 2 */
	{ 0, &asn_PER_type_zoneWidth_r14_constr_11, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_zoneWidth_r14_specs_11	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SL_ZoneConfig_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_ZoneConfig_r14, zoneLength_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_zoneLength_r14_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"zoneLength-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_ZoneConfig_r14, zoneWidth_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_zoneWidth_r14_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"zoneWidth-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_ZoneConfig_r14, zoneIdLongiMod_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_zoneIdLongiMod_r14_constr_20,  memb_zoneIdLongiMod_r14_constraint_1 },
		0, 0, /* No default value */
		"zoneIdLongiMod-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_ZoneConfig_r14, zoneIdLatiMod_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_zoneIdLatiMod_r14_constr_21,  memb_zoneIdLatiMod_r14_constraint_1 },
		0, 0, /* No default value */
		"zoneIdLatiMod-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_SL_ZoneConfig_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_ZoneConfig_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* zoneLength-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* zoneWidth-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* zoneIdLongiMod-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* zoneIdLatiMod-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_ZoneConfig_r14_specs_1 = {
	sizeof(struct SL_ZoneConfig_r14),
	offsetof(struct SL_ZoneConfig_r14, _asn_ctx),
	asn_MAP_SL_ZoneConfig_r14_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_ZoneConfig_r14 = {
	"SL-ZoneConfig-r14",
	"SL-ZoneConfig-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_ZoneConfig_r14_tags_1,
	sizeof(asn_DEF_SL_ZoneConfig_r14_tags_1)
		/sizeof(asn_DEF_SL_ZoneConfig_r14_tags_1[0]), /* 1 */
	asn_DEF_SL_ZoneConfig_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_ZoneConfig_r14_tags_1)
		/sizeof(asn_DEF_SL_ZoneConfig_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_ZoneConfig_r14_1,
	4,	/* Elements count */
	&asn_SPC_SL_ZoneConfig_r14_specs_1	/* Additional specs */
};

