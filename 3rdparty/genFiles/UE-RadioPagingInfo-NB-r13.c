/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "UE-RadioPagingInfo-NB-r13.h"

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
static asn_per_constraints_t asn_PER_type_ue_Category_NB_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_multiCarrierPaging_r14_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_mixedOperationMode_r15_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_wakeUpSignal_r15_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_wakeUpSignalMinGap_eDRX_r15_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_multiCarrierPagingTDD_r15_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ue_Category_NB_r13_value2enum_2[] = {
	{ 0,	3,	"nb1" }
};
static const unsigned int asn_MAP_ue_Category_NB_r13_enum2value_2[] = {
	0	/* nb1(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ue_Category_NB_r13_specs_2 = {
	asn_MAP_ue_Category_NB_r13_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_ue_Category_NB_r13_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ue_Category_NB_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ue_Category_NB_r13_2 = {
	"ue-Category-NB-r13",
	"ue-Category-NB-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_ue_Category_NB_r13_tags_2,
	sizeof(asn_DEF_ue_Category_NB_r13_tags_2)
		/sizeof(asn_DEF_ue_Category_NB_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_ue_Category_NB_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_ue_Category_NB_r13_tags_2)
		/sizeof(asn_DEF_ue_Category_NB_r13_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_ue_Category_NB_r13_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ue_Category_NB_r13_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_multiCarrierPaging_r14_value2enum_6[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_multiCarrierPaging_r14_enum2value_6[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_multiCarrierPaging_r14_specs_6 = {
	asn_MAP_multiCarrierPaging_r14_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_multiCarrierPaging_r14_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_multiCarrierPaging_r14_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_multiCarrierPaging_r14_6 = {
	"multiCarrierPaging-r14",
	"multiCarrierPaging-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_multiCarrierPaging_r14_tags_6,
	sizeof(asn_DEF_multiCarrierPaging_r14_tags_6)
		/sizeof(asn_DEF_multiCarrierPaging_r14_tags_6[0]) - 1, /* 1 */
	asn_DEF_multiCarrierPaging_r14_tags_6,	/* Same as above */
	sizeof(asn_DEF_multiCarrierPaging_r14_tags_6)
		/sizeof(asn_DEF_multiCarrierPaging_r14_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_multiCarrierPaging_r14_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_multiCarrierPaging_r14_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_5[] = {
	{ ATF_POINTER, 1, offsetof(struct UE_RadioPagingInfo_NB_r13__ext1, multiCarrierPaging_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_multiCarrierPaging_r14_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"multiCarrierPaging-r14"
		},
};
static const int asn_MAP_ext1_oms_5[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* multiCarrierPaging-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_5 = {
	sizeof(struct UE_RadioPagingInfo_NB_r13__ext1),
	offsetof(struct UE_RadioPagingInfo_NB_r13__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_5,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_5,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_5 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_5,
	sizeof(asn_DEF_ext1_tags_5)
		/sizeof(asn_DEF_ext1_tags_5[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_5,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_5)
		/sizeof(asn_DEF_ext1_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_5,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_mixedOperationMode_r15_value2enum_9[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_mixedOperationMode_r15_enum2value_9[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_mixedOperationMode_r15_specs_9 = {
	asn_MAP_mixedOperationMode_r15_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_mixedOperationMode_r15_enum2value_9,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_mixedOperationMode_r15_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mixedOperationMode_r15_9 = {
	"mixedOperationMode-r15",
	"mixedOperationMode-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_mixedOperationMode_r15_tags_9,
	sizeof(asn_DEF_mixedOperationMode_r15_tags_9)
		/sizeof(asn_DEF_mixedOperationMode_r15_tags_9[0]) - 1, /* 1 */
	asn_DEF_mixedOperationMode_r15_tags_9,	/* Same as above */
	sizeof(asn_DEF_mixedOperationMode_r15_tags_9)
		/sizeof(asn_DEF_mixedOperationMode_r15_tags_9[0]), /* 2 */
	{ 0, &asn_PER_type_mixedOperationMode_r15_constr_9, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mixedOperationMode_r15_specs_9	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_wakeUpSignal_r15_value2enum_11[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_wakeUpSignal_r15_enum2value_11[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_wakeUpSignal_r15_specs_11 = {
	asn_MAP_wakeUpSignal_r15_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_wakeUpSignal_r15_enum2value_11,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_wakeUpSignal_r15_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_wakeUpSignal_r15_11 = {
	"wakeUpSignal-r15",
	"wakeUpSignal-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_wakeUpSignal_r15_tags_11,
	sizeof(asn_DEF_wakeUpSignal_r15_tags_11)
		/sizeof(asn_DEF_wakeUpSignal_r15_tags_11[0]) - 1, /* 1 */
	asn_DEF_wakeUpSignal_r15_tags_11,	/* Same as above */
	sizeof(asn_DEF_wakeUpSignal_r15_tags_11)
		/sizeof(asn_DEF_wakeUpSignal_r15_tags_11[0]), /* 2 */
	{ 0, &asn_PER_type_wakeUpSignal_r15_constr_11, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_wakeUpSignal_r15_specs_11	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_wakeUpSignalMinGap_eDRX_r15_value2enum_13[] = {
	{ 0,	4,	"ms40" },
	{ 1,	5,	"ms240" },
	{ 2,	6,	"ms1000" },
	{ 3,	6,	"ms2000" }
};
static const unsigned int asn_MAP_wakeUpSignalMinGap_eDRX_r15_enum2value_13[] = {
	2,	/* ms1000(2) */
	3,	/* ms2000(3) */
	1,	/* ms240(1) */
	0	/* ms40(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_wakeUpSignalMinGap_eDRX_r15_specs_13 = {
	asn_MAP_wakeUpSignalMinGap_eDRX_r15_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_wakeUpSignalMinGap_eDRX_r15_enum2value_13,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_wakeUpSignalMinGap_eDRX_r15_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_wakeUpSignalMinGap_eDRX_r15_13 = {
	"wakeUpSignalMinGap-eDRX-r15",
	"wakeUpSignalMinGap-eDRX-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_wakeUpSignalMinGap_eDRX_r15_tags_13,
	sizeof(asn_DEF_wakeUpSignalMinGap_eDRX_r15_tags_13)
		/sizeof(asn_DEF_wakeUpSignalMinGap_eDRX_r15_tags_13[0]) - 1, /* 1 */
	asn_DEF_wakeUpSignalMinGap_eDRX_r15_tags_13,	/* Same as above */
	sizeof(asn_DEF_wakeUpSignalMinGap_eDRX_r15_tags_13)
		/sizeof(asn_DEF_wakeUpSignalMinGap_eDRX_r15_tags_13[0]), /* 2 */
	{ 0, &asn_PER_type_wakeUpSignalMinGap_eDRX_r15_constr_13, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_wakeUpSignalMinGap_eDRX_r15_specs_13	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_multiCarrierPagingTDD_r15_value2enum_18[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_multiCarrierPagingTDD_r15_enum2value_18[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_multiCarrierPagingTDD_r15_specs_18 = {
	asn_MAP_multiCarrierPagingTDD_r15_value2enum_18,	/* "tag" => N; sorted by tag */
	asn_MAP_multiCarrierPagingTDD_r15_enum2value_18,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_multiCarrierPagingTDD_r15_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_multiCarrierPagingTDD_r15_18 = {
	"multiCarrierPagingTDD-r15",
	"multiCarrierPagingTDD-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_multiCarrierPagingTDD_r15_tags_18,
	sizeof(asn_DEF_multiCarrierPagingTDD_r15_tags_18)
		/sizeof(asn_DEF_multiCarrierPagingTDD_r15_tags_18[0]) - 1, /* 1 */
	asn_DEF_multiCarrierPagingTDD_r15_tags_18,	/* Same as above */
	sizeof(asn_DEF_multiCarrierPagingTDD_r15_tags_18)
		/sizeof(asn_DEF_multiCarrierPagingTDD_r15_tags_18[0]), /* 2 */
	{ 0, &asn_PER_type_multiCarrierPagingTDD_r15_constr_18, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_multiCarrierPagingTDD_r15_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_8[] = {
	{ ATF_POINTER, 4, offsetof(struct UE_RadioPagingInfo_NB_r13__ext2, mixedOperationMode_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mixedOperationMode_r15_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mixedOperationMode-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct UE_RadioPagingInfo_NB_r13__ext2, wakeUpSignal_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_wakeUpSignal_r15_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"wakeUpSignal-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_RadioPagingInfo_NB_r13__ext2, wakeUpSignalMinGap_eDRX_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_wakeUpSignalMinGap_eDRX_r15_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"wakeUpSignalMinGap-eDRX-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_RadioPagingInfo_NB_r13__ext2, multiCarrierPagingTDD_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_multiCarrierPagingTDD_r15_18,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"multiCarrierPagingTDD-r15"
		},
};
static const int asn_MAP_ext2_oms_8[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_ext2_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mixedOperationMode-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* wakeUpSignal-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* wakeUpSignalMinGap-eDRX-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* multiCarrierPagingTDD-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_8 = {
	sizeof(struct UE_RadioPagingInfo_NB_r13__ext2),
	offsetof(struct UE_RadioPagingInfo_NB_r13__ext2, _asn_ctx),
	asn_MAP_ext2_tag2el_8,
	4,	/* Count of tags in the map */
	asn_MAP_ext2_oms_8,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext2_8 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_ext2_tags_8,
	sizeof(asn_DEF_ext2_tags_8)
		/sizeof(asn_DEF_ext2_tags_8[0]) - 1, /* 1 */
	asn_DEF_ext2_tags_8,	/* Same as above */
	sizeof(asn_DEF_ext2_tags_8)
		/sizeof(asn_DEF_ext2_tags_8[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext2_8,
	4,	/* Elements count */
	&asn_SPC_ext2_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UE_RadioPagingInfo_NB_r13_1[] = {
	{ ATF_POINTER, 3, offsetof(struct UE_RadioPagingInfo_NB_r13, ue_Category_NB_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ue_Category_NB_r13_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-Category-NB-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_RadioPagingInfo_NB_r13, ext1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ext1_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_RadioPagingInfo_NB_r13, ext2),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_ext2_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext2"
		},
};
static const int asn_MAP_UE_RadioPagingInfo_NB_r13_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_UE_RadioPagingInfo_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_RadioPagingInfo_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-Category-NB-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ext2 */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_RadioPagingInfo_NB_r13_specs_1 = {
	sizeof(struct UE_RadioPagingInfo_NB_r13),
	offsetof(struct UE_RadioPagingInfo_NB_r13, _asn_ctx),
	asn_MAP_UE_RadioPagingInfo_NB_r13_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_UE_RadioPagingInfo_NB_r13_oms_1,	/* Optional members */
	1, 2,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_RadioPagingInfo_NB_r13 = {
	"UE-RadioPagingInfo-NB-r13",
	"UE-RadioPagingInfo-NB-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_RadioPagingInfo_NB_r13_tags_1,
	sizeof(asn_DEF_UE_RadioPagingInfo_NB_r13_tags_1)
		/sizeof(asn_DEF_UE_RadioPagingInfo_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_UE_RadioPagingInfo_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_RadioPagingInfo_NB_r13_tags_1)
		/sizeof(asn_DEF_UE_RadioPagingInfo_NB_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_RadioPagingInfo_NB_r13_1,
	3,	/* Elements count */
	&asn_SPC_UE_RadioPagingInfo_NB_r13_specs_1	/* Additional specs */
};

