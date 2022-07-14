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
static const char *ng0 = "D:/circuitos/EjerciciosParte2/Cronometro11.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_1026804993_3212880686_p_0(char *t0)
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
    t1 = (t0 + 4080);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3968);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1026804993_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(16, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 4144);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3984);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1026804993_3212880686_p_2(char *t0)
{
    char t8[16];
    char t22[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    char *t21;
    int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    char *t35;
    int t37;
    char *t38;
    int t40;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;

LAB0:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 4000);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(20, ng0);
    t4 = (t0 + 1832U);
    t9 = *((char **)t4);
    t4 = (t0 + 6492U);
    t10 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t8, t9, t4, 1);
    t11 = (t8 + 12U);
    t12 = *((unsigned int *)t11);
    t13 = (1U * t12);
    t14 = (4U != t13);
    if (t14 == 1)
        goto LAB8;

LAB9:    t15 = (t0 + 4208);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t10, 4U);
    xsi_driver_first_trans_fast(t15);
    xsi_set_current_line(21, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t2 = (t0 + 6492U);
    t5 = (t0 + 6541);
    t10 = (t8 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 3;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t20 = (3 - 0);
    t12 = (t20 * 1);
    t12 = (t12 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t12;
    t1 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t2, t5, t8);
    if (t1 != 0)
        goto LAB10;

LAB12:
LAB11:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t2 = (t0 + 6508U);
    t5 = (t0 + 6549);
    t10 = (t8 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 3;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t20 = (3 - 0);
    t12 = (t20 * 1);
    t12 = (t12 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t12;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t2, t5, t8);
    if (t3 == 1)
        goto LAB18;

LAB19:    t1 = (unsigned char)0;

LAB20:    if (t1 != 0)
        goto LAB15;

LAB17:
LAB16:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t2 = (t0 + 6561);
    t20 = xsi_mem_cmp(t2, t4, 4U);
    if (t20 == 1)
        goto LAB22;

LAB33:    t9 = (t0 + 6565);
    t23 = xsi_mem_cmp(t9, t4, 4U);
    if (t23 == 1)
        goto LAB23;

LAB34:    t11 = (t0 + 6569);
    t29 = xsi_mem_cmp(t11, t4, 4U);
    if (t29 == 1)
        goto LAB24;

LAB35:    t16 = (t0 + 6573);
    t30 = xsi_mem_cmp(t16, t4, 4U);
    if (t30 == 1)
        goto LAB25;

LAB36:    t18 = (t0 + 6577);
    t31 = xsi_mem_cmp(t18, t4, 4U);
    if (t31 == 1)
        goto LAB26;

LAB37:    t21 = (t0 + 6581);
    t32 = xsi_mem_cmp(t21, t4, 4U);
    if (t32 == 1)
        goto LAB27;

LAB38:    t25 = (t0 + 6585);
    t33 = xsi_mem_cmp(t25, t4, 4U);
    if (t33 == 1)
        goto LAB28;

LAB39:    t27 = (t0 + 6589);
    t34 = xsi_mem_cmp(t27, t4, 4U);
    if (t34 == 1)
        goto LAB29;

LAB40:    t35 = (t0 + 6593);
    t37 = xsi_mem_cmp(t35, t4, 4U);
    if (t37 == 1)
        goto LAB30;

LAB41:    t38 = (t0 + 6597);
    t40 = xsi_mem_cmp(t38, t4, 4U);
    if (t40 == 1)
        goto LAB31;

LAB42:
LAB32:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 6671);
    t5 = (t0 + 4336);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    memcpy(t15, t2, 7U);
    xsi_driver_first_trans_fast_port(t5);

LAB21:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t2 = (t0 + 6678);
    t20 = xsi_mem_cmp(t2, t4, 4U);
    if (t20 == 1)
        goto LAB45;

LAB56:    t9 = (t0 + 6682);
    t23 = xsi_mem_cmp(t9, t4, 4U);
    if (t23 == 1)
        goto LAB46;

LAB57:    t11 = (t0 + 6686);
    t29 = xsi_mem_cmp(t11, t4, 4U);
    if (t29 == 1)
        goto LAB47;

LAB58:    t16 = (t0 + 6690);
    t30 = xsi_mem_cmp(t16, t4, 4U);
    if (t30 == 1)
        goto LAB48;

LAB59:    t18 = (t0 + 6694);
    t31 = xsi_mem_cmp(t18, t4, 4U);
    if (t31 == 1)
        goto LAB49;

LAB60:    t21 = (t0 + 6698);
    t32 = xsi_mem_cmp(t21, t4, 4U);
    if (t32 == 1)
        goto LAB50;

LAB61:    t25 = (t0 + 6702);
    t33 = xsi_mem_cmp(t25, t4, 4U);
    if (t33 == 1)
        goto LAB51;

LAB62:    t27 = (t0 + 6706);
    t34 = xsi_mem_cmp(t27, t4, 4U);
    if (t34 == 1)
        goto LAB52;

LAB63:    t35 = (t0 + 6710);
    t37 = xsi_mem_cmp(t35, t4, 4U);
    if (t37 == 1)
        goto LAB53;

LAB64:    t38 = (t0 + 6714);
    t40 = xsi_mem_cmp(t38, t4, 4U);
    if (t40 == 1)
        goto LAB54;

LAB65:
LAB55:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 6788);
    t5 = (t0 + 4400);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    memcpy(t15, t2, 7U);
    xsi_driver_first_trans_fast_port(t5);

LAB44:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_size_not_matching(4U, t13, 0);
    goto LAB9;

LAB10:    xsi_set_current_line(22, ng0);
    t11 = (t0 + 6545);
    t16 = (t0 + 4208);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t21 = *((char **)t19);
    memcpy(t21, t11, 4U);
    xsi_driver_first_trans_fast(t16);
    xsi_set_current_line(23, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t2 = (t0 + 6508U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t8, t4, t2, 1);
    t9 = (t8 + 12U);
    t12 = *((unsigned int *)t9);
    t13 = (1U * t12);
    t1 = (4U != t13);
    if (t1 == 1)
        goto LAB13;

LAB14:    t10 = (t0 + 4272);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 4U);
    xsi_driver_first_trans_fast(t10);
    goto LAB11;

LAB13:    xsi_size_not_matching(4U, t13, 0);
    goto LAB14;

LAB15:    xsi_set_current_line(26, ng0);
    t19 = (t0 + 6557);
    t24 = (t0 + 4272);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t19, 4U);
    xsi_driver_first_trans_fast(t24);
    goto LAB16;

LAB18:    t11 = (t0 + 1832U);
    t15 = *((char **)t11);
    t11 = (t0 + 6492U);
    t16 = (t0 + 6553);
    t18 = (t22 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 0;
    t19 = (t18 + 4U);
    *((int *)t19) = 3;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t23 = (3 - 0);
    t12 = (t23 * 1);
    t12 = (t12 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t12;
    t6 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t15, t11, t16, t22);
    t1 = t6;
    goto LAB20;

LAB22:    xsi_set_current_line(29, ng0);
    t41 = (t0 + 6601);
    t43 = (t0 + 4336);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memcpy(t47, t41, 7U);
    xsi_driver_first_trans_fast_port(t43);
    goto LAB21;

LAB23:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 6608);
    t5 = (t0 + 4336);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    memcpy(t15, t2, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB21;

LAB24:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 6615);
    t5 = (t0 + 4336);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    memcpy(t15, t2, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB21;

LAB25:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 6622);
    t5 = (t0 + 4336);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    memcpy(t15, t2, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB21;

LAB26:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 6629);
    t5 = (t0 + 4336);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    memcpy(t15, t2, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB21;

LAB27:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 6636);
    t5 = (t0 + 4336);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    memcpy(t15, t2, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB21;

LAB28:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 6643);
    t5 = (t0 + 4336);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    memcpy(t15, t2, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB21;

LAB29:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 6650);
    t5 = (t0 + 4336);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    memcpy(t15, t2, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB21;

LAB30:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 6657);
    t5 = (t0 + 4336);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    memcpy(t15, t2, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB21;

LAB31:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 6664);
    t5 = (t0 + 4336);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    memcpy(t15, t2, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB21;

LAB43:;
LAB45:    xsi_set_current_line(42, ng0);
    t41 = (t0 + 6718);
    t43 = (t0 + 4400);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memcpy(t47, t41, 7U);
    xsi_driver_first_trans_fast_port(t43);
    goto LAB44;

LAB46:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 6725);
    t5 = (t0 + 4400);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    memcpy(t15, t2, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB44;

LAB47:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 6732);
    t5 = (t0 + 4400);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    memcpy(t15, t2, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB44;

LAB48:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 6739);
    t5 = (t0 + 4400);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    memcpy(t15, t2, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB44;

LAB49:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 6746);
    t5 = (t0 + 4400);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    memcpy(t15, t2, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB44;

LAB50:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 6753);
    t5 = (t0 + 4400);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    memcpy(t15, t2, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB44;

LAB51:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 6760);
    t5 = (t0 + 4400);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    memcpy(t15, t2, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB44;

LAB52:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 6767);
    t5 = (t0 + 4400);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    memcpy(t15, t2, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB44;

LAB53:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 6774);
    t5 = (t0 + 4400);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    memcpy(t15, t2, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB44;

LAB54:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 6781);
    t5 = (t0 + 4400);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    memcpy(t15, t2, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB44;

LAB66:;
}


extern void work_a_1026804993_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1026804993_3212880686_p_0,(void *)work_a_1026804993_3212880686_p_1,(void *)work_a_1026804993_3212880686_p_2};
	xsi_register_didat("work_a_1026804993_3212880686", "isim/TBCronometro11_isim_beh.exe.sim/work/a_1026804993_3212880686.didat");
	xsi_register_executes(pe);
}
