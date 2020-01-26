/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#include "SystemInformationBlockType1-v1310-IEs.h"

#include "CellSelectionInfoCE-r13.h"
#include "SystemInformationBlockType1-v1320-IEs.h"
#include "SchedulingInfoList-BR-r13.h"
#include "SystemInfoValueTagList-r13.h"
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
static int
memb_subframePattern10_r13_constraint_22(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static int
memb_subframePattern40_r13_constraint_22(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 40)) {
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
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_fdd_UplinkSubframeBitmapBR_r13_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static int
memb_startSymbolBR_r13_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 4)) {
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
memb_hyperSFN_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_type_eDRX_Allowed_r13_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_si_WindowLength_BR_r13_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_si_RepetitionPattern_r13_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_subframePattern10_r13_constr_23 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  10,  10 }	/* (SIZE(10..10)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_subframePattern40_r13_constr_24 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  40,  40 }	/* (SIZE(40..40)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_fdd_DownlinkOrTddSubframeBitmapBR_r13_constr_22 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_si_HoppingConfigCommon_r13_constr_27 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_si_ValidityTime_r13_constr_30 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_fdd_UplinkSubframeBitmapBR_r13_constr_25 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  10,  10 }	/* (SIZE(10..10)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_startSymbolBR_r13_constr_26 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (1..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_hyperSFN_r13_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  10,  10 }	/* (SIZE(10..10)) */,
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_eDRX_Allowed_r13_value2enum_3[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_eDRX_Allowed_r13_enum2value_3[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_eDRX_Allowed_r13_specs_3 = {
	asn_MAP_eDRX_Allowed_r13_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_eDRX_Allowed_r13_enum2value_3,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_eDRX_Allowed_r13_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eDRX_Allowed_r13_3 = {
	"eDRX-Allowed-r13",
	"eDRX-Allowed-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_eDRX_Allowed_r13_tags_3,
	sizeof(asn_DEF_eDRX_Allowed_r13_tags_3)
		/sizeof(asn_DEF_eDRX_Allowed_r13_tags_3[0]) - 1, /* 1 */
	asn_DEF_eDRX_Allowed_r13_tags_3,	/* Same as above */
	sizeof(asn_DEF_eDRX_Allowed_r13_tags_3)
		/sizeof(asn_DEF_eDRX_Allowed_r13_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_eDRX_Allowed_r13_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_eDRX_Allowed_r13_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_si_WindowLength_BR_r13_value2enum_7[] = {
	{ 0,	4,	"ms20" },
	{ 1,	4,	"ms40" },
	{ 2,	4,	"ms60" },
	{ 3,	4,	"ms80" },
	{ 4,	5,	"ms120" },
	{ 5,	5,	"ms160" },
	{ 6,	5,	"ms200" },
	{ 7,	5,	"spare" }
};
static const unsigned int asn_MAP_si_WindowLength_BR_r13_enum2value_7[] = {
	4,	/* ms120(4) */
	5,	/* ms160(5) */
	0,	/* ms20(0) */
	6,	/* ms200(6) */
	1,	/* ms40(1) */
	2,	/* ms60(2) */
	3,	/* ms80(3) */
	7	/* spare(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_si_WindowLength_BR_r13_specs_7 = {
	asn_MAP_si_WindowLength_BR_r13_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_si_WindowLength_BR_r13_enum2value_7,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_si_WindowLength_BR_r13_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_si_WindowLength_BR_r13_7 = {
	"si-WindowLength-BR-r13",
	"si-WindowLength-BR-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_si_WindowLength_BR_r13_tags_7,
	sizeof(asn_DEF_si_WindowLength_BR_r13_tags_7)
		/sizeof(asn_DEF_si_WindowLength_BR_r13_tags_7[0]) - 1, /* 1 */
	asn_DEF_si_WindowLength_BR_r13_tags_7,	/* Same as above */
	sizeof(asn_DEF_si_WindowLength_BR_r13_tags_7)
		/sizeof(asn_DEF_si_WindowLength_BR_r13_tags_7[0]), /* 2 */
	{ 0, &asn_PER_type_si_WindowLength_BR_r13_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_si_WindowLength_BR_r13_specs_7	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_si_RepetitionPattern_r13_value2enum_16[] = {
	{ 0,	7,	"everyRF" },
	{ 1,	10,	"every2ndRF" },
	{ 2,	10,	"every4thRF" },
	{ 3,	10,	"every8thRF" }
};
static const unsigned int asn_MAP_si_RepetitionPattern_r13_enum2value_16[] = {
	1,	/* every2ndRF(1) */
	2,	/* every4thRF(2) */
	3,	/* every8thRF(3) */
	0	/* everyRF(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_si_RepetitionPattern_r13_specs_16 = {
	asn_MAP_si_RepetitionPattern_r13_value2enum_16,	/* "tag" => N; sorted by tag */
	asn_MAP_si_RepetitionPattern_r13_enum2value_16,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_si_RepetitionPattern_r13_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_si_RepetitionPattern_r13_16 = {
	"si-RepetitionPattern-r13",
	"si-RepetitionPattern-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_si_RepetitionPattern_r13_tags_16,
	sizeof(asn_DEF_si_RepetitionPattern_r13_tags_16)
		/sizeof(asn_DEF_si_RepetitionPattern_r13_tags_16[0]) - 1, /* 1 */
	asn_DEF_si_RepetitionPattern_r13_tags_16,	/* Same as above */
	sizeof(asn_DEF_si_RepetitionPattern_r13_tags_16)
		/sizeof(asn_DEF_si_RepetitionPattern_r13_tags_16[0]), /* 2 */
	{ 0, &asn_PER_type_si_RepetitionPattern_r13_constr_16, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_si_RepetitionPattern_r13_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_fdd_DownlinkOrTddSubframeBitmapBR_r13_22[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13__fdd_DownlinkOrTddSubframeBitmapBR_r13, choice.subframePattern10_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_subframePattern10_r13_constr_23,  memb_subframePattern10_r13_constraint_22 },
		0, 0, /* No default value */
		"subframePattern10-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13__fdd_DownlinkOrTddSubframeBitmapBR_r13, choice.subframePattern40_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_subframePattern40_r13_constr_24,  memb_subframePattern40_r13_constraint_22 },
		0, 0, /* No default value */
		"subframePattern40-r13"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_fdd_DownlinkOrTddSubframeBitmapBR_r13_tag2el_22[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* subframePattern10-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* subframePattern40-r13 */
};
static asn_CHOICE_specifics_t asn_SPC_fdd_DownlinkOrTddSubframeBitmapBR_r13_specs_22 = {
	sizeof(struct SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13__fdd_DownlinkOrTddSubframeBitmapBR_r13),
	offsetof(struct SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13__fdd_DownlinkOrTddSubframeBitmapBR_r13, _asn_ctx),
	offsetof(struct SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13__fdd_DownlinkOrTddSubframeBitmapBR_r13, present),
	sizeof(((struct SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13__fdd_DownlinkOrTddSubframeBitmapBR_r13 *)0)->present),
	asn_MAP_fdd_DownlinkOrTddSubframeBitmapBR_r13_tag2el_22,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fdd_DownlinkOrTddSubframeBitmapBR_r13_22 = {
	"fdd-DownlinkOrTddSubframeBitmapBR-r13",
	"fdd-DownlinkOrTddSubframeBitmapBR-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_fdd_DownlinkOrTddSubframeBitmapBR_r13_constr_22, CHOICE_constraint },
	asn_MBR_fdd_DownlinkOrTddSubframeBitmapBR_r13_22,
	2,	/* Elements count */
	&asn_SPC_fdd_DownlinkOrTddSubframeBitmapBR_r13_specs_22	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_si_HoppingConfigCommon_r13_value2enum_27[] = {
	{ 0,	2,	"on" },
	{ 1,	3,	"off" }
};
static const unsigned int asn_MAP_si_HoppingConfigCommon_r13_enum2value_27[] = {
	1,	/* off(1) */
	0	/* on(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_si_HoppingConfigCommon_r13_specs_27 = {
	asn_MAP_si_HoppingConfigCommon_r13_value2enum_27,	/* "tag" => N; sorted by tag */
	asn_MAP_si_HoppingConfigCommon_r13_enum2value_27,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_si_HoppingConfigCommon_r13_tags_27[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_si_HoppingConfigCommon_r13_27 = {
	"si-HoppingConfigCommon-r13",
	"si-HoppingConfigCommon-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_si_HoppingConfigCommon_r13_tags_27,
	sizeof(asn_DEF_si_HoppingConfigCommon_r13_tags_27)
		/sizeof(asn_DEF_si_HoppingConfigCommon_r13_tags_27[0]) - 1, /* 1 */
	asn_DEF_si_HoppingConfigCommon_r13_tags_27,	/* Same as above */
	sizeof(asn_DEF_si_HoppingConfigCommon_r13_tags_27)
		/sizeof(asn_DEF_si_HoppingConfigCommon_r13_tags_27[0]), /* 2 */
	{ 0, &asn_PER_type_si_HoppingConfigCommon_r13_constr_27, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_si_HoppingConfigCommon_r13_specs_27	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_si_ValidityTime_r13_value2enum_30[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_si_ValidityTime_r13_enum2value_30[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_si_ValidityTime_r13_specs_30 = {
	asn_MAP_si_ValidityTime_r13_value2enum_30,	/* "tag" => N; sorted by tag */
	asn_MAP_si_ValidityTime_r13_enum2value_30,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_si_ValidityTime_r13_tags_30[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_si_ValidityTime_r13_30 = {
	"si-ValidityTime-r13",
	"si-ValidityTime-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_si_ValidityTime_r13_tags_30,
	sizeof(asn_DEF_si_ValidityTime_r13_tags_30)
		/sizeof(asn_DEF_si_ValidityTime_r13_tags_30[0]) - 1, /* 1 */
	asn_DEF_si_ValidityTime_r13_tags_30,	/* Same as above */
	sizeof(asn_DEF_si_ValidityTime_r13_tags_30)
		/sizeof(asn_DEF_si_ValidityTime_r13_tags_30[0]), /* 2 */
	{ 0, &asn_PER_type_si_ValidityTime_r13_constr_30, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_si_ValidityTime_r13_specs_30	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_bandwidthReducedAccessRelatedInfo_r13_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13, si_WindowLength_BR_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_si_WindowLength_BR_r13_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"si-WindowLength-BR-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13, si_RepetitionPattern_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_si_RepetitionPattern_r13_16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"si-RepetitionPattern-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13, schedulingInfoList_BR_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SchedulingInfoList_BR_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"schedulingInfoList-BR-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13, fdd_DownlinkOrTddSubframeBitmapBR_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_fdd_DownlinkOrTddSubframeBitmapBR_r13_22,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fdd-DownlinkOrTddSubframeBitmapBR-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13, fdd_UplinkSubframeBitmapBR_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_fdd_UplinkSubframeBitmapBR_r13_constr_25,  memb_fdd_UplinkSubframeBitmapBR_r13_constraint_6 },
		0, 0, /* No default value */
		"fdd-UplinkSubframeBitmapBR-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13, startSymbolBR_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_startSymbolBR_r13_constr_26,  memb_startSymbolBR_r13_constraint_6 },
		0, 0, /* No default value */
		"startSymbolBR-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13, si_HoppingConfigCommon_r13),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_si_HoppingConfigCommon_r13_27,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"si-HoppingConfigCommon-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13, si_ValidityTime_r13),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_si_ValidityTime_r13_30,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"si-ValidityTime-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13, systemInfoValueTagList_r13),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInfoValueTagList_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"systemInfoValueTagList-r13"
		},
};
static const int asn_MAP_bandwidthReducedAccessRelatedInfo_r13_oms_6[] = { 2, 3, 4, 7, 8 };
static const ber_tlv_tag_t asn_DEF_bandwidthReducedAccessRelatedInfo_r13_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_bandwidthReducedAccessRelatedInfo_r13_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* si-WindowLength-BR-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* si-RepetitionPattern-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* schedulingInfoList-BR-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* fdd-DownlinkOrTddSubframeBitmapBR-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* fdd-UplinkSubframeBitmapBR-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* startSymbolBR-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* si-HoppingConfigCommon-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* si-ValidityTime-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* systemInfoValueTagList-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_bandwidthReducedAccessRelatedInfo_r13_specs_6 = {
	sizeof(struct SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13),
	offsetof(struct SystemInformationBlockType1_v1310_IEs__bandwidthReducedAccessRelatedInfo_r13, _asn_ctx),
	asn_MAP_bandwidthReducedAccessRelatedInfo_r13_tag2el_6,
	9,	/* Count of tags in the map */
	asn_MAP_bandwidthReducedAccessRelatedInfo_r13_oms_6,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_bandwidthReducedAccessRelatedInfo_r13_6 = {
	"bandwidthReducedAccessRelatedInfo-r13",
	"bandwidthReducedAccessRelatedInfo-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_bandwidthReducedAccessRelatedInfo_r13_tags_6,
	sizeof(asn_DEF_bandwidthReducedAccessRelatedInfo_r13_tags_6)
		/sizeof(asn_DEF_bandwidthReducedAccessRelatedInfo_r13_tags_6[0]) - 1, /* 1 */
	asn_DEF_bandwidthReducedAccessRelatedInfo_r13_tags_6,	/* Same as above */
	sizeof(asn_DEF_bandwidthReducedAccessRelatedInfo_r13_tags_6)
		/sizeof(asn_DEF_bandwidthReducedAccessRelatedInfo_r13_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_bandwidthReducedAccessRelatedInfo_r13_6,
	9,	/* Elements count */
	&asn_SPC_bandwidthReducedAccessRelatedInfo_r13_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SystemInformationBlockType1_v1310_IEs_1[] = {
	{ ATF_POINTER, 5, offsetof(struct SystemInformationBlockType1_v1310_IEs, hyperSFN_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_hyperSFN_r13_constr_2,  memb_hyperSFN_r13_constraint_1 },
		0, 0, /* No default value */
		"hyperSFN-r13"
		},
	{ ATF_POINTER, 4, offsetof(struct SystemInformationBlockType1_v1310_IEs, eDRX_Allowed_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_eDRX_Allowed_r13_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eDRX-Allowed-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType1_v1310_IEs, cellSelectionInfoCE_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellSelectionInfoCE_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellSelectionInfoCE-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType1_v1310_IEs, bandwidthReducedAccessRelatedInfo_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_bandwidthReducedAccessRelatedInfo_r13_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bandwidthReducedAccessRelatedInfo-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType1_v1310_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType1_v1320_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_SystemInformationBlockType1_v1310_IEs_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_SystemInformationBlockType1_v1310_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType1_v1310_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* hyperSFN-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* eDRX-Allowed-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cellSelectionInfoCE-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* bandwidthReducedAccessRelatedInfo-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType1_v1310_IEs_specs_1 = {
	sizeof(struct SystemInformationBlockType1_v1310_IEs),
	offsetof(struct SystemInformationBlockType1_v1310_IEs, _asn_ctx),
	asn_MAP_SystemInformationBlockType1_v1310_IEs_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType1_v1310_IEs_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType1_v1310_IEs = {
	"SystemInformationBlockType1-v1310-IEs",
	"SystemInformationBlockType1-v1310-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemInformationBlockType1_v1310_IEs_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType1_v1310_IEs_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType1_v1310_IEs_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType1_v1310_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType1_v1310_IEs_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType1_v1310_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SystemInformationBlockType1_v1310_IEs_1,
	5,	/* Elements count */
	&asn_SPC_SystemInformationBlockType1_v1310_IEs_specs_1	/* Additional specs */
};

