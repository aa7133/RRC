/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#include "SCPTMConfiguration-BR-r14.h"

#include "SCPTM-NeighbourCellList-r13.h"
static int
memb_p_b_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 3)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_p_b_r14_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_6 = {
	sizeof(struct SCPTMConfiguration_BR_r14__nonCriticalExtension),
	offsetof(struct SCPTMConfiguration_BR_r14__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_6 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_6,
	sizeof(asn_DEF_nonCriticalExtension_tags_6)
		/sizeof(asn_DEF_nonCriticalExtension_tags_6[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_6,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_6)
		/sizeof(asn_DEF_nonCriticalExtension_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SCPTMConfiguration_BR_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SCPTMConfiguration_BR_r14, sc_mtch_InfoList_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SC_MTCH_InfoList_BR_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sc-mtch-InfoList-r14"
		},
	{ ATF_POINTER, 4, offsetof(struct SCPTMConfiguration_BR_r14, scptm_NeighbourCellList_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCPTM_NeighbourCellList_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"scptm-NeighbourCellList-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct SCPTMConfiguration_BR_r14, p_b_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_p_b_r14_constr_4,  memb_p_b_r14_constraint_1 },
		0, 0, /* No default value */
		"p-b-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct SCPTMConfiguration_BR_r14, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct SCPTMConfiguration_BR_r14, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_SCPTMConfiguration_BR_r14_oms_1[] = { 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_SCPTMConfiguration_BR_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SCPTMConfiguration_BR_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sc-mtch-InfoList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* scptm-NeighbourCellList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* p-b-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_SCPTMConfiguration_BR_r14_specs_1 = {
	sizeof(struct SCPTMConfiguration_BR_r14),
	offsetof(struct SCPTMConfiguration_BR_r14, _asn_ctx),
	asn_MAP_SCPTMConfiguration_BR_r14_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_SCPTMConfiguration_BR_r14_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SCPTMConfiguration_BR_r14 = {
	"SCPTMConfiguration-BR-r14",
	"SCPTMConfiguration-BR-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_SCPTMConfiguration_BR_r14_tags_1,
	sizeof(asn_DEF_SCPTMConfiguration_BR_r14_tags_1)
		/sizeof(asn_DEF_SCPTMConfiguration_BR_r14_tags_1[0]), /* 1 */
	asn_DEF_SCPTMConfiguration_BR_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_SCPTMConfiguration_BR_r14_tags_1)
		/sizeof(asn_DEF_SCPTMConfiguration_BR_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SCPTMConfiguration_BR_r14_1,
	5,	/* Elements count */
	&asn_SPC_SCPTMConfiguration_BR_r14_specs_1	/* Additional specs */
};

