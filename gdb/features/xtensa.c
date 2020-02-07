/* THIS FILE IS GENERATED.  -*- buffer-read-only: t -*- vi:set ro:
 Original: xtensa.xml */

#include "defs.h"
#include "osabi.h"
#include "target-descriptions.h"

struct target_desc *tdesc_xtensa;
static void initialize_tdesc_xtensa(void) {
	struct target_desc *result = allocate_target_description();
	struct tdesc_feature *feature;
	struct tdesc_type *field_type;

	set_tdesc_architecture(result, bfd_scan_arch("xtensa"));

	feature = tdesc_create_feature(result, "dspbbe32-debug-regs");
	tdesc_create_reg(feature, "pc", 0, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "traxid", 1, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "traxctrl", 2, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "traxstat", 3, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "traxdata", 4, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "traxaddr", 5, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "triggerpc", 6, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "pcmatchctrl", 7, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "delaycnt", 8, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "memaddrstart", 9, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "memaddrend", 10, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "pmg", 11, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "intpc", 12, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "pm0", 13, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "pm1", 14, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "pm2", 15, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "pm3", 16, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "pm4", 17, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "pm5", 18, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "pm6", 19, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "pm7", 20, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "pmctrl0", 21, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "pmctrl1", 22, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "pmctrl2", 23, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "pmctrl3", 24, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "pmctrl4", 25, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "pmctrl5", 26, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "pmctrl6", 27, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "pmctrl7", 28, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "pmstat0", 29, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "pmstat1", 30, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "pmstat2", 31, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "pmstat3", 32, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "pmstat4", 33, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "pmstat5", 34, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "pmstat6", 35, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "pmstat7", 36, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ocid", 37, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "dcrclr", 38, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "dcrset", 39, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "dsr", 40, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ddr", 41, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "pwrstl", 42, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "pwrstat", 43, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "eristat", 44, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "itctrl", 45, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "clamset", 46, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "clamclr", 47, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "lockaccess", 48, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "lockstatus", 49, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "authstatus", 50, 1, NULL, 32, "uint32");


	feature = tdesc_create_feature(result, "dspbbe32-general-regs");
	tdesc_create_reg(feature, "a0", 51, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "a1", 52, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "a2", 53, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "a3", 54, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "a4", 55, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "a5", 56, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "a6", 57, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "a7", 58, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "a8", 59, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "a9", 60, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "a10", 61, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "a11", 62, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "a12", 63, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "a13", 64, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "a14", 65, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "a15", 66, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar0", 67, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar1", 68, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar2", 69, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar3", 70, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar4", 71, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar5", 72, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar6", 73, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar7", 74, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar8", 75, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar9", 76, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar10", 77, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar11", 78, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar12", 79, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar13", 80, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar14", 81, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar15", 82, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar16", 83, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar17", 84, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar18", 85, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar19", 86, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar20", 87, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar21", 88, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar22", 89, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar23", 90, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar24", 91, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar25", 92, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar26", 93, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar27", 94, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar28", 95, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar29", 96, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar30", 97, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar31", 98, 1, NULL, 32, "uint32");

	feature = tdesc_create_feature(result, "dspbbe32-special-regs");
	tdesc_create_reg(feature, "lbeg", 99, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "lend", 100, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "lcount", 101, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "sar", 102, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "br", 103, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "windowbase", 104, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "windowstart", 105, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "mmid", 106, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "mpuenb", 107, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "eraccess", 108, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "cacheadrdis", 109, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ibreakenable", 110, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "memctl", 111, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "atomctl", 112, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "mepc", 113, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "meps", 114, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "mesave", 115, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "mesr", 116, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "mecr", 117, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "mevaddr", 118, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ibreaka0", 119, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ibreaka1", 120, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "dbreaka0", 121, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "dbreaka1", 122, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "dbreakc0", 123, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "dbreakc1", 124, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "epc1", 125, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "epc2", 126, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "depc", 127, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "eps2", 128, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "excsave1", 129, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "excsave2", 130, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "cpenable", 131, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "interrupt", 132, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "intset", 133, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "intclear", 134, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "intenable", 135, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ps", 136, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "vecbase", 137, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "exccause", 138, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "debugcause", 139, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ccount", 140, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "prid", 141, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "icount", 142, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "icountlevel", 143, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "excvaddr", 144, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ccompare0", 145, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "misc0", 146, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "misc1", 147, 1, NULL, 32, "uint32");


	feature = tdesc_create_feature(result, "dspbbe32-float-regs");
	tdesc_create_reg(feature, "fr0", 148, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "fr1", 149, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "fr2", 150, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "fr3", 151, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "fr4", 152, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "fr5", 153, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "fr6", 154, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "fr7", 155, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "fr8", 156, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "fr9", 157, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "fr10", 158, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "fr11", 159, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "fr12", 160, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "fr13", 161, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "fr14", 162, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "fr15", 163, 1, NULL, 32, "uint32");

	feature = tdesc_create_feature(result, "dspbbe32-user-regs");
	tdesc_create_reg(feature, "fcr", 164, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "fsr", 165, 1, NULL, 32, "uint32");

	feature = tdesc_create_feature(result, "dspbbe32-vec-regs");

	field_type = tdesc_named_type (feature, "uint256");
	tdesc_create_vector (feature, "vec", field_type, 1);
	tdesc_create_union (feature, "vec_size");

	field_type = tdesc_named_type (feature, "uint1024");
	tdesc_create_vector (feature, "wvec", field_type, 1);
	tdesc_create_union (feature, "wvec_size");

	tdesc_create_reg(feature, "vec0", 166, 1, NULL, 256, "vec_size");
	tdesc_create_reg(feature, "vec1", 167, 1, NULL, 256, "vec_size");
	tdesc_create_reg(feature, "vec2", 168, 1, NULL, 256, "vec_size");
	tdesc_create_reg(feature, "vec3", 169, 1, NULL, 256, "vec_size");
	tdesc_create_reg(feature, "vec4", 170, 1, NULL, 256, "vec_size");
	tdesc_create_reg(feature, "vec5", 171, 1, NULL, 256, "vec_size");
	tdesc_create_reg(feature, "vec6", 172, 1, NULL, 256, "vec_size");
	tdesc_create_reg(feature, "vec7", 173, 1, NULL, 256, "vec_size");
	tdesc_create_reg(feature, "vec8", 174, 1, NULL, 256, "vec_size");
	tdesc_create_reg(feature, "vec9", 175, 1, NULL, 256, "vec_size");
	tdesc_create_reg(feature, "vec10", 176, 1, NULL, 256, "vec_size");
	tdesc_create_reg(feature, "vec11", 177, 1, NULL, 256, "vec_size");
	tdesc_create_reg(feature, "vec12", 178, 1, NULL, 256, "vec_size");
	tdesc_create_reg(feature, "vec13", 179, 1, NULL, 256, "vec_size");
	tdesc_create_reg(feature, "vec14", 180, 1, NULL, 256, "vec_size");
	tdesc_create_reg(feature, "vec15", 181, 1, NULL, 256, "vec_size");
	tdesc_create_reg(feature, "wvec0", 182, 1, NULL, 1024, "wvec_size");
	tdesc_create_reg(feature, "wvec1", 183, 1, NULL, 1024, "wvec_size");
	tdesc_create_reg(feature, "wvec2", 184, 1, NULL, 1024, "wvec_size");
	tdesc_create_reg(feature, "wvec3", 185, 1, NULL, 1024, "wvec_size");

	feature = tdesc_create_feature(result, "dspbbe32-valign-regs");

	field_type = tdesc_named_type (feature, "uint256");
	tdesc_create_vector (feature, "valign", field_type, 1);
	tdesc_create_union (feature, "valign_size");

	tdesc_create_reg(feature, "valign0", 186, 1, NULL, 256, "valign_size");
	tdesc_create_reg(feature, "valign1", 187, 1, NULL, 256, "valign_size");
	tdesc_create_reg(feature, "valign2", 188, 1, NULL, 256, "valign_size");
	tdesc_create_reg(feature, "valign3", 189, 1, NULL, 256, "valign_size");

	feature = tdesc_create_feature(result, "dspbbe32-vbool-regs");

	tdesc_create_reg(feature, "vbool0", 190, 1, NULL, 16, "uint16");
	tdesc_create_reg(feature, "vbool1", 191, 1, NULL, 16, "uint16");
	tdesc_create_reg(feature, "vbool2", 192, 1, NULL, 16, "uint16");
	tdesc_create_reg(feature, "vbool3", 193, 1, NULL, 16, "uint16");
	tdesc_create_reg(feature, "vbool4", 194, 1, NULL, 16, "uint16");
	tdesc_create_reg(feature, "vbool5", 195, 1, NULL, 16, "uint16");
	tdesc_create_reg(feature, "vbool6", 196, 1, NULL, 16, "uint16");
	tdesc_create_reg(feature, "vbool7", 197, 1, NULL, 16, "uint16");

	feature = tdesc_create_feature(result, "dspbbe32-lvec-regs1");

	field_type = tdesc_named_type (feature, "uint512");
	tdesc_create_vector (feature, "lvec", field_type, 1);
	tdesc_create_union (feature, "lvec_size");

	tdesc_create_reg(feature, "lvec0", 198, 1, NULL, 512, "lvec_size");
	tdesc_create_reg(feature, "lvec1", 199, 1, NULL, 512, "lvec_size");
	tdesc_create_reg(feature, "lvec2", 200, 1, NULL, 512, "lvec_size");
	tdesc_create_reg(feature, "lvec3", 201, 1, NULL, 512, "lvec_size");
	tdesc_create_reg(feature, "lvec4", 202, 1, NULL, 512, "lvec_size");
	tdesc_create_reg(feature, "lvec5", 203, 1, NULL, 512, "lvec_size");
	tdesc_create_reg(feature, "lvec6", 204, 1, NULL, 512, "lvec_size");
	tdesc_create_reg(feature, "lvec7", 205, 1, NULL, 512, "lvec_size");
	tdesc_create_reg(feature, "lvec8", 206, 1, NULL, 512, "lvec_size");
	tdesc_create_reg(feature, "lvec9", 207, 1, NULL, 512, "lvec_size");
	tdesc_create_reg(feature, "lvec10", 208, 1, NULL, 512, "lvec_size");
	tdesc_create_reg(feature, "lvec11", 209, 1, NULL, 512, "lvec_size");
	tdesc_create_reg(feature, "lvec12", 210, 1, NULL, 512, "lvec_size");
	tdesc_create_reg(feature, "lvec13", 211, 1, NULL, 512, "lvec_size");
	tdesc_create_reg(feature, "lvec14", 212, 1, NULL, 512, "lvec_size");
	tdesc_create_reg(feature, "lvec15", 213, 1, NULL, 512, "lvec_size");

	feature = tdesc_create_feature(result, "dspbbe32-lvec-regs2");

	field_type = tdesc_named_type(feature, "uint512");
	tdesc_create_vector(feature, "lvec", field_type, 1);
	tdesc_create_union(feature, "lvec_size");

	tdesc_create_reg(feature, "lvec16", 214, 1, NULL, 512, "lvec_size");
	tdesc_create_reg(feature, "lvec17", 215, 1, NULL, 512, "lvec_size");
	tdesc_create_reg(feature, "lvec18", 216, 1, NULL, 512, "lvec_size");
	tdesc_create_reg(feature, "lvec19", 217, 1, NULL, 512, "lvec_size");
	tdesc_create_reg(feature, "lvec20", 218, 1, NULL, 512, "lvec_size");
	tdesc_create_reg(feature, "lvec21", 219, 1, NULL, 512, "lvec_size");
	tdesc_create_reg(feature, "lvec22", 220, 1, NULL, 512, "lvec_size");
	tdesc_create_reg(feature, "lvec23", 221, 1, NULL, 512, "lvec_size");
	tdesc_create_reg(feature, "lvec24", 222, 1, NULL, 512, "lvec_size");
	tdesc_create_reg(feature, "lvec25", 223, 1, NULL, 512, "lvec_size");
	tdesc_create_reg(feature, "lvec26", 224, 1, NULL, 512, "lvec_size");
	tdesc_create_reg(feature, "lvec27", 225, 1, NULL, 512, "lvec_size");
	tdesc_create_reg(feature, "lvec28", 226, 1, NULL, 512, "lvec_size");
	tdesc_create_reg(feature, "lvec29", 227, 1, NULL, 512, "lvec_size");
	tdesc_create_reg(feature, "lvec30", 228, 1, NULL, 512, "lvec_size");
	tdesc_create_reg(feature, "lvec31", 229, 1, NULL, 512, "lvec_size");

	feature = tdesc_create_feature(result, "dspbbe32-vsa-regs");

	tdesc_create_reg(feature, "vsa0", 230, 1, NULL, 128, "uint128");
	tdesc_create_reg(feature, "vsa1", 231, 1, NULL, 128, "uint128");
	tdesc_create_reg(feature, "vsa2", 232, 1, NULL, 128, "uint128");
	tdesc_create_reg(feature, "vsa3", 233, 1, NULL, 128, "uint128");
	tdesc_create_reg(feature, "vsa4", 234, 1, NULL, 128, "uint128");
	tdesc_create_reg(feature, "vsa5", 235, 1, NULL, 128, "uint128");
	tdesc_create_reg(feature, "vsa6", 236, 1, NULL, 128, "uint128");
	tdesc_create_reg(feature, "vsa7", 237, 1, NULL, 128, "uint128");

	tdesc_xtensa = result;
}
