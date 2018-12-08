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
    work_m_00000000003663863186_4285481176_init();
    work_m_00000000002076040134_3952669271_init();
    work_m_00000000002266395506_2740868891_init();
    work_m_00000000001842127051_2341146210_init();
    work_m_00000000001973982663_4258630242_init();
    work_m_00000000002667061275_0208855712_init();
    work_m_00000000000782022545_3573127338_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000782022545_3573127338");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
