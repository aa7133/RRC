/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_SPUCCH_Elements_r15_H_
#define	_SPUCCH_Elements_r15_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NULL.h"
#include "NativeInteger.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SPUCCH_Elements_r15_PR {
	SPUCCH_Elements_r15_PR_NOTHING,	/* No components present */
	SPUCCH_Elements_r15_PR_release,
	SPUCCH_Elements_r15_PR_setup
} SPUCCH_Elements_r15_PR;

/* Forward declarations */
struct N4SPUCCH_Resource_r15;

/* SPUCCH-Elements-r15 */
typedef struct SPUCCH_Elements_r15 {
	SPUCCH_Elements_r15_PR present;
	union SPUCCH_Elements_r15_u {
		NULL_t	 release;
		struct SPUCCH_Elements_r15__setup {
			struct SPUCCH_Elements_r15__setup__n1SubslotSPUCCH_AN_List_r15 {
				A_SEQUENCE_OF(long) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *n1SubslotSPUCCH_AN_List_r15;
			long	*n1SlotSPUCCH_FH_AN_List_r15;	/* OPTIONAL */
			long	*n1SlotSPUCCH_NoFH_AN_List_r15;	/* OPTIONAL */
			long	*n3SPUCCH_AN_List_r15;	/* OPTIONAL */
			struct SPUCCH_Elements_r15__setup__n4SPUCCHSlot_Resource_r15 {
				A_SEQUENCE_OF(struct N4SPUCCH_Resource_r15) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *n4SPUCCHSlot_Resource_r15;
			struct SPUCCH_Elements_r15__setup__n4SPUCCHSubslot_Resource_r15 {
				A_SEQUENCE_OF(struct N4SPUCCH_Resource_r15) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *n4SPUCCHSubslot_Resource_r15;
			long	*n4maxCoderateSlotPUCCH_r15;	/* OPTIONAL */
			long	*n4maxCoderateSubslotPUCCH_r15;	/* OPTIONAL */
			long	*n4maxCoderateMultiResourceSlotPUCCH_r15;	/* OPTIONAL */
			long	*n4maxCoderateMultiResourceSubslotPUCCH_r15;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SPUCCH_Elements_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SPUCCH_Elements_r15;
extern asn_CHOICE_specifics_t asn_SPC_SPUCCH_Elements_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_SPUCCH_Elements_r15_1[2];
extern asn_per_constraints_t asn_PER_type_SPUCCH_Elements_r15_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SPUCCH_Elements_r15_H_ */
#include "asn_internal.h"
