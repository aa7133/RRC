/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "SL-CP-Len-r12.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_SL_CP_Len_r12_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_SL_CP_Len_r12_value2enum_1[] = {
	{ 0,	6,	"normal" },
	{ 1,	8,	"extended" }
};
static const unsigned int asn_MAP_SL_CP_Len_r12_enum2value_1[] = {
	1,	/* extended(1) */
	0	/* normal(0) */
};
const asn_INTEGER_specifics_t asn_SPC_SL_CP_Len_r12_specs_1 = {
	asn_MAP_SL_CP_Len_r12_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_SL_CP_Len_r12_enum2value_1,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_SL_CP_Len_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_SL_CP_Len_r12 = {
	"SL-CP-Len-r12",
	"SL-CP-Len-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_SL_CP_Len_r12_tags_1,
	sizeof(asn_DEF_SL_CP_Len_r12_tags_1)
		/sizeof(asn_DEF_SL_CP_Len_r12_tags_1[0]), /* 1 */
	asn_DEF_SL_CP_Len_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_CP_Len_r12_tags_1)
		/sizeof(asn_DEF_SL_CP_Len_r12_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_SL_CP_Len_r12_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_SL_CP_Len_r12_specs_1	/* Additional specs */
};

