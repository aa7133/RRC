/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#include "UE-EUTRA-CapabilityAddXDD-Mode-v1540.h"

#include "EUTRA-5GC-Parameters-r15.h"
#include "IRAT-ParametersNR-v1540.h"
asn_TYPE_member_t asn_MBR_UE_EUTRA_CapabilityAddXDD_Mode_v1540_1[] = {
	{ ATF_POINTER, 2, offsetof(struct UE_EUTRA_CapabilityAddXDD_Mode_v1540, eutra_5GC_Parameters_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EUTRA_5GC_Parameters_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eutra-5GC-Parameters-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_EUTRA_CapabilityAddXDD_Mode_v1540, irat_ParametersNR_v1540),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IRAT_ParametersNR_v1540,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"irat-ParametersNR-v1540"
		},
};
static const int asn_MAP_UE_EUTRA_CapabilityAddXDD_Mode_v1540_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1540_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_EUTRA_CapabilityAddXDD_Mode_v1540_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eutra-5GC-Parameters-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* irat-ParametersNR-v1540 */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_CapabilityAddXDD_Mode_v1540_specs_1 = {
	sizeof(struct UE_EUTRA_CapabilityAddXDD_Mode_v1540),
	offsetof(struct UE_EUTRA_CapabilityAddXDD_Mode_v1540, _asn_ctx),
	asn_MAP_UE_EUTRA_CapabilityAddXDD_Mode_v1540_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_UE_EUTRA_CapabilityAddXDD_Mode_v1540_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1540 = {
	"UE-EUTRA-CapabilityAddXDD-Mode-v1540",
	"UE-EUTRA-CapabilityAddXDD-Mode-v1540",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1540_tags_1,
	sizeof(asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1540_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1540_tags_1[0]), /* 1 */
	asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1540_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1540_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1540_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_EUTRA_CapabilityAddXDD_Mode_v1540_1,
	2,	/* Elements count */
	&asn_SPC_UE_EUTRA_CapabilityAddXDD_Mode_v1540_specs_1	/* Additional specs */
};

