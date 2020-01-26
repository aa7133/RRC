/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#include "CellIdentity-5GC-r15.h"

static int
memb_cellId_Index_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 6)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_cellId_Index_r15_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  6 }	/* (1..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_CellIdentity_5GC_r15_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_CellIdentity_5GC_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellIdentity_5GC_r15, choice.cellIdentity_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIdentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellIdentity-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellIdentity_5GC_r15, choice.cellId_Index_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_cellId_Index_r15_constr_3,  memb_cellId_Index_r15_constraint_1 },
		0, 0, /* No default value */
		"cellId-Index-r15"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_CellIdentity_5GC_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellIdentity-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cellId-Index-r15 */
};
asn_CHOICE_specifics_t asn_SPC_CellIdentity_5GC_r15_specs_1 = {
	sizeof(struct CellIdentity_5GC_r15),
	offsetof(struct CellIdentity_5GC_r15, _asn_ctx),
	offsetof(struct CellIdentity_5GC_r15, present),
	sizeof(((struct CellIdentity_5GC_r15 *)0)->present),
	asn_MAP_CellIdentity_5GC_r15_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_CellIdentity_5GC_r15 = {
	"CellIdentity-5GC-r15",
	"CellIdentity-5GC-r15",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_CellIdentity_5GC_r15_constr_1, CHOICE_constraint },
	asn_MBR_CellIdentity_5GC_r15_1,
	2,	/* Elements count */
	&asn_SPC_CellIdentity_5GC_r15_specs_1	/* Additional specs */
};

