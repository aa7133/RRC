/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "RRCConnectionReconfiguration-v1020-IEs.h"

#include "SCellToReleaseList-r10.h"
#include "SCellToAddModList-r10.h"
#include "RRCConnectionReconfiguration-v1130-IEs.h"
asn_TYPE_member_t asn_MBR_RRCConnectionReconfiguration_v1020_IEs_1[] = {
	{ ATF_POINTER, 3, offsetof(struct RRCConnectionReconfiguration_v1020_IEs, sCellToReleaseList_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCellToReleaseList_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sCellToReleaseList-r10"
		},
	{ ATF_POINTER, 2, offsetof(struct RRCConnectionReconfiguration_v1020_IEs, sCellToAddModList_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCellToAddModList_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sCellToAddModList-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionReconfiguration_v1020_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionReconfiguration_v1130_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_RRCConnectionReconfiguration_v1020_IEs_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_RRCConnectionReconfiguration_v1020_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCConnectionReconfiguration_v1020_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sCellToReleaseList-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sCellToAddModList-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReconfiguration_v1020_IEs_specs_1 = {
	sizeof(struct RRCConnectionReconfiguration_v1020_IEs),
	offsetof(struct RRCConnectionReconfiguration_v1020_IEs, _asn_ctx),
	asn_MAP_RRCConnectionReconfiguration_v1020_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_RRCConnectionReconfiguration_v1020_IEs_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionReconfiguration_v1020_IEs = {
	"RRCConnectionReconfiguration-v1020-IEs",
	"RRCConnectionReconfiguration-v1020-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_RRCConnectionReconfiguration_v1020_IEs_tags_1,
	sizeof(asn_DEF_RRCConnectionReconfiguration_v1020_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionReconfiguration_v1020_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCConnectionReconfiguration_v1020_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnectionReconfiguration_v1020_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionReconfiguration_v1020_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRCConnectionReconfiguration_v1020_IEs_1,
	3,	/* Elements count */
	&asn_SPC_RRCConnectionReconfiguration_v1020_IEs_specs_1	/* Additional specs */
};

