/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_LocationInfo_r10_H_
#define	_LocationInfo_r10_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LocationInfo_r10__locationCoordinates_r10_PR {
	LocationInfo_r10__locationCoordinates_r10_PR_NOTHING,	/* No components present */
	LocationInfo_r10__locationCoordinates_r10_PR_ellipsoid_Point_r10,
	LocationInfo_r10__locationCoordinates_r10_PR_ellipsoidPointWithAltitude_r10,
	/* Extensions may appear below */
	LocationInfo_r10__locationCoordinates_r10_PR_ellipsoidPointWithUncertaintyCircle_r11,
	LocationInfo_r10__locationCoordinates_r10_PR_ellipsoidPointWithUncertaintyEllipse_r11,
	LocationInfo_r10__locationCoordinates_r10_PR_ellipsoidPointWithAltitudeAndUncertaintyEllipsoid_r11,
	LocationInfo_r10__locationCoordinates_r10_PR_ellipsoidArc_r11,
	LocationInfo_r10__locationCoordinates_r10_PR_polygon_r11
} LocationInfo_r10__locationCoordinates_r10_PR;
typedef enum LocationInfo_r10__ext1__verticalVelocityInfo_r15_PR {
	LocationInfo_r10__ext1__verticalVelocityInfo_r15_PR_NOTHING,	/* No components present */
	LocationInfo_r10__ext1__verticalVelocityInfo_r15_PR_verticalVelocity_r15,
	LocationInfo_r10__ext1__verticalVelocityInfo_r15_PR_verticalVelocityAndUncertainty_r15
} LocationInfo_r10__ext1__verticalVelocityInfo_r15_PR;

/* LocationInfo-r10 */
typedef struct LocationInfo_r10 {
	struct LocationInfo_r10__locationCoordinates_r10 {
		LocationInfo_r10__locationCoordinates_r10_PR present;
		union LocationInfo_r10__locationCoordinates_r10_u {
			OCTET_STRING_t	 ellipsoid_Point_r10;
			OCTET_STRING_t	 ellipsoidPointWithAltitude_r10;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			OCTET_STRING_t	 ellipsoidPointWithUncertaintyCircle_r11;
			OCTET_STRING_t	 ellipsoidPointWithUncertaintyEllipse_r11;
			OCTET_STRING_t	 ellipsoidPointWithAltitudeAndUncertaintyEllipsoid_r11;
			OCTET_STRING_t	 ellipsoidArc_r11;
			OCTET_STRING_t	 polygon_r11;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} locationCoordinates_r10;
	OCTET_STRING_t	*horizontalVelocity_r10;	/* OPTIONAL */
	OCTET_STRING_t	*gnss_TOD_msec_r10;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LocationInfo_r10__ext1 {
		struct LocationInfo_r10__ext1__verticalVelocityInfo_r15 {
			LocationInfo_r10__ext1__verticalVelocityInfo_r15_PR present;
			union LocationInfo_r10__ext1__verticalVelocityInfo_r15_u {
				OCTET_STRING_t	 verticalVelocity_r15;
				OCTET_STRING_t	 verticalVelocityAndUncertainty_r15;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *verticalVelocityInfo_r15;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LocationInfo_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LocationInfo_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_LocationInfo_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_LocationInfo_r10_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _LocationInfo_r10_H_ */
#include "asn_internal.h"
