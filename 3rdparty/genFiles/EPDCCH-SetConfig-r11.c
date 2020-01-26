/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#include "EPDCCH-SetConfig-r11.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_resourceBlockAssignment_r11_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 4 && size <= 38)) {
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
static int
memb_mpdcch_Narrowband_r13_constraint_27(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 16)) {
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
memb_dmrs_ScramblingSequenceInt_r11_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 503)) {
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
memb_pucch_ResourceStartOffset_r11_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 2047)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_transmissionType_r11_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_numberPRB_Pairs_r11_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_resourceBlockAssignment_r11_constr_11 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  4,  38 }	/* (SIZE(4..38)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_csi_RS_ConfigZPId2_r12_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_setup_constr_23 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_numberPRB_Pairs_v1310_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_csi_NumRepetitionCE_r13_constr_28 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_mpdcch_pdsch_HoppingConfig_r13_constr_35 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_fdd_r13_constr_39 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_tdd_r13_constr_48 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_mpdcch_StartSF_UESS_r13_constr_38 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_mpdcch_NumRepetition_r13_constr_57 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  8 }	/* (0..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_mpdcch_Narrowband_r13_constr_67 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (1..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_mpdcch_config_r13_constr_25 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_dmrs_ScramblingSequenceInt_r11_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  503 }	/* (0..503) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_pucch_ResourceStartOffset_r11_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  2047 }	/* (0..2047) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_transmissionType_r11_value2enum_3[] = {
	{ 0,	9,	"localised" },
	{ 1,	11,	"distributed" }
};
static const unsigned int asn_MAP_transmissionType_r11_enum2value_3[] = {
	1,	/* distributed(1) */
	0	/* localised(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_transmissionType_r11_specs_3 = {
	asn_MAP_transmissionType_r11_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_transmissionType_r11_enum2value_3,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_transmissionType_r11_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_transmissionType_r11_3 = {
	"transmissionType-r11",
	"transmissionType-r11",
	&asn_OP_NativeEnumerated,
	asn_DEF_transmissionType_r11_tags_3,
	sizeof(asn_DEF_transmissionType_r11_tags_3)
		/sizeof(asn_DEF_transmissionType_r11_tags_3[0]) - 1, /* 1 */
	asn_DEF_transmissionType_r11_tags_3,	/* Same as above */
	sizeof(asn_DEF_transmissionType_r11_tags_3)
		/sizeof(asn_DEF_transmissionType_r11_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_transmissionType_r11_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_transmissionType_r11_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_numberPRB_Pairs_r11_value2enum_7[] = {
	{ 0,	2,	"n2" },
	{ 1,	2,	"n4" },
	{ 2,	2,	"n8" }
};
static const unsigned int asn_MAP_numberPRB_Pairs_r11_enum2value_7[] = {
	0,	/* n2(0) */
	1,	/* n4(1) */
	2	/* n8(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_numberPRB_Pairs_r11_specs_7 = {
	asn_MAP_numberPRB_Pairs_r11_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_numberPRB_Pairs_r11_enum2value_7,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_numberPRB_Pairs_r11_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_numberPRB_Pairs_r11_7 = {
	"numberPRB-Pairs-r11",
	"numberPRB-Pairs-r11",
	&asn_OP_NativeEnumerated,
	asn_DEF_numberPRB_Pairs_r11_tags_7,
	sizeof(asn_DEF_numberPRB_Pairs_r11_tags_7)
		/sizeof(asn_DEF_numberPRB_Pairs_r11_tags_7[0]) - 1, /* 1 */
	asn_DEF_numberPRB_Pairs_r11_tags_7,	/* Same as above */
	sizeof(asn_DEF_numberPRB_Pairs_r11_tags_7)
		/sizeof(asn_DEF_numberPRB_Pairs_r11_tags_7[0]), /* 2 */
	{ 0, &asn_PER_type_numberPRB_Pairs_r11_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_numberPRB_Pairs_r11_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_resourceBlockAssignment_r11_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EPDCCH_SetConfig_r11__resourceBlockAssignment_r11, numberPRB_Pairs_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_numberPRB_Pairs_r11_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"numberPRB-Pairs-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EPDCCH_SetConfig_r11__resourceBlockAssignment_r11, resourceBlockAssignment_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_resourceBlockAssignment_r11_constr_11,  memb_resourceBlockAssignment_r11_constraint_6 },
		0, 0, /* No default value */
		"resourceBlockAssignment-r11"
		},
};
static const ber_tlv_tag_t asn_DEF_resourceBlockAssignment_r11_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_resourceBlockAssignment_r11_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* numberPRB-Pairs-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* resourceBlockAssignment-r11 */
};
static asn_SEQUENCE_specifics_t asn_SPC_resourceBlockAssignment_r11_specs_6 = {
	sizeof(struct EPDCCH_SetConfig_r11__resourceBlockAssignment_r11),
	offsetof(struct EPDCCH_SetConfig_r11__resourceBlockAssignment_r11, _asn_ctx),
	asn_MAP_resourceBlockAssignment_r11_tag2el_6,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_resourceBlockAssignment_r11_6 = {
	"resourceBlockAssignment-r11",
	"resourceBlockAssignment-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_resourceBlockAssignment_r11_tags_6,
	sizeof(asn_DEF_resourceBlockAssignment_r11_tags_6)
		/sizeof(asn_DEF_resourceBlockAssignment_r11_tags_6[0]) - 1, /* 1 */
	asn_DEF_resourceBlockAssignment_r11_tags_6,	/* Same as above */
	sizeof(asn_DEF_resourceBlockAssignment_r11_tags_6)
		/sizeof(asn_DEF_resourceBlockAssignment_r11_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_resourceBlockAssignment_r11_6,
	2,	/* Elements count */
	&asn_SPC_resourceBlockAssignment_r11_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_csi_RS_ConfigZPId2_r12_17[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EPDCCH_SetConfig_r11__ext1__csi_RS_ConfigZPId2_r12, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EPDCCH_SetConfig_r11__ext1__csi_RS_ConfigZPId2_r12, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_RS_ConfigZPId_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_csi_RS_ConfigZPId2_r12_tag2el_17[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_csi_RS_ConfigZPId2_r12_specs_17 = {
	sizeof(struct EPDCCH_SetConfig_r11__ext1__csi_RS_ConfigZPId2_r12),
	offsetof(struct EPDCCH_SetConfig_r11__ext1__csi_RS_ConfigZPId2_r12, _asn_ctx),
	offsetof(struct EPDCCH_SetConfig_r11__ext1__csi_RS_ConfigZPId2_r12, present),
	sizeof(((struct EPDCCH_SetConfig_r11__ext1__csi_RS_ConfigZPId2_r12 *)0)->present),
	asn_MAP_csi_RS_ConfigZPId2_r12_tag2el_17,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_csi_RS_ConfigZPId2_r12_17 = {
	"csi-RS-ConfigZPId2-r12",
	"csi-RS-ConfigZPId2-r12",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_csi_RS_ConfigZPId2_r12_constr_17, CHOICE_constraint },
	asn_MBR_csi_RS_ConfigZPId2_r12_17,
	2,	/* Elements count */
	&asn_SPC_csi_RS_ConfigZPId2_r12_specs_17	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_16[] = {
	{ ATF_POINTER, 1, offsetof(struct EPDCCH_SetConfig_r11__ext1, csi_RS_ConfigZPId2_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_csi_RS_ConfigZPId2_r12_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-RS-ConfigZPId2-r12"
		},
};
static const int asn_MAP_ext1_oms_16[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_16[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* csi-RS-ConfigZPId2-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_16 = {
	sizeof(struct EPDCCH_SetConfig_r11__ext1),
	offsetof(struct EPDCCH_SetConfig_r11__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_16,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_16,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_16 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_16,
	sizeof(asn_DEF_ext1_tags_16)
		/sizeof(asn_DEF_ext1_tags_16[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_16,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_16)
		/sizeof(asn_DEF_ext1_tags_16[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_16,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_16	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_setup_value2enum_23[] = {
	{ 0,	2,	"n6" }
};
static const unsigned int asn_MAP_setup_enum2value_23[] = {
	0	/* n6(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_setup_specs_23 = {
	asn_MAP_setup_value2enum_23,	/* "tag" => N; sorted by tag */
	asn_MAP_setup_enum2value_23,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_setup_tags_23[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_23 = {
	"setup",
	"setup",
	&asn_OP_NativeEnumerated,
	asn_DEF_setup_tags_23,
	sizeof(asn_DEF_setup_tags_23)
		/sizeof(asn_DEF_setup_tags_23[0]) - 1, /* 1 */
	asn_DEF_setup_tags_23,	/* Same as above */
	sizeof(asn_DEF_setup_tags_23)
		/sizeof(asn_DEF_setup_tags_23[0]), /* 2 */
	{ 0, &asn_PER_type_setup_constr_23, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_setup_specs_23	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_numberPRB_Pairs_v1310_21[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EPDCCH_SetConfig_r11__ext2__numberPRB_Pairs_v1310, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EPDCCH_SetConfig_r11__ext2__numberPRB_Pairs_v1310, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_setup_23,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_numberPRB_Pairs_v1310_tag2el_21[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_numberPRB_Pairs_v1310_specs_21 = {
	sizeof(struct EPDCCH_SetConfig_r11__ext2__numberPRB_Pairs_v1310),
	offsetof(struct EPDCCH_SetConfig_r11__ext2__numberPRB_Pairs_v1310, _asn_ctx),
	offsetof(struct EPDCCH_SetConfig_r11__ext2__numberPRB_Pairs_v1310, present),
	sizeof(((struct EPDCCH_SetConfig_r11__ext2__numberPRB_Pairs_v1310 *)0)->present),
	asn_MAP_numberPRB_Pairs_v1310_tag2el_21,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_numberPRB_Pairs_v1310_21 = {
	"numberPRB-Pairs-v1310",
	"numberPRB-Pairs-v1310",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_numberPRB_Pairs_v1310_constr_21, CHOICE_constraint },
	asn_MBR_numberPRB_Pairs_v1310_21,
	2,	/* Elements count */
	&asn_SPC_numberPRB_Pairs_v1310_specs_21	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_csi_NumRepetitionCE_r13_value2enum_28[] = {
	{ 0,	3,	"sf1" },
	{ 1,	3,	"sf2" },
	{ 2,	3,	"sf4" },
	{ 3,	3,	"sf8" },
	{ 4,	4,	"sf16" },
	{ 5,	4,	"sf32" }
};
static const unsigned int asn_MAP_csi_NumRepetitionCE_r13_enum2value_28[] = {
	0,	/* sf1(0) */
	4,	/* sf16(4) */
	1,	/* sf2(1) */
	5,	/* sf32(5) */
	2,	/* sf4(2) */
	3	/* sf8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_csi_NumRepetitionCE_r13_specs_28 = {
	asn_MAP_csi_NumRepetitionCE_r13_value2enum_28,	/* "tag" => N; sorted by tag */
	asn_MAP_csi_NumRepetitionCE_r13_enum2value_28,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_csi_NumRepetitionCE_r13_tags_28[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_csi_NumRepetitionCE_r13_28 = {
	"csi-NumRepetitionCE-r13",
	"csi-NumRepetitionCE-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_csi_NumRepetitionCE_r13_tags_28,
	sizeof(asn_DEF_csi_NumRepetitionCE_r13_tags_28)
		/sizeof(asn_DEF_csi_NumRepetitionCE_r13_tags_28[0]) - 1, /* 1 */
	asn_DEF_csi_NumRepetitionCE_r13_tags_28,	/* Same as above */
	sizeof(asn_DEF_csi_NumRepetitionCE_r13_tags_28)
		/sizeof(asn_DEF_csi_NumRepetitionCE_r13_tags_28[0]), /* 2 */
	{ 0, &asn_PER_type_csi_NumRepetitionCE_r13_constr_28, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_csi_NumRepetitionCE_r13_specs_28	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_mpdcch_pdsch_HoppingConfig_r13_value2enum_35[] = {
	{ 0,	2,	"on" },
	{ 1,	3,	"off" }
};
static const unsigned int asn_MAP_mpdcch_pdsch_HoppingConfig_r13_enum2value_35[] = {
	1,	/* off(1) */
	0	/* on(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_mpdcch_pdsch_HoppingConfig_r13_specs_35 = {
	asn_MAP_mpdcch_pdsch_HoppingConfig_r13_value2enum_35,	/* "tag" => N; sorted by tag */
	asn_MAP_mpdcch_pdsch_HoppingConfig_r13_enum2value_35,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_mpdcch_pdsch_HoppingConfig_r13_tags_35[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mpdcch_pdsch_HoppingConfig_r13_35 = {
	"mpdcch-pdsch-HoppingConfig-r13",
	"mpdcch-pdsch-HoppingConfig-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_mpdcch_pdsch_HoppingConfig_r13_tags_35,
	sizeof(asn_DEF_mpdcch_pdsch_HoppingConfig_r13_tags_35)
		/sizeof(asn_DEF_mpdcch_pdsch_HoppingConfig_r13_tags_35[0]) - 1, /* 1 */
	asn_DEF_mpdcch_pdsch_HoppingConfig_r13_tags_35,	/* Same as above */
	sizeof(asn_DEF_mpdcch_pdsch_HoppingConfig_r13_tags_35)
		/sizeof(asn_DEF_mpdcch_pdsch_HoppingConfig_r13_tags_35[0]), /* 2 */
	{ 0, &asn_PER_type_mpdcch_pdsch_HoppingConfig_r13_constr_35, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mpdcch_pdsch_HoppingConfig_r13_specs_35	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_fdd_r13_value2enum_39[] = {
	{ 0,	2,	"v1" },
	{ 1,	6,	"v1dot5" },
	{ 2,	2,	"v2" },
	{ 3,	6,	"v2dot5" },
	{ 4,	2,	"v4" },
	{ 5,	2,	"v5" },
	{ 6,	2,	"v8" },
	{ 7,	3,	"v10" }
};
static const unsigned int asn_MAP_fdd_r13_enum2value_39[] = {
	0,	/* v1(0) */
	7,	/* v10(7) */
	1,	/* v1dot5(1) */
	2,	/* v2(2) */
	3,	/* v2dot5(3) */
	4,	/* v4(4) */
	5,	/* v5(5) */
	6	/* v8(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_fdd_r13_specs_39 = {
	asn_MAP_fdd_r13_value2enum_39,	/* "tag" => N; sorted by tag */
	asn_MAP_fdd_r13_enum2value_39,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_fdd_r13_tags_39[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fdd_r13_39 = {
	"fdd-r13",
	"fdd-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_fdd_r13_tags_39,
	sizeof(asn_DEF_fdd_r13_tags_39)
		/sizeof(asn_DEF_fdd_r13_tags_39[0]) - 1, /* 1 */
	asn_DEF_fdd_r13_tags_39,	/* Same as above */
	sizeof(asn_DEF_fdd_r13_tags_39)
		/sizeof(asn_DEF_fdd_r13_tags_39[0]), /* 2 */
	{ 0, &asn_PER_type_fdd_r13_constr_39, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_fdd_r13_specs_39	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_tdd_r13_value2enum_48[] = {
	{ 0,	2,	"v1" },
	{ 1,	2,	"v2" },
	{ 2,	2,	"v4" },
	{ 3,	2,	"v5" },
	{ 4,	2,	"v8" },
	{ 5,	3,	"v10" },
	{ 6,	3,	"v20" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_tdd_r13_enum2value_48[] = {
	7,	/* spare1(7) */
	0,	/* v1(0) */
	5,	/* v10(5) */
	1,	/* v2(1) */
	6,	/* v20(6) */
	2,	/* v4(2) */
	3,	/* v5(3) */
	4	/* v8(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_tdd_r13_specs_48 = {
	asn_MAP_tdd_r13_value2enum_48,	/* "tag" => N; sorted by tag */
	asn_MAP_tdd_r13_enum2value_48,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_tdd_r13_tags_48[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd_r13_48 = {
	"tdd-r13",
	"tdd-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_tdd_r13_tags_48,
	sizeof(asn_DEF_tdd_r13_tags_48)
		/sizeof(asn_DEF_tdd_r13_tags_48[0]) - 1, /* 1 */
	asn_DEF_tdd_r13_tags_48,	/* Same as above */
	sizeof(asn_DEF_tdd_r13_tags_48)
		/sizeof(asn_DEF_tdd_r13_tags_48[0]), /* 2 */
	{ 0, &asn_PER_type_tdd_r13_constr_48, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_tdd_r13_specs_48	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_mpdcch_StartSF_UESS_r13_38[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EPDCCH_SetConfig_r11__ext2__mpdcch_config_r13__setup__mpdcch_StartSF_UESS_r13, choice.fdd_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_fdd_r13_39,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fdd-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EPDCCH_SetConfig_r11__ext2__mpdcch_config_r13__setup__mpdcch_StartSF_UESS_r13, choice.tdd_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_tdd_r13_48,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd-r13"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_mpdcch_StartSF_UESS_r13_tag2el_38[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd-r13 */
};
static asn_CHOICE_specifics_t asn_SPC_mpdcch_StartSF_UESS_r13_specs_38 = {
	sizeof(struct EPDCCH_SetConfig_r11__ext2__mpdcch_config_r13__setup__mpdcch_StartSF_UESS_r13),
	offsetof(struct EPDCCH_SetConfig_r11__ext2__mpdcch_config_r13__setup__mpdcch_StartSF_UESS_r13, _asn_ctx),
	offsetof(struct EPDCCH_SetConfig_r11__ext2__mpdcch_config_r13__setup__mpdcch_StartSF_UESS_r13, present),
	sizeof(((struct EPDCCH_SetConfig_r11__ext2__mpdcch_config_r13__setup__mpdcch_StartSF_UESS_r13 *)0)->present),
	asn_MAP_mpdcch_StartSF_UESS_r13_tag2el_38,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mpdcch_StartSF_UESS_r13_38 = {
	"mpdcch-StartSF-UESS-r13",
	"mpdcch-StartSF-UESS-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_mpdcch_StartSF_UESS_r13_constr_38, CHOICE_constraint },
	asn_MBR_mpdcch_StartSF_UESS_r13_38,
	2,	/* Elements count */
	&asn_SPC_mpdcch_StartSF_UESS_r13_specs_38	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_mpdcch_NumRepetition_r13_value2enum_57[] = {
	{ 0,	2,	"r1" },
	{ 1,	2,	"r2" },
	{ 2,	2,	"r4" },
	{ 3,	2,	"r8" },
	{ 4,	3,	"r16" },
	{ 5,	3,	"r32" },
	{ 6,	3,	"r64" },
	{ 7,	4,	"r128" },
	{ 8,	4,	"r256" }
};
static const unsigned int asn_MAP_mpdcch_NumRepetition_r13_enum2value_57[] = {
	0,	/* r1(0) */
	7,	/* r128(7) */
	4,	/* r16(4) */
	1,	/* r2(1) */
	8,	/* r256(8) */
	5,	/* r32(5) */
	2,	/* r4(2) */
	6,	/* r64(6) */
	3	/* r8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_mpdcch_NumRepetition_r13_specs_57 = {
	asn_MAP_mpdcch_NumRepetition_r13_value2enum_57,	/* "tag" => N; sorted by tag */
	asn_MAP_mpdcch_NumRepetition_r13_enum2value_57,	/* N => "tag"; sorted by N */
	9,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_mpdcch_NumRepetition_r13_tags_57[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mpdcch_NumRepetition_r13_57 = {
	"mpdcch-NumRepetition-r13",
	"mpdcch-NumRepetition-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_mpdcch_NumRepetition_r13_tags_57,
	sizeof(asn_DEF_mpdcch_NumRepetition_r13_tags_57)
		/sizeof(asn_DEF_mpdcch_NumRepetition_r13_tags_57[0]) - 1, /* 1 */
	asn_DEF_mpdcch_NumRepetition_r13_tags_57,	/* Same as above */
	sizeof(asn_DEF_mpdcch_NumRepetition_r13_tags_57)
		/sizeof(asn_DEF_mpdcch_NumRepetition_r13_tags_57[0]), /* 2 */
	{ 0, &asn_PER_type_mpdcch_NumRepetition_r13_constr_57, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mpdcch_NumRepetition_r13_specs_57	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_27[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EPDCCH_SetConfig_r11__ext2__mpdcch_config_r13__setup, csi_NumRepetitionCE_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_csi_NumRepetitionCE_r13_28,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-NumRepetitionCE-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EPDCCH_SetConfig_r11__ext2__mpdcch_config_r13__setup, mpdcch_pdsch_HoppingConfig_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mpdcch_pdsch_HoppingConfig_r13_35,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mpdcch-pdsch-HoppingConfig-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EPDCCH_SetConfig_r11__ext2__mpdcch_config_r13__setup, mpdcch_StartSF_UESS_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_mpdcch_StartSF_UESS_r13_38,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mpdcch-StartSF-UESS-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EPDCCH_SetConfig_r11__ext2__mpdcch_config_r13__setup, mpdcch_NumRepetition_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mpdcch_NumRepetition_r13_57,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mpdcch-NumRepetition-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EPDCCH_SetConfig_r11__ext2__mpdcch_config_r13__setup, mpdcch_Narrowband_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_mpdcch_Narrowband_r13_constr_67,  memb_mpdcch_Narrowband_r13_constraint_27 },
		0, 0, /* No default value */
		"mpdcch-Narrowband-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_setup_tags_27[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_27[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* csi-NumRepetitionCE-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mpdcch-pdsch-HoppingConfig-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* mpdcch-StartSF-UESS-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* mpdcch-NumRepetition-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* mpdcch-Narrowband-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_27 = {
	sizeof(struct EPDCCH_SetConfig_r11__ext2__mpdcch_config_r13__setup),
	offsetof(struct EPDCCH_SetConfig_r11__ext2__mpdcch_config_r13__setup, _asn_ctx),
	asn_MAP_setup_tag2el_27,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_27 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_27,
	sizeof(asn_DEF_setup_tags_27)
		/sizeof(asn_DEF_setup_tags_27[0]) - 1, /* 1 */
	asn_DEF_setup_tags_27,	/* Same as above */
	sizeof(asn_DEF_setup_tags_27)
		/sizeof(asn_DEF_setup_tags_27[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_setup_27,
	5,	/* Elements count */
	&asn_SPC_setup_specs_27	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_mpdcch_config_r13_25[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EPDCCH_SetConfig_r11__ext2__mpdcch_config_r13, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_POINTER, 0, offsetof(struct EPDCCH_SetConfig_r11__ext2__mpdcch_config_r13, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_27,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_mpdcch_config_r13_tag2el_25[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_mpdcch_config_r13_specs_25 = {
	sizeof(struct EPDCCH_SetConfig_r11__ext2__mpdcch_config_r13),
	offsetof(struct EPDCCH_SetConfig_r11__ext2__mpdcch_config_r13, _asn_ctx),
	offsetof(struct EPDCCH_SetConfig_r11__ext2__mpdcch_config_r13, present),
	sizeof(((struct EPDCCH_SetConfig_r11__ext2__mpdcch_config_r13 *)0)->present),
	asn_MAP_mpdcch_config_r13_tag2el_25,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mpdcch_config_r13_25 = {
	"mpdcch-config-r13",
	"mpdcch-config-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_mpdcch_config_r13_constr_25, CHOICE_constraint },
	asn_MBR_mpdcch_config_r13_25,
	2,	/* Elements count */
	&asn_SPC_mpdcch_config_r13_specs_25	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_20[] = {
	{ ATF_POINTER, 2, offsetof(struct EPDCCH_SetConfig_r11__ext2, numberPRB_Pairs_v1310),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_numberPRB_Pairs_v1310_21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"numberPRB-Pairs-v1310"
		},
	{ ATF_POINTER, 1, offsetof(struct EPDCCH_SetConfig_r11__ext2, mpdcch_config_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_mpdcch_config_r13_25,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mpdcch-config-r13"
		},
};
static const int asn_MAP_ext2_oms_20[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ext2_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_20[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* numberPRB-Pairs-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* mpdcch-config-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_20 = {
	sizeof(struct EPDCCH_SetConfig_r11__ext2),
	offsetof(struct EPDCCH_SetConfig_r11__ext2, _asn_ctx),
	asn_MAP_ext2_tag2el_20,
	2,	/* Count of tags in the map */
	asn_MAP_ext2_oms_20,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext2_20 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_ext2_tags_20,
	sizeof(asn_DEF_ext2_tags_20)
		/sizeof(asn_DEF_ext2_tags_20[0]) - 1, /* 1 */
	asn_DEF_ext2_tags_20,	/* Same as above */
	sizeof(asn_DEF_ext2_tags_20)
		/sizeof(asn_DEF_ext2_tags_20[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext2_20,
	2,	/* Elements count */
	&asn_SPC_ext2_specs_20	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_EPDCCH_SetConfig_r11_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EPDCCH_SetConfig_r11, setConfigId_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EPDCCH_SetConfigId_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setConfigId-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EPDCCH_SetConfig_r11, transmissionType_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_transmissionType_r11_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"transmissionType-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EPDCCH_SetConfig_r11, resourceBlockAssignment_r11),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_resourceBlockAssignment_r11_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"resourceBlockAssignment-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EPDCCH_SetConfig_r11, dmrs_ScramblingSequenceInt_r11),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_dmrs_ScramblingSequenceInt_r11_constr_12,  memb_dmrs_ScramblingSequenceInt_r11_constraint_1 },
		0, 0, /* No default value */
		"dmrs-ScramblingSequenceInt-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EPDCCH_SetConfig_r11, pucch_ResourceStartOffset_r11),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_pucch_ResourceStartOffset_r11_constr_13,  memb_pucch_ResourceStartOffset_r11_constraint_1 },
		0, 0, /* No default value */
		"pucch-ResourceStartOffset-r11"
		},
	{ ATF_POINTER, 3, offsetof(struct EPDCCH_SetConfig_r11, re_MappingQCL_ConfigId_r11),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDSCH_RE_MappingQCL_ConfigId_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"re-MappingQCL-ConfigId-r11"
		},
	{ ATF_POINTER, 2, offsetof(struct EPDCCH_SetConfig_r11, ext1),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_ext1_16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
	{ ATF_POINTER, 1, offsetof(struct EPDCCH_SetConfig_r11, ext2),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_ext2_20,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext2"
		},
};
static const int asn_MAP_EPDCCH_SetConfig_r11_oms_1[] = { 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_EPDCCH_SetConfig_r11_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_EPDCCH_SetConfig_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* setConfigId-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* transmissionType-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* resourceBlockAssignment-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* dmrs-ScramblingSequenceInt-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* pucch-ResourceStartOffset-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* re-MappingQCL-ConfigId-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* ext2 */
};
asn_SEQUENCE_specifics_t asn_SPC_EPDCCH_SetConfig_r11_specs_1 = {
	sizeof(struct EPDCCH_SetConfig_r11),
	offsetof(struct EPDCCH_SetConfig_r11, _asn_ctx),
	asn_MAP_EPDCCH_SetConfig_r11_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_EPDCCH_SetConfig_r11_oms_1,	/* Optional members */
	1, 2,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_EPDCCH_SetConfig_r11 = {
	"EPDCCH-SetConfig-r11",
	"EPDCCH-SetConfig-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_EPDCCH_SetConfig_r11_tags_1,
	sizeof(asn_DEF_EPDCCH_SetConfig_r11_tags_1)
		/sizeof(asn_DEF_EPDCCH_SetConfig_r11_tags_1[0]), /* 1 */
	asn_DEF_EPDCCH_SetConfig_r11_tags_1,	/* Same as above */
	sizeof(asn_DEF_EPDCCH_SetConfig_r11_tags_1)
		/sizeof(asn_DEF_EPDCCH_SetConfig_r11_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_EPDCCH_SetConfig_r11_1,
	8,	/* Elements count */
	&asn_SPC_EPDCCH_SetConfig_r11_specs_1	/* Additional specs */
};

