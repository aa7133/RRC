/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "NPRACH-ParametersTDD-NB-r15.h"

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
static asn_per_constraints_t asn_PER_type_nprach_Periodicity_r15_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_nprach_StartTime_r15_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_nprach_SubcarrierOffset_r15_constr_29 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_nprach_NumSubcarriers_r15_constr_38 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_nprach_SubcarrierMSG3_RangeStart_r15_constr_43 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_npdcch_NumRepetitions_RA_r15_constr_48 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_npdcch_StartSF_CSS_RA_r15_constr_65 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_npdcch_Offset_RA_r15_constr_74 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_nprach_NumCBRA_StartSubcarriers_r15_constr_79 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_nprach_Periodicity_r15_value2enum_3[] = {
	{ 0,	4,	"ms80" },
	{ 1,	5,	"ms160" },
	{ 2,	5,	"ms320" },
	{ 3,	5,	"ms640" },
	{ 4,	6,	"ms1280" },
	{ 5,	6,	"ms2560" },
	{ 6,	6,	"ms5120" },
	{ 7,	7,	"ms10240" }
};
static const unsigned int asn_MAP_nprach_Periodicity_r15_enum2value_3[] = {
	7,	/* ms10240(7) */
	4,	/* ms1280(4) */
	1,	/* ms160(1) */
	5,	/* ms2560(5) */
	2,	/* ms320(2) */
	6,	/* ms5120(6) */
	3,	/* ms640(3) */
	0	/* ms80(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_nprach_Periodicity_r15_specs_3 = {
	asn_MAP_nprach_Periodicity_r15_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_nprach_Periodicity_r15_enum2value_3,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_nprach_Periodicity_r15_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nprach_Periodicity_r15_3 = {
	"nprach-Periodicity-r15",
	"nprach-Periodicity-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_nprach_Periodicity_r15_tags_3,
	sizeof(asn_DEF_nprach_Periodicity_r15_tags_3)
		/sizeof(asn_DEF_nprach_Periodicity_r15_tags_3[0]) - 1, /* 1 */
	asn_DEF_nprach_Periodicity_r15_tags_3,	/* Same as above */
	sizeof(asn_DEF_nprach_Periodicity_r15_tags_3)
		/sizeof(asn_DEF_nprach_Periodicity_r15_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_nprach_Periodicity_r15_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_nprach_Periodicity_r15_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_nprach_StartTime_r15_value2enum_12[] = {
	{ 0,	4,	"ms10" },
	{ 1,	4,	"ms20" },
	{ 2,	4,	"ms40" },
	{ 3,	4,	"ms80" },
	{ 4,	5,	"ms160" },
	{ 5,	5,	"ms320" },
	{ 6,	5,	"ms640" },
	{ 7,	6,	"ms1280" },
	{ 8,	6,	"ms2560" },
	{ 9,	6,	"ms5120" },
	{ 10,	6,	"spare6" },
	{ 11,	6,	"spare5" },
	{ 12,	6,	"spare4" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_nprach_StartTime_r15_enum2value_12[] = {
	0,	/* ms10(0) */
	7,	/* ms1280(7) */
	4,	/* ms160(4) */
	1,	/* ms20(1) */
	8,	/* ms2560(8) */
	5,	/* ms320(5) */
	2,	/* ms40(2) */
	9,	/* ms5120(9) */
	6,	/* ms640(6) */
	3,	/* ms80(3) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13,	/* spare3(13) */
	12,	/* spare4(12) */
	11,	/* spare5(11) */
	10	/* spare6(10) */
};
static const asn_INTEGER_specifics_t asn_SPC_nprach_StartTime_r15_specs_12 = {
	asn_MAP_nprach_StartTime_r15_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_nprach_StartTime_r15_enum2value_12,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_nprach_StartTime_r15_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nprach_StartTime_r15_12 = {
	"nprach-StartTime-r15",
	"nprach-StartTime-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_nprach_StartTime_r15_tags_12,
	sizeof(asn_DEF_nprach_StartTime_r15_tags_12)
		/sizeof(asn_DEF_nprach_StartTime_r15_tags_12[0]) - 1, /* 1 */
	asn_DEF_nprach_StartTime_r15_tags_12,	/* Same as above */
	sizeof(asn_DEF_nprach_StartTime_r15_tags_12)
		/sizeof(asn_DEF_nprach_StartTime_r15_tags_12[0]), /* 2 */
	{ 0, &asn_PER_type_nprach_StartTime_r15_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_nprach_StartTime_r15_specs_12	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_nprach_SubcarrierOffset_r15_value2enum_29[] = {
	{ 0,	2,	"n0" },
	{ 1,	3,	"n12" },
	{ 2,	3,	"n24" },
	{ 3,	3,	"n36" },
	{ 4,	2,	"n2" },
	{ 5,	3,	"n18" },
	{ 6,	3,	"n34" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_nprach_SubcarrierOffset_r15_enum2value_29[] = {
	0,	/* n0(0) */
	1,	/* n12(1) */
	5,	/* n18(5) */
	4,	/* n2(4) */
	2,	/* n24(2) */
	6,	/* n34(6) */
	3,	/* n36(3) */
	7	/* spare1(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_nprach_SubcarrierOffset_r15_specs_29 = {
	asn_MAP_nprach_SubcarrierOffset_r15_value2enum_29,	/* "tag" => N; sorted by tag */
	asn_MAP_nprach_SubcarrierOffset_r15_enum2value_29,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_nprach_SubcarrierOffset_r15_tags_29[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nprach_SubcarrierOffset_r15_29 = {
	"nprach-SubcarrierOffset-r15",
	"nprach-SubcarrierOffset-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_nprach_SubcarrierOffset_r15_tags_29,
	sizeof(asn_DEF_nprach_SubcarrierOffset_r15_tags_29)
		/sizeof(asn_DEF_nprach_SubcarrierOffset_r15_tags_29[0]) - 1, /* 1 */
	asn_DEF_nprach_SubcarrierOffset_r15_tags_29,	/* Same as above */
	sizeof(asn_DEF_nprach_SubcarrierOffset_r15_tags_29)
		/sizeof(asn_DEF_nprach_SubcarrierOffset_r15_tags_29[0]), /* 2 */
	{ 0, &asn_PER_type_nprach_SubcarrierOffset_r15_constr_29, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_nprach_SubcarrierOffset_r15_specs_29	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_nprach_NumSubcarriers_r15_value2enum_38[] = {
	{ 0,	3,	"n12" },
	{ 1,	3,	"n24" },
	{ 2,	3,	"n36" },
	{ 3,	3,	"n48" }
};
static const unsigned int asn_MAP_nprach_NumSubcarriers_r15_enum2value_38[] = {
	0,	/* n12(0) */
	1,	/* n24(1) */
	2,	/* n36(2) */
	3	/* n48(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_nprach_NumSubcarriers_r15_specs_38 = {
	asn_MAP_nprach_NumSubcarriers_r15_value2enum_38,	/* "tag" => N; sorted by tag */
	asn_MAP_nprach_NumSubcarriers_r15_enum2value_38,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_nprach_NumSubcarriers_r15_tags_38[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nprach_NumSubcarriers_r15_38 = {
	"nprach-NumSubcarriers-r15",
	"nprach-NumSubcarriers-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_nprach_NumSubcarriers_r15_tags_38,
	sizeof(asn_DEF_nprach_NumSubcarriers_r15_tags_38)
		/sizeof(asn_DEF_nprach_NumSubcarriers_r15_tags_38[0]) - 1, /* 1 */
	asn_DEF_nprach_NumSubcarriers_r15_tags_38,	/* Same as above */
	sizeof(asn_DEF_nprach_NumSubcarriers_r15_tags_38)
		/sizeof(asn_DEF_nprach_NumSubcarriers_r15_tags_38[0]), /* 2 */
	{ 0, &asn_PER_type_nprach_NumSubcarriers_r15_constr_38, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_nprach_NumSubcarriers_r15_specs_38	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_nprach_SubcarrierMSG3_RangeStart_r15_value2enum_43[] = {
	{ 0,	4,	"zero" },
	{ 1,	8,	"oneThird" },
	{ 2,	8,	"twoThird" },
	{ 3,	3,	"one" }
};
static const unsigned int asn_MAP_nprach_SubcarrierMSG3_RangeStart_r15_enum2value_43[] = {
	3,	/* one(3) */
	1,	/* oneThird(1) */
	2,	/* twoThird(2) */
	0	/* zero(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_nprach_SubcarrierMSG3_RangeStart_r15_specs_43 = {
	asn_MAP_nprach_SubcarrierMSG3_RangeStart_r15_value2enum_43,	/* "tag" => N; sorted by tag */
	asn_MAP_nprach_SubcarrierMSG3_RangeStart_r15_enum2value_43,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_nprach_SubcarrierMSG3_RangeStart_r15_tags_43[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nprach_SubcarrierMSG3_RangeStart_r15_43 = {
	"nprach-SubcarrierMSG3-RangeStart-r15",
	"nprach-SubcarrierMSG3-RangeStart-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_nprach_SubcarrierMSG3_RangeStart_r15_tags_43,
	sizeof(asn_DEF_nprach_SubcarrierMSG3_RangeStart_r15_tags_43)
		/sizeof(asn_DEF_nprach_SubcarrierMSG3_RangeStart_r15_tags_43[0]) - 1, /* 1 */
	asn_DEF_nprach_SubcarrierMSG3_RangeStart_r15_tags_43,	/* Same as above */
	sizeof(asn_DEF_nprach_SubcarrierMSG3_RangeStart_r15_tags_43)
		/sizeof(asn_DEF_nprach_SubcarrierMSG3_RangeStart_r15_tags_43[0]), /* 2 */
	{ 0, &asn_PER_type_nprach_SubcarrierMSG3_RangeStart_r15_constr_43, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_nprach_SubcarrierMSG3_RangeStart_r15_specs_43	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_npdcch_NumRepetitions_RA_r15_value2enum_48[] = {
	{ 0,	2,	"r1" },
	{ 1,	2,	"r2" },
	{ 2,	2,	"r4" },
	{ 3,	2,	"r8" },
	{ 4,	3,	"r16" },
	{ 5,	3,	"r32" },
	{ 6,	3,	"r64" },
	{ 7,	4,	"r128" },
	{ 8,	4,	"r256" },
	{ 9,	4,	"r512" },
	{ 10,	5,	"r1024" },
	{ 11,	5,	"r2048" },
	{ 12,	6,	"spare4" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_npdcch_NumRepetitions_RA_r15_enum2value_48[] = {
	0,	/* r1(0) */
	10,	/* r1024(10) */
	7,	/* r128(7) */
	4,	/* r16(4) */
	1,	/* r2(1) */
	11,	/* r2048(11) */
	8,	/* r256(8) */
	5,	/* r32(5) */
	2,	/* r4(2) */
	9,	/* r512(9) */
	6,	/* r64(6) */
	3,	/* r8(3) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13,	/* spare3(13) */
	12	/* spare4(12) */
};
static const asn_INTEGER_specifics_t asn_SPC_npdcch_NumRepetitions_RA_r15_specs_48 = {
	asn_MAP_npdcch_NumRepetitions_RA_r15_value2enum_48,	/* "tag" => N; sorted by tag */
	asn_MAP_npdcch_NumRepetitions_RA_r15_enum2value_48,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_npdcch_NumRepetitions_RA_r15_tags_48[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_npdcch_NumRepetitions_RA_r15_48 = {
	"npdcch-NumRepetitions-RA-r15",
	"npdcch-NumRepetitions-RA-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_npdcch_NumRepetitions_RA_r15_tags_48,
	sizeof(asn_DEF_npdcch_NumRepetitions_RA_r15_tags_48)
		/sizeof(asn_DEF_npdcch_NumRepetitions_RA_r15_tags_48[0]) - 1, /* 1 */
	asn_DEF_npdcch_NumRepetitions_RA_r15_tags_48,	/* Same as above */
	sizeof(asn_DEF_npdcch_NumRepetitions_RA_r15_tags_48)
		/sizeof(asn_DEF_npdcch_NumRepetitions_RA_r15_tags_48[0]), /* 2 */
	{ 0, &asn_PER_type_npdcch_NumRepetitions_RA_r15_constr_48, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_npdcch_NumRepetitions_RA_r15_specs_48	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_npdcch_StartSF_CSS_RA_r15_value2enum_65[] = {
	{ 0,	2,	"v4" },
	{ 1,	2,	"v8" },
	{ 2,	3,	"v16" },
	{ 3,	3,	"v32" },
	{ 4,	3,	"v48" },
	{ 5,	3,	"v64" },
	{ 6,	3,	"v96" },
	{ 7,	4,	"v128" }
};
static const unsigned int asn_MAP_npdcch_StartSF_CSS_RA_r15_enum2value_65[] = {
	7,	/* v128(7) */
	2,	/* v16(2) */
	3,	/* v32(3) */
	0,	/* v4(0) */
	4,	/* v48(4) */
	5,	/* v64(5) */
	1,	/* v8(1) */
	6	/* v96(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_npdcch_StartSF_CSS_RA_r15_specs_65 = {
	asn_MAP_npdcch_StartSF_CSS_RA_r15_value2enum_65,	/* "tag" => N; sorted by tag */
	asn_MAP_npdcch_StartSF_CSS_RA_r15_enum2value_65,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_npdcch_StartSF_CSS_RA_r15_tags_65[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_npdcch_StartSF_CSS_RA_r15_65 = {
	"npdcch-StartSF-CSS-RA-r15",
	"npdcch-StartSF-CSS-RA-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_npdcch_StartSF_CSS_RA_r15_tags_65,
	sizeof(asn_DEF_npdcch_StartSF_CSS_RA_r15_tags_65)
		/sizeof(asn_DEF_npdcch_StartSF_CSS_RA_r15_tags_65[0]) - 1, /* 1 */
	asn_DEF_npdcch_StartSF_CSS_RA_r15_tags_65,	/* Same as above */
	sizeof(asn_DEF_npdcch_StartSF_CSS_RA_r15_tags_65)
		/sizeof(asn_DEF_npdcch_StartSF_CSS_RA_r15_tags_65[0]), /* 2 */
	{ 0, &asn_PER_type_npdcch_StartSF_CSS_RA_r15_constr_65, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_npdcch_StartSF_CSS_RA_r15_specs_65	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_npdcch_Offset_RA_r15_value2enum_74[] = {
	{ 0,	4,	"zero" },
	{ 1,	9,	"oneEighth" },
	{ 2,	9,	"oneFourth" },
	{ 3,	11,	"threeEighth" }
};
static const unsigned int asn_MAP_npdcch_Offset_RA_r15_enum2value_74[] = {
	1,	/* oneEighth(1) */
	2,	/* oneFourth(2) */
	3,	/* threeEighth(3) */
	0	/* zero(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_npdcch_Offset_RA_r15_specs_74 = {
	asn_MAP_npdcch_Offset_RA_r15_value2enum_74,	/* "tag" => N; sorted by tag */
	asn_MAP_npdcch_Offset_RA_r15_enum2value_74,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_npdcch_Offset_RA_r15_tags_74[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_npdcch_Offset_RA_r15_74 = {
	"npdcch-Offset-RA-r15",
	"npdcch-Offset-RA-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_npdcch_Offset_RA_r15_tags_74,
	sizeof(asn_DEF_npdcch_Offset_RA_r15_tags_74)
		/sizeof(asn_DEF_npdcch_Offset_RA_r15_tags_74[0]) - 1, /* 1 */
	asn_DEF_npdcch_Offset_RA_r15_tags_74,	/* Same as above */
	sizeof(asn_DEF_npdcch_Offset_RA_r15_tags_74)
		/sizeof(asn_DEF_npdcch_Offset_RA_r15_tags_74[0]), /* 2 */
	{ 0, &asn_PER_type_npdcch_Offset_RA_r15_constr_74, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_npdcch_Offset_RA_r15_specs_74	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_nprach_NumCBRA_StartSubcarriers_r15_value2enum_79[] = {
	{ 0,	2,	"n8" },
	{ 1,	3,	"n10" },
	{ 2,	3,	"n11" },
	{ 3,	3,	"n12" },
	{ 4,	3,	"n20" },
	{ 5,	3,	"n22" },
	{ 6,	3,	"n23" },
	{ 7,	3,	"n24" },
	{ 8,	3,	"n32" },
	{ 9,	3,	"n34" },
	{ 10,	3,	"n35" },
	{ 11,	3,	"n36" },
	{ 12,	3,	"n40" },
	{ 13,	3,	"n44" },
	{ 14,	3,	"n46" },
	{ 15,	3,	"n48" }
};
static const unsigned int asn_MAP_nprach_NumCBRA_StartSubcarriers_r15_enum2value_79[] = {
	1,	/* n10(1) */
	2,	/* n11(2) */
	3,	/* n12(3) */
	4,	/* n20(4) */
	5,	/* n22(5) */
	6,	/* n23(6) */
	7,	/* n24(7) */
	8,	/* n32(8) */
	9,	/* n34(9) */
	10,	/* n35(10) */
	11,	/* n36(11) */
	12,	/* n40(12) */
	13,	/* n44(13) */
	14,	/* n46(14) */
	15,	/* n48(15) */
	0	/* n8(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_nprach_NumCBRA_StartSubcarriers_r15_specs_79 = {
	asn_MAP_nprach_NumCBRA_StartSubcarriers_r15_value2enum_79,	/* "tag" => N; sorted by tag */
	asn_MAP_nprach_NumCBRA_StartSubcarriers_r15_enum2value_79,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_nprach_NumCBRA_StartSubcarriers_r15_tags_79[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nprach_NumCBRA_StartSubcarriers_r15_79 = {
	"nprach-NumCBRA-StartSubcarriers-r15",
	"nprach-NumCBRA-StartSubcarriers-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_nprach_NumCBRA_StartSubcarriers_r15_tags_79,
	sizeof(asn_DEF_nprach_NumCBRA_StartSubcarriers_r15_tags_79)
		/sizeof(asn_DEF_nprach_NumCBRA_StartSubcarriers_r15_tags_79[0]) - 1, /* 1 */
	asn_DEF_nprach_NumCBRA_StartSubcarriers_r15_tags_79,	/* Same as above */
	sizeof(asn_DEF_nprach_NumCBRA_StartSubcarriers_r15_tags_79)
		/sizeof(asn_DEF_nprach_NumCBRA_StartSubcarriers_r15_tags_79[0]), /* 2 */
	{ 0, &asn_PER_type_nprach_NumCBRA_StartSubcarriers_r15_constr_79, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_nprach_NumCBRA_StartSubcarriers_r15_specs_79	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_nprach_Parameters_r15_2[] = {
	{ ATF_POINTER, 9, offsetof(struct NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15, nprach_Periodicity_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_nprach_Periodicity_r15_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-Periodicity-r15"
		},
	{ ATF_POINTER, 8, offsetof(struct NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15, nprach_StartTime_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_nprach_StartTime_r15_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-StartTime-r15"
		},
	{ ATF_POINTER, 7, offsetof(struct NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15, nprach_SubcarrierOffset_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_nprach_SubcarrierOffset_r15_29,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-SubcarrierOffset-r15"
		},
	{ ATF_POINTER, 6, offsetof(struct NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15, nprach_NumSubcarriers_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_nprach_NumSubcarriers_r15_38,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-NumSubcarriers-r15"
		},
	{ ATF_POINTER, 5, offsetof(struct NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15, nprach_SubcarrierMSG3_RangeStart_r15),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_nprach_SubcarrierMSG3_RangeStart_r15_43,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-SubcarrierMSG3-RangeStart-r15"
		},
	{ ATF_POINTER, 4, offsetof(struct NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15, npdcch_NumRepetitions_RA_r15),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_npdcch_NumRepetitions_RA_r15_48,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"npdcch-NumRepetitions-RA-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15, npdcch_StartSF_CSS_RA_r15),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_npdcch_StartSF_CSS_RA_r15_65,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"npdcch-StartSF-CSS-RA-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15, npdcch_Offset_RA_r15),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_npdcch_Offset_RA_r15_74,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"npdcch-Offset-RA-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15, nprach_NumCBRA_StartSubcarriers_r15),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_nprach_NumCBRA_StartSubcarriers_r15_79,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-NumCBRA-StartSubcarriers-r15"
		},
};
static const int asn_MAP_nprach_Parameters_r15_oms_2[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
static const ber_tlv_tag_t asn_DEF_nprach_Parameters_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_nprach_Parameters_r15_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nprach-Periodicity-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nprach-StartTime-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* nprach-SubcarrierOffset-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* nprach-NumSubcarriers-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* nprach-SubcarrierMSG3-RangeStart-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* npdcch-NumRepetitions-RA-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* npdcch-StartSF-CSS-RA-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* npdcch-Offset-RA-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* nprach-NumCBRA-StartSubcarriers-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_nprach_Parameters_r15_specs_2 = {
	sizeof(struct NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15),
	offsetof(struct NPRACH_ParametersTDD_NB_r15__nprach_Parameters_r15, _asn_ctx),
	asn_MAP_nprach_Parameters_r15_tag2el_2,
	9,	/* Count of tags in the map */
	asn_MAP_nprach_Parameters_r15_oms_2,	/* Optional members */
	9, 0,	/* Root/Additions */
	9,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nprach_Parameters_r15_2 = {
	"nprach-Parameters-r15",
	"nprach-Parameters-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_nprach_Parameters_r15_tags_2,
	sizeof(asn_DEF_nprach_Parameters_r15_tags_2)
		/sizeof(asn_DEF_nprach_Parameters_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_nprach_Parameters_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_nprach_Parameters_r15_tags_2)
		/sizeof(asn_DEF_nprach_Parameters_r15_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_nprach_Parameters_r15_2,
	9,	/* Elements count */
	&asn_SPC_nprach_Parameters_r15_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NPRACH_ParametersTDD_NB_r15_1[] = {
	{ ATF_POINTER, 1, offsetof(struct NPRACH_ParametersTDD_NB_r15, nprach_Parameters_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_nprach_Parameters_r15_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-Parameters-r15"
		},
};
static const int asn_MAP_NPRACH_ParametersTDD_NB_r15_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NPRACH_ParametersTDD_NB_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NPRACH_ParametersTDD_NB_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* nprach-Parameters-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_NPRACH_ParametersTDD_NB_r15_specs_1 = {
	sizeof(struct NPRACH_ParametersTDD_NB_r15),
	offsetof(struct NPRACH_ParametersTDD_NB_r15, _asn_ctx),
	asn_MAP_NPRACH_ParametersTDD_NB_r15_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_NPRACH_ParametersTDD_NB_r15_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NPRACH_ParametersTDD_NB_r15 = {
	"NPRACH-ParametersTDD-NB-r15",
	"NPRACH-ParametersTDD-NB-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_NPRACH_ParametersTDD_NB_r15_tags_1,
	sizeof(asn_DEF_NPRACH_ParametersTDD_NB_r15_tags_1)
		/sizeof(asn_DEF_NPRACH_ParametersTDD_NB_r15_tags_1[0]), /* 1 */
	asn_DEF_NPRACH_ParametersTDD_NB_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_NPRACH_ParametersTDD_NB_r15_tags_1)
		/sizeof(asn_DEF_NPRACH_ParametersTDD_NB_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NPRACH_ParametersTDD_NB_r15_1,
	1,	/* Elements count */
	&asn_SPC_NPRACH_ParametersTDD_NB_r15_specs_1	/* Additional specs */
};

