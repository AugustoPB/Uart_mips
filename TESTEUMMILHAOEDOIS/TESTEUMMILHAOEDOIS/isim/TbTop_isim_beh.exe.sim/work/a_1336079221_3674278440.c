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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Augusto/Desktop/TESTEUMMILHAOEDOIS/TESTEUMMILHAOEDOIS/BUFFER.vhd";
extern char *IEEE_P_0774719531;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_0774719531_sub_2698824431_2162500114(char *, char *, char *, char *, char *);
unsigned char ieee_p_0774719531_sub_4042748798_2162500114(char *, char *, char *, char *, char *);
char *ieee_p_0774719531_sub_767668596_2162500114(char *, char *, char *, char *, char *, char *);
char *ieee_p_0774719531_sub_767740470_2162500114(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_3293060193_503743352(char *, char *, char *, char *, unsigned char );
char *ieee_p_2592010699_sub_393209765_503743352(char *, char *, char *, char *);


static void work_a_1336079221_3674278440_p_0(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 8520U);
    t3 = (t0 + 8632);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 3;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (3 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_p_0774719531_sub_2698824431_2162500114(IEEE_P_0774719531, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB3;

LAB4:
LAB5:    t15 = (t0 + 5248);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t15);

LAB2:    t20 = (t0 + 5104);
    *((int *)t20) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 5248);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t7);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1336079221_3674278440_p_1(char *t0)
{
    char t14[16];
    char t18[16];
    char t19[16];
    char t64[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    int t15;
    unsigned int t16;
    unsigned char t17;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned char t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    char *t41;
    int t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t65;
    unsigned int t66;

LAB0:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 2272U);
    t11 = xsi_signal_has_event(t1);
    if (t11 == 1)
        goto LAB10;

LAB11:    t4 = (unsigned char)0;

LAB12:    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 8644);
    t15 = xsi_mem_cmp(t1, t2, 4U);
    if (t15 == 1)
        goto LAB18;

LAB29:    t6 = (t0 + 8648);
    t33 = xsi_mem_cmp(t6, t2, 4U);
    if (t33 == 1)
        goto LAB19;

LAB30:    t8 = (t0 + 8652);
    t34 = xsi_mem_cmp(t8, t2, 4U);
    if (t34 == 1)
        goto LAB20;

LAB31:    t10 = (t0 + 8656);
    t35 = xsi_mem_cmp(t10, t2, 4U);
    if (t35 == 1)
        goto LAB21;

LAB32:    t21 = (t0 + 8660);
    t36 = xsi_mem_cmp(t21, t2, 4U);
    if (t36 == 1)
        goto LAB22;

LAB33:    t23 = (t0 + 8664);
    t37 = xsi_mem_cmp(t23, t2, 4U);
    if (t37 == 1)
        goto LAB23;

LAB34:    t25 = (t0 + 8668);
    t38 = xsi_mem_cmp(t25, t2, 4U);
    if (t38 == 1)
        goto LAB24;

LAB35:    t29 = (t0 + 8672);
    t39 = xsi_mem_cmp(t29, t2, 4U);
    if (t39 == 1)
        goto LAB25;

LAB36:    t31 = (t0 + 8676);
    t40 = xsi_mem_cmp(t31, t2, 4U);
    if (t40 == 1)
        goto LAB26;

LAB37:    t41 = (t0 + 8680);
    t43 = xsi_mem_cmp(t41, t2, 4U);
    if (t43 == 1)
        goto LAB27;

LAB38:
LAB28:    xsi_set_current_line(112, ng0);

LAB17:
LAB3:    t1 = (t0 + 5120);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(34, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t5 = t1;
    memset(t5, (unsigned char)2, 4U);
    t6 = (t0 + 5312);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(35, ng0);
    t1 = xsi_get_transient_memory(72U);
    memset(t1, 0, 72U);
    t2 = t1;
    memset(t2, (unsigned char)2, 72U);
    t5 = (t0 + 5376);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 72U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(38, ng0);
    t10 = (t0 + 2472U);
    t20 = *((char **)t10);
    t10 = (t0 + 8504U);
    t21 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t19, t20, t10, (unsigned char)0);
    t22 = (t19 + 12U);
    t16 = *((unsigned int *)t22);
    t16 = (t16 * 1U);
    t23 = xsi_vhdl_bitvec_sll(t23, t21, t16, 8);
    t24 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t18, t23, t19);
    t25 = (t18 + 12U);
    t26 = *((unsigned int *)t25);
    t26 = (t26 * 1U);
    t27 = (72U != t26);
    if (t27 == 1)
        goto LAB13;

LAB14:    t28 = (t0 + 5376);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t24, 72U);
    xsi_driver_first_trans_fast(t28);
    xsi_set_current_line(39, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 8520U);
    t5 = (t0 + 8640);
    t7 = (t18 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 3;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t15 = (3 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t16;
    t8 = ieee_p_0774719531_sub_767740470_2162500114(IEEE_P_0774719531, t14, t2, t1, t5, t18);
    t9 = (t14 + 12U);
    t16 = *((unsigned int *)t9);
    t26 = (1U * t16);
    t3 = (4U != t26);
    if (t3 == 1)
        goto LAB15;

LAB16:    t10 = (t0 + 5312);
    t20 = (t10 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t8, 4U);
    xsi_driver_first_trans_fast(t10);
    goto LAB3;

LAB7:    t2 = (t0 + 2632U);
    t6 = *((char **)t2);
    t2 = (t0 + 8520U);
    t7 = (t0 + 8636);
    t9 = (t14 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 3;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t15 = (3 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t16;
    t17 = ieee_p_0774719531_sub_4042748798_2162500114(IEEE_P_0774719531, t6, t2, t7, t14);
    t3 = t17;
    goto LAB9;

LAB10:    t2 = (t0 + 2312U);
    t5 = *((char **)t2);
    t12 = *((unsigned char *)t5);
    t13 = (t12 == (unsigned char)3);
    t4 = t13;
    goto LAB12;

LAB13:    xsi_size_not_matching(72U, t26, 0);
    goto LAB14;

LAB15:    xsi_size_not_matching(4U, t26, 0);
    goto LAB16;

LAB18:    xsi_set_current_line(44, ng0);
    t44 = (t0 + 1312U);
    t4 = xsi_signal_has_event(t44);
    if (t4 == 1)
        goto LAB43;

LAB44:    t3 = (unsigned char)0;

LAB45:    if (t3 != 0)
        goto LAB40;

LAB42:
LAB41:    goto LAB17;

LAB19:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1312U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB56;

LAB57:    t3 = (unsigned char)0;

LAB58:    if (t3 != 0)
        goto LAB53;

LAB55:
LAB54:    goto LAB17;

LAB20:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1312U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB69;

LAB70:    t3 = (unsigned char)0;

LAB71:    if (t3 != 0)
        goto LAB66;

LAB68:
LAB67:    goto LAB17;

LAB21:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1312U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB82;

LAB83:    t3 = (unsigned char)0;

LAB84:    if (t3 != 0)
        goto LAB79;

LAB81:
LAB80:    goto LAB17;

LAB22:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 1312U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB95;

LAB96:    t3 = (unsigned char)0;

LAB97:    if (t3 != 0)
        goto LAB92;

LAB94:
LAB93:    goto LAB17;

LAB23:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 1312U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB108;

LAB109:    t3 = (unsigned char)0;

LAB110:    if (t3 != 0)
        goto LAB105;

LAB107:
LAB106:    goto LAB17;

LAB24:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 1312U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB121;

LAB122:    t3 = (unsigned char)0;

LAB123:    if (t3 != 0)
        goto LAB118;

LAB120:
LAB119:    goto LAB17;

LAB25:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 1312U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB134;

LAB135:    t3 = (unsigned char)0;

LAB136:    if (t3 != 0)
        goto LAB131;

LAB133:
LAB132:    goto LAB17;

LAB26:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 1312U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB147;

LAB148:    t3 = (unsigned char)0;

LAB149:    if (t3 != 0)
        goto LAB144;

LAB146:
LAB145:    goto LAB17;

LAB27:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 != (unsigned char)3);
    if (t4 != 0)
        goto LAB157;

LAB159:
LAB158:    goto LAB17;

LAB39:;
LAB40:    xsi_set_current_line(45, ng0);
    t45 = (t0 + 1512U);
    t47 = *((char **)t45);
    t45 = (t0 + 2472U);
    t48 = *((char **)t45);
    t16 = (71 - 63);
    t26 = (t16 * 1U);
    t49 = (0 + t26);
    t45 = (t48 + t49);
    t51 = ((IEEE_P_2592010699) + 4024);
    t52 = (t0 + 1520U);
    t53 = *((char **)t52);
    t54 = (t18 + 0U);
    t55 = (t54 + 0U);
    *((int *)t55) = 63;
    t55 = (t54 + 4U);
    *((int *)t55) = 0;
    t55 = (t54 + 8U);
    *((int *)t55) = -1;
    t56 = (0 - 63);
    t57 = (t56 * -1);
    t57 = (t57 + 1);
    t55 = (t54 + 12U);
    *((unsigned int *)t55) = t57;
    t50 = xsi_base_array_concat(t50, t14, t51, (char)97, t47, t53, (char)97, t45, t18, (char)101);
    t57 = (8U + 64U);
    t13 = (72U != t57);
    if (t13 == 1)
        goto LAB46;

LAB47:    t55 = (t0 + 5376);
    t58 = (t55 + 56U);
    t59 = *((char **)t58);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    memcpy(t61, t50, 72U);
    xsi_driver_first_trans_fast(t55);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 != (unsigned char)3);
    if (t4 != 0)
        goto LAB48;

LAB50:
LAB49:    goto LAB41;

LAB43:    t45 = (t0 + 1352U);
    t46 = *((char **)t45);
    t11 = *((unsigned char *)t46);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB45;

LAB46:    xsi_size_not_matching(72U, t57, 0);
    goto LAB47;

LAB48:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 2632U);
    t5 = *((char **)t1);
    t1 = (t0 + 8520U);
    t6 = (t0 + 8684);
    t8 = (t18 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 3;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t15 = (3 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t16;
    t9 = ieee_p_0774719531_sub_767668596_2162500114(IEEE_P_0774719531, t14, t5, t1, t6, t18);
    t10 = (t14 + 12U);
    t16 = *((unsigned int *)t10);
    t26 = (1U * t16);
    t11 = (4U != t26);
    if (t11 == 1)
        goto LAB51;

LAB52:    t20 = (t0 + 5312);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t9, 4U);
    xsi_driver_first_trans_fast(t20);
    goto LAB49;

LAB51:    xsi_size_not_matching(4U, t26, 0);
    goto LAB52;

LAB53:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2472U);
    t6 = *((char **)t2);
    t16 = (71 - 71);
    t26 = (t16 * 1U);
    t49 = (0 + t26);
    t2 = (t6 + t49);
    t7 = (t0 + 1512U);
    t8 = *((char **)t7);
    t9 = ((IEEE_P_2592010699) + 4024);
    t10 = (t18 + 0U);
    t20 = (t10 + 0U);
    *((int *)t20) = 71;
    t20 = (t10 + 4U);
    *((int *)t20) = 64;
    t20 = (t10 + 8U);
    *((int *)t20) = -1;
    t15 = (64 - 71);
    t57 = (t15 * -1);
    t57 = (t57 + 1);
    t20 = (t10 + 12U);
    *((unsigned int *)t20) = t57;
    t20 = (t0 + 1520U);
    t21 = *((char **)t20);
    t7 = xsi_base_array_concat(t7, t14, t9, (char)97, t2, t18, (char)97, t8, t21, (char)101);
    t22 = (t0 + 2472U);
    t23 = *((char **)t22);
    t57 = (71 - 55);
    t62 = (t57 * 1U);
    t63 = (0 + t62);
    t22 = (t23 + t63);
    t25 = ((IEEE_P_2592010699) + 4024);
    t28 = (t64 + 0U);
    t29 = (t28 + 0U);
    *((int *)t29) = 55;
    t29 = (t28 + 4U);
    *((int *)t29) = 0;
    t29 = (t28 + 8U);
    *((int *)t29) = -1;
    t33 = (0 - 55);
    t65 = (t33 * -1);
    t65 = (t65 + 1);
    t29 = (t28 + 12U);
    *((unsigned int *)t29) = t65;
    t24 = xsi_base_array_concat(t24, t19, t25, (char)97, t7, t14, (char)97, t22, t64, (char)101);
    t65 = (8U + 8U);
    t66 = (t65 + 56U);
    t13 = (72U != t66);
    if (t13 == 1)
        goto LAB59;

LAB60:    t29 = (t0 + 5376);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t41 = *((char **)t32);
    memcpy(t41, t24, 72U);
    xsi_driver_first_trans_fast(t29);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 != (unsigned char)3);
    if (t4 != 0)
        goto LAB61;

LAB63:
LAB62:    goto LAB54;

LAB56:    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB58;

LAB59:    xsi_size_not_matching(72U, t66, 0);
    goto LAB60;

LAB61:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 2632U);
    t5 = *((char **)t1);
    t1 = (t0 + 8520U);
    t6 = (t0 + 8688);
    t8 = (t18 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 3;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t15 = (3 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t16;
    t9 = ieee_p_0774719531_sub_767668596_2162500114(IEEE_P_0774719531, t14, t5, t1, t6, t18);
    t10 = (t14 + 12U);
    t16 = *((unsigned int *)t10);
    t26 = (1U * t16);
    t11 = (4U != t26);
    if (t11 == 1)
        goto LAB64;

LAB65:    t20 = (t0 + 5312);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t9, 4U);
    xsi_driver_first_trans_fast(t20);
    goto LAB62;

LAB64:    xsi_size_not_matching(4U, t26, 0);
    goto LAB65;

LAB66:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2472U);
    t6 = *((char **)t2);
    t16 = (71 - 71);
    t26 = (t16 * 1U);
    t49 = (0 + t26);
    t2 = (t6 + t49);
    t7 = (t0 + 1512U);
    t8 = *((char **)t7);
    t9 = ((IEEE_P_2592010699) + 4024);
    t10 = (t18 + 0U);
    t20 = (t10 + 0U);
    *((int *)t20) = 71;
    t20 = (t10 + 4U);
    *((int *)t20) = 56;
    t20 = (t10 + 8U);
    *((int *)t20) = -1;
    t15 = (56 - 71);
    t57 = (t15 * -1);
    t57 = (t57 + 1);
    t20 = (t10 + 12U);
    *((unsigned int *)t20) = t57;
    t20 = (t0 + 1520U);
    t21 = *((char **)t20);
    t7 = xsi_base_array_concat(t7, t14, t9, (char)97, t2, t18, (char)97, t8, t21, (char)101);
    t22 = (t0 + 2472U);
    t23 = *((char **)t22);
    t57 = (71 - 47);
    t62 = (t57 * 1U);
    t63 = (0 + t62);
    t22 = (t23 + t63);
    t25 = ((IEEE_P_2592010699) + 4024);
    t28 = (t64 + 0U);
    t29 = (t28 + 0U);
    *((int *)t29) = 47;
    t29 = (t28 + 4U);
    *((int *)t29) = 0;
    t29 = (t28 + 8U);
    *((int *)t29) = -1;
    t33 = (0 - 47);
    t65 = (t33 * -1);
    t65 = (t65 + 1);
    t29 = (t28 + 12U);
    *((unsigned int *)t29) = t65;
    t24 = xsi_base_array_concat(t24, t19, t25, (char)97, t7, t14, (char)97, t22, t64, (char)101);
    t65 = (16U + 8U);
    t66 = (t65 + 48U);
    t13 = (72U != t66);
    if (t13 == 1)
        goto LAB72;

LAB73:    t29 = (t0 + 5376);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t41 = *((char **)t32);
    memcpy(t41, t24, 72U);
    xsi_driver_first_trans_fast(t29);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 != (unsigned char)3);
    if (t4 != 0)
        goto LAB74;

LAB76:
LAB75:    goto LAB67;

LAB69:    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB71;

LAB72:    xsi_size_not_matching(72U, t66, 0);
    goto LAB73;

LAB74:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 2632U);
    t5 = *((char **)t1);
    t1 = (t0 + 8520U);
    t6 = (t0 + 8692);
    t8 = (t18 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 3;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t15 = (3 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t16;
    t9 = ieee_p_0774719531_sub_767668596_2162500114(IEEE_P_0774719531, t14, t5, t1, t6, t18);
    t10 = (t14 + 12U);
    t16 = *((unsigned int *)t10);
    t26 = (1U * t16);
    t11 = (4U != t26);
    if (t11 == 1)
        goto LAB77;

LAB78:    t20 = (t0 + 5312);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t9, 4U);
    xsi_driver_first_trans_fast(t20);
    goto LAB75;

LAB77:    xsi_size_not_matching(4U, t26, 0);
    goto LAB78;

LAB79:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2472U);
    t6 = *((char **)t2);
    t16 = (71 - 71);
    t26 = (t16 * 1U);
    t49 = (0 + t26);
    t2 = (t6 + t49);
    t7 = (t0 + 1512U);
    t8 = *((char **)t7);
    t9 = ((IEEE_P_2592010699) + 4024);
    t10 = (t18 + 0U);
    t20 = (t10 + 0U);
    *((int *)t20) = 71;
    t20 = (t10 + 4U);
    *((int *)t20) = 48;
    t20 = (t10 + 8U);
    *((int *)t20) = -1;
    t15 = (48 - 71);
    t57 = (t15 * -1);
    t57 = (t57 + 1);
    t20 = (t10 + 12U);
    *((unsigned int *)t20) = t57;
    t20 = (t0 + 1520U);
    t21 = *((char **)t20);
    t7 = xsi_base_array_concat(t7, t14, t9, (char)97, t2, t18, (char)97, t8, t21, (char)101);
    t22 = (t0 + 2472U);
    t23 = *((char **)t22);
    t57 = (71 - 39);
    t62 = (t57 * 1U);
    t63 = (0 + t62);
    t22 = (t23 + t63);
    t25 = ((IEEE_P_2592010699) + 4024);
    t28 = (t64 + 0U);
    t29 = (t28 + 0U);
    *((int *)t29) = 39;
    t29 = (t28 + 4U);
    *((int *)t29) = 0;
    t29 = (t28 + 8U);
    *((int *)t29) = -1;
    t33 = (0 - 39);
    t65 = (t33 * -1);
    t65 = (t65 + 1);
    t29 = (t28 + 12U);
    *((unsigned int *)t29) = t65;
    t24 = xsi_base_array_concat(t24, t19, t25, (char)97, t7, t14, (char)97, t22, t64, (char)101);
    t65 = (24U + 8U);
    t66 = (t65 + 40U);
    t13 = (72U != t66);
    if (t13 == 1)
        goto LAB85;

LAB86:    t29 = (t0 + 5376);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t41 = *((char **)t32);
    memcpy(t41, t24, 72U);
    xsi_driver_first_trans_fast(t29);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 != (unsigned char)3);
    if (t4 != 0)
        goto LAB87;

LAB89:
LAB88:    goto LAB80;

LAB82:    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB84;

LAB85:    xsi_size_not_matching(72U, t66, 0);
    goto LAB86;

LAB87:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 2632U);
    t5 = *((char **)t1);
    t1 = (t0 + 8520U);
    t6 = (t0 + 8696);
    t8 = (t18 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 3;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t15 = (3 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t16;
    t9 = ieee_p_0774719531_sub_767668596_2162500114(IEEE_P_0774719531, t14, t5, t1, t6, t18);
    t10 = (t14 + 12U);
    t16 = *((unsigned int *)t10);
    t26 = (1U * t16);
    t11 = (4U != t26);
    if (t11 == 1)
        goto LAB90;

LAB91:    t20 = (t0 + 5312);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t9, 4U);
    xsi_driver_first_trans_fast(t20);
    goto LAB88;

LAB90:    xsi_size_not_matching(4U, t26, 0);
    goto LAB91;

LAB92:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2472U);
    t6 = *((char **)t2);
    t16 = (71 - 71);
    t26 = (t16 * 1U);
    t49 = (0 + t26);
    t2 = (t6 + t49);
    t7 = (t0 + 1512U);
    t8 = *((char **)t7);
    t9 = ((IEEE_P_2592010699) + 4024);
    t10 = (t18 + 0U);
    t20 = (t10 + 0U);
    *((int *)t20) = 71;
    t20 = (t10 + 4U);
    *((int *)t20) = 40;
    t20 = (t10 + 8U);
    *((int *)t20) = -1;
    t15 = (40 - 71);
    t57 = (t15 * -1);
    t57 = (t57 + 1);
    t20 = (t10 + 12U);
    *((unsigned int *)t20) = t57;
    t20 = (t0 + 1520U);
    t21 = *((char **)t20);
    t7 = xsi_base_array_concat(t7, t14, t9, (char)97, t2, t18, (char)97, t8, t21, (char)101);
    t22 = (t0 + 2472U);
    t23 = *((char **)t22);
    t57 = (71 - 31);
    t62 = (t57 * 1U);
    t63 = (0 + t62);
    t22 = (t23 + t63);
    t25 = ((IEEE_P_2592010699) + 4024);
    t28 = (t64 + 0U);
    t29 = (t28 + 0U);
    *((int *)t29) = 31;
    t29 = (t28 + 4U);
    *((int *)t29) = 0;
    t29 = (t28 + 8U);
    *((int *)t29) = -1;
    t33 = (0 - 31);
    t65 = (t33 * -1);
    t65 = (t65 + 1);
    t29 = (t28 + 12U);
    *((unsigned int *)t29) = t65;
    t24 = xsi_base_array_concat(t24, t19, t25, (char)97, t7, t14, (char)97, t22, t64, (char)101);
    t65 = (32U + 8U);
    t66 = (t65 + 32U);
    t13 = (72U != t66);
    if (t13 == 1)
        goto LAB98;

LAB99:    t29 = (t0 + 5376);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t41 = *((char **)t32);
    memcpy(t41, t24, 72U);
    xsi_driver_first_trans_fast(t29);
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 != (unsigned char)3);
    if (t4 != 0)
        goto LAB100;

LAB102:
LAB101:    goto LAB93;

LAB95:    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB97;

LAB98:    xsi_size_not_matching(72U, t66, 0);
    goto LAB99;

LAB100:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 2632U);
    t5 = *((char **)t1);
    t1 = (t0 + 8520U);
    t6 = (t0 + 8700);
    t8 = (t18 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 3;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t15 = (3 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t16;
    t9 = ieee_p_0774719531_sub_767668596_2162500114(IEEE_P_0774719531, t14, t5, t1, t6, t18);
    t10 = (t14 + 12U);
    t16 = *((unsigned int *)t10);
    t26 = (1U * t16);
    t11 = (4U != t26);
    if (t11 == 1)
        goto LAB103;

LAB104:    t20 = (t0 + 5312);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t9, 4U);
    xsi_driver_first_trans_fast(t20);
    goto LAB101;

LAB103:    xsi_size_not_matching(4U, t26, 0);
    goto LAB104;

LAB105:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2472U);
    t6 = *((char **)t2);
    t16 = (71 - 71);
    t26 = (t16 * 1U);
    t49 = (0 + t26);
    t2 = (t6 + t49);
    t7 = (t0 + 1512U);
    t8 = *((char **)t7);
    t9 = ((IEEE_P_2592010699) + 4024);
    t10 = (t18 + 0U);
    t20 = (t10 + 0U);
    *((int *)t20) = 71;
    t20 = (t10 + 4U);
    *((int *)t20) = 32;
    t20 = (t10 + 8U);
    *((int *)t20) = -1;
    t15 = (32 - 71);
    t57 = (t15 * -1);
    t57 = (t57 + 1);
    t20 = (t10 + 12U);
    *((unsigned int *)t20) = t57;
    t20 = (t0 + 1520U);
    t21 = *((char **)t20);
    t7 = xsi_base_array_concat(t7, t14, t9, (char)97, t2, t18, (char)97, t8, t21, (char)101);
    t22 = (t0 + 2472U);
    t23 = *((char **)t22);
    t57 = (71 - 23);
    t62 = (t57 * 1U);
    t63 = (0 + t62);
    t22 = (t23 + t63);
    t25 = ((IEEE_P_2592010699) + 4024);
    t28 = (t64 + 0U);
    t29 = (t28 + 0U);
    *((int *)t29) = 23;
    t29 = (t28 + 4U);
    *((int *)t29) = 0;
    t29 = (t28 + 8U);
    *((int *)t29) = -1;
    t33 = (0 - 23);
    t65 = (t33 * -1);
    t65 = (t65 + 1);
    t29 = (t28 + 12U);
    *((unsigned int *)t29) = t65;
    t24 = xsi_base_array_concat(t24, t19, t25, (char)97, t7, t14, (char)97, t22, t64, (char)101);
    t65 = (40U + 8U);
    t66 = (t65 + 24U);
    t13 = (72U != t66);
    if (t13 == 1)
        goto LAB111;

LAB112:    t29 = (t0 + 5376);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t41 = *((char **)t32);
    memcpy(t41, t24, 72U);
    xsi_driver_first_trans_fast(t29);
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 != (unsigned char)3);
    if (t4 != 0)
        goto LAB113;

LAB115:
LAB114:    goto LAB106;

LAB108:    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB110;

LAB111:    xsi_size_not_matching(72U, t66, 0);
    goto LAB112;

LAB113:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 2632U);
    t5 = *((char **)t1);
    t1 = (t0 + 8520U);
    t6 = (t0 + 8704);
    t8 = (t18 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 3;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t15 = (3 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t16;
    t9 = ieee_p_0774719531_sub_767668596_2162500114(IEEE_P_0774719531, t14, t5, t1, t6, t18);
    t10 = (t14 + 12U);
    t16 = *((unsigned int *)t10);
    t26 = (1U * t16);
    t11 = (4U != t26);
    if (t11 == 1)
        goto LAB116;

LAB117:    t20 = (t0 + 5312);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t9, 4U);
    xsi_driver_first_trans_fast(t20);
    goto LAB114;

LAB116:    xsi_size_not_matching(4U, t26, 0);
    goto LAB117;

LAB118:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2472U);
    t6 = *((char **)t2);
    t16 = (71 - 71);
    t26 = (t16 * 1U);
    t49 = (0 + t26);
    t2 = (t6 + t49);
    t7 = (t0 + 1512U);
    t8 = *((char **)t7);
    t9 = ((IEEE_P_2592010699) + 4024);
    t10 = (t18 + 0U);
    t20 = (t10 + 0U);
    *((int *)t20) = 71;
    t20 = (t10 + 4U);
    *((int *)t20) = 24;
    t20 = (t10 + 8U);
    *((int *)t20) = -1;
    t15 = (24 - 71);
    t57 = (t15 * -1);
    t57 = (t57 + 1);
    t20 = (t10 + 12U);
    *((unsigned int *)t20) = t57;
    t20 = (t0 + 1520U);
    t21 = *((char **)t20);
    t7 = xsi_base_array_concat(t7, t14, t9, (char)97, t2, t18, (char)97, t8, t21, (char)101);
    t22 = (t0 + 2472U);
    t23 = *((char **)t22);
    t57 = (71 - 15);
    t62 = (t57 * 1U);
    t63 = (0 + t62);
    t22 = (t23 + t63);
    t25 = ((IEEE_P_2592010699) + 4024);
    t28 = (t64 + 0U);
    t29 = (t28 + 0U);
    *((int *)t29) = 15;
    t29 = (t28 + 4U);
    *((int *)t29) = 0;
    t29 = (t28 + 8U);
    *((int *)t29) = -1;
    t33 = (0 - 15);
    t65 = (t33 * -1);
    t65 = (t65 + 1);
    t29 = (t28 + 12U);
    *((unsigned int *)t29) = t65;
    t24 = xsi_base_array_concat(t24, t19, t25, (char)97, t7, t14, (char)97, t22, t64, (char)101);
    t65 = (48U + 8U);
    t66 = (t65 + 16U);
    t13 = (72U != t66);
    if (t13 == 1)
        goto LAB124;

LAB125:    t29 = (t0 + 5376);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t41 = *((char **)t32);
    memcpy(t41, t24, 72U);
    xsi_driver_first_trans_fast(t29);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 != (unsigned char)3);
    if (t4 != 0)
        goto LAB126;

LAB128:
LAB127:    goto LAB119;

LAB121:    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB123;

LAB124:    xsi_size_not_matching(72U, t66, 0);
    goto LAB125;

LAB126:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 2632U);
    t5 = *((char **)t1);
    t1 = (t0 + 8520U);
    t6 = (t0 + 8708);
    t8 = (t18 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 3;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t15 = (3 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t16;
    t9 = ieee_p_0774719531_sub_767668596_2162500114(IEEE_P_0774719531, t14, t5, t1, t6, t18);
    t10 = (t14 + 12U);
    t16 = *((unsigned int *)t10);
    t26 = (1U * t16);
    t11 = (4U != t26);
    if (t11 == 1)
        goto LAB129;

LAB130:    t20 = (t0 + 5312);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t9, 4U);
    xsi_driver_first_trans_fast(t20);
    goto LAB127;

LAB129:    xsi_size_not_matching(4U, t26, 0);
    goto LAB130;

LAB131:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2472U);
    t6 = *((char **)t2);
    t16 = (71 - 71);
    t26 = (t16 * 1U);
    t49 = (0 + t26);
    t2 = (t6 + t49);
    t7 = (t0 + 1512U);
    t8 = *((char **)t7);
    t9 = ((IEEE_P_2592010699) + 4024);
    t10 = (t18 + 0U);
    t20 = (t10 + 0U);
    *((int *)t20) = 71;
    t20 = (t10 + 4U);
    *((int *)t20) = 16;
    t20 = (t10 + 8U);
    *((int *)t20) = -1;
    t15 = (16 - 71);
    t57 = (t15 * -1);
    t57 = (t57 + 1);
    t20 = (t10 + 12U);
    *((unsigned int *)t20) = t57;
    t20 = (t0 + 1520U);
    t21 = *((char **)t20);
    t7 = xsi_base_array_concat(t7, t14, t9, (char)97, t2, t18, (char)97, t8, t21, (char)101);
    t22 = (t0 + 2472U);
    t23 = *((char **)t22);
    t57 = (71 - 7);
    t62 = (t57 * 1U);
    t63 = (0 + t62);
    t22 = (t23 + t63);
    t25 = ((IEEE_P_2592010699) + 4024);
    t28 = (t64 + 0U);
    t29 = (t28 + 0U);
    *((int *)t29) = 7;
    t29 = (t28 + 4U);
    *((int *)t29) = 0;
    t29 = (t28 + 8U);
    *((int *)t29) = -1;
    t33 = (0 - 7);
    t65 = (t33 * -1);
    t65 = (t65 + 1);
    t29 = (t28 + 12U);
    *((unsigned int *)t29) = t65;
    t24 = xsi_base_array_concat(t24, t19, t25, (char)97, t7, t14, (char)97, t22, t64, (char)101);
    t65 = (56U + 8U);
    t66 = (t65 + 8U);
    t13 = (72U != t66);
    if (t13 == 1)
        goto LAB137;

LAB138:    t29 = (t0 + 5376);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t41 = *((char **)t32);
    memcpy(t41, t24, 72U);
    xsi_driver_first_trans_fast(t29);
    xsi_set_current_line(95, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 != (unsigned char)3);
    if (t4 != 0)
        goto LAB139;

LAB141:
LAB140:    goto LAB132;

LAB134:    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB136;

LAB137:    xsi_size_not_matching(72U, t66, 0);
    goto LAB138;

LAB139:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 2632U);
    t5 = *((char **)t1);
    t1 = (t0 + 8520U);
    t6 = (t0 + 8712);
    t8 = (t18 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 3;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t15 = (3 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t16;
    t9 = ieee_p_0774719531_sub_767668596_2162500114(IEEE_P_0774719531, t14, t5, t1, t6, t18);
    t10 = (t14 + 12U);
    t16 = *((unsigned int *)t10);
    t26 = (1U * t16);
    t11 = (4U != t26);
    if (t11 == 1)
        goto LAB142;

LAB143:    t20 = (t0 + 5312);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t9, 4U);
    xsi_driver_first_trans_fast(t20);
    goto LAB140;

LAB142:    xsi_size_not_matching(4U, t26, 0);
    goto LAB143;

LAB144:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2472U);
    t6 = *((char **)t2);
    t16 = (71 - 71);
    t26 = (t16 * 1U);
    t49 = (0 + t26);
    t2 = (t6 + t49);
    t7 = (t0 + 1512U);
    t8 = *((char **)t7);
    t9 = ((IEEE_P_2592010699) + 4024);
    t10 = (t18 + 0U);
    t20 = (t10 + 0U);
    *((int *)t20) = 71;
    t20 = (t10 + 4U);
    *((int *)t20) = 8;
    t20 = (t10 + 8U);
    *((int *)t20) = -1;
    t15 = (8 - 71);
    t57 = (t15 * -1);
    t57 = (t57 + 1);
    t20 = (t10 + 12U);
    *((unsigned int *)t20) = t57;
    t20 = (t0 + 1520U);
    t21 = *((char **)t20);
    t7 = xsi_base_array_concat(t7, t14, t9, (char)97, t2, t18, (char)97, t8, t21, (char)101);
    t57 = (64U + 8U);
    t13 = (72U != t57);
    if (t13 == 1)
        goto LAB150;

LAB151:    t22 = (t0 + 5376);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t28 = *((char **)t25);
    memcpy(t28, t7, 72U);
    xsi_driver_first_trans_fast(t22);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 != (unsigned char)3);
    if (t4 != 0)
        goto LAB152;

LAB154:
LAB153:    goto LAB145;

LAB147:    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB149;

LAB150:    xsi_size_not_matching(72U, t57, 0);
    goto LAB151;

LAB152:    xsi_set_current_line(103, ng0);
    t1 = (t0 + 2632U);
    t5 = *((char **)t1);
    t1 = (t0 + 8520U);
    t6 = (t0 + 8716);
    t8 = (t18 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 3;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t15 = (3 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t16;
    t9 = ieee_p_0774719531_sub_767668596_2162500114(IEEE_P_0774719531, t14, t5, t1, t6, t18);
    t10 = (t14 + 12U);
    t16 = *((unsigned int *)t10);
    t26 = (1U * t16);
    t11 = (4U != t26);
    if (t11 == 1)
        goto LAB155;

LAB156:    t20 = (t0 + 5312);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t9, 4U);
    xsi_driver_first_trans_fast(t20);
    goto LAB153;

LAB155:    xsi_size_not_matching(4U, t26, 0);
    goto LAB156;

LAB157:    xsi_set_current_line(108, ng0);
    t1 = (t0 + 2472U);
    t5 = *((char **)t1);
    t1 = (t0 + 8504U);
    t6 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t18, t5, t1, (unsigned char)0);
    t7 = (t18 + 12U);
    t16 = *((unsigned int *)t7);
    t16 = (t16 * 1U);
    t8 = xsi_vhdl_bitvec_sll(t8, t6, t16, 8);
    t9 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t14, t8, t18);
    t10 = (t14 + 12U);
    t26 = *((unsigned int *)t10);
    t26 = (t26 * 1U);
    t11 = (72U != t26);
    if (t11 == 1)
        goto LAB160;

LAB161:    t20 = (t0 + 5376);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t9, 72U);
    xsi_driver_first_trans_fast(t20);
    xsi_set_current_line(109, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 8520U);
    t5 = (t0 + 8720);
    t7 = (t18 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 3;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t15 = (3 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t16;
    t8 = ieee_p_0774719531_sub_767740470_2162500114(IEEE_P_0774719531, t14, t2, t1, t5, t18);
    t9 = (t14 + 12U);
    t16 = *((unsigned int *)t9);
    t26 = (1U * t16);
    t3 = (4U != t26);
    if (t3 == 1)
        goto LAB162;

LAB163:    t10 = (t0 + 5312);
    t20 = (t10 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t8, 4U);
    xsi_driver_first_trans_fast(t10);
    goto LAB158;

LAB160:    xsi_size_not_matching(72U, t26, 0);
    goto LAB161;

LAB162:    xsi_size_not_matching(4U, t26, 0);
    goto LAB163;

}

static void work_a_1336079221_3674278440_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;

LAB0:    xsi_set_current_line(119, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1312U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB12;

LAB13:    t3 = (unsigned char)0;

LAB14:    if (t3 != 0)
        goto LAB10;

LAB11:
LAB3:    t1 = (t0 + 5136);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 5440);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 5440);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB3;

LAB7:    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 5440);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB3;

LAB12:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)2);
    t3 = t10;
    goto LAB14;

}

static void work_a_1336079221_3674278440_p_3(char *t0)
{
    char t6[16];
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 2632U);
    t3 = *((char **)t2);
    t2 = (t0 + 8520U);
    t4 = (t0 + 8724);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 3;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (3 - 0);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_p_0774719531_sub_4042748798_2162500114(IEEE_P_0774719531, t3, t2, t4, t6);
    if (t11 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t19 = (t0 + 5504);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t19);

LAB2:    t24 = (t0 + 5152);
    *((int *)t24) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 5504);
    t15 = (t8 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t8);
    goto LAB2;

LAB5:    t8 = (t0 + 1352U);
    t12 = *((char **)t8);
    t13 = *((unsigned char *)t12);
    t14 = (t13 != (unsigned char)3);
    t1 = t14;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_1336079221_3674278440_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(131, ng0);

LAB3:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = (71 - 71);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 5568);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 5168);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1336079221_3674278440_init()
{
	static char *pe[] = {(void *)work_a_1336079221_3674278440_p_0,(void *)work_a_1336079221_3674278440_p_1,(void *)work_a_1336079221_3674278440_p_2,(void *)work_a_1336079221_3674278440_p_3,(void *)work_a_1336079221_3674278440_p_4};
	xsi_register_didat("work_a_1336079221_3674278440", "isim/TbTop_isim_beh.exe.sim/work/a_1336079221_3674278440.didat");
	xsi_register_executes(pe);
}
