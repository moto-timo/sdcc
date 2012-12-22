/*-------------------------------------------------------------------------
  gen.h - header file for code generation for 8051

             Written By -  Philipp Krause . pkk@spth.de (2012)

   This program is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by the
   Free Software Foundation; either version 2, or (at your option) any
   later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
-------------------------------------------------------------------------*/

#ifndef STM8GEN_H
#define STM8GEN_H 1

typedef enum
{
  AOP_INVALID,
  /* Is a literal */
  AOP_LIT = 1,
  /* Is in a register */
  AOP_REG,
  /* Is partially in registers, partially on the stack */
  AOP_REGSTK,
  /* Is on the stack */
  AOP_STK,
  /* Is in the extended stack pointer (IY on the Z80) */
  AOP_EXSTK,
  /* Read undefined, discard writes */
  AOP_DUMMY
}
AOP_TYPE;

/* type asmop : a homogenised type for 
   all the different spaces an operand can be
   in */
typedef struct asmop
{
  AOP_TYPE type;
}
asmop;

void genSTM8Code (iCode *);
void stm8_emitDebuggerSymbol (const char *);

extern bool stm8_assignment_optimal;

#endif

