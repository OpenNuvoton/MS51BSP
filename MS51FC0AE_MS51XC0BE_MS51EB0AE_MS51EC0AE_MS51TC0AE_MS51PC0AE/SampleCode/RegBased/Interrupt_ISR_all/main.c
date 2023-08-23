/*---------------------------------------------------------------------------------------------------------*/
/*                                                                                                         */
/* Copyright(c) 2020 Nuvoton Technology Corp. All rights reserved.                                         */
/*                                                                                                         */
/*---------------------------------------------------------------------------------------------------------*/

//***********************************************************************************************************
//  Website: http://www.nuvoton.com
//  E-Mail : MicroC-8bit@nuvoton.com
//  Date   : Apr/29/2020
//***********************************************************************************************************

//***********************************************************************************************************
//  File Function: ML51 ADC / Bandgap input demo code
//***********************************************************************************************************
#include "ms51_32k.h"


/*---------------------------------------------*/
void main(void)
{ 
    MODIFY_HIRC(HIRC_24);
    Set_Interrupt_Priority_Level(INT_WDT, 0);
    Set_Interrupt_Priority_Level(INT_ADC, 1);
    SET_INT_PWM_LEVEL3;
    while(1);
}
/* Check isr.c for full interrupt vector      */