/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#include "PUSCH-ConfigDedicated-v1430.h"

#include "TDD-PUSCH-UpPTS-r14.h"
#include "Enable256QAM-r14.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_ce_PUSCH_NB_MaxTBS_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ce_PUSCH_MaxBandwidth_r14_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ce_PUSCH_NB_MaxTBS_r14_value2enum_2[] = {
	{ 0,	2,	"on" }
};
static const unsigned int asn_MAP_ce_PUSCH_NB_MaxTBS_r14_enum2value_2[] = {
	0	/* on(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ce_PUSCH_NB_MaxTBS_r14_specs_2 = {
	asn_MAP_ce_PUSCH_NB_MaxTBS_r14_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_ce_PUSCH_NB_MaxTBS_r14_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ce_PUSCH_NB_MaxTBS_r14_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ce_PUSCH_NB_MaxTBS_r14_2 = {
	"ce-PUSCH-NB-MaxTBS-r14",
	"ce-PUSCH-NB-MaxTBS-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_ce_PUSCH_NB_MaxTBS_r14_tags_2,
	sizeof(asn_DEF_ce_PUSCH_NB_MaxTBS_r14_tags_2)
		/sizeof(asn_DEF_ce_PUSCH_NB_MaxTBS_r14_tags_2[0]) - 1, /* 1 */
	asn_DEF_ce_PUSCH_NB_MaxTBS_r14_tags_2,	/* Same as above */
	sizeof(asn_DEF_ce_PUSCH_NB_MaxTBS_r14_tags_2)
		/sizeof(asn_DEF_ce_PUSCH_NB_MaxTBS_r14_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_ce_PUSCH_NB_MaxTBS_r14_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ce_PUSCH_NB_MaxTBS_r14_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ce_PUSCH_MaxBandwidth_r14_value2enum_4[] = {
	{ 0,	3,	"bw5" }
};
static const unsigned int asn_MAP_ce_PUSCH_MaxBandwidth_r14_enum2value_4[] = {
	0	/* bw5(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ce_PUSCH_MaxBandwidth_r14_specs_4 = {
	asn_MAP_ce_PUSCH_MaxBandwidth_r14_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_ce_PUSCH_MaxBandwidth_r14_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ce_PUSCH_MaxBandwidth_r14_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ce_PUSCH_MaxBandwidth_r14_4 = {
	"ce-PUSCH-MaxBandwidth-r14",
	"ce-PUSCH-MaxBandwidth-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_ce_PUSCH_MaxBandwidth_r14_tags_4,
	sizeof(asn_DEF_ce_PUSCH_MaxBandwidth_r14_tags_4)
		/sizeof(asn_DEF_ce_PUSCH_MaxBandwidth_r14_tags_4[0]) - 1, /* 1 */
	asn_DEF_ce_PUSCH_MaxBandwidth_r14_tags_4,	/* Same as above */
	sizeof(asn_DEF_ce_PUSCH_MaxBandwidth_r14_tags_4)
		/sizeof(asn_DEF_ce_PUSCH_MaxBandwidth_r14_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_ce_PUSCH_MaxBandwidth_r14_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ce_PUSCH_MaxBandwidth_r14_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PUSCH_ConfigDedicated_v1430_1[] = {
	{ ATF_POINTER, 3, offsetof(struct PUSCH_ConfigDedicated_v1430, ce_PUSCH_NB_MaxTBS_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ce_PUSCH_NB_MaxTBS_r14_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ce-PUSCH-NB-MaxTBS-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct PUSCH_ConfigDedicated_v1430, ce_PUSCH_MaxBandwidth_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ce_PUSCH_MaxBandwidth_r14_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ce-PUSCH-MaxBandwidth-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct PUSCH_ConfigDedicated_v1430, tdd_PUSCH_UpPTS_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_TDD_PUSCH_UpPTS_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd-PUSCH-UpPTS-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUSCH_ConfigDedicated_v1430, ul_DMRS_IFDMA_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-DMRS-IFDMA-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct PUSCH_ConfigDedicated_v1430, enable256QAM_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Enable256QAM_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"enable256QAM-r14"
		},
};
static const int asn_MAP_PUSCH_ConfigDedicated_v1430_oms_1[] = { 0, 1, 2, 4 };
static const ber_tlv_tag_t asn_DEF_PUSCH_ConfigDedicated_v1430_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PUSCH_ConfigDedicated_v1430_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ce-PUSCH-NB-MaxTBS-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ce-PUSCH-MaxBandwidth-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* tdd-PUSCH-UpPTS-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ul-DMRS-IFDMA-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* enable256QAM-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_PUSCH_ConfigDedicated_v1430_specs_1 = {
	sizeof(struct PUSCH_ConfigDedicated_v1430),
	offsetof(struct PUSCH_ConfigDedicated_v1430, _asn_ctx),
	asn_MAP_PUSCH_ConfigDedicated_v1430_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_PUSCH_ConfigDedicated_v1430_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PUSCH_ConfigDedicated_v1430 = {
	"PUSCH-ConfigDedicated-v1430",
	"PUSCH-ConfigDedicated-v1430",
	&asn_OP_SEQUENCE,
	asn_DEF_PUSCH_ConfigDedicated_v1430_tags_1,
	sizeof(asn_DEF_PUSCH_ConfigDedicated_v1430_tags_1)
		/sizeof(asn_DEF_PUSCH_ConfigDedicated_v1430_tags_1[0]), /* 1 */
	asn_DEF_PUSCH_ConfigDedicated_v1430_tags_1,	/* Same as above */
	sizeof(asn_DEF_PUSCH_ConfigDedicated_v1430_tags_1)
		/sizeof(asn_DEF_PUSCH_ConfigDedicated_v1430_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PUSCH_ConfigDedicated_v1430_1,
	5,	/* Elements count */
	&asn_SPC_PUSCH_ConfigDedicated_v1430_specs_1	/* Additional specs */
};

