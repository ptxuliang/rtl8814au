/******************************************************************************
 *
 * Copyright(c) 2007 - 2011 Realtek Corporation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110, USA
 *
 *
 ******************************************************************************/

//============================================================
// include files
//============================================================
#include "mp_precomp.h"
#include "phydm_precomp.h"

#if !defined(_OUTSRC_COEXIST)
//============================================================
// Global var
//============================================================




#if 0
u4Byte OFDMSwingTable_92E[OFDM_TABLE_SIZE_92E] = {
	/* Index0   6  dB */ 0x7fc001ff,
	/* Index1   5.7dB */ 0x7b4001ed,
	/* Index2   5.4dB */ 0x774001dd,
	/* Index3   5.1dB */ 0x734001cd,
	/* Index4   4.8dB */ 0x6f4001bd,
	/* Index5   4.5dB */ 0x6b8001ae,
	/* Index6   4.2dB */ 0x67c0019f,
	/* Index7   3.9dB */ 0x64400191,
	/* Index8   3.6dB */ 0x60c00183,
	/* Index9   3.3dB */ 0x5d800176,
	/* Index10  3  dB */ 0x5a80016a,
	/* Index11  2.7dB */ 0x5740015d,
	/* Index12  2.4dB */ 0x54400151,
	/* Index13  2.1dB */ 0x51800146,
	/* Index14  1.8dB */ 0x4ec0013b,
	/* Index15  1.5dB */ 0x4c000130,
	/* Index16  1.2dB */ 0x49800126,
	/* Index17  0.9dB */ 0x4700011c,
	/* Index18  0.6dB */ 0x44800112,
	/* Index19  0.3dB */ 0x42000108,
	/* Index20  0  dB */ 0x40000100, // 20 This is OFDM base index
	/* Index21 -0.3dB */ 0x3dc000f7,
	/* Index22 -0.6dB */ 0x3bc000ef,
	/* Index23 -0.9dB */ 0x39c000e7,
	/* Index24 -1.2dB */ 0x37c000df,
	/* Index25 -1.5dB */ 0x35c000d7,
	/* Index26 -1.8dB */ 0x340000d0,
	/* Index27 -2.1dB */ 0x324000c9,
	/* Index28 -2.4dB */ 0x308000c2,
	/* Index29 -2.7dB */ 0x2f0000bc,
	/* Index30 -3  dB */ 0x2d4000b5,
	/* Index31 -3.3dB */ 0x2bc000af,
	/* Index32 -3.6dB */ 0x2a4000a9,
	/* Index33 -3.9dB */ 0x28c000a3,
	/* Index34 -4.2dB */ 0x2780009e,
	/* Index35 -4.5dB */ 0x26000098,
	/* Index36 -4.8dB */ 0x24c00093,
	/* Index37 -5.1dB */ 0x2380008e,
	/* Index38 -5.4dB */ 0x22400089,
	/* Index39 -5.7dB */ 0x21400085,
	/* Index40 -6  dB */ 0x20000080,
	/* Index41 -6.3dB */ 0x1f00007c,
	/* Index42 -6.6dB */ 0x1e000078,
	/* Index43 -6.9dB */ 0x1d000074,
	/* Index44 -7.2dB */ 0x1c000070,
	/* Index45 -7.5dB */ 0x1b00006c,
	/* Index46 -7.8dB */ 0x1a000068,
	/* Index47 -8.1dB */ 0x19400065,
	/* Index48 -8.4dB */ 0x18400061,
	/* Index49 -8.7dB */ 0x1780005e,
	/* Index50 -9  dB */ 0x16c0005b,
	/* Index51 -9.3dB */ 0x16000058,
	/* Index52 -9.6dB */ 0x15400055,
	/* Index53 -9.9dB */ 0x14800052
};
u1Byte CCKSwingTable_Ch1_Ch13_92E[CCK_TABLE_SIZE_92E][8] = {
	/* Index0    0  dB */    {0x36, 0x34 , 0x2E , 0x26 , 0x1C , 0x12 , 0x08 , 0x04},
	/* Index1   -0.3dB */    {0x34, 0x32 , 0x2C , 0x25 , 0x1B , 0x11 , 0x08 , 0x04},
	/* Index2   -0.6dB */    {0x32, 0x30 , 0x2B , 0x23 , 0x1A , 0x11 , 0x07 , 0x04},
	/* Index3   -0.9dB */    {0x31, 0x2F , 0x29 , 0x22 , 0x19 , 0x10 , 0x07 , 0x04},
	/* Index4   -1.2dB */    {0x2F, 0x2D , 0x28 , 0x21 , 0x18 , 0x10 , 0x07 , 0x03},
	/* Index5   -1.5dB */    {0x2D, 0x2C , 0x27 , 0x20 , 0x18 , 0x0F , 0x07 , 0x03},
	/* Index6   -1.8dB */    {0x2C, 0x2A , 0x25 , 0x1F , 0x17 , 0x0F , 0x06 , 0x03},
	/* Index7   -2.1dB */    {0x2A, 0x29 , 0x24 , 0x1E , 0x16 , 0x0E , 0x06 , 0x03},
	/* Index8   -2.4dB */    {0x29, 0x27 , 0x23 , 0x1D , 0x15 , 0x0E , 0x06 , 0x03},
	/* Index9   -2.7dB */    {0x27, 0x26 , 0x22 , 0x1C , 0x14 , 0x0D , 0x06 , 0x03},
	/* Index10  -3  dB */    {0x26, 0x25 , 0x20 , 0x1B , 0x14 , 0x0D , 0x06 , 0x03},
	/* Index11  -3.3dB */    {0x25, 0x23 , 0x1F , 0x1A , 0x13 , 0x0C , 0x05 , 0x03},
	/* Index12  -3.6dB */    {0x24, 0x22 , 0x1E , 0x19 , 0x12 , 0x0C , 0x05 , 0x03},
	/* Index13  -3.9dB */    {0x22, 0x21 , 0x1D , 0x18 , 0x12 , 0x0B , 0x05 , 0x03},
	/* Index14  -4.2dB */    {0x21, 0x20 , 0x1C , 0x17 , 0x11 , 0x0B , 0x05 , 0x02},
	/* Index15  -4.5dB */    {0x20, 0x1F , 0x1B , 0x17 , 0x11 , 0x0B , 0x05 , 0x02},
	/* Index16  -4.8dB */    {0x1F, 0x1E , 0x1A , 0x16 , 0x10 , 0x0A , 0x05 , 0x02},
	/* Index17  -5.1dB */    {0x1E, 0x1D , 0x1A , 0x15 , 0x10 , 0x0A , 0x04 , 0x02},
	/* Index18  -5.4dB */    {0x1D, 0x1C , 0x19 , 0x14 , 0x0F , 0x0A , 0x04 , 0x02},
	/* Index19  -5.7dB */    {0x1C, 0x1B , 0x18 , 0x14 , 0x0E , 0x09 , 0x04 , 0x02},
	/* Index20  -6.0dB */    {0x1B, 0x1A , 0x17 , 0x13 , 0x0E , 0x09 , 0x04 , 0x02}, // 20 This is CCK base index
	/* Index21  -6.3dB */    {0x1A, 0x19 , 0x16 , 0x12 , 0x0E , 0x09 , 0x04 , 0x02},
	/* Index22  -6.6dB */    {0x19, 0x18 , 0x15 , 0x12 , 0x0D , 0x08 , 0x04 , 0x02},
	/* Index23  -6.9dB */    {0x18, 0x17 , 0x15 , 0x11 , 0x0D , 0x08 , 0x04 , 0x02},
	/* Index24  -7.2dB */    {0x18, 0x17 , 0x14 , 0x11 , 0x0C , 0x08 , 0x03 , 0x02},
	/* Index25  -7.5dB */    {0x17, 0x16 , 0x13 , 0x10 , 0x0C , 0x08 , 0x03 , 0x02},
	/* Index26  -7.8dB */    {0x16, 0x15 , 0x13 , 0x0F , 0x0B , 0x07 , 0x03 , 0x02},
	/* Index27  -8.1dB */    {0x15, 0x14 , 0x12 , 0x0F , 0x0B , 0x07 , 0x03 , 0x02},
	/* Index28  -8.4dB */    {0x14, 0x14 , 0x11 , 0x0E , 0x0B , 0x07 , 0x03 , 0x02},
	/* Index29  -8.7dB */    {0x14, 0x13 , 0x11 , 0x0E , 0x0A , 0x07 , 0x03 , 0x01},
	/* Index30  -9.0dB */    {0x13, 0x12 , 0x10 , 0x0D , 0x0A , 0x06 , 0x03 , 0x01}, // 30 This is hp CCK base index
	/* Index31  -9.3dB */    {0x12, 0x12 , 0x0F , 0x0D , 0x0A , 0x06 , 0x03 , 0x01},
	/* Index32  -9.6dB */    {0x12, 0x11 , 0x0F , 0x0D , 0x09 , 0x06 , 0x03 , 0x01},
	/* Index33  -9.9dB */    {0x11, 0x11 , 0x0F , 0x0C , 0x09 , 0x06 , 0x03 , 0x01},
	/* Index34 -10.2dB */    {0x11, 0x11 , 0x0E , 0x0C , 0x09 , 0x06 , 0x02 , 0x01},
	/* Index35 -10.5dB */    {0x10, 0x0F , 0x0E , 0x0B , 0x08 , 0x05 , 0x02 , 0x01},
	/* Index36 -10.8dB */    {0x10, 0x0F , 0x0D , 0x0B , 0x08 , 0x05 , 0x02 , 0x01},
	/* Index37 -11.1dB */    {0x0F, 0x0E , 0x0D , 0x0A , 0x08 , 0x05 , 0x02 , 0x01},
	/* Index38 -11.4dB */    {0x0E, 0x0E , 0x0C , 0x0A , 0x07 , 0x05 , 0x02 , 0x01},
	/* Index39 -11.7dB */    {0x0E, 0x0D , 0x0C , 0x0A , 0x07 , 0x05 , 0x02 , 0x01},
	/* Index40 -12  dB */    {0x0E, 0x0D , 0x0C , 0x0A , 0x07 , 0x05 , 0x02 , 0x01},
	/* Index41 -12.3dB */    {0x0D, 0x0D , 0x0B , 0x09 , 0x07 , 0x04 , 0x02 , 0x01},
	/* Index42 -12.6dB */    {0x0D, 0x0C , 0x0B , 0x09 , 0x07 , 0x04 , 0x02 , 0x01},
	/* Index43 -12.9dB */    {0x0C, 0x0C , 0x0A , 0x09 , 0x06 , 0x04 , 0x02 , 0x01},
	/* Index44 -13.2dB */    {0x0C, 0x0B , 0x0A , 0x08 , 0x06 , 0x04 , 0x02 , 0x01},
	/* Index45 -13.5dB */    {0x0B, 0x0B , 0x0A , 0x08 , 0x06 , 0x04 , 0x02 , 0x01},
	/* Index46 -13.8dB */    {0x0B, 0x0B , 0x09 , 0x08 , 0x06 , 0x04 , 0x02 , 0x01},
	/* Index47 -14.1dB */    {0x0B, 0x0A , 0x09 , 0x07 , 0x06 , 0x04 , 0x02 , 0x01},
	/* Index48 -14.4dB */    {0x0A, 0x0A , 0x09 , 0x07 , 0x05 , 0x03 , 0x02 , 0x01},
	/* Index49 -14.7dB */    {0x0A, 0x0A , 0x08 , 0x07 , 0x05 , 0x03 , 0x01 , 0x01},
	/* Index50 -15  dB */    {0x0A, 0x09 , 0x08 , 0x07 , 0x05 , 0x03 , 0x01 , 0x01},
	/* Index51 -15.3dB */    {0x09, 0x09 , 0x08 , 0x06 , 0x05 , 0x03 , 0x01 , 0x01},
	/* Index52 -15.6dB */    {0x09, 0x09 , 0x08 , 0x06 , 0x05 , 0x03 , 0x01 , 0x01},
	/* Index53 -15.9dB */    {0x09, 0x08 , 0x07 , 0x06 , 0x04 , 0x03 , 0x01 , 0x01}
};
u1Byte CCKSwingTable_Ch14_92E[CCK_TABLE_SIZE_92E][8] = {
	/* Index0    0  dB */    {0x36, 0x34 , 0x2E , 0x26 , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index1   -0.3dB */    {0x34, 0x32 , 0x2C , 0x25 , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index2   -0.6dB */    {0x32, 0x30 , 0x2B , 0x23 , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index3   -0.9dB */    {0x31, 0x2F , 0x29 , 0x22 , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index4   -1.2dB */    {0x2F, 0x2D , 0x28 , 0x21 , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index5   -1.5dB */    {0x2D, 0x2C , 0x27 , 0x20 , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index6   -1.8dB */    {0x2C, 0x2A , 0x25 , 0x1F , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index7   -2.1dB */    {0x2A, 0x29 , 0x24 , 0x1E , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index8   -2.4dB */    {0x29, 0x27 , 0x23 , 0x1D , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index9   -2.7dB */    {0x27, 0x26 , 0x22 , 0x1C , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index10  -3  dB */    {0x26, 0x25 , 0x20 , 0x1B , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index11  -3.3dB */    {0x25, 0x23 , 0x1F , 0x1A , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index12  -3.6dB */    {0x24, 0x22 , 0x1E , 0x19 , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index13  -3.9dB */    {0x22, 0x21 , 0x1D , 0x18 , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index14  -4.2dB */    {0x21, 0x20 , 0x1C , 0x17 , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index15  -4.5dB */    {0x20, 0x1F , 0x1B , 0x17 , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index16  -4.8dB */    {0x1F, 0x1E , 0x1A , 0x16 , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index17  -5.1dB */    {0x1E, 0x1D , 0x1A , 0x15 , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index18  -5.4dB */    {0x1D, 0x1C , 0x19 , 0x14 , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index19  -5.7dB */    {0x1C, 0x1B , 0x18 , 0x14 , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index20  -6  dB */     {0x1B, 0x1A , 0x17 , 0x13 , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index21  -6.3dB */    {0x1A, 0x19 , 0x16 , 0x12 , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index22  -6.6dB */    {0x19, 0x18 , 0x15 , 0x12 , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index23  -6.9dB */    {0x18, 0x17 , 0x15 , 0x11 , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index24  -7.2dB */    {0x18, 0x17 , 0x14 , 0x11 , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index25  -7.5dB */    {0x17, 0x16 , 0x13 , 0x10 , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index26  -7.8dB */    {0x16, 0x15 , 0x13 , 0x0F , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index27  -8.1dB */    {0x15, 0x14 , 0x12 , 0x0F , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index28  -8.4dB */    {0x14, 0x14 , 0x11 , 0x0E , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index29  -8.7dB */    {0x14, 0x13 , 0x11 , 0x0E , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index30  -9  dB */    {0x13, 0x12 , 0x10 , 0x0D , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index31  -9.3dB */    {0x12, 0x12 , 0x0F , 0x0D , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index32  -9.6dB */    {0x12, 0x11 , 0x0F , 0x0D , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index33  -9.9dB */    {0x11, 0x11 , 0x0F , 0x0C , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index34 -10.2dB */    {0x11, 0x11 , 0x0E , 0x0C , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index35 -10.5dB */    {0x10, 0x0F , 0x0E , 0x0B , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index36 -10.8dB */    {0x10, 0x0F , 0x0D , 0x0B , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index37 -11.1dB */    {0x0F, 0x0E , 0x0D , 0x0A , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index38 -11.4dB */    {0x0E, 0x0E , 0x0C , 0x0A , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index39 -11.7dB */    {0x0E, 0x0D , 0x0C , 0x0A , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index40 -12  dB */    {0x0E, 0x0D , 0x0C , 0x0A , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index41 -12.3dB */    {0x0D, 0x0D , 0x0B , 0x09 , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index42 -12.6dB */    {0x0D, 0x0C , 0x0B , 0x09 , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index43 -12.9dB */    {0x0C, 0x0C , 0x0A , 0x09 , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index44 -13.2dB */    {0x0C, 0x0B , 0x0A , 0x08 , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index45 -13.5dB */    {0x0B, 0x0B , 0x0A , 0x08 , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index46 -13.8dB */    {0x0B, 0x0B , 0x09 , 0x08 , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index47 -14.1dB */    {0x0B, 0x0A , 0x09 , 0x07 , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index48 -14.4dB */    {0x0A, 0x0A , 0x09 , 0x07 , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index49 -14.7dB */    {0x0A, 0x0A , 0x08 , 0x07 , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index50 -15  dB */    {0x0A, 0x09 , 0x08 , 0x07 , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index51 -15.3dB */    {0x09, 0x09 , 0x08 , 0x06 , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index52 -15.6dB */    {0x09, 0x09 , 0x08 , 0x06 , 0x00 , 0x00 , 0x00 , 0x00},
	/* Index53 -15.9dB */    {0x09, 0x08 , 0x07 , 0x06 , 0x00 , 0x00 , 0x00 , 0x00}
};
#endif

#ifdef AP_BUILD_WORKAROUND

unsigned int TxPwrTrk_OFDM_SwingTbl[TxPwrTrk_OFDM_SwingTbl_Len] = {
	/*  +6.0dB */ 0x7f8001fe,
	/*  +5.5dB */ 0x788001e2,
	/*  +5.0dB */ 0x71c001c7,
	/*  +4.5dB */ 0x6b8001ae,
	/*  +4.0dB */ 0x65400195,
	/*  +3.5dB */ 0x5fc0017f,
	/*  +3.0dB */ 0x5a400169,
	/*  +2.5dB */ 0x55400155,
	/*  +2.0dB */ 0x50800142,
	/*  +1.5dB */ 0x4c000130,
	/*  +1.0dB */ 0x47c0011f,
	/*  +0.5dB */ 0x43c0010f,
	/*   0.0dB */ 0x40000100,
	/*  -0.5dB */ 0x3c8000f2,
	/*  -1.0dB */ 0x390000e4,
	/*  -1.5dB */ 0x35c000d7,
	/*  -2.0dB */ 0x32c000cb,
	/*  -2.5dB */ 0x300000c0,
	/*  -3.0dB */ 0x2d4000b5,
	/*  -3.5dB */ 0x2ac000ab,
	/*  -4.0dB */ 0x288000a2,
	/*  -4.5dB */ 0x26000098,
	/*  -5.0dB */ 0x24000090,
	/*  -5.5dB */ 0x22000088,
	/*  -6.0dB */ 0x20000080,
	/*  -6.5dB */ 0x1a00006c,
	/*  -7.0dB */ 0x1c800072,
	/*  -7.5dB */ 0x18000060,
	/*  -8.0dB */ 0x19800066,
	/*  -8.5dB */ 0x15800056,
	/*  -9.0dB */ 0x26c0005b,
	/*  -9.5dB */ 0x14400051,
	/* -10.0dB */ 0x24400051,
	/* -10.5dB */ 0x1300004c,
	/* -11.0dB */ 0x12000048,
	/* -11.5dB */ 0x11000044,
	/* -12.0dB */ 0x10000040
};
#endif

#endif




#if(RTL8814A_SUPPORT == 1)
u4Byte TxScalingTable_Jaguar[TXSCALE_TABLE_SIZE] =
{
	0x081, // 0,  -12.0dB
	0x088, // 1,  -11.5dB
	0x090, // 2,  -11.0dB
	0x099, // 3,  -10.5dB
	0x0A2, // 4,  -10.0dB
	0x0AC, // 5,  -9.5dB
	0x0B6, // 6,  -9.0dB
	0x0C0, // 7,  -8.5dB
	0x0CC, // 8,  -8.0dB
	0x0D8, // 9,  -7.5dB
	0x0E5, // 10, -7.0dB
	0x0F2, // 11, -6.5dB
	0x101, // 12, -6.0dB
	0x110, // 13, -5.5dB
	0x120, // 14, -5.0dB
	0x131, // 15, -4.5dB
	0x143, // 16, -4.0dB
	0x156, // 17, -3.5dB
	0x16A, // 18, -3.0dB
	0x180, // 19, -2.5dB
	0x197, // 20, -2.0dB
	0x1AF, // 21, -1.5dB
	0x1C8, // 22, -1.0dB
	0x1E3, // 23, -0.5dB
	0x200, // 24, +0  dB
	0x21E, // 25, +0.5dB
	0x23E, // 26, +1.0dB
	0x261, // 27, +1.5dB
	0x285, // 28, +2.0dB
	0x2AB, // 29, +2.5dB
	0x2D3, // 30, +3.0dB
	0x2FE, // 31, +3.5dB
	0x32B, // 32, +4.0dB
	0x35C, // 33, +4.5dB
	0x38E, // 34, +5.0dB
	0x3C4, // 35, +5.5dB
	0x3FE  // 36, +6.0dB
};
#elif(ODM_IC_11AC_SERIES_SUPPORT)
u4Byte OFDMSwingTable_8812[OFDM_TABLE_SIZE_8812] = {
	0x3FE, // 0,  (6dB)
	0x3C4, // 1,  (5.5dB)
	0x38E, // 2,  (5dB)
	0x35C, // 3,  (4.5dB)
	0x32B, // 4,  (4dB)
	0x2FE, // 5,  (3.5dB)
	0x2D3, // 6,  (3dB)
	0x2AB, // 7,  (2.5dB)
	0x285, // 8,  (2dB)
	0x261, // 9,  (1.5dB
	0x23E, // 10, (1dB)
	0x21E, // 11, (0.5dB)
	0x200, // 12, (0dB)		8814 int PA 2G default
	0x1E3, // 13, (-0.5dB)
	0x1C8, // 14, (-1dB)
	0x1AF, // 15, (-1.5dB)
	0x197, // 16, (-2dB)
	0x180, // 17, (-2.5dB)
	0x16A, // 18, (-3dB)		8812 / 8814 int PA 5G / 8814 ext PA 2G5G default
	0x156, // 19, (-3.5dB)
	0x143, // 20, (-4dB)		8812 HP default
	0x131, // 21, (-4.5dB)
	0x120, // 22, (-5dB)
	0x110, // 23, (-5.5dB)
	0x101, // 24, (-6dB)
	0x0F2, // 25, (-6.5dB)
	0x0E5, // 26, (-7dB)
	0x0D8, // 27, (-7.5dB)
	0x0CC, // 28, (-8dB)
	0x0C0, // 29, (-8.5dB)
	0x0B6, // 30, (-9dB)
	0x0AC, // 31, (-9.5dB)
	0x0A2, // 32, (-10dB)
	0x099, // 33, (-10.5dB)
	0x090, // 34, (-11dB)
	0x088, // 35, (-11.5dB)
	0x081, // 36, (-12dB)
	0x079, // 37, (-12.5dB)
	0x072, // 38, (-13dB)
	0x06c, // 39, (-13.5dB)
	0x066, // 40, (-14dB)
	0x060, // 41, (-14.5dB)
	0x05B  // 42, (-15dB)
};
#endif

//#endif
//3============================================================
//3 Tx Power Tracking
//3============================================================

VOID
odm_TXPowerTrackingInit(
	IN	PVOID		pDM_VOID
	)
{
	PDM_ODM_T		pDM_Odm = (PDM_ODM_T)pDM_VOID;
#if (DM_ODM_SUPPORT_TYPE & (ODM_AP))
	if(!(pDM_Odm->SupportICType & (ODM_RTL8814A|ODM_IC_11N_SERIES)))
		return;
#endif

	odm_TXPowerTrackingThermalMeterInit(pDM_Odm);
}


VOID
odm_TXPowerTrackingThermalMeterInit(
	IN	PVOID		pDM_VOID
	)
{
	PDM_ODM_T		pDM_Odm = (PDM_ODM_T)pDM_VOID;
	PODM_RF_CAL_T	pRFCalibrateInfo = &(pDM_Odm->RFCalibrateInfo);
	u1Byte p;
#if (DM_ODM_SUPPORT_TYPE == ODM_WIN)
	PADAPTER		Adapter = pDM_Odm->Adapter;
	PMGNT_INFO      	pMgntInfo = &Adapter->MgntInfo;
	HAL_DATA_TYPE		*pHalData = GET_HAL_DATA(Adapter);

	pMgntInfo->bTXPowerTracking = TRUE;
	pHalData->TXPowercount       = 0;
	pHalData->bTXPowerTrackingInit = FALSE;

	if(1)
		pHalData->TxPowerTrackControl = TRUE;
	ODM_RT_TRACE(pDM_Odm,COMP_POWER_TRACKING, DBG_LOUD, ("pMgntInfo->bTXPowerTracking = %d\n", pMgntInfo->bTXPowerTracking));
#elif (DM_ODM_SUPPORT_TYPE == ODM_CE)
	{
		PADAPTER		Adapter = pDM_Odm->Adapter;
		HAL_DATA_TYPE	*pHalData = GET_HAL_DATA(Adapter);
		struct dm_priv	*pdmpriv = &pHalData->dmpriv;

		//if(IS_HARDWARE_TYPE_8192C(pHalData))
		{
			pdmpriv->bTXPowerTracking = _TRUE;
			pdmpriv->TXPowercount = 0;
			pdmpriv->bTXPowerTrackingInit = _FALSE;

			if(1)		//for mp driver, turn off txpwrtracking as default
				pdmpriv->TxPowerTrackControl = _TRUE;

		}
		MSG_8192C("pdmpriv->TxPowerTrackControl = %d\n", pdmpriv->TxPowerTrackControl);

	}
#elif (DM_ODM_SUPPORT_TYPE & (ODM_AP))

#endif

       pDM_Odm->RFCalibrateInfo.TxPowerTrackControl = TRUE;
	pDM_Odm->RFCalibrateInfo.DeltaPowerIndex = 0;
	pDM_Odm->RFCalibrateInfo.DeltaPowerIndexLast = 0;
	pDM_Odm->RFCalibrateInfo.PowerIndexOffset = 0;
	pDM_Odm->RFCalibrateInfo.ThermalValue = 0;
	pRFCalibrateInfo->DefaultOfdmIndex = 28;


#if RTL8192E_SUPPORT
	pRFCalibrateInfo->DefaultCckIndex = 8;	// -12 dB
#endif
	pRFCalibrateInfo->BbSwingIdxOfdmBase = pRFCalibrateInfo->DefaultOfdmIndex;
	pRFCalibrateInfo->BbSwingIdxCckBase = pRFCalibrateInfo->DefaultCckIndex;
	pDM_Odm->RFCalibrateInfo.CCK_index = pRFCalibrateInfo->DefaultCckIndex;
	for(p = 0; p < MAX_RF_PATH; p++)
	{
 	pDM_Odm->RFCalibrateInfo.OFDM_index[p] = pRFCalibrateInfo->DefaultOfdmIndex;
	pRFCalibrateInfo->BbSwingIdxOfdm[p] = pRFCalibrateInfo->DefaultOfdmIndex;
	pRFCalibrateInfo->KfreeOffset[p] = 0; // for 8814 kfree
	}
	pRFCalibrateInfo->BbSwingIdxCck = pRFCalibrateInfo->DefaultCckIndex;

}


VOID
ODM_TXPowerTrackingCheck(
	IN	PVOID		pDM_VOID
	)
{
	//
	// For AP/ADSL use prtl8192cd_priv
	// For CE/NIC use PADAPTER
	//
	PDM_ODM_T		pDM_Odm = (PDM_ODM_T)pDM_VOID;



	if (!(pDM_Odm->SupportAbility & ODM_RF_TX_PWR_TRACK))
		return;

	//
	// 2011/09/29 MH In HW integration first stage, we provide 4 different handle to operate
	// at the same time. In the stage2/3, we need to prive universal interface and merge all
	// HW dynamic mechanism.
	//
	switch	(pDM_Odm->SupportPlatform)
	{
		case	ODM_WIN:
			odm_TXPowerTrackingCheckMP(pDM_Odm);
			break;

		case	ODM_CE:
			odm_TXPowerTrackingCheckCE(pDM_Odm);
			break;

		case	ODM_AP:
			odm_TXPowerTrackingCheckAP(pDM_Odm);
			break;
		default:
			break;
	}

}

VOID
odm_TXPowerTrackingCheckCE(
	IN	PVOID		pDM_VOID
	)
{
#if (DM_ODM_SUPPORT_TYPE == ODM_CE)
	PDM_ODM_T		pDM_Odm = (PDM_ODM_T)pDM_VOID;
	PADAPTER	Adapter = pDM_Odm->Adapter;

#endif
}

VOID
odm_TXPowerTrackingCheckMP(
	IN	PVOID		pDM_VOID
	)
{
#if (DM_ODM_SUPPORT_TYPE == ODM_WIN)
	PDM_ODM_T		pDM_Odm = (PDM_ODM_T)pDM_VOID;
	PADAPTER	Adapter = pDM_Odm->Adapter;

	if (ODM_CheckPowerStatus(Adapter) == FALSE)
		return;

	if(!Adapter->bSlaveOfDMSP || Adapter->DualMacSmartConcurrent == FALSE)
		odm_TXPowerTrackingThermalMeterCheck(Adapter);
#endif

}


VOID
odm_TXPowerTrackingCheckAP(
	IN	PVOID		pDM_VOID
	)
{
	PDM_ODM_T		pDM_Odm = (PDM_ODM_T)pDM_VOID;
#if (DM_ODM_SUPPORT_TYPE == ODM_AP)
	prtl8192cd_priv	priv		= pDM_Odm->priv;

#if ((RTL8192E_SUPPORT == 1) || (RTL8812A_SUPPORT == 1) || (RTL8881A_SUPPORT == 1) || (RTL8814A_SUPPORT == 1))
	if (pDM_Odm->SupportICType & (ODM_RTL8188E|ODM_RTL8192E|ODM_RTL8812|ODM_RTL8881A|ODM_RTL8814A))
		ODM_TXPowerTrackingCallback_ThermalMeter(pDM_Odm);
	else
#endif
	{
	}
#endif

}

#if (DM_ODM_SUPPORT_TYPE == ODM_WIN)

VOID
odm_TXPowerTrackingThermalMeterCheck(
	IN	PADAPTER		Adapter
	)
{
#ifndef AP_BUILD_WORKAROUND
#if (HAL_CODE_BASE==RTL8192_C)
	PMGNT_INFO      		pMgntInfo = &Adapter->MgntInfo;
	//HAL_DATA_TYPE			*pHalData = GET_HAL_DATA(Adapter);
	static u1Byte			TM_Trigger = 0;
	//u1Byte					TxPowerCheckCnt = 5;	//10 sec

	if(!pMgntInfo->bTXPowerTracking /*|| (!pHalData->TxPowerTrackControl && pHalData->bAPKdone)*/)
	{
		return;
	}

	if(!TM_Trigger)		//at least delay 1 sec
	{
		if (IS_HARDWARE_TYPE_8188E(Adapter) || IS_HARDWARE_TYPE_8812(Adapter))
			PHY_SetRFReg(Adapter, RF_PATH_A, RF_T_METER_88E, BIT17 | BIT16, 0x03);
		else
			PHY_SetRFReg(Adapter, RF_PATH_A, RF_T_METER, bRFRegOffsetMask, 0x60);
		RT_TRACE(COMP_POWER_TRACKING, DBG_LOUD,("Trigger 92C Thermal Meter!!\n"));

		TM_Trigger = 1;
		return;
	}
	else
	{
		RT_TRACE(COMP_POWER_TRACKING, DBG_LOUD,("Schedule TxPowerTracking direct call!!\n"));
		odm_TXPowerTrackingDirectCall(Adapter); //Using direct call is instead, added by Roger, 2009.06.18.
		TM_Trigger = 0;
	}
#endif
#endif
}

#endif

