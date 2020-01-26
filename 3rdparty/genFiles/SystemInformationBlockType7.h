/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_SystemInformationBlockType7_H_
#define	_SystemInformationBlockType7_H_


#include "asn_application.h"

/* Including external dependencies */
#include "T-Reselection.h"
#include "OCTET_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SpeedStateScaleFactors;
struct CarrierFreqsInfoListGERAN;

/* SystemInformationBlockType7 */
typedef struct SystemInformationBlockType7 {
	T_Reselection_t	 t_ReselectionGERAN;
	struct SpeedStateScaleFactors	*t_ReselectionGERAN_SF;	/* OPTIONAL */
	struct CarrierFreqsInfoListGERAN	*carrierFreqsInfoList;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType7;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType7_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType7_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType7_H_ */
#include "asn_internal.h"
