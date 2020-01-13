/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "AS-Context-v1130.h"

static int
memb_sidelinkUEInformation_r12_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_idc_Indication_r11_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_mbmsInterestIndication_r11_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_powerPrefIndication_r11_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_memb_sidelinkUEInformation_r12_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_idc_Indication_r11_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_mbmsInterestIndication_r11_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_powerPrefIndication_r11_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ext1_6[] = {
	{ ATF_POINTER, 1, offsetof(struct AS_Context_v1130__ext1, sidelinkUEInformation_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_sidelinkUEInformation_r12_constr_7,  memb_sidelinkUEInformation_r12_constraint_6 },
		0, 0, /* No default value */
		"sidelinkUEInformation-r12"
		},
};
static const int asn_MAP_ext1_oms_6[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* sidelinkUEInformation-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_6 = {
	sizeof(struct AS_Context_v1130__ext1),
	offsetof(struct AS_Context_v1130__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_6,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_6,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_6 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_6,
	sizeof(asn_DEF_ext1_tags_6)
		/sizeof(asn_DEF_ext1_tags_6[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_6,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_6)
		/sizeof(asn_DEF_ext1_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_6,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_8[] = {
	{ ATF_POINTER, 1, offsetof(struct AS_Context_v1130__ext2, sourceContextEN_DC_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceContextEN-DC-r15"
		},
};
static const int asn_MAP_ext2_oms_8[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext2_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* sourceContextEN-DC-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_8 = {
	sizeof(struct AS_Context_v1130__ext2),
	offsetof(struct AS_Context_v1130__ext2, _asn_ctx),
	asn_MAP_ext2_tag2el_8,
	1,	/* Count of tags in the map */
	asn_MAP_ext2_oms_8,	/* Optional members */
	1, 0,	/* Root/Additions */
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
	1,	/* Elements count */
	&asn_SPC_ext2_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext3_10[] = {
	{ ATF_POINTER, 1, offsetof(struct AS_Context_v1130__ext3, selectedbandCombinationInfoEN_DC_v1540),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"selectedbandCombinationInfoEN-DC-v1540"
		},
};
static const int asn_MAP_ext3_oms_10[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext3_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext3_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* selectedbandCombinationInfoEN-DC-v1540 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext3_specs_10 = {
	sizeof(struct AS_Context_v1130__ext3),
	offsetof(struct AS_Context_v1130__ext3, _asn_ctx),
	asn_MAP_ext3_tag2el_10,
	1,	/* Count of tags in the map */
	asn_MAP_ext3_oms_10,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext3_10 = {
	"ext3",
	"ext3",
	&asn_OP_SEQUENCE,
	asn_DEF_ext3_tags_10,
	sizeof(asn_DEF_ext3_tags_10)
		/sizeof(asn_DEF_ext3_tags_10[0]) - 1, /* 1 */
	asn_DEF_ext3_tags_10,	/* Same as above */
	sizeof(asn_DEF_ext3_tags_10)
		/sizeof(asn_DEF_ext3_tags_10[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext3_10,
	1,	/* Elements count */
	&asn_SPC_ext3_specs_10	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_AS_Context_v1130_1[] = {
	{ ATF_POINTER, 6, offsetof(struct AS_Context_v1130, idc_Indication_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_idc_Indication_r11_constr_2,  memb_idc_Indication_r11_constraint_1 },
		0, 0, /* No default value */
		"idc-Indication-r11"
		},
	{ ATF_POINTER, 5, offsetof(struct AS_Context_v1130, mbmsInterestIndication_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_mbmsInterestIndication_r11_constr_3,  memb_mbmsInterestIndication_r11_constraint_1 },
		0, 0, /* No default value */
		"mbmsInterestIndication-r11"
		},
	{ ATF_POINTER, 4, offsetof(struct AS_Context_v1130, powerPrefIndication_r11),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_powerPrefIndication_r11_constr_4,  memb_powerPrefIndication_r11_constraint_1 },
		0, 0, /* No default value */
		"powerPrefIndication-r11"
		},
	{ ATF_POINTER, 3, offsetof(struct AS_Context_v1130, ext1),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_ext1_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
	{ ATF_POINTER, 2, offsetof(struct AS_Context_v1130, ext2),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_ext2_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext2"
		},
	{ ATF_POINTER, 1, offsetof(struct AS_Context_v1130, ext3),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_ext3_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext3"
		},
};
static const int asn_MAP_AS_Context_v1130_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_AS_Context_v1130_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AS_Context_v1130_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* idc-Indication-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mbmsInterestIndication-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* powerPrefIndication-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ext2 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* ext3 */
};
asn_SEQUENCE_specifics_t asn_SPC_AS_Context_v1130_specs_1 = {
	sizeof(struct AS_Context_v1130),
	offsetof(struct AS_Context_v1130, _asn_ctx),
	asn_MAP_AS_Context_v1130_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_AS_Context_v1130_oms_1,	/* Optional members */
	3, 3,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AS_Context_v1130 = {
	"AS-Context-v1130",
	"AS-Context-v1130",
	&asn_OP_SEQUENCE,
	asn_DEF_AS_Context_v1130_tags_1,
	sizeof(asn_DEF_AS_Context_v1130_tags_1)
		/sizeof(asn_DEF_AS_Context_v1130_tags_1[0]), /* 1 */
	asn_DEF_AS_Context_v1130_tags_1,	/* Same as above */
	sizeof(asn_DEF_AS_Context_v1130_tags_1)
		/sizeof(asn_DEF_AS_Context_v1130_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_AS_Context_v1130_1,
	6,	/* Elements count */
	&asn_SPC_AS_Context_v1130_specs_1	/* Additional specs */
};

