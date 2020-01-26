/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#include "AS-Config.h"

#include "SCellToAddModList-r10.h"
#include "SCG-Config-r12.h"
#include "AS-ConfigNR-r15.h"
#include "AS-Config-v1550.h"
static int
memb_sourceSystemInformationBlockType1Ext_constraint_12(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		(void)st; /* Unused variable */
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static int
memb_sourceSystemInformationBlockType1_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static asn_per_constraints_t asn_PER_memb_sourceSystemInformationBlockType1Ext_constr_13 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sourceSystemInformationBlockType1_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ext1_12[] = {
	{ ATF_POINTER, 1, offsetof(struct AS_Config__ext1, sourceSystemInformationBlockType1Ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_sourceSystemInformationBlockType1Ext_constr_13,  memb_sourceSystemInformationBlockType1Ext_constraint_12 },
		0, 0, /* No default value */
		"sourceSystemInformationBlockType1Ext"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config__ext1, sourceOtherConfig_r9),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OtherConfig_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceOtherConfig-r9"
		},
};
static const int asn_MAP_ext1_oms_12[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sourceSystemInformationBlockType1Ext */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* sourceOtherConfig-r9 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_12 = {
	sizeof(struct AS_Config__ext1),
	offsetof(struct AS_Config__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_12,
	2,	/* Count of tags in the map */
	asn_MAP_ext1_oms_12,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_12 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_12,
	sizeof(asn_DEF_ext1_tags_12)
		/sizeof(asn_DEF_ext1_tags_12[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_12,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_12)
		/sizeof(asn_DEF_ext1_tags_12[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_12,
	2,	/* Elements count */
	&asn_SPC_ext1_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_15[] = {
	{ ATF_POINTER, 1, offsetof(struct AS_Config__ext2, sourceSCellConfigList_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCellToAddModList_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceSCellConfigList-r10"
		},
};
static const int asn_MAP_ext2_oms_15[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext2_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* sourceSCellConfigList-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_15 = {
	sizeof(struct AS_Config__ext2),
	offsetof(struct AS_Config__ext2, _asn_ctx),
	asn_MAP_ext2_tag2el_15,
	1,	/* Count of tags in the map */
	asn_MAP_ext2_oms_15,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext2_15 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_ext2_tags_15,
	sizeof(asn_DEF_ext2_tags_15)
		/sizeof(asn_DEF_ext2_tags_15[0]) - 1, /* 1 */
	asn_DEF_ext2_tags_15,	/* Same as above */
	sizeof(asn_DEF_ext2_tags_15)
		/sizeof(asn_DEF_ext2_tags_15[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext2_15,
	1,	/* Elements count */
	&asn_SPC_ext2_specs_15	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext3_17[] = {
	{ ATF_POINTER, 1, offsetof(struct AS_Config__ext3, sourceConfigSCG_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCG_Config_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceConfigSCG-r12"
		},
};
static const int asn_MAP_ext3_oms_17[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext3_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext3_tag2el_17[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* sourceConfigSCG-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext3_specs_17 = {
	sizeof(struct AS_Config__ext3),
	offsetof(struct AS_Config__ext3, _asn_ctx),
	asn_MAP_ext3_tag2el_17,
	1,	/* Count of tags in the map */
	asn_MAP_ext3_oms_17,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext3_17 = {
	"ext3",
	"ext3",
	&asn_OP_SEQUENCE,
	asn_DEF_ext3_tags_17,
	sizeof(asn_DEF_ext3_tags_17)
		/sizeof(asn_DEF_ext3_tags_17[0]) - 1, /* 1 */
	asn_DEF_ext3_tags_17,	/* Same as above */
	sizeof(asn_DEF_ext3_tags_17)
		/sizeof(asn_DEF_ext3_tags_17[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext3_17,
	1,	/* Elements count */
	&asn_SPC_ext3_specs_17	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext4_19[] = {
	{ ATF_POINTER, 1, offsetof(struct AS_Config__ext4, as_ConfigNR_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AS_ConfigNR_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"as-ConfigNR-r15"
		},
};
static const int asn_MAP_ext4_oms_19[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext4_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext4_tag2el_19[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* as-ConfigNR-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext4_specs_19 = {
	sizeof(struct AS_Config__ext4),
	offsetof(struct AS_Config__ext4, _asn_ctx),
	asn_MAP_ext4_tag2el_19,
	1,	/* Count of tags in the map */
	asn_MAP_ext4_oms_19,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext4_19 = {
	"ext4",
	"ext4",
	&asn_OP_SEQUENCE,
	asn_DEF_ext4_tags_19,
	sizeof(asn_DEF_ext4_tags_19)
		/sizeof(asn_DEF_ext4_tags_19[0]) - 1, /* 1 */
	asn_DEF_ext4_tags_19,	/* Same as above */
	sizeof(asn_DEF_ext4_tags_19)
		/sizeof(asn_DEF_ext4_tags_19[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext4_19,
	1,	/* Elements count */
	&asn_SPC_ext4_specs_19	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext5_21[] = {
	{ ATF_POINTER, 1, offsetof(struct AS_Config__ext5, as_Config_v1550),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AS_Config_v1550,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"as-Config-v1550"
		},
};
static const int asn_MAP_ext5_oms_21[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext5_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext5_tag2el_21[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* as-Config-v1550 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext5_specs_21 = {
	sizeof(struct AS_Config__ext5),
	offsetof(struct AS_Config__ext5, _asn_ctx),
	asn_MAP_ext5_tag2el_21,
	1,	/* Count of tags in the map */
	asn_MAP_ext5_oms_21,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext5_21 = {
	"ext5",
	"ext5",
	&asn_OP_SEQUENCE,
	asn_DEF_ext5_tags_21,
	sizeof(asn_DEF_ext5_tags_21)
		/sizeof(asn_DEF_ext5_tags_21[0]) - 1, /* 1 */
	asn_DEF_ext5_tags_21,	/* Same as above */
	sizeof(asn_DEF_ext5_tags_21)
		/sizeof(asn_DEF_ext5_tags_21[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext5_21,
	1,	/* Elements count */
	&asn_SPC_ext5_specs_21	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_AS_Config_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config, sourceMeasConfig),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceMeasConfig"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config, sourceRadioResourceConfig),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioResourceConfigDedicated,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceRadioResourceConfig"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config, sourceSecurityAlgorithmConfig),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SecurityAlgorithmConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceSecurityAlgorithmConfig"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config, sourceUE_Identity),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_C_RNTI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceUE-Identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config, sourceMasterInformationBlock),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MasterInformationBlock,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceMasterInformationBlock"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config, sourceSystemInformationBlockType1),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType1,
		0,
		{ 0, &asn_PER_memb_sourceSystemInformationBlockType1_constr_7,  memb_sourceSystemInformationBlockType1_constraint_1 },
		0, 0, /* No default value */
		"sourceSystemInformationBlockType1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config, sourceSystemInformationBlockType2),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceSystemInformationBlockType2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config, antennaInfoCommon),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AntennaInfoCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"antennaInfoCommon"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config, sourceDl_CarrierFreq),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceDl-CarrierFreq"
		},
	{ ATF_POINTER, 5, offsetof(struct AS_Config, ext1),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		0,
		&asn_DEF_ext1_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
	{ ATF_POINTER, 4, offsetof(struct AS_Config, ext2),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		0,
		&asn_DEF_ext2_15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext2"
		},
	{ ATF_POINTER, 3, offsetof(struct AS_Config, ext3),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		0,
		&asn_DEF_ext3_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext3"
		},
	{ ATF_POINTER, 2, offsetof(struct AS_Config, ext4),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		0,
		&asn_DEF_ext4_19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext4"
		},
	{ ATF_POINTER, 1, offsetof(struct AS_Config, ext5),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		0,
		&asn_DEF_ext5_21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext5"
		},
};
static const int asn_MAP_AS_Config_oms_1[] = { 9, 10, 11, 12, 13 };
static const ber_tlv_tag_t asn_DEF_AS_Config_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AS_Config_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sourceMeasConfig */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sourceRadioResourceConfig */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sourceSecurityAlgorithmConfig */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sourceUE-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sourceMasterInformationBlock */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* sourceSystemInformationBlockType1 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* sourceSystemInformationBlockType2 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* antennaInfoCommon */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* sourceDl-CarrierFreq */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* ext2 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* ext3 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* ext4 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 } /* ext5 */
};
asn_SEQUENCE_specifics_t asn_SPC_AS_Config_specs_1 = {
	sizeof(struct AS_Config),
	offsetof(struct AS_Config, _asn_ctx),
	asn_MAP_AS_Config_tag2el_1,
	14,	/* Count of tags in the map */
	asn_MAP_AS_Config_oms_1,	/* Optional members */
	0, 5,	/* Root/Additions */
	9,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AS_Config = {
	"AS-Config",
	"AS-Config",
	&asn_OP_SEQUENCE,
	asn_DEF_AS_Config_tags_1,
	sizeof(asn_DEF_AS_Config_tags_1)
		/sizeof(asn_DEF_AS_Config_tags_1[0]), /* 1 */
	asn_DEF_AS_Config_tags_1,	/* Same as above */
	sizeof(asn_DEF_AS_Config_tags_1)
		/sizeof(asn_DEF_AS_Config_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_AS_Config_1,
	14,	/* Elements count */
	&asn_SPC_AS_Config_specs_1	/* Additional specs */
};

