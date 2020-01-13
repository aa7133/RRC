/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "RF-Parameters-v10f0.h"

static int
memb_modifiedMPR_Behavior_r10_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_modifiedMPR_Behavior_r10_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_RF_Parameters_v10f0_1[] = {
	{ ATF_POINTER, 1, offsetof(struct RF_Parameters_v10f0, modifiedMPR_Behavior_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_modifiedMPR_Behavior_r10_constr_2,  memb_modifiedMPR_Behavior_r10_constraint_1 },
		0, 0, /* No default value */
		"modifiedMPR-Behavior-r10"
		},
};
static const int asn_MAP_RF_Parameters_v10f0_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_RF_Parameters_v10f0_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RF_Parameters_v10f0_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* modifiedMPR-Behavior-r10 */
};
asn_SEQUENCE_specifics_t asn_SPC_RF_Parameters_v10f0_specs_1 = {
	sizeof(struct RF_Parameters_v10f0),
	offsetof(struct RF_Parameters_v10f0, _asn_ctx),
	asn_MAP_RF_Parameters_v10f0_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_RF_Parameters_v10f0_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RF_Parameters_v10f0 = {
	"RF-Parameters-v10f0",
	"RF-Parameters-v10f0",
	&asn_OP_SEQUENCE,
	asn_DEF_RF_Parameters_v10f0_tags_1,
	sizeof(asn_DEF_RF_Parameters_v10f0_tags_1)
		/sizeof(asn_DEF_RF_Parameters_v10f0_tags_1[0]), /* 1 */
	asn_DEF_RF_Parameters_v10f0_tags_1,	/* Same as above */
	sizeof(asn_DEF_RF_Parameters_v10f0_tags_1)
		/sizeof(asn_DEF_RF_Parameters_v10f0_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RF_Parameters_v10f0_1,
	1,	/* Elements count */
	&asn_SPC_RF_Parameters_v10f0_specs_1	/* Additional specs */
};

