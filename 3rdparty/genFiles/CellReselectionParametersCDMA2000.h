/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_CellReselectionParametersCDMA2000_H_
#define	_CellReselectionParametersCDMA2000_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BandClassListCDMA2000.h"
#include "NeighCellListCDMA2000.h"
#include "T-Reselection.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SpeedStateScaleFactors;

/* CellReselectionParametersCDMA2000 */
typedef struct CellReselectionParametersCDMA2000 {
	BandClassListCDMA2000_t	 bandClassList;
	NeighCellListCDMA2000_t	 neighCellList;
	T_Reselection_t	 t_ReselectionCDMA2000;
	struct SpeedStateScaleFactors	*t_ReselectionCDMA2000_SF;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellReselectionParametersCDMA2000_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellReselectionParametersCDMA2000;
extern asn_SEQUENCE_specifics_t asn_SPC_CellReselectionParametersCDMA2000_specs_1;
extern asn_TYPE_member_t asn_MBR_CellReselectionParametersCDMA2000_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _CellReselectionParametersCDMA2000_H_ */
#include "asn_internal.h"
