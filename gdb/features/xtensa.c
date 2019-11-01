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
	struct tdesc_type *type;

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

	tdesc_xtensa = result;
}
