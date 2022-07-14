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
static const char *ng0 = "D:/circuitos/EjerciciosParte2/RegistroSemaforo5.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );


static void work_a_1340512185_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(13, ng0);

LAB3:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 3496);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3400);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1340512185_3212880686_p_1(char *t0)
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
LAB3:    t2 = (t0 + 3416);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(17, ng0);
    t4 = (t0 + 1672U);
    t8 = *((char **)t4);
    t9 = (3 - 3);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t4 = (t8 + t12);
    t13 = *((unsigned char *)t4);
    t14 = (t0 + 1672U);
    t15 = *((char **)t14);
    t16 = (2 - 3);
    t17 = (t16 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t14 = (t15 + t19);
    t20 = *((unsigned char *)t14);
    t21 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t13, t20);
    t22 = (t0 + 1672U);
    t23 = *((char **)t22);
    t24 = (1 - 3);
    t25 = (t24 * -1);
    t26 = (1U * t25);
    t27 = (0 + t26);
    t22 = (t23 + t27);
    t28 = *((unsigned char *)t22);
    t29 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t21, t28);
    t30 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t29);
    t31 = (t0 + 1672U);
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

LAB9:    t41 = (t0 + 3560);
    t45 = (t41 + 56U);
    t46 = *((char **)t45);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    memcpy(t48, t36, 4U);
    xsi_driver_first_trans_fast(t41);
    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 5553);
    t1 = 1;
    if (4U == 4U)
        goto LAB13;

LAB14:    t1 = 0;

LAB15:    if (t1 != 0)
        goto LAB10;

LAB12:    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 5563);
    t1 = 1;
    if (4U == 4U)
        goto LAB21;

LAB22:    t1 = 0;

LAB23:    if (t1 != 0)
        goto LAB19;

LAB20:    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 5570);
    t1 = 1;
    if (4U == 4U)
        goto LAB29;

LAB30:    t1 = 0;

LAB31:    if (t1 != 0)
        goto LAB27;

LAB28:    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 5580);
    t1 = 1;
    if (4U == 4U)
        goto LAB37;

LAB38:    t1 = 0;

LAB39:    if (t1 != 0)
        goto LAB35;

LAB36:
LAB11:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_size_not_matching(4U, t43, 0);
    goto LAB9;

LAB10:    xsi_set_current_line(19, ng0);
    t15 = (t0 + 5557);
    t23 = (t0 + 3624);
    t31 = (t23 + 56U);
    t32 = *((char **)t31);
    t36 = (t32 + 56U);
    t38 = *((char **)t36);
    memcpy(t38, t15, 3U);
    xsi_driver_first_trans_fast_port(t23);
    xsi_set_current_line(20, ng0);
    t2 = (t0 + 5560);
    t5 = (t0 + 3688);
    t8 = (t5 + 56U);
    t14 = *((char **)t8);
    t15 = (t14 + 56U);
    t22 = *((char **)t15);
    memcpy(t22, t2, 3U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB11;

LAB13:    t10 = 0;

LAB16:    if (t10 < 4U)
        goto LAB17;
    else
        goto LAB15;

LAB17:    t8 = (t4 + t10);
    t14 = (t2 + t10);
    if (*((unsigned char *)t8) != *((unsigned char *)t14))
        goto LAB14;

LAB18:    t10 = (t10 + 1);
    goto LAB16;

LAB19:    xsi_set_current_line(22, ng0);
    t15 = (t0 + 5567);
    t23 = (t0 + 3688);
    t31 = (t23 + 56U);
    t32 = *((char **)t31);
    t36 = (t32 + 56U);
    t38 = *((char **)t36);
    memcpy(t38, t15, 3U);
    xsi_driver_first_trans_fast_port(t23);
    goto LAB11;

LAB21:    t10 = 0;

LAB24:    if (t10 < 4U)
        goto LAB25;
    else
        goto LAB23;

LAB25:    t8 = (t4 + t10);
    t14 = (t2 + t10);
    if (*((unsigned char *)t8) != *((unsigned char *)t14))
        goto LAB22;

LAB26:    t10 = (t10 + 1);
    goto LAB24;

LAB27:    xsi_set_current_line(24, ng0);
    t15 = (t0 + 5574);
    t23 = (t0 + 3624);
    t31 = (t23 + 56U);
    t32 = *((char **)t31);
    t36 = (t32 + 56U);
    t38 = *((char **)t36);
    memcpy(t38, t15, 3U);
    xsi_driver_first_trans_fast_port(t23);
    xsi_set_current_line(25, ng0);
    t2 = (t0 + 5577);
    t5 = (t0 + 3688);
    t8 = (t5 + 56U);
    t14 = *((char **)t8);
    t15 = (t14 + 56U);
    t22 = *((char **)t15);
    memcpy(t22, t2, 3U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB11;

LAB29:    t10 = 0;

LAB32:    if (t10 < 4U)
        goto LAB33;
    else
        goto LAB31;

LAB33:    t8 = (t4 + t10);
    t14 = (t2 + t10);
    if (*((unsigned char *)t8) != *((unsigned char *)t14))
        goto LAB30;

LAB34:    t10 = (t10 + 1);
    goto LAB32;

LAB35:    xsi_set_current_line(27, ng0);
    t15 = (t0 + 5584);
    t23 = (t0 + 3624);
    t31 = (t23 + 56U);
    t32 = *((char **)t31);
    t36 = (t32 + 56U);
    t38 = *((char **)t36);
    memcpy(t38, t15, 3U);
    xsi_driver_first_trans_fast_port(t23);
    goto LAB11;

LAB37:    t10 = 0;

LAB40:    if (t10 < 4U)
        goto LAB41;
    else
        goto LAB39;

LAB41:    t8 = (t4 + t10);
    t14 = (t2 + t10);
    if (*((unsigned char *)t8) != *((unsigned char *)t14))
        goto LAB38;

LAB42:    t10 = (t10 + 1);
    goto LAB40;

}


extern void work_a_1340512185_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1340512185_3212880686_p_0,(void *)work_a_1340512185_3212880686_p_1};
	xsi_register_didat("work_a_1340512185_3212880686", "isim/TBRegistroSemaforo5_isim_beh.exe.sim/work/a_1340512185_3212880686.didat");
	xsi_register_executes(pe);
}
