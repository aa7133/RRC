/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "SPUCCH-Config-v1550.h"

static int
memb_NativeInteger_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 549)) {
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
memb_n3SPUCCH_AN_List_v1550_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 4)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_Member_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  549 }	/* (0..549) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_n3SPUCCH_AN_List_v1550_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_n3SPUCCH_AN_List_v1550_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_SPUCCH_Config_v1550_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_n3SPUCCH_AN_List_v1550_5[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_Member_constr_6,  memb_NativeInteger_constraint_5 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_n3SPUCCH_AN_List_v1550_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_n3SPUCCH_AN_List_v1550_specs_5 = {
	sizeof(struct SPUCCH_Config_v1550__setup__twoAntennaPortActivatedSPUCCH_Format3_v1550__n3SPUCCH_AN_List_v1550),
	offsetof(struct SPUCCH_Config_v1550__setup__twoAntennaPortActivatedSPUCCH_Format3_v1550__n3SPUCCH_AN_List_v1550, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_n3SPUCCH_AN_List_v1550_5 = {
	"n3SPUCCH-AN-List-v1550",
	"n3SPUCCH-AN-List-v1550",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_n3SPUCCH_AN_List_v1550_tags_5,
	sizeof(asn_DEF_n3SPUCCH_AN_List_v1550_tags_5)
		/sizeof(asn_DEF_n3SPUCCH_AN_List_v1550_tags_5[0]) - 1, /* 1 */
	asn_DEF_n3SPUCCH_AN_List_v1550_tags_5,	/* Same as above */
	sizeof(asn_DEF_n3SPUCCH_AN_List_v1550_tags_5)
		/sizeof(asn_DEF_n3SPUCCH_AN_List_v1550_tags_5[0]), /* 2 */
	{ 0, &asn_PER_type_n3SPUCCH_AN_List_v1550_constr_5, SEQUENCE_OF_constraint },
	asn_MBR_n3SPUCCH_AN_List_v1550_5,
	1,	/* Single element */
	&asn_SPC_n3SPUCCH_AN_List_v1550_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_twoAntennaPortActivatedSPUCCH_Format3_v1550_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SPUCCH_Config_v1550__setup__twoAntennaPortActivatedSPUCCH_Format3_v1550, n3SPUCCH_AN_List_v1550),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_n3SPUCCH_AN_List_v1550_5,
		0,
		{ 0, &asn_PER_memb_n3SPUCCH_AN_List_v1550_constr_5,  memb_n3SPUCCH_AN_List_v1550_constraint_4 },
		0, 0, /* No default value */
		"n3SPUCCH-AN-List-v1550"
		},
};
static const ber_tlv_tag_t asn_DEF_twoAntennaPortActivatedSPUCCH_Format3_v1550_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_twoAntennaPortActivatedSPUCCH_Format3_v1550_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* n3SPUCCH-AN-List-v1550 */
};
static asn_SEQUENCE_specifics_t asn_SPC_twoAntennaPortActivatedSPUCCH_Format3_v1550_specs_4 = {
	sizeof(struct SPUCCH_Config_v1550__setup__twoAntennaPortActivatedSPUCCH_Format3_v1550),
	offsetof(struct SPUCCH_Config_v1550__setup__twoAntennaPortActivatedSPUCCH_Format3_v1550, _asn_ctx),
	asn_MAP_twoAntennaPortActivatedSPUCCH_Format3_v1550_tag2el_4,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_twoAntennaPortActivatedSPUCCH_Format3_v1550_4 = {
	"twoAntennaPortActivatedSPUCCH-Format3-v1550",
	"twoAntennaPortActivatedSPUCCH-Format3-v1550",
	&asn_OP_SEQUENCE,
	asn_DEF_twoAntennaPortActivatedSPUCCH_Format3_v1550_tags_4,
	sizeof(asn_DEF_twoAntennaPortActivatedSPUCCH_Format3_v1550_tags_4)
		/sizeof(asn_DEF_twoAntennaPortActivatedSPUCCH_Format3_v1550_tags_4[0]) - 1, /* 1 */
	asn_DEF_twoAntennaPortActivatedSPUCCH_Format3_v1550_tags_4,	/* Same as above */
	sizeof(asn_DEF_twoAntennaPortActivatedSPUCCH_Format3_v1550_tags_4)
		/sizeof(asn_DEF_twoAntennaPortActivatedSPUCCH_Format3_v1550_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_twoAntennaPortActivatedSPUCCH_Format3_v1550_4,
	1,	/* Elements count */
	&asn_SPC_twoAntennaPortActivatedSPUCCH_Format3_v1550_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SPUCCH_Config_v1550__setup, twoAntennaPortActivatedSPUCCH_Format3_v1550),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_twoAntennaPortActivatedSPUCCH_Format3_v1550_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"twoAntennaPortActivatedSPUCCH-Format3-v1550"
		},
};
static const ber_tlv_tag_t asn_DEF_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* twoAntennaPortActivatedSPUCCH-Format3-v1550 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct SPUCCH_Config_v1550__setup),
	offsetof(struct SPUCCH_Config_v1550__setup, _asn_ctx),
	asn_MAP_setup_tag2el_3,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
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
	1,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SPUCCH_Config_v1550_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SPUCCH_Config_v1550, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_POINTER, 0, offsetof(struct SPUCCH_Config_v1550, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_SPUCCH_Config_v1550_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_SPUCCH_Config_v1550_specs_1 = {
	sizeof(struct SPUCCH_Config_v1550),
	offsetof(struct SPUCCH_Config_v1550, _asn_ctx),
	offsetof(struct SPUCCH_Config_v1550, present),
	sizeof(((struct SPUCCH_Config_v1550 *)0)->present),
	asn_MAP_SPUCCH_Config_v1550_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_SPUCCH_Config_v1550 = {
	"SPUCCH-Config-v1550",
	"SPUCCH-Config-v1550",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_SPUCCH_Config_v1550_constr_1, CHOICE_constraint },
	asn_MBR_SPUCCH_Config_v1550_1,
	2,	/* Elements count */
	&asn_SPC_SPUCCH_Config_v1550_specs_1	/* Additional specs */
};

