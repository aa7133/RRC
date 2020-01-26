/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#include "SL-DiscTxInfoInterFreqListAdd-r13.h"

#include "SL-DiscTxResourceInfoPerFreq-r13.h"
static int
memb_discTxFreqToAddModList_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 8)) {
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
memb_discTxFreqToReleaseList_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 8)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_discTxFreqToAddModList_r13_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_discTxFreqToReleaseList_r13_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_discTxFreqToAddModList_r13_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_discTxFreqToReleaseList_r13_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_discTxFreqToAddModList_r13_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SL_DiscTxResourceInfoPerFreq_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_discTxFreqToAddModList_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_discTxFreqToAddModList_r13_specs_2 = {
	sizeof(struct SL_DiscTxInfoInterFreqListAdd_r13__discTxFreqToAddModList_r13),
	offsetof(struct SL_DiscTxInfoInterFreqListAdd_r13__discTxFreqToAddModList_r13, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_discTxFreqToAddModList_r13_2 = {
	"discTxFreqToAddModList-r13",
	"discTxFreqToAddModList-r13",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_discTxFreqToAddModList_r13_tags_2,
	sizeof(asn_DEF_discTxFreqToAddModList_r13_tags_2)
		/sizeof(asn_DEF_discTxFreqToAddModList_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_discTxFreqToAddModList_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_discTxFreqToAddModList_r13_tags_2)
		/sizeof(asn_DEF_discTxFreqToAddModList_r13_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_discTxFreqToAddModList_r13_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_discTxFreqToAddModList_r13_2,
	1,	/* Single element */
	&asn_SPC_discTxFreqToAddModList_r13_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_discTxFreqToReleaseList_r13_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_ARFCN_ValueEUTRA_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_discTxFreqToReleaseList_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_discTxFreqToReleaseList_r13_specs_4 = {
	sizeof(struct SL_DiscTxInfoInterFreqListAdd_r13__discTxFreqToReleaseList_r13),
	offsetof(struct SL_DiscTxInfoInterFreqListAdd_r13__discTxFreqToReleaseList_r13, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_discTxFreqToReleaseList_r13_4 = {
	"discTxFreqToReleaseList-r13",
	"discTxFreqToReleaseList-r13",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_discTxFreqToReleaseList_r13_tags_4,
	sizeof(asn_DEF_discTxFreqToReleaseList_r13_tags_4)
		/sizeof(asn_DEF_discTxFreqToReleaseList_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_discTxFreqToReleaseList_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_discTxFreqToReleaseList_r13_tags_4)
		/sizeof(asn_DEF_discTxFreqToReleaseList_r13_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_discTxFreqToReleaseList_r13_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_discTxFreqToReleaseList_r13_4,
	1,	/* Single element */
	&asn_SPC_discTxFreqToReleaseList_r13_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SL_DiscTxInfoInterFreqListAdd_r13_1[] = {
	{ ATF_POINTER, 2, offsetof(struct SL_DiscTxInfoInterFreqListAdd_r13, discTxFreqToAddModList_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_discTxFreqToAddModList_r13_2,
		0,
		{ 0, &asn_PER_memb_discTxFreqToAddModList_r13_constr_2,  memb_discTxFreqToAddModList_r13_constraint_1 },
		0, 0, /* No default value */
		"discTxFreqToAddModList-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_DiscTxInfoInterFreqListAdd_r13, discTxFreqToReleaseList_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_discTxFreqToReleaseList_r13_4,
		0,
		{ 0, &asn_PER_memb_discTxFreqToReleaseList_r13_constr_4,  memb_discTxFreqToReleaseList_r13_constraint_1 },
		0, 0, /* No default value */
		"discTxFreqToReleaseList-r13"
		},
};
static const int asn_MAP_SL_DiscTxInfoInterFreqListAdd_r13_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_SL_DiscTxInfoInterFreqListAdd_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_DiscTxInfoInterFreqListAdd_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* discTxFreqToAddModList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* discTxFreqToReleaseList-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_DiscTxInfoInterFreqListAdd_r13_specs_1 = {
	sizeof(struct SL_DiscTxInfoInterFreqListAdd_r13),
	offsetof(struct SL_DiscTxInfoInterFreqListAdd_r13, _asn_ctx),
	asn_MAP_SL_DiscTxInfoInterFreqListAdd_r13_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SL_DiscTxInfoInterFreqListAdd_r13_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_DiscTxInfoInterFreqListAdd_r13 = {
	"SL-DiscTxInfoInterFreqListAdd-r13",
	"SL-DiscTxInfoInterFreqListAdd-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_DiscTxInfoInterFreqListAdd_r13_tags_1,
	sizeof(asn_DEF_SL_DiscTxInfoInterFreqListAdd_r13_tags_1)
		/sizeof(asn_DEF_SL_DiscTxInfoInterFreqListAdd_r13_tags_1[0]), /* 1 */
	asn_DEF_SL_DiscTxInfoInterFreqListAdd_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_DiscTxInfoInterFreqListAdd_r13_tags_1)
		/sizeof(asn_DEF_SL_DiscTxInfoInterFreqListAdd_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_DiscTxInfoInterFreqListAdd_r13_1,
	2,	/* Elements count */
	&asn_SPC_SL_DiscTxInfoInterFreqListAdd_r13_specs_1	/* Additional specs */
};

