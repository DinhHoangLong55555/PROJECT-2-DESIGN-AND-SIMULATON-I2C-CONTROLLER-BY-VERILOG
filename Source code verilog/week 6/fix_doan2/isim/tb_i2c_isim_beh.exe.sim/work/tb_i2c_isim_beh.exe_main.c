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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001978682257_1951616555_init();
    work_m_00000000000968439597_0505872874_init();
    work_m_00000000000968439597_3876048311_init();
    work_m_00000000000480308902_1870128061_init();
    work_m_00000000001340121044_1220215599_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001340121044_1220215599");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
