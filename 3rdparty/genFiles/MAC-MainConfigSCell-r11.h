/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_MAC_MainConfigSCell_r11_H_
#define	_MAC_MainConfigSCell_r11_H_


#include "asn_application.h"

/* Including external dependencies */
#include "STAG-Id-r11.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MAC-MainConfigSCell-r11 */
typedef struct MAC_MainConfigSCell_r11 {
	STAG_Id_r11_t	*stag_Id_r11;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MAC_MainConfigSCell_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MAC_MainConfigSCell_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_MAC_MainConfigSCell_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_MAC_MainConfigSCell_r11_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _MAC_MainConfigSCell_r11_H_ */
#include "asn_internal.h"
