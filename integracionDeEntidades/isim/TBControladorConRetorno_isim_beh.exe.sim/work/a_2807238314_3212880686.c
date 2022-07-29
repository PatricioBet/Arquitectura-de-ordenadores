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
static const char *ng0 = "D:/circuitos/integracionDeEntidades/controladoraConRetorno.vhd";



static void work_a_2807238314_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3240);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(19, ng0);
    t4 = (t0 + 1192U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 5376);
    t13 = xsi_mem_cmp(t2, t4, 2U);
    if (t13 == 1)
        goto LAB21;

LAB25:    t8 = (t0 + 5378);
    t16 = xsi_mem_cmp(t8, t4, 2U);
    if (t16 == 1)
        goto LAB22;

LAB26:    t12 = (t0 + 5380);
    t19 = xsi_mem_cmp(t12, t4, 2U);
    if (t19 == 1)
        goto LAB23;

LAB27:
LAB24:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 5388);
    t5 = (t0 + 3336);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t2, 2U);
    xsi_driver_first_trans_fast_port(t5);

LAB20:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(21, ng0);
    t4 = (t0 + 1512U);
    t11 = *((char **)t4);
    t4 = (t0 + 5362);
    t13 = xsi_mem_cmp(t4, t11, 2U);
    if (t13 == 1)
        goto LAB12;

LAB16:    t14 = (t0 + 5364);
    t16 = xsi_mem_cmp(t14, t11, 2U);
    if (t16 == 1)
        goto LAB13;

LAB17:    t17 = (t0 + 5366);
    t19 = xsi_mem_cmp(t17, t11, 2U);
    if (t19 == 1)
        goto LAB14;

LAB18:
LAB15:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 5374);
    t5 = (t0 + 3336);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t2, 2U);
    xsi_driver_first_trans_fast_port(t5);

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(22, ng0);
    t20 = (t0 + 5368);
    t22 = (t0 + 3336);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t20, 2U);
    xsi_driver_first_trans_fast_port(t22);
    goto LAB11;

LAB13:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 5370);
    t5 = (t0 + 3336);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t2, 2U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB11;

LAB14:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 5372);
    t5 = (t0 + 3336);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t2, 2U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB11;

LAB19:;
LAB21:    xsi_set_current_line(30, ng0);
    t15 = (t0 + 5382);
    t18 = (t0 + 3336);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t15, 2U);
    xsi_driver_first_trans_fast_port(t18);
    goto LAB20;

LAB22:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 5384);
    t5 = (t0 + 3336);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t2, 2U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB20;

LAB23:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 5386);
    t5 = (t0 + 3336);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t2, 2U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB20;

LAB28:;
}

static void work_a_2807238314_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 5390);
    t4 = xsi_mem_cmp(t1, t2, 2U);
    if (t4 == 1)
        goto LAB3;

LAB7:    t5 = (t0 + 5392);
    t7 = xsi_mem_cmp(t5, t2, 2U);
    if (t7 == 1)
        goto LAB4;

LAB8:    t8 = (t0 + 5394);
    t10 = xsi_mem_cmp(t8, t2, 2U);
    if (t10 == 1)
        goto LAB5;

LAB9:
LAB6:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 5408);
    t3 = (t0 + 3400);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:    t1 = (t0 + 3256);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(42, ng0);
    t11 = (t0 + 5396);
    t13 = (t0 + 3400);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t11, 4U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB2;

LAB4:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 5400);
    t3 = (t0 + 3400);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB5:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 5404);
    t3 = (t0 + 3400);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB10:;
}


extern void work_a_2807238314_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2807238314_3212880686_p_0,(void *)work_a_2807238314_3212880686_p_1};
	xsi_register_didat("work_a_2807238314_3212880686", "isim/TBControladorConRetorno_isim_beh.exe.sim/work/a_2807238314_3212880686.didat");
	xsi_register_executes(pe);
}
