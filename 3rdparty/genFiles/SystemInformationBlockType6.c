/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "SystemInformationBlockType6.h"

#include "CarrierFreqListUTRA-FDD.h"
#include "CarrierFreqListUTRA-TDD.h"
#include "SpeedStateScaleFactors.h"
#include "CarrierFreqListUTRA-FDD-Ext-r12.h"
#include "CarrierFreqListUTRA-TDD-Ext-r12.h"
#include "CarrierFreqInfoUTRA-v1250.h"
static int
memb_carrierFreqListUTRA_FDD_v1250_constraint_8(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 16)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_carrierFreqListUTRA_TDD_v1250_constraint_8(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 16)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_lateNonCriticalExtension_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_type_carrierFreqListUTRA_FDD_v1250_constr_9 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_carrierFreqListUTRA_TDD_v1250_constr_11 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_carrierFreqListUTRA_FDD_v1250_constr_9 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_carrierFreqListUTRA_TDD_v1250_constr_11 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_lateNonCriticalExtension_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_carrierFreqListUTRA_FDD_v1250_9[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_CarrierFreqInfoUTRA_v1250,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_carrierFreqListUTRA_FDD_v1250_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_carrierFreqListUTRA_FDD_v1250_specs_9 = {
	sizeof(struct SystemInformationBlockType6__ext1__carrierFreqListUTRA_FDD_v1250),
	offsetof(struct SystemInformationBlockType6__ext1__carrierFreqListUTRA_FDD_v1250, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_carrierFreqListUTRA_FDD_v1250_9 = {
	"carrierFreqListUTRA-FDD-v1250",
	"carrierFreqListUTRA-FDD-v1250",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_carrierFreqListUTRA_FDD_v1250_tags_9,
	sizeof(asn_DEF_carrierFreqListUTRA_FDD_v1250_tags_9)
		/sizeof(asn_DEF_carrierFreqListUTRA_FDD_v1250_tags_9[0]) - 1, /* 1 */
	asn_DEF_carrierFreqListUTRA_FDD_v1250_tags_9,	/* Same as above */
	sizeof(asn_DEF_carrierFreqListUTRA_FDD_v1250_tags_9)
		/sizeof(asn_DEF_carrierFreqListUTRA_FDD_v1250_tags_9[0]), /* 2 */
	{ 0, &asn_PER_type_carrierFreqListUTRA_FDD_v1250_constr_9, SEQUENCE_OF_constraint },
	asn_MBR_carrierFreqListUTRA_FDD_v1250_9,
	1,	/* Single element */
	&asn_SPC_carrierFreqListUTRA_FDD_v1250_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_carrierFreqListUTRA_TDD_v1250_11[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_CarrierFreqInfoUTRA_v1250,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_carrierFreqListUTRA_TDD_v1250_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_carrierFreqListUTRA_TDD_v1250_specs_11 = {
	sizeof(struct SystemInformationBlockType6__ext1__carrierFreqListUTRA_TDD_v1250),
	offsetof(struct SystemInformationBlockType6__ext1__carrierFreqListUTRA_TDD_v1250, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_carrierFreqListUTRA_TDD_v1250_11 = {
	"carrierFreqListUTRA-TDD-v1250",
	"carrierFreqListUTRA-TDD-v1250",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_carrierFreqListUTRA_TDD_v1250_tags_11,
	sizeof(asn_DEF_carrierFreqListUTRA_TDD_v1250_tags_11)
		/sizeof(asn_DEF_carrierFreqListUTRA_TDD_v1250_tags_11[0]) - 1, /* 1 */
	asn_DEF_carrierFreqListUTRA_TDD_v1250_tags_11,	/* Same as above */
	sizeof(asn_DEF_carrierFreqListUTRA_TDD_v1250_tags_11)
		/sizeof(asn_DEF_carrierFreqListUTRA_TDD_v1250_tags_11[0]), /* 2 */
	{ 0, &asn_PER_type_carrierFreqListUTRA_TDD_v1250_constr_11, SEQUENCE_OF_constraint },
	asn_MBR_carrierFreqListUTRA_TDD_v1250_11,
	1,	/* Single element */
	&asn_SPC_carrierFreqListUTRA_TDD_v1250_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_8[] = {
	{ ATF_POINTER, 4, offsetof(struct SystemInformationBlockType6__ext1, carrierFreqListUTRA_FDD_v1250),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_carrierFreqListUTRA_FDD_v1250_9,
		0,
		{ 0, &asn_PER_memb_carrierFreqListUTRA_FDD_v1250_constr_9,  memb_carrierFreqListUTRA_FDD_v1250_constraint_8 },
		0, 0, /* No default value */
		"carrierFreqListUTRA-FDD-v1250"
		},
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType6__ext1, carrierFreqListUTRA_TDD_v1250),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_carrierFreqListUTRA_TDD_v1250_11,
		0,
		{ 0, &asn_PER_memb_carrierFreqListUTRA_TDD_v1250_constr_11,  memb_carrierFreqListUTRA_TDD_v1250_constraint_8 },
		0, 0, /* No default value */
		"carrierFreqListUTRA-TDD-v1250"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType6__ext1, carrierFreqListUTRA_FDD_Ext_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreqListUTRA_FDD_Ext_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreqListUTRA-FDD-Ext-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType6__ext1, carrierFreqListUTRA_TDD_Ext_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreqListUTRA_TDD_Ext_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreqListUTRA-TDD-Ext-r12"
		},
};
static const int asn_MAP_ext1_oms_8[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreqListUTRA-FDD-v1250 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* carrierFreqListUTRA-TDD-v1250 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* carrierFreqListUTRA-FDD-Ext-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* carrierFreqListUTRA-TDD-Ext-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_8 = {
	sizeof(struct SystemInformationBlockType6__ext1),
	offsetof(struct SystemInformationBlockType6__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_8,
	4,	/* Count of tags in the map */
	asn_MAP_ext1_oms_8,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_8 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_8,
	sizeof(asn_DEF_ext1_tags_8)
		/sizeof(asn_DEF_ext1_tags_8[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_8,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_8)
		/sizeof(asn_DEF_ext1_tags_8[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_8,
	4,	/* Elements count */
	&asn_SPC_ext1_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SystemInformationBlockType6_1[] = {
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType6, carrierFreqListUTRA_FDD),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreqListUTRA_FDD,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreqListUTRA-FDD"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType6, carrierFreqListUTRA_TDD),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreqListUTRA_TDD,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreqListUTRA-TDD"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType6, t_ReselectionUTRA),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_T_Reselection,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t-ReselectionUTRA"
		},
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType6, t_ReselectionUTRA_SF),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SpeedStateScaleFactors,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t-ReselectionUTRA-SF"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType6, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_lateNonCriticalExtension_constr_7,  memb_lateNonCriticalExtension_constraint_1 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType6, ext1),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_ext1_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_SystemInformationBlockType6_oms_1[] = { 0, 1, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_SystemInformationBlockType6_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType6_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreqListUTRA-FDD */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* carrierFreqListUTRA-TDD */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* t-ReselectionUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* t-ReselectionUTRA-SF */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType6_specs_1 = {
	sizeof(struct SystemInformationBlockType6),
	offsetof(struct SystemInformationBlockType6, _asn_ctx),
	asn_MAP_SystemInformationBlockType6_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType6_oms_1,	/* Optional members */
	3, 2,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType6 = {
	"SystemInformationBlockType6",
	"SystemInformationBlockType6",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemInformationBlockType6_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType6_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType6_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType6_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType6_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType6_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SystemInformationBlockType6_1,
	6,	/* Elements count */
	&asn_SPC_SystemInformationBlockType6_specs_1	/* Additional specs */
};

