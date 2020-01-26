/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#include "RLC-BearerConfig-r15.h"

#include "RLC-Config-r15.h"
#include "LogicalChannelConfig.h"
static int
memb_logicalChannelIdentity_r15_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 10)) {
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
memb_logicalChannelIdentityExt_r15_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 32 && value <= 38)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_logicalChannelIdentity_r15_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  10 }	/* (1..10) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_logicalChannelIdentityExt_r15_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  32,  38 }	/* (32..38) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_logicalChannelIdentityConfig_r15_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_RLC_BearerConfig_r15_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_logicalChannelIdentityConfig_r15_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RLC_BearerConfig_r15__setup__logicalChannelIdentityConfig_r15, choice.logicalChannelIdentity_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_logicalChannelIdentity_r15_constr_6,  memb_logicalChannelIdentity_r15_constraint_5 },
		0, 0, /* No default value */
		"logicalChannelIdentity-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RLC_BearerConfig_r15__setup__logicalChannelIdentityConfig_r15, choice.logicalChannelIdentityExt_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_logicalChannelIdentityExt_r15_constr_7,  memb_logicalChannelIdentityExt_r15_constraint_5 },
		0, 0, /* No default value */
		"logicalChannelIdentityExt-r15"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_logicalChannelIdentityConfig_r15_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* logicalChannelIdentity-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* logicalChannelIdentityExt-r15 */
};
static asn_CHOICE_specifics_t asn_SPC_logicalChannelIdentityConfig_r15_specs_5 = {
	sizeof(struct RLC_BearerConfig_r15__setup__logicalChannelIdentityConfig_r15),
	offsetof(struct RLC_BearerConfig_r15__setup__logicalChannelIdentityConfig_r15, _asn_ctx),
	offsetof(struct RLC_BearerConfig_r15__setup__logicalChannelIdentityConfig_r15, present),
	sizeof(((struct RLC_BearerConfig_r15__setup__logicalChannelIdentityConfig_r15 *)0)->present),
	asn_MAP_logicalChannelIdentityConfig_r15_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_logicalChannelIdentityConfig_r15_5 = {
	"logicalChannelIdentityConfig-r15",
	"logicalChannelIdentityConfig-r15",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_logicalChannelIdentityConfig_r15_constr_5, CHOICE_constraint },
	asn_MBR_logicalChannelIdentityConfig_r15_5,
	2,	/* Elements count */
	&asn_SPC_logicalChannelIdentityConfig_r15_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_POINTER, 1, offsetof(struct RLC_BearerConfig_r15__setup, rlc_Config_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RLC_Config_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlc-Config-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RLC_BearerConfig_r15__setup, logicalChannelIdentityConfig_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_logicalChannelIdentityConfig_r15_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"logicalChannelIdentityConfig-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct RLC_BearerConfig_r15__setup, logicalChannelConfig_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LogicalChannelConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"logicalChannelConfig-r15"
		},
};
static const int asn_MAP_setup_oms_3[] = { 0, 2 };
static const ber_tlv_tag_t asn_DEF_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rlc-Config-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* logicalChannelIdentityConfig-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* logicalChannelConfig-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct RLC_BearerConfig_r15__setup),
	offsetof(struct RLC_BearerConfig_r15__setup, _asn_ctx),
	asn_MAP_setup_tag2el_3,
	3,	/* Count of tags in the map */
	asn_MAP_setup_oms_3,	/* Optional members */
	2, 0,	/* Root/Additions */
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
	3,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RLC_BearerConfig_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RLC_BearerConfig_r15, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_POINTER, 0, offsetof(struct RLC_BearerConfig_r15, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_RLC_BearerConfig_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_RLC_BearerConfig_r15_specs_1 = {
	sizeof(struct RLC_BearerConfig_r15),
	offsetof(struct RLC_BearerConfig_r15, _asn_ctx),
	offsetof(struct RLC_BearerConfig_r15, present),
	sizeof(((struct RLC_BearerConfig_r15 *)0)->present),
	asn_MAP_RLC_BearerConfig_r15_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_RLC_BearerConfig_r15 = {
	"RLC-BearerConfig-r15",
	"RLC-BearerConfig-r15",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_RLC_BearerConfig_r15_constr_1, CHOICE_constraint },
	asn_MBR_RLC_BearerConfig_r15_1,
	2,	/* Elements count */
	&asn_SPC_RLC_BearerConfig_r15_specs_1	/* Additional specs */
};

