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
static const char *ng0 = "D:/circuitos/EjerciciosParte1/FlipFopJK1.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );


static void work_a_1848093970_3212880686_p_0(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    unsigned char t20;
    char *t21;

LAB0:    xsi_set_current_line(17, ng0);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(28, ng0);
    t3 = (t0 + 1968U);
    t4 = *((char **)t3);
    t1 = *((unsigned char *)t4);
    t3 = (t0 + 3352);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t16 = *((char **)t13);
    *((unsigned char *)t16) = t1;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(29, ng0);
    t3 = (t0 + 1968U);
    t4 = *((char **)t3);
    t1 = *((unsigned char *)t4);
    t2 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t1);
    t3 = (t0 + 3416);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t16 = *((char **)t13);
    *((unsigned char *)t16) = t2;
    xsi_driver_first_trans_fast_port(t3);
    t3 = (t0 + 3272);
    *((int *)t3) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(18, ng0);
    t8 = (t0 + 1032U);
    t13 = *((char **)t8);
    t14 = *((unsigned char *)t13);
    t15 = (t14 == (unsigned char)2);
    if (t15 == 1)
        goto LAB14;

LAB15:    t12 = (unsigned char)0;

LAB16:    if (t12 != 0)
        goto LAB11;

LAB13:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t2 = *((unsigned char *)t4);
    t5 = (t2 == (unsigned char)3);
    if (t5 == 1)
        goto LAB19;

LAB20:    t1 = (unsigned char)0;

LAB21:    if (t1 != 0)
        goto LAB17;

LAB18:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t2 = *((unsigned char *)t4);
    t5 = (t2 == (unsigned char)2);
    if (t5 == 1)
        goto LAB24;

LAB25:    t1 = (unsigned char)0;

LAB26:    if (t1 != 0)
        goto LAB22;

LAB23:    xsi_set_current_line(25, ng0);
    t3 = (t0 + 1968U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    *((unsigned char *)t3) = (unsigned char)3;

LAB12:    goto LAB3;

LAB5:    t8 = (t0 + 1352U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    t1 = t11;
    goto LAB7;

LAB8:    t3 = (t0 + 1312U);
    t7 = xsi_signal_has_event(t3);
    t2 = t7;
    goto LAB10;

LAB11:    xsi_set_current_line(19, ng0);
    t8 = (t0 + 1968U);
    t19 = *((char **)t8);
    t20 = *((unsigned char *)t19);
    t8 = (t0 + 1968U);
    t21 = *((char **)t8);
    t8 = (t21 + 0);
    *((unsigned char *)t8) = t20;
    goto LAB12;

LAB14:    t8 = (t0 + 1192U);
    t16 = *((char **)t8);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)2);
    t12 = t18;
    goto LAB16;

LAB17:    xsi_set_current_line(21, ng0);
    t3 = (t0 + 1968U);
    t9 = *((char **)t3);
    t10 = *((unsigned char *)t9);
    t11 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t10);
    t3 = (t0 + 1968U);
    t13 = *((char **)t3);
    t3 = (t13 + 0);
    *((unsigned char *)t3) = t11;
    goto LAB12;

LAB19:    t3 = (t0 + 1192U);
    t8 = *((char **)t3);
    t6 = *((unsigned char *)t8);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB21;

LAB22:    xsi_set_current_line(23, ng0);
    t3 = (t0 + 1968U);
    t9 = *((char **)t3);
    t3 = (t9 + 0);
    *((unsigned char *)t3) = (unsigned char)2;
    goto LAB12;

LAB24:    t3 = (t0 + 1192U);
    t8 = *((char **)t3);
    t6 = *((unsigned char *)t8);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB26;

}


extern void work_a_1848093970_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1848093970_3212880686_p_0};
	xsi_register_didat("work_a_1848093970_3212880686", "isim/FlipFopJK1_isim_beh.exe.sim/work/a_1848093970_3212880686.didat");
	xsi_register_executes(pe);
}
