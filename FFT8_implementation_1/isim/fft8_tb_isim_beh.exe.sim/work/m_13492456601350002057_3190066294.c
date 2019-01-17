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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/DDP/xilinx project/FFT8_implementation_1/fft8.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {181U, 0U};
static unsigned int ng4[] = {4294967115U, 0U};
static const char *ng5 = "out1: %f , %f ";
static const char *ng6 = "out2: %f , %f ";
static const char *ng7 = "out3: %f , %f ";
static const char *ng8 = "out4: %f , %f ";
static const char *ng9 = "out5: %f , %f ";
static const char *ng10 = "out6: %f , %f ";
static const char *ng11 = "out7: %f , %f ";
static const char *ng12 = "out8: %f , %f ";



static void Initial_41_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(42, ng0);

LAB2:    xsi_set_current_line(43, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 9536);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_46_1(char *t0)
{
    char t6[8];
    char t30[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    double t31;
    double t32;
    double t33;
    double t34;
    double t35;
    double t36;

LAB0:    t1 = (t0 + 10696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 15232);
    *((int *)t2) = 1;
    t3 = (t0 + 10728);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);

LAB5:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 2896U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(53, ng0);

LAB14:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1456U);
    t3 = *((char **)t2);
    t2 = (t0 + 2096U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 16, t3, 16, t4, 16);
    t2 = (t0 + 6336);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 16);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    t2 = (t0 + 1776U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 16, t3, 16, t4, 16);
    t2 = (t0 + 6496);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 16);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1616U);
    t3 = *((char **)t2);
    t2 = (t0 + 2256U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 16, t3, 16, t4, 16);
    t2 = (t0 + 6656);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 16);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    t2 = (t0 + 2576U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 16, t3, 16, t4, 16);
    t2 = (t0 + 6976);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 16);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1456U);
    t3 = *((char **)t2);
    t2 = (t0 + 2096U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 16, t3, 16, t4, 16);
    t2 = (t0 + 8096);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 16);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    t2 = (t0 + 1776U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 16, t3, 16, t4, 16);
    t2 = (t0 + 8576);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 16);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1616U);
    t3 = *((char **)t2);
    t2 = (t0 + 2256U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 16, t3, 16, t4, 16);
    t2 = (t0 + 6816);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 16);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    t2 = (t0 + 2576U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 16, t3, 16, t4, 16);
    t2 = (t0 + 7136);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 16);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 6976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6656);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 16, t4, 16, t8, 16);
    t21 = (t0 + 7456);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 16);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 6336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6496);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 16, t4, 16, t8, 16);
    t21 = (t0 + 7296);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 16);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 7296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7456);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 16, t4, 16, t8, 16);
    t21 = (t0 + 7616);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 16);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6816);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 7136);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t5, 16, t21, 16);
    memset(t30, 0, 8);
    xsi_vlog_signed_multiply(t30, 32, t2, 16, t6, 32);
    t22 = (t0 + 6016);
    xsi_vlogvar_assign_value(t22, t30, 0, 0, 32);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 6016);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 8);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 8);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 65535U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 65535U);
    t8 = (t0 + 8256);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 16);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 6976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6656);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 16, t4, 16, t8, 16);
    t21 = (t0 + 8416);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 16);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 6336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6496);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 16, t4, 16, t8, 16);
    t21 = (t0 + 7936);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 16);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 7296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7456);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 16, t4, 16, t8, 16);
    t21 = (t0 + 7776);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 16);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6816);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 7136);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t5, 16, t21, 16);
    memset(t30, 0, 8);
    xsi_vlog_signed_multiply(t30, 32, t2, 16, t6, 32);
    t22 = (t0 + 6176);
    xsi_vlogvar_assign_value(t22, t30, 0, 0, 32);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 6176);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 8);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 8);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 65535U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 65535U);
    t8 = (t0 + 8736);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 16);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 8096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8256);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 16, t4, 16, t8, 16);
    t21 = (t0 + 8896);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 16);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 8096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8256);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 16, t4, 16, t8, 16);
    t21 = (t0 + 9056);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 16);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 8576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8736);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 16, t4, 16, t8, 16);
    t21 = (t0 + 9216);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 16);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 8576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8736);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 16, t4, 16, t8, 16);
    t21 = (t0 + 9376);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 16);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3056U);
    t3 = *((char **)t2);
    t31 = xsi_vlog_convert_to_real(t3, 16, 1);
    t2 = (t0 + 744);
    t4 = *((char **)t2);
    t32 = *((double *)t4);
    t33 = (t31 * t32);
    *((double *)t6) = t33;
    t2 = (t0 + 3216U);
    t5 = *((char **)t2);
    t34 = xsi_vlog_convert_to_real(t5, 16, 1);
    t2 = (t0 + 744);
    t7 = *((char **)t2);
    t35 = *((double *)t7);
    t36 = (t34 * t35);
    *((double *)t30) = t36;
    xsi_vlogfile_write(1, 0, 0, ng5, 3, t0, (char)114, t6, 64, (char)114, t30, 64);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 3376U);
    t3 = *((char **)t2);
    t31 = xsi_vlog_convert_to_real(t3, 16, 1);
    t2 = (t0 + 744);
    t4 = *((char **)t2);
    t32 = *((double *)t4);
    t33 = (t31 * t32);
    *((double *)t6) = t33;
    t2 = (t0 + 3536U);
    t5 = *((char **)t2);
    t34 = xsi_vlog_convert_to_real(t5, 16, 1);
    t2 = (t0 + 744);
    t7 = *((char **)t2);
    t35 = *((double *)t7);
    t36 = (t34 * t35);
    *((double *)t30) = t36;
    xsi_vlogfile_write(1, 0, 0, ng6, 3, t0, (char)114, t6, 64, (char)114, t30, 64);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3696U);
    t3 = *((char **)t2);
    t31 = xsi_vlog_convert_to_real(t3, 16, 1);
    t2 = (t0 + 744);
    t4 = *((char **)t2);
    t32 = *((double *)t4);
    t33 = (t31 * t32);
    *((double *)t6) = t33;
    t2 = (t0 + 3856U);
    t5 = *((char **)t2);
    t34 = xsi_vlog_convert_to_real(t5, 16, 1);
    t2 = (t0 + 744);
    t7 = *((char **)t2);
    t35 = *((double *)t7);
    t36 = (t34 * t35);
    *((double *)t30) = t36;
    xsi_vlogfile_write(1, 0, 0, ng7, 3, t0, (char)114, t6, 64, (char)114, t30, 64);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 4016U);
    t3 = *((char **)t2);
    t31 = xsi_vlog_convert_to_real(t3, 16, 1);
    t2 = (t0 + 744);
    t4 = *((char **)t2);
    t32 = *((double *)t4);
    t33 = (t31 * t32);
    *((double *)t6) = t33;
    t2 = (t0 + 4176U);
    t5 = *((char **)t2);
    t34 = xsi_vlog_convert_to_real(t5, 16, 1);
    t2 = (t0 + 744);
    t7 = *((char **)t2);
    t35 = *((double *)t7);
    t36 = (t34 * t35);
    *((double *)t30) = t36;
    xsi_vlogfile_write(1, 0, 0, ng8, 3, t0, (char)114, t6, 64, (char)114, t30, 64);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 4336U);
    t3 = *((char **)t2);
    t31 = xsi_vlog_convert_to_real(t3, 16, 1);
    t2 = (t0 + 744);
    t4 = *((char **)t2);
    t32 = *((double *)t4);
    t33 = (t31 * t32);
    *((double *)t6) = t33;
    t2 = (t0 + 4496U);
    t5 = *((char **)t2);
    t34 = xsi_vlog_convert_to_real(t5, 16, 1);
    t2 = (t0 + 744);
    t7 = *((char **)t2);
    t35 = *((double *)t7);
    t36 = (t34 * t35);
    *((double *)t30) = t36;
    xsi_vlogfile_write(1, 0, 0, ng9, 3, t0, (char)114, t6, 64, (char)114, t30, 64);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 4656U);
    t3 = *((char **)t2);
    t31 = xsi_vlog_convert_to_real(t3, 16, 1);
    t2 = (t0 + 744);
    t4 = *((char **)t2);
    t32 = *((double *)t4);
    t33 = (t31 * t32);
    *((double *)t6) = t33;
    t2 = (t0 + 4816U);
    t5 = *((char **)t2);
    t34 = xsi_vlog_convert_to_real(t5, 16, 1);
    t2 = (t0 + 744);
    t7 = *((char **)t2);
    t35 = *((double *)t7);
    t36 = (t34 * t35);
    *((double *)t30) = t36;
    xsi_vlogfile_write(1, 0, 0, ng10, 3, t0, (char)114, t6, 64, (char)114, t30, 64);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 4976U);
    t3 = *((char **)t2);
    t31 = xsi_vlog_convert_to_real(t3, 16, 1);
    t2 = (t0 + 744);
    t4 = *((char **)t2);
    t32 = *((double *)t4);
    t33 = (t31 * t32);
    *((double *)t6) = t33;
    t2 = (t0 + 5136U);
    t5 = *((char **)t2);
    t34 = xsi_vlog_convert_to_real(t5, 16, 1);
    t2 = (t0 + 744);
    t7 = *((char **)t2);
    t35 = *((double *)t7);
    t36 = (t34 * t35);
    *((double *)t30) = t36;
    xsi_vlogfile_write(1, 0, 0, ng11, 3, t0, (char)114, t6, 64, (char)114, t30, 64);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 5296U);
    t3 = *((char **)t2);
    t31 = xsi_vlog_convert_to_real(t3, 16, 1);
    t2 = (t0 + 744);
    t4 = *((char **)t2);
    t32 = *((double *)t4);
    t33 = (t31 * t32);
    *((double *)t6) = t33;
    t2 = (t0 + 5456U);
    t5 = *((char **)t2);
    t34 = xsi_vlog_convert_to_real(t5, 16, 1);
    t2 = (t0 + 744);
    t7 = *((char **)t2);
    t35 = *((double *)t7);
    t36 = (t34 * t35);
    *((double *)t30) = t36;
    xsi_vlogfile_write(1, 0, 0, ng12, 3, t0, (char)114, t6, 64, (char)114, t30, 64);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 9536);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(49, ng0);

LAB13:    xsi_set_current_line(50, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 9536);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    goto LAB12;

}

static void Cont_87_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 10944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 7616);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 15552);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 15248);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_88_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 11192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 15616);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 15);

LAB1:    return;
}

static void Cont_89_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 11440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 8896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 15680);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 15264);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_90_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 11688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 9216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 15744);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 15280);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_91_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 11936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 7936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 15808);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 15296);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_92_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 12184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 8416);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 15872);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 15312);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_93_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 12432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 9056);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 15936);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 15328);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_94_9(char *t0)
{
    char t3[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;

LAB0:    t1 = (t0 + 12680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 9376);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    *((unsigned int *)t3) = t9;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB4:    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 65535U);
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 65535U);
    t16 = ((char*)((ng2)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 16, t3, 16, t16, 16);
    t18 = (t0 + 16000);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t22, 0, 8);
    t23 = 65535U;
    t24 = t23;
    t25 = (t17 + 4);
    t26 = *((unsigned int *)t17);
    t23 = (t23 & t26);
    t27 = *((unsigned int *)t25);
    t24 = (t24 & t27);
    t28 = (t22 + 4);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 | t23);
    t30 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t30 | t24);
    xsi_driver_vfirst_trans(t18, 0, 15);
    t31 = (t0 + 15344);
    *((int *)t31) = 1;

LAB1:    return;
LAB5:    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t7);
    *((unsigned int *)t3) = (t10 | t11);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t6) = (t12 | t13);
    goto LAB4;

}

static void Cont_95_10(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 12928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 7776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 16064);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 15360);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_96_11(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 13176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 16128);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 15);

LAB1:    return;
}

static void Cont_97_12(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 13424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 9056);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 16192);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 15376);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_98_13(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 13672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 9376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 16256);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 15392);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_99_14(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 13920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 7936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 16320);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 15408);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_100_15(char *t0)
{
    char t3[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;

LAB0:    t1 = (t0 + 14168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 8416);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    *((unsigned int *)t3) = t9;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB4:    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 65535U);
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 65535U);
    t16 = ((char*)((ng2)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 16, t3, 16, t16, 16);
    t18 = (t0 + 16384);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t22, 0, 8);
    t23 = 65535U;
    t24 = t23;
    t25 = (t17 + 4);
    t26 = *((unsigned int *)t17);
    t23 = (t23 & t26);
    t27 = *((unsigned int *)t25);
    t24 = (t24 & t27);
    t28 = (t22 + 4);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 | t23);
    t30 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t30 | t24);
    xsi_driver_vfirst_trans(t18, 0, 15);
    t31 = (t0 + 15424);
    *((int *)t31) = 1;

LAB1:    return;
LAB5:    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t7);
    *((unsigned int *)t3) = (t10 | t11);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t6) = (t12 | t13);
    goto LAB4;

}

static void Cont_101_16(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 14416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 8896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 16448);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 15440);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_102_17(char *t0)
{
    char t3[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;

LAB0:    t1 = (t0 + 14664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 9216);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    *((unsigned int *)t3) = t9;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB4:    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 65535U);
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 65535U);
    t16 = ((char*)((ng2)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 16, t3, 16, t16, 16);
    t18 = (t0 + 16512);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t22, 0, 8);
    t23 = 65535U;
    t24 = t23;
    t25 = (t17 + 4);
    t26 = *((unsigned int *)t17);
    t23 = (t23 & t26);
    t27 = *((unsigned int *)t25);
    t24 = (t24 & t27);
    t28 = (t22 + 4);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 | t23);
    t30 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t30 | t24);
    xsi_driver_vfirst_trans(t18, 0, 15);
    t31 = (t0 + 15456);
    *((int *)t31) = 1;

LAB1:    return;
LAB5:    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t7);
    *((unsigned int *)t3) = (t10 | t11);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t6) = (t12 | t13);
    goto LAB4;

}

static void Cont_103_18(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 14912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 9536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 16576);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 15472);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_13492456601350002057_3190066294_init()
{
	static char *pe[] = {(void *)Initial_41_0,(void *)Always_46_1,(void *)Cont_87_2,(void *)Cont_88_3,(void *)Cont_89_4,(void *)Cont_90_5,(void *)Cont_91_6,(void *)Cont_92_7,(void *)Cont_93_8,(void *)Cont_94_9,(void *)Cont_95_10,(void *)Cont_96_11,(void *)Cont_97_12,(void *)Cont_98_13,(void *)Cont_99_14,(void *)Cont_100_15,(void *)Cont_101_16,(void *)Cont_102_17,(void *)Cont_103_18};
	xsi_register_didat("work_m_13492456601350002057_3190066294", "isim/fft8_tb_isim_beh.exe.sim/work/m_13492456601350002057_3190066294.didat");
	xsi_register_executes(pe);
}
