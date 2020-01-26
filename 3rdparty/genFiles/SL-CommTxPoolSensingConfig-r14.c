/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#include "SL-CommTxPoolSensingConfig-r14.h"

#include "SL-RestrictResourceReservationPeriodList-r14.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_minNumCandidateSF_r14_constraint_14(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 13)) {
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
memb_gapCandidateSensing_r14_constraint_14(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 10)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_probResourceKeep_r14_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_minNumCandidateSF_r14_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  13 }	/* (1..13) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_gapCandidateSensing_r14_constr_16 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  10,  10 }	/* (SIZE(10..10)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_sl_ReselectAfter_r14_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_probResourceKeep_r14_value2enum_5[] = {
	{ 0,	2,	"v0" },
	{ 1,	6,	"v0dot2" },
	{ 2,	6,	"v0dot4" },
	{ 3,	6,	"v0dot6" },
	{ 4,	6,	"v0dot8" },
	{ 5,	6,	"spare3" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_probResourceKeep_r14_enum2value_5[] = {
	7,	/* spare1(7) */
	6,	/* spare2(6) */
	5,	/* spare3(5) */
	0,	/* v0(0) */
	1,	/* v0dot2(1) */
	2,	/* v0dot4(2) */
	3,	/* v0dot6(3) */
	4	/* v0dot8(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_probResourceKeep_r14_specs_5 = {
	asn_MAP_probResourceKeep_r14_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_probResourceKeep_r14_enum2value_5,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_probResourceKeep_r14_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_probResourceKeep_r14_5 = {
	"probResourceKeep-r14",
	"probResourceKeep-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_probResourceKeep_r14_tags_5,
	sizeof(asn_DEF_probResourceKeep_r14_tags_5)
		/sizeof(asn_DEF_probResourceKeep_r14_tags_5[0]) - 1, /* 1 */
	asn_DEF_probResourceKeep_r14_tags_5,	/* Same as above */
	sizeof(asn_DEF_probResourceKeep_r14_tags_5)
		/sizeof(asn_DEF_probResourceKeep_r14_tags_5[0]), /* 2 */
	{ 0, &asn_PER_type_probResourceKeep_r14_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_probResourceKeep_r14_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_p2x_SensingConfig_r14_14[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_CommTxPoolSensingConfig_r14__p2x_SensingConfig_r14, minNumCandidateSF_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_minNumCandidateSF_r14_constr_15,  memb_minNumCandidateSF_r14_constraint_14 },
		0, 0, /* No default value */
		"minNumCandidateSF-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_CommTxPoolSensingConfig_r14__p2x_SensingConfig_r14, gapCandidateSensing_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_gapCandidateSensing_r14_constr_16,  memb_gapCandidateSensing_r14_constraint_14 },
		0, 0, /* No default value */
		"gapCandidateSensing-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_p2x_SensingConfig_r14_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_p2x_SensingConfig_r14_tag2el_14[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* minNumCandidateSF-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* gapCandidateSensing-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_p2x_SensingConfig_r14_specs_14 = {
	sizeof(struct SL_CommTxPoolSensingConfig_r14__p2x_SensingConfig_r14),
	offsetof(struct SL_CommTxPoolSensingConfig_r14__p2x_SensingConfig_r14, _asn_ctx),
	asn_MAP_p2x_SensingConfig_r14_tag2el_14,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_p2x_SensingConfig_r14_14 = {
	"p2x-SensingConfig-r14",
	"p2x-SensingConfig-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_p2x_SensingConfig_r14_tags_14,
	sizeof(asn_DEF_p2x_SensingConfig_r14_tags_14)
		/sizeof(asn_DEF_p2x_SensingConfig_r14_tags_14[0]) - 1, /* 1 */
	asn_DEF_p2x_SensingConfig_r14_tags_14,	/* Same as above */
	sizeof(asn_DEF_p2x_SensingConfig_r14_tags_14)
		/sizeof(asn_DEF_p2x_SensingConfig_r14_tags_14[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_p2x_SensingConfig_r14_14,
	2,	/* Elements count */
	&asn_SPC_p2x_SensingConfig_r14_specs_14	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_sl_ReselectAfter_r14_value2enum_17[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n3" },
	{ 3,	2,	"n4" },
	{ 4,	2,	"n5" },
	{ 5,	2,	"n6" },
	{ 6,	2,	"n7" },
	{ 7,	2,	"n8" },
	{ 8,	2,	"n9" },
	{ 9,	6,	"spare7" },
	{ 10,	6,	"spare6" },
	{ 11,	6,	"spare5" },
	{ 12,	6,	"spare4" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_sl_ReselectAfter_r14_enum2value_17[] = {
	0,	/* n1(0) */
	1,	/* n2(1) */
	2,	/* n3(2) */
	3,	/* n4(3) */
	4,	/* n5(4) */
	5,	/* n6(5) */
	6,	/* n7(6) */
	7,	/* n8(7) */
	8,	/* n9(8) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13,	/* spare3(13) */
	12,	/* spare4(12) */
	11,	/* spare5(11) */
	10,	/* spare6(10) */
	9	/* spare7(9) */
};
static const asn_INTEGER_specifics_t asn_SPC_sl_ReselectAfter_r14_specs_17 = {
	asn_MAP_sl_ReselectAfter_r14_value2enum_17,	/* "tag" => N; sorted by tag */
	asn_MAP_sl_ReselectAfter_r14_enum2value_17,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sl_ReselectAfter_r14_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_ReselectAfter_r14_17 = {
	"sl-ReselectAfter-r14",
	"sl-ReselectAfter-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_sl_ReselectAfter_r14_tags_17,
	sizeof(asn_DEF_sl_ReselectAfter_r14_tags_17)
		/sizeof(asn_DEF_sl_ReselectAfter_r14_tags_17[0]) - 1, /* 1 */
	asn_DEF_sl_ReselectAfter_r14_tags_17,	/* Same as above */
	sizeof(asn_DEF_sl_ReselectAfter_r14_tags_17)
		/sizeof(asn_DEF_sl_ReselectAfter_r14_tags_17[0]), /* 2 */
	{ 0, &asn_PER_type_sl_ReselectAfter_r14_constr_17, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sl_ReselectAfter_r14_specs_17	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SL_CommTxPoolSensingConfig_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_CommTxPoolSensingConfig_r14, pssch_TxConfigList_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_PSSCH_TxConfigList_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pssch-TxConfigList-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_CommTxPoolSensingConfig_r14, thresPSSCH_RSRP_List_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_ThresPSSCH_RSRP_List_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"thresPSSCH-RSRP-List-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_CommTxPoolSensingConfig_r14, restrictResourceReservationPeriod_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_RestrictResourceReservationPeriodList_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"restrictResourceReservationPeriod-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_CommTxPoolSensingConfig_r14, probResourceKeep_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_probResourceKeep_r14_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"probResourceKeep-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct SL_CommTxPoolSensingConfig_r14, p2x_SensingConfig_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_p2x_SensingConfig_r14_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"p2x-SensingConfig-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_CommTxPoolSensingConfig_r14, sl_ReselectAfter_r14),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sl_ReselectAfter_r14_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-ReselectAfter-r14"
		},
};
static const int asn_MAP_SL_CommTxPoolSensingConfig_r14_oms_1[] = { 2, 4, 5 };
static const ber_tlv_tag_t asn_DEF_SL_CommTxPoolSensingConfig_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_CommTxPoolSensingConfig_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pssch-TxConfigList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* thresPSSCH-RSRP-List-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* restrictResourceReservationPeriod-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* probResourceKeep-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* p2x-SensingConfig-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* sl-ReselectAfter-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_CommTxPoolSensingConfig_r14_specs_1 = {
	sizeof(struct SL_CommTxPoolSensingConfig_r14),
	offsetof(struct SL_CommTxPoolSensingConfig_r14, _asn_ctx),
	asn_MAP_SL_CommTxPoolSensingConfig_r14_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_SL_CommTxPoolSensingConfig_r14_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_CommTxPoolSensingConfig_r14 = {
	"SL-CommTxPoolSensingConfig-r14",
	"SL-CommTxPoolSensingConfig-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_CommTxPoolSensingConfig_r14_tags_1,
	sizeof(asn_DEF_SL_CommTxPoolSensingConfig_r14_tags_1)
		/sizeof(asn_DEF_SL_CommTxPoolSensingConfig_r14_tags_1[0]), /* 1 */
	asn_DEF_SL_CommTxPoolSensingConfig_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_CommTxPoolSensingConfig_r14_tags_1)
		/sizeof(asn_DEF_SL_CommTxPoolSensingConfig_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_CommTxPoolSensingConfig_r14_1,
	6,	/* Elements count */
	&asn_SPC_SL_CommTxPoolSensingConfig_r14_specs_1	/* Additional specs */
};

