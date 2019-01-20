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
static const char *ng0 = "/home/ise/DDP/xilinx project/FFT8_implementation_3/multiplier.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {15, 0};
static int ng5[] = {29, 0};
static int ng6[] = {14, 0};
static int ng7[] = {1, 0};
static const char *ng8 = "%f * %f = %f ";



static void Cont_18_0(char *t0)
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

LAB0:    t1 = (t0 + 4096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 2864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5272);
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
    t18 = (t0 + 5160);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Initial_19_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(20, ng0);

LAB2:    xsi_set_current_line(21, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2864);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(22, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2384);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 30);
    xsi_set_current_line(23, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3184);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_26_2(char *t0)
{
    char t6[8];
    char t30[8];
    char t38[8];
    char t39[8];
    char t47[8];
    char t89[8];
    char t98[8];
    char t106[8];
    char t118[8];
    char t121[8];
    char t146[8];
    char t154[8];
    char t188[8];
    char t196[8];
    char t208[8];
    char t211[8];
    char t236[8];
    char t244[8];
    char t276[8];
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
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    int t71;
    int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t119;
    char *t120;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    char *t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    char *t153;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    char *t158;
    char *t159;
    char *t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;
    char *t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    int t178;
    int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    char *t186;
    char *t187;
    char *t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    char *t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    char *t203;
    char *t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    char *t209;
    char *t210;
    char *t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    char *t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    char *t225;
    char *t226;
    char *t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    char *t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    char *t243;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    char *t248;
    char *t249;
    char *t250;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    char *t258;
    char *t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    unsigned int t265;
    unsigned int t266;
    unsigned int t267;
    int t268;
    int t269;
    unsigned int t270;
    unsigned int t271;
    unsigned int t272;
    unsigned int t273;
    unsigned int t274;
    unsigned int t275;
    char *t277;
    int t278;
    int t279;
    double t280;
    double t281;
    double t282;
    double t283;
    double t284;
    double t285;
    double t286;
    double t287;
    double t288;

LAB0:    t1 = (t0 + 4592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 5176);
    *((int *)t2) = 1;
    t3 = (t0 + 4624);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(28, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
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

LAB11:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t6) = 1;

LAB17:    memset(t30, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t22) != 0)
        goto LAB20;

LAB21:    t29 = (t30 + 4);
    t31 = *((unsigned int *)t30);
    t32 = *((unsigned int *)t29);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB22;

LAB23:    memcpy(t47, t30, 8);

LAB24:    t79 = (t47 + 4);
    t80 = *((unsigned int *)t79);
    t81 = (~(t80));
    t82 = *((unsigned int *)t47);
    t83 = (t82 & t81);
    t84 = (t83 != 0);
    if (t84 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greatereq(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB128;

LAB129:
LAB130:
LAB34:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(29, ng0);

LAB13:    xsi_set_current_line(30, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 2864);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 30);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB12;

LAB16:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB17;

LAB18:    *((unsigned int *)t30) = 1;
    goto LAB21;

LAB20:    t28 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB21;

LAB22:    t34 = (t0 + 3184);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng4)));
    memset(t38, 0, 8);
    xsi_vlog_signed_less(t38, 32, t36, 32, t37, 32);
    memset(t39, 0, 8);
    t40 = (t38 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (~(t41));
    t43 = *((unsigned int *)t38);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t40) != 0)
        goto LAB27;

LAB28:    t48 = *((unsigned int *)t30);
    t49 = *((unsigned int *)t39);
    t50 = (t48 & t49);
    *((unsigned int *)t47) = t50;
    t51 = (t30 + 4);
    t52 = (t39 + 4);
    t53 = (t47 + 4);
    t54 = *((unsigned int *)t51);
    t55 = *((unsigned int *)t52);
    t56 = (t54 | t55);
    *((unsigned int *)t53) = t56;
    t57 = *((unsigned int *)t53);
    t58 = (t57 != 0);
    if (t58 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB24;

LAB25:    *((unsigned int *)t39) = 1;
    goto LAB28;

LAB27:    t46 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB28;

LAB29:    t59 = *((unsigned int *)t47);
    t60 = *((unsigned int *)t53);
    *((unsigned int *)t47) = (t59 | t60);
    t61 = (t30 + 4);
    t62 = (t39 + 4);
    t63 = *((unsigned int *)t30);
    t64 = (~(t63));
    t65 = *((unsigned int *)t61);
    t66 = (~(t65));
    t67 = *((unsigned int *)t39);
    t68 = (~(t67));
    t69 = *((unsigned int *)t62);
    t70 = (~(t69));
    t71 = (t64 & t66);
    t72 = (t68 & t70);
    t73 = (~(t71));
    t74 = (~(t72));
    t75 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t75 & t73);
    t76 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t76 & t74);
    t77 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t77 & t73);
    t78 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t78 & t74);
    goto LAB31;

LAB32:    xsi_set_current_line(35, ng0);

LAB35:    xsi_set_current_line(36, ng0);
    t85 = (t0 + 3184);
    t86 = (t85 + 56U);
    t87 = *((char **)t86);
    t88 = ((char*)((ng2)));
    memset(t89, 0, 8);
    xsi_vlog_signed_equal(t89, 32, t87, 32, t88, 32);
    t90 = (t89 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t89);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB36;

LAB37:
LAB38:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2544);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 3184);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    xsi_vlog_generic_get_index_select_value(t6, 1, t4, t8, 2, t28, 32, 1);
    t29 = ((char*)((ng3)));
    memset(t30, 0, 8);
    t34 = (t6 + 4);
    t35 = (t29 + 4);
    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t29);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t34);
    t13 = *((unsigned int *)t35);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t34);
    t17 = *((unsigned int *)t35);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB121;

LAB118:    if (t18 != 0)
        goto LAB120;

LAB119:    *((unsigned int *)t30) = 1;

LAB121:    t37 = (t30 + 4);
    t23 = *((unsigned int *)t37);
    t24 = (~(t23));
    t25 = *((unsigned int *)t30);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB122;

LAB123:
LAB124:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_rshift(t6, 30, t4, 30, t5, 32);
    t7 = (t0 + 2384);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 30);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 3184);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB34;

LAB36:    xsi_set_current_line(37, ng0);

LAB39:    xsi_set_current_line(38, ng0);
    t96 = (t0 + 1184U);
    t97 = *((char **)t96);
    memset(t98, 0, 8);
    t96 = (t98 + 4);
    t99 = (t97 + 4);
    t100 = *((unsigned int *)t97);
    t101 = (t100 >> 15);
    t102 = (t101 & 1);
    *((unsigned int *)t98) = t102;
    t103 = *((unsigned int *)t99);
    t104 = (t103 >> 15);
    t105 = (t104 & 1);
    *((unsigned int *)t96) = t105;
    memset(t106, 0, 8);
    t107 = (t98 + 4);
    t108 = *((unsigned int *)t107);
    t109 = (~(t108));
    t110 = *((unsigned int *)t98);
    t111 = (t110 & t109);
    t112 = (t111 & 1U);
    if (t112 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t107) != 0)
        goto LAB42;

LAB43:    t114 = (t106 + 4);
    t115 = *((unsigned int *)t106);
    t116 = *((unsigned int *)t114);
    t117 = (t115 || t116);
    if (t117 > 0)
        goto LAB44;

LAB45:    memcpy(t154, t106, 8);

LAB46:    t186 = (t0 + 1344U);
    t187 = *((char **)t186);
    memset(t188, 0, 8);
    t186 = (t188 + 4);
    t189 = (t187 + 4);
    t190 = *((unsigned int *)t187);
    t191 = (t190 >> 15);
    t192 = (t191 & 1);
    *((unsigned int *)t188) = t192;
    t193 = *((unsigned int *)t189);
    t194 = (t193 >> 15);
    t195 = (t194 & 1);
    *((unsigned int *)t186) = t195;
    memset(t196, 0, 8);
    t197 = (t188 + 4);
    t198 = *((unsigned int *)t197);
    t199 = (~(t198));
    t200 = *((unsigned int *)t188);
    t201 = (t200 & t199);
    t202 = (t201 & 1U);
    if (t202 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t197) != 0)
        goto LAB62;

LAB63:    t204 = (t196 + 4);
    t205 = *((unsigned int *)t196);
    t206 = *((unsigned int *)t204);
    t207 = (t205 || t206);
    if (t207 > 0)
        goto LAB64;

LAB65:    memcpy(t244, t196, 8);

LAB66:    memset(t276, 0, 8);
    xsi_vlog_unsigned_add(t276, 1, t154, 1, t244, 1);
    t277 = (t0 + 3024);
    xsi_vlogvar_assign_value(t277, t276, 0, 0, 1);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1184U);
    t3 = *((char **)t2);
    memset(t38, 0, 8);
    t2 = (t38 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 15);
    t11 = (t10 & 1);
    *((unsigned int *)t38) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 15);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t5 = ((char*)((ng1)));
    memset(t39, 0, 8);
    t7 = (t38 + 4);
    t8 = (t5 + 4);
    t15 = *((unsigned int *)t38);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t8);
    t20 = (t18 ^ t19);
    t23 = (t17 | t20);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t8);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t31 = (t23 & t27);
    if (t31 != 0)
        goto LAB83;

LAB80:    if (t26 != 0)
        goto LAB82;

LAB81:    *((unsigned int *)t39) = 1;

LAB83:    memset(t30, 0, 8);
    t22 = (t39 + 4);
    t32 = *((unsigned int *)t22);
    t33 = (~(t32));
    t41 = *((unsigned int *)t39);
    t42 = (t41 & t33);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t22) != 0)
        goto LAB86;

LAB87:    t29 = (t30 + 4);
    t44 = *((unsigned int *)t30);
    t45 = *((unsigned int *)t29);
    t48 = (t44 || t45);
    if (t48 > 0)
        goto LAB88;

LAB89:    t58 = *((unsigned int *)t30);
    t59 = (~(t58));
    t60 = *((unsigned int *)t29);
    t63 = (t59 || t60);
    if (t63 > 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t29) > 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t30) > 0)
        goto LAB94;

LAB95:    memcpy(t6, t106, 8);

LAB96:    t61 = (t0 + 2544);
    xsi_vlogvar_assign_value(t61, t6, 0, 0, 15);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    memset(t38, 0, 8);
    t2 = (t38 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 15);
    t11 = (t10 & 1);
    *((unsigned int *)t38) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 15);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t5 = ((char*)((ng1)));
    memset(t39, 0, 8);
    t7 = (t38 + 4);
    t8 = (t5 + 4);
    t15 = *((unsigned int *)t38);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t8);
    t20 = (t18 ^ t19);
    t23 = (t17 | t20);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t8);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t31 = (t23 & t27);
    if (t31 != 0)
        goto LAB102;

LAB99:    if (t26 != 0)
        goto LAB101;

LAB100:    *((unsigned int *)t39) = 1;

LAB102:    memset(t30, 0, 8);
    t22 = (t39 + 4);
    t32 = *((unsigned int *)t22);
    t33 = (~(t32));
    t41 = *((unsigned int *)t39);
    t42 = (t41 & t33);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB103;

LAB104:    if (*((unsigned int *)t22) != 0)
        goto LAB105;

LAB106:    t29 = (t30 + 4);
    t44 = *((unsigned int *)t30);
    t45 = *((unsigned int *)t29);
    t48 = (t44 || t45);
    if (t48 > 0)
        goto LAB107;

LAB108:    t58 = *((unsigned int *)t30);
    t59 = (~(t58));
    t60 = *((unsigned int *)t29);
    t63 = (t59 || t60);
    if (t63 > 0)
        goto LAB109;

LAB110:    if (*((unsigned int *)t29) > 0)
        goto LAB111;

LAB112:    if (*((unsigned int *)t30) > 0)
        goto LAB113;

LAB114:    memcpy(t6, t106, 8);

LAB115:    t61 = (t0 + 2704);
    xsi_vlogvar_assign_value(t61, t6, 0, 0, 15);
    goto LAB38;

LAB40:    *((unsigned int *)t106) = 1;
    goto LAB43;

LAB42:    t113 = (t106 + 4);
    *((unsigned int *)t106) = 1;
    *((unsigned int *)t113) = 1;
    goto LAB43;

LAB44:    t119 = (t0 + 1344U);
    t120 = *((char **)t119);
    memset(t121, 0, 8);
    t119 = (t121 + 4);
    t122 = (t120 + 4);
    t123 = *((unsigned int *)t120);
    t124 = (t123 >> 15);
    t125 = (t124 & 1);
    *((unsigned int *)t121) = t125;
    t126 = *((unsigned int *)t122);
    t127 = (t126 >> 15);
    t128 = (t127 & 1);
    *((unsigned int *)t119) = t128;
    memset(t118, 0, 8);
    t129 = (t121 + 4);
    t130 = *((unsigned int *)t129);
    t131 = (~(t130));
    t132 = *((unsigned int *)t121);
    t133 = (t132 & t131);
    t134 = (t133 & 1U);
    if (t134 != 0)
        goto LAB50;

LAB48:    if (*((unsigned int *)t129) == 0)
        goto LAB47;

LAB49:    t135 = (t118 + 4);
    *((unsigned int *)t118) = 1;
    *((unsigned int *)t135) = 1;

LAB50:    t136 = (t118 + 4);
    t137 = (t121 + 4);
    t138 = *((unsigned int *)t121);
    t139 = (~(t138));
    *((unsigned int *)t118) = t139;
    *((unsigned int *)t136) = 0;
    if (*((unsigned int *)t137) != 0)
        goto LAB52;

LAB51:    t144 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t144 & 1U);
    t145 = *((unsigned int *)t136);
    *((unsigned int *)t136) = (t145 & 1U);
    memset(t146, 0, 8);
    t147 = (t118 + 4);
    t148 = *((unsigned int *)t147);
    t149 = (~(t148));
    t150 = *((unsigned int *)t118);
    t151 = (t150 & t149);
    t152 = (t151 & 1U);
    if (t152 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t147) != 0)
        goto LAB55;

LAB56:    t155 = *((unsigned int *)t106);
    t156 = *((unsigned int *)t146);
    t157 = (t155 & t156);
    *((unsigned int *)t154) = t157;
    t158 = (t106 + 4);
    t159 = (t146 + 4);
    t160 = (t154 + 4);
    t161 = *((unsigned int *)t158);
    t162 = *((unsigned int *)t159);
    t163 = (t161 | t162);
    *((unsigned int *)t160) = t163;
    t164 = *((unsigned int *)t160);
    t165 = (t164 != 0);
    if (t165 == 1)
        goto LAB57;

LAB58:
LAB59:    goto LAB46;

LAB47:    *((unsigned int *)t118) = 1;
    goto LAB50;

LAB52:    t140 = *((unsigned int *)t118);
    t141 = *((unsigned int *)t137);
    *((unsigned int *)t118) = (t140 | t141);
    t142 = *((unsigned int *)t136);
    t143 = *((unsigned int *)t137);
    *((unsigned int *)t136) = (t142 | t143);
    goto LAB51;

LAB53:    *((unsigned int *)t146) = 1;
    goto LAB56;

LAB55:    t153 = (t146 + 4);
    *((unsigned int *)t146) = 1;
    *((unsigned int *)t153) = 1;
    goto LAB56;

LAB57:    t166 = *((unsigned int *)t154);
    t167 = *((unsigned int *)t160);
    *((unsigned int *)t154) = (t166 | t167);
    t168 = (t106 + 4);
    t169 = (t146 + 4);
    t170 = *((unsigned int *)t106);
    t171 = (~(t170));
    t172 = *((unsigned int *)t168);
    t173 = (~(t172));
    t174 = *((unsigned int *)t146);
    t175 = (~(t174));
    t176 = *((unsigned int *)t169);
    t177 = (~(t176));
    t178 = (t171 & t173);
    t179 = (t175 & t177);
    t180 = (~(t178));
    t181 = (~(t179));
    t182 = *((unsigned int *)t160);
    *((unsigned int *)t160) = (t182 & t180);
    t183 = *((unsigned int *)t160);
    *((unsigned int *)t160) = (t183 & t181);
    t184 = *((unsigned int *)t154);
    *((unsigned int *)t154) = (t184 & t180);
    t185 = *((unsigned int *)t154);
    *((unsigned int *)t154) = (t185 & t181);
    goto LAB59;

LAB60:    *((unsigned int *)t196) = 1;
    goto LAB63;

LAB62:    t203 = (t196 + 4);
    *((unsigned int *)t196) = 1;
    *((unsigned int *)t203) = 1;
    goto LAB63;

LAB64:    t209 = (t0 + 1184U);
    t210 = *((char **)t209);
    memset(t211, 0, 8);
    t209 = (t211 + 4);
    t212 = (t210 + 4);
    t213 = *((unsigned int *)t210);
    t214 = (t213 >> 15);
    t215 = (t214 & 1);
    *((unsigned int *)t211) = t215;
    t216 = *((unsigned int *)t212);
    t217 = (t216 >> 15);
    t218 = (t217 & 1);
    *((unsigned int *)t209) = t218;
    memset(t208, 0, 8);
    t219 = (t211 + 4);
    t220 = *((unsigned int *)t219);
    t221 = (~(t220));
    t222 = *((unsigned int *)t211);
    t223 = (t222 & t221);
    t224 = (t223 & 1U);
    if (t224 != 0)
        goto LAB70;

LAB68:    if (*((unsigned int *)t219) == 0)
        goto LAB67;

LAB69:    t225 = (t208 + 4);
    *((unsigned int *)t208) = 1;
    *((unsigned int *)t225) = 1;

LAB70:    t226 = (t208 + 4);
    t227 = (t211 + 4);
    t228 = *((unsigned int *)t211);
    t229 = (~(t228));
    *((unsigned int *)t208) = t229;
    *((unsigned int *)t226) = 0;
    if (*((unsigned int *)t227) != 0)
        goto LAB72;

LAB71:    t234 = *((unsigned int *)t208);
    *((unsigned int *)t208) = (t234 & 1U);
    t235 = *((unsigned int *)t226);
    *((unsigned int *)t226) = (t235 & 1U);
    memset(t236, 0, 8);
    t237 = (t208 + 4);
    t238 = *((unsigned int *)t237);
    t239 = (~(t238));
    t240 = *((unsigned int *)t208);
    t241 = (t240 & t239);
    t242 = (t241 & 1U);
    if (t242 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t237) != 0)
        goto LAB75;

LAB76:    t245 = *((unsigned int *)t196);
    t246 = *((unsigned int *)t236);
    t247 = (t245 & t246);
    *((unsigned int *)t244) = t247;
    t248 = (t196 + 4);
    t249 = (t236 + 4);
    t250 = (t244 + 4);
    t251 = *((unsigned int *)t248);
    t252 = *((unsigned int *)t249);
    t253 = (t251 | t252);
    *((unsigned int *)t250) = t253;
    t254 = *((unsigned int *)t250);
    t255 = (t254 != 0);
    if (t255 == 1)
        goto LAB77;

LAB78:
LAB79:    goto LAB66;

LAB67:    *((unsigned int *)t208) = 1;
    goto LAB70;

LAB72:    t230 = *((unsigned int *)t208);
    t231 = *((unsigned int *)t227);
    *((unsigned int *)t208) = (t230 | t231);
    t232 = *((unsigned int *)t226);
    t233 = *((unsigned int *)t227);
    *((unsigned int *)t226) = (t232 | t233);
    goto LAB71;

LAB73:    *((unsigned int *)t236) = 1;
    goto LAB76;

LAB75:    t243 = (t236 + 4);
    *((unsigned int *)t236) = 1;
    *((unsigned int *)t243) = 1;
    goto LAB76;

LAB77:    t256 = *((unsigned int *)t244);
    t257 = *((unsigned int *)t250);
    *((unsigned int *)t244) = (t256 | t257);
    t258 = (t196 + 4);
    t259 = (t236 + 4);
    t260 = *((unsigned int *)t196);
    t261 = (~(t260));
    t262 = *((unsigned int *)t258);
    t263 = (~(t262));
    t264 = *((unsigned int *)t236);
    t265 = (~(t264));
    t266 = *((unsigned int *)t259);
    t267 = (~(t266));
    t268 = (t261 & t263);
    t269 = (t265 & t267);
    t270 = (~(t268));
    t271 = (~(t269));
    t272 = *((unsigned int *)t250);
    *((unsigned int *)t250) = (t272 & t270);
    t273 = *((unsigned int *)t250);
    *((unsigned int *)t250) = (t273 & t271);
    t274 = *((unsigned int *)t244);
    *((unsigned int *)t244) = (t274 & t270);
    t275 = *((unsigned int *)t244);
    *((unsigned int *)t244) = (t275 & t271);
    goto LAB79;

LAB82:    t21 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB83;

LAB84:    *((unsigned int *)t30) = 1;
    goto LAB87;

LAB86:    t28 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB87;

LAB88:    t34 = (t0 + 1184U);
    t35 = *((char **)t34);
    memset(t47, 0, 8);
    t34 = (t47 + 4);
    t36 = (t35 + 4);
    t49 = *((unsigned int *)t35);
    t50 = (t49 >> 0);
    *((unsigned int *)t47) = t50;
    t54 = *((unsigned int *)t36);
    t55 = (t54 >> 0);
    *((unsigned int *)t34) = t55;
    t56 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t56 & 32767U);
    t57 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t57 & 32767U);
    goto LAB89;

LAB90:    t37 = (t0 + 1184U);
    t40 = *((char **)t37);
    memset(t98, 0, 8);
    t37 = (t98 + 4);
    t46 = (t40 + 4);
    t64 = *((unsigned int *)t40);
    t65 = (t64 >> 0);
    *((unsigned int *)t98) = t65;
    t66 = *((unsigned int *)t46);
    t67 = (t66 >> 0);
    *((unsigned int *)t37) = t67;
    t68 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t68 & 32767U);
    t69 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t69 & 32767U);
    memset(t89, 0, 8);
    t51 = (t89 + 4);
    t52 = (t98 + 4);
    t70 = *((unsigned int *)t98);
    t73 = (~(t70));
    *((unsigned int *)t89) = t73;
    *((unsigned int *)t51) = 0;
    if (*((unsigned int *)t52) != 0)
        goto LAB98;

LAB97:    t78 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t78 & 32767U);
    t80 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t80 & 32767U);
    t53 = ((char*)((ng3)));
    memset(t106, 0, 8);
    xsi_vlog_unsigned_add(t106, 15, t89, 15, t53, 15);
    goto LAB91;

LAB92:    xsi_vlog_unsigned_bit_combine(t6, 15, t47, 15, t106, 15);
    goto LAB96;

LAB94:    memcpy(t6, t47, 8);
    goto LAB96;

LAB98:    t74 = *((unsigned int *)t89);
    t75 = *((unsigned int *)t52);
    *((unsigned int *)t89) = (t74 | t75);
    t76 = *((unsigned int *)t51);
    t77 = *((unsigned int *)t52);
    *((unsigned int *)t51) = (t76 | t77);
    goto LAB97;

LAB101:    t21 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB102;

LAB103:    *((unsigned int *)t30) = 1;
    goto LAB106;

LAB105:    t28 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB106;

LAB107:    t34 = (t0 + 1344U);
    t35 = *((char **)t34);
    memset(t47, 0, 8);
    t34 = (t47 + 4);
    t36 = (t35 + 4);
    t49 = *((unsigned int *)t35);
    t50 = (t49 >> 0);
    *((unsigned int *)t47) = t50;
    t54 = *((unsigned int *)t36);
    t55 = (t54 >> 0);
    *((unsigned int *)t34) = t55;
    t56 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t56 & 32767U);
    t57 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t57 & 32767U);
    goto LAB108;

LAB109:    t37 = (t0 + 1344U);
    t40 = *((char **)t37);
    memset(t98, 0, 8);
    t37 = (t98 + 4);
    t46 = (t40 + 4);
    t64 = *((unsigned int *)t40);
    t65 = (t64 >> 0);
    *((unsigned int *)t98) = t65;
    t66 = *((unsigned int *)t46);
    t67 = (t66 >> 0);
    *((unsigned int *)t37) = t67;
    t68 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t68 & 32767U);
    t69 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t69 & 32767U);
    memset(t89, 0, 8);
    t51 = (t89 + 4);
    t52 = (t98 + 4);
    t70 = *((unsigned int *)t98);
    t73 = (~(t70));
    *((unsigned int *)t89) = t73;
    *((unsigned int *)t51) = 0;
    if (*((unsigned int *)t52) != 0)
        goto LAB117;

LAB116:    t78 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t78 & 32767U);
    t80 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t80 & 32767U);
    t53 = ((char*)((ng3)));
    memset(t106, 0, 8);
    xsi_vlog_unsigned_add(t106, 15, t89, 15, t53, 15);
    goto LAB110;

LAB111:    xsi_vlog_unsigned_bit_combine(t6, 15, t47, 15, t106, 15);
    goto LAB115;

LAB113:    memcpy(t6, t47, 8);
    goto LAB115;

LAB117:    t74 = *((unsigned int *)t89);
    t75 = *((unsigned int *)t52);
    *((unsigned int *)t89) = (t74 | t75);
    t76 = *((unsigned int *)t51);
    t77 = *((unsigned int *)t52);
    *((unsigned int *)t51) = (t76 | t77);
    goto LAB116;

LAB120:    t36 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB121;

LAB122:    xsi_set_current_line(43, ng0);

LAB125:    xsi_set_current_line(44, ng0);
    t40 = (t0 + 2384);
    t46 = (t40 + 56U);
    t51 = *((char **)t46);
    memset(t38, 0, 8);
    t52 = (t38 + 4);
    t53 = (t51 + 4);
    t31 = *((unsigned int *)t51);
    t32 = (t31 >> 14);
    *((unsigned int *)t38) = t32;
    t33 = *((unsigned int *)t53);
    t41 = (t33 >> 14);
    *((unsigned int *)t52) = t41;
    t42 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t42 & 65535U);
    t43 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t43 & 65535U);
    t61 = (t0 + 2704);
    t62 = (t61 + 56U);
    t79 = *((char **)t62);
    memset(t39, 0, 8);
    t85 = (t39 + 4);
    t86 = (t79 + 4);
    t44 = *((unsigned int *)t79);
    t45 = (t44 >> 0);
    *((unsigned int *)t39) = t45;
    t48 = *((unsigned int *)t86);
    t49 = (t48 >> 0);
    *((unsigned int *)t85) = t49;
    t50 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t50 & 32767U);
    t54 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t54 & 32767U);
    memset(t47, 0, 8);
    xsi_vlog_unsigned_add(t47, 16, t38, 16, t39, 16);
    t87 = (t0 + 2384);
    t88 = (t0 + 2384);
    t90 = (t88 + 72U);
    t96 = *((char **)t90);
    t97 = ((char*)((ng5)));
    t99 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t89, t98, t106, ((int*)(t96)), 2, t97, 32, 1, t99, 32, 1);
    t107 = (t89 + 4);
    t55 = *((unsigned int *)t107);
    t71 = (!(t55));
    t113 = (t98 + 4);
    t56 = *((unsigned int *)t113);
    t72 = (!(t56));
    t178 = (t71 && t72);
    t114 = (t106 + 4);
    t57 = *((unsigned int *)t114);
    t179 = (!(t57));
    t268 = (t178 && t179);
    if (t268 == 1)
        goto LAB126;

LAB127:    goto LAB124;

LAB126:    t58 = *((unsigned int *)t106);
    t269 = (t58 + 0);
    t59 = *((unsigned int *)t89);
    t60 = *((unsigned int *)t98);
    t278 = (t59 - t60);
    t279 = (t278 + 1);
    xsi_vlogvar_assign_value(t87, t47, t269, *((unsigned int *)t98), t279);
    goto LAB127;

LAB128:    xsi_set_current_line(50, ng0);

LAB131:    xsi_set_current_line(51, ng0);
    t8 = ((char*)((ng3)));
    t21 = (t0 + 2864);
    xsi_vlogvar_assign_value(t21, t8, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1184U);
    t3 = *((char **)t2);
    t280 = xsi_vlog_convert_to_real(t3, 16, 1);
    t2 = (t0 + 472);
    t4 = *((char **)t2);
    t281 = *((double *)t4);
    t282 = (t280 * t281);
    *((double *)t6) = t282;
    t2 = (t0 + 1344U);
    t5 = *((char **)t2);
    t283 = xsi_vlog_convert_to_real(t5, 16, 1);
    t2 = (t0 + 472);
    t7 = *((char **)t2);
    t284 = *((double *)t7);
    t285 = (t283 * t284);
    *((double *)t30) = t285;
    t2 = (t0 + 1824U);
    t8 = *((char **)t2);
    t286 = xsi_vlog_convert_to_real(t8, 16, 1);
    t2 = (t0 + 472);
    t21 = *((char **)t2);
    t287 = *((double *)t21);
    t288 = (t286 * t287);
    *((double *)t38) = t288;
    xsi_vlogfile_write(1, 0, 0, ng8, 4, t0, (char)114, t6, 64, (char)114, t30, 64, (char)114, t38, 64);
    goto LAB130;

}

static void Cont_55_3(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
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

LAB0:    t1 = (t0 + 4840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2384);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t4 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 7);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 7);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t13 & 65535U);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 65535U);
    t15 = (t0 + 3024);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlogtype_concat(t3, 17, 17, 2U, t17, 1, t4, 16);
    t18 = (t0 + 5336);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t22, 0, 8);
    t23 = 65535U;
    t24 = t23;
    t25 = (t3 + 4);
    t26 = *((unsigned int *)t3);
    t23 = (t23 & t26);
    t27 = *((unsigned int *)t25);
    t24 = (t24 & t27);
    t28 = (t22 + 4);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 | t23);
    t30 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t30 | t24);
    xsi_driver_vfirst_trans(t18, 0, 15);
    t31 = (t0 + 5192);
    *((int *)t31) = 1;

LAB1:    return;
}


extern void work_m_11128598583894490341_1345475044_init()
{
	static char *pe[] = {(void *)Cont_18_0,(void *)Initial_19_1,(void *)Always_26_2,(void *)Cont_55_3};
	xsi_register_didat("work_m_11128598583894490341_1345475044", "isim/fft8_tb_isim_beh.exe.sim/work/m_11128598583894490341_1345475044.didat");
	xsi_register_executes(pe);
}
