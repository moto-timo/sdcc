//
// Register Declarations for Microchip 12F675 Processor
//
//
// This header file was automatically generated by:
//
// inc2h.pl
//
// Copyright (c) 2002, Kevin L. Pauba, All Rights Reserved
//
// SDCC is licensed under the GNU Public license (GPL) v2. Note that
// this license covers the code to the compiler and other executables,
// but explicitly does not cover any code or objects generated by sdcc.
//
// For pic device libraries and header files which are derived from
// Microchip header (.inc) and linker script (.lkr) files Microchip
// requires that "The header files should state that they are only to be
// used with authentic Microchip devices" which makes them incompatible
// with the GPL. Pic device libraries and header files are located at
// non-free/lib and non-free/include directories respectively.
// Sdcc should be run with the --use-non-free command line option in
// order to include non-free header files and libraries.
//
// See http://sdcc.sourceforge.net/ for the latest information on sdcc.
//
// 
#ifndef P12F675_H
#define P12F675_H

//
// Register addresses.
//
#define INDF_ADDR       0x0000
#define TMR0_ADDR       0x0001
#define PCL_ADDR        0x0002
#define STATUS_ADDR     0x0003
#define FSR_ADDR        0x0004
#define GPIO_ADDR       0x0005
#define PCLATH_ADDR     0x000A
#define INTCON_ADDR     0x000B
#define PIR1_ADDR       0x000C
#define TMR1_ADDR       0x000E
#define TMR1L_ADDR      0x000E
#define TMR1H_ADDR      0x000F
#define T1CON_ADDR      0x0010
#define CMCON_ADDR      0x0019
#define ADRESH_ADDR     0x001E
#define ADCON0_ADDR     0x001F
#define OPTION_REG_ADDR 0x0081
#define TRISIO_ADDR     0x0085
#define PIE1_ADDR       0x008C
#define PCON_ADDR       0x008E
#define OSCCAL_ADDR     0x0090
#define WPU_ADDR        0x0095
#define IOC_ADDR        0x0096
#define IOCB_ADDR       0x0096
#define VRCON_ADDR      0x0099
#define EEDAT_ADDR      0x009A
#define EEDATA_ADDR     0x009A
#define EEADR_ADDR      0x009B
#define EECON1_ADDR     0x009C
#define EECON2_ADDR     0x009D
#define ADRESL_ADDR     0x009E
#define ANSEL_ADDR      0x009F

//
// Memory organization.
//



//         LIST

//==========================================================================
//  MPASM PIC12F675 processor include
//
//  (c) Copyright 1999-2012 Microchip Technology, All rights reserved
//==========================================================================

//         NOLIST

//==========================================================================
//  This header file defines configurations, registers, and other useful
//  bits of information for the PIC12F675 microcontroller.  These names
//  are taken to match the data sheets as closely as possible.
//
//  Note that the processor must be selected before this file is included.
//  The processor may be selected the following ways:
//
//       1. Command line switch:
//               C:\MPASM MYFILE.ASM /PIC12F675
//       2. LIST directive in the source file
//               LIST   P=PIC12F675
//       3. Processor Type entry in the MPASM full-screen interface
//       4. Setting the processor in the MPLAB Project Dialog
//==========================================================================

//==========================================================================
//
//       Verify Processor
//
//==========================================================================
//        IFNDEF __12F675
//            MESSG "Processor-header file mismatch.  Verify selected processor."
//         ENDIF



//==========================================================================
//
//       Register Definitions
//
//==========================================================================

#define W                    0x0000
#define F                    0x0001

//----- Register Files -----------------------------------------------------

//-----Bank0------------------
extern __sfr  __at (INDF_ADDR)                    INDF;
extern __sfr  __at (TMR0_ADDR)                    TMR0;
extern __sfr  __at (PCL_ADDR)                     PCL;
extern __sfr  __at (STATUS_ADDR)                  STATUS;
extern __sfr  __at (FSR_ADDR)                     FSR;
extern __sfr  __at (GPIO_ADDR)                    GPIO;
extern __sfr  __at (PCLATH_ADDR)                  PCLATH;
extern __sfr  __at (INTCON_ADDR)                  INTCON;
extern __sfr  __at (PIR1_ADDR)                    PIR1;
extern __sfr  __at (TMR1_ADDR)                    TMR1;
extern __sfr  __at (TMR1L_ADDR)                   TMR1L;
extern __sfr  __at (TMR1H_ADDR)                   TMR1H;
extern __sfr  __at (T1CON_ADDR)                   T1CON;
extern __sfr  __at (CMCON_ADDR)                   CMCON;
extern __sfr  __at (ADRESH_ADDR)                  ADRESH;
extern __sfr  __at (ADCON0_ADDR)                  ADCON0;

//-----Bank1------------------
extern __sfr  __at (OPTION_REG_ADDR)              OPTION_REG;
extern __sfr  __at (TRISIO_ADDR)                  TRISIO;
extern __sfr  __at (PIE1_ADDR)                    PIE1;
extern __sfr  __at (PCON_ADDR)                    PCON;
extern __sfr  __at (OSCCAL_ADDR)                  OSCCAL;
extern __sfr  __at (WPU_ADDR)                     WPU;
extern __sfr  __at (IOC_ADDR)                     IOC;
extern __sfr  __at (IOCB_ADDR)                    IOCB;
extern __sfr  __at (VRCON_ADDR)                   VRCON;
extern __sfr  __at (EEDAT_ADDR)                   EEDAT;
extern __sfr  __at (EEDATA_ADDR)                  EEDATA;
extern __sfr  __at (EEADR_ADDR)                   EEADR;
extern __sfr  __at (EECON1_ADDR)                  EECON1;
extern __sfr  __at (EECON2_ADDR)                  EECON2;
extern __sfr  __at (ADRESL_ADDR)                  ADRESL;
extern __sfr  __at (ANSEL_ADDR)                   ANSEL;

//----- STATUS Bits -----------------------------------------------------



//----- GPIO Bits -----------------------------------------------------



//----- INTCON Bits -----------------------------------------------------



//----- PIR1 Bits -----------------------------------------------------



//----- T1CON Bits -----------------------------------------------------



//----- CMCON Bits -----------------------------------------------------



//----- ADCON0 Bits -----------------------------------------------------





//----- OPTION_REG Bits -----------------------------------------------------



//----- TRISIO Bits -----------------------------------------------------


//----- PIE1 Bits -----------------------------------------------------



//----- PCON Bits -----------------------------------------------------



//----- OSCCAL Bits -----------------------------------------------------


//----- WPU Bits -----------------------------------------------------


//----- IOC Bits -----------------------------------------------------



//----- IOCB Bits -----------------------------------------------------



//----- VRCON Bits -----------------------------------------------------



//----- EECON1 Bits -----------------------------------------------------


//----- ANSEL Bits -----------------------------------------------------




//==========================================================================
//
//       RAM Definitions
//
//==========================================================================
//        __MAXRAM  H'00DF'
//        __BADRAM  H'0006'-H'0009'
//        __BADRAM  H'000D'
//        __BADRAM  H'0011'-H'0018'
//        __BADRAM  H'001A'-H'001D'
//        __BADRAM  H'0060'-H'007F'
//        __BADRAM  H'0086'-H'0089'
//        __BADRAM  H'008D'
//        __BADRAM  H'008F'
//        __BADRAM  H'0091'-H'0094'
//        __BADRAM  H'0097'-H'0098'

//==========================================================================
//
//       Configuration Bits
//
//   NAME            Address
//   CONFIG            2007h
//
//==========================================================================

// The following is an assignment of address values for all of the
// configuration registers for the purpose of table reads
#define _CONFIG              0x2007

//----- CONFIG Options --------------------------------------------------
#define _FOSC_LP             0x3FF8    // LP oscillator: Low power crystal on GP4/OSC2/CLKOUT and GP5/OSC1/CLKIN
#define _LP_OSC              0x3FF8    // LP oscillator: Low power crystal on GP4/OSC2/CLKOUT and GP5/OSC1/CLKIN
#define _FOSC_XT             0x3FF9    // XT oscillator: Crystal/resonator on GP4/OSC2/CLKOUT and GP5/OSC1/CLKIN
#define _XT_OSC              0x3FF9    // XT oscillator: Crystal/resonator on GP4/OSC2/CLKOUT and GP5/OSC1/CLKIN
#define _FOSC_HS             0x3FFA    // HS oscillator: High speed crystal/resonator on GP4/OSC2/CLKOUT and GP5/OSC1/CLKIN
#define _HS_OSC              0x3FFA    // HS oscillator: High speed crystal/resonator on GP4/OSC2/CLKOUT and GP5/OSC1/CLKIN
#define _FOSC_EC             0x3FFB    // EC: I/O function on GP4/OSC2/CLKOUT pin, CLKIN on GP5/OSC1/CLKIN
#define _EC_OSC              0x3FFB    // EC: I/O function on GP4/OSC2/CLKOUT pin, CLKIN on GP5/OSC1/CLKIN
#define _FOSC_INTRCIO        0x3FFC    // INTOSC oscillator: I/O function on GP4/OSC2/CLKOUT pin, I/O function on GP5/OSC1/CLKIN
#define _INTRC_OSC_NOCLKOUT  0x3FFC    // INTOSC oscillator: I/O function on GP4/OSC2/CLKOUT pin, I/O function on GP5/OSC1/CLKIN
#define _FOSC_INTRCCLK       0x3FFD    // INTOSC oscillator: CLKOUT function on GP4/OSC2/CLKOUT pin, I/O function on GP5/OSC1/CLKIN
#define _INTRC_OSC_CLKOUT    0x3FFD    // INTOSC oscillator: CLKOUT function on GP4/OSC2/CLKOUT pin, I/O function on GP5/OSC1/CLKIN
#define _FOSC_EXTRCIO        0x3FFE    // RC oscillator: I/O function on GP4/OSC2/CLKOUT pin, RC on GP5/OSC1/CLKIN
#define _EXTRC_OSC_NOCLKOUT  0x3FFE    // RC oscillator: I/O function on GP4/OSC2/CLKOUT pin, RC on GP5/OSC1/CLKIN
#define _FOSC_EXTRCCLK       0x3FFF    // RC oscillator: CLKOUT function on GP4/OSC2/CLKOUT pin, RC on GP5/OSC1/CLKIN
#define _EXTRC_OSC_CLKOUT    0x3FFF    // RC oscillator: CLKOUT function on GP4/OSC2/CLKOUT pin, RC on GP5/OSC1/CLKIN

#define _WDTE_OFF            0x3FF7    // WDT disabled
#define _WDT_OFF             0x3FF7    // WDT disabled
#define _WDTE_ON             0x3FFF    // WDT enabled
#define _WDT_ON              0x3FFF    // WDT enabled

#define _PWRTE_ON            0x3FEF    // PWRT enabled
#define _PWRTE_OFF           0x3FFF    // PWRT disabled

#define _MCLRE_OFF           0x3FDF    // GP3/MCLR pin function is digital I/O, MCLR internally tied to VDD
#define _MCLRE_ON            0x3FFF    // GP3/MCLR pin function is MCLR

#define _BOREN_OFF           0x3FBF    // BOD disabled
#define _BODEN_OFF           0x3FBF    // BOD disabled
#define _BOREN_ON            0x3FFF    // BOD enabled
#define _BODEN_ON            0x3FFF    // BOD enabled

#define _CP_ON               0x3F7F    // Program Memory code protection is enabled
#define _CP_OFF              0x3FFF    // Program Memory code protection is disabled

#define _CPD_ON              0x3EFF    // Data memory code protection is enabled
#define _CPD_OFF             0x3FFF    // Data memory code protection is disabled

//----- DEVID Equates --------------------------------------------------
#define _DEVID1              0x2006

//----- IDLOC Equates --------------------------------------------------
#define _IDLOC0              0x2000
#define _IDLOC1              0x2001
#define _IDLOC2              0x2002
#define _IDLOC3              0x2003

//         LIST

// ----- ADCON0 bits --------------------
typedef union {
  struct {
    unsigned char ADON:1;
    unsigned char GO_NOT_DONE:1;
    unsigned char CHS0:1;
    unsigned char CHS1:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char VCFG:1;
    unsigned char ADFM:1;
  };
  struct {
    unsigned char :1;
    unsigned char GO_DONE:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
  struct {
    unsigned char :1;
    unsigned char NOT_DONE:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
  struct {
    unsigned char :1;
    unsigned char GO:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __ADCON0bits_t;
extern volatile __ADCON0bits_t __at(ADCON0_ADDR) ADCON0bits;

// ----- ANSEL bits --------------------
typedef union {
  struct {
    unsigned char ANS0:1;
    unsigned char ANS1:1;
    unsigned char ANS2:1;
    unsigned char ANS3:1;
    unsigned char ADCS0:1;
    unsigned char ADCS1:1;
    unsigned char ADCS2:1;
    unsigned char :1;
  };
} __ANSELbits_t;
extern volatile __ANSELbits_t __at(ANSEL_ADDR) ANSELbits;

// ----- CMCON bits --------------------
typedef union {
  struct {
    unsigned char CM0:1;
    unsigned char CM1:1;
    unsigned char CM2:1;
    unsigned char CIS:1;
    unsigned char CINV:1;
    unsigned char :1;
    unsigned char COUT:1;
    unsigned char :1;
  };
} __CMCONbits_t;
extern volatile __CMCONbits_t __at(CMCON_ADDR) CMCONbits;

// ----- EECON1 bits --------------------
typedef union {
  struct {
    unsigned char RD:1;
    unsigned char WR:1;
    unsigned char WREN:1;
    unsigned char WRERR:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __EECON1bits_t;
extern volatile __EECON1bits_t __at(EECON1_ADDR) EECON1bits;

// ----- GPIO bits --------------------
typedef union {
  struct {
    unsigned char GP0:1;
    unsigned char GP1:1;
    unsigned char GP2:1;
    unsigned char GP3:1;
    unsigned char GP4:1;
    unsigned char GP5:1;
    unsigned char :1;
    unsigned char :1;
  };
  struct {
    unsigned char GPIO0:1;
    unsigned char GPIO1:1;
    unsigned char GPIO2:1;
    unsigned char GPIO3:1;
    unsigned char GPIO4:1;
    unsigned char GPIO5:1;
    unsigned char :1;
    unsigned char :1;
  };
} __GPIObits_t;
extern volatile __GPIObits_t __at(GPIO_ADDR) GPIObits;

// ----- INTCON bits --------------------
typedef union {
  struct {
    unsigned char GPIF:1;
    unsigned char INTF:1;
    unsigned char T0IF:1;
    unsigned char GPIE:1;
    unsigned char INTE:1;
    unsigned char T0IE:1;
    unsigned char PEIE:1;
    unsigned char GIE:1;
  };
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char TMR0IF:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char TMR0IE:1;
    unsigned char :1;
    unsigned char :1;
  };
} __INTCONbits_t;
extern volatile __INTCONbits_t __at(INTCON_ADDR) INTCONbits;

// ----- IOC bits --------------------
typedef union {
  struct {
    unsigned char IOC0:1;
    unsigned char IOC1:1;
    unsigned char IOC2:1;
    unsigned char IOC3:1;
    unsigned char IOC4:1;
    unsigned char IOC5:1;
    unsigned char :1;
    unsigned char :1;
  };
  struct {
    unsigned char IOCB0:1;
    unsigned char IOCB1:1;
    unsigned char IOCB2:1;
    unsigned char IOCB3:1;
    unsigned char IOCB4:1;
    unsigned char IOCB5:1;
    unsigned char :1;
    unsigned char :1;
  };
} __IOCbits_t;
extern volatile __IOCbits_t __at(IOC_ADDR) IOCbits;

// ----- IOCB bits --------------------
typedef union {
  struct {
    unsigned char IOC0:1;
    unsigned char IOC1:1;
    unsigned char IOC2:1;
    unsigned char IOC3:1;
    unsigned char IOC4:1;
    unsigned char IOC5:1;
    unsigned char :1;
    unsigned char :1;
  };
  struct {
    unsigned char IOCB0:1;
    unsigned char IOCB1:1;
    unsigned char IOCB2:1;
    unsigned char IOCB3:1;
    unsigned char IOCB4:1;
    unsigned char IOCB5:1;
    unsigned char :1;
    unsigned char :1;
  };
} __IOCBbits_t;
extern volatile __IOCBbits_t __at(IOCB_ADDR) IOCBbits;

// ----- OPTION_REG bits --------------------
typedef union {
  struct {
    unsigned char PS0:1;
    unsigned char PS1:1;
    unsigned char PS2:1;
    unsigned char PSA:1;
    unsigned char T0SE:1;
    unsigned char T0CS:1;
    unsigned char INTEDG:1;
    unsigned char NOT_GPPU:1;
  };
} __OPTION_REGbits_t;
extern volatile __OPTION_REGbits_t __at(OPTION_REG_ADDR) OPTION_REGbits;

// ----- OSCCAL bits --------------------
typedef union {
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char CAL0:1;
    unsigned char CAL1:1;
    unsigned char CAL2:1;
    unsigned char CAL3:1;
    unsigned char CAL4:1;
    unsigned char CAL5:1;
  };
} __OSCCALbits_t;
extern volatile __OSCCALbits_t __at(OSCCAL_ADDR) OSCCALbits;

// ----- PCON bits --------------------
typedef union {
  struct {
    unsigned char NOT_BOR:1;
    unsigned char NOT_POR:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
  struct {
    unsigned char NOT_BOD:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __PCONbits_t;
extern volatile __PCONbits_t __at(PCON_ADDR) PCONbits;

// ----- PIE1 bits --------------------
typedef union {
  struct {
    unsigned char TMR1IE:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char CMIE:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char ADIE:1;
    unsigned char EEIE:1;
  };
  struct {
    unsigned char T1IE:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __PIE1bits_t;
extern volatile __PIE1bits_t __at(PIE1_ADDR) PIE1bits;

// ----- PIR1 bits --------------------
typedef union {
  struct {
    unsigned char TMR1IF:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char CMIF:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char ADIF:1;
    unsigned char EEIF:1;
  };
  struct {
    unsigned char T1IF:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __PIR1bits_t;
extern volatile __PIR1bits_t __at(PIR1_ADDR) PIR1bits;

// ----- STATUS bits --------------------
typedef union {
  struct {
    unsigned char C:1;
    unsigned char DC:1;
    unsigned char Z:1;
    unsigned char NOT_PD:1;
    unsigned char NOT_TO:1;
    unsigned char RP0:1;
    unsigned char RP1:1;
    unsigned char IRP:1;
  };
} __STATUSbits_t;
extern volatile __STATUSbits_t __at(STATUS_ADDR) STATUSbits;

// ----- T1CON bits --------------------
typedef union {
  struct {
    unsigned char TMR1ON:1;
    unsigned char TMR1CS:1;
    unsigned char NOT_T1SYNC:1;
    unsigned char T1OSCEN:1;
    unsigned char T1CKPS0:1;
    unsigned char T1CKPS1:1;
    unsigned char TMR1GE:1;
    unsigned char :1;
  };
} __T1CONbits_t;
extern volatile __T1CONbits_t __at(T1CON_ADDR) T1CONbits;

// ----- TRISIO bits --------------------
typedef union {
  struct {
    unsigned char TRISIO0:1;
    unsigned char TRISIO1:1;
    unsigned char TRISIO2:1;
    unsigned char TRISIO3:1;
    unsigned char TRISIO4:1;
    unsigned char TRISIO5:1;
    unsigned char :1;
    unsigned char :1;
  };
} __TRISIObits_t;
extern volatile __TRISIObits_t __at(TRISIO_ADDR) TRISIObits;

// ----- VRCON bits --------------------
typedef union {
  struct {
    unsigned char VR0:1;
    unsigned char VR1:1;
    unsigned char VR2:1;
    unsigned char VR3:1;
    unsigned char :1;
    unsigned char VRR:1;
    unsigned char :1;
    unsigned char VREN:1;
  };
} __VRCONbits_t;
extern volatile __VRCONbits_t __at(VRCON_ADDR) VRCONbits;

// ----- WPU bits --------------------
typedef union {
  struct {
    unsigned char WPU0:1;
    unsigned char WPU1:1;
    unsigned char WPU2:1;
    unsigned char :1;
    unsigned char WPU4:1;
    unsigned char WPU5:1;
    unsigned char :1;
    unsigned char :1;
  };
} __WPUbits_t;
extern volatile __WPUbits_t __at(WPU_ADDR) WPUbits;


#ifndef NO_BIT_DEFINES

#define ADON                 ADCON0bits.ADON                /* bit 0 */
#define GO                   ADCON0bits.GO                  /* bit 1 */
#define GO_DONE              ADCON0bits.GO_DONE             /* bit 1 */
#define GO_NOT_DONE          ADCON0bits.GO_NOT_DONE         /* bit 1 */
#define NOT_DONE             ADCON0bits.NOT_DONE            /* bit 1 */
#define CHS0                 ADCON0bits.CHS0                /* bit 2 */
#define CHS1                 ADCON0bits.CHS1                /* bit 3 */
#define VCFG                 ADCON0bits.VCFG                /* bit 6 */
#define ADFM                 ADCON0bits.ADFM                /* bit 7 */

#define ANS0                 ANSELbits.ANS0                 /* bit 0 */
#define ANS1                 ANSELbits.ANS1                 /* bit 1 */
#define ANS2                 ANSELbits.ANS2                 /* bit 2 */
#define ANS3                 ANSELbits.ANS3                 /* bit 3 */
#define ADCS0                ANSELbits.ADCS0                /* bit 4 */
#define ADCS1                ANSELbits.ADCS1                /* bit 5 */
#define ADCS2                ANSELbits.ADCS2                /* bit 6 */

#define CM0                  CMCONbits.CM0                  /* bit 0 */
#define CM1                  CMCONbits.CM1                  /* bit 1 */
#define CM2                  CMCONbits.CM2                  /* bit 2 */
#define CIS                  CMCONbits.CIS                  /* bit 3 */
#define CINV                 CMCONbits.CINV                 /* bit 4 */
#define COUT                 CMCONbits.COUT                 /* bit 6 */

#define RD                   EECON1bits.RD                  /* bit 0 */
#define WR                   EECON1bits.WR                  /* bit 1 */
#define WREN                 EECON1bits.WREN                /* bit 2 */
#define WRERR                EECON1bits.WRERR               /* bit 3 */

#define GP0                  GPIObits.GP0                   /* bit 0 */
#define GPIO0                GPIObits.GPIO0                 /* bit 0 */
#define GP1                  GPIObits.GP1                   /* bit 1 */
#define GPIO1                GPIObits.GPIO1                 /* bit 1 */
#define GP2                  GPIObits.GP2                   /* bit 2 */
#define GPIO2                GPIObits.GPIO2                 /* bit 2 */
#define GP3                  GPIObits.GP3                   /* bit 3 */
#define GPIO3                GPIObits.GPIO3                 /* bit 3 */
#define GP4                  GPIObits.GP4                   /* bit 4 */
#define GPIO4                GPIObits.GPIO4                 /* bit 4 */
#define GP5                  GPIObits.GP5                   /* bit 5 */
#define GPIO5                GPIObits.GPIO5                 /* bit 5 */

#define GPIF                 INTCONbits.GPIF                /* bit 0 */
#define INTF                 INTCONbits.INTF                /* bit 1 */
#define T0IF                 INTCONbits.T0IF                /* bit 2 */
#define TMR0IF               INTCONbits.TMR0IF              /* bit 2 */
#define GPIE                 INTCONbits.GPIE                /* bit 3 */
#define INTE                 INTCONbits.INTE                /* bit 4 */
#define T0IE                 INTCONbits.T0IE                /* bit 5 */
#define TMR0IE               INTCONbits.TMR0IE              /* bit 5 */
#define PEIE                 INTCONbits.PEIE                /* bit 6 */
#define GIE                  INTCONbits.GIE                 /* bit 7 */

#define IOC0                 IOCbits.IOC0                   /* bit 0, shadows bit in IOCBbits */
#define IOCB0                IOCbits.IOCB0                  /* bit 0, shadows bit in IOCBbits */
#define IOC1                 IOCbits.IOC1                   /* bit 1, shadows bit in IOCBbits */
#define IOCB1                IOCbits.IOCB1                  /* bit 1, shadows bit in IOCBbits */
#define IOC2                 IOCbits.IOC2                   /* bit 2, shadows bit in IOCBbits */
#define IOCB2                IOCbits.IOCB2                  /* bit 2, shadows bit in IOCBbits */
#define IOC3                 IOCbits.IOC3                   /* bit 3, shadows bit in IOCBbits */
#define IOCB3                IOCbits.IOCB3                  /* bit 3, shadows bit in IOCBbits */
#define IOC4                 IOCbits.IOC4                   /* bit 4, shadows bit in IOCBbits */
#define IOCB4                IOCbits.IOCB4                  /* bit 4, shadows bit in IOCBbits */
#define IOC5                 IOCbits.IOC5                   /* bit 5, shadows bit in IOCBbits */
#define IOCB5                IOCbits.IOCB5                  /* bit 5, shadows bit in IOCBbits */

#define PS0                  OPTION_REGbits.PS0             /* bit 0 */
#define PS1                  OPTION_REGbits.PS1             /* bit 1 */
#define PS2                  OPTION_REGbits.PS2             /* bit 2 */
#define PSA                  OPTION_REGbits.PSA             /* bit 3 */
#define T0SE                 OPTION_REGbits.T0SE            /* bit 4 */
#define T0CS                 OPTION_REGbits.T0CS            /* bit 5 */
#define INTEDG               OPTION_REGbits.INTEDG          /* bit 6 */
#define NOT_GPPU             OPTION_REGbits.NOT_GPPU        /* bit 7 */

#define CAL0                 OSCCALbits.CAL0                /* bit 2 */
#define CAL1                 OSCCALbits.CAL1                /* bit 3 */
#define CAL2                 OSCCALbits.CAL2                /* bit 4 */
#define CAL3                 OSCCALbits.CAL3                /* bit 5 */
#define CAL4                 OSCCALbits.CAL4                /* bit 6 */
#define CAL5                 OSCCALbits.CAL5                /* bit 7 */

#define NOT_BOD              PCONbits.NOT_BOD               /* bit 0 */
#define NOT_BOR              PCONbits.NOT_BOR               /* bit 0 */
#define NOT_POR              PCONbits.NOT_POR               /* bit 1 */

#define T1IE                 PIE1bits.T1IE                  /* bit 0 */
#define TMR1IE               PIE1bits.TMR1IE                /* bit 0 */
#define CMIE                 PIE1bits.CMIE                  /* bit 3 */
#define ADIE                 PIE1bits.ADIE                  /* bit 6 */
#define EEIE                 PIE1bits.EEIE                  /* bit 7 */

#define T1IF                 PIR1bits.T1IF                  /* bit 0 */
#define TMR1IF               PIR1bits.TMR1IF                /* bit 0 */
#define CMIF                 PIR1bits.CMIF                  /* bit 3 */
#define ADIF                 PIR1bits.ADIF                  /* bit 6 */
#define EEIF                 PIR1bits.EEIF                  /* bit 7 */

#define C                    STATUSbits.C                   /* bit 0 */
#define DC                   STATUSbits.DC                  /* bit 1 */
#define Z                    STATUSbits.Z                   /* bit 2 */
#define NOT_PD               STATUSbits.NOT_PD              /* bit 3 */
#define NOT_TO               STATUSbits.NOT_TO              /* bit 4 */
#define RP0                  STATUSbits.RP0                 /* bit 5 */
#define RP1                  STATUSbits.RP1                 /* bit 6 */
#define IRP                  STATUSbits.IRP                 /* bit 7 */

#define TMR1ON               T1CONbits.TMR1ON               /* bit 0 */
#define TMR1CS               T1CONbits.TMR1CS               /* bit 1 */
#define NOT_T1SYNC           T1CONbits.NOT_T1SYNC           /* bit 2 */
#define T1OSCEN              T1CONbits.T1OSCEN              /* bit 3 */
#define T1CKPS0              T1CONbits.T1CKPS0              /* bit 4 */
#define T1CKPS1              T1CONbits.T1CKPS1              /* bit 5 */
#define TMR1GE               T1CONbits.TMR1GE               /* bit 6 */

#define TRISIO0              TRISIObits.TRISIO0             /* bit 0 */
#define TRISIO1              TRISIObits.TRISIO1             /* bit 1 */
#define TRISIO2              TRISIObits.TRISIO2             /* bit 2 */
#define TRISIO3              TRISIObits.TRISIO3             /* bit 3 */
#define TRISIO4              TRISIObits.TRISIO4             /* bit 4 */
#define TRISIO5              TRISIObits.TRISIO5             /* bit 5 */

#define VR0                  VRCONbits.VR0                  /* bit 0 */
#define VR1                  VRCONbits.VR1                  /* bit 1 */
#define VR2                  VRCONbits.VR2                  /* bit 2 */
#define VR3                  VRCONbits.VR3                  /* bit 3 */
#define VRR                  VRCONbits.VRR                  /* bit 5 */
#define VREN                 VRCONbits.VREN                 /* bit 7 */

#define WPU0                 WPUbits.WPU0                   /* bit 0 */
#define WPU1                 WPUbits.WPU1                   /* bit 1 */
#define WPU2                 WPUbits.WPU2                   /* bit 2 */
#define WPU4                 WPUbits.WPU4                   /* bit 4 */
#define WPU5                 WPUbits.WPU5                   /* bit 5 */
#endif /* NO_BIT_DEFINES */

#ifndef NO_LEGACY_NAMES
#define ADCON0_bits          ADCON0bits
#define ANSEL_bits           ANSELbits
#define CMCON_bits           CMCONbits
#define EECON1_bits          EECON1bits
#define GPIO_bits            GPIObits
#define INTCON_bits          INTCONbits
#define IOC_bits             IOCbits
#define IOCB_bits            IOCBbits
#define OPTION_REG_bits      OPTION_REGbits
#define OSCCAL_bits          OSCCALbits
#define PCON_bits            PCONbits
#define PIE1_bits            PIE1bits
#define PIR1_bits            PIR1bits
#define STATUS_bits          STATUSbits
#define T1CON_bits           T1CONbits
#define TRISIO_bits          TRISIObits
#define VRCON_bits           VRCONbits
#define WPU_bits             WPUbits
#endif /* NO_LEGACY_NAMES */

#endif
