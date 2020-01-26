/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#include "CFI-Config-r15.h"

static int
memb_cfi_SubframeNonMBSFN_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_cfi_SlotSubslotNonMBSFN_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 3)) {
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
memb_cfi_SubframeMBSFN_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static int
memb_cfi_SlotSubslotMBSFN_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_memb_cfi_SubframeNonMBSFN_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (1..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_cfi_SlotSubslotNonMBSFN_r15_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  1,  3 }	/* (1..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_cfi_SubframeMBSFN_r15_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (1..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_cfi_SlotSubslotMBSFN_r15_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (1..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_CFI_Config_r15_1[] = {
	{ ATF_POINTER, 4, offsetof(struct CFI_Config_r15, cfi_SubframeNonMBSFN_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_cfi_SubframeNonMBSFN_r15_constr_2,  memb_cfi_SubframeNonMBSFN_r15_constraint_1 },
		0, 0, /* No default value */
		"cfi-SubframeNonMBSFN-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct CFI_Config_r15, cfi_SlotSubslotNonMBSFN_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_cfi_SlotSubslotNonMBSFN_r15_constr_3,  memb_cfi_SlotSubslotNonMBSFN_r15_constraint_1 },
		0, 0, /* No default value */
		"cfi-SlotSubslotNonMBSFN-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct CFI_Config_r15, cfi_SubframeMBSFN_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_cfi_SubframeMBSFN_r15_constr_4,  memb_cfi_SubframeMBSFN_r15_constraint_1 },
		0, 0, /* No default value */
		"cfi-SubframeMBSFN-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct CFI_Config_r15, cfi_SlotSubslotMBSFN_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_cfi_SlotSubslotMBSFN_r15_constr_5,  memb_cfi_SlotSubslotMBSFN_r15_constraint_1 },
		0, 0, /* No default value */
		"cfi-SlotSubslotMBSFN-r15"
		},
};
static const int asn_MAP_CFI_Config_r15_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_CFI_Config_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CFI_Config_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cfi-SubframeNonMBSFN-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cfi-SlotSubslotNonMBSFN-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cfi-SubframeMBSFN-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* cfi-SlotSubslotMBSFN-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_CFI_Config_r15_specs_1 = {
	sizeof(struct CFI_Config_r15),
	offsetof(struct CFI_Config_r15, _asn_ctx),
	asn_MAP_CFI_Config_r15_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_CFI_Config_r15_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CFI_Config_r15 = {
	"CFI-Config-r15",
	"CFI-Config-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_CFI_Config_r15_tags_1,
	sizeof(asn_DEF_CFI_Config_r15_tags_1)
		/sizeof(asn_DEF_CFI_Config_r15_tags_1[0]), /* 1 */
	asn_DEF_CFI_Config_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_CFI_Config_r15_tags_1)
		/sizeof(asn_DEF_CFI_Config_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CFI_Config_r15_1,
	4,	/* Elements count */
	&asn_SPC_CFI_Config_r15_specs_1	/* Additional specs */
};

