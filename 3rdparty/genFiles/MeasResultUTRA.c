/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#include "MeasResultUTRA.h"

#include "PLMN-IdentityList2.h"
#include "AdditionalSI-Info-r9.h"
static int
memb_locationAreaCode_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 16)) {
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
memb_routingAreaCode_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 8)) {
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
memb_utra_RSCP_constraint_10(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -5 && value <= 91)) {
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
memb_utra_EcN0_constraint_10(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 49)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_physCellId_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_locationAreaCode_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_routingAreaCode_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_primaryPLMN_Suitable_r12_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_utra_RSCP_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7, -5,  91 }	/* (-5..91) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_utra_EcN0_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  49 }	/* (0..49) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_physCellId_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultUTRA__physCellId, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellIdUTRA_FDD,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultUTRA__physCellId, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellIdUTRA_TDD,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_physCellId_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd */
};
static asn_CHOICE_specifics_t asn_SPC_physCellId_specs_2 = {
	sizeof(struct MeasResultUTRA__physCellId),
	offsetof(struct MeasResultUTRA__physCellId, _asn_ctx),
	offsetof(struct MeasResultUTRA__physCellId, present),
	sizeof(((struct MeasResultUTRA__physCellId *)0)->present),
	asn_MAP_physCellId_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_physCellId_2 = {
	"physCellId",
	"physCellId",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_physCellId_constr_2, CHOICE_constraint },
	asn_MBR_physCellId_2,
	2,	/* Elements count */
	&asn_SPC_physCellId_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_cgi_Info_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultUTRA__cgi_Info, cellGlobalId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellGlobalIdUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellGlobalId"
		},
	{ ATF_POINTER, 3, offsetof(struct MeasResultUTRA__cgi_Info, locationAreaCode),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_locationAreaCode_constr_7,  memb_locationAreaCode_constraint_5 },
		0, 0, /* No default value */
		"locationAreaCode"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasResultUTRA__cgi_Info, routingAreaCode),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_routingAreaCode_constr_8,  memb_routingAreaCode_constraint_5 },
		0, 0, /* No default value */
		"routingAreaCode"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultUTRA__cgi_Info, plmn_IdentityList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_IdentityList2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"plmn-IdentityList"
		},
};
static const int asn_MAP_cgi_Info_oms_5[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_cgi_Info_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_cgi_Info_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellGlobalId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* locationAreaCode */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* routingAreaCode */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* plmn-IdentityList */
};
static asn_SEQUENCE_specifics_t asn_SPC_cgi_Info_specs_5 = {
	sizeof(struct MeasResultUTRA__cgi_Info),
	offsetof(struct MeasResultUTRA__cgi_Info, _asn_ctx),
	asn_MAP_cgi_Info_tag2el_5,
	4,	/* Count of tags in the map */
	asn_MAP_cgi_Info_oms_5,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cgi_Info_5 = {
	"cgi-Info",
	"cgi-Info",
	&asn_OP_SEQUENCE,
	asn_DEF_cgi_Info_tags_5,
	sizeof(asn_DEF_cgi_Info_tags_5)
		/sizeof(asn_DEF_cgi_Info_tags_5[0]) - 1, /* 1 */
	asn_DEF_cgi_Info_tags_5,	/* Same as above */
	sizeof(asn_DEF_cgi_Info_tags_5)
		/sizeof(asn_DEF_cgi_Info_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_cgi_Info_5,
	4,	/* Elements count */
	&asn_SPC_cgi_Info_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_14[] = {
	{ ATF_POINTER, 1, offsetof(struct MeasResultUTRA__measResult__ext1, additionalSI_Info_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AdditionalSI_Info_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"additionalSI-Info-r9"
		},
};
static const int asn_MAP_ext1_oms_14[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_14[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* additionalSI-Info-r9 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_14 = {
	sizeof(struct MeasResultUTRA__measResult__ext1),
	offsetof(struct MeasResultUTRA__measResult__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_14,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_14,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_14 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_14,
	sizeof(asn_DEF_ext1_tags_14)
		/sizeof(asn_DEF_ext1_tags_14[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_14,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_14)
		/sizeof(asn_DEF_ext1_tags_14[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_14,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_14	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_primaryPLMN_Suitable_r12_value2enum_17[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_primaryPLMN_Suitable_r12_enum2value_17[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_primaryPLMN_Suitable_r12_specs_17 = {
	asn_MAP_primaryPLMN_Suitable_r12_value2enum_17,	/* "tag" => N; sorted by tag */
	asn_MAP_primaryPLMN_Suitable_r12_enum2value_17,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_primaryPLMN_Suitable_r12_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_primaryPLMN_Suitable_r12_17 = {
	"primaryPLMN-Suitable-r12",
	"primaryPLMN-Suitable-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_primaryPLMN_Suitable_r12_tags_17,
	sizeof(asn_DEF_primaryPLMN_Suitable_r12_tags_17)
		/sizeof(asn_DEF_primaryPLMN_Suitable_r12_tags_17[0]) - 1, /* 1 */
	asn_DEF_primaryPLMN_Suitable_r12_tags_17,	/* Same as above */
	sizeof(asn_DEF_primaryPLMN_Suitable_r12_tags_17)
		/sizeof(asn_DEF_primaryPLMN_Suitable_r12_tags_17[0]), /* 2 */
	{ 0, &asn_PER_type_primaryPLMN_Suitable_r12_constr_17, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_primaryPLMN_Suitable_r12_specs_17	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_16[] = {
	{ ATF_POINTER, 1, offsetof(struct MeasResultUTRA__measResult__ext2, primaryPLMN_Suitable_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_primaryPLMN_Suitable_r12_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"primaryPLMN-Suitable-r12"
		},
};
static const int asn_MAP_ext2_oms_16[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext2_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_16[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* primaryPLMN-Suitable-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_16 = {
	sizeof(struct MeasResultUTRA__measResult__ext2),
	offsetof(struct MeasResultUTRA__measResult__ext2, _asn_ctx),
	asn_MAP_ext2_tag2el_16,
	1,	/* Count of tags in the map */
	asn_MAP_ext2_oms_16,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext2_16 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_ext2_tags_16,
	sizeof(asn_DEF_ext2_tags_16)
		/sizeof(asn_DEF_ext2_tags_16[0]) - 1, /* 1 */
	asn_DEF_ext2_tags_16,	/* Same as above */
	sizeof(asn_DEF_ext2_tags_16)
		/sizeof(asn_DEF_ext2_tags_16[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext2_16,
	1,	/* Elements count */
	&asn_SPC_ext2_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_measResult_10[] = {
	{ ATF_POINTER, 4, offsetof(struct MeasResultUTRA__measResult, utra_RSCP),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_utra_RSCP_constr_11,  memb_utra_RSCP_constraint_10 },
		0, 0, /* No default value */
		"utra-RSCP"
		},
	{ ATF_POINTER, 3, offsetof(struct MeasResultUTRA__measResult, utra_EcN0),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_utra_EcN0_constr_12,  memb_utra_EcN0_constraint_10 },
		0, 0, /* No default value */
		"utra-EcN0"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasResultUTRA__measResult, ext1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_ext1_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultUTRA__measResult, ext2),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_ext2_16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext2"
		},
};
static const int asn_MAP_measResult_oms_10[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_measResult_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_measResult_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* utra-RSCP */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* utra-EcN0 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ext2 */
};
static asn_SEQUENCE_specifics_t asn_SPC_measResult_specs_10 = {
	sizeof(struct MeasResultUTRA__measResult),
	offsetof(struct MeasResultUTRA__measResult, _asn_ctx),
	asn_MAP_measResult_tag2el_10,
	4,	/* Count of tags in the map */
	asn_MAP_measResult_oms_10,	/* Optional members */
	2, 2,	/* Root/Additions */
	2,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measResult_10 = {
	"measResult",
	"measResult",
	&asn_OP_SEQUENCE,
	asn_DEF_measResult_tags_10,
	sizeof(asn_DEF_measResult_tags_10)
		/sizeof(asn_DEF_measResult_tags_10[0]) - 1, /* 1 */
	asn_DEF_measResult_tags_10,	/* Same as above */
	sizeof(asn_DEF_measResult_tags_10)
		/sizeof(asn_DEF_measResult_tags_10[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_measResult_10,
	4,	/* Elements count */
	&asn_SPC_measResult_specs_10	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MeasResultUTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultUTRA, physCellId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_physCellId_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physCellId"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultUTRA, cgi_Info),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_cgi_Info_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cgi-Info"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultUTRA, measResult),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_measResult_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResult"
		},
};
static const int asn_MAP_MeasResultUTRA_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_MeasResultUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasResultUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cgi-Info */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* measResult */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasResultUTRA_specs_1 = {
	sizeof(struct MeasResultUTRA),
	offsetof(struct MeasResultUTRA, _asn_ctx),
	asn_MAP_MeasResultUTRA_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_MeasResultUTRA_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasResultUTRA = {
	"MeasResultUTRA",
	"MeasResultUTRA",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasResultUTRA_tags_1,
	sizeof(asn_DEF_MeasResultUTRA_tags_1)
		/sizeof(asn_DEF_MeasResultUTRA_tags_1[0]), /* 1 */
	asn_DEF_MeasResultUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasResultUTRA_tags_1)
		/sizeof(asn_DEF_MeasResultUTRA_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasResultUTRA_1,
	3,	/* Elements count */
	&asn_SPC_MeasResultUTRA_specs_1	/* Additional specs */
};

