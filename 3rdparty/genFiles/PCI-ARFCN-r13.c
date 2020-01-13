/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "PCI-ARFCN-r13.h"

asn_TYPE_member_t asn_MBR_PCI_ARFCN_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PCI_ARFCN_r13, physCellId_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physCellId-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct PCI_ARFCN_r13, carrierFreq_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq-r13"
		},
};
static const int asn_MAP_PCI_ARFCN_r13_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_PCI_ARFCN_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PCI_ARFCN_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* carrierFreq-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_PCI_ARFCN_r13_specs_1 = {
	sizeof(struct PCI_ARFCN_r13),
	offsetof(struct PCI_ARFCN_r13, _asn_ctx),
	asn_MAP_PCI_ARFCN_r13_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_PCI_ARFCN_r13_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PCI_ARFCN_r13 = {
	"PCI-ARFCN-r13",
	"PCI-ARFCN-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_PCI_ARFCN_r13_tags_1,
	sizeof(asn_DEF_PCI_ARFCN_r13_tags_1)
		/sizeof(asn_DEF_PCI_ARFCN_r13_tags_1[0]), /* 1 */
	asn_DEF_PCI_ARFCN_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_PCI_ARFCN_r13_tags_1)
		/sizeof(asn_DEF_PCI_ARFCN_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PCI_ARFCN_r13_1,
	2,	/* Elements count */
	&asn_SPC_PCI_ARFCN_r13_specs_1	/* Additional specs */
};

