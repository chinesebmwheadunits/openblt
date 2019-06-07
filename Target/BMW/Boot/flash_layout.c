/************************************************************************************//**
* \file         Demo/ARMCM3_STM32F1_Nucleo_F103RB_TrueStudio/Boot/flash_layout.c
* \brief        Custom flash layout table source file.
* \ingroup      Boot_ARMCM3_STM32F1_Nucleo_F103RB_TrueStudio
* \internal
*----------------------------------------------------------------------------------------
*                          C O P Y R I G H T
*----------------------------------------------------------------------------------------
*   Copyright (c) 2018  by Feaser    http://www.feaser.com    All rights reserved
*
*----------------------------------------------------------------------------------------
*                            L I C E N S E
*----------------------------------------------------------------------------------------
* This file is part of OpenBLT. OpenBLT is free software: you can redistribute it and/or
* modify it under the terms of the GNU General Public License as published by the Free
* Software Foundation, either version 3 of the License, or (at your option) any later
* version.
*
* OpenBLT is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
* without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
* PURPOSE. See the GNU General Public License for more details.
*
* You have received a copy of the GNU General Public License along with OpenBLT. It
* should be located in ".\Doc\license.html". If not, contact Feaser to obtain a copy.
*
* \endinternal
****************************************************************************************/

/** \brief   Array wit the layout of the flash memory.
 *  \details Also controls what part of the flash memory is reserved for the bootloader.
 *           If the bootloader size changes, the reserved sectors for the bootloader
 *           might need adjustment to make sure the bootloader doesn't get overwritten.
 */
static const tFlashSector flashLayout[] =
{
  /* space is reserved for a bootloader configuration with all supported communication
   * interfaces enabled. when for example only UART is needed, than the space required
   * for the bootloader can be made a lot smaller here.
   */
/*  { 0x08000000, 0x00800 },            flash sector  0 - Reserved for bootloader   */
/*  { 0x08000800, 0x00800 },            flash sector  1 - Reserved for bootloader   */
/*  { 0x08001000, 0x00800 },            flash sector  2 - Reserved for bootloader   */
/*  { 0x08001800, 0x00800 },            flash sector  3 - Reserved for bootloader   */
/*  { 0x08002000, 0x00800 },            flash sector  4 - Reserved for bootloader   */
  { 0x08002800, 0x00800 },           /* flash sector  5 - 2kb                       */
  { 0x08003000, 0x00800 },           /* flash sector  6 - 2kb                       */
  { 0x08003800, 0x00800 },           /* flash sector  7 - 2kb                       */
  { 0x08004000, 0x00800 },           /* flash sector  8 - 2kb                       */
  { 0x08004800, 0x00800 },           /* flash sector  9 - 2kb                       */
  { 0x08005000, 0x00800 },           /* flash sector 10 - 2kb                       */
  { 0x08005800, 0x00800 },           /* flash sector 11 - 2kb                       */
  { 0x08006000, 0x00800 },           /* flash sector 12 - 2kb                       */
  { 0x08006800, 0x00800 },           /* flash sector 13 - 2kb                       */
  { 0x08007000, 0x00800 },           /* flash sector 14 - 2kb                       */
  { 0x08007800, 0x00800 },           /* flash sector 15 - 2kb                       */
  { 0x08008000, 0x00800 },           /* flash sector 16 - 2kb                       */
  { 0x08008800, 0x00800 },           /* flash sector 17 - 2kb                       */
  { 0x08009000, 0x00800 },           /* flash sector 18 - 2kb                       */
  { 0x08009800, 0x00800 },           /* flash sector 19 - 2kb                       */
  { 0x0800A000, 0x00800 },           /* flash sector 20 - 2kb                       */
  { 0x0800A800, 0x00800 },           /* flash sector 21 - 2kb                       */
  { 0x0800B000, 0x00800 },           /* flash sector 22 - 2kb                       */
  { 0x0800B800, 0x00800 },           /* flash sector 23 - 2kb                       */
  { 0x0800C000, 0x00800 },           /* flash sector 24 - 2kb                       */
  { 0x0800C800, 0x00800 },           /* flash sector 25 - 2kb                       */
  { 0x0800D000, 0x00800 },           /* flash sector 26 - 2kb                       */
  { 0x0800D800, 0x00800 },           /* flash sector 27 - 2kb                       */
  { 0x0800E000, 0x00800 },           /* flash sector 28 - 2kb                       */
  { 0x0800E800, 0x00800 },           /* flash sector 29 - 2kb                       */
  { 0x0800F000, 0x00800 },           /* flash sector 30 - 2kb                       */
  { 0x0800F800, 0x00800 },           /* flash sector 31 - 2kb                       */
  { 0x08010000, 0x00800 },           /* flash sector 32 - 2kb                       */
  { 0x08010800, 0x00800 },           /* flash sector 33 - 2kb                       */
  { 0x08011000, 0x00800 },           /* flash sector 34 - 2kb                       */
  { 0x08011800, 0x00800 },           /* flash sector 35 - 2kb                       */
  { 0x08012000, 0x00800 },           /* flash sector 36 - 2kb                       */
  { 0x08012800, 0x00800 },           /* flash sector 37 - 2kb                       */
  { 0x08013000, 0x00800 },           /* flash sector 38 - 2kb                       */
  { 0x08013800, 0x00800 },           /* flash sector 39 - 2kb                       */
  { 0x08014000, 0x00800 },           /* flash sector 40 - 2kb                       */
  { 0x08014800, 0x00800 },           /* flash sector 41 - 2kb                       */
  { 0x08015000, 0x00800 },           /* flash sector 42 - 2kb                       */
  { 0x08015800, 0x00800 },           /* flash sector 43 - 2kb                       */
  { 0x08016000, 0x00800 },           /* flash sector 44 - 2kb                       */
  { 0x08016800, 0x00800 },           /* flash sector 45 - 2kb                       */
  { 0x08017000, 0x00800 },           /* flash sector 46 - 2kb                       */
  { 0x08017800, 0x00800 },           /* flash sector 47 - 2kb                       */
  { 0x08018000, 0x00800 },           /* flash sector 48 - 2kb                       */
  { 0x08018800, 0x00800 },           /* flash sector 49 - 2kb                       */
  { 0x08019000, 0x00800 },           /* flash sector 50 - 2kb                       */
  { 0x08019800, 0x00800 },           /* flash sector 51 - 2kb                       */
  { 0x0801A000, 0x00800 },           /* flash sector 52 - 2kb                       */
  { 0x0801A800, 0x00800 },           /* flash sector 53 - 2kb                       */
  { 0x0801B000, 0x00800 },           /* flash sector 54 - 2kb                       */
  { 0x0801B800, 0x00800 },           /* flash sector 55 - 2kb                       */
  { 0x0801C000, 0x00800 },           /* flash sector 56 - 2kb                       */
  { 0x0801C800, 0x00800 },           /* flash sector 57 - 2kb                       */
  { 0x0801D000, 0x00800 },           /* flash sector 58 - 2kb                       */
  { 0x0801D800, 0x00800 },           /* flash sector 59 - 2kb                       */
  { 0x0801E000, 0x00800 },           /* flash sector 60 - 2kb                       */
/*  { 0x0801E800, 0x00800 },            flash sector 61 - Reserved for user setting */
/*  { 0x0801F000, 0x00800 },            flash sector 62 - Reserved for user setting */
/*  { 0x0801F800, 0x00800 },            flash sector 63 - Reserved for user setting */
};


/*********************************** end of flash_layout.c *****************************/
