/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "PDCCH-CandidateReductionValue-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_PDCCH_CandidateReductionValue_r14_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_PDCCH_CandidateReductionValue_r14_value2enum_1[] = {
	{ 0,	2,	"n0" },
	{ 1,	3,	"n50" },
	{ 2,	4,	"n100" },
	{ 3,	4,	"n150" }
};
static const unsigned int asn_MAP_PDCCH_CandidateReductionValue_r14_enum2value_1[] = {
	0,	/* n0(0) */
	2,	/* n100(2) */
	3,	/* n150(3) */
	1	/* n50(1) */
};
const asn_INTEGER_specifics_t asn_SPC_PDCCH_CandidateReductionValue_r14_specs_1 = {
	asn_MAP_PDCCH_CandidateReductionValue_r14_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_PDCCH_CandidateReductionValue_r14_enum2value_1,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_PDCCH_CandidateReductionValue_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_PDCCH_CandidateReductionValue_r14 = {
	"PDCCH-CandidateReductionValue-r14",
	"PDCCH-CandidateReductionValue-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_PDCCH_CandidateReductionValue_r14_tags_1,
	sizeof(asn_DEF_PDCCH_CandidateReductionValue_r14_tags_1)
		/sizeof(asn_DEF_PDCCH_CandidateReductionValue_r14_tags_1[0]), /* 1 */
	asn_DEF_PDCCH_CandidateReductionValue_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDCCH_CandidateReductionValue_r14_tags_1)
		/sizeof(asn_DEF_PDCCH_CandidateReductionValue_r14_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_PDCCH_CandidateReductionValue_r14_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_PDCCH_CandidateReductionValue_r14_specs_1	/* Additional specs */
};

