/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_LAA_Parameters_r13_H_
#define	_LAA_Parameters_r13_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LAA_Parameters_r13__crossCarrierSchedulingLAA_DL_r13 {
	LAA_Parameters_r13__crossCarrierSchedulingLAA_DL_r13_supported	= 0
} e_LAA_Parameters_r13__crossCarrierSchedulingLAA_DL_r13;
typedef enum LAA_Parameters_r13__csi_RS_DRS_RRM_MeasurementsLAA_r13 {
	LAA_Parameters_r13__csi_RS_DRS_RRM_MeasurementsLAA_r13_supported	= 0
} e_LAA_Parameters_r13__csi_RS_DRS_RRM_MeasurementsLAA_r13;
typedef enum LAA_Parameters_r13__downlinkLAA_r13 {
	LAA_Parameters_r13__downlinkLAA_r13_supported	= 0
} e_LAA_Parameters_r13__downlinkLAA_r13;
typedef enum LAA_Parameters_r13__endingDwPTS_r13 {
	LAA_Parameters_r13__endingDwPTS_r13_supported	= 0
} e_LAA_Parameters_r13__endingDwPTS_r13;
typedef enum LAA_Parameters_r13__secondSlotStartingPosition_r13 {
	LAA_Parameters_r13__secondSlotStartingPosition_r13_supported	= 0
} e_LAA_Parameters_r13__secondSlotStartingPosition_r13;
typedef enum LAA_Parameters_r13__tm9_LAA_r13 {
	LAA_Parameters_r13__tm9_LAA_r13_supported	= 0
} e_LAA_Parameters_r13__tm9_LAA_r13;
typedef enum LAA_Parameters_r13__tm10_LAA_r13 {
	LAA_Parameters_r13__tm10_LAA_r13_supported	= 0
} e_LAA_Parameters_r13__tm10_LAA_r13;

/* LAA-Parameters-r13 */
typedef struct LAA_Parameters_r13 {
	long	*crossCarrierSchedulingLAA_DL_r13;	/* OPTIONAL */
	long	*csi_RS_DRS_RRM_MeasurementsLAA_r13;	/* OPTIONAL */
	long	*downlinkLAA_r13;	/* OPTIONAL */
	long	*endingDwPTS_r13;	/* OPTIONAL */
	long	*secondSlotStartingPosition_r13;	/* OPTIONAL */
	long	*tm9_LAA_r13;	/* OPTIONAL */
	long	*tm10_LAA_r13;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LAA_Parameters_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_crossCarrierSchedulingLAA_DL_r13_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_csi_RS_DRS_RRM_MeasurementsLAA_r13_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_downlinkLAA_r13_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_endingDwPTS_r13_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_secondSlotStartingPosition_r13_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_tm9_LAA_r13_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_tm10_LAA_r13_14;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LAA_Parameters_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LAA_Parameters_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LAA_Parameters_r13_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _LAA_Parameters_r13_H_ */
#include "asn_internal.h"