/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_PhysicalConfigDedicatedSCell_v1370_H_
#define	_PhysicalConfigDedicatedSCell_v1370_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NULL.h"
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PhysicalConfigDedicatedSCell_v1370__pucch_SCell_v1370_PR {
	PhysicalConfigDedicatedSCell_v1370__pucch_SCell_v1370_PR_NOTHING,	/* No components present */
	PhysicalConfigDedicatedSCell_v1370__pucch_SCell_v1370_PR_release,
	PhysicalConfigDedicatedSCell_v1370__pucch_SCell_v1370_PR_setup
} PhysicalConfigDedicatedSCell_v1370__pucch_SCell_v1370_PR;

/* Forward declarations */
struct PUCCH_ConfigDedicated_v1370;

/* PhysicalConfigDedicatedSCell-v1370 */
typedef struct PhysicalConfigDedicatedSCell_v1370 {
	struct PhysicalConfigDedicatedSCell_v1370__pucch_SCell_v1370 {
		PhysicalConfigDedicatedSCell_v1370__pucch_SCell_v1370_PR present;
		union PhysicalConfigDedicatedSCell_v1370__pucch_SCell_v1370_u {
			NULL_t	 release;
			struct PhysicalConfigDedicatedSCell_v1370__pucch_SCell_v1370__setup {
				struct PUCCH_ConfigDedicated_v1370	*pucch_ConfigDedicated_v1370;	/* OPTIONAL */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} pucch_SCell_v1370;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhysicalConfigDedicatedSCell_v1370_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PhysicalConfigDedicatedSCell_v1370;
extern asn_SEQUENCE_specifics_t asn_SPC_PhysicalConfigDedicatedSCell_v1370_specs_1;
extern asn_TYPE_member_t asn_MBR_PhysicalConfigDedicatedSCell_v1370_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _PhysicalConfigDedicatedSCell_v1370_H_ */
#include "asn_internal.h"
