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
static const char *ng0 = "C:/Users/Gabriel/Desktop/Uart_mips-master/TESTEUMMILHAOEDOIS/TESTEUMMILHAOEDOIS/RegN_Bits.vhd";



static void work_a_4142870792_2164148148_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned char t16;
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;

LAB0:    xsi_set_current_line(26, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 3392);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(27, ng0);
    t1 = (t0 + 5827);
    t6 = (32 - 1);
    t7 = (31 - t6);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t10 = (t1 + t9);
    t11 = (t0 + 3472);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t10, 32U);
    xsi_driver_first_trans_fast_port(t11);
    goto LAB3;

LAB5:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1352U);
    t10 = *((char **)t2);
    t18 = *((unsigned char *)t10);
    t19 = (t18 == (unsigned char)3);
    if (t19 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t16 = *((unsigned char *)t5);
    t17 = (t16 == (unsigned char)2);
    t3 = t17;
    goto LAB9;

LAB10:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1512U);
    t11 = *((char **)t2);
    t2 = (t0 + 3472);
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 32U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB11;

}


extern void work_a_4142870792_2164148148_init()
{
	static char *pe[] = {(void *)work_a_4142870792_2164148148_p_0};
	xsi_register_didat("work_a_4142870792_2164148148", "isim/TbTop_isim_beh.exe.sim/work/a_4142870792_2164148148.didat");
	xsi_register_executes(pe);
}
