/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#include "VarLogMeasReport-r11.h"

static int
memb_traceRecordingSessionRef_r10_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 2)) {
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
memb_tce_Id_r10_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 1)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_traceRecordingSessionRef_r10_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_tce_Id_r10_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  1,  1 }	/* (SIZE(1..1)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_VarLogMeasReport_r11_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct VarLogMeasReport_r11, traceReference_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TraceReference_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"traceReference-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VarLogMeasReport_r11, traceRecordingSessionRef_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_traceRecordingSessionRef_r10_constr_3,  memb_traceRecordingSessionRef_r10_constraint_1 },
		0, 0, /* No default value */
		"traceRecordingSessionRef-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VarLogMeasReport_r11, tce_Id_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_tce_Id_r10_constr_4,  memb_tce_Id_r10_constraint_1 },
		0, 0, /* No default value */
		"tce-Id-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VarLogMeasReport_r11, plmn_IdentityList_r11),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_IdentityList3_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"plmn-IdentityList-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VarLogMeasReport_r11, absoluteTimeInfo_r10),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AbsoluteTimeInfo_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"absoluteTimeInfo-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VarLogMeasReport_r11, logMeasInfoList_r10),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LogMeasInfoList2_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"logMeasInfoList-r10"
		},
};
static const ber_tlv_tag_t asn_DEF_VarLogMeasReport_r11_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_VarLogMeasReport_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* traceReference-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* traceRecordingSessionRef-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* tce-Id-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* plmn-IdentityList-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* absoluteTimeInfo-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* logMeasInfoList-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_VarLogMeasReport_r11_specs_1 = {
	sizeof(struct VarLogMeasReport_r11),
	offsetof(struct VarLogMeasReport_r11, _asn_ctx),
	asn_MAP_VarLogMeasReport_r11_tag2el_1,
	6,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_VarLogMeasReport_r11 = {
	"VarLogMeasReport-r11",
	"VarLogMeasReport-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_VarLogMeasReport_r11_tags_1,
	sizeof(asn_DEF_VarLogMeasReport_r11_tags_1)
		/sizeof(asn_DEF_VarLogMeasReport_r11_tags_1[0]), /* 1 */
	asn_DEF_VarLogMeasReport_r11_tags_1,	/* Same as above */
	sizeof(asn_DEF_VarLogMeasReport_r11_tags_1)
		/sizeof(asn_DEF_VarLogMeasReport_r11_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_VarLogMeasReport_r11_1,
	6,	/* Elements count */
	&asn_SPC_VarLogMeasReport_r11_specs_1	/* Additional specs */
};

