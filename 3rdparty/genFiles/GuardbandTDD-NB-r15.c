/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#include "GuardbandTDD-NB-r15.h"

#include "SIB-GuardbandAnchorTDD-NB-r15.h"
#include "SIB-GuardbandGuardbandTDD-NB-r15.h"
#include "SIB-GuardbandInbandSamePCI-TDD-NB-r15.h"
#include "SIB-GuardbandInbandDiffPCI-TDD-NB-r15.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_sib_GuardbandInfo_r15_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_eutra_Bandwitdh_r15_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_sib_GuardbandInfo_r15_3[] = {
	{ ATF_POINTER, 0, offsetof(struct GuardbandTDD_NB_r15__sib_GuardbandInfo_r15, choice.sib_GuardbandAnchor_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SIB_GuardbandAnchorTDD_NB_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib-GuardbandAnchor-r15"
		},
	{ ATF_POINTER, 0, offsetof(struct GuardbandTDD_NB_r15__sib_GuardbandInfo_r15, choice.sib_GuardbandGuardband_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SIB_GuardbandGuardbandTDD_NB_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib-GuardbandGuardband-r15"
		},
	{ ATF_POINTER, 0, offsetof(struct GuardbandTDD_NB_r15__sib_GuardbandInfo_r15, choice.sib_GuardbandInbandSamePCI_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SIB_GuardbandInbandSamePCI_TDD_NB_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib-GuardbandInbandSamePCI-r15"
		},
	{ ATF_POINTER, 0, offsetof(struct GuardbandTDD_NB_r15__sib_GuardbandInfo_r15, choice.sib_GuardbandinbandDiffPCI_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SIB_GuardbandInbandDiffPCI_TDD_NB_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib-GuardbandinbandDiffPCI-r15"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_sib_GuardbandInfo_r15_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sib-GuardbandAnchor-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sib-GuardbandGuardband-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sib-GuardbandInbandSamePCI-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* sib-GuardbandinbandDiffPCI-r15 */
};
static asn_CHOICE_specifics_t asn_SPC_sib_GuardbandInfo_r15_specs_3 = {
	sizeof(struct GuardbandTDD_NB_r15__sib_GuardbandInfo_r15),
	offsetof(struct GuardbandTDD_NB_r15__sib_GuardbandInfo_r15, _asn_ctx),
	offsetof(struct GuardbandTDD_NB_r15__sib_GuardbandInfo_r15, present),
	sizeof(((struct GuardbandTDD_NB_r15__sib_GuardbandInfo_r15 *)0)->present),
	asn_MAP_sib_GuardbandInfo_r15_tag2el_3,
	4,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sib_GuardbandInfo_r15_3 = {
	"sib-GuardbandInfo-r15",
	"sib-GuardbandInfo-r15",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_sib_GuardbandInfo_r15_constr_3, CHOICE_constraint },
	asn_MBR_sib_GuardbandInfo_r15_3,
	4,	/* Elements count */
	&asn_SPC_sib_GuardbandInfo_r15_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_eutra_Bandwitdh_r15_value2enum_8[] = {
	{ 0,	7,	"bw5or10" },
	{ 1,	8,	"bw15or20" }
};
static const unsigned int asn_MAP_eutra_Bandwitdh_r15_enum2value_8[] = {
	1,	/* bw15or20(1) */
	0	/* bw5or10(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_eutra_Bandwitdh_r15_specs_8 = {
	asn_MAP_eutra_Bandwitdh_r15_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_eutra_Bandwitdh_r15_enum2value_8,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_eutra_Bandwitdh_r15_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eutra_Bandwitdh_r15_8 = {
	"eutra-Bandwitdh-r15",
	"eutra-Bandwitdh-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_eutra_Bandwitdh_r15_tags_8,
	sizeof(asn_DEF_eutra_Bandwitdh_r15_tags_8)
		/sizeof(asn_DEF_eutra_Bandwitdh_r15_tags_8[0]) - 1, /* 1 */
	asn_DEF_eutra_Bandwitdh_r15_tags_8,	/* Same as above */
	sizeof(asn_DEF_eutra_Bandwitdh_r15_tags_8)
		/sizeof(asn_DEF_eutra_Bandwitdh_r15_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_eutra_Bandwitdh_r15_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_eutra_Bandwitdh_r15_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_GuardbandTDD_NB_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GuardbandTDD_NB_r15, rasterOffset_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ChannelRasterOffset_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rasterOffset-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GuardbandTDD_NB_r15, sib_GuardbandInfo_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_sib_GuardbandInfo_r15_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sib-GuardbandInfo-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GuardbandTDD_NB_r15, eutra_Bandwitdh_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_eutra_Bandwitdh_r15_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eutra-Bandwitdh-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_GuardbandTDD_NB_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GuardbandTDD_NB_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rasterOffset-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sib-GuardbandInfo-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* eutra-Bandwitdh-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_GuardbandTDD_NB_r15_specs_1 = {
	sizeof(struct GuardbandTDD_NB_r15),
	offsetof(struct GuardbandTDD_NB_r15, _asn_ctx),
	asn_MAP_GuardbandTDD_NB_r15_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GuardbandTDD_NB_r15 = {
	"GuardbandTDD-NB-r15",
	"GuardbandTDD-NB-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_GuardbandTDD_NB_r15_tags_1,
	sizeof(asn_DEF_GuardbandTDD_NB_r15_tags_1)
		/sizeof(asn_DEF_GuardbandTDD_NB_r15_tags_1[0]), /* 1 */
	asn_DEF_GuardbandTDD_NB_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_GuardbandTDD_NB_r15_tags_1)
		/sizeof(asn_DEF_GuardbandTDD_NB_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_GuardbandTDD_NB_r15_1,
	3,	/* Elements count */
	&asn_SPC_GuardbandTDD_NB_r15_specs_1	/* Additional specs */
};

