/*
 * SWC1.c
 *
 *  Created on: Mar 21, 2024
 *      Author: mina
 */
#include "RTE_SWC1"

void SUM ()
{

	Std_ReturnType status = E_Not_OK;
	unsigned short x, y;
	unsigned int z = 0;

	status = RTE_Read_Rp_SRI_SumParameters_Val1 (&x);
	status = RTE_Read_Rp_SRI_SumParameters_Val2 (&y);
	z = x + y;
	status = RTE_Write_Pp_SRI_SumResult (z);
}
