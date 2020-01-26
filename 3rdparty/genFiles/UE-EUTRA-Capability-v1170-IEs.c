/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#include "UE-EUTRA-Capability-v1170-IEs.h"

#include "PhyLayerParameters-v1170.h"
#include "UE-EUTRA-Capability-v1180-IEs.h"
static int
memb_ue_Category_v1170_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 9 && value <= 10)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_ue_Category_v1170_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  9,  10 }	/* (9..10) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_UE_EUTRA_Capability_v1170_IEs_1[] = {
	{ ATF_POINTER, 3, offsetof(struct UE_EUTRA_Capability_v1170_IEs, phyLayerParameters_v1170),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhyLayerParameters_v1170,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"phyLayerParameters-v1170"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_EUTRA_Capability_v1170_IEs, ue_Category_v1170),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_ue_Category_v1170_constr_3,  memb_ue_Category_v1170_constraint_1 },
		0, 0, /* No default value */
		"ue-Category-v1170"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_EUTRA_Capability_v1170_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_EUTRA_Capability_v1180_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_UE_EUTRA_Capability_v1170_IEs_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_UE_EUTRA_Capability_v1170_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_EUTRA_Capability_v1170_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* phyLayerParameters-v1170 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ue-Category-v1170 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_Capability_v1170_IEs_specs_1 = {
	sizeof(struct UE_EUTRA_Capability_v1170_IEs),
	offsetof(struct UE_EUTRA_Capability_v1170_IEs, _asn_ctx),
	asn_MAP_UE_EUTRA_Capability_v1170_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_UE_EUTRA_Capability_v1170_IEs_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v1170_IEs = {
	"UE-EUTRA-Capability-v1170-IEs",
	"UE-EUTRA-Capability-v1170-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_EUTRA_Capability_v1170_IEs_tags_1,
	sizeof(asn_DEF_UE_EUTRA_Capability_v1170_IEs_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_Capability_v1170_IEs_tags_1[0]), /* 1 */
	asn_DEF_UE_EUTRA_Capability_v1170_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_EUTRA_Capability_v1170_IEs_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_Capability_v1170_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_EUTRA_Capability_v1170_IEs_1,
	3,	/* Elements count */
	&asn_SPC_UE_EUTRA_Capability_v1170_IEs_specs_1	/* Additional specs */
};

