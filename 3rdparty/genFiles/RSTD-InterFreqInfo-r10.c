/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asnFiles/36331-f60-ASNfunctions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "RSTD-InterFreqInfo-r10.h"

static int
memb_rstd0_r15_constraint_8(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 79)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_rstd1_r15_constraint_8(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 159)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_rstd2_r15_constraint_8(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 319)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_rstd3_r15_constraint_8(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 639)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_rstd4_r15_constraint_8(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1279)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_rstd5_r15_constraint_8(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 159)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_rstd6_r15_constraint_8(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 319)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_rstd7_r15_constraint_8(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 639)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_rstd8_r15_constraint_8(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1279)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_rstd9_r15_constraint_8(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 319)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_rstd10_r15_constraint_8(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 639)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_rstd11_r15_constraint_8(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1279)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_rstd12_r15_constraint_8(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 319)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_rstd13_r15_constraint_8(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 639)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_rstd14_r15_constraint_8(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1279)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_rstd15_r15_constraint_8(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 639)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_rstd16_r15_constraint_8(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1279)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_rstd17_r15_constraint_8(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 639)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_rstd18_r15_constraint_8(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1279)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_rstd19_r15_constraint_8(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 639)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_rstd20_r15_constraint_8(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1279)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_measPRS_Offset_r10_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 39)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_rstd0_r15_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  79 }	/* (0..79) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_rstd1_r15_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  159 }	/* (0..159) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_rstd2_r15_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  319 }	/* (0..319) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_rstd3_r15_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  639 }	/* (0..639) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_rstd4_r15_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  1279 }	/* (0..1279) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_rstd5_r15_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  159 }	/* (0..159) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_rstd6_r15_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  319 }	/* (0..319) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_rstd7_r15_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  639 }	/* (0..639) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_rstd8_r15_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  1279 }	/* (0..1279) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_rstd9_r15_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  319 }	/* (0..319) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_rstd10_r15_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  639 }	/* (0..639) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_rstd11_r15_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  1279 }	/* (0..1279) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_rstd12_r15_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  319 }	/* (0..319) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_rstd13_r15_constr_22 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  639 }	/* (0..639) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_rstd14_r15_constr_23 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  1279 }	/* (0..1279) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_rstd15_r15_constr_24 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  639 }	/* (0..639) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_rstd16_r15_constr_25 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  1279 }	/* (0..1279) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_rstd17_r15_constr_26 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  639 }	/* (0..639) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_rstd18_r15_constr_27 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  1279 }	/* (0..1279) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_rstd19_r15_constr_28 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  639 }	/* (0..639) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_rstd20_r15_constr_29 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  1279 }	/* (0..1279) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_measPRS_Offset_r15_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  20 }	/* (0..20) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_measPRS_Offset_r10_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  39 }	/* (0..39) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ext1_5[] = {
	{ ATF_POINTER, 1, offsetof(struct RSTD_InterFreqInfo_r10__ext1, carrierFreq_v1090),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA_v9e0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq-v1090"
		},
};
static const int asn_MAP_ext1_oms_5[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* carrierFreq-v1090 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_5 = {
	sizeof(struct RSTD_InterFreqInfo_r10__ext1),
	offsetof(struct RSTD_InterFreqInfo_r10__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_5,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_5,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_5 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_5,
	sizeof(asn_DEF_ext1_tags_5)
		/sizeof(asn_DEF_ext1_tags_5[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_5,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_5)
		/sizeof(asn_DEF_ext1_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_5,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_measPRS_Offset_r15_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RSTD_InterFreqInfo_r10__ext2__measPRS_Offset_r15, choice.rstd0_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_rstd0_r15_constr_9,  memb_rstd0_r15_constraint_8 },
		0, 0, /* No default value */
		"rstd0-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RSTD_InterFreqInfo_r10__ext2__measPRS_Offset_r15, choice.rstd1_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_rstd1_r15_constr_10,  memb_rstd1_r15_constraint_8 },
		0, 0, /* No default value */
		"rstd1-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RSTD_InterFreqInfo_r10__ext2__measPRS_Offset_r15, choice.rstd2_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_rstd2_r15_constr_11,  memb_rstd2_r15_constraint_8 },
		0, 0, /* No default value */
		"rstd2-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RSTD_InterFreqInfo_r10__ext2__measPRS_Offset_r15, choice.rstd3_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_rstd3_r15_constr_12,  memb_rstd3_r15_constraint_8 },
		0, 0, /* No default value */
		"rstd3-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RSTD_InterFreqInfo_r10__ext2__measPRS_Offset_r15, choice.rstd4_r15),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_rstd4_r15_constr_13,  memb_rstd4_r15_constraint_8 },
		0, 0, /* No default value */
		"rstd4-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RSTD_InterFreqInfo_r10__ext2__measPRS_Offset_r15, choice.rstd5_r15),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_rstd5_r15_constr_14,  memb_rstd5_r15_constraint_8 },
		0, 0, /* No default value */
		"rstd5-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RSTD_InterFreqInfo_r10__ext2__measPRS_Offset_r15, choice.rstd6_r15),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_rstd6_r15_constr_15,  memb_rstd6_r15_constraint_8 },
		0, 0, /* No default value */
		"rstd6-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RSTD_InterFreqInfo_r10__ext2__measPRS_Offset_r15, choice.rstd7_r15),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_rstd7_r15_constr_16,  memb_rstd7_r15_constraint_8 },
		0, 0, /* No default value */
		"rstd7-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RSTD_InterFreqInfo_r10__ext2__measPRS_Offset_r15, choice.rstd8_r15),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_rstd8_r15_constr_17,  memb_rstd8_r15_constraint_8 },
		0, 0, /* No default value */
		"rstd8-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RSTD_InterFreqInfo_r10__ext2__measPRS_Offset_r15, choice.rstd9_r15),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_rstd9_r15_constr_18,  memb_rstd9_r15_constraint_8 },
		0, 0, /* No default value */
		"rstd9-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RSTD_InterFreqInfo_r10__ext2__measPRS_Offset_r15, choice.rstd10_r15),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_rstd10_r15_constr_19,  memb_rstd10_r15_constraint_8 },
		0, 0, /* No default value */
		"rstd10-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RSTD_InterFreqInfo_r10__ext2__measPRS_Offset_r15, choice.rstd11_r15),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_rstd11_r15_constr_20,  memb_rstd11_r15_constraint_8 },
		0, 0, /* No default value */
		"rstd11-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RSTD_InterFreqInfo_r10__ext2__measPRS_Offset_r15, choice.rstd12_r15),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_rstd12_r15_constr_21,  memb_rstd12_r15_constraint_8 },
		0, 0, /* No default value */
		"rstd12-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RSTD_InterFreqInfo_r10__ext2__measPRS_Offset_r15, choice.rstd13_r15),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_rstd13_r15_constr_22,  memb_rstd13_r15_constraint_8 },
		0, 0, /* No default value */
		"rstd13-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RSTD_InterFreqInfo_r10__ext2__measPRS_Offset_r15, choice.rstd14_r15),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_rstd14_r15_constr_23,  memb_rstd14_r15_constraint_8 },
		0, 0, /* No default value */
		"rstd14-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RSTD_InterFreqInfo_r10__ext2__measPRS_Offset_r15, choice.rstd15_r15),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_rstd15_r15_constr_24,  memb_rstd15_r15_constraint_8 },
		0, 0, /* No default value */
		"rstd15-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RSTD_InterFreqInfo_r10__ext2__measPRS_Offset_r15, choice.rstd16_r15),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_rstd16_r15_constr_25,  memb_rstd16_r15_constraint_8 },
		0, 0, /* No default value */
		"rstd16-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RSTD_InterFreqInfo_r10__ext2__measPRS_Offset_r15, choice.rstd17_r15),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_rstd17_r15_constr_26,  memb_rstd17_r15_constraint_8 },
		0, 0, /* No default value */
		"rstd17-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RSTD_InterFreqInfo_r10__ext2__measPRS_Offset_r15, choice.rstd18_r15),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_rstd18_r15_constr_27,  memb_rstd18_r15_constraint_8 },
		0, 0, /* No default value */
		"rstd18-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RSTD_InterFreqInfo_r10__ext2__measPRS_Offset_r15, choice.rstd19_r15),
		(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_rstd19_r15_constr_28,  memb_rstd19_r15_constraint_8 },
		0, 0, /* No default value */
		"rstd19-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RSTD_InterFreqInfo_r10__ext2__measPRS_Offset_r15, choice.rstd20_r15),
		(ASN_TAG_CLASS_CONTEXT | (20 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_rstd20_r15_constr_29,  memb_rstd20_r15_constraint_8 },
		0, 0, /* No default value */
		"rstd20-r15"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_measPRS_Offset_r15_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rstd0-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rstd1-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rstd2-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rstd3-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* rstd4-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* rstd5-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* rstd6-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* rstd7-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* rstd8-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* rstd9-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* rstd10-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* rstd11-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* rstd12-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* rstd13-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* rstd14-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* rstd15-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* rstd16-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* rstd17-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 }, /* rstd18-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 19, 0, 0 }, /* rstd19-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 20, 0, 0 } /* rstd20-r15 */
};
static asn_CHOICE_specifics_t asn_SPC_measPRS_Offset_r15_specs_8 = {
	sizeof(struct RSTD_InterFreqInfo_r10__ext2__measPRS_Offset_r15),
	offsetof(struct RSTD_InterFreqInfo_r10__ext2__measPRS_Offset_r15, _asn_ctx),
	offsetof(struct RSTD_InterFreqInfo_r10__ext2__measPRS_Offset_r15, present),
	sizeof(((struct RSTD_InterFreqInfo_r10__ext2__measPRS_Offset_r15 *)0)->present),
	asn_MAP_measPRS_Offset_r15_tag2el_8,
	21,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measPRS_Offset_r15_8 = {
	"measPRS-Offset-r15",
	"measPRS-Offset-r15",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_measPRS_Offset_r15_constr_8, CHOICE_constraint },
	asn_MBR_measPRS_Offset_r15_8,
	21,	/* Elements count */
	&asn_SPC_measPRS_Offset_r15_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_7[] = {
	{ ATF_POINTER, 1, offsetof(struct RSTD_InterFreqInfo_r10__ext2, measPRS_Offset_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_measPRS_Offset_r15_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measPRS-Offset-r15"
		},
};
static const int asn_MAP_ext2_oms_7[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext2_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* measPRS-Offset-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_7 = {
	sizeof(struct RSTD_InterFreqInfo_r10__ext2),
	offsetof(struct RSTD_InterFreqInfo_r10__ext2, _asn_ctx),
	asn_MAP_ext2_tag2el_7,
	1,	/* Count of tags in the map */
	asn_MAP_ext2_oms_7,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext2_7 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_ext2_tags_7,
	sizeof(asn_DEF_ext2_tags_7)
		/sizeof(asn_DEF_ext2_tags_7[0]) - 1, /* 1 */
	asn_DEF_ext2_tags_7,	/* Same as above */
	sizeof(asn_DEF_ext2_tags_7)
		/sizeof(asn_DEF_ext2_tags_7[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext2_7,
	1,	/* Elements count */
	&asn_SPC_ext2_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RSTD_InterFreqInfo_r10_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RSTD_InterFreqInfo_r10, carrierFreq_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RSTD_InterFreqInfo_r10, measPRS_Offset_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_measPRS_Offset_r10_constr_3,  memb_measPRS_Offset_r10_constraint_1 },
		0, 0, /* No default value */
		"measPRS-Offset-r10"
		},
	{ ATF_POINTER, 2, offsetof(struct RSTD_InterFreqInfo_r10, ext1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_ext1_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
	{ ATF_POINTER, 1, offsetof(struct RSTD_InterFreqInfo_r10, ext2),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_ext2_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext2"
		},
};
static const int asn_MAP_RSTD_InterFreqInfo_r10_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_RSTD_InterFreqInfo_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RSTD_InterFreqInfo_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreq-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measPRS-Offset-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ext2 */
};
asn_SEQUENCE_specifics_t asn_SPC_RSTD_InterFreqInfo_r10_specs_1 = {
	sizeof(struct RSTD_InterFreqInfo_r10),
	offsetof(struct RSTD_InterFreqInfo_r10, _asn_ctx),
	asn_MAP_RSTD_InterFreqInfo_r10_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_RSTD_InterFreqInfo_r10_oms_1,	/* Optional members */
	0, 2,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RSTD_InterFreqInfo_r10 = {
	"RSTD-InterFreqInfo-r10",
	"RSTD-InterFreqInfo-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_RSTD_InterFreqInfo_r10_tags_1,
	sizeof(asn_DEF_RSTD_InterFreqInfo_r10_tags_1)
		/sizeof(asn_DEF_RSTD_InterFreqInfo_r10_tags_1[0]), /* 1 */
	asn_DEF_RSTD_InterFreqInfo_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_RSTD_InterFreqInfo_r10_tags_1)
		/sizeof(asn_DEF_RSTD_InterFreqInfo_r10_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RSTD_InterFreqInfo_r10_1,
	4,	/* Elements count */
	&asn_SPC_RSTD_InterFreqInfo_r10_specs_1	/* Additional specs */
};

