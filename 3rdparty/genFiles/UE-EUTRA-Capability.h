/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_UE_EUTRA_Capability_H_
#define	_UE_EUTRA_Capability_H_


#include "asn_application.h"

/* Including external dependencies */
#include "AccessStratumRelease.h"
#include "NativeInteger.h"
#include "PDCP-Parameters.h"
#include "PhyLayerParameters.h"
#include "RF-Parameters.h"
#include "MeasParameters.h"
#include "BIT_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_EUTRA_Capability_v920_IEs;
struct IRAT_ParametersUTRA_FDD;
struct IRAT_ParametersUTRA_TDD128;
struct IRAT_ParametersUTRA_TDD384;
struct IRAT_ParametersUTRA_TDD768;
struct IRAT_ParametersGERAN;
struct IRAT_ParametersCDMA2000_HRPD;
struct IRAT_ParametersCDMA2000_1XRTT;

/* UE-EUTRA-Capability */
typedef struct UE_EUTRA_Capability {
	AccessStratumRelease_t	 accessStratumRelease;
	long	 ue_Category;
	PDCP_Parameters_t	 pdcp_Parameters;
	PhyLayerParameters_t	 phyLayerParameters;
	RF_Parameters_t	 rf_Parameters;
	MeasParameters_t	 measParameters;
	BIT_STRING_t	*featureGroupIndicators;	/* OPTIONAL */
	struct UE_EUTRA_Capability__interRAT_Parameters {
		struct IRAT_ParametersUTRA_FDD	*utraFDD;	/* OPTIONAL */
		struct IRAT_ParametersUTRA_TDD128	*utraTDD128;	/* OPTIONAL */
		struct IRAT_ParametersUTRA_TDD384	*utraTDD384;	/* OPTIONAL */
		struct IRAT_ParametersUTRA_TDD768	*utraTDD768;	/* OPTIONAL */
		struct IRAT_ParametersGERAN	*geran;	/* OPTIONAL */
		struct IRAT_ParametersCDMA2000_HRPD	*cdma2000_HRPD;	/* OPTIONAL */
		struct IRAT_ParametersCDMA2000_1XRTT	*cdma2000_1xRTT;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} interRAT_Parameters;
	struct UE_EUTRA_Capability_v920_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_Capability_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_EUTRA_Capability_H_ */
#include "asn_internal.h"
