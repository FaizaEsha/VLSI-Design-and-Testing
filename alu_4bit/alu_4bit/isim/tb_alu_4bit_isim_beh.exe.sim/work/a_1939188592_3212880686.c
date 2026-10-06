/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/CSE_450_Xilinx/CSE450_22201055_Mid/tb_alu_4bit.vhd";



static void work_a_1939188592_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;
    unsigned char t10;
    unsigned int t11;
    unsigned char t12;

LAB0:    t1 = (t0 + 2824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 5479);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 5481);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 5485);
    t4 = (t0 + 3336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(58, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5489);
    t10 = 1;
    if (4U == 4U)
        goto LAB10;

LAB11:    t10 = 0;

LAB12:    if (t10 == 0)
        goto LAB8;

LAB9:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t10 = *((unsigned char *)t3);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB16;

LAB17:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 5530);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 5532);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 5536);
    t4 = (t0 + 3336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(79, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t9);

LAB20:    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t7 = (t0 + 5493);
    xsi_report(t7, 18U, (unsigned char)2);
    goto LAB9;

LAB10:    t11 = 0;

LAB13:    if (t11 < 4U)
        goto LAB14;
    else
        goto LAB12;

LAB14:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB11;

LAB15:    t11 = (t11 + 1);
    goto LAB13;

LAB16:    t2 = (t0 + 5511);
    xsi_report(t2, 19U, (unsigned char)2);
    goto LAB17;

LAB18:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5540);
    t10 = 1;
    if (4U == 4U)
        goto LAB24;

LAB25:    t10 = 0;

LAB26:    if (t10 == 0)
        goto LAB22;

LAB23:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t10 = *((unsigned char *)t3);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB30;

LAB31:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 5581);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 5583);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 5587);
    t4 = (t0 + 3336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(100, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t9);

LAB34:    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB19:    goto LAB18;

LAB21:    goto LAB19;

LAB22:    t7 = (t0 + 5544);
    xsi_report(t7, 18U, (unsigned char)2);
    goto LAB23;

LAB24:    t11 = 0;

LAB27:    if (t11 < 4U)
        goto LAB28;
    else
        goto LAB26;

LAB28:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB25;

LAB29:    t11 = (t11 + 1);
    goto LAB27;

LAB30:    t2 = (t0 + 5562);
    xsi_report(t2, 19U, (unsigned char)2);
    goto LAB31;

LAB32:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5591);
    t10 = 1;
    if (4U == 4U)
        goto LAB38;

LAB39:    t10 = 0;

LAB40:    if (t10 == 0)
        goto LAB36;

LAB37:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t10 = *((unsigned char *)t3);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB44;

LAB45:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 5631);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 5633);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 5637);
    t4 = (t0 + 3336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(121, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t9);

LAB48:    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB33:    goto LAB32;

LAB35:    goto LAB33;

LAB36:    t7 = (t0 + 5595);
    xsi_report(t7, 17U, (unsigned char)2);
    goto LAB37;

LAB38:    t11 = 0;

LAB41:    if (t11 < 4U)
        goto LAB42;
    else
        goto LAB40;

LAB42:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB39;

LAB43:    t11 = (t11 + 1);
    goto LAB41;

LAB44:    t2 = (t0 + 5612);
    xsi_report(t2, 19U, (unsigned char)2);
    goto LAB45;

LAB46:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5641);
    t10 = 1;
    if (4U == 4U)
        goto LAB52;

LAB53:    t10 = 0;

LAB54:    if (t10 == 0)
        goto LAB50;

LAB51:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t10 = *((unsigned char *)t3);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB58;

LAB59:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 5681);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(140, ng0);
    t2 = (t0 + 5683);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 5687);
    t4 = (t0 + 3336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(143, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t9);

LAB62:    *((char **)t1) = &&LAB63;
    goto LAB1;

LAB47:    goto LAB46;

LAB49:    goto LAB47;

LAB50:    t7 = (t0 + 5645);
    xsi_report(t7, 17U, (unsigned char)2);
    goto LAB51;

LAB52:    t11 = 0;

LAB55:    if (t11 < 4U)
        goto LAB56;
    else
        goto LAB54;

LAB56:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB53;

LAB57:    t11 = (t11 + 1);
    goto LAB55;

LAB58:    t2 = (t0 + 5662);
    xsi_report(t2, 19U, (unsigned char)2);
    goto LAB59;

LAB60:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5691);
    t10 = 1;
    if (4U == 4U)
        goto LAB66;

LAB67:    t10 = 0;

LAB68:    if (t10 == 0)
        goto LAB64;

LAB65:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t10 = *((unsigned char *)t3);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB72;

LAB73:    xsi_set_current_line(162, ng0);
    t2 = (t0 + 5732);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(163, ng0);
    t2 = (t0 + 5734);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(164, ng0);
    t2 = (t0 + 5738);
    t4 = (t0 + 3336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(166, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t9);

LAB76:    *((char **)t1) = &&LAB77;
    goto LAB1;

LAB61:    goto LAB60;

LAB63:    goto LAB61;

LAB64:    t7 = (t0 + 5695);
    xsi_report(t7, 18U, (unsigned char)2);
    goto LAB65;

LAB66:    t11 = 0;

LAB69:    if (t11 < 4U)
        goto LAB70;
    else
        goto LAB68;

LAB70:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB67;

LAB71:    t11 = (t11 + 1);
    goto LAB69;

LAB72:    t2 = (t0 + 5713);
    xsi_report(t2, 19U, (unsigned char)2);
    goto LAB73;

LAB74:    xsi_set_current_line(168, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5742);
    t10 = 1;
    if (4U == 4U)
        goto LAB80;

LAB81:    t10 = 0;

LAB82:    if (t10 == 0)
        goto LAB78;

LAB79:    xsi_set_current_line(172, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t10 = *((unsigned char *)t3);
    t12 = (t10 == (unsigned char)3);
    if (t12 == 0)
        goto LAB86;

LAB87:    xsi_set_current_line(184, ng0);
    t2 = (t0 + 5783);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(185, ng0);
    t2 = (t0 + 5785);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(186, ng0);
    t2 = (t0 + 5789);
    t4 = (t0 + 3336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(188, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t9);

LAB90:    *((char **)t1) = &&LAB91;
    goto LAB1;

LAB75:    goto LAB74;

LAB77:    goto LAB75;

LAB78:    t7 = (t0 + 5746);
    xsi_report(t7, 18U, (unsigned char)2);
    goto LAB79;

LAB80:    t11 = 0;

LAB83:    if (t11 < 4U)
        goto LAB84;
    else
        goto LAB82;

LAB84:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB81;

LAB85:    t11 = (t11 + 1);
    goto LAB83;

LAB86:    t2 = (t0 + 5764);
    xsi_report(t2, 19U, (unsigned char)2);
    goto LAB87;

LAB88:    xsi_set_current_line(190, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5793);
    t10 = 1;
    if (4U == 4U)
        goto LAB94;

LAB95:    t10 = 0;

LAB96:    if (t10 == 0)
        goto LAB92;

LAB93:    xsi_set_current_line(194, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t10 = *((unsigned char *)t3);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB100;

LAB101:    xsi_set_current_line(207, ng0);
    t2 = (t0 + 5834);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(208, ng0);
    t2 = (t0 + 5836);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(209, ng0);
    t2 = (t0 + 5840);
    t4 = (t0 + 3336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(211, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t9);

LAB104:    *((char **)t1) = &&LAB105;
    goto LAB1;

LAB89:    goto LAB88;

LAB91:    goto LAB89;

LAB92:    t7 = (t0 + 5797);
    xsi_report(t7, 18U, (unsigned char)2);
    goto LAB93;

LAB94:    t11 = 0;

LAB97:    if (t11 < 4U)
        goto LAB98;
    else
        goto LAB96;

LAB98:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB95;

LAB99:    t11 = (t11 + 1);
    goto LAB97;

LAB100:    t2 = (t0 + 5815);
    xsi_report(t2, 19U, (unsigned char)2);
    goto LAB101;

LAB102:    xsi_set_current_line(213, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5844);
    t10 = 1;
    if (4U == 4U)
        goto LAB108;

LAB109:    t10 = 0;

LAB110:    if (t10 == 0)
        goto LAB106;

LAB107:    xsi_set_current_line(217, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t10 = *((unsigned char *)t3);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB114;

LAB115:    xsi_set_current_line(226, ng0);
    t2 = (t0 + 5888);
    xsi_report(t2, 36U, (unsigned char)0);
    xsi_set_current_line(229, ng0);

LAB118:    *((char **)t1) = &&LAB119;
    goto LAB1;

LAB103:    goto LAB102;

LAB105:    goto LAB103;

LAB106:    t7 = (t0 + 5848);
    xsi_report(t7, 21U, (unsigned char)2);
    goto LAB107;

LAB108:    t11 = 0;

LAB111:    if (t11 < 4U)
        goto LAB112;
    else
        goto LAB110;

LAB112:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB109;

LAB113:    t11 = (t11 + 1);
    goto LAB111;

LAB114:    t2 = (t0 + 5869);
    xsi_report(t2, 19U, (unsigned char)2);
    goto LAB115;

LAB116:    goto LAB2;

LAB117:    goto LAB116;

LAB119:    goto LAB117;

}


extern void work_a_1939188592_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1939188592_3212880686_p_0};
	xsi_register_didat("work_a_1939188592_3212880686", "isim/tb_alu_4bit_isim_beh.exe.sim/work/a_1939188592_3212880686.didat");
	xsi_register_executes(pe);
}
