/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "NZP-FrequencyDensity-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_NZP_FrequencyDensity_r14_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_NZP_FrequencyDensity_r14_value2enum_1[] = {
	{ 0,	2,	"d1" },
	{ 1,	2,	"d2" },
	{ 2,	2,	"d3" }
};
static const unsigned int asn_MAP_NZP_FrequencyDensity_r14_enum2value_1[] = {
	0,	/* d1(0) */
	1,	/* d2(1) */
	2	/* d3(2) */
};
const asn_INTEGER_specifics_t asn_SPC_NZP_FrequencyDensity_r14_specs_1 = {
	asn_MAP_NZP_FrequencyDensity_r14_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_NZP_FrequencyDensity_r14_enum2value_1,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NZP_FrequencyDensity_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NZP_FrequencyDensity_r14 = {
	"NZP-FrequencyDensity-r14",
	"NZP-FrequencyDensity-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_NZP_FrequencyDensity_r14_tags_1,
	sizeof(asn_DEF_NZP_FrequencyDensity_r14_tags_1)
		/sizeof(asn_DEF_NZP_FrequencyDensity_r14_tags_1[0]), /* 1 */
	asn_DEF_NZP_FrequencyDensity_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_NZP_FrequencyDensity_r14_tags_1)
		/sizeof(asn_DEF_NZP_FrequencyDensity_r14_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_NZP_FrequencyDensity_r14_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NZP_FrequencyDensity_r14_specs_1	/* Additional specs */
};

