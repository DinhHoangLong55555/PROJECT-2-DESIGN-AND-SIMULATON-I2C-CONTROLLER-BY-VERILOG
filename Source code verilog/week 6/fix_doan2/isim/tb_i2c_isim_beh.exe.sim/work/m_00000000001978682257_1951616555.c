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
static const char *ng0 = "C:/Verilog/fix_doan2/master_i2c.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 4294967295U};
static int ng4[] = {7, 0};



static void Cont_58_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t22[8];
    char t39[8];
    char t54[8];
    char t62[8];
    char *t1;
    char *t2;
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
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    int t86;
    int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    char *t111;
    char *t112;
    char *t113;
    char *t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;

LAB0:    t1 = (t0 + 6608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2568U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
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
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t22, 0, 8);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t23) != 0)
        goto LAB10;

LAB11:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB12;

LAB13:    memcpy(t62, t22, 8);

LAB14:    memset(t4, 0, 8);
    t94 = (t62 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t62);
    t98 = (t97 & t96);
    t99 = (t98 & 1U);
    if (t99 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t94) != 0)
        goto LAB28;

LAB29:    t101 = (t4 + 4);
    t102 = *((unsigned int *)t4);
    t103 = *((unsigned int *)t101);
    t104 = (t102 || t103);
    if (t104 > 0)
        goto LAB30;

LAB31:    t106 = *((unsigned int *)t4);
    t107 = (~(t106));
    t108 = *((unsigned int *)t101);
    t109 = (t107 || t108);
    if (t109 > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t101) > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t4) > 0)
        goto LAB36;

LAB37:    memcpy(t3, t110, 8);

LAB38:    t111 = (t0 + 8856);
    t112 = (t111 + 56U);
    t113 = *((char **)t112);
    t114 = (t113 + 56U);
    t115 = *((char **)t114);
    memset(t115, 0, 8);
    t116 = 1U;
    t117 = t116;
    t118 = (t3 + 4);
    t119 = *((unsigned int *)t3);
    t116 = (t116 & t119);
    t120 = *((unsigned int *)t118);
    t117 = (t117 & t120);
    t121 = (t115 + 4);
    t122 = *((unsigned int *)t115);
    *((unsigned int *)t115) = (t122 | t116);
    t123 = *((unsigned int *)t121);
    *((unsigned int *)t121) = (t123 | t117);
    xsi_driver_vfirst_trans(t111, 0, 0);
    t124 = (t0 + 8664);
    *((int *)t124) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t22) = 1;
    goto LAB11;

LAB10:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB11;

LAB12:    t34 = (t0 + 4408);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t0 + 472);
    t38 = *((char **)t37);
    memset(t39, 0, 8);
    t37 = (t36 + 4);
    t40 = (t38 + 4);
    t41 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t38);
    t43 = (t41 ^ t42);
    t44 = *((unsigned int *)t37);
    t45 = *((unsigned int *)t40);
    t46 = (t44 ^ t45);
    t47 = (t43 | t46);
    t48 = *((unsigned int *)t37);
    t49 = *((unsigned int *)t40);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB18;

LAB15:    if (t50 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t39) = 1;

LAB18:    memset(t54, 0, 8);
    t55 = (t39 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t39);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t55) != 0)
        goto LAB21;

LAB22:    t63 = *((unsigned int *)t22);
    t64 = *((unsigned int *)t54);
    t65 = (t63 & t64);
    *((unsigned int *)t62) = t65;
    t66 = (t22 + 4);
    t67 = (t54 + 4);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB17:    t53 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t54) = 1;
    goto LAB22;

LAB21:    t61 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB22;

LAB23:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    t76 = (t22 + 4);
    t77 = (t54 + 4);
    t78 = *((unsigned int *)t22);
    t79 = (~(t78));
    t80 = *((unsigned int *)t76);
    t81 = (~(t80));
    t82 = *((unsigned int *)t54);
    t83 = (~(t82));
    t84 = *((unsigned int *)t77);
    t85 = (~(t84));
    t86 = (t79 & t81);
    t87 = (t83 & t85);
    t88 = (~(t86));
    t89 = (~(t87));
    t90 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t90 & t88);
    t91 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t91 & t89);
    t92 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t92 & t88);
    t93 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t93 & t89);
    goto LAB25;

LAB26:    *((unsigned int *)t4) = 1;
    goto LAB29;

LAB28:    t100 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t100) = 1;
    goto LAB29;

LAB30:    t105 = ((char*)((ng2)));
    goto LAB31;

LAB32:    t110 = ((char*)((ng1)));
    goto LAB33;

LAB34:    xsi_vlog_unsigned_bit_combine(t3, 32, t105, 32, t110, 32);
    goto LAB38;

LAB36:    memcpy(t3, t105, 8);
    goto LAB38;

}

static void Cont_59_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char t43[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;

LAB0:    t1 = (t0 + 6856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 5528);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t43, 8);

LAB20:    t44 = (t0 + 8920);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    memset(t48, 0, 8);
    t49 = 1U;
    t50 = t49;
    t51 = (t3 + 4);
    t52 = *((unsigned int *)t3);
    t49 = (t49 & t52);
    t53 = *((unsigned int *)t51);
    t50 = (t50 & t53);
    t54 = (t48 + 4);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t55 | t49);
    t56 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t56 | t50);
    xsi_driver_vfirst_trans(t44, 0, 0);
    t57 = (t0 + 8680);
    *((int *)t57) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t35 = ((char*)((ng2)));
    goto LAB13;

LAB14:    t40 = (t0 + 5688);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memcpy(t43, t42, 8);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t35, 32, t43, 32);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

}

static void Cont_60_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;

LAB0:    t1 = (t0 + 7104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 5208);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t39 = *((unsigned int *)t4);
    t40 = (~(t39));
    t41 = *((unsigned int *)t31);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t43, 8);

LAB20:    t44 = (t0 + 8984);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    memset(t48, 0, 8);
    t49 = 1U;
    t50 = t49;
    t51 = (t3 + 4);
    t52 = *((unsigned int *)t3);
    t49 = (t49 & t52);
    t53 = *((unsigned int *)t51);
    t50 = (t50 & t53);
    t54 = (t48 + 4);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t55 | t49);
    t56 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t56 | t50);
    xsi_driver_vfirst_trans(t44, 0, 0);
    t57 = (t0 + 8696);
    *((int *)t57) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t35 = (t0 + 5368);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t38, t37, 8);
    goto LAB13;

LAB14:    t43 = ((char*)((ng3)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t38, 32, t43, 32);
    goto LAB20;

LAB18:    memcpy(t3, t38, 8);
    goto LAB20;

}

static void Cont_61_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char t24[8];
    char t41[8];
    char t56[8];
    char t64[8];
    char t96[8];
    char t113[8];
    char t129[8];
    char t137[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    int t88;
    int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    char *t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    char *t142;
    char *t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    char *t151;
    char *t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    char *t171;
    char *t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    char *t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    char *t181;
    char *t182;
    char *t183;
    char *t184;
    char *t185;
    char *t186;
    unsigned int t187;
    unsigned int t188;
    char *t189;
    unsigned int t190;
    unsigned int t191;
    char *t192;
    unsigned int t193;
    unsigned int t194;
    char *t195;

LAB0:    t1 = (t0 + 7352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 5208);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t24, 0, 8);
    t25 = (t8 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t25) != 0)
        goto LAB10;

LAB11:    t32 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t32);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB12;

LAB13:    memcpy(t64, t24, 8);

LAB14:    memset(t96, 0, 8);
    t97 = (t64 + 4);
    t98 = *((unsigned int *)t97);
    t99 = (~(t98));
    t100 = *((unsigned int *)t64);
    t101 = (t100 & t99);
    t102 = (t101 & 1U);
    if (t102 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t97) != 0)
        goto LAB28;

LAB29:    t104 = (t96 + 4);
    t105 = *((unsigned int *)t96);
    t106 = (!(t105));
    t107 = *((unsigned int *)t104);
    t108 = (t106 || t107);
    if (t108 > 0)
        goto LAB30;

LAB31:    memcpy(t137, t96, 8);

LAB32:    memset(t4, 0, 8);
    t165 = (t137 + 4);
    t166 = *((unsigned int *)t165);
    t167 = (~(t166));
    t168 = *((unsigned int *)t137);
    t169 = (t168 & t167);
    t170 = (t169 & 1U);
    if (t170 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t165) != 0)
        goto LAB46;

LAB47:    t172 = (t4 + 4);
    t173 = *((unsigned int *)t4);
    t174 = *((unsigned int *)t172);
    t175 = (t173 || t174);
    if (t175 > 0)
        goto LAB48;

LAB49:    t177 = *((unsigned int *)t4);
    t178 = (~(t177));
    t179 = *((unsigned int *)t172);
    t180 = (t178 || t179);
    if (t180 > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t172) > 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t4) > 0)
        goto LAB54;

LAB55:    memcpy(t3, t181, 8);

LAB56:    t182 = (t0 + 9048);
    t183 = (t182 + 56U);
    t184 = *((char **)t183);
    t185 = (t184 + 56U);
    t186 = *((char **)t185);
    memset(t186, 0, 8);
    t187 = 1U;
    t188 = t187;
    t189 = (t3 + 4);
    t190 = *((unsigned int *)t3);
    t187 = (t187 & t190);
    t191 = *((unsigned int *)t189);
    t188 = (t188 & t191);
    t192 = (t186 + 4);
    t193 = *((unsigned int *)t186);
    *((unsigned int *)t186) = (t193 | t187);
    t194 = *((unsigned int *)t192);
    *((unsigned int *)t192) = (t194 | t188);
    xsi_driver_vfirst_trans(t182, 0, 0);
    t195 = (t0 + 8712);
    *((int *)t195) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t24) = 1;
    goto LAB11;

LAB10:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB11;

LAB12:    t36 = (t0 + 4408);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t0 + 472);
    t40 = *((char **)t39);
    memset(t41, 0, 8);
    t39 = (t38 + 4);
    t42 = (t40 + 4);
    t43 = *((unsigned int *)t38);
    t44 = *((unsigned int *)t40);
    t45 = (t43 ^ t44);
    t46 = *((unsigned int *)t39);
    t47 = *((unsigned int *)t42);
    t48 = (t46 ^ t47);
    t49 = (t45 | t48);
    t50 = *((unsigned int *)t39);
    t51 = *((unsigned int *)t42);
    t52 = (t50 | t51);
    t53 = (~(t52));
    t54 = (t49 & t53);
    if (t54 != 0)
        goto LAB16;

LAB15:    if (t52 != 0)
        goto LAB17;

LAB18:    memset(t56, 0, 8);
    t57 = (t41 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t41);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t57) != 0)
        goto LAB21;

LAB22:    t65 = *((unsigned int *)t24);
    t66 = *((unsigned int *)t56);
    t67 = (t65 & t66);
    *((unsigned int *)t64) = t67;
    t68 = (t24 + 4);
    t69 = (t56 + 4);
    t70 = (t64 + 4);
    t71 = *((unsigned int *)t68);
    t72 = *((unsigned int *)t69);
    t73 = (t71 | t72);
    *((unsigned int *)t70) = t73;
    t74 = *((unsigned int *)t70);
    t75 = (t74 != 0);
    if (t75 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB16:    *((unsigned int *)t41) = 1;
    goto LAB18;

LAB17:    t55 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t56) = 1;
    goto LAB22;

LAB21:    t63 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB22;

LAB23:    t76 = *((unsigned int *)t64);
    t77 = *((unsigned int *)t70);
    *((unsigned int *)t64) = (t76 | t77);
    t78 = (t24 + 4);
    t79 = (t56 + 4);
    t80 = *((unsigned int *)t24);
    t81 = (~(t80));
    t82 = *((unsigned int *)t78);
    t83 = (~(t82));
    t84 = *((unsigned int *)t56);
    t85 = (~(t84));
    t86 = *((unsigned int *)t79);
    t87 = (~(t86));
    t88 = (t81 & t83);
    t89 = (t85 & t87);
    t90 = (~(t88));
    t91 = (~(t89));
    t92 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t92 & t90);
    t93 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t93 & t91);
    t94 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t94 & t90);
    t95 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t95 & t91);
    goto LAB25;

LAB26:    *((unsigned int *)t96) = 1;
    goto LAB29;

LAB28:    t103 = (t96 + 4);
    *((unsigned int *)t96) = 1;
    *((unsigned int *)t103) = 1;
    goto LAB29;

LAB30:    t109 = (t0 + 5208);
    t110 = (t109 + 56U);
    t111 = *((char **)t110);
    t112 = ((char*)((ng1)));
    memset(t113, 0, 8);
    t114 = (t111 + 4);
    t115 = (t112 + 4);
    t116 = *((unsigned int *)t111);
    t117 = *((unsigned int *)t112);
    t118 = (t116 ^ t117);
    t119 = *((unsigned int *)t114);
    t120 = *((unsigned int *)t115);
    t121 = (t119 ^ t120);
    t122 = (t118 | t121);
    t123 = *((unsigned int *)t114);
    t124 = *((unsigned int *)t115);
    t125 = (t123 | t124);
    t126 = (~(t125));
    t127 = (t122 & t126);
    if (t127 != 0)
        goto LAB36;

LAB33:    if (t125 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t113) = 1;

LAB36:    memset(t129, 0, 8);
    t130 = (t113 + 4);
    t131 = *((unsigned int *)t130);
    t132 = (~(t131));
    t133 = *((unsigned int *)t113);
    t134 = (t133 & t132);
    t135 = (t134 & 1U);
    if (t135 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t130) != 0)
        goto LAB39;

LAB40:    t138 = *((unsigned int *)t96);
    t139 = *((unsigned int *)t129);
    t140 = (t138 | t139);
    *((unsigned int *)t137) = t140;
    t141 = (t96 + 4);
    t142 = (t129 + 4);
    t143 = (t137 + 4);
    t144 = *((unsigned int *)t141);
    t145 = *((unsigned int *)t142);
    t146 = (t144 | t145);
    *((unsigned int *)t143) = t146;
    t147 = *((unsigned int *)t143);
    t148 = (t147 != 0);
    if (t148 == 1)
        goto LAB41;

LAB42:
LAB43:    goto LAB32;

LAB35:    t128 = (t113 + 4);
    *((unsigned int *)t113) = 1;
    *((unsigned int *)t128) = 1;
    goto LAB36;

LAB37:    *((unsigned int *)t129) = 1;
    goto LAB40;

LAB39:    t136 = (t129 + 4);
    *((unsigned int *)t129) = 1;
    *((unsigned int *)t136) = 1;
    goto LAB40;

LAB41:    t149 = *((unsigned int *)t137);
    t150 = *((unsigned int *)t143);
    *((unsigned int *)t137) = (t149 | t150);
    t151 = (t96 + 4);
    t152 = (t129 + 4);
    t153 = *((unsigned int *)t151);
    t154 = (~(t153));
    t155 = *((unsigned int *)t96);
    t156 = (t155 & t154);
    t157 = *((unsigned int *)t152);
    t158 = (~(t157));
    t159 = *((unsigned int *)t129);
    t160 = (t159 & t158);
    t161 = (~(t156));
    t162 = (~(t160));
    t163 = *((unsigned int *)t143);
    *((unsigned int *)t143) = (t163 & t161);
    t164 = *((unsigned int *)t143);
    *((unsigned int *)t143) = (t164 & t162);
    goto LAB43;

LAB44:    *((unsigned int *)t4) = 1;
    goto LAB47;

LAB46:    t171 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t171) = 1;
    goto LAB47;

LAB48:    t176 = ((char*)((ng2)));
    goto LAB49;

LAB50:    t181 = ((char*)((ng1)));
    goto LAB51;

LAB52:    xsi_vlog_unsigned_bit_combine(t3, 32, t176, 32, t181, 32);
    goto LAB56;

LAB54:    memcpy(t3, t176, 8);
    goto LAB56;

}

static void Always_64_4(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 7600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 8728);
    *((int *)t2) = 1;
    t3 = (t0 + 7632);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(64, ng0);

LAB5:    xsi_set_current_line(66, ng0);
    t5 = (t0 + 5688);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t8) == 0)
        goto LAB6;

LAB8:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB9:    t15 = (t4 + 4);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (~(t17));
    *((unsigned int *)t4) = t18;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB11;

LAB10:    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 1U);
    t24 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t24 & 1U);
    t25 = (t0 + 5688);
    xsi_vlogvar_wait_assign_value(t25, t4, 0, 0, 1, 0LL);
    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t16);
    *((unsigned int *)t4) = (t19 | t20);
    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t21 | t22);
    goto LAB10;

}

static void Always_73_5(char *t0)
{
    char t6[8];
    char t30[8];
    char t40[8];
    char t55[8];
    char t63[8];
    char t91[8];
    char t109[8];
    char t124[8];
    char t132[8];
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
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    char *t137;
    char *t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    char *t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    char *t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    char *t166;
    char *t167;

LAB0:    t1 = (t0 + 7848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 8744);
    *((int *)t2) = 1;
    t3 = (t0 + 7880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(73, ng0);

LAB5:    xsi_set_current_line(74, ng0);
    t4 = (t0 + 2568U);
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

LAB11:    xsi_set_current_line(76, ng0);

LAB14:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 4408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB18;

LAB15:    if (t18 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t6) = 1;

LAB18:    memset(t30, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t22) != 0)
        goto LAB21;

LAB22:    t29 = (t30 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = *((unsigned int *)t29);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB23;

LAB24:    memcpy(t63, t30, 8);

LAB25:    memset(t91, 0, 8);
    t92 = (t63 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t63);
    t96 = (t95 & t94);
    t97 = (t96 & 1U);
    if (t97 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t92) != 0)
        goto LAB39;

LAB40:    t99 = (t91 + 4);
    t100 = *((unsigned int *)t91);
    t101 = (!(t100));
    t102 = *((unsigned int *)t99);
    t103 = (t101 || t102);
    if (t103 > 0)
        goto LAB41;

LAB42:    memcpy(t132, t91, 8);

LAB43:    t160 = (t132 + 4);
    t161 = *((unsigned int *)t160);
    t162 = (~(t161));
    t163 = *((unsigned int *)t132);
    t164 = (t163 & t162);
    t165 = (t164 != 0);
    if (t165 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(79, ng0);

LAB59:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB57:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(74, ng0);

LAB13:    xsi_set_current_line(75, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 5528);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    goto LAB12;

LAB17:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t30) = 1;
    goto LAB22;

LAB21:    t28 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB22;

LAB23:    t35 = (t0 + 4408);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t0 + 608);
    t39 = *((char **)t38);
    memset(t40, 0, 8);
    t38 = (t37 + 4);
    t41 = (t39 + 4);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t39);
    t44 = (t42 ^ t43);
    t45 = *((unsigned int *)t38);
    t46 = *((unsigned int *)t41);
    t47 = (t45 ^ t46);
    t48 = (t44 | t47);
    t49 = *((unsigned int *)t38);
    t50 = *((unsigned int *)t41);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t48 & t52);
    if (t53 != 0)
        goto LAB29;

LAB26:    if (t51 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t40) = 1;

LAB29:    memset(t55, 0, 8);
    t56 = (t40 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t40);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t56) != 0)
        goto LAB32;

LAB33:    t64 = *((unsigned int *)t30);
    t65 = *((unsigned int *)t55);
    t66 = (t64 | t65);
    *((unsigned int *)t63) = t66;
    t67 = (t30 + 4);
    t68 = (t55 + 4);
    t69 = (t63 + 4);
    t70 = *((unsigned int *)t67);
    t71 = *((unsigned int *)t68);
    t72 = (t70 | t71);
    *((unsigned int *)t69) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB34;

LAB35:
LAB36:    goto LAB25;

LAB28:    t54 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB29;

LAB30:    *((unsigned int *)t55) = 1;
    goto LAB33;

LAB32:    t62 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB33;

LAB34:    t75 = *((unsigned int *)t63);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t63) = (t75 | t76);
    t77 = (t30 + 4);
    t78 = (t55 + 4);
    t79 = *((unsigned int *)t77);
    t80 = (~(t79));
    t81 = *((unsigned int *)t30);
    t82 = (t81 & t80);
    t83 = *((unsigned int *)t78);
    t84 = (~(t83));
    t85 = *((unsigned int *)t55);
    t86 = (t85 & t84);
    t87 = (~(t82));
    t88 = (~(t86));
    t89 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t89 & t87);
    t90 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t90 & t88);
    goto LAB36;

LAB37:    *((unsigned int *)t91) = 1;
    goto LAB40;

LAB39:    t98 = (t91 + 4);
    *((unsigned int *)t91) = 1;
    *((unsigned int *)t98) = 1;
    goto LAB40;

LAB41:    t104 = (t0 + 4408);
    t105 = (t104 + 56U);
    t106 = *((char **)t105);
    t107 = (t0 + 1560);
    t108 = *((char **)t107);
    memset(t109, 0, 8);
    t107 = (t106 + 4);
    t110 = (t108 + 4);
    t111 = *((unsigned int *)t106);
    t112 = *((unsigned int *)t108);
    t113 = (t111 ^ t112);
    t114 = *((unsigned int *)t107);
    t115 = *((unsigned int *)t110);
    t116 = (t114 ^ t115);
    t117 = (t113 | t116);
    t118 = *((unsigned int *)t107);
    t119 = *((unsigned int *)t110);
    t120 = (t118 | t119);
    t121 = (~(t120));
    t122 = (t117 & t121);
    if (t122 != 0)
        goto LAB47;

LAB44:    if (t120 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t109) = 1;

LAB47:    memset(t124, 0, 8);
    t125 = (t109 + 4);
    t126 = *((unsigned int *)t125);
    t127 = (~(t126));
    t128 = *((unsigned int *)t109);
    t129 = (t128 & t127);
    t130 = (t129 & 1U);
    if (t130 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t125) != 0)
        goto LAB50;

LAB51:    t133 = *((unsigned int *)t91);
    t134 = *((unsigned int *)t124);
    t135 = (t133 | t134);
    *((unsigned int *)t132) = t135;
    t136 = (t91 + 4);
    t137 = (t124 + 4);
    t138 = (t132 + 4);
    t139 = *((unsigned int *)t136);
    t140 = *((unsigned int *)t137);
    t141 = (t139 | t140);
    *((unsigned int *)t138) = t141;
    t142 = *((unsigned int *)t138);
    t143 = (t142 != 0);
    if (t143 == 1)
        goto LAB52;

LAB53:
LAB54:    goto LAB43;

LAB46:    t123 = (t109 + 4);
    *((unsigned int *)t109) = 1;
    *((unsigned int *)t123) = 1;
    goto LAB47;

LAB48:    *((unsigned int *)t124) = 1;
    goto LAB51;

LAB50:    t131 = (t124 + 4);
    *((unsigned int *)t124) = 1;
    *((unsigned int *)t131) = 1;
    goto LAB51;

LAB52:    t144 = *((unsigned int *)t132);
    t145 = *((unsigned int *)t138);
    *((unsigned int *)t132) = (t144 | t145);
    t146 = (t91 + 4);
    t147 = (t124 + 4);
    t148 = *((unsigned int *)t146);
    t149 = (~(t148));
    t150 = *((unsigned int *)t91);
    t151 = (t150 & t149);
    t152 = *((unsigned int *)t147);
    t153 = (~(t152));
    t154 = *((unsigned int *)t124);
    t155 = (t154 & t153);
    t156 = (~(t151));
    t157 = (~(t155));
    t158 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t158 & t156);
    t159 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t159 & t157);
    goto LAB54;

LAB55:    xsi_set_current_line(77, ng0);

LAB58:    xsi_set_current_line(78, ng0);
    t166 = ((char*)((ng1)));
    t167 = (t0 + 5528);
    xsi_vlogvar_wait_assign_value(t167, t166, 0, 0, 1, 0LL);
    goto LAB57;

}

static void Always_87_6(char *t0)
{
    char t6[8];
    char t33[8];
    char t40[8];
    char t53[8];
    char t61[8];
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
    int t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;

LAB0:    t1 = (t0 + 8096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 8760);
    *((int *)t2) = 1;
    t3 = (t0 + 8128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(87, ng0);

LAB5:    xsi_set_current_line(88, ng0);
    t4 = (t0 + 2568U);
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

LAB11:    xsi_set_current_line(91, ng0);

LAB14:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 4408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB15:    t5 = (t0 + 472);
    t7 = *((char **)t5);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t7, 32);
    if (t30 == 1)
        goto LAB16;

LAB17:    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB18;

LAB19:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB20;

LAB21:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB22;

LAB23:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB24;

LAB25:    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB26;

LAB27:    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB28;

LAB29:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB30;

LAB31:    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB32;

LAB33:
LAB34:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(88, ng0);

LAB13:    xsi_set_current_line(89, ng0);
    t28 = (t0 + 472);
    t29 = *((char **)t28);
    t28 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, 0, 8, 0LL);
    goto LAB12;

LAB16:    xsi_set_current_line(94, ng0);

LAB35:    xsi_set_current_line(95, ng0);
    t5 = (t0 + 3048U);
    t8 = *((char **)t5);
    t5 = (t8 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t8);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);

LAB38:    goto LAB34;

LAB18:    xsi_set_current_line(103, ng0);

LAB40:    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 4888);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB34;

LAB20:    xsi_set_current_line(108, ng0);

LAB41:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 4888);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t21 = (t7 + 4);
    t22 = (t8 + 4);
    t9 = *((unsigned int *)t7);
    t10 = *((unsigned int *)t8);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t21);
    t13 = *((unsigned int *)t22);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t21);
    t17 = *((unsigned int *)t22);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB45;

LAB42:    if (t18 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t6) = 1;

LAB45:    t29 = (t6 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 4888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t5, 8, t7, 32);
    t8 = (t0 + 4888);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 8, 0LL);

LAB48:    goto LAB34;

LAB22:    xsi_set_current_line(114, ng0);

LAB50:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 3688U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
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
        goto LAB54;

LAB51:    if (t18 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t6) = 1;

LAB54:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t2 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);

LAB57:    goto LAB34;

LAB24:    xsi_set_current_line(122, ng0);

LAB66:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 4888);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t21 = (t7 + 4);
    t22 = (t8 + 4);
    t9 = *((unsigned int *)t7);
    t10 = *((unsigned int *)t8);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t21);
    t13 = *((unsigned int *)t22);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t21);
    t17 = *((unsigned int *)t22);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB70;

LAB67:    if (t18 != 0)
        goto LAB69;

LAB68:    *((unsigned int *)t6) = 1;

LAB70:    t29 = (t6 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB71;

LAB72:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 4888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t5, 8, t7, 32);
    t8 = (t0 + 4888);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 8, 0LL);

LAB73:    goto LAB34;

LAB26:    xsi_set_current_line(128, ng0);

LAB75:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3688U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
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
        goto LAB79;

LAB76:    if (t18 != 0)
        goto LAB78;

LAB77:    *((unsigned int *)t6) = 1;

LAB79:    memset(t33, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t22) != 0)
        goto LAB82;

LAB83:    t29 = (t33 + 4);
    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t29);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB84;

LAB85:    memcpy(t61, t33, 8);

LAB86:    t93 = (t61 + 4);
    t94 = *((unsigned int *)t93);
    t95 = (~(t94));
    t96 = *((unsigned int *)t61);
    t97 = (t96 & t95);
    t98 = (t97 != 0);
    if (t98 > 0)
        goto LAB98;

LAB99:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t2 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);

LAB100:    goto LAB34;

LAB28:    xsi_set_current_line(137, ng0);

LAB102:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 3688U);
    t5 = *((char **)t2);
    t2 = (t0 + 4248);
    t7 = (t0 + 4248);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = (t0 + 4888);
    t28 = (t22 + 56U);
    t29 = *((char **)t28);
    xsi_vlog_generic_convert_bit_index(t6, t21, 2, t29, 8, 2);
    t31 = (t6 + 4);
    t9 = *((unsigned int *)t31);
    t85 = (!(t9));
    if (t85 == 1)
        goto LAB103;

LAB104:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 4888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t8 = (t5 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t21);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t21);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB108;

LAB105:    if (t18 != 0)
        goto LAB107;

LAB106:    *((unsigned int *)t6) = 1;

LAB108:    t28 = (t6 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB109;

LAB110:    xsi_set_current_line(140, ng0);
    t2 = (t0 + 4888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t5, 8, t7, 32);
    t8 = (t0 + 4888);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 8, 0LL);

LAB111:    goto LAB34;

LAB30:    xsi_set_current_line(143, ng0);

LAB112:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 1560);
    t5 = *((char **)t2);
    t2 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 8, 0LL);
    goto LAB34;

LAB32:    xsi_set_current_line(148, ng0);

LAB113:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 472);
    t5 = *((char **)t2);
    t2 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 8, 0LL);
    goto LAB34;

LAB36:    xsi_set_current_line(95, ng0);

LAB39:    xsi_set_current_line(96, ng0);
    t21 = (t0 + 608);
    t22 = *((char **)t21);
    t21 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t21, t22, 0, 0, 8, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728U);
    t5 = *((char **)t2);
    xsi_vlogtype_concat(t6, 8, 8, 2U, t5, 7, t3, 1);
    t2 = (t0 + 4568);
    xsi_vlogvar_wait_assign_value(t2, t6, 0, 0, 8, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t2 = (t0 + 4728);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB38;

LAB44:    t28 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(109, ng0);

LAB49:    xsi_set_current_line(110, ng0);
    t31 = (t0 + 880);
    t32 = *((char **)t31);
    t31 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t31, t32, 0, 0, 8, 0LL);
    goto LAB48;

LAB53:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB54;

LAB55:    xsi_set_current_line(115, ng0);

LAB58:    xsi_set_current_line(116, ng0);
    t28 = ((char*)((ng4)));
    t29 = (t0 + 4888);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 8, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 4568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 4568);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t5, t21, 2, t22, 32, 1);
    t28 = ((char*)((ng1)));
    memset(t33, 0, 8);
    t29 = (t6 + 4);
    t31 = (t28 + 4);
    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t28);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t29);
    t13 = *((unsigned int *)t31);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t29);
    t17 = *((unsigned int *)t31);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB62;

LAB59:    if (t18 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t33) = 1;

LAB62:    t34 = (t33 + 4);
    t23 = *((unsigned int *)t34);
    t24 = (~(t23));
    t25 = *((unsigned int *)t33);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t2 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);

LAB65:    goto LAB57;

LAB61:    t32 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB62;

LAB63:    xsi_set_current_line(117, ng0);
    t35 = (t0 + 1016);
    t36 = *((char **)t35);
    t35 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t35, t36, 0, 0, 8, 0LL);
    goto LAB65;

LAB69:    t28 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB70;

LAB71:    xsi_set_current_line(123, ng0);

LAB74:    xsi_set_current_line(124, ng0);
    t31 = (t0 + 1424);
    t32 = *((char **)t31);
    t31 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t31, t32, 0, 0, 8, 0LL);
    goto LAB73;

LAB78:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB79;

LAB80:    *((unsigned int *)t33) = 1;
    goto LAB83;

LAB82:    t28 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB83;

LAB84:    t31 = (t0 + 3048U);
    t32 = *((char **)t31);
    t31 = ((char*)((ng2)));
    memset(t40, 0, 8);
    t34 = (t32 + 4);
    t35 = (t31 + 4);
    t41 = *((unsigned int *)t32);
    t42 = *((unsigned int *)t31);
    t43 = (t41 ^ t42);
    t44 = *((unsigned int *)t34);
    t45 = *((unsigned int *)t35);
    t46 = (t44 ^ t45);
    t47 = (t43 | t46);
    t48 = *((unsigned int *)t34);
    t49 = *((unsigned int *)t35);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB90;

LAB87:    if (t50 != 0)
        goto LAB89;

LAB88:    *((unsigned int *)t40) = 1;

LAB90:    memset(t53, 0, 8);
    t54 = (t40 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t40);
    t58 = (t57 & t56);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t54) != 0)
        goto LAB93;

LAB94:    t62 = *((unsigned int *)t33);
    t63 = *((unsigned int *)t53);
    t64 = (t62 & t63);
    *((unsigned int *)t61) = t64;
    t65 = (t33 + 4);
    t66 = (t53 + 4);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t65);
    t69 = *((unsigned int *)t66);
    t70 = (t68 | t69);
    *((unsigned int *)t67) = t70;
    t71 = *((unsigned int *)t67);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB95;

LAB96:
LAB97:    goto LAB86;

LAB89:    t36 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB90;

LAB91:    *((unsigned int *)t53) = 1;
    goto LAB94;

LAB93:    t60 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB94;

LAB95:    t73 = *((unsigned int *)t61);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t61) = (t73 | t74);
    t75 = (t33 + 4);
    t76 = (t53 + 4);
    t77 = *((unsigned int *)t33);
    t78 = (~(t77));
    t79 = *((unsigned int *)t75);
    t80 = (~(t79));
    t81 = *((unsigned int *)t53);
    t82 = (~(t81));
    t83 = *((unsigned int *)t76);
    t84 = (~(t83));
    t85 = (t78 & t80);
    t86 = (t82 & t84);
    t87 = (~(t85));
    t88 = (~(t86));
    t89 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t89 & t87);
    t90 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t90 & t88);
    t91 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t91 & t87);
    t92 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t92 & t88);
    goto LAB97;

LAB98:    xsi_set_current_line(129, ng0);

LAB101:    xsi_set_current_line(130, ng0);
    t99 = ((char*)((ng4)));
    t100 = (t0 + 4888);
    xsi_vlogvar_wait_assign_value(t100, t99, 0, 0, 8, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t2 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB100;

LAB103:    xsi_vlogvar_wait_assign_value(t2, t5, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB104;

LAB107:    t22 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB108;

LAB109:    xsi_set_current_line(139, ng0);
    t29 = (t0 + 1152);
    t31 = *((char **)t29);
    t29 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t29, t31, 0, 0, 8, 0LL);
    goto LAB111;

}

static void Always_155_7(char *t0)
{
    char t6[8];
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
    int t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 8344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 8776);
    *((int *)t2) = 1;
    t3 = (t0 + 8376);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(155, ng0);

LAB5:    xsi_set_current_line(156, ng0);
    t4 = (t0 + 2568U);
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

LAB11:    xsi_set_current_line(159, ng0);

LAB14:    xsi_set_current_line(160, ng0);
    t2 = (t0 + 4408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB15:    t5 = (t0 + 608);
    t7 = *((char **)t5);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t7, 32);
    if (t30 == 1)
        goto LAB16;

LAB17:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB18;

LAB19:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB20;

LAB21:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB22;

LAB23:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB24;

LAB25:    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB26;

LAB27:    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t30 == 1)
        goto LAB28;

LAB29:
LAB30:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(156, ng0);

LAB13:    xsi_set_current_line(157, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 5208);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB16:    xsi_set_current_line(162, ng0);

LAB31:    xsi_set_current_line(163, ng0);
    t5 = ((char*)((ng2)));
    t8 = (t0 + 5208);
    xsi_vlogvar_wait_assign_value(t8, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB30;

LAB18:    xsi_set_current_line(167, ng0);

LAB32:    xsi_set_current_line(168, ng0);
    t2 = (t0 + 4568);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 4568);
    t21 = (t8 + 72U);
    t22 = *((char **)t21);
    t28 = (t0 + 4888);
    t29 = (t28 + 56U);
    t31 = *((char **)t29);
    xsi_vlog_generic_get_index_select_value(t6, 1, t7, t22, 2, t31, 8, 2);
    t32 = (t0 + 5368);
    xsi_vlogvar_wait_assign_value(t32, t6, 0, 0, 1, 0LL);
    goto LAB30;

LAB20:    xsi_set_current_line(171, ng0);

LAB33:    xsi_set_current_line(172, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 5208);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    goto LAB30;

LAB22:    xsi_set_current_line(175, ng0);

LAB34:    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 5208);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(177, ng0);
    t2 = (t0 + 4728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 4728);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = (t0 + 4888);
    t28 = (t22 + 56U);
    t29 = *((char **)t28);
    xsi_vlog_generic_get_index_select_value(t6, 1, t5, t21, 2, t29, 8, 2);
    t31 = (t0 + 5368);
    xsi_vlogvar_wait_assign_value(t31, t6, 0, 0, 1, 0LL);
    goto LAB30;

LAB24:    xsi_set_current_line(180, ng0);

LAB35:    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 5208);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB30;

LAB26:    xsi_set_current_line(187, ng0);

LAB36:    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 5208);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    goto LAB30;

LAB28:    xsi_set_current_line(191, ng0);

LAB37:    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 5208);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB30;

}


extern void work_m_00000000001978682257_1951616555_init()
{
	static char *pe[] = {(void *)Cont_58_0,(void *)Cont_59_1,(void *)Cont_60_2,(void *)Cont_61_3,(void *)Always_64_4,(void *)Always_73_5,(void *)Always_87_6,(void *)Always_155_7};
	xsi_register_didat("work_m_00000000001978682257_1951616555", "isim/tb_i2c_isim_beh.exe.sim/work/m_00000000001978682257_1951616555.didat");
	xsi_register_executes(pe);
}
