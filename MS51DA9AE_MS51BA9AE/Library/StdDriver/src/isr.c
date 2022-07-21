/*---------------------------------------------------------------------------------------------------------*/
/*                                                                                                         */
/* SPDX-License-Identifier: Apache-2.0                                                                     */
/* Copyright(c) 2020 Nuvoton Technology Corp. All rights reserved.                                         */
/*                                                                                                         */
/*---------------------------------------------------------------------------------------------------------*/

//***********************************************************************************************************
//  Website: http://www.nuvoton.com
//  E-Mail : MicroC-8bit@nuvoton.com
//  Date   : June/21/2020
//***********************************************************************************************************

//***********************************************************************************************************
//  File Function: MS51 interrupt vector list
//***********************************************************************************************************
#include "MS51_8K.H"


/*all interrupt subroutine list */
//-----------------------------------------------------------------------------------------------------------
void INT0_ISR(void) interrupt 0          // Vector @  0x03
{
    _push_(SFRS);
  
    clr_TCON_IE0;

    _pop_(SFRS);
}
//-----------------------------------------------------------------------------------------------------------
void Timer0_ISR(void) interrupt 1        // Vector @  0x0B
{
    _push_(SFRS);
  
    clr_TCON_TF0;

    _pop_(SFRS);
}
//-----------------------------------------------------------------------------------------------------------
void INT1_ISR(void) interrupt 2          // Vector @  0x13
{
    _push_(SFRS);
  
    clr_TCON_IE1;

    _pop_(SFRS);
}
//-----------------------------------------------------------------------------------------------------------
void Timer1_ISR(void) interrupt 3        // Vector @  0x1B
{
    _push_(SFRS);
  
    clr_TCON_TF1;

    _pop_(SFRS);
}
//-----------------------------------------------------------------------------------------------------------
void UART0_ISR(void) interrupt 4         // Vector @  0x23
{
    _push_(SFRS);
  
    clr_SCON_RI;
    clr_SCON_TI;

    _pop_(SFRS);
}
//-----------------------------------------------------------------------------------------------------------
void Timer2_ISR(void) interrupt 5        // Vector @  0x2B
{
    _push_(SFRS);
  
    clr_T2CON_TF2;

    _pop_(SFRS);
}
//-----------------------------------------------------------------------------------------------------------
void I2C_ISR(void) interrupt 6           // Vector @  0x33
{
    _push_(SFRS);
  
    clr_I2CON_SI;

    _pop_(SFRS);
}
//-----------------------------------------------------------------------------------------------------------
void Pin_INT_ISR(void) interrupt 7       // Vector @  0x3B
{
    _push_(SFRS);
  
    PIF = 0;

    _pop_(SFRS);
}
//-----------------------------------------------------------------------------------------------------------
void BOD_ISR(void) interrupt 8           // Vector @  0x43
{
    _push_(SFRS);
  
    clr_BODCON0_BOF;

    _pop_(SFRS);
}
//-----------------------------------------------------------------------------------------------------------
void SPI_ISR(void) interrupt 9           // Vector @  0x4B
{
    _push_(SFRS);
  
    clr_SPSR_SPIF;

    _pop_(SFRS);
}
//-----------------------------------------------------------------------------------------------------------
void WDT_ISR(void) interrupt 10          // Vector @  0x53
{
    _push_(SFRS);
  
    clr_WDCON_WDTF;

    _pop_(SFRS);
}
//-----------------------------------------------------------------------------------------------------------
void ADC_ISR(void) interrupt 11          // Vector @  0x5B
{
    _push_(SFRS);
  
    clr_ADCCON0_ADCF;
    
    _pop_(SFRS);
}
//-----------------------------------------------------------------------------------------------------------
void Capture_ISR(void) interrupt 12      // Vector @  0x63
{
    _push_(SFRS);
  
    clr_CAPCON0_CAPF0;
    clr_CAPCON0_CAPF1;
    clr_CAPCON0_CAPF2;

    _pop_(SFRS);
}
//-----------------------------------------------------------------------------------------------------------
void PWM_Brake_ISR(void) interrupt 14    // Vector @  0x73
{
    _push_(SFRS);
  
    clr_FBD_FBF;

    _pop_(SFRS);
}
//-----------------------------------------------------------------------------------------------------------
void UART1_ISR(void) interrupt 15    			// Vector @  0x7B
{
    _push_(SFRS);
  
    clr_SCON_1_RI_1;
    clr_SCON_1_TI_1;

    _pop_(SFRS);
}
//-----------------------------------------------------------------------------------------------------------
void Timer3_ISR(void) interrupt 16    		// Vector @  0x83
{
    _push_(SFRS);
  
    clr_T3CON_TF3;

    _pop_(SFRS);
}
//-----------------------------------------------------------------------------------------------------------
void WKT_ISR(void) interrupt 17    				// Vector @  0x8B
{
    _push_(SFRS);
  
    clr_WKCON_WKTF;

    _pop_(SFRS);
}


