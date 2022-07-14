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
static const char *ng0 = "D:/circuitos/EjerciciosParte2/ContadorA9_10.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_436351764_3965413181(char *, char *, char *, char *, int );


static void work_a_1581886899_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(15, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 3656);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3560);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1581886899_3212880686_p_1(char *t0)
{
    char t14[16];
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
    char *t13;
    char *t15;
    char *t16;
    int t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;

LAB0:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3576);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(19, ng0);
    t4 = (t0 + 1192U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t2 = (t0 + 5728U);
    t5 = (t0 + 5766);
    t11 = (t14 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 0;
    t12 = (t11 + 4U);
    *((int *)t12) = 3;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t17 = (3 - 0);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t18;
    t1 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t2, t5, t14);
    if (t1 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t2 = (t0 + 5728U);
    t5 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t14, t4, t2, 1);
    t8 = (t14 + 12U);
    t18 = *((unsigned int *)t8);
    t26 = (1U * t18);
    t1 = (4U != t26);
    if (t1 == 1)
        goto LAB19;

LAB20:    t11 = (t0 + 3720);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t5, 4U);
    xsi_driver_first_trans_fast(t11);

LAB17:
LAB9:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)2);
    if (t6 == 1)
        goto LAB24;

LAB25:    t1 = (unsigned char)0;

LAB26:    if (t1 != 0)
        goto LAB21;

LAB23:    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB29;

LAB30:    t1 = (unsigned char)0;

LAB31:    if (t1 != 0)
        goto LAB27;

LAB28:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 3784);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 3848);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);

LAB22:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(20, ng0);
    t4 = (t0 + 1832U);
    t11 = *((char **)t4);
    t4 = (t0 + 5728U);
    t12 = (t0 + 5758);
    t15 = (t14 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 0;
    t16 = (t15 + 4U);
    *((int *)t16) = 3;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t17 = (3 - 0);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t18;
    t19 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t11, t4, t12, t14);
    if (t19 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t2 = (t0 + 5728U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t14, t4, t2, 1);
    t8 = (t14 + 12U);
    t18 = *((unsigned int *)t8);
    t26 = (1U * t18);
    t1 = (4U != t26);
    if (t1 == 1)
        goto LAB14;

LAB15:    t11 = (t0 + 3720);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t5, 4U);
    xsi_driver_first_trans_fast(t11);

LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(21, ng0);
    t16 = (t0 + 5762);
    t21 = (t0 + 3720);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t16, 4U);
    xsi_driver_first_trans_fast(t21);
    goto LAB12;

LAB14:    xsi_size_not_matching(4U, t26, 0);
    goto LAB15;

LAB16:    xsi_set_current_line(27, ng0);
    t12 = (t0 + 5770);
    t15 = (t0 + 3720);
    t16 = (t15 + 56U);
    t20 = *((char **)t16);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t12, 4U);
    xsi_driver_first_trans_fast(t15);
    goto LAB17;

LAB19:    xsi_size_not_matching(4U, t26, 0);
    goto LAB20;

LAB21:    xsi_set_current_line(33, ng0);
    t8 = (t0 + 3784);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t15 = *((char **)t13);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3848);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB22;

LAB24:    t2 = (t0 + 1832U);
    t5 = *((char **)t2);
    t17 = (0 - 3);
    t18 = (t17 * -1);
    t26 = (1U * t18);
    t27 = (0 + t26);
    t2 = (t5 + t27);
    t7 = *((unsigned char *)t2);
    t9 = (t7 == (unsigned char)3);
    t1 = t9;
    goto LAB26;

LAB27:    xsi_set_current_line(36, ng0);
    t8 = (t0 + 3784);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t15 = *((char **)t13);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3848);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB22;

LAB29:    t2 = (t0 + 1832U);
    t5 = *((char **)t2);
    t17 = (0 - 3);
    t18 = (t17 * -1);
    t26 = (1U * t18);
    t27 = (0 + t26);
    t2 = (t5 + t27);
    t7 = *((unsigned char *)t2);
    t9 = (t7 == (unsigned char)2);
    t1 = t9;
    goto LAB31;

}


extern void work_a_1581886899_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1581886899_3212880686_p_0,(void *)work_a_1581886899_3212880686_p_1};
	xsi_register_didat("work_a_1581886899_3212880686", "isim/TBContadorA9_10_isim_beh.exe.sim/work/a_1581886899_3212880686.didat");
	xsi_register_executes(pe);
}
