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
static const char *ng0 = "C:/Users/GD/Documents/Xilinx/AES/Key_schedule.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};



static void Always_49_0(char *t0)
{
    char t6[8];
    char t7[8];
    char t27[8];
    char t28[8];
    char t48[8];
    char t49[8];
    char t69[8];
    char t70[8];
    char t97[32];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    unsigned int t19;
    int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    int t24;
    int t25;
    char *t26;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    int t38;
    char *t39;
    unsigned int t40;
    int t41;
    int t42;
    unsigned int t43;
    unsigned int t44;
    int t45;
    int t46;
    char *t47;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    unsigned int t58;
    int t59;
    char *t60;
    unsigned int t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    int t66;
    int t67;
    char *t68;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    unsigned int t79;
    int t80;
    char *t81;
    unsigned int t82;
    int t83;
    int t84;
    unsigned int t85;
    unsigned int t86;
    int t87;
    int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3648);
    *((int *)t2) = 1;
    t3 = (t0 + 3360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng0);

LAB5:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 2088);
    t8 = (t0 + 2088);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 2088);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t7 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB6;

LAB7:    t26 = (t0 + 2088);
    t29 = (t0 + 2088);
    t30 = (t29 + 72U);
    t31 = *((char **)t30);
    t32 = (t0 + 2088);
    t33 = (t32 + 64U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t27, t28, t31, t34, 2, 1, t35, 32, 1);
    t36 = (t27 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (!(t37));
    t39 = (t28 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (!(t40));
    t42 = (t38 && t41);
    if (t42 == 1)
        goto LAB8;

LAB9:    t47 = (t0 + 2088);
    t50 = (t0 + 2088);
    t51 = (t50 + 72U);
    t52 = *((char **)t51);
    t53 = (t0 + 2088);
    t54 = (t53 + 64U);
    t55 = *((char **)t54);
    t56 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t48, t49, t52, t55, 2, 1, t56, 32, 1);
    t57 = (t48 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (!(t58));
    t60 = (t49 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (!(t61));
    t63 = (t59 && t62);
    if (t63 == 1)
        goto LAB10;

LAB11:    t68 = (t0 + 2088);
    t71 = (t0 + 2088);
    t72 = (t71 + 72U);
    t73 = *((char **)t72);
    t74 = (t0 + 2088);
    t75 = (t74 + 64U);
    t76 = *((char **)t75);
    t77 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t69, t70, t73, t76, 2, 1, t77, 32, 1);
    t78 = (t69 + 4);
    t79 = *((unsigned int *)t78);
    t80 = (!(t79));
    t81 = (t70 + 4);
    t82 = *((unsigned int *)t81);
    t83 = (!(t82));
    t84 = (t80 && t83);
    if (t84 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2088);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t4, t9, t12, 2, 1, t13, 32, 1);
    memset(t27, 0, 8);
    t14 = (t27 + 4);
    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t19 = (t16 >> 24);
    *((unsigned int *)t27) = t19;
    t22 = *((unsigned int *)t15);
    t23 = (t22 >> 24);
    *((unsigned int *)t14) = t23;
    t37 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t37 & 255U);
    t40 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t40 & 255U);
    t18 = (t0 + 2088);
    t26 = (t18 + 56U);
    t29 = *((char **)t26);
    t30 = (t0 + 2088);
    t31 = (t30 + 72U);
    t32 = *((char **)t31);
    t33 = (t0 + 2088);
    t34 = (t33 + 64U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t28, 32, t29, t32, t35, 2, 1, t36, 32, 1);
    memset(t48, 0, 8);
    t39 = (t48 + 4);
    t47 = (t28 + 4);
    t43 = *((unsigned int *)t28);
    t44 = (t43 >> 0);
    *((unsigned int *)t48) = t44;
    t58 = *((unsigned int *)t47);
    t61 = (t58 >> 0);
    *((unsigned int *)t39) = t61;
    t64 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t64 & 16777215U);
    t65 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t65 & 16777215U);
    xsi_vlogtype_concat(t6, 32, 32, 2U, t48, 24, t27, 8);
    t50 = (t0 + 2248);
    xsi_vlogvar_assign_value(t50, t6, 0, 0, 32);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2088);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t6, 32, t4, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t0 + 1528U);
    t15 = *((char **)t14);
    t16 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t15);
    t22 = (t16 ^ t19);
    *((unsigned int *)t7) = t22;
    t14 = (t6 + 4);
    t18 = (t15 + 4);
    t26 = (t7 + 4);
    t23 = *((unsigned int *)t14);
    t37 = *((unsigned int *)t18);
    t40 = (t23 | t37);
    *((unsigned int *)t26) = t40;
    t43 = *((unsigned int *)t26);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB14;

LAB15:
LAB16:    t29 = (t0 + 1208U);
    t30 = *((char **)t29);
    t64 = *((unsigned int *)t7);
    t65 = *((unsigned int *)t30);
    t79 = (t64 ^ t65);
    *((unsigned int *)t27) = t79;
    t29 = (t7 + 4);
    t31 = (t30 + 4);
    t32 = (t27 + 4);
    t82 = *((unsigned int *)t29);
    t85 = *((unsigned int *)t31);
    t86 = (t82 | t85);
    *((unsigned int *)t32) = t86;
    t89 = *((unsigned int *)t32);
    t90 = (t89 != 0);
    if (t90 == 1)
        goto LAB17;

LAB18:
LAB19:    t33 = (t0 + 2408);
    t34 = (t0 + 2408);
    t35 = (t34 + 72U);
    t36 = *((char **)t35);
    t39 = (t0 + 2408);
    t47 = (t39 + 64U);
    t50 = *((char **)t47);
    t51 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t28, t48, t36, t50, 2, 1, t51, 32, 1);
    t52 = (t28 + 4);
    t93 = *((unsigned int *)t52);
    t17 = (!(t93));
    t53 = (t48 + 4);
    t94 = *((unsigned int *)t53);
    t20 = (!(t94));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2408);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2408);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t6, 32, t4, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t0 + 2088);
    t15 = (t14 + 56U);
    t18 = *((char **)t15);
    t26 = (t0 + 2088);
    t29 = (t26 + 72U);
    t30 = *((char **)t29);
    t31 = (t0 + 2088);
    t32 = (t31 + 64U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t18, t30, t33, 2, 1, t34, 32, 1);
    t16 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t22 = (t16 ^ t19);
    *((unsigned int *)t27) = t22;
    t35 = (t6 + 4);
    t36 = (t7 + 4);
    t39 = (t27 + 4);
    t23 = *((unsigned int *)t35);
    t37 = *((unsigned int *)t36);
    t40 = (t23 | t37);
    *((unsigned int *)t39) = t40;
    t43 = *((unsigned int *)t39);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB22;

LAB23:
LAB24:    t47 = (t0 + 2408);
    t50 = (t0 + 2408);
    t51 = (t50 + 72U);
    t52 = *((char **)t51);
    t53 = (t0 + 2408);
    t54 = (t53 + 64U);
    t55 = *((char **)t54);
    t56 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t28, t48, t52, t55, 2, 1, t56, 32, 1);
    t57 = (t28 + 4);
    t64 = *((unsigned int *)t57);
    t17 = (!(t64));
    t60 = (t48 + 4);
    t65 = *((unsigned int *)t60);
    t20 = (!(t65));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB25;

LAB26:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2408);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2408);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t6, 32, t4, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t0 + 2088);
    t15 = (t14 + 56U);
    t18 = *((char **)t15);
    t26 = (t0 + 2088);
    t29 = (t26 + 72U);
    t30 = *((char **)t29);
    t31 = (t0 + 2088);
    t32 = (t31 + 64U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t18, t30, t33, 2, 1, t34, 32, 1);
    t16 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t22 = (t16 ^ t19);
    *((unsigned int *)t27) = t22;
    t35 = (t6 + 4);
    t36 = (t7 + 4);
    t39 = (t27 + 4);
    t23 = *((unsigned int *)t35);
    t37 = *((unsigned int *)t36);
    t40 = (t23 | t37);
    *((unsigned int *)t39) = t40;
    t43 = *((unsigned int *)t39);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB27;

LAB28:
LAB29:    t47 = (t0 + 2408);
    t50 = (t0 + 2408);
    t51 = (t50 + 72U);
    t52 = *((char **)t51);
    t53 = (t0 + 2408);
    t54 = (t53 + 64U);
    t55 = *((char **)t54);
    t56 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t28, t48, t52, t55, 2, 1, t56, 32, 1);
    t57 = (t28 + 4);
    t64 = *((unsigned int *)t57);
    t17 = (!(t64));
    t60 = (t48 + 4);
    t65 = *((unsigned int *)t60);
    t20 = (!(t65));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB30;

LAB31:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2408);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2408);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t6, 32, t4, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t0 + 2088);
    t15 = (t14 + 56U);
    t18 = *((char **)t15);
    t26 = (t0 + 2088);
    t29 = (t26 + 72U);
    t30 = *((char **)t29);
    t31 = (t0 + 2088);
    t32 = (t31 + 64U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t18, t30, t33, 2, 1, t34, 32, 1);
    t16 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t22 = (t16 ^ t19);
    *((unsigned int *)t27) = t22;
    t35 = (t6 + 4);
    t36 = (t7 + 4);
    t39 = (t27 + 4);
    t23 = *((unsigned int *)t35);
    t37 = *((unsigned int *)t36);
    t40 = (t23 | t37);
    *((unsigned int *)t39) = t40;
    t43 = *((unsigned int *)t39);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB32;

LAB33:
LAB34:    t47 = (t0 + 2408);
    t50 = (t0 + 2408);
    t51 = (t50 + 72U);
    t52 = *((char **)t51);
    t53 = (t0 + 2408);
    t54 = (t53 + 64U);
    t55 = *((char **)t54);
    t56 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t28, t48, t52, t55, 2, 1, t56, 32, 1);
    t57 = (t28 + 4);
    t64 = *((unsigned int *)t57);
    t17 = (!(t64));
    t60 = (t48 + 4);
    t65 = *((unsigned int *)t60);
    t20 = (!(t65));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB35;

LAB36:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2408);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2408);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t6, 32, t4, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t0 + 2408);
    t15 = (t14 + 56U);
    t18 = *((char **)t15);
    t26 = (t0 + 2408);
    t29 = (t26 + 72U);
    t30 = *((char **)t29);
    t31 = (t0 + 2408);
    t32 = (t31 + 64U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t18, t30, t33, 2, 1, t34, 32, 1);
    t35 = (t0 + 2408);
    t36 = (t35 + 56U);
    t39 = *((char **)t36);
    t47 = (t0 + 2408);
    t50 = (t47 + 72U);
    t51 = *((char **)t50);
    t52 = (t0 + 2408);
    t53 = (t52 + 64U);
    t54 = *((char **)t53);
    t55 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t27, 32, t39, t51, t54, 2, 1, t55, 32, 1);
    t56 = (t0 + 2408);
    t57 = (t56 + 56U);
    t60 = *((char **)t57);
    t68 = (t0 + 2408);
    t71 = (t68 + 72U);
    t72 = *((char **)t71);
    t73 = (t0 + 2408);
    t74 = (t73 + 64U);
    t75 = *((char **)t74);
    t76 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t28, 32, t60, t72, t75, 2, 1, t76, 32, 1);
    xsi_vlogtype_concat(t97, 128, 128, 4U, t28, 32, t27, 32, t7, 32, t6, 32);
    t77 = (t0 + 1928);
    xsi_vlogvar_assign_value(t77, t97, 0, 0, 128);
    goto LAB2;

LAB6:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t4, t5, 0, *((unsigned int *)t7), t25);
    goto LAB7;

LAB8:    t43 = *((unsigned int *)t27);
    t44 = *((unsigned int *)t28);
    t45 = (t43 - t44);
    t46 = (t45 + 1);
    xsi_vlogvar_assign_value(t26, t5, 32, *((unsigned int *)t28), t46);
    goto LAB9;

LAB10:    t64 = *((unsigned int *)t48);
    t65 = *((unsigned int *)t49);
    t66 = (t64 - t65);
    t67 = (t66 + 1);
    xsi_vlogvar_assign_value(t47, t5, 64, *((unsigned int *)t49), t67);
    goto LAB11;

LAB12:    t85 = *((unsigned int *)t69);
    t86 = *((unsigned int *)t70);
    t87 = (t85 - t86);
    t88 = (t87 + 1);
    xsi_vlogvar_assign_value(t68, t5, 96, *((unsigned int *)t70), t88);
    goto LAB13;

LAB14:    t58 = *((unsigned int *)t7);
    t61 = *((unsigned int *)t26);
    *((unsigned int *)t7) = (t58 | t61);
    goto LAB16;

LAB17:    t91 = *((unsigned int *)t27);
    t92 = *((unsigned int *)t32);
    *((unsigned int *)t27) = (t91 | t92);
    goto LAB19;

LAB20:    t95 = *((unsigned int *)t28);
    t96 = *((unsigned int *)t48);
    t24 = (t95 - t96);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t33, t27, 0, *((unsigned int *)t48), t25);
    goto LAB21;

LAB22:    t58 = *((unsigned int *)t27);
    t61 = *((unsigned int *)t39);
    *((unsigned int *)t27) = (t58 | t61);
    goto LAB24;

LAB25:    t79 = *((unsigned int *)t28);
    t82 = *((unsigned int *)t48);
    t24 = (t79 - t82);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t47, t27, 0, *((unsigned int *)t48), t25);
    goto LAB26;

LAB27:    t58 = *((unsigned int *)t27);
    t61 = *((unsigned int *)t39);
    *((unsigned int *)t27) = (t58 | t61);
    goto LAB29;

LAB30:    t79 = *((unsigned int *)t28);
    t82 = *((unsigned int *)t48);
    t24 = (t79 - t82);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t47, t27, 0, *((unsigned int *)t48), t25);
    goto LAB31;

LAB32:    t58 = *((unsigned int *)t27);
    t61 = *((unsigned int *)t39);
    *((unsigned int *)t27) = (t58 | t61);
    goto LAB34;

LAB35:    t79 = *((unsigned int *)t28);
    t82 = *((unsigned int *)t48);
    t24 = (t79 - t82);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t47, t27, 0, *((unsigned int *)t48), t25);
    goto LAB36;

}


extern void work_m_00000000001973982663_4258630242_init()
{
	static char *pe[] = {(void *)Always_49_0};
	xsi_register_didat("work_m_00000000001973982663_4258630242", "isim/AES_tb_isim_beh.exe.sim/work/m_00000000001973982663_4258630242.didat");
	xsi_register_executes(pe);
}
