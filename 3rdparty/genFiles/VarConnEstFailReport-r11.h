/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_VarConnEstFailReport_r11_H_
#define	_VarConnEstFailReport_r11_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ConnEstFailReport-r11.h"
#include "PLMN-Identity.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* VarConnEstFailReport-r11 */
typedef struct VarConnEstFailReport_r11 {
	ConnEstFailReport_r11_t	 connEstFailReport_r11;
	PLMN_Identity_t	 plmn_Identity_r11;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VarConnEstFailReport_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VarConnEstFailReport_r11;

#ifdef __cplusplus
}
#endif

#endif	/* _VarConnEstFailReport_r11_H_ */
#include "asn_internal.h"
