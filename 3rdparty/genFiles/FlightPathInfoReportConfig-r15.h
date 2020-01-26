/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_FlightPathInfoReportConfig_r15_H_
#define	_FlightPathInfoReportConfig_r15_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FlightPathInfoReportConfig_r15__includeTimeStamp_r15 {
	FlightPathInfoReportConfig_r15__includeTimeStamp_r15_true	= 0
} e_FlightPathInfoReportConfig_r15__includeTimeStamp_r15;

/* FlightPathInfoReportConfig-r15 */
typedef struct FlightPathInfoReportConfig_r15 {
	long	 maxWayPointNumber_r15;
	long	*includeTimeStamp_r15;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FlightPathInfoReportConfig_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_includeTimeStamp_r15_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_FlightPathInfoReportConfig_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_FlightPathInfoReportConfig_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_FlightPathInfoReportConfig_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _FlightPathInfoReportConfig_r15_H_ */
#include "asn_internal.h"
