/**********************************************************************
 * Copyright (c) 2014 Pieter Wuille                                   *
 * Distributed under the MIT software license, see the accompanying   *
 * file COPYING or http://www.opensource.org/licenses/mit-license.php.*
 **********************************************************************/

#ifndef _SECP256K1_SCALAR_REPR_
#define _SECP256K1_SCALAR_REPR_

#include <stdint.h>

/** A scalar modulo the group order of the secp256k1 curve. */
typedef struct {
    uint32_t d[8];
} secp256k1_scalar;

#define SECP256K1_SCALAR_CONST(d7, d6, d5, d4, d3, d2, d1, d0) {{(d0), (d1), (d2), (d3), (d4), (d5), (d6), (d7)}}
#define SECP256K1_SCALAR_ISEQUAL(x,y) ( ((x).d[0]==(y).d[0]) && ((x).d[1]==(y).d[1]) && ((x).d[2]==(y).d[2]) && ((x).d[3]==(y).d[3]) && ((x).d[4]==(y).d[4]) && ((x).d[5]==(y).d[5]) && ((x).d[6]==(y).d[6]) && ((x).d[7]==(y).d[7]) )

#endif
