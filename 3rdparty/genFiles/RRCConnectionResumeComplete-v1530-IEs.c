/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "RRCConnectionResumeComplete-v1530-IEs.h"

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
static asn_per_constraints_t asn_PER_type_logMeasAvailableBT_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_logMeasAvailableWLAN_r15_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_idleMeasAvailable_r15_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_flightPathInfoAvailable_r15_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_logMeasAvailableBT_r15_value2enum_2[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_logMeasAvailableBT_r15_enum2value_2[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_logMeasAvailableBT_r15_specs_2 = {
	asn_MAP_logMeasAvailableBT_r15_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_logMeasAvailableBT_r15_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_logMeasAvailableBT_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_logMeasAvailableBT_r15_2 = {
	"logMeasAvailableBT-r15",
	"logMeasAvailableBT-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_logMeasAvailableBT_r15_tags_2,
	sizeof(asn_DEF_logMeasAvailableBT_r15_tags_2)
		/sizeof(asn_DEF_logMeasAvailableBT_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_logMeasAvailableBT_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_logMeasAvailableBT_r15_tags_2)
		/sizeof(asn_DEF_logMeasAvailableBT_r15_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_logMeasAvailableBT_r15_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_logMeasAvailableBT_r15_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_logMeasAvailableWLAN_r15_value2enum_4[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_logMeasAvailableWLAN_r15_enum2value_4[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_logMeasAvailableWLAN_r15_specs_4 = {
	asn_MAP_logMeasAvailableWLAN_r15_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_logMeasAvailableWLAN_r15_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_logMeasAvailableWLAN_r15_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_logMeasAvailableWLAN_r15_4 = {
	"logMeasAvailableWLAN-r15",
	"logMeasAvailableWLAN-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_logMeasAvailableWLAN_r15_tags_4,
	sizeof(asn_DEF_logMeasAvailableWLAN_r15_tags_4)
		/sizeof(asn_DEF_logMeasAvailableWLAN_r15_tags_4[0]) - 1, /* 1 */
	asn_DEF_logMeasAvailableWLAN_r15_tags_4,	/* Same as above */
	sizeof(asn_DEF_logMeasAvailableWLAN_r15_tags_4)
		/sizeof(asn_DEF_logMeasAvailableWLAN_r15_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_logMeasAvailableWLAN_r15_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_logMeasAvailableWLAN_r15_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_idleMeasAvailable_r15_value2enum_6[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_idleMeasAvailable_r15_enum2value_6[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_idleMeasAvailable_r15_specs_6 = {
	asn_MAP_idleMeasAvailable_r15_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_idleMeasAvailable_r15_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_idleMeasAvailable_r15_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_idleMeasAvailable_r15_6 = {
	"idleMeasAvailable-r15",
	"idleMeasAvailable-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_idleMeasAvailable_r15_tags_6,
	sizeof(asn_DEF_idleMeasAvailable_r15_tags_6)
		/sizeof(asn_DEF_idleMeasAvailable_r15_tags_6[0]) - 1, /* 1 */
	asn_DEF_idleMeasAvailable_r15_tags_6,	/* Same as above */
	sizeof(asn_DEF_idleMeasAvailable_r15_tags_6)
		/sizeof(asn_DEF_idleMeasAvailable_r15_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_idleMeasAvailable_r15_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_idleMeasAvailable_r15_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_flightPathInfoAvailable_r15_value2enum_8[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_flightPathInfoAvailable_r15_enum2value_8[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_flightPathInfoAvailable_r15_specs_8 = {
	asn_MAP_flightPathInfoAvailable_r15_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_flightPathInfoAvailable_r15_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_flightPathInfoAvailable_r15_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_flightPathInfoAvailable_r15_8 = {
	"flightPathInfoAvailable-r15",
	"flightPathInfoAvailable-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_flightPathInfoAvailable_r15_tags_8,
	sizeof(asn_DEF_flightPathInfoAvailable_r15_tags_8)
		/sizeof(asn_DEF_flightPathInfoAvailable_r15_tags_8[0]) - 1, /* 1 */
	asn_DEF_flightPathInfoAvailable_r15_tags_8,	/* Same as above */
	sizeof(asn_DEF_flightPathInfoAvailable_r15_tags_8)
		/sizeof(asn_DEF_flightPathInfoAvailable_r15_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_flightPathInfoAvailable_r15_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_flightPathInfoAvailable_r15_specs_8	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_10 = {
	sizeof(struct RRCConnectionResumeComplete_v1530_IEs__nonCriticalExtension),
	offsetof(struct RRCConnectionResumeComplete_v1530_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_10 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_10,
	sizeof(asn_DEF_nonCriticalExtension_tags_10)
		/sizeof(asn_DEF_nonCriticalExtension_tags_10[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_10,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_10)
		/sizeof(asn_DEF_nonCriticalExtension_tags_10[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_10	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRCConnectionResumeComplete_v1530_IEs_1[] = {
	{ ATF_POINTER, 5, offsetof(struct RRCConnectionResumeComplete_v1530_IEs, logMeasAvailableBT_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_logMeasAvailableBT_r15_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"logMeasAvailableBT-r15"
		},
	{ ATF_POINTER, 4, offsetof(struct RRCConnectionResumeComplete_v1530_IEs, logMeasAvailableWLAN_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_logMeasAvailableWLAN_r15_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"logMeasAvailableWLAN-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct RRCConnectionResumeComplete_v1530_IEs, idleMeasAvailable_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_idleMeasAvailable_r15_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"idleMeasAvailable-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct RRCConnectionResumeComplete_v1530_IEs, flightPathInfoAvailable_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_flightPathInfoAvailable_r15_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"flightPathInfoAvailable-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionResumeComplete_v1530_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_RRCConnectionResumeComplete_v1530_IEs_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_RRCConnectionResumeComplete_v1530_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCConnectionResumeComplete_v1530_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* logMeasAvailableBT-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* logMeasAvailableWLAN-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* idleMeasAvailable-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* flightPathInfoAvailable-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionResumeComplete_v1530_IEs_specs_1 = {
	sizeof(struct RRCConnectionResumeComplete_v1530_IEs),
	offsetof(struct RRCConnectionResumeComplete_v1530_IEs, _asn_ctx),
	asn_MAP_RRCConnectionResumeComplete_v1530_IEs_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_RRCConnectionResumeComplete_v1530_IEs_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionResumeComplete_v1530_IEs = {
	"RRCConnectionResumeComplete-v1530-IEs",
	"RRCConnectionResumeComplete-v1530-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_RRCConnectionResumeComplete_v1530_IEs_tags_1,
	sizeof(asn_DEF_RRCConnectionResumeComplete_v1530_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionResumeComplete_v1530_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCConnectionResumeComplete_v1530_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnectionResumeComplete_v1530_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionResumeComplete_v1530_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRCConnectionResumeComplete_v1530_IEs_1,
	5,	/* Elements count */
	&asn_SPC_RRCConnectionResumeComplete_v1530_IEs_specs_1	/* Additional specs */
};

