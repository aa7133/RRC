/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_FlightPathInfoReport_r15_H_
#define	_FlightPathInfoReport_r15_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct WayPointLocation_r15;

/* FlightPathInfoReport-r15 */
typedef struct FlightPathInfoReport_r15 {
	struct FlightPathInfoReport_r15__flightPath_r15 {
		A_SEQUENCE_OF(struct WayPointLocation_r15) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *flightPath_r15;
	struct FlightPathInfoReport_r15__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FlightPathInfoReport_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FlightPathInfoReport_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_FlightPathInfoReport_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_FlightPathInfoReport_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _FlightPathInfoReport_r15_H_ */
#include "asn_internal.h"
