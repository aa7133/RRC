/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "SL-RestrictResourceReservationPeriodList-r14.h"

asn_per_constraints_t asn_PER_type_SL_RestrictResourceReservationPeriodList_r14_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_SL_RestrictResourceReservationPeriodList_r14_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_SL_RestrictResourceReservationPeriod_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_SL_RestrictResourceReservationPeriodList_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_SL_RestrictResourceReservationPeriodList_r14_specs_1 = {
	sizeof(struct SL_RestrictResourceReservationPeriodList_r14),
	offsetof(struct SL_RestrictResourceReservationPeriodList_r14, _asn_ctx),
	1,	/* XER encoding is XMLValueList */
};
asn_TYPE_descriptor_t asn_DEF_SL_RestrictResourceReservationPeriodList_r14 = {
	"SL-RestrictResourceReservationPeriodList-r14",
	"SL-RestrictResourceReservationPeriodList-r14",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_SL_RestrictResourceReservationPeriodList_r14_tags_1,
	sizeof(asn_DEF_SL_RestrictResourceReservationPeriodList_r14_tags_1)
		/sizeof(asn_DEF_SL_RestrictResourceReservationPeriodList_r14_tags_1[0]), /* 1 */
	asn_DEF_SL_RestrictResourceReservationPeriodList_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_RestrictResourceReservationPeriodList_r14_tags_1)
		/sizeof(asn_DEF_SL_RestrictResourceReservationPeriodList_r14_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_SL_RestrictResourceReservationPeriodList_r14_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_SL_RestrictResourceReservationPeriodList_r14_1,
	1,	/* Single element */
	&asn_SPC_SL_RestrictResourceReservationPeriodList_r14_specs_1	/* Additional specs */
};
