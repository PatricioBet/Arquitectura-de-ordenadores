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
static const char *ng0 = "D:/circuitos/EjerciciosParte2/RegistroDesplazamientoSerie4.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );


static void work_a_0246654249_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(13, ng0);

LAB3:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 3176);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3080);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0246654249_3212880686_p_1(char *t0)
{
    char t37[16];
    char t39[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned char t20;
    unsigned char t21;
    char *t22;
    char *t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned char t28;
    unsigned char t29;
    unsigned char t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t38;
    char *t40;
    char *t41;
    int t42;
    unsigned int t43;
    unsigned char t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;

LAB0:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3096);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(17, ng0);
    t4 = (t0 + 1352U);
    t8 = *((char **)t4);
    t9 = (3 - 3);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t4 = (t8 + t12);
    t13 = *((unsigned char *)t4);
    t14 = (t0 + 1352U);
    t15 = *((char **)t14);
    t16 = (2 - 3);
    t17 = (t16 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t14 = (t15 + t19);
    t20 = *((unsigned char *)t14);
    t21 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t13, t20);
    t22 = (t0 + 1352U);
    t23 = *((char **)t22);
    t24 = (1 - 3);
    t25 = (t24 * -1);
    t26 = (1U * t25);
    t27 = (0 + t26);
    t22 = (t23 + t27);
    t28 = *((unsigned char *)t22);
    t29 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t21, t28);
    t30 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t29);
    t31 = (t0 + 1352U);
    t32 = *((char **)t31);
    t33 = (3 - 3);
    t34 = (t33 * 1U);
    t35 = (0 + t34);
    t31 = (t32 + t35);
    t38 = ((IEEE_P_2592010699) + 4024);
    t40 = (t39 + 0U);
    t41 = (t40 + 0U);
    *((int *)t41) = 3;
    t41 = (t40 + 4U);
    *((int *)t41) = 1;
    t41 = (t40 + 8U);
    *((int *)t41) = -1;
    t42 = (1 - 3);
    t43 = (t42 * -1);
    t43 = (t43 + 1);
    t41 = (t40 + 12U);
    *((unsigned int *)t41) = t43;
    t36 = xsi_base_array_concat(t36, t37, t38, (char)99, t30, (char)97, t31, t39, (char)101);
    t43 = (1U + 3U);
    t44 = (4U != t43);
    if (t44 == 1)
        goto LAB8;

LAB9:    t41 = (t0 + 3240);
    t45 = (t41 + 56U);
    t46 = *((char **)t45);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    memcpy(t48, t36, 4U);
    xsi_driver_first_trans_fast(t41);
    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_size_not_matching(4U, t43, 0);
    goto LAB9;

}


extern void work_a_0246654249_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0246654249_3212880686_p_0,(void *)work_a_0246654249_3212880686_p_1};
	xsi_register_didat("work_a_0246654249_3212880686", "isim/TBRegistroDesplazamientoSerie4_isim_beh.exe.sim/work/a_0246654249_3212880686.didat");
	xsi_register_executes(pe);
}
