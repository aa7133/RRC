/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -D.`
 */

#ifndef	_SystemInformation_r8_IEs_H_
#define	_SystemInformation_r8_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR {
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_NOTHING,	/* No components present */
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib2,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib3,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib4,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib5,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib6,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib7,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib8,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib9,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib10,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib11,
	/* Extensions may appear below */
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib12_v920,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib13_v920,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib14_v1130,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib15_v1130,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib16_v1130,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib17_v1250,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib18_v1250,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib19_v1250,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib20_v1310,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib21_v1430,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib24_v1530,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib25_v1530,
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR_sib26_v1530
} SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR;

/* Forward declarations */
struct SystemInformation_v8a0_IEs;
struct SystemInformationBlockType2;
struct SystemInformationBlockType3;
struct SystemInformationBlockType4;
struct SystemInformationBlockType5;
struct SystemInformationBlockType6;
struct SystemInformationBlockType7;
struct SystemInformationBlockType8;
struct SystemInformationBlockType9;
struct SystemInformationBlockType10;
struct SystemInformationBlockType11;
struct SystemInformationBlockType12_r9;
struct SystemInformationBlockType13_r9;
struct SystemInformationBlockType14_r11;
struct SystemInformationBlockType15_r11;
struct SystemInformationBlockType16_r11;
struct SystemInformationBlockType17_r12;
struct SystemInformationBlockType18_r12;
struct SystemInformationBlockType19_r12;
struct SystemInformationBlockType20_r13;
struct SystemInformationBlockType21_r14;
struct SystemInformationBlockType24_r15;
struct SystemInformationBlockType25_r15;
struct SystemInformationBlockType26_r15;

/* Forward definitions */
typedef struct SystemInformation_r8_IEs__sib_TypeAndInfo__Member {
	SystemInformation_r8_IEs__sib_TypeAndInfo__Member_PR present;
	union SystemInformation_r8_IEs__sib_TypeAndInfo__Member_u {
		struct SystemInformationBlockType2	*sib2;
		struct SystemInformationBlockType3	*sib3;
		struct SystemInformationBlockType4	*sib4;
		struct SystemInformationBlockType5	*sib5;
		struct SystemInformationBlockType6	*sib6;
		struct SystemInformationBlockType7	*sib7;
		struct SystemInformationBlockType8	*sib8;
		struct SystemInformationBlockType9	*sib9;
		struct SystemInformationBlockType10	*sib10;
		struct SystemInformationBlockType11	*sib11;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		struct SystemInformationBlockType12_r9	*sib12_v920;
		struct SystemInformationBlockType13_r9	*sib13_v920;
		struct SystemInformationBlockType14_r11	*sib14_v1130;
		struct SystemInformationBlockType15_r11	*sib15_v1130;
		struct SystemInformationBlockType16_r11	*sib16_v1130;
		struct SystemInformationBlockType17_r12	*sib17_v1250;
		struct SystemInformationBlockType18_r12	*sib18_v1250;
		struct SystemInformationBlockType19_r12	*sib19_v1250;
		struct SystemInformationBlockType20_r13	*sib20_v1310;
		struct SystemInformationBlockType21_r14	*sib21_v1430;
		struct SystemInformationBlockType24_r15	*sib24_v1530;
		struct SystemInformationBlockType25_r15	*sib25_v1530;
		struct SystemInformationBlockType26_r15	*sib26_v1530;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformation_r8_IEs__sib_TypeAndInfo__Member;

/* SystemInformation-r8-IEs */
typedef struct SystemInformation_r8_IEs {
	struct SystemInformation_r8_IEs__sib_TypeAndInfo {
		A_SEQUENCE_OF(SystemInformation_r8_IEs__sib_TypeAndInfo__Member) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} sib_TypeAndInfo;
	struct SystemInformation_v8a0_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformation_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformation_r8_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformation_r8_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformation_r8_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformation_r8_IEs_H_ */
#include "asn_internal.h"
