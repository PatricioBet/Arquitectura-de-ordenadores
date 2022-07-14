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
static const char *ng0 = "D:/circuitos/EjerciciosParte2/Registro4Bits3.vhd";
extern char *IEEE_P_2592010699;



static void work_a_0787743712_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(14, ng0);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 3976);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3880);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0787743712_3212880686_p_1(char *t0)
{
    char t21[16];
    char t22[16];
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
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t23;
    char *t24;
    int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3896);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(18, ng0);
    t4 = (t0 + 1192U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 6038);
    t1 = 1;
    if (2U == 2U)
        goto LAB13;

LAB14:    t1 = 0;

LAB15:    if (t1 != 0)
        goto LAB11;

LAB12:    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 6040);
    t1 = 1;
    if (2U == 2U)
        goto LAB23;

LAB24:    t1 = 0;

LAB25:    if (t1 != 0)
        goto LAB21;

LAB22:    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 6042);
    t1 = 1;
    if (2U == 2U)
        goto LAB33;

LAB34:    t1 = 0;

LAB35:    if (t1 != 0)
        goto LAB31;

LAB32:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t2 = (t0 + 4040);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 4U);
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(19, ng0);
    t4 = (t0 + 6034);
    t12 = (t0 + 4040);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 4U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

LAB11:    xsi_set_current_line(21, ng0);
    t12 = (t0 + 2152U);
    t13 = *((char **)t12);
    t18 = (1 - 0);
    t19 = (t18 * 1U);
    t20 = (0 + t19);
    t12 = (t13 + t20);
    t14 = (t0 + 1352U);
    t15 = *((char **)t14);
    t3 = *((unsigned char *)t15);
    t16 = ((IEEE_P_2592010699) + 4024);
    t23 = (t22 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = 1;
    t24 = (t23 + 4U);
    *((int *)t24) = 3;
    t24 = (t23 + 8U);
    *((int *)t24) = 1;
    t25 = (3 - 1);
    t26 = (t25 * 1);
    t26 = (t26 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t26;
    t14 = xsi_base_array_concat(t14, t21, t16, (char)97, t12, t22, (char)99, t3, (char)101);
    t26 = (3U + 1U);
    t6 = (4U != t26);
    if (t6 == 1)
        goto LAB19;

LAB20:    t24 = (t0 + 4040);
    t27 = (t24 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t14, 4U);
    xsi_driver_first_trans_fast(t24);
    goto LAB9;

LAB13:    t17 = 0;

LAB16:    if (t17 < 2U)
        goto LAB17;
    else
        goto LAB15;

LAB17:    t8 = (t4 + t17);
    t11 = (t2 + t17);
    if (*((unsigned char *)t8) != *((unsigned char *)t11))
        goto LAB14;

LAB18:    t17 = (t17 + 1);
    goto LAB16;

LAB19:    xsi_size_not_matching(4U, t26, 0);
    goto LAB20;

LAB21:    xsi_set_current_line(23, ng0);
    t12 = (t0 + 1512U);
    t13 = *((char **)t12);
    t3 = *((unsigned char *)t13);
    t12 = (t0 + 2152U);
    t14 = *((char **)t12);
    t18 = (0 - 0);
    t19 = (t18 * 1U);
    t20 = (0 + t19);
    t12 = (t14 + t20);
    t16 = ((IEEE_P_2592010699) + 4024);
    t23 = (t22 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = 0;
    t24 = (t23 + 4U);
    *((int *)t24) = 2;
    t24 = (t23 + 8U);
    *((int *)t24) = 1;
    t25 = (2 - 0);
    t26 = (t25 * 1);
    t26 = (t26 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t26;
    t15 = xsi_base_array_concat(t15, t21, t16, (char)99, t3, (char)97, t12, t22, (char)101);
    t26 = (1U + 3U);
    t6 = (4U != t26);
    if (t6 == 1)
        goto LAB29;

LAB30:    t24 = (t0 + 4040);
    t27 = (t24 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t15, 4U);
    xsi_driver_first_trans_fast(t24);
    goto LAB9;

LAB23:    t17 = 0;

LAB26:    if (t17 < 2U)
        goto LAB27;
    else
        goto LAB25;

LAB27:    t8 = (t4 + t17);
    t11 = (t2 + t17);
    if (*((unsigned char *)t8) != *((unsigned char *)t11))
        goto LAB24;

LAB28:    t17 = (t17 + 1);
    goto LAB26;

LAB29:    xsi_size_not_matching(4U, t26, 0);
    goto LAB30;

LAB31:    xsi_set_current_line(25, ng0);
    t12 = (t0 + 1832U);
    t13 = *((char **)t12);
    t12 = (t0 + 4040);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t23 = *((char **)t16);
    memcpy(t23, t13, 4U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

LAB33:    t17 = 0;

LAB36:    if (t17 < 2U)
        goto LAB37;
    else
        goto LAB35;

LAB37:    t8 = (t4 + t17);
    t11 = (t2 + t17);
    if (*((unsigned char *)t8) != *((unsigned char *)t11))
        goto LAB34;

LAB38:    t17 = (t17 + 1);
    goto LAB36;

}


extern void work_a_0787743712_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0787743712_3212880686_p_0,(void *)work_a_0787743712_3212880686_p_1};
	xsi_register_didat("work_a_0787743712_3212880686", "isim/TBRegistro4Bits3_isim_beh.exe.sim/work/a_0787743712_3212880686.didat");
	xsi_register_executes(pe);
}
