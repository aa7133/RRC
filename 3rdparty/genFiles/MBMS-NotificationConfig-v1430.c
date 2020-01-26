/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#include "MBMS-NotificationConfig-v1430.h"

static int
memb_notificationSF_Index_v1430_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 7 && value <= 10)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_notificationSF_Index_v1430_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  7,  10 }	/* (7..10) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_MBMS_NotificationConfig_v1430_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_NotificationConfig_v1430, notificationSF_Index_v1430),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_notificationSF_Index_v1430_constr_2,  memb_notificationSF_Index_v1430_constraint_1 },
		0, 0, /* No default value */
		"notificationSF-Index-v1430"
		},
};
static const ber_tlv_tag_t asn_DEF_MBMS_NotificationConfig_v1430_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MBMS_NotificationConfig_v1430_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* notificationSF-Index-v1430 */
};
asn_SEQUENCE_specifics_t asn_SPC_MBMS_NotificationConfig_v1430_specs_1 = {
	sizeof(struct MBMS_NotificationConfig_v1430),
	offsetof(struct MBMS_NotificationConfig_v1430, _asn_ctx),
	asn_MAP_MBMS_NotificationConfig_v1430_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MBMS_NotificationConfig_v1430 = {
	"MBMS-NotificationConfig-v1430",
	"MBMS-NotificationConfig-v1430",
	&asn_OP_SEQUENCE,
	asn_DEF_MBMS_NotificationConfig_v1430_tags_1,
	sizeof(asn_DEF_MBMS_NotificationConfig_v1430_tags_1)
		/sizeof(asn_DEF_MBMS_NotificationConfig_v1430_tags_1[0]), /* 1 */
	asn_DEF_MBMS_NotificationConfig_v1430_tags_1,	/* Same as above */
	sizeof(asn_DEF_MBMS_NotificationConfig_v1430_tags_1)
		/sizeof(asn_DEF_MBMS_NotificationConfig_v1430_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MBMS_NotificationConfig_v1430_1,
	1,	/* Elements count */
	&asn_SPC_MBMS_NotificationConfig_v1430_specs_1	/* Additional specs */
};

