/*
 * Copyright © 2007 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 *
 * Authors:
 *    Eric Anholt <eric@anholt.net>
 *
 */

#ifndef _INTEL_CHIPSET_H
#define _INTEL_CHIPSET_H

struct pci_device *intel_get_pci_device(void);
uint32_t intel_get_drm_devid(int fd);
int intel_gen(uint32_t devid);

extern enum pch_type intel_pch;

enum pch_type {
	PCH_NONE,
	PCH_IBX,
	PCH_CPT,
	PCH_LPT,
};

void intel_check_pch(void);

#define HAS_IBX (intel_pch == PCH_IBX)
#define HAS_CPT (intel_pch == PCH_CPT)
#define HAS_LPT (intel_pch == PCH_LPT)

/* Exclude chipset #defines, they just add noise */
#ifndef __GTK_DOC_IGNORE__

#define PCI_CHIP_I810			0x7121
#define PCI_CHIP_I810_DC100		0x7123
#define PCI_CHIP_I810_E			0x7125
#define PCI_CHIP_I815			0x1132

#define PCI_CHIP_I830_M			0x3577
#define PCI_CHIP_845_G			0x2562
#define PCI_CHIP_I854_G			0x358e
#define PCI_CHIP_I855_GM		0x3582
#define PCI_CHIP_I865_G			0x2572

#define PCI_CHIP_I915_G			0x2582
#define PCI_CHIP_E7221_G		0x258A
#define PCI_CHIP_I915_GM		0x2592
#define PCI_CHIP_I945_G			0x2772
#define PCI_CHIP_I945_GM		0x27A2
#define PCI_CHIP_I945_GME		0x27AE

#define PCI_CHIP_Q35_G			0x29B2
#define PCI_CHIP_G33_G			0x29C2
#define PCI_CHIP_Q33_G			0x29D2

#define PCI_CHIP_IGD_GM			0xA011
#define PCI_CHIP_IGD_G			0xA001

#define IS_IGDGM(devid)		((devid) == PCI_CHIP_IGD_GM)
#define IS_IGDG(devid)		((devid) == PCI_CHIP_IGD_G)
#define IS_IGD(devid)		(IS_IGDG(devid) || IS_IGDGM(devid))

#define PCI_CHIP_I965_G			0x29A2
#define PCI_CHIP_I965_Q			0x2992
#define PCI_CHIP_I965_G_1		0x2982
#define PCI_CHIP_I946_GZ		0x2972
#define PCI_CHIP_I965_GM		0x2A02
#define PCI_CHIP_I965_GME		0x2A12

#define PCI_CHIP_GM45_GM		0x2A42

#define PCI_CHIP_IGD_E_G		0x2E02
#define PCI_CHIP_Q45_G			0x2E12
#define PCI_CHIP_G45_G			0x2E22
#define PCI_CHIP_G41_G			0x2E32

#define PCI_CHIP_ILD_G			0x0042
#define PCI_CHIP_ILM_G			0x0046

#define PCI_CHIP_SANDYBRIDGE_GT1	0x0102 /* desktop */
#define PCI_CHIP_SANDYBRIDGE_GT2	0x0112
#define PCI_CHIP_SANDYBRIDGE_GT2_PLUS	0x0122
#define PCI_CHIP_SANDYBRIDGE_M_GT1	0x0106 /* mobile */
#define PCI_CHIP_SANDYBRIDGE_M_GT2	0x0116
#define PCI_CHIP_SANDYBRIDGE_M_GT2_PLUS	0x0126
#define PCI_CHIP_SANDYBRIDGE_S		0x010A /* server */

#define PCI_CHIP_IVYBRIDGE_GT1		0x0152 /* desktop */
#define PCI_CHIP_IVYBRIDGE_GT2		0x0162
#define PCI_CHIP_IVYBRIDGE_M_GT1	0x0156 /* mobile */
#define PCI_CHIP_IVYBRIDGE_M_GT2	0x0166
#define PCI_CHIP_IVYBRIDGE_S		0x015a /* server */
#define PCI_CHIP_IVYBRIDGE_S_GT2	0x016a /* server */

#define PCI_CHIP_HASWELL_GT1		0x0402 /* Desktop */
#define PCI_CHIP_HASWELL_GT2		0x0412
#define PCI_CHIP_HASWELL_GT3		0x0422
#define PCI_CHIP_HASWELL_M_GT1		0x0406 /* Mobile */
#define PCI_CHIP_HASWELL_M_GT2		0x0416
#define PCI_CHIP_HASWELL_M_GT3		0x0426
#define PCI_CHIP_HASWELL_S_GT1		0x040A /* Server */
#define PCI_CHIP_HASWELL_S_GT2		0x041A
#define PCI_CHIP_HASWELL_S_GT3		0x042A
#define PCI_CHIP_HASWELL_B_GT1		0x040B /* Reserved */
#define PCI_CHIP_HASWELL_B_GT2		0x041B
#define PCI_CHIP_HASWELL_B_GT3		0x042B
#define PCI_CHIP_HASWELL_E_GT1		0x040E /* Reserved */
#define PCI_CHIP_HASWELL_E_GT2		0x041E
#define PCI_CHIP_HASWELL_E_GT3		0x042E
#define PCI_CHIP_HASWELL_SDV_GT1	0x0C02 /* Desktop */
#define PCI_CHIP_HASWELL_SDV_GT2	0x0C12
#define PCI_CHIP_HASWELL_SDV_GT3	0x0C22
#define PCI_CHIP_HASWELL_SDV_M_GT1	0x0C06 /* Mobile */
#define PCI_CHIP_HASWELL_SDV_M_GT2	0x0C16
#define PCI_CHIP_HASWELL_SDV_M_GT3	0x0C26
#define PCI_CHIP_HASWELL_SDV_S_GT1	0x0C0A /* Server */
#define PCI_CHIP_HASWELL_SDV_S_GT2	0x0C1A
#define PCI_CHIP_HASWELL_SDV_S_GT3	0x0C2A
#define PCI_CHIP_HASWELL_SDV_B_GT1	0x0C0B /* Reserved */
#define PCI_CHIP_HASWELL_SDV_B_GT2	0x0C1B
#define PCI_CHIP_HASWELL_SDV_B_GT3	0x0C2B
#define PCI_CHIP_HASWELL_SDV_E_GT1	0x0C0E /* Reserved */
#define PCI_CHIP_HASWELL_SDV_E_GT2	0x0C1E
#define PCI_CHIP_HASWELL_SDV_E_GT3	0x0C2E
#define PCI_CHIP_HASWELL_ULT_GT1	0x0A02 /* Desktop */
#define PCI_CHIP_HASWELL_ULT_GT2	0x0A12
#define PCI_CHIP_HASWELL_ULT_GT3	0x0A22
#define PCI_CHIP_HASWELL_ULT_M_GT1	0x0A06 /* Mobile */
#define PCI_CHIP_HASWELL_ULT_M_GT2	0x0A16
#define PCI_CHIP_HASWELL_ULT_M_GT3	0x0A26
#define PCI_CHIP_HASWELL_ULT_S_GT1	0x0A0A /* Server */
#define PCI_CHIP_HASWELL_ULT_S_GT2	0x0A1A
#define PCI_CHIP_HASWELL_ULT_S_GT3	0x0A2A
#define PCI_CHIP_HASWELL_ULT_B_GT1	0x0A0B /* Reserved */
#define PCI_CHIP_HASWELL_ULT_B_GT2	0x0A1B
#define PCI_CHIP_HASWELL_ULT_B_GT3	0x0A2B
#define PCI_CHIP_HASWELL_ULT_E_GT1	0x0A0E /* Reserved */
#define PCI_CHIP_HASWELL_ULT_E_GT2	0x0A1E
#define PCI_CHIP_HASWELL_ULT_E_GT3	0x0A2E
#define PCI_CHIP_HASWELL_CRW_GT1	0x0D02 /* Desktop */
#define PCI_CHIP_HASWELL_CRW_GT2	0x0D12
#define PCI_CHIP_HASWELL_CRW_GT3	0x0D22
#define PCI_CHIP_HASWELL_CRW_M_GT1	0x0D06 /* Mobile */
#define PCI_CHIP_HASWELL_CRW_M_GT2	0x0D16
#define PCI_CHIP_HASWELL_CRW_M_GT3	0x0D26
#define PCI_CHIP_HASWELL_CRW_S_GT1	0x0D0A /* Server */
#define PCI_CHIP_HASWELL_CRW_S_GT2	0x0D1A
#define PCI_CHIP_HASWELL_CRW_S_GT3	0x0D2A
#define PCI_CHIP_HASWELL_CRW_B_GT1	0x0D0B /* Reserved */
#define PCI_CHIP_HASWELL_CRW_B_GT2	0x0D1B
#define PCI_CHIP_HASWELL_CRW_B_GT3	0x0D2B
#define PCI_CHIP_HASWELL_CRW_E_GT1	0x0D0E /* Reserved */
#define PCI_CHIP_HASWELL_CRW_E_GT2	0x0D1E
#define PCI_CHIP_HASWELL_CRW_E_GT3	0x0D2E
#define BDW_SPARE 0x2
#define BDW_ULT 0x6
#define BDW_HALO 0xb
#define BDW_SERVER 0xa
#define BDW_WORKSTATION 0xd
#define BDW_ULX 0xe

#define PCI_CHIP_VALLEYVIEW_PO		0x0f30 /* VLV PO board */
#define PCI_CHIP_VALLEYVIEW_1		0x0f31
#define PCI_CHIP_VALLEYVIEW_2		0x0f32
#define PCI_CHIP_VALLEYVIEW_3		0x0f33

#define PCI_CHIP_CHERRYVIEW_0		0x22b0
#define PCI_CHIP_CHERRYVIEW_1		0x22b1
#define PCI_CHIP_CHERRYVIEW_2		0x22b2
#define PCI_CHIP_CHERRYVIEW_3		0x22b3

#define PCI_CHIP_SKYLAKE_ULT_GT2	0x1916
#define PCI_CHIP_SKYLAKE_ULT_GT1	0x1906
#define PCI_CHIP_SKYLAKE_ULT_GT3	0x1926
#define PCI_CHIP_SKYLAKE_ULT_GT2F	0x1921
#define PCI_CHIP_SKYLAKE_ULX_GT1	0x190E
#define PCI_CHIP_SKYLAKE_ULX_GT2	0x191E
#define PCI_CHIP_SKYLAKE_DT_GT2		0x1912
#define PCI_CHIP_SKYLAKE_DT_GT1		0x1902
#define PCI_CHIP_SKYLAKE_DT_GT4		0x1932
#define PCI_CHIP_SKYLAKE_HALO_GT2	0x191B
#define PCI_CHIP_SKYLAKE_HALO_GT3	0x192B
#define PCI_CHIP_SKYLAKE_HALO_GT1 	0x190B
#define PCI_CHIP_SKYLAKE_HALO_GT4 	0x193B
#define PCI_CHIP_SKYLAKE_SRV_GT2	0x191A
#define PCI_CHIP_SKYLAKE_SRV_GT3	0x192A
#define PCI_CHIP_SKYLAKE_SRV_GT1	0x190A
#define PCI_CHIP_SKYLAKE_SRV_GT4	0x193A
#define PCI_CHIP_SKYLAKE_WKS_GT2 	0x191D
#define PCI_CHIP_SKYLAKE_WKS_GT4 	0x193D

#define PCI_CHIP_KABYLAKE_ULT_GT2      0x5916
#define PCI_CHIP_KABYLAKE_ULT_GT1_5    0x5913
#define PCI_CHIP_KABYLAKE_ULT_GT1      0x5906
#define PCI_CHIP_KABYLAKE_ULT_GT3      0x5926
#define PCI_CHIP_KABYLAKE_ULT_GT2F     0x5921
#define PCI_CHIP_KABYLAKE_ULX_GT1_5    0x5915
#define PCI_CHIP_KABYLAKE_ULX_GT1      0x590E
#define PCI_CHIP_KABYLAKE_ULX_GT2      0x591E
#define PCI_CHIP_KABYLAKE_DT_GT2       0x5912
#define PCI_CHIP_KABYLAKE_DT_GT1_5     0x5917
#define PCI_CHIP_KABYLAKE_DT_GT1       0x5902
#define PCI_CHIP_KABYLAKE_DT_GT4       0x5932
#define PCI_CHIP_KABYLAKE_HALO_GT2     0x591B
#define PCI_CHIP_KABYLAKE_HALO_GT3     0x592B
#define PCI_CHIP_KABYLAKE_HALO_GT1     0x590B
#define PCI_CHIP_KABYLAKE_HALO_GT4     0x593B
#define PCI_CHIP_KABYLAKE_SRV_GT2      0x591A
#define PCI_CHIP_KABYLAKE_SRV_GT3      0x592A
#define PCI_CHIP_KABYLAKE_SRV_GT4      0x593A
#define PCI_CHIP_KABYLAKE_SRV_GT1      0x590A
#define PCI_CHIP_KABYLAKE_WKS_GT2      0x591D
#define PCI_CHIP_KABYLAKE_WKS_GT4      0x593D

#define PCI_CHIP_BROXTON_0		0x0A84
#define PCI_CHIP_BROXTON_1		0x1A84
#define PCI_CHIP_BROXTON_2		0x5A84
#define PCI_CHIP_BROXTON_3		0x1A85
#define PCI_CHIP_BROXTON_4		0x5A85

#endif /* __GTK_DOC_IGNORE__ */

#define IS_MOBILE(devid)	((devid) == PCI_CHIP_I855_GM || \
				 (devid) == PCI_CHIP_I915_GM || \
				 (devid) == PCI_CHIP_I945_GM || \
				 (devid) == PCI_CHIP_I945_GME || \
				 (devid) == PCI_CHIP_I965_GM || \
				 (devid) == PCI_CHIP_I965_GME || \
				 (devid) == PCI_CHIP_GM45_GM || IS_IGD(devid) || \
				 (devid) == PCI_CHIP_IVYBRIDGE_M_GT1 || \
				 (devid) == PCI_CHIP_IVYBRIDGE_M_GT2)

#define IS_G45(devid)		((devid) == PCI_CHIP_IGD_E_G || \
				 (devid) == PCI_CHIP_Q45_G || \
				 (devid) == PCI_CHIP_G45_G || \
				 (devid) == PCI_CHIP_G41_G)
#define IS_GM45(devid)		((devid) == PCI_CHIP_GM45_GM)
#define IS_G4X(devid)		(IS_G45(devid) || IS_GM45(devid))

#define IS_ILD(devid)		((devid) == PCI_CHIP_ILD_G)
#define IS_ILM(devid)		((devid) == PCI_CHIP_ILM_G)

#define IS_915(devid)		((devid) == PCI_CHIP_I915_G || \
				 (devid) == PCI_CHIP_E7221_G || \
				 (devid) == PCI_CHIP_I915_GM)

#define IS_945GM(devid)		((devid) == PCI_CHIP_I945_GM || \
				 (devid) == PCI_CHIP_I945_GME)

#define IS_945(devid)		((devid) == PCI_CHIP_I945_G || \
				 (devid) == PCI_CHIP_I945_GM || \
				 (devid) == PCI_CHIP_I945_GME || \
				 IS_G33(devid))

#define IS_G33(devid)		((devid) == PCI_CHIP_G33_G || \
				 (devid) == PCI_CHIP_Q33_G || \
				 (devid) == PCI_CHIP_Q35_G || IS_IGD(devid))

#define IS_GEN2(devid)		((devid) == PCI_CHIP_I830_M || \
				 (devid) == PCI_CHIP_845_G || \
				 (devid) == PCI_CHIP_I854_G || \
				 (devid) == PCI_CHIP_I855_GM || \
				 (devid) == PCI_CHIP_I865_G)

#define IS_GEN3(devid)		(IS_945(devid) || IS_915(devid))

#define IS_GEN4(devid)		((devid) == PCI_CHIP_I965_G || \
				 (devid) == PCI_CHIP_I965_Q || \
				 (devid) == PCI_CHIP_I965_G_1 || \
				 (devid) == PCI_CHIP_I965_GM || \
				 (devid) == PCI_CHIP_I965_GME || \
				 (devid) == PCI_CHIP_I946_GZ || \
				 IS_G4X(devid))

#define IS_GEN5(devid)		(IS_ILD(devid) || IS_ILM(devid))

#define IS_GEN6(devid)		((devid) == PCI_CHIP_SANDYBRIDGE_GT1 || \
				 (devid) == PCI_CHIP_SANDYBRIDGE_GT2 || \
				 (devid) == PCI_CHIP_SANDYBRIDGE_GT2_PLUS || \
				 (devid) == PCI_CHIP_SANDYBRIDGE_M_GT1 || \
				 (devid) == PCI_CHIP_SANDYBRIDGE_M_GT2 || \
				 (devid) == PCI_CHIP_SANDYBRIDGE_M_GT2_PLUS || \
				 (devid) == PCI_CHIP_SANDYBRIDGE_S)

#define IS_GEN7(devid)		(IS_IVYBRIDGE(devid) || \
				 IS_HASWELL(devid) || \
				 IS_VALLEYVIEW(devid))

#define IS_IVYBRIDGE(devid)	((devid) == PCI_CHIP_IVYBRIDGE_GT1 || \
				 (devid) == PCI_CHIP_IVYBRIDGE_GT2 || \
				 (devid) == PCI_CHIP_IVYBRIDGE_M_GT1 || \
				 (devid) == PCI_CHIP_IVYBRIDGE_M_GT2 || \
				 (devid) == PCI_CHIP_IVYBRIDGE_S || \
				 (devid) == PCI_CHIP_IVYBRIDGE_S_GT2)

#define IS_VALLEYVIEW(devid)	((devid) == PCI_CHIP_VALLEYVIEW_PO || \
				 (devid) == PCI_CHIP_VALLEYVIEW_1 || \
				 (devid) == PCI_CHIP_VALLEYVIEW_2 || \
				 (devid) == PCI_CHIP_VALLEYVIEW_3)

#define IS_HSW_GT1(devid)	((devid) == PCI_CHIP_HASWELL_GT1 || \
				 (devid) == PCI_CHIP_HASWELL_M_GT1 || \
				 (devid) == PCI_CHIP_HASWELL_S_GT1 || \
				 (devid) == PCI_CHIP_HASWELL_B_GT1 || \
				 (devid) == PCI_CHIP_HASWELL_E_GT1 || \
				 (devid) == PCI_CHIP_HASWELL_SDV_GT1 || \
				 (devid) == PCI_CHIP_HASWELL_SDV_M_GT1 || \
				 (devid) == PCI_CHIP_HASWELL_SDV_S_GT1 || \
				 (devid) == PCI_CHIP_HASWELL_SDV_B_GT1 || \
				 (devid) == PCI_CHIP_HASWELL_SDV_E_GT1 || \
				 (devid) == PCI_CHIP_HASWELL_ULT_GT1 || \
				 (devid) == PCI_CHIP_HASWELL_ULT_M_GT1 || \
				 (devid) == PCI_CHIP_HASWELL_ULT_S_GT1 || \
				 (devid) == PCI_CHIP_HASWELL_ULT_B_GT1 || \
				 (devid) == PCI_CHIP_HASWELL_ULT_E_GT1 || \
				 (devid) == PCI_CHIP_HASWELL_CRW_GT1 || \
				 (devid) == PCI_CHIP_HASWELL_CRW_M_GT1 || \
				 (devid) == PCI_CHIP_HASWELL_CRW_S_GT1 || \
				 (devid) == PCI_CHIP_HASWELL_CRW_B_GT1 || \
				 (devid) == PCI_CHIP_HASWELL_CRW_E_GT1)
#define IS_HSW_GT2(devid)	((devid) == PCI_CHIP_HASWELL_GT2 || \
				 (devid) == PCI_CHIP_HASWELL_M_GT2 || \
				 (devid) == PCI_CHIP_HASWELL_S_GT2 || \
				 (devid) == PCI_CHIP_HASWELL_B_GT2 || \
				 (devid) == PCI_CHIP_HASWELL_E_GT2 || \
				 (devid) == PCI_CHIP_HASWELL_SDV_GT2 || \
				 (devid) == PCI_CHIP_HASWELL_SDV_M_GT2 || \
				 (devid) == PCI_CHIP_HASWELL_SDV_S_GT2 || \
				 (devid) == PCI_CHIP_HASWELL_SDV_B_GT2 || \
				 (devid) == PCI_CHIP_HASWELL_SDV_E_GT2 || \
				 (devid) == PCI_CHIP_HASWELL_ULT_GT2 || \
				 (devid) == PCI_CHIP_HASWELL_ULT_M_GT2 || \
				 (devid) == PCI_CHIP_HASWELL_ULT_S_GT2 || \
				 (devid) == PCI_CHIP_HASWELL_ULT_B_GT2 || \
				 (devid) == PCI_CHIP_HASWELL_ULT_E_GT2 || \
				 (devid) == PCI_CHIP_HASWELL_CRW_GT2 || \
				 (devid) == PCI_CHIP_HASWELL_CRW_M_GT2 || \
				 (devid) == PCI_CHIP_HASWELL_CRW_S_GT2 || \
				 (devid) == PCI_CHIP_HASWELL_CRW_B_GT2 || \
				 (devid) == PCI_CHIP_HASWELL_CRW_E_GT2)
#define IS_HSW_GT3(devid)	((devid) == PCI_CHIP_HASWELL_GT3 || \
				 (devid) == PCI_CHIP_HASWELL_M_GT3 || \
				 (devid) == PCI_CHIP_HASWELL_S_GT3 || \
				 (devid) == PCI_CHIP_HASWELL_B_GT3 || \
				 (devid) == PCI_CHIP_HASWELL_E_GT3 || \
				 (devid) == PCI_CHIP_HASWELL_SDV_GT3 || \
				 (devid) == PCI_CHIP_HASWELL_SDV_M_GT3 || \
				 (devid) == PCI_CHIP_HASWELL_SDV_S_GT3 || \
				 (devid) == PCI_CHIP_HASWELL_SDV_B_GT3 || \
				 (devid) == PCI_CHIP_HASWELL_SDV_E_GT3 || \
				 (devid) == PCI_CHIP_HASWELL_ULT_GT3 || \
				 (devid) == PCI_CHIP_HASWELL_ULT_M_GT3 || \
				 (devid) == PCI_CHIP_HASWELL_ULT_S_GT3 || \
				 (devid) == PCI_CHIP_HASWELL_ULT_B_GT3 || \
				 (devid) == PCI_CHIP_HASWELL_ULT_E_GT3 || \
				 (devid) == PCI_CHIP_HASWELL_CRW_GT3 || \
				 (devid) == PCI_CHIP_HASWELL_CRW_M_GT3 || \
				 (devid) == PCI_CHIP_HASWELL_CRW_S_GT3 || \
				 (devid) == PCI_CHIP_HASWELL_CRW_B_GT3 || \
				 (devid) == PCI_CHIP_HASWELL_CRW_E_GT3)

#define IS_HASWELL(devid)	(IS_HSW_GT1(devid) || \
				 IS_HSW_GT2(devid) || \
				 IS_HSW_GT3(devid))

#define IS_BROADWELL(devid)	((((devid) & 0xff00) != 0x1600) ? 0 : \
				((((devid) & 0x00f0) >> 4) > 3) ? 0 : \
				 (((devid) & 0x000f) == BDW_SPARE) ? 1 : \
				 (((devid) & 0x000f) == BDW_ULT) ? 1 : \
				 (((devid) & 0x000f) == BDW_HALO) ? 1 : \
				 (((devid) & 0x000f) == BDW_SERVER) ? 1 : \
				 (((devid) & 0x000f) == BDW_WORKSTATION) ? 1 : \
				 (((devid) & 0x000f) == BDW_ULX) ? 1 : 0)

#define IS_CHERRYVIEW(devid)	((devid) == PCI_CHIP_CHERRYVIEW_0 || \
				 (devid) == PCI_CHIP_CHERRYVIEW_1 || \
				 (devid) == PCI_CHIP_CHERRYVIEW_2 || \
				 (devid) == PCI_CHIP_CHERRYVIEW_3)

#define IS_GEN8(devid)		(IS_BROADWELL(devid) || \
				 IS_CHERRYVIEW(devid))

#define IS_SKL_GT1(devid)	((devid) == PCI_CHIP_SKYLAKE_ULT_GT1	|| \
				 (devid) == PCI_CHIP_SKYLAKE_ULX_GT1	|| \
				 (devid) == PCI_CHIP_SKYLAKE_DT_GT1	|| \
				 (devid) == PCI_CHIP_SKYLAKE_HALO_GT1	|| \
				 (devid) == PCI_CHIP_SKYLAKE_SRV_GT1)

#define IS_SKL_GT2(devid)	((devid) == PCI_CHIP_SKYLAKE_ULT_GT2	|| \
				 (devid) == PCI_CHIP_SKYLAKE_ULT_GT2F	|| \
				 (devid) == PCI_CHIP_SKYLAKE_ULX_GT2	|| \
				 (devid) == PCI_CHIP_SKYLAKE_DT_GT2	|| \
				 (devid) == PCI_CHIP_SKYLAKE_HALO_GT2	|| \
				 (devid) == PCI_CHIP_SKYLAKE_SRV_GT2	|| \
				 (devid) == PCI_CHIP_SKYLAKE_WKS_GT2)

#define IS_SKL_GT3(devid)	((devid) == PCI_CHIP_SKYLAKE_ULT_GT3	|| \
				 (devid) == PCI_CHIP_SKYLAKE_HALO_GT3	|| \
				 (devid) == PCI_CHIP_SKYLAKE_SRV_GT3)

#define IS_SKL_GT4(devid)	((devid) == PCI_CHIP_SKYLAKE_DT_GT4	|| \
				 (devid) == PCI_CHIP_SKYLAKE_HALO_GT4	|| \
				 (devid) == PCI_CHIP_SKYLAKE_WKS_GT4	|| \
				 (devid) == PCI_CHIP_SKYLAKE_SRV_GT4)

#define IS_KBL_GT1(devid)	((devid) == PCI_CHIP_KABYLAKE_ULT_GT1_5|| \
				 (devid) == PCI_CHIP_KABYLAKE_ULX_GT1_5|| \
				 (devid) == PCI_CHIP_KABYLAKE_DT_GT1_5|| \
				 (devid) == PCI_CHIP_KABYLAKE_ULT_GT1|| \
				 (devid) == PCI_CHIP_KABYLAKE_ULX_GT1|| \
				 (devid) == PCI_CHIP_KABYLAKE_DT_GT1||	\
				 (devid) == PCI_CHIP_KABYLAKE_HALO_GT1|| \
				 (devid) == PCI_CHIP_KABYLAKE_SRV_GT1)

#define IS_KBL_GT2(devid)	((devid) == PCI_CHIP_KABYLAKE_ULT_GT2|| \
				 (devid) == PCI_CHIP_KABYLAKE_ULT_GT2F|| \
				 (devid) == PCI_CHIP_KABYLAKE_ULX_GT2|| \
				 (devid) == PCI_CHIP_KABYLAKE_DT_GT2||	\
				 (devid) == PCI_CHIP_KABYLAKE_HALO_GT2|| \
				 (devid) == PCI_CHIP_KABYLAKE_SRV_GT2|| \
				 (devid) == PCI_CHIP_KABYLAKE_WKS_GT2)

#define IS_KBL_GT3(devid)	((devid) == PCI_CHIP_KABYLAKE_ULT_GT3|| \
				 (devid) == PCI_CHIP_KABYLAKE_HALO_GT3|| \
				 (devid) == PCI_CHIP_KABYLAKE_SRV_GT3)

#define IS_KBL_GT4(devid)	((devid) == PCI_CHIP_KABYLAKE_DT_GT4|| \
				 (devid) == PCI_CHIP_KABYLAKE_HALO_GT4|| \
				 (devid) == PCI_CHIP_KABYLAKE_SRV_GT4|| \
				 (devid) == PCI_CHIP_KABYLAKE_WKS_GT4)

#define IS_KABYLAKE(devid)	(IS_KBL_GT1(devid) || \
 				 IS_KBL_GT2(devid) || \
 				 IS_KBL_GT3(devid) || \
 				 IS_KBL_GT4(devid))

#define IS_SKYLAKE(devid)	(IS_SKL_GT1(devid) || \
				 IS_SKL_GT2(devid) || \
				 IS_SKL_GT3(devid) || \
				 IS_SKL_GT4(devid))

#define IS_BROXTON(devid)	((devid) == PCI_CHIP_BROXTON_0 || \
				 (devid) == PCI_CHIP_BROXTON_1 || \
				 (devid) == PCI_CHIP_BROXTON_2 || \
				 (devid) == PCI_CHIP_BROXTON_3 || \
				 (devid) == PCI_CHIP_BROXTON_4)

#define IS_GEN9(devid)		(IS_KABYLAKE(devid) || \
				 IS_SKYLAKE(devid) || \
				 IS_BROXTON(devid))

#define IS_965(devid)		(IS_GEN4(devid) || \
				 IS_GEN5(devid) || \
				 IS_GEN6(devid) || \
				 IS_GEN7(devid) || \
				 IS_GEN8(devid) || \
				 IS_GEN9(devid))

#define IS_9XX(devid)		(IS_GEN3(devid) || \
				 IS_GEN4(devid) || \
				 IS_GEN5(devid) || \
				 IS_GEN6(devid) || \
				 IS_GEN7(devid) || \
				 IS_GEN8(devid) || \
				 IS_GEN9(devid))

#define IS_INTEL(devid)		(IS_GEN2(devid) || \
				 IS_GEN3(devid) || \
				 IS_GEN4(devid) || \
				 IS_GEN5(devid) || \
				 IS_GEN6(devid) || \
				 IS_GEN7(devid) || \
				 IS_GEN8(devid) || \
				 IS_GEN9(devid))

#define HAS_PCH_SPLIT(devid)	(IS_GEN5(devid) || \
				 IS_GEN6(devid) || \
				 IS_IVYBRIDGE(devid) || IS_HASWELL(devid) || \
				 IS_BROADWELL(devid) || \
				 IS_SKYLAKE(devid))

#define HAS_BLT_RING(devid)	(IS_GEN6(devid) || \
				 IS_GEN7(devid) || \
				 IS_GEN8(devid) || \
				 IS_GEN9(devid))

#define HAS_BSD_RING(devid)	(IS_GEN5(devid) || \
				 IS_GEN6(devid) || \
				 IS_GEN7(devid) || \
				 IS_GEN8(devid) || \
				 IS_GEN9(devid))

#define IS_BROADWATER(devid)	((devid) == PCI_CHIP_I946_GZ || \
				 (devid) == PCI_CHIP_I965_G_1 || \
				 (devid) == PCI_CHIP_I965_Q || \
				 (devid) == PCI_CHIP_I965_G)

#define IS_CRESTLINE(devid)	((devid) == PCI_CHIP_I965_GM || \
				 (devid) == PCI_CHIP_I965_GME)

#define HAS_VEBOX_RING(devid)   (IS_HASWELL(devid))

#endif /* _INTEL_CHIPSET_H */
