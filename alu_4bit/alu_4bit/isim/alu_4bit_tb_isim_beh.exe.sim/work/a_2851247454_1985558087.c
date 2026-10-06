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
static const char *ng0 = "/home/ise/CSE_450_Xilinx/Faiza-22201121-Mid/alu_4bit_tb.vhd";



static void work_a_2851247454_1985558087_p_0(char *t0)
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
    unsigned char t13;
    unsigned char t14;

LAB0:    t1 = (t0 + 2824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 5455);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 5459);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 5463);
    t4 = (t0 + 3336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(38, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5465);
    t10 = 1;
    if (4U == 4U)
        goto LAB10;

LAB11:    t10 = 0;

LAB12:    if (t10 == 0)
        goto LAB8;

LAB9:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t10 = *((unsigned char *)t3);
    t12 = (t10 == (unsigned char)2);
    if (t12 == 0)
        goto LAB16;

LAB17:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 5527);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 5531);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 5535);
    t4 = (t0 + 3336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(57, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t9);

LAB20:    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t7 = (t0 + 5469);
    xsi_report(t7, 28U, (unsigned char)2);
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

LAB16:    t2 = (t0 + 5497);
    xsi_report(t2, 30U, (unsigned char)2);
    goto LAB17;

LAB18:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5537);
    t12 = 1;
    if (4U == 4U)
        goto LAB27;

LAB28:    t12 = 0;

LAB29:    if (t12 == 1)
        goto LAB24;

LAB25:    t10 = (unsigned char)0;

LAB26:    if (t10 == 0)
        goto LAB22;

LAB23:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 5571);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 5575);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 5579);
    t4 = (t0 + 3336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(72, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t9);

LAB35:    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB19:    goto LAB18;

LAB21:    goto LAB19;

LAB22:    t7 = (t0 + 5541);
    xsi_report(t7, 30U, (unsigned char)2);
    goto LAB23;

LAB24:    t7 = (t0 + 1672U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB26;

LAB27:    t11 = 0;

LAB30:    if (t11 < 4U)
        goto LAB31;
    else
        goto LAB29;

LAB31:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB28;

LAB32:    t11 = (t11 + 1);
    goto LAB30;

LAB33:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5581);
    t12 = 1;
    if (4U == 4U)
        goto LAB42;

LAB43:    t12 = 0;

LAB44:    if (t12 == 1)
        goto LAB39;

LAB40:    t10 = (unsigned char)0;

LAB41:    if (t10 == 0)
        goto LAB37;

LAB38:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 5613);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 5617);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 5621);
    t4 = (t0 + 3336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(87, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t9);

LAB50:    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB34:    goto LAB33;

LAB36:    goto LAB34;

LAB37:    t7 = (t0 + 5585);
    xsi_report(t7, 28U, (unsigned char)2);
    goto LAB38;

LAB39:    t7 = (t0 + 1672U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB41;

LAB42:    t11 = 0;

LAB45:    if (t11 < 4U)
        goto LAB46;
    else
        goto LAB44;

LAB46:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB43;

LAB47:    t11 = (t11 + 1);
    goto LAB45;

LAB48:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5623);
    t12 = 1;
    if (4U == 4U)
        goto LAB57;

LAB58:    t12 = 0;

LAB59:    if (t12 == 1)
        goto LAB54;

LAB55:    t10 = (unsigned char)0;

LAB56:    if (t10 == 0)
        goto LAB52;

LAB53:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 5651);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 5655);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 5659);
    t4 = (t0 + 3336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(102, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t9);

LAB65:    *((char **)t1) = &&LAB66;
    goto LAB1;

LAB49:    goto LAB48;

LAB51:    goto LAB49;

LAB52:    t7 = (t0 + 5627);
    xsi_report(t7, 24U, (unsigned char)2);
    goto LAB53;

LAB54:    t7 = (t0 + 1672U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t14 = (t13 == (unsigned char)3);
    t10 = t14;
    goto LAB56;

LAB57:    t11 = 0;

LAB60:    if (t11 < 4U)
        goto LAB61;
    else
        goto LAB59;

LAB61:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB58;

LAB62:    t11 = (t11 + 1);
    goto LAB60;

LAB63:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5661);
    t12 = 1;
    if (4U == 4U)
        goto LAB72;

LAB73:    t12 = 0;

LAB74:    if (t12 == 1)
        goto LAB69;

LAB70:    t10 = (unsigned char)0;

LAB71:    if (t10 == 0)
        goto LAB67;

LAB68:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 5695);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 5699);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 5703);
    t4 = (t0 + 3336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(117, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t9);

LAB80:    *((char **)t1) = &&LAB81;
    goto LAB1;

LAB64:    goto LAB63;

LAB66:    goto LAB64;

LAB67:    t7 = (t0 + 5665);
    xsi_report(t7, 30U, (unsigned char)2);
    goto LAB68;

LAB69:    t7 = (t0 + 1672U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB71;

LAB72:    t11 = 0;

LAB75:    if (t11 < 4U)
        goto LAB76;
    else
        goto LAB74;

LAB76:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB73;

LAB77:    t11 = (t11 + 1);
    goto LAB75;

LAB78:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5705);
    t12 = 1;
    if (4U == 4U)
        goto LAB87;

LAB88:    t12 = 0;

LAB89:    if (t12 == 1)
        goto LAB84;

LAB85:    t10 = (unsigned char)0;

LAB86:    if (t10 == 0)
        goto LAB82;

LAB83:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 5737);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 5741);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 5745);
    t4 = (t0 + 3336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(132, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t9);

LAB95:    *((char **)t1) = &&LAB96;
    goto LAB1;

LAB79:    goto LAB78;

LAB81:    goto LAB79;

LAB82:    t7 = (t0 + 5709);
    xsi_report(t7, 28U, (unsigned char)2);
    goto LAB83;

LAB84:    t7 = (t0 + 1672U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB86;

LAB87:    t11 = 0;

LAB90:    if (t11 < 4U)
        goto LAB91;
    else
        goto LAB89;

LAB91:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB88;

LAB92:    t11 = (t11 + 1);
    goto LAB90;

LAB93:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5747);
    t12 = 1;
    if (4U == 4U)
        goto LAB102;

LAB103:    t12 = 0;

LAB104:    if (t12 == 1)
        goto LAB99;

LAB100:    t10 = (unsigned char)0;

LAB101:    if (t10 == 0)
        goto LAB97;

LAB98:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 5779);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 5783);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 5787);
    t4 = (t0 + 3336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(147, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t9);

LAB110:    *((char **)t1) = &&LAB111;
    goto LAB1;

LAB94:    goto LAB93;

LAB96:    goto LAB94;

LAB97:    t7 = (t0 + 5751);
    xsi_report(t7, 28U, (unsigned char)2);
    goto LAB98;

LAB99:    t7 = (t0 + 1672U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB101;

LAB102:    t11 = 0;

LAB105:    if (t11 < 4U)
        goto LAB106;
    else
        goto LAB104;

LAB106:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB103;

LAB107:    t11 = (t11 + 1);
    goto LAB105;

LAB108:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5789);
    t12 = 1;
    if (4U == 4U)
        goto LAB117;

LAB118:    t12 = 0;

LAB119:    if (t12 == 1)
        goto LAB114;

LAB115:    t10 = (unsigned char)0;

LAB116:    if (t10 == 0)
        goto LAB112;

LAB113:    xsi_set_current_line(154, ng0);
    t2 = (t0 + 5818);
    xsi_report(t2, 50U, (unsigned char)0);
    xsi_set_current_line(157, ng0);

LAB125:    *((char **)t1) = &&LAB126;
    goto LAB1;

LAB109:    goto LAB108;

LAB111:    goto LAB109;

LAB112:    t7 = (t0 + 5793);
    xsi_report(t7, 25U, (unsigned char)2);
    goto LAB113;

LAB114:    t7 = (t0 + 1672U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB116;

LAB117:    t11 = 0;

LAB120:    if (t11 < 4U)
        goto LAB121;
    else
        goto LAB119;

LAB121:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB118;

LAB122:    t11 = (t11 + 1);
    goto LAB120;

LAB123:    goto LAB2;

LAB124:    goto LAB123;

LAB126:    goto LAB124;

}


extern void work_a_2851247454_1985558087_init()
{
	static char *pe[] = {(void *)work_a_2851247454_1985558087_p_0};
	xsi_register_didat("work_a_2851247454_1985558087", "isim/alu_4bit_tb_isim_beh.exe.sim/work/a_2851247454_1985558087.didat");
	xsi_register_executes(pe);
}
