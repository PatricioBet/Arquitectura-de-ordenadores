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
static const char *ng0 = "D:/circuitos/EjerciciosParte2/FlipFopJK1.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );


static void work_a_4019172485_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    unsigned char t16;
    char *t17;

LAB0:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t2 = (t0 + 3352);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t12 = (t9 + 56U);
    t15 = *((char **)t12);
    *((unsigned char *)t15) = t1;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t1);
    t2 = (t0 + 3416);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t12 = (t9 + 56U);
    t15 = *((char **)t12);
    *((unsigned char *)t15) = t4;
    xsi_driver_first_trans_fast_port(t2);
    t2 = (t0 + 3272);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(18, ng0);
    t8 = (t0 + 1032U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 1)
        goto LAB11;

LAB12:    t7 = (unsigned char)0;

LAB13:    if (t7 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB16;

LAB17:    t1 = (unsigned char)0;

LAB18:    if (t1 != 0)
        goto LAB14;

LAB15:    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)2);
    if (t5 == 1)
        goto LAB21;

LAB22:    t1 = (unsigned char)0;

LAB23:    if (t1 != 0)
        goto LAB19;

LAB20:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((unsigned char *)t2) = (unsigned char)3;

LAB9:    goto LAB3;

LAB5:    t2 = (t0 + 1312U);
    t6 = xsi_signal_has_event(t2);
    t1 = t6;
    goto LAB7;

LAB8:    xsi_set_current_line(19, ng0);
    t8 = (t0 + 1968U);
    t15 = *((char **)t8);
    t16 = *((unsigned char *)t15);
    t8 = (t0 + 1968U);
    t17 = *((char **)t8);
    t8 = (t17 + 0);
    *((unsigned char *)t8) = t16;
    goto LAB9;

LAB11:    t8 = (t0 + 1192U);
    t12 = *((char **)t8);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)2);
    t7 = t14;
    goto LAB13;

LAB14:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 1968U);
    t9 = *((char **)t2);
    t10 = *((unsigned char *)t9);
    t11 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t10);
    t2 = (t0 + 1968U);
    t12 = *((char **)t2);
    t2 = (t12 + 0);
    *((unsigned char *)t2) = t11;
    goto LAB9;

LAB16:    t2 = (t0 + 1192U);
    t8 = *((char **)t2);
    t6 = *((unsigned char *)t8);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB18;

LAB19:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 1968U);
    t9 = *((char **)t2);
    t2 = (t9 + 0);
    *((unsigned char *)t2) = (unsigned char)2;
    goto LAB9;

LAB21:    t2 = (t0 + 1192U);
    t8 = *((char **)t2);
    t6 = *((unsigned char *)t8);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB23;

}


extern void work_a_4019172485_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4019172485_3212880686_p_0};
	xsi_register_didat("work_a_4019172485_3212880686", "isim/TBFlipFlopJK_isim_beh.exe.sim/work/a_4019172485_3212880686.didat");
	xsi_register_executes(pe);
}
