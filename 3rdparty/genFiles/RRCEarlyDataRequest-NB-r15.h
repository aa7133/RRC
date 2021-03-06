/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_RRCEarlyDataRequest_NB_r15_H_
#define	_RRCEarlyDataRequest_NB_r15_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCEarlyDataRequest_NB_r15__criticalExtensions_PR {
	RRCEarlyDataRequest_NB_r15__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCEarlyDataRequest_NB_r15__criticalExtensions_PR_rrcEarlyDataRequest_r15,
	RRCEarlyDataRequest_NB_r15__criticalExtensions_PR_criticalExtensionsFuture
} RRCEarlyDataRequest_NB_r15__criticalExtensions_PR;

/* Forward declarations */
struct RRCEarlyDataRequest_NB_r15_IEs;

/* RRCEarlyDataRequest-NB-r15 */
typedef struct RRCEarlyDataRequest_NB_r15 {
	struct RRCEarlyDataRequest_NB_r15__criticalExtensions {
		RRCEarlyDataRequest_NB_r15__criticalExtensions_PR present;
		union RRCEarlyDataRequest_NB_r15__criticalExtensions_u {
			struct RRCEarlyDataRequest_NB_r15_IEs	*rrcEarlyDataRequest_r15;
			struct RRCEarlyDataRequest_NB_r15__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCEarlyDataRequest_NB_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCEarlyDataRequest_NB_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCEarlyDataRequest_NB_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCEarlyDataRequest_NB_r15_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCEarlyDataRequest_NB_r15_H_ */
#include "asn_internal.h"
