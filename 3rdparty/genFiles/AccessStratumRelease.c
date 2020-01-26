/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#include "AccessStratumRelease.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_AccessStratumRelease_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  7 }	/* (0..7,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_AccessStratumRelease_value2enum_1[] = {
	{ 0,	4,	"rel8" },
	{ 1,	4,	"rel9" },
	{ 2,	5,	"rel10" },
	{ 3,	5,	"rel11" },
	{ 4,	5,	"rel12" },
	{ 5,	5,	"rel13" },
	{ 6,	5,	"rel14" },
	{ 7,	5,	"rel15" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_AccessStratumRelease_enum2value_1[] = {
	2,	/* rel10(2) */
	3,	/* rel11(3) */
	4,	/* rel12(4) */
	5,	/* rel13(5) */
	6,	/* rel14(6) */
	7,	/* rel15(7) */
	0,	/* rel8(0) */
	1	/* rel9(1) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_AccessStratumRelease_specs_1 = {
	asn_MAP_AccessStratumRelease_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_AccessStratumRelease_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	9,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_AccessStratumRelease_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_AccessStratumRelease = {
	"AccessStratumRelease",
	"AccessStratumRelease",
	&asn_OP_NativeEnumerated,
	asn_DEF_AccessStratumRelease_tags_1,
	sizeof(asn_DEF_AccessStratumRelease_tags_1)
		/sizeof(asn_DEF_AccessStratumRelease_tags_1[0]), /* 1 */
	asn_DEF_AccessStratumRelease_tags_1,	/* Same as above */
	sizeof(asn_DEF_AccessStratumRelease_tags_1)
		/sizeof(asn_DEF_AccessStratumRelease_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_AccessStratumRelease_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_AccessStratumRelease_specs_1	/* Additional specs */
};

