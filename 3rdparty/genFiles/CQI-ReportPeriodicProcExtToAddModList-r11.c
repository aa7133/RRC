/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "CQI-ReportPeriodicProcExtToAddModList-r11.h"

#include "CQI-ReportPeriodicProcExt-r11.h"
asn_per_constraints_t asn_PER_type_CQI_ReportPeriodicProcExtToAddModList_r11_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  3 }	/* (SIZE(1..3)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_CQI_ReportPeriodicProcExtToAddModList_r11_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_CQI_ReportPeriodicProcExt_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_CQI_ReportPeriodicProcExtToAddModList_r11_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_CQI_ReportPeriodicProcExtToAddModList_r11_specs_1 = {
	sizeof(struct CQI_ReportPeriodicProcExtToAddModList_r11),
	offsetof(struct CQI_ReportPeriodicProcExtToAddModList_r11, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_CQI_ReportPeriodicProcExtToAddModList_r11 = {
	"CQI-ReportPeriodicProcExtToAddModList-r11",
	"CQI-ReportPeriodicProcExtToAddModList-r11",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_CQI_ReportPeriodicProcExtToAddModList_r11_tags_1,
	sizeof(asn_DEF_CQI_ReportPeriodicProcExtToAddModList_r11_tags_1)
		/sizeof(asn_DEF_CQI_ReportPeriodicProcExtToAddModList_r11_tags_1[0]), /* 1 */
	asn_DEF_CQI_ReportPeriodicProcExtToAddModList_r11_tags_1,	/* Same as above */
	sizeof(asn_DEF_CQI_ReportPeriodicProcExtToAddModList_r11_tags_1)
		/sizeof(asn_DEF_CQI_ReportPeriodicProcExtToAddModList_r11_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_CQI_ReportPeriodicProcExtToAddModList_r11_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_CQI_ReportPeriodicProcExtToAddModList_r11_1,
	1,	/* Single element */
	&asn_SPC_CQI_ReportPeriodicProcExtToAddModList_r11_specs_1	/* Additional specs */
};

