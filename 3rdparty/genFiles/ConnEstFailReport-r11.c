/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "ConnEstFailReport-r11.h"

#include "LocationInfo-r10.h"
#include "MeasResultList2EUTRA-v9e0.h"
#include "MeasResultList2EUTRA-r9.h"
#include "MeasResultList2UTRA-r9.h"
#include "MeasResultListGERAN.h"
#include "MeasResultList2CDMA2000-r9.h"
#include "RSRQ-Type-r12.h"
#include "MeasResultList2EUTRA-v1250.h"
#include "LogMeasResultListBT-r15.h"
#include "LogMeasResultListWLAN-r15.h"
static asn_TYPE_member_t asn_MBR_measResultFailedCell_r11_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ConnEstFailReport_r11__measResultFailedCell_r11, rsrpResult_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrpResult-r11"
		},
	{ ATF_POINTER, 1, offsetof(struct ConnEstFailReport_r11__measResultFailedCell_r11, rsrqResult_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrqResult-r11"
		},
};
static const int asn_MAP_measResultFailedCell_r11_oms_4[] = { 1 };
static const ber_tlv_tag_t asn_DEF_measResultFailedCell_r11_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_measResultFailedCell_r11_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rsrpResult-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* rsrqResult-r11 */
};
static asn_SEQUENCE_specifics_t asn_SPC_measResultFailedCell_r11_specs_4 = {
	sizeof(struct ConnEstFailReport_r11__measResultFailedCell_r11),
	offsetof(struct ConnEstFailReport_r11__measResultFailedCell_r11, _asn_ctx),
	asn_MAP_measResultFailedCell_r11_tag2el_4,
	2,	/* Count of tags in the map */
	asn_MAP_measResultFailedCell_r11_oms_4,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measResultFailedCell_r11_4 = {
	"measResultFailedCell-r11",
	"measResultFailedCell-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_measResultFailedCell_r11_tags_4,
	sizeof(asn_DEF_measResultFailedCell_r11_tags_4)
		/sizeof(asn_DEF_measResultFailedCell_r11_tags_4[0]) - 1, /* 1 */
	asn_DEF_measResultFailedCell_r11_tags_4,	/* Same as above */
	sizeof(asn_DEF_measResultFailedCell_r11_tags_4)
		/sizeof(asn_DEF_measResultFailedCell_r11_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_measResultFailedCell_r11_4,
	2,	/* Elements count */
	&asn_SPC_measResultFailedCell_r11_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_measResultNeighCells_r11_7[] = {
	{ ATF_POINTER, 4, offsetof(struct ConnEstFailReport_r11__measResultNeighCells_r11, measResultListEUTRA_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultList2EUTRA_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultListEUTRA-r11"
		},
	{ ATF_POINTER, 3, offsetof(struct ConnEstFailReport_r11__measResultNeighCells_r11, measResultListUTRA_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultList2UTRA_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultListUTRA-r11"
		},
	{ ATF_POINTER, 2, offsetof(struct ConnEstFailReport_r11__measResultNeighCells_r11, measResultListGERAN_r11),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultListGERAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultListGERAN-r11"
		},
	{ ATF_POINTER, 1, offsetof(struct ConnEstFailReport_r11__measResultNeighCells_r11, measResultsCDMA2000_r11),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultList2CDMA2000_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultsCDMA2000-r11"
		},
};
static const int asn_MAP_measResultNeighCells_r11_oms_7[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_measResultNeighCells_r11_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_measResultNeighCells_r11_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measResultListEUTRA-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measResultListUTRA-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* measResultListGERAN-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* measResultsCDMA2000-r11 */
};
static asn_SEQUENCE_specifics_t asn_SPC_measResultNeighCells_r11_specs_7 = {
	sizeof(struct ConnEstFailReport_r11__measResultNeighCells_r11),
	offsetof(struct ConnEstFailReport_r11__measResultNeighCells_r11, _asn_ctx),
	asn_MAP_measResultNeighCells_r11_tag2el_7,
	4,	/* Count of tags in the map */
	asn_MAP_measResultNeighCells_r11_oms_7,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measResultNeighCells_r11_7 = {
	"measResultNeighCells-r11",
	"measResultNeighCells-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_measResultNeighCells_r11_tags_7,
	sizeof(asn_DEF_measResultNeighCells_r11_tags_7)
		/sizeof(asn_DEF_measResultNeighCells_r11_tags_7[0]) - 1, /* 1 */
	asn_DEF_measResultNeighCells_r11_tags_7,	/* Same as above */
	sizeof(asn_DEF_measResultNeighCells_r11_tags_7)
		/sizeof(asn_DEF_measResultNeighCells_r11_tags_7[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_measResultNeighCells_r11_7,
	4,	/* Elements count */
	&asn_SPC_measResultNeighCells_r11_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_18[] = {
	{ ATF_POINTER, 3, offsetof(struct ConnEstFailReport_r11__ext1, measResultFailedCell_v1250),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_Range_v1250,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultFailedCell-v1250"
		},
	{ ATF_POINTER, 2, offsetof(struct ConnEstFailReport_r11__ext1, failedCellRSRQ_Type_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_Type_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"failedCellRSRQ-Type-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct ConnEstFailReport_r11__ext1, measResultListEUTRA_v1250),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultList2EUTRA_v1250,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultListEUTRA-v1250"
		},
};
static const int asn_MAP_ext1_oms_18[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_18[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measResultFailedCell-v1250 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* failedCellRSRQ-Type-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* measResultListEUTRA-v1250 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_18 = {
	sizeof(struct ConnEstFailReport_r11__ext1),
	offsetof(struct ConnEstFailReport_r11__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_18,
	3,	/* Count of tags in the map */
	asn_MAP_ext1_oms_18,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_18 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_18,
	sizeof(asn_DEF_ext1_tags_18)
		/sizeof(asn_DEF_ext1_tags_18[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_18,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_18)
		/sizeof(asn_DEF_ext1_tags_18[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_18,
	3,	/* Elements count */
	&asn_SPC_ext1_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_22[] = {
	{ ATF_POINTER, 1, offsetof(struct ConnEstFailReport_r11__ext2, measResultFailedCell_v1360),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_Range_v1360,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultFailedCell-v1360"
		},
};
static const int asn_MAP_ext2_oms_22[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext2_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_22[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* measResultFailedCell-v1360 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_22 = {
	sizeof(struct ConnEstFailReport_r11__ext2),
	offsetof(struct ConnEstFailReport_r11__ext2, _asn_ctx),
	asn_MAP_ext2_tag2el_22,
	1,	/* Count of tags in the map */
	asn_MAP_ext2_oms_22,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext2_22 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_ext2_tags_22,
	sizeof(asn_DEF_ext2_tags_22)
		/sizeof(asn_DEF_ext2_tags_22[0]) - 1, /* 1 */
	asn_DEF_ext2_tags_22,	/* Same as above */
	sizeof(asn_DEF_ext2_tags_22)
		/sizeof(asn_DEF_ext2_tags_22[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext2_22,
	1,	/* Elements count */
	&asn_SPC_ext2_specs_22	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext3_24[] = {
	{ ATF_POINTER, 2, offsetof(struct ConnEstFailReport_r11__ext3, logMeasResultListBT_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LogMeasResultListBT_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"logMeasResultListBT-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct ConnEstFailReport_r11__ext3, logMeasResultListWLAN_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LogMeasResultListWLAN_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"logMeasResultListWLAN-r15"
		},
};
static const int asn_MAP_ext3_oms_24[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ext3_tags_24[] = {
	(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext3_tag2el_24[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* logMeasResultListBT-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* logMeasResultListWLAN-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext3_specs_24 = {
	sizeof(struct ConnEstFailReport_r11__ext3),
	offsetof(struct ConnEstFailReport_r11__ext3, _asn_ctx),
	asn_MAP_ext3_tag2el_24,
	2,	/* Count of tags in the map */
	asn_MAP_ext3_oms_24,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext3_24 = {
	"ext3",
	"ext3",
	&asn_OP_SEQUENCE,
	asn_DEF_ext3_tags_24,
	sizeof(asn_DEF_ext3_tags_24)
		/sizeof(asn_DEF_ext3_tags_24[0]) - 1, /* 1 */
	asn_DEF_ext3_tags_24,	/* Same as above */
	sizeof(asn_DEF_ext3_tags_24)
		/sizeof(asn_DEF_ext3_tags_24[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext3_24,
	2,	/* Elements count */
	&asn_SPC_ext3_specs_24	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ConnEstFailReport_r11_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ConnEstFailReport_r11, failedCellId_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellGlobalIdEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"failedCellId-r11"
		},
	{ ATF_POINTER, 1, offsetof(struct ConnEstFailReport_r11, locationInfo_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LocationInfo_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"locationInfo-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConnEstFailReport_r11, measResultFailedCell_r11),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_measResultFailedCell_r11_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultFailedCell-r11"
		},
	{ ATF_POINTER, 1, offsetof(struct ConnEstFailReport_r11, measResultNeighCells_r11),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_measResultNeighCells_r11_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultNeighCells-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConnEstFailReport_r11, numberOfPreamblesSent_r11),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NumberOfPreamblesSent_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"numberOfPreamblesSent-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConnEstFailReport_r11, contentionDetected_r11),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"contentionDetected-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConnEstFailReport_r11, maxTxPowerReached_r11),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxTxPowerReached-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConnEstFailReport_r11, timeSinceFailure_r11),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeSinceFailure_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeSinceFailure-r11"
		},
	{ ATF_POINTER, 4, offsetof(struct ConnEstFailReport_r11, measResultListEUTRA_v1130),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultList2EUTRA_v9e0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultListEUTRA-v1130"
		},
	{ ATF_POINTER, 3, offsetof(struct ConnEstFailReport_r11, ext1),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		0,
		&asn_DEF_ext1_18,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
	{ ATF_POINTER, 2, offsetof(struct ConnEstFailReport_r11, ext2),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		0,
		&asn_DEF_ext2_22,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext2"
		},
	{ ATF_POINTER, 1, offsetof(struct ConnEstFailReport_r11, ext3),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		0,
		&asn_DEF_ext3_24,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext3"
		},
};
static const int asn_MAP_ConnEstFailReport_r11_oms_1[] = { 1, 3, 8, 9, 10, 11 };
static const ber_tlv_tag_t asn_DEF_ConnEstFailReport_r11_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ConnEstFailReport_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* failedCellId-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* locationInfo-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* measResultFailedCell-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* measResultNeighCells-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* numberOfPreamblesSent-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* contentionDetected-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* maxTxPowerReached-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* timeSinceFailure-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* measResultListEUTRA-v1130 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* ext2 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 } /* ext3 */
};
asn_SEQUENCE_specifics_t asn_SPC_ConnEstFailReport_r11_specs_1 = {
	sizeof(struct ConnEstFailReport_r11),
	offsetof(struct ConnEstFailReport_r11, _asn_ctx),
	asn_MAP_ConnEstFailReport_r11_tag2el_1,
	12,	/* Count of tags in the map */
	asn_MAP_ConnEstFailReport_r11_oms_1,	/* Optional members */
	3, 3,	/* Root/Additions */
	9,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ConnEstFailReport_r11 = {
	"ConnEstFailReport-r11",
	"ConnEstFailReport-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_ConnEstFailReport_r11_tags_1,
	sizeof(asn_DEF_ConnEstFailReport_r11_tags_1)
		/sizeof(asn_DEF_ConnEstFailReport_r11_tags_1[0]), /* 1 */
	asn_DEF_ConnEstFailReport_r11_tags_1,	/* Same as above */
	sizeof(asn_DEF_ConnEstFailReport_r11_tags_1)
		/sizeof(asn_DEF_ConnEstFailReport_r11_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ConnEstFailReport_r11_1,
	12,	/* Elements count */
	&asn_SPC_ConnEstFailReport_r11_specs_1	/* Additional specs */
};

