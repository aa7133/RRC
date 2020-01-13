/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "WUS-Config-r15.h"

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
static asn_per_constraints_t asn_PER_type_maxDurationFactor_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_numPOs_r15_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_freqLocation_r15_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_timeOffsetDRX_r15_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_timeOffset_eDRX_Short_r15_constr_22 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_timeOffset_eDRX_Long_r15_constr_27 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_maxDurationFactor_r15_value2enum_2[] = {
	{ 0,	7,	"one32th" },
	{ 1,	7,	"one16th" },
	{ 2,	6,	"one8th" },
	{ 3,	6,	"one4th" }
};
static const unsigned int asn_MAP_maxDurationFactor_r15_enum2value_2[] = {
	1,	/* one16th(1) */
	0,	/* one32th(0) */
	3,	/* one4th(3) */
	2	/* one8th(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_maxDurationFactor_r15_specs_2 = {
	asn_MAP_maxDurationFactor_r15_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_maxDurationFactor_r15_enum2value_2,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_maxDurationFactor_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_maxDurationFactor_r15_2 = {
	"maxDurationFactor-r15",
	"maxDurationFactor-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_maxDurationFactor_r15_tags_2,
	sizeof(asn_DEF_maxDurationFactor_r15_tags_2)
		/sizeof(asn_DEF_maxDurationFactor_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_maxDurationFactor_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_maxDurationFactor_r15_tags_2)
		/sizeof(asn_DEF_maxDurationFactor_r15_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_maxDurationFactor_r15_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_maxDurationFactor_r15_specs_2	/* Additional specs */
};

static int asn_DFL_7_cmp_0(const void *sptr) {
	const long *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 0 */
	return (*st != 0);
}
static int asn_DFL_7_set_0(void **sptr) {
	long *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 0 */
	*st = 0;
	return 0;
}
static const asn_INTEGER_enum_map_t asn_MAP_numPOs_r15_value2enum_7[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n4" },
	{ 3,	6,	"spare1" }
};
static const unsigned int asn_MAP_numPOs_r15_enum2value_7[] = {
	0,	/* n1(0) */
	1,	/* n2(1) */
	2,	/* n4(2) */
	3	/* spare1(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_numPOs_r15_specs_7 = {
	asn_MAP_numPOs_r15_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_numPOs_r15_enum2value_7,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_numPOs_r15_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_numPOs_r15_7 = {
	"numPOs-r15",
	"numPOs-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_numPOs_r15_tags_7,
	sizeof(asn_DEF_numPOs_r15_tags_7)
		/sizeof(asn_DEF_numPOs_r15_tags_7[0]) - 1, /* 1 */
	asn_DEF_numPOs_r15_tags_7,	/* Same as above */
	sizeof(asn_DEF_numPOs_r15_tags_7)
		/sizeof(asn_DEF_numPOs_r15_tags_7[0]), /* 2 */
	{ 0, &asn_PER_type_numPOs_r15_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_numPOs_r15_specs_7	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_freqLocation_r15_value2enum_12[] = {
	{ 0,	2,	"n0" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n4" },
	{ 3,	6,	"spare1" }
};
static const unsigned int asn_MAP_freqLocation_r15_enum2value_12[] = {
	0,	/* n0(0) */
	1,	/* n2(1) */
	2,	/* n4(2) */
	3	/* spare1(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_freqLocation_r15_specs_12 = {
	asn_MAP_freqLocation_r15_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_freqLocation_r15_enum2value_12,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_freqLocation_r15_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_freqLocation_r15_12 = {
	"freqLocation-r15",
	"freqLocation-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_freqLocation_r15_tags_12,
	sizeof(asn_DEF_freqLocation_r15_tags_12)
		/sizeof(asn_DEF_freqLocation_r15_tags_12[0]) - 1, /* 1 */
	asn_DEF_freqLocation_r15_tags_12,	/* Same as above */
	sizeof(asn_DEF_freqLocation_r15_tags_12)
		/sizeof(asn_DEF_freqLocation_r15_tags_12[0]), /* 2 */
	{ 0, &asn_PER_type_freqLocation_r15_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_freqLocation_r15_specs_12	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_timeOffsetDRX_r15_value2enum_17[] = {
	{ 0,	4,	"ms40" },
	{ 1,	4,	"ms80" },
	{ 2,	5,	"ms160" },
	{ 3,	5,	"ms240" }
};
static const unsigned int asn_MAP_timeOffsetDRX_r15_enum2value_17[] = {
	2,	/* ms160(2) */
	3,	/* ms240(3) */
	0,	/* ms40(0) */
	1	/* ms80(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_timeOffsetDRX_r15_specs_17 = {
	asn_MAP_timeOffsetDRX_r15_value2enum_17,	/* "tag" => N; sorted by tag */
	asn_MAP_timeOffsetDRX_r15_enum2value_17,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_timeOffsetDRX_r15_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_timeOffsetDRX_r15_17 = {
	"timeOffsetDRX-r15",
	"timeOffsetDRX-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_timeOffsetDRX_r15_tags_17,
	sizeof(asn_DEF_timeOffsetDRX_r15_tags_17)
		/sizeof(asn_DEF_timeOffsetDRX_r15_tags_17[0]) - 1, /* 1 */
	asn_DEF_timeOffsetDRX_r15_tags_17,	/* Same as above */
	sizeof(asn_DEF_timeOffsetDRX_r15_tags_17)
		/sizeof(asn_DEF_timeOffsetDRX_r15_tags_17[0]), /* 2 */
	{ 0, &asn_PER_type_timeOffsetDRX_r15_constr_17, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_timeOffsetDRX_r15_specs_17	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_timeOffset_eDRX_Short_r15_value2enum_22[] = {
	{ 0,	4,	"ms40" },
	{ 1,	4,	"ms80" },
	{ 2,	5,	"ms160" },
	{ 3,	5,	"ms240" }
};
static const unsigned int asn_MAP_timeOffset_eDRX_Short_r15_enum2value_22[] = {
	2,	/* ms160(2) */
	3,	/* ms240(3) */
	0,	/* ms40(0) */
	1	/* ms80(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_timeOffset_eDRX_Short_r15_specs_22 = {
	asn_MAP_timeOffset_eDRX_Short_r15_value2enum_22,	/* "tag" => N; sorted by tag */
	asn_MAP_timeOffset_eDRX_Short_r15_enum2value_22,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_timeOffset_eDRX_Short_r15_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_timeOffset_eDRX_Short_r15_22 = {
	"timeOffset-eDRX-Short-r15",
	"timeOffset-eDRX-Short-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_timeOffset_eDRX_Short_r15_tags_22,
	sizeof(asn_DEF_timeOffset_eDRX_Short_r15_tags_22)
		/sizeof(asn_DEF_timeOffset_eDRX_Short_r15_tags_22[0]) - 1, /* 1 */
	asn_DEF_timeOffset_eDRX_Short_r15_tags_22,	/* Same as above */
	sizeof(asn_DEF_timeOffset_eDRX_Short_r15_tags_22)
		/sizeof(asn_DEF_timeOffset_eDRX_Short_r15_tags_22[0]), /* 2 */
	{ 0, &asn_PER_type_timeOffset_eDRX_Short_r15_constr_22, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_timeOffset_eDRX_Short_r15_specs_22	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_timeOffset_eDRX_Long_r15_value2enum_27[] = {
	{ 0,	6,	"ms1000" },
	{ 1,	6,	"ms2000" }
};
static const unsigned int asn_MAP_timeOffset_eDRX_Long_r15_enum2value_27[] = {
	0,	/* ms1000(0) */
	1	/* ms2000(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_timeOffset_eDRX_Long_r15_specs_27 = {
	asn_MAP_timeOffset_eDRX_Long_r15_value2enum_27,	/* "tag" => N; sorted by tag */
	asn_MAP_timeOffset_eDRX_Long_r15_enum2value_27,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_timeOffset_eDRX_Long_r15_tags_27[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_timeOffset_eDRX_Long_r15_27 = {
	"timeOffset-eDRX-Long-r15",
	"timeOffset-eDRX-Long-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_timeOffset_eDRX_Long_r15_tags_27,
	sizeof(asn_DEF_timeOffset_eDRX_Long_r15_tags_27)
		/sizeof(asn_DEF_timeOffset_eDRX_Long_r15_tags_27[0]) - 1, /* 1 */
	asn_DEF_timeOffset_eDRX_Long_r15_tags_27,	/* Same as above */
	sizeof(asn_DEF_timeOffset_eDRX_Long_r15_tags_27)
		/sizeof(asn_DEF_timeOffset_eDRX_Long_r15_tags_27[0]), /* 2 */
	{ 0, &asn_PER_type_timeOffset_eDRX_Long_r15_constr_27, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_timeOffset_eDRX_Long_r15_specs_27	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_WUS_Config_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct WUS_Config_r15, maxDurationFactor_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_maxDurationFactor_r15_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxDurationFactor-r15"
		},
	{ ATF_NOFLAGS, 1, offsetof(struct WUS_Config_r15, numPOs_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_numPOs_r15_7,
		0,
		{ 0, 0, 0 },
		&asn_DFL_7_cmp_0,	/* Compare DEFAULT 0 */
		&asn_DFL_7_set_0,	/* Set DEFAULT 0 */
		"numPOs-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct WUS_Config_r15, freqLocation_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_freqLocation_r15_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"freqLocation-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct WUS_Config_r15, timeOffsetDRX_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_timeOffsetDRX_r15_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeOffsetDRX-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct WUS_Config_r15, timeOffset_eDRX_Short_r15),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_timeOffset_eDRX_Short_r15_22,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeOffset-eDRX-Short-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct WUS_Config_r15, timeOffset_eDRX_Long_r15),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_timeOffset_eDRX_Long_r15_27,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeOffset-eDRX-Long-r15"
		},
};
static const int asn_MAP_WUS_Config_r15_oms_1[] = { 1, 5 };
static const ber_tlv_tag_t asn_DEF_WUS_Config_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_WUS_Config_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxDurationFactor-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* numPOs-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* freqLocation-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* timeOffsetDRX-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* timeOffset-eDRX-Short-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* timeOffset-eDRX-Long-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_WUS_Config_r15_specs_1 = {
	sizeof(struct WUS_Config_r15),
	offsetof(struct WUS_Config_r15, _asn_ctx),
	asn_MAP_WUS_Config_r15_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_WUS_Config_r15_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_WUS_Config_r15 = {
	"WUS-Config-r15",
	"WUS-Config-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_WUS_Config_r15_tags_1,
	sizeof(asn_DEF_WUS_Config_r15_tags_1)
		/sizeof(asn_DEF_WUS_Config_r15_tags_1[0]), /* 1 */
	asn_DEF_WUS_Config_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_WUS_Config_r15_tags_1)
		/sizeof(asn_DEF_WUS_Config_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_WUS_Config_r15_1,
	6,	/* Elements count */
	&asn_SPC_WUS_Config_r15_specs_1	/* Additional specs */
};

