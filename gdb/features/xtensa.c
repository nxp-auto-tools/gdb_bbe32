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

	feature = tdesc_create_feature(result, "dspbbe32-general-regs");
	tdesc_create_reg(feature, "a0", 0, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "a1", 1, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "a2", 2, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "a3", 3, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "a4", 4, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "a5", 5, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "a6", 6, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "a7", 7, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "a8", 8, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "a9", 9, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "a10", 10, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "a11", 11, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "a12", 12, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "a13", 13, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "a14", 14, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "a15", 15, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar0", 16, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar1", 17, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar2", 18, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar3", 19, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar4", 20, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar5", 21, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar6", 22, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar7", 23, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar8", 24, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar9", 25, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar10", 26, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar11", 27, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar12", 28, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar13", 29, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar14", 30, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar15", 31, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar16", 32, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar17", 33, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar18", 34, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar19", 35, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar20", 36, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar21", 37, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar22", 38, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar23", 39, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar24", 40, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar25", 41, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar26", 42, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar27", 43, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar28", 44, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar29", 45, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar30", 46, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ar31", 47, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "pc", 48, 1, NULL, 32, "uint32");
	tdesc_create_reg(feature, "ps", 49, 1, NULL, 32, "uint32");

	tdesc_xtensa = result;
}
