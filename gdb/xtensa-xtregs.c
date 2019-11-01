/* Customized table mapping between kernel xtregset and GDB register cache.

   Customer ID=14128; Build=0x7a38c; Copyright (c) 2007-2010 Tensilica Inc.

   Permission is hereby granted, free of charge, to any person obtaining
   a copy of this software and associated documentation files (the
   "Software"), to deal in the Software without restriction, including
   without limitation the rights to use, copy, modify, merge, publish,
   distribute, sublicense, and/or sell copies of the Software, and to
   permit persons to whom the Software is furnished to do so, subject to
   the following conditions:

   The above copyright notice and this permission notice shall be included
   in all copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
   EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
   IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
   CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
   TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
   SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.  */


typedef struct {
  int   gdb_regnum;
  int   gdb_offset;
  int   ptrace_cp_offset;
  int   ptrace_offset;
  int   size;
  int   coproc;
  int   dbnum;
  char* name
;} xtensa_regtable_t;

#define XTENSA_ELF_XTREG_SIZE	3680

const xtensa_regtable_t  xtensa_regmap_table[] = {
  /* gnum,gofs,cpofs,ofs,siz,cp, dbnum,  name */
  {   42, 168,   0,   0,  4, -1, 0x0204, "br" },
  {   43, 172,  32,  32,  4, -1, 0x0300, "bbx_ur_opreg" },
  {   44, 176,  36,  36,  4, -1, 0x0301, "bbx_ur_treg" },
  {   45, 180,  16,  16, 16, -1, 0x1060, "bbx_ur0" },
  {   46, 196,   8,  48,  4,  0, 0x0030, "f0" },
  {   47, 200,  12,  52,  4,  0, 0x0031, "f1" },
  {   48, 204,  16,  56,  4,  0, 0x0032, "f2" },
  {   49, 208,  20,  60,  4,  0, 0x0033, "f3" },
  {   50, 212,  24,  64,  4,  0, 0x0034, "f4" },
  {   51, 216,  28,  68,  4,  0, 0x0035, "f5" },
  {   52, 220,  32,  72,  4,  0, 0x0036, "f6" },
  {   53, 224,  36,  76,  4,  0, 0x0037, "f7" },
  {   54, 228,  40,  80,  4,  0, 0x0038, "f8" },
  {   55, 232,  44,  84,  4,  0, 0x0039, "f9" },
  {   56, 236,  48,  88,  4,  0, 0x003a, "f10" },
  {   57, 240,  52,  92,  4,  0, 0x003b, "f11" },
  {   58, 244,  56,  96,  4,  0, 0x003c, "f12" },
  {   59, 248,  60, 100,  4,  0, 0x003d, "f13" },
  {   60, 252,  64, 104,  4,  0, 0x003e, "f14" },
  {   61, 256,  68, 108,  4,  0, 0x003f, "f15" },
  {   62, 260,   0,  40,  4,  0, 0x03e8, "fcr" },
  {   63, 264,   4,  44,  4,  0, 0x03e9, "fsr" },
  {   64, 268,   0, 128,  4,  1, 0x03f6, "cbegin" },
  {   65, 272,   4, 132,  4,  1, 0x03f7, "cend" },
  {   66, 276,2272,2400, 32,  1, 0x1000, "v0" },
  {   67, 308,2304,2432, 32,  1, 0x1001, "v1" },
  {   68, 340,2336,2464, 32,  1, 0x1002, "v2" },
  {   69, 372,2368,2496, 32,  1, 0x1003, "v3" },
  {   70, 404,2400,2528, 32,  1, 0x1004, "v4" },
  {   71, 436,2432,2560, 32,  1, 0x1005, "v5" },
  {   72, 468,2464,2592, 32,  1, 0x1006, "v6" },
  {   73, 500,2496,2624, 32,  1, 0x1007, "v7" },
  {   74, 532,2528,2656, 32,  1, 0x1008, "v8" },
  {   75, 564,2560,2688, 32,  1, 0x1009, "v9" },
  {   76, 596,2592,2720, 32,  1, 0x100a, "v10" },
  {   77, 628,2624,2752, 32,  1, 0x100b, "v11" },
  {   78, 660,2656,2784, 32,  1, 0x100c, "v12" },
  {   79, 692,2688,2816, 32,  1, 0x100d, "v13" },
  {   80, 724,2720,2848, 32,  1, 0x100e, "v14" },
  {   81, 756,2752,2880, 32,  1, 0x100f, "v15" },
  {   82, 788,2240,2368,  2,  1, 0x1010, "vb0" },
  {   83, 790,2242,2370,  2,  1, 0x1011, "vb1" },
  {   84, 792,2244,2372,  2,  1, 0x1012, "vb2" },
  {   85, 794,2246,2374,  2,  1, 0x1013, "vb3" },
  {   86, 796,2248,2376,  2,  1, 0x1014, "vb4" },
  {   87, 798,2250,2378,  2,  1, 0x1015, "vb5" },
  {   88, 800,2252,2380,  2,  1, 0x1016, "vb6" },
  {   89, 802,2254,2382,  2,  1, 0x1017, "vb7" },
  {   90, 804,2784,2912, 32,  1, 0x1018, "s0" },
  {   91, 836,2816,2944, 32,  1, 0x1019, "s1" },
  {   92, 868,2848,2976, 32,  1, 0x101a, "s2" },
  {   93, 900,2880,3008, 32,  1, 0x101b, "s3" },
  {   94, 932,2912,3040, 32,  1, 0x101c, "s4" },
  {   95, 964,2944,3072, 32,  1, 0x101d, "s5" },
  {   96, 996,2976,3104, 32,  1, 0x101e, "s6" },
  {   97,1028,3008,3136, 32,  1, 0x101f, "s7" },
  {   98,1060,2112,2240, 32,  1, 0x1020, "u0" },
  {   99,1092,2144,2272, 32,  1, 0x1021, "u1" },
  {  100,1124,2176,2304, 32,  1, 0x1022, "u2" },
  {  101,1156,2208,2336, 32,  1, 0x1023, "u3" },
  {  102,1188,3040,3168,128,  1, 0x1024, "wv0" },
  {  103,1316,3168,3296,128,  1, 0x1025, "wv1" },
  {  104,1444,3296,3424,128,  1, 0x1026, "wv2" },
  {  105,1572,3424,3552,128,  1, 0x1027, "wv3" },
  {  106,1700,  64, 192, 64,  1, 0x1040, "lvec0" },
  {  107,1764, 128, 256, 64,  1, 0x1041, "lvec1" },
  {  108,1828, 192, 320, 64,  1, 0x1042, "lvec2" },
  {  109,1892, 256, 384, 64,  1, 0x1043, "lvec3" },
  {  110,1956, 320, 448, 64,  1, 0x1044, "lvec4" },
  {  111,2020, 384, 512, 64,  1, 0x1045, "lvec5" },
  {  112,2084, 448, 576, 64,  1, 0x1046, "lvec6" },
  {  113,2148, 512, 640, 64,  1, 0x1047, "lvec7" },
  {  114,2212, 576, 704, 64,  1, 0x1048, "lvec8" },
  {  115,2276, 640, 768, 64,  1, 0x1049, "lvec9" },
  {  116,2340, 704, 832, 64,  1, 0x104a, "lvec10" },
  {  117,2404, 768, 896, 64,  1, 0x104b, "lvec11" },
  {  118,2468, 832, 960, 64,  1, 0x104c, "lvec12" },
  {  119,2532, 896,1024, 64,  1, 0x104d, "lvec13" },
  {  120,2596, 960,1088, 64,  1, 0x104e, "lvec14" },
  {  121,2660,1024,1152, 64,  1, 0x104f, "lvec15" },
  {  122,2724,1088,1216, 64,  1, 0x1050, "lvec16" },
  {  123,2788,1152,1280, 64,  1, 0x1051, "lvec17" },
  {  124,2852,1216,1344, 64,  1, 0x1052, "lvec18" },
  {  125,2916,1280,1408, 64,  1, 0x1053, "lvec19" },
  {  126,2980,1344,1472, 64,  1, 0x1054, "lvec20" },
  {  127,3044,1408,1536, 64,  1, 0x1055, "lvec21" },
  {  128,3108,1472,1600, 64,  1, 0x1056, "lvec22" },
  {  129,3172,1536,1664, 64,  1, 0x1057, "lvec23" },
  {  130,3236,1600,1728, 64,  1, 0x1058, "lvec24" },
  {  131,3300,1664,1792, 64,  1, 0x1059, "lvec25" },
  {  132,3364,1728,1856, 64,  1, 0x105a, "lvec26" },
  {  133,3428,1792,1920, 64,  1, 0x105b, "lvec27" },
  {  134,3492,1856,1984, 64,  1, 0x105c, "lvec28" },
  {  135,3556,1920,2048, 64,  1, 0x105d, "lvec29" },
  {  136,3620,1984,2112, 64,  1, 0x105e, "lvec30" },
  {  137,3684,2048,2176, 64,  1, 0x105f, "lvec31" },
  { 0 }
};

