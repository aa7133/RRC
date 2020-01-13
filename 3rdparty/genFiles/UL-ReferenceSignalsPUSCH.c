/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "UL-ReferenceSignalsPUSCH.h"

static int
memb_groupAssignmentPUSCH_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 29)) {
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
memb_cyclicShift_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 7)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_groupAssignmentPUSCH_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  29 }	/* (0..29) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_cyclicShift_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_UL_ReferenceSignalsPUSCH_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_ReferenceSignalsPUSCH, groupHoppingEnabled),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"groupHoppingEnabled"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_ReferenceSignalsPUSCH, groupAssignmentPUSCH),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_groupAssignmentPUSCH_constr_3,  memb_groupAssignmentPUSCH_constraint_1 },
		0, 0, /* No default value */
		"groupAssignmentPUSCH"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_ReferenceSignalsPUSCH, sequenceHoppingEnabled),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sequenceHoppingEnabled"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_ReferenceSignalsPUSCH, cyclicShift),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_cyclicShift_constr_5,  memb_cyclicShift_constraint_1 },
		0, 0, /* No default value */
		"cyclicShift"
		},
};
static const ber_tlv_tag_t asn_DEF_UL_ReferenceSignalsPUSCH_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UL_ReferenceSignalsPUSCH_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* groupHoppingEnabled */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* groupAssignmentPUSCH */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sequenceHoppingEnabled */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* cyclicShift */
};
asn_SEQUENCE_specifics_t asn_SPC_UL_ReferenceSignalsPUSCH_specs_1 = {
	sizeof(struct UL_ReferenceSignalsPUSCH),
	offsetof(struct UL_ReferenceSignalsPUSCH, _asn_ctx),
	asn_MAP_UL_ReferenceSignalsPUSCH_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UL_ReferenceSignalsPUSCH = {
	"UL-ReferenceSignalsPUSCH",
	"UL-ReferenceSignalsPUSCH",
	&asn_OP_SEQUENCE,
	asn_DEF_UL_ReferenceSignalsPUSCH_tags_1,
	sizeof(asn_DEF_UL_ReferenceSignalsPUSCH_tags_1)
		/sizeof(asn_DEF_UL_ReferenceSignalsPUSCH_tags_1[0]), /* 1 */
	asn_DEF_UL_ReferenceSignalsPUSCH_tags_1,	/* Same as above */
	sizeof(asn_DEF_UL_ReferenceSignalsPUSCH_tags_1)
		/sizeof(asn_DEF_UL_ReferenceSignalsPUSCH_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UL_ReferenceSignalsPUSCH_1,
	4,	/* Elements count */
	&asn_SPC_UL_ReferenceSignalsPUSCH_specs_1	/* Additional specs */
};

