/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_PhysCellIdRangeUTRA_FDD_r9_H_
#define	_PhysCellIdRangeUTRA_FDD_r9_H_


#include "asn_application.h"

/* Including external dependencies */
#include "PhysCellIdUTRA-FDD.h"
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PhysCellIdRangeUTRA-FDD-r9 */
typedef struct PhysCellIdRangeUTRA_FDD_r9 {
	PhysCellIdUTRA_FDD_t	 start_r9;
	long	*range_r9;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhysCellIdRangeUTRA_FDD_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PhysCellIdRangeUTRA_FDD_r9;
extern asn_SEQUENCE_specifics_t asn_SPC_PhysCellIdRangeUTRA_FDD_r9_specs_1;
extern asn_TYPE_member_t asn_MBR_PhysCellIdRangeUTRA_FDD_r9_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PhysCellIdRangeUTRA_FDD_r9_H_ */
#include "asn_internal.h"