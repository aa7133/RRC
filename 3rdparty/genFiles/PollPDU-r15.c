/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "PollPDU-r15.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_PollPDU_r15_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_PollPDU_r15_value2enum_1[] = {
	{ 0,	2,	"p4" },
	{ 1,	2,	"p8" },
	{ 2,	3,	"p16" },
	{ 3,	3,	"p32" },
	{ 4,	3,	"p64" },
	{ 5,	4,	"p128" },
	{ 6,	4,	"p256" },
	{ 7,	4,	"p512" },
	{ 8,	5,	"p1024" },
	{ 9,	9,	"p2048-r15" },
	{ 10,	9,	"p4096-r15" },
	{ 11,	9,	"p6144-r15" },
	{ 12,	9,	"p8192-r15" },
	{ 13,	10,	"p12288-r15" },
	{ 14,	10,	"p16384-r15" },
	{ 15,	9,	"pInfinity" }
};
static const unsigned int asn_MAP_PollPDU_r15_enum2value_1[] = {
	8,	/* p1024(8) */
	13,	/* p12288-r15(13) */
	5,	/* p128(5) */
	2,	/* p16(2) */
	14,	/* p16384-r15(14) */
	9,	/* p2048-r15(9) */
	6,	/* p256(6) */
	3,	/* p32(3) */
	0,	/* p4(0) */
	10,	/* p4096-r15(10) */
	7,	/* p512(7) */
	11,	/* p6144-r15(11) */
	4,	/* p64(4) */
	1,	/* p8(1) */
	12,	/* p8192-r15(12) */
	15	/* pInfinity(15) */
};
const asn_INTEGER_specifics_t asn_SPC_PollPDU_r15_specs_1 = {
	asn_MAP_PollPDU_r15_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_PollPDU_r15_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_PollPDU_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_PollPDU_r15 = {
	"PollPDU-r15",
	"PollPDU-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_PollPDU_r15_tags_1,
	sizeof(asn_DEF_PollPDU_r15_tags_1)
		/sizeof(asn_DEF_PollPDU_r15_tags_1[0]), /* 1 */
	asn_DEF_PollPDU_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_PollPDU_r15_tags_1)
		/sizeof(asn_DEF_PollPDU_r15_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_PollPDU_r15_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_PollPDU_r15_specs_1	/* Additional specs */
};

