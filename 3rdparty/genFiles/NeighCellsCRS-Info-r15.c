/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "NeighCellsCRS-Info-r15.h"

#include "CRS-AssistanceInfoList-r15.h"
asn_per_constraints_t asn_PER_type_NeighCellsCRS_Info_r15_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_NeighCellsCRS_Info_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NeighCellsCRS_Info_r15, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_POINTER, 0, offsetof(struct NeighCellsCRS_Info_r15, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CRS_AssistanceInfoList_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NeighCellsCRS_Info_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_NeighCellsCRS_Info_r15_specs_1 = {
	sizeof(struct NeighCellsCRS_Info_r15),
	offsetof(struct NeighCellsCRS_Info_r15, _asn_ctx),
	offsetof(struct NeighCellsCRS_Info_r15, present),
	sizeof(((struct NeighCellsCRS_Info_r15 *)0)->present),
	asn_MAP_NeighCellsCRS_Info_r15_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_NeighCellsCRS_Info_r15 = {
	"NeighCellsCRS-Info-r15",
	"NeighCellsCRS-Info-r15",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_NeighCellsCRS_Info_r15_constr_1, CHOICE_constraint },
	asn_MBR_NeighCellsCRS_Info_r15_1,
	2,	/* Elements count */
	&asn_SPC_NeighCellsCRS_Info_r15_specs_1	/* Additional specs */
};
