/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "SL-DiscTxResource-r13.h"

#include "SL-DiscTxConfigScheduled-r13.h"
#include "SL-DiscTxPoolDedicated-r13.h"
static asn_per_constraints_t asn_PER_type_setup_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_SL_DiscTxResource_r13_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_POINTER, 0, offsetof(struct SL_DiscTxResource_r13__setup, choice.scheduled_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_DiscTxConfigScheduled_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"scheduled-r13"
		},
	{ ATF_POINTER, 0, offsetof(struct SL_DiscTxResource_r13__setup, choice.ue_Selected_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_DiscTxPoolDedicated_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-Selected-r13"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* scheduled-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ue-Selected-r13 */
};
static asn_CHOICE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct SL_DiscTxResource_r13__setup),
	offsetof(struct SL_DiscTxResource_r13__setup, _asn_ctx),
	offsetof(struct SL_DiscTxResource_r13__setup, present),
	sizeof(((struct SL_DiscTxResource_r13__setup *)0)->present),
	asn_MAP_setup_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_3 = {
	"setup",
	"setup",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_setup_constr_3, CHOICE_constraint },
	asn_MBR_setup_3,
	2,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SL_DiscTxResource_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_DiscTxResource_r13, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_POINTER, 0, offsetof(struct SL_DiscTxResource_r13, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_SL_DiscTxResource_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_SL_DiscTxResource_r13_specs_1 = {
	sizeof(struct SL_DiscTxResource_r13),
	offsetof(struct SL_DiscTxResource_r13, _asn_ctx),
	offsetof(struct SL_DiscTxResource_r13, present),
	sizeof(((struct SL_DiscTxResource_r13 *)0)->present),
	asn_MAP_SL_DiscTxResource_r13_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_SL_DiscTxResource_r13 = {
	"SL-DiscTxResource-r13",
	"SL-DiscTxResource-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_SL_DiscTxResource_r13_constr_1, CHOICE_constraint },
	asn_MBR_SL_DiscTxResource_r13_1,
	2,	/* Elements count */
	&asn_SPC_SL_DiscTxResource_r13_specs_1	/* Additional specs */
};

