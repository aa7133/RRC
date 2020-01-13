/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "CQI-ReportPeriodic-r10.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_k_constraint_12(const asn_TYPE_descriptor_t *td, const void *sptr,
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

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_cqi_pmi_ConfigIndex2_r10_constraint_23(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1023)) {
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
memb_ri_ConfigIndex2_r10_constraint_23(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1023)) {
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
memb_cqi_PUCCH_ResourceIndex_r10_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1184)) {
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
memb_cqi_PUCCH_ResourceIndexP1_r10_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1184)) {
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
memb_cqi_pmi_ConfigIndex_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1023)) {
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
memb_ri_ConfigIndex_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1023)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_csi_ReportMode_r10_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_periodicityFactor_r10_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_k_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (1..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_cqi_FormatIndicatorPeriodic_r10_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_cqi_Mask_r9_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_cqi_pmi_ConfigIndex2_r10_constr_24 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (0..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ri_ConfigIndex2_r10_constr_25 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (0..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_csi_ConfigIndex_r10_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_cqi_PUCCH_ResourceIndex_r10_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  1184 }	/* (0..1184) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_cqi_PUCCH_ResourceIndexP1_r10_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  1184 }	/* (0..1184) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_cqi_pmi_ConfigIndex_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (0..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ri_ConfigIndex_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (0..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_CQI_ReportPeriodic_r10_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_csi_ReportMode_r10_value2enum_9[] = {
	{ 0,	8,	"submode1" },
	{ 1,	8,	"submode2" }
};
static const unsigned int asn_MAP_csi_ReportMode_r10_enum2value_9[] = {
	0,	/* submode1(0) */
	1	/* submode2(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_csi_ReportMode_r10_specs_9 = {
	asn_MAP_csi_ReportMode_r10_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_csi_ReportMode_r10_enum2value_9,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_csi_ReportMode_r10_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_csi_ReportMode_r10_9 = {
	"csi-ReportMode-r10",
	"csi-ReportMode-r10",
	&asn_OP_NativeEnumerated,
	asn_DEF_csi_ReportMode_r10_tags_9,
	sizeof(asn_DEF_csi_ReportMode_r10_tags_9)
		/sizeof(asn_DEF_csi_ReportMode_r10_tags_9[0]) - 1, /* 1 */
	asn_DEF_csi_ReportMode_r10_tags_9,	/* Same as above */
	sizeof(asn_DEF_csi_ReportMode_r10_tags_9)
		/sizeof(asn_DEF_csi_ReportMode_r10_tags_9[0]), /* 2 */
	{ 0, &asn_PER_type_csi_ReportMode_r10_constr_9, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_csi_ReportMode_r10_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_widebandCQI_r10_8[] = {
	{ ATF_POINTER, 1, offsetof(struct CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10__widebandCQI_r10, csi_ReportMode_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_csi_ReportMode_r10_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-ReportMode-r10"
		},
};
static const int asn_MAP_widebandCQI_r10_oms_8[] = { 0 };
static const ber_tlv_tag_t asn_DEF_widebandCQI_r10_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_widebandCQI_r10_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* csi-ReportMode-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_widebandCQI_r10_specs_8 = {
	sizeof(struct CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10__widebandCQI_r10),
	offsetof(struct CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10__widebandCQI_r10, _asn_ctx),
	asn_MAP_widebandCQI_r10_tag2el_8,
	1,	/* Count of tags in the map */
	asn_MAP_widebandCQI_r10_oms_8,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_widebandCQI_r10_8 = {
	"widebandCQI-r10",
	"widebandCQI-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_widebandCQI_r10_tags_8,
	sizeof(asn_DEF_widebandCQI_r10_tags_8)
		/sizeof(asn_DEF_widebandCQI_r10_tags_8[0]) - 1, /* 1 */
	asn_DEF_widebandCQI_r10_tags_8,	/* Same as above */
	sizeof(asn_DEF_widebandCQI_r10_tags_8)
		/sizeof(asn_DEF_widebandCQI_r10_tags_8[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_widebandCQI_r10_8,
	1,	/* Elements count */
	&asn_SPC_widebandCQI_r10_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_periodicityFactor_r10_value2enum_14[] = {
	{ 0,	2,	"n2" },
	{ 1,	2,	"n4" }
};
static const unsigned int asn_MAP_periodicityFactor_r10_enum2value_14[] = {
	0,	/* n2(0) */
	1	/* n4(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_periodicityFactor_r10_specs_14 = {
	asn_MAP_periodicityFactor_r10_value2enum_14,	/* "tag" => N; sorted by tag */
	asn_MAP_periodicityFactor_r10_enum2value_14,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_periodicityFactor_r10_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_periodicityFactor_r10_14 = {
	"periodicityFactor-r10",
	"periodicityFactor-r10",
	&asn_OP_NativeEnumerated,
	asn_DEF_periodicityFactor_r10_tags_14,
	sizeof(asn_DEF_periodicityFactor_r10_tags_14)
		/sizeof(asn_DEF_periodicityFactor_r10_tags_14[0]) - 1, /* 1 */
	asn_DEF_periodicityFactor_r10_tags_14,	/* Same as above */
	sizeof(asn_DEF_periodicityFactor_r10_tags_14)
		/sizeof(asn_DEF_periodicityFactor_r10_tags_14[0]), /* 2 */
	{ 0, &asn_PER_type_periodicityFactor_r10_constr_14, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_periodicityFactor_r10_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_subbandCQI_r10_12[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10__subbandCQI_r10, k),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_k_constr_13,  memb_k_constraint_12 },
		0, 0, /* No default value */
		"k"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10__subbandCQI_r10, periodicityFactor_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_periodicityFactor_r10_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"periodicityFactor-r10"
		},
};
static const ber_tlv_tag_t asn_DEF_subbandCQI_r10_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_subbandCQI_r10_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* k */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* periodicityFactor-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_subbandCQI_r10_specs_12 = {
	sizeof(struct CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10__subbandCQI_r10),
	offsetof(struct CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10__subbandCQI_r10, _asn_ctx),
	asn_MAP_subbandCQI_r10_tag2el_12,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_subbandCQI_r10_12 = {
	"subbandCQI-r10",
	"subbandCQI-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_subbandCQI_r10_tags_12,
	sizeof(asn_DEF_subbandCQI_r10_tags_12)
		/sizeof(asn_DEF_subbandCQI_r10_tags_12[0]) - 1, /* 1 */
	asn_DEF_subbandCQI_r10_tags_12,	/* Same as above */
	sizeof(asn_DEF_subbandCQI_r10_tags_12)
		/sizeof(asn_DEF_subbandCQI_r10_tags_12[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_subbandCQI_r10_12,
	2,	/* Elements count */
	&asn_SPC_subbandCQI_r10_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_cqi_FormatIndicatorPeriodic_r10_7[] = {
	{ ATF_POINTER, 0, offsetof(struct CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10, choice.widebandCQI_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_widebandCQI_r10_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"widebandCQI-r10"
		},
	{ ATF_POINTER, 0, offsetof(struct CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10, choice.subbandCQI_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_subbandCQI_r10_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subbandCQI-r10"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_cqi_FormatIndicatorPeriodic_r10_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* widebandCQI-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* subbandCQI-r10 */
};
static asn_CHOICE_specifics_t asn_SPC_cqi_FormatIndicatorPeriodic_r10_specs_7 = {
	sizeof(struct CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10),
	offsetof(struct CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10, _asn_ctx),
	offsetof(struct CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10, present),
	sizeof(((struct CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10 *)0)->present),
	asn_MAP_cqi_FormatIndicatorPeriodic_r10_tag2el_7,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cqi_FormatIndicatorPeriodic_r10_7 = {
	"cqi-FormatIndicatorPeriodic-r10",
	"cqi-FormatIndicatorPeriodic-r10",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_cqi_FormatIndicatorPeriodic_r10_constr_7, CHOICE_constraint },
	asn_MBR_cqi_FormatIndicatorPeriodic_r10_7,
	2,	/* Elements count */
	&asn_SPC_cqi_FormatIndicatorPeriodic_r10_specs_7	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_cqi_Mask_r9_value2enum_19[] = {
	{ 0,	5,	"setup" }
};
static const unsigned int asn_MAP_cqi_Mask_r9_enum2value_19[] = {
	0	/* setup(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_cqi_Mask_r9_specs_19 = {
	asn_MAP_cqi_Mask_r9_value2enum_19,	/* "tag" => N; sorted by tag */
	asn_MAP_cqi_Mask_r9_enum2value_19,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_cqi_Mask_r9_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cqi_Mask_r9_19 = {
	"cqi-Mask-r9",
	"cqi-Mask-r9",
	&asn_OP_NativeEnumerated,
	asn_DEF_cqi_Mask_r9_tags_19,
	sizeof(asn_DEF_cqi_Mask_r9_tags_19)
		/sizeof(asn_DEF_cqi_Mask_r9_tags_19[0]) - 1, /* 1 */
	asn_DEF_cqi_Mask_r9_tags_19,	/* Same as above */
	sizeof(asn_DEF_cqi_Mask_r9_tags_19)
		/sizeof(asn_DEF_cqi_Mask_r9_tags_19[0]), /* 2 */
	{ 0, &asn_PER_type_cqi_Mask_r9_constr_19, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_cqi_Mask_r9_specs_19	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_23[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodic_r10__setup__csi_ConfigIndex_r10__setup, cqi_pmi_ConfigIndex2_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_cqi_pmi_ConfigIndex2_r10_constr_24,  memb_cqi_pmi_ConfigIndex2_r10_constraint_23 },
		0, 0, /* No default value */
		"cqi-pmi-ConfigIndex2-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct CQI_ReportPeriodic_r10__setup__csi_ConfigIndex_r10__setup, ri_ConfigIndex2_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_ri_ConfigIndex2_r10_constr_25,  memb_ri_ConfigIndex2_r10_constraint_23 },
		0, 0, /* No default value */
		"ri-ConfigIndex2-r10"
		},
};
static const int asn_MAP_setup_oms_23[] = { 1 };
static const ber_tlv_tag_t asn_DEF_setup_tags_23[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_23[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cqi-pmi-ConfigIndex2-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ri-ConfigIndex2-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_23 = {
	sizeof(struct CQI_ReportPeriodic_r10__setup__csi_ConfigIndex_r10__setup),
	offsetof(struct CQI_ReportPeriodic_r10__setup__csi_ConfigIndex_r10__setup, _asn_ctx),
	asn_MAP_setup_tag2el_23,
	2,	/* Count of tags in the map */
	asn_MAP_setup_oms_23,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_23 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_23,
	sizeof(asn_DEF_setup_tags_23)
		/sizeof(asn_DEF_setup_tags_23[0]) - 1, /* 1 */
	asn_DEF_setup_tags_23,	/* Same as above */
	sizeof(asn_DEF_setup_tags_23)
		/sizeof(asn_DEF_setup_tags_23[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_setup_23,
	2,	/* Elements count */
	&asn_SPC_setup_specs_23	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_csi_ConfigIndex_r10_21[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodic_r10__setup__csi_ConfigIndex_r10, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_POINTER, 0, offsetof(struct CQI_ReportPeriodic_r10__setup__csi_ConfigIndex_r10, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_23,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_csi_ConfigIndex_r10_tag2el_21[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_csi_ConfigIndex_r10_specs_21 = {
	sizeof(struct CQI_ReportPeriodic_r10__setup__csi_ConfigIndex_r10),
	offsetof(struct CQI_ReportPeriodic_r10__setup__csi_ConfigIndex_r10, _asn_ctx),
	offsetof(struct CQI_ReportPeriodic_r10__setup__csi_ConfigIndex_r10, present),
	sizeof(((struct CQI_ReportPeriodic_r10__setup__csi_ConfigIndex_r10 *)0)->present),
	asn_MAP_csi_ConfigIndex_r10_tag2el_21,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_csi_ConfigIndex_r10_21 = {
	"csi-ConfigIndex-r10",
	"csi-ConfigIndex-r10",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_csi_ConfigIndex_r10_constr_21, CHOICE_constraint },
	asn_MBR_csi_ConfigIndex_r10_21,
	2,	/* Elements count */
	&asn_SPC_csi_ConfigIndex_r10_specs_21	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodic_r10__setup, cqi_PUCCH_ResourceIndex_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_cqi_PUCCH_ResourceIndex_r10_constr_4,  memb_cqi_PUCCH_ResourceIndex_r10_constraint_3 },
		0, 0, /* No default value */
		"cqi-PUCCH-ResourceIndex-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct CQI_ReportPeriodic_r10__setup, cqi_PUCCH_ResourceIndexP1_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_cqi_PUCCH_ResourceIndexP1_r10_constr_5,  memb_cqi_PUCCH_ResourceIndexP1_r10_constraint_3 },
		0, 0, /* No default value */
		"cqi-PUCCH-ResourceIndexP1-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodic_r10__setup, cqi_pmi_ConfigIndex),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_cqi_pmi_ConfigIndex_constr_6,  memb_cqi_pmi_ConfigIndex_constraint_3 },
		0, 0, /* No default value */
		"cqi-pmi-ConfigIndex"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodic_r10__setup, cqi_FormatIndicatorPeriodic_r10),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_cqi_FormatIndicatorPeriodic_r10_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cqi-FormatIndicatorPeriodic-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct CQI_ReportPeriodic_r10__setup, ri_ConfigIndex),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_ri_ConfigIndex_constr_17,  memb_ri_ConfigIndex_constraint_3 },
		0, 0, /* No default value */
		"ri-ConfigIndex"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodic_r10__setup, simultaneousAckNackAndCQI),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"simultaneousAckNackAndCQI"
		},
	{ ATF_POINTER, 2, offsetof(struct CQI_ReportPeriodic_r10__setup, cqi_Mask_r9),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cqi_Mask_r9_19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cqi-Mask-r9"
		},
	{ ATF_POINTER, 1, offsetof(struct CQI_ReportPeriodic_r10__setup, csi_ConfigIndex_r10),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_csi_ConfigIndex_r10_21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-ConfigIndex-r10"
		},
};
static const int asn_MAP_setup_oms_3[] = { 1, 4, 6, 7 };
static const ber_tlv_tag_t asn_DEF_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cqi-PUCCH-ResourceIndex-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cqi-PUCCH-ResourceIndexP1-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cqi-pmi-ConfigIndex */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* cqi-FormatIndicatorPeriodic-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ri-ConfigIndex */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* simultaneousAckNackAndCQI */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* cqi-Mask-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* csi-ConfigIndex-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct CQI_ReportPeriodic_r10__setup),
	offsetof(struct CQI_ReportPeriodic_r10__setup, _asn_ctx),
	asn_MAP_setup_tag2el_3,
	8,	/* Count of tags in the map */
	asn_MAP_setup_oms_3,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_3 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_3,
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]) - 1, /* 1 */
	asn_DEF_setup_tags_3,	/* Same as above */
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_setup_3,
	8,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CQI_ReportPeriodic_r10_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodic_r10, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_POINTER, 0, offsetof(struct CQI_ReportPeriodic_r10, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_CQI_ReportPeriodic_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_CQI_ReportPeriodic_r10_specs_1 = {
	sizeof(struct CQI_ReportPeriodic_r10),
	offsetof(struct CQI_ReportPeriodic_r10, _asn_ctx),
	offsetof(struct CQI_ReportPeriodic_r10, present),
	sizeof(((struct CQI_ReportPeriodic_r10 *)0)->present),
	asn_MAP_CQI_ReportPeriodic_r10_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_CQI_ReportPeriodic_r10 = {
	"CQI-ReportPeriodic-r10",
	"CQI-ReportPeriodic-r10",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_CQI_ReportPeriodic_r10_constr_1, CHOICE_constraint },
	asn_MBR_CQI_ReportPeriodic_r10_1,
	2,	/* Elements count */
	&asn_SPC_CQI_ReportPeriodic_r10_specs_1	/* Additional specs */
};

