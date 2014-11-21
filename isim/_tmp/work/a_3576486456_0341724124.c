/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2007 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

/* This file is designed for use with ISim build 0x734844ce */

#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/CPU_T/BIT_NOT.vhd";
extern char *IEEE_P_2592010699;

unsigned char p_2592010699_sub_1690584930_2592010699(char *, unsigned char );


static void work_a_3576486456_0341724124_p_0(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    char *t5;
    int t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 888U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 - 1);
    t1 = (t0 + 2568);
    *((int *)t1) = t4;
    t5 = (t0 + 2572);
    *((int *)t5) = 0;
    t6 = t4;
    t7 = 0;

LAB2:    if (t6 >= t7)
        goto LAB3;

LAB5:    t1 = (t0 + 1576);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(36, ng0);
    t8 = (t0 + 548U);
    t9 = *((char **)t8);
    t8 = (t0 + 2568);
    t10 = *((int *)t8);
    t11 = (t10 - 7);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t15 = (t9 + t14);
    t16 = *((unsigned char *)t15);
    t17 = p_2592010699_sub_1690584930_2592010699(IEEE_P_2592010699, t16);
    t18 = (t0 + 2568);
    t19 = *((int *)t18);
    t20 = (t19 - 7);
    t21 = (t20 * -1);
    t22 = (1 * t21);
    t23 = (0U + t22);
    t24 = (t0 + 1620);
    t25 = (t24 + 32U);
    t26 = *((char **)t25);
    t27 = (t26 + 40U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = t17;
    xsi_driver_first_trans_delta(t24, t23, 1, 0LL);

LAB4:    t1 = (t0 + 2568);
    t6 = *((int *)t1);
    t2 = (t0 + 2572);
    t7 = *((int *)t2);
    t3 = (t6 + -1);
    t6 = t3;
    t5 = (t0 + 2568);
    *((int *)t5) = t6;
    goto LAB2;

}


extern void work_a_3576486456_0341724124_init()
{
	static char *pe[] = {(void *)work_a_3576486456_0341724124_p_0};
	xsi_register_didat("work_a_3576486456_0341724124", "isim/_tmp/work/a_3576486456_0341724124.didat");
	xsi_register_executes(pe);
}
