/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#include "SRB-ToAddMod.h"

#include "RLC-Config.h"
#include "LogicalChannelConfig.h"
#include "RLC-Config-v1530.h"
#include "RLC-BearerConfig-r15.h"
#include "RLC-Config-v1510.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_srb_Identity_v1530_constraint_10(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value == 4)) {
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
memb_srb_Identity_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 2)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_rlc_Config_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_logicalChannelConfig_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_pdcp_verChange_r15_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_srb_Identity_v1530_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  4,  4 }	/* (4..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_srb_Identity_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (1..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_rlc_Config_3[] = {
	{ ATF_POINTER, 0, offsetof(struct SRB_ToAddMod__rlc_Config, choice.explicitValue),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RLC_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"explicitValue"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRB_ToAddMod__rlc_Config, choice.defaultValue),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"defaultValue"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_rlc_Config_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* explicitValue */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* defaultValue */
};
static asn_CHOICE_specifics_t asn_SPC_rlc_Config_specs_3 = {
	sizeof(struct SRB_ToAddMod__rlc_Config),
	offsetof(struct SRB_ToAddMod__rlc_Config, _asn_ctx),
	offsetof(struct SRB_ToAddMod__rlc_Config, present),
	sizeof(((struct SRB_ToAddMod__rlc_Config *)0)->present),
	asn_MAP_rlc_Config_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rlc_Config_3 = {
	"rlc-Config",
	"rlc-Config",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_rlc_Config_constr_3, CHOICE_constraint },
	asn_MBR_rlc_Config_3,
	2,	/* Elements count */
	&asn_SPC_rlc_Config_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_logicalChannelConfig_6[] = {
	{ ATF_POINTER, 0, offsetof(struct SRB_ToAddMod__logicalChannelConfig, choice.explicitValue),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LogicalChannelConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"explicitValue"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRB_ToAddMod__logicalChannelConfig, choice.defaultValue),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"defaultValue"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_logicalChannelConfig_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* explicitValue */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* defaultValue */
};
static asn_CHOICE_specifics_t asn_SPC_logicalChannelConfig_specs_6 = {
	sizeof(struct SRB_ToAddMod__logicalChannelConfig),
	offsetof(struct SRB_ToAddMod__logicalChannelConfig, _asn_ctx),
	offsetof(struct SRB_ToAddMod__logicalChannelConfig, present),
	sizeof(((struct SRB_ToAddMod__logicalChannelConfig *)0)->present),
	asn_MAP_logicalChannelConfig_tag2el_6,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_logicalChannelConfig_6 = {
	"logicalChannelConfig",
	"logicalChannelConfig",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_logicalChannelConfig_constr_6, CHOICE_constraint },
	asn_MBR_logicalChannelConfig_6,
	2,	/* Elements count */
	&asn_SPC_logicalChannelConfig_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_pdcp_verChange_r15_value2enum_11[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_pdcp_verChange_r15_enum2value_11[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_pdcp_verChange_r15_specs_11 = {
	asn_MAP_pdcp_verChange_r15_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_pdcp_verChange_r15_enum2value_11,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_pdcp_verChange_r15_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pdcp_verChange_r15_11 = {
	"pdcp-verChange-r15",
	"pdcp-verChange-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_pdcp_verChange_r15_tags_11,
	sizeof(asn_DEF_pdcp_verChange_r15_tags_11)
		/sizeof(asn_DEF_pdcp_verChange_r15_tags_11[0]) - 1, /* 1 */
	asn_DEF_pdcp_verChange_r15_tags_11,	/* Same as above */
	sizeof(asn_DEF_pdcp_verChange_r15_tags_11)
		/sizeof(asn_DEF_pdcp_verChange_r15_tags_11[0]), /* 2 */
	{ 0, &asn_PER_type_pdcp_verChange_r15_constr_11, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_pdcp_verChange_r15_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_10[] = {
	{ ATF_POINTER, 4, offsetof(struct SRB_ToAddMod__ext1, pdcp_verChange_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_pdcp_verChange_r15_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdcp-verChange-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct SRB_ToAddMod__ext1, rlc_Config_v1530),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RLC_Config_v1530,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlc-Config-v1530"
		},
	{ ATF_POINTER, 2, offsetof(struct SRB_ToAddMod__ext1, rlc_BearerConfigSecondary_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RLC_BearerConfig_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlc-BearerConfigSecondary-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct SRB_ToAddMod__ext1, srb_Identity_v1530),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_srb_Identity_v1530_constr_15,  memb_srb_Identity_v1530_constraint_10 },
		0, 0, /* No default value */
		"srb-Identity-v1530"
		},
};
static const int asn_MAP_ext1_oms_10[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pdcp-verChange-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rlc-Config-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rlc-BearerConfigSecondary-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* srb-Identity-v1530 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_10 = {
	sizeof(struct SRB_ToAddMod__ext1),
	offsetof(struct SRB_ToAddMod__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_10,
	4,	/* Count of tags in the map */
	asn_MAP_ext1_oms_10,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_10 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_10,
	sizeof(asn_DEF_ext1_tags_10)
		/sizeof(asn_DEF_ext1_tags_10[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_10,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_10)
		/sizeof(asn_DEF_ext1_tags_10[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_10,
	4,	/* Elements count */
	&asn_SPC_ext1_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_16[] = {
	{ ATF_POINTER, 1, offsetof(struct SRB_ToAddMod__ext2, rlc_Config_v1560),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RLC_Config_v1510,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlc-Config-v1560"
		},
};
static const int asn_MAP_ext2_oms_16[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext2_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_16[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* rlc-Config-v1560 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_16 = {
	sizeof(struct SRB_ToAddMod__ext2),
	offsetof(struct SRB_ToAddMod__ext2, _asn_ctx),
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

asn_TYPE_member_t asn_MBR_SRB_ToAddMod_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SRB_ToAddMod, srb_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_srb_Identity_constr_2,  memb_srb_Identity_constraint_1 },
		0, 0, /* No default value */
		"srb-Identity"
		},
	{ ATF_POINTER, 4, offsetof(struct SRB_ToAddMod, rlc_Config),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_rlc_Config_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlc-Config"
		},
	{ ATF_POINTER, 3, offsetof(struct SRB_ToAddMod, logicalChannelConfig),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_logicalChannelConfig_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"logicalChannelConfig"
		},
	{ ATF_POINTER, 2, offsetof(struct SRB_ToAddMod, ext1),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_ext1_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
	{ ATF_POINTER, 1, offsetof(struct SRB_ToAddMod, ext2),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_ext2_16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext2"
		},
};
static const int asn_MAP_SRB_ToAddMod_oms_1[] = { 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_SRB_ToAddMod_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SRB_ToAddMod_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* srb-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rlc-Config */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* logicalChannelConfig */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* ext2 */
};
asn_SEQUENCE_specifics_t asn_SPC_SRB_ToAddMod_specs_1 = {
	sizeof(struct SRB_ToAddMod),
	offsetof(struct SRB_ToAddMod, _asn_ctx),
	asn_MAP_SRB_ToAddMod_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_SRB_ToAddMod_oms_1,	/* Optional members */
	2, 2,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SRB_ToAddMod = {
	"SRB-ToAddMod",
	"SRB-ToAddMod",
	&asn_OP_SEQUENCE,
	asn_DEF_SRB_ToAddMod_tags_1,
	sizeof(asn_DEF_SRB_ToAddMod_tags_1)
		/sizeof(asn_DEF_SRB_ToAddMod_tags_1[0]), /* 1 */
	asn_DEF_SRB_ToAddMod_tags_1,	/* Same as above */
	sizeof(asn_DEF_SRB_ToAddMod_tags_1)
		/sizeof(asn_DEF_SRB_ToAddMod_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SRB_ToAddMod_1,
	5,	/* Elements count */
	&asn_SPC_SRB_ToAddMod_specs_1	/* Additional specs */
};

