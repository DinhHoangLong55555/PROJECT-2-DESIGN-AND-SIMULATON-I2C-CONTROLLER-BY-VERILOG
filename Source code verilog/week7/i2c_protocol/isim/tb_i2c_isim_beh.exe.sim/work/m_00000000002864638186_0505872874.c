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
static const char *ng0 = "C:/BT ISE/i2c_protocol/i2c_slave.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {0U, 4294967295U};
static int ng3[] = {0, 0};
static int ng4[] = {7, 0};
static unsigned int ng5[] = {106U, 0U};
static unsigned int ng6[] = {1U, 1U};



static void Cont_51_0(char *t0)
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

LAB0:    t1 = (t0 + 5584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 4344);
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

LAB20:    t44 = (t0 + 7568);
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
    t57 = (t0 + 7392);
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

LAB12:    t35 = (t0 + 3864);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t38, t37, 8);
    goto LAB13;

LAB14:    t43 = ((char*)((ng2)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t38, 32, t43, 32);
    goto LAB20;

LAB18:    memcpy(t3, t38, 8);
    goto LAB20;

}

static void Cont_52_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
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
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 5832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 4344);
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

LAB19:    memcpy(t3, t40, 8);

LAB20:    t41 = (t0 + 7632);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t45, 0, 8);
    t46 = 1U;
    t47 = t46;
    t48 = (t3 + 4);
    t49 = *((unsigned int *)t3);
    t46 = (t46 & t49);
    t50 = *((unsigned int *)t48);
    t47 = (t47 & t50);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t52 | t46);
    t53 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t53 | t47);
    xsi_driver_vfirst_trans(t41, 0, 0);
    t54 = (t0 + 7408);
    *((int *)t54) = 1;

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

LAB12:    t35 = ((char*)((ng1)));
    goto LAB13;

LAB14:    t40 = ((char*)((ng2)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t35, 32, t40, 32);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

}

static void Always_54_2(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 6080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 7424);
    *((int *)t2) = 1;
    t3 = (t0 + 6112);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);

LAB5:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 1864U);
    t5 = *((char **)t4);
    t4 = (t0 + 3544);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t9 = (t5 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t5);
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

LAB6:    if (t20 != 0)
        goto LAB8;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB7:    *((unsigned int *)t8) = 1;
    goto LAB9;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(56, ng0);
    t30 = (t0 + 1864U);
    t31 = *((char **)t30);
    t30 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t30, t31, 0, 0, 8, 0LL);
    goto LAB12;

}

static void Always_58_3(char *t0)
{
    char t8[8];
    char t24[8];
    char t38[8];
    char t54[8];
    char t62[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    char *t39;
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

LAB0:    t1 = (t0 + 6328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 7440);
    *((int *)t2) = 1;
    t3 = (t0 + 6360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(58, ng0);

LAB5:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 4184);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
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
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    memset(t24, 0, 8);
    t25 = (t8 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t25) != 0)
        goto LAB12;

LAB13:    t32 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t32);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB14;

LAB15:    memcpy(t62, t24, 8);

LAB16:    t94 = (t62 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t62);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB28;

LAB29:
LAB30:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t24) = 1;
    goto LAB13;

LAB12:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB13;

LAB14:    t36 = (t0 + 2184U);
    t37 = *((char **)t36);
    t36 = ((char*)((ng1)));
    memset(t38, 0, 8);
    t39 = (t37 + 4);
    t40 = (t36 + 4);
    t41 = *((unsigned int *)t37);
    t42 = *((unsigned int *)t36);
    t43 = (t41 ^ t42);
    t44 = *((unsigned int *)t39);
    t45 = *((unsigned int *)t40);
    t46 = (t44 ^ t45);
    t47 = (t43 | t46);
    t48 = *((unsigned int *)t39);
    t49 = *((unsigned int *)t40);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB20;

LAB17:    if (t50 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t38) = 1;

LAB20:    memset(t54, 0, 8);
    t55 = (t38 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t38);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t55) != 0)
        goto LAB23;

LAB24:    t63 = *((unsigned int *)t24);
    t64 = *((unsigned int *)t54);
    t65 = (t63 & t64);
    *((unsigned int *)t62) = t65;
    t66 = (t24 + 4);
    t67 = (t54 + 4);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB19:    t53 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t54) = 1;
    goto LAB24;

LAB23:    t61 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB24;

LAB25:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    t76 = (t24 + 4);
    t77 = (t54 + 4);
    t78 = *((unsigned int *)t24);
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
    goto LAB27;

LAB28:    xsi_set_current_line(59, ng0);

LAB31:    xsi_set_current_line(60, ng0);
    t100 = ((char*)((ng1)));
    t101 = (t0 + 4184);
    xsi_vlogvar_wait_assign_value(t101, t100, 0, 0, 1, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB30;

}

static void Always_65_4(char *t0)
{
    char t8[8];
    char t24[8];
    char t38[8];
    char t54[8];
    char t62[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    char *t39;
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

LAB0:    t1 = (t0 + 6576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 7456);
    *((int *)t2) = 1;
    t3 = (t0 + 6608);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(65, ng0);

LAB5:    xsi_set_current_line(66, ng0);
    t4 = (t0 + 4184);
    t5 = (t4 + 56U);
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
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    memset(t24, 0, 8);
    t25 = (t8 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t25) != 0)
        goto LAB12;

LAB13:    t32 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t32);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB14;

LAB15:    memcpy(t62, t24, 8);

LAB16:    t94 = (t62 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t62);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB28;

LAB29:
LAB30:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t24) = 1;
    goto LAB13;

LAB12:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB13;

LAB14:    t36 = (t0 + 2184U);
    t37 = *((char **)t36);
    t36 = ((char*)((ng1)));
    memset(t38, 0, 8);
    t39 = (t37 + 4);
    t40 = (t36 + 4);
    t41 = *((unsigned int *)t37);
    t42 = *((unsigned int *)t36);
    t43 = (t41 ^ t42);
    t44 = *((unsigned int *)t39);
    t45 = *((unsigned int *)t40);
    t46 = (t44 ^ t45);
    t47 = (t43 | t46);
    t48 = *((unsigned int *)t39);
    t49 = *((unsigned int *)t40);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB20;

LAB17:    if (t50 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t38) = 1;

LAB20:    memset(t54, 0, 8);
    t55 = (t38 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t38);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t55) != 0)
        goto LAB23;

LAB24:    t63 = *((unsigned int *)t24);
    t64 = *((unsigned int *)t54);
    t65 = (t63 & t64);
    *((unsigned int *)t62) = t65;
    t66 = (t24 + 4);
    t67 = (t54 + 4);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB19:    t53 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t54) = 1;
    goto LAB24;

LAB23:    t61 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB24;

LAB25:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    t76 = (t24 + 4);
    t77 = (t54 + 4);
    t78 = *((unsigned int *)t24);
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
    goto LAB27;

LAB28:    xsi_set_current_line(66, ng0);

LAB31:    xsi_set_current_line(67, ng0);
    t100 = (t0 + 608);
    t101 = *((char **)t100);
    t100 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t100, t101, 0, 0, 8, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4184);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4344);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB30;

}

static void Always_73_5(char *t0)
{
    char t8[8];
    char t37[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    char *t32;
    char *t33;
    char *t34;
    int t35;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;

LAB0:    t1 = (t0 + 6824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 7472);
    *((int *)t2) = 1;
    t3 = (t0 + 6856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(73, ng0);

LAB5:    xsi_set_current_line(74, ng0);
    t4 = (t0 + 4184);
    t5 = (t4 + 56U);
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
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(74, ng0);

LAB13:    xsi_set_current_line(75, ng0);
    t30 = (t0 + 3384);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);

LAB14:    t33 = (t0 + 608);
    t34 = *((char **)t33);
    t35 = xsi_vlog_unsigned_case_compare(t32, 8, t34, 32);
    if (t35 == 1)
        goto LAB15;

LAB16:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t35 = xsi_vlog_unsigned_case_compare(t32, 8, t3, 32);
    if (t35 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t35 = xsi_vlog_unsigned_case_compare(t32, 8, t3, 32);
    if (t35 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t35 = xsi_vlog_unsigned_case_compare(t32, 8, t3, 32);
    if (t35 == 1)
        goto LAB21;

LAB22:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t35 = xsi_vlog_unsigned_case_compare(t32, 8, t3, 32);
    if (t35 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB12;

LAB15:    xsi_set_current_line(76, ng0);

LAB26:    xsi_set_current_line(77, ng0);
    t33 = (t0 + 2024U);
    t36 = *((char **)t33);
    t33 = (t0 + 3064);
    t38 = (t0 + 3064);
    t39 = (t38 + 72U);
    t40 = *((char **)t39);
    t41 = (t0 + 3224);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    xsi_vlog_generic_convert_bit_index(t37, t40, 2, t43, 8, 2);
    t44 = (t37 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (!(t45));
    if (t46 == 1)
        goto LAB27;

LAB28:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB32;

LAB29:    if (t20 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t8) = 1;

LAB32:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 32, t4, 8, t5, 32);
    t6 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 8, 0LL);

LAB35:    goto LAB25;

LAB17:    xsi_set_current_line(82, ng0);

LAB36:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3064);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    t6 = (t8 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 1);
    *((unsigned int *)t6) = t14;
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 127U);
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 127U);
    t9 = ((char*)((ng5)));
    memset(t37, 0, 8);
    t10 = (t8 + 4);
    t23 = (t9 + 4);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t23);
    t22 = (t20 ^ t21);
    t25 = (t19 | t22);
    t26 = *((unsigned int *)t10);
    t27 = *((unsigned int *)t23);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t45 = (t25 & t29);
    if (t45 != 0)
        goto LAB40;

LAB37:    if (t28 != 0)
        goto LAB39;

LAB38:    *((unsigned int *)t37) = 1;

LAB40:    t30 = (t37 + 4);
    t47 = *((unsigned int *)t30);
    t48 = (~(t47));
    t49 = *((unsigned int *)t37);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB41;

LAB42:
LAB43:    goto LAB25;

LAB19:    xsi_set_current_line(93, ng0);

LAB53:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2024U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t8, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t2))
        goto LAB56;

LAB54:    t5 = (t4 + 4);
    t6 = (t2 + 4);
    if (*((unsigned int *)t5) != *((unsigned int *)t6))
        goto LAB56;

LAB55:    *((unsigned int *)t8) = 1;

LAB56:    t7 = (t8 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB57;

LAB58:
LAB59:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB64;

LAB61:    if (t20 != 0)
        goto LAB63;

LAB62:    *((unsigned int *)t8) = 1;

LAB64:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB65;

LAB66:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 3224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 32, t4, 8, t5, 32);
    t6 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 8, 0LL);

LAB67:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2024U);
    t3 = *((char **)t2);
    t2 = (t0 + 4504);
    t4 = (t0 + 4504);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 3224);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    xsi_vlog_generic_convert_bit_index(t8, t6, 2, t10, 8, 2);
    t23 = (t8 + 4);
    t11 = *((unsigned int *)t23);
    t35 = (!(t11));
    if (t35 == 1)
        goto LAB69;

LAB70:    goto LAB25;

LAB21:    xsi_set_current_line(104, ng0);

LAB71:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 608);
    t4 = *((char **)t2);
    t2 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 8, 0LL);
    goto LAB25;

LAB23:    xsi_set_current_line(109, ng0);

LAB72:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 3224);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t7 = (t5 + 4);
    t9 = (t6 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB76;

LAB73:    if (t20 != 0)
        goto LAB75;

LAB74:    *((unsigned int *)t8) = 1;

LAB76:    t23 = (t8 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB77;

LAB78:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 32, t4, 8, t5, 32);
    t6 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 8, 0LL);

LAB79:    goto LAB25;

LAB27:    xsi_vlogvar_wait_assign_value(t33, t36, 0, *((unsigned int *)t37), 1, 0LL);
    goto LAB28;

LAB31:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(78, ng0);
    t23 = (t0 + 744);
    t24 = *((char **)t23);
    t23 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t23, t24, 0, 0, 8, 0LL);
    goto LAB35;

LAB39:    t24 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB40;

LAB41:    xsi_set_current_line(83, ng0);

LAB44:    xsi_set_current_line(84, ng0);
    t31 = ((char*)((ng4)));
    t33 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t33, t31, 0, 0, 8, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3064);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3064);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t9 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t8, 32, t4, t7, 2, t9, 32, 1);
    t10 = ((char*)((ng3)));
    memset(t37, 0, 8);
    t23 = (t8 + 4);
    t24 = (t10 + 4);
    t11 = *((unsigned int *)t8);
    t12 = *((unsigned int *)t10);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t23);
    t15 = *((unsigned int *)t24);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t23);
    t19 = *((unsigned int *)t24);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB48;

LAB45:    if (t20 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t37) = 1;

LAB48:    t31 = (t37 + 4);
    t25 = *((unsigned int *)t31);
    t26 = (~(t25));
    t27 = *((unsigned int *)t37);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t2 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);

LAB51:    goto LAB43;

LAB47:    t30 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB48;

LAB49:    xsi_set_current_line(85, ng0);

LAB52:    xsi_set_current_line(86, ng0);
    t33 = (t0 + 880);
    t34 = *((char **)t33);
    t33 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t33, t34, 0, 0, 8, 0LL);
    goto LAB51;

LAB57:    xsi_set_current_line(94, ng0);

LAB60:    xsi_set_current_line(95, ng0);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 4664);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    goto LAB59;

LAB63:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB64;

LAB65:    xsi_set_current_line(98, ng0);

LAB68:    xsi_set_current_line(99, ng0);
    t23 = (t0 + 1152);
    t24 = *((char **)t23);
    t23 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t23, t24, 0, 0, 8, 0LL);
    goto LAB67;

LAB69:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t8), 1, 0LL);
    goto LAB70;

LAB75:    t10 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB76;

LAB77:    xsi_set_current_line(110, ng0);
    t24 = (t0 + 608);
    t30 = *((char **)t24);
    t24 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t24, t30, 0, 0, 8, 0LL);
    goto LAB79;

}

static void Always_118_6(char *t0)
{
    char t11[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;

LAB0:    t1 = (t0 + 7072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 7488);
    *((int *)t2) = 1;
    t3 = (t0 + 7104);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(118, ng0);

LAB5:    xsi_set_current_line(119, ng0);
    t4 = (t0 + 3384);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = (t0 + 608);
    t8 = *((char **)t7);
    t9 = xsi_vlog_unsigned_case_compare(t6, 8, t8, 32);
    if (t9 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 8, t3, 32);
    if (t9 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 8, t3, 32);
    if (t9 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 8, t3, 32);
    if (t9 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 8, t3, 32);
    if (t9 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(121, ng0);

LAB18:    xsi_set_current_line(122, ng0);
    t7 = ((char*)((ng3)));
    t10 = (t0 + 4344);
    xsi_vlogvar_wait_assign_value(t10, t7, 0, 0, 1, 0LL);
    goto LAB17;

LAB9:    xsi_set_current_line(125, ng0);

LAB19:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 3064);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t11, 0, 8);
    t7 = (t11 + 4);
    t8 = (t5 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 1);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t8);
    t15 = (t14 >> 1);
    *((unsigned int *)t7) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 127U);
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 127U);
    t10 = ((char*)((ng5)));
    memset(t18, 0, 8);
    t19 = (t11 + 4);
    t20 = (t10 + 4);
    t21 = *((unsigned int *)t11);
    t22 = *((unsigned int *)t10);
    t23 = (t21 ^ t22);
    t24 = *((unsigned int *)t19);
    t25 = *((unsigned int *)t20);
    t26 = (t24 ^ t25);
    t27 = (t23 | t26);
    t28 = *((unsigned int *)t19);
    t29 = *((unsigned int *)t20);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t32 = (t27 & t31);
    if (t32 != 0)
        goto LAB23;

LAB20:    if (t30 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t18) = 1;

LAB23:    t34 = (t18 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t18);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB24;

LAB25:
LAB26:    goto LAB17;

LAB11:    xsi_set_current_line(132, ng0);

LAB28:    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 4344);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB17;

LAB13:    xsi_set_current_line(136, ng0);

LAB29:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 3544);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 3544);
    t8 = (t7 + 72U);
    t10 = *((char **)t8);
    t19 = (t0 + 3224);
    t20 = (t19 + 56U);
    t33 = *((char **)t20);
    xsi_vlog_generic_get_index_select_value(t11, 1, t5, t10, 2, t33, 8, 2);
    t34 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t34, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4344);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB17;

LAB15:    xsi_set_current_line(141, ng0);

LAB30:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 4664);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t8 = (t5 + 4);
    t10 = (t7 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t10);
    t17 = (t15 ^ t16);
    t21 = (t14 | t17);
    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t10);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB34;

LAB31:    if (t24 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t11) = 1;

LAB34:    t20 = (t11 + 4);
    t27 = *((unsigned int *)t20);
    t28 = (~(t27));
    t29 = *((unsigned int *)t11);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(147, ng0);

LAB39:    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4344);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB37:    goto LAB17;

LAB22:    t33 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(126, ng0);

LAB27:    xsi_set_current_line(127, ng0);
    t40 = ((char*)((ng3)));
    t41 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t41, t40, 0, 0, 1, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4344);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB26;

LAB33:    t19 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB34;

LAB35:    xsi_set_current_line(142, ng0);

LAB38:    xsi_set_current_line(143, ng0);
    t33 = ((char*)((ng1)));
    t34 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t34, t33, 0, 0, 1, 0LL);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4344);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB37;

}


extern void work_m_00000000002864638186_0505872874_init()
{
	static char *pe[] = {(void *)Cont_51_0,(void *)Cont_52_1,(void *)Always_54_2,(void *)Always_58_3,(void *)Always_65_4,(void *)Always_73_5,(void *)Always_118_6};
	xsi_register_didat("work_m_00000000002864638186_0505872874", "isim/tb_i2c_isim_beh.exe.sim/work/m_00000000002864638186_0505872874.didat");
	xsi_register_executes(pe);
}
