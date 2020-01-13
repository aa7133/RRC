/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "P-Max.h"

int
P_Max_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -30 && value <= 33)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeInteger,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_P_Max_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6, -30,  33 }	/* (-30..33) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_P_Max_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
asn_TYPE_descriptor_t asn_DEF_P_Max = {
	"P-Max",
	"P-Max",
	&asn_OP_NativeInteger,
	asn_DEF_P_Max_tags_1,
	sizeof(asn_DEF_P_Max_tags_1)
		/sizeof(asn_DEF_P_Max_tags_1[0]), /* 1 */
	asn_DEF_P_Max_tags_1,	/* Same as above */
	sizeof(asn_DEF_P_Max_tags_1)
		/sizeof(asn_DEF_P_Max_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_P_Max_constr_1, P_Max_constraint },
	0, 0,	/* No members */
	0	/* No specifics */
};

