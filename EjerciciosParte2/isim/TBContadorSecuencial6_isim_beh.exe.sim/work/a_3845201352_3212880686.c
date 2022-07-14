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
static const char *ng0 = "D:/circuitos/EjerciciosParte2/ContadorSecuencia6.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_3845201352_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(13, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 3336);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 3U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3240);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3845201352_3212880686_p_1(char *t0)
{
    char t15[16];
    char t27[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t28;

LAB0:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3256);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(17, ng0);
    t4 = (t0 + 1192U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 1512U);
    t12 = *((char **)t4);
    t4 = (t0 + 5184U);
    t13 = (t0 + 5213);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 0;
    t17 = (t16 + 4U);
    *((int *)t17) = 2;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t18 = (2 - 0);
    t19 = (t18 * 1);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t20 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t12, t4, t13, t15);
    t8 = t20;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 5184U);
    t5 = (t0 + 5219);
    t12 = (t15 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 2;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t18 = (2 - 0);
    t19 = (t18 * 1);
    t19 = (t19 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t19;
    t1 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t2, t5, t15);
    if (t1 != 0)
        goto LAB14;

LAB15:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 5184U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t15, t4, t2, 2);
    t9 = (t15 + 12U);
    t19 = *((unsigned int *)t9);
    t28 = (1U * t19);
    t1 = (3U != t28);
    if (t1 == 1)
        goto LAB18;

LAB19:    t12 = (t0 + 3400);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 3U);
    xsi_driver_first_trans_fast(t12);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(18, ng0);
    t17 = (t0 + 5216);
    t22 = (t0 + 3400);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t17, 3U);
    xsi_driver_first_trans_fast(t22);
    goto LAB9;

LAB11:    t8 = (unsigned char)1;
    goto LAB13;

LAB14:    xsi_set_current_line(20, ng0);
    t13 = (t0 + 1512U);
    t14 = *((char **)t13);
    t13 = (t0 + 5184U);
    t16 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t27, t14, t13, 1);
    t17 = (t27 + 12U);
    t19 = *((unsigned int *)t17);
    t28 = (1U * t19);
    t3 = (3U != t28);
    if (t3 == 1)
        goto LAB16;

LAB17:    t21 = (t0 + 3400);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t16, 3U);
    xsi_driver_first_trans_fast(t21);
    goto LAB9;

LAB16:    xsi_size_not_matching(3U, t28, 0);
    goto LAB17;

LAB18:    xsi_size_not_matching(3U, t28, 0);
    goto LAB19;

}


extern void work_a_3845201352_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3845201352_3212880686_p_0,(void *)work_a_3845201352_3212880686_p_1};
	xsi_register_didat("work_a_3845201352_3212880686", "isim/TBContadorSecuencial6_isim_beh.exe.sim/work/a_3845201352_3212880686.didat");
	xsi_register_executes(pe);
}
