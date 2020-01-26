/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#include "SL-PPPR-Dest-CarrierFreq.h"

#include "SL-DestinationInfoList-r12.h"
#include "SL-AllowedCarrierFreqList-r15.h"
asn_TYPE_member_t asn_MBR_SL_PPPR_Dest_CarrierFreq_1[] = {
	{ ATF_POINTER, 2, offsetof(struct SL_PPPR_Dest_CarrierFreq, destinationInfoList_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_DestinationInfoList_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"destinationInfoList-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_PPPR_Dest_CarrierFreq, allowedCarrierFreqList_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_AllowedCarrierFreqList_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"allowedCarrierFreqList-r15"
		},
};
static const int asn_MAP_SL_PPPR_Dest_CarrierFreq_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_SL_PPPR_Dest_CarrierFreq_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_PPPR_Dest_CarrierFreq_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* destinationInfoList-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* allowedCarrierFreqList-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_PPPR_Dest_CarrierFreq_specs_1 = {
	sizeof(struct SL_PPPR_Dest_CarrierFreq),
	offsetof(struct SL_PPPR_Dest_CarrierFreq, _asn_ctx),
	asn_MAP_SL_PPPR_Dest_CarrierFreq_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SL_PPPR_Dest_CarrierFreq_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_PPPR_Dest_CarrierFreq = {
	"SL-PPPR-Dest-CarrierFreq",
	"SL-PPPR-Dest-CarrierFreq",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_PPPR_Dest_CarrierFreq_tags_1,
	sizeof(asn_DEF_SL_PPPR_Dest_CarrierFreq_tags_1)
		/sizeof(asn_DEF_SL_PPPR_Dest_CarrierFreq_tags_1[0]), /* 1 */
	asn_DEF_SL_PPPR_Dest_CarrierFreq_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_PPPR_Dest_CarrierFreq_tags_1)
		/sizeof(asn_DEF_SL_PPPR_Dest_CarrierFreq_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SL_PPPR_Dest_CarrierFreq_1,
	2,	/* Elements count */
	&asn_SPC_SL_PPPR_Dest_CarrierFreq_specs_1	/* Additional specs */
};

