// ADDR: 0x66c94
// SYMBOL: sub_66C94
_BYTE *__fastcall sub_66C94(_BYTE *result, _BYTE *a2)
{
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  result[3] = a2[3];
  result[4] = a2[4];
  result[5] = a2[5];
  result[6] = a2[6];
  result[7] = a2[7];
  result[8] = a2[8];
  result[9] = a2[9];
  result[10] = a2[10];
  result[11] = a2[11];
  result[12] = a2[12];
  result[13] = a2[13];
  result[14] = a2[14];
  result[15] = a2[15];
  result[16] = a2[16];
  result[17] = a2[17];
  result[18] = a2[18];
  result[19] = a2[19];
  result[20] = a2[20];
  result[21] = a2[21];
  result[22] = a2[22];
  result[23] = a2[23];
  result[24] = a2[24];
  result[25] = a2[25];
  result[26] = a2[26];
  result[27] = a2[27];
  result[28] = a2[28];
  result[29] = a2[29];
  result[30] = a2[30];
  result[31] = a2[31];
  result[32] = a2[32];
  result[33] = a2[33];
  result[34] = a2[34];
  result[35] = a2[35];
  result[36] = a2[36];
  result[37] = a2[37];
  result[38] = a2[38];
  result[39] = a2[39];
  result[40] = a2[40];
  result[41] = a2[41];
  result[42] = a2[42];
  return result;
}


// ======================================================================
// ADDR: 0x66d84
// SYMBOL: sub_66D84
_BYTE *__fastcall sub_66D84(_BYTE *result, _BYTE *a2)
{
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  result[3] = a2[3];
  result[4] = a2[4];
  result[5] = a2[5];
  result[6] = a2[6];
  result[7] = a2[7];
  result[8] = a2[8];
  result[9] = a2[9];
  result[10] = a2[10];
  result[11] = a2[11];
  result[12] = a2[12];
  result[13] = a2[13];
  result[14] = a2[14];
  result[15] = a2[15];
  result[16] = a2[16];
  result[17] = a2[17];
  result[18] = a2[18];
  result[19] = a2[19];
  result[20] = a2[20];
  result[21] = a2[21];
  result[22] = a2[22];
  result[23] = a2[23];
  result[24] = a2[24];
  result[25] = a2[25];
  result[26] = a2[26];
  result[27] = a2[27];
  result[28] = a2[28];
  result[29] = a2[29];
  result[30] = a2[30];
  result[31] = a2[31];
  result[32] = a2[32];
  result[33] = a2[33];
  result[34] = a2[34];
  result[35] = a2[35];
  result[36] = a2[36];
  result[37] = a2[37];
  result[38] = a2[38];
  result[39] = a2[39];
  result[40] = a2[40];
  result[41] = a2[41];
  result[42] = a2[42];
  result[43] = a2[43];
  return result;
}


// ======================================================================
// ADDR: 0x7efe8
// SYMBOL: sub_7EFE8
int __fastcall sub_7EFE8(int a1, int a2)
{
  int v4; // r4
  int v5; // r6
  int v6; // r0
  int v8; // [sp+4h] [bp-1Ch] BYREF
  __int16 v9; // [sp+8h] [bp-18h]

  if ( !byte_1A49B1 )
  {
    sub_80664("[sv:dbg:network:rpc] : rpc received.");
    byte_1A49B1 = 1;
  }
  if ( a1 == 25 && byte_1A45F3 )
  {
    v4 = dword_1A4990;
    v5 = dword_1A498C;
    if ( dword_1A498C == dword_1A4990 )
    {
      sub_80664("[sv:err:network:rpc] : no svConnectCallbacks.");
    }
    else
    {
      v9 = 0;
      v8 = 0;
      do
      {
        v6 = *(_DWORD *)(v5 + 16);
        if ( v6 )
          (*(void (__fastcall **)(int, int *))(*(_DWORD *)v6 + 24))(v6, &v8);
        v5 += 24;
      }
      while ( v5 != v4 );
      sub_86C1C(a2, &v8, 6);
      sub_80664(
        "[sv:dbg:network:connect] : raknet connecting... (version:%hhu;micro:%hhu)",
        (unsigned __int8)v9,
        HIBYTE(v9));
    }
  }
  else
  {
    sub_80664("[sv:err:network:rpc] : not initStatus || invalid rpc id (%i).", a1);
  }
  return 1;
}


// ======================================================================
// ADDR: 0x86b90
// SYMBOL: sub_86B90
int __fastcall sub_86B90(int result)
{
  *(_BYTE *)(result + 16) = 1;
  *(_QWORD *)result = 0x80000000000LL;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = result + 17;
  return result;
}


// ======================================================================
// ADDR: 0x86ba8
// SYMBOL: sub_86BA8
int __fastcall sub_86BA8(int a1, void *src, size_t size, int a4)
{
  void *v7; // r0

  *(_BYTE *)(a1 + 16) = a4;
  *(_DWORD *)a1 = 8 * size;
  *(_DWORD *)(a1 + 4) = 8 * size;
  *(_DWORD *)(a1 + 8) = 0;
  if ( a4 )
  {
    if ( size )
    {
      if ( size > 0xFF )
      {
        v7 = malloc(size);
      }
      else
      {
        *(_DWORD *)(a1 + 4) = 2048;
        v7 = (void *)(a1 + 17);
      }
      *(_DWORD *)(a1 + 12) = v7;
      j_memcpy(v7, src, size);
    }
    else
    {
      *(_DWORD *)(a1 + 12) = 0;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 12) = src;
  }
  return a1;
}


// ======================================================================
// ADDR: 0x86bf8
// SYMBOL: sub_86BF8
int __fastcall sub_86BF8(int a1)
{
  if ( *(_BYTE *)(a1 + 16) && *(int *)(a1 + 4) > 2048 )
    free(*(void **)(a1 + 12));
  return a1;
}


// ======================================================================
// ADDR: 0x86c1c
// SYMBOL: sub_86C1C
int __fastcall sub_86C1C(int result, unsigned __int8 *a2, signed int a3)
{
  int *v3; // r9
  int v6; // r6
  int v7; // r3
  int v8; // lr
  unsigned int v9; // r12
  bool v10; // cc
  int v11; // r2

  if ( a3 )
  {
    v3 = (int *)result;
    v6 = 8 * a3;
    result = *(unsigned __int8 *)result << 29;
    if ( result )
    {
      if ( a3 >= 1 )
      {
        sub_86CE4(v3, 8 * a3);
        v7 = *v3;
        result = 8 - v6;
        v8 = *v3 & 7;
        v9 = 8 - v8;
        do
        {
          v11 = *a2;
          if ( !v6 )
            v11 <<= result;
          if ( v8 )
          {
            *(_BYTE *)(v3[3] + (v7 >> 3)) |= (unsigned __int8)v11 >> v8;
            if ( v9 < v6 )
              *(_BYTE *)(v3[3] + (*v3 >> 3) + 1) = (unsigned __int8)v11 << v9;
          }
          else
          {
            *(_BYTE *)(v3[3] + (v7 >> 3)) = v11;
          }
          v7 = *v3;
          if ( v6 )
            v7 += 8;
          ++a2;
          result += 8;
          v10 = v6 <= 8;
          v6 -= 8;
          *v3 = v7;
        }
        while ( !v10 );
      }
    }
    else
    {
      sub_86CE4(v3, 8 * a3);
      j_memcpy((void *)(v3[3] + ((*v3 + 7) >> 3)), a2, a3);
      result = *v3 + v6;
      *v3 = result;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x86d52
// SYMBOL: sub_86D52
int __fastcall sub_86D52(int result, _BYTE *a2, int a3, int a4)
{
  unsigned int v6; // r5
  int *v7; // r9
  int v8; // r3
  int v9; // lr
  unsigned int v10; // r12
  int v11; // r1
  int v12; // r2
  bool v13; // cc
  int v14; // r2

  if ( a3 >= 1 )
  {
    v6 = a3;
    v7 = (int *)result;
    sub_86CE4(result, a3);
    v8 = *v7;
    result = 8 - v6;
    v9 = *v7 & 7;
    v10 = 8 - v9;
    do
    {
      v14 = (unsigned __int8)*a2;
      if ( a4 )
        v14 <<= result;
      if ( v6 >= 8 )
        LOBYTE(v14) = *a2;
      if ( v9 )
      {
        *(_BYTE *)(v7[3] + (v8 >> 3)) |= (unsigned __int8)v14 >> v9;
        if ( v10 < v6 )
          *(_BYTE *)(v7[3] + (*v7 >> 3) + 1) = (unsigned __int8)v14 << v10;
      }
      else
      {
        *(_BYTE *)(v7[3] + (v8 >> 3)) = v14;
      }
      v11 = *v7;
      v12 = v6;
      ++a2;
      if ( v6 >= 8 )
        v12 = 8;
      v8 = v11 + v12;
      result += 8;
      v13 = (int)v6 <= 8;
      v6 -= 8;
      *v7 = v11 + v12;
    }
    while ( !v13 );
  }
  return result;
}


// ======================================================================
// ADDR: 0x86e30
// SYMBOL: sub_86E30
int __fastcall sub_86E30(_DWORD *a1, _BYTE *a2, int a3, int a4)
{
  _BYTE *v5; // r6
  unsigned int v6; // r4
  int v9; // r2
  int v10; // r0
  unsigned int v11; // r12
  int v12; // r2
  bool v13; // cc

  if ( a3 < 1 )
    return 0;
  v5 = a2;
  v6 = a3;
  if ( a1[2] + a3 > *a1 )
    return 0;
  sub_10967C((int)a2, (unsigned int)(a3 + 7) >> 3);
  v9 = a1[2];
  v10 = v9 & 7;
  v11 = 8 - v10;
  while ( 1 )
  {
    v12 = (*(unsigned __int8 *)(a1[3] + (v9 >> 3)) << v10) | (unsigned __int8)*v5;
    *v5 = v12;
    if ( v10 && v6 > v11 )
    {
      LOBYTE(v12) = v12 | (*(unsigned __int8 *)(a1[3] + ((int)a1[2] >> 3) + 1) >> v11);
      *v5 = v12;
    }
    if ( v6 <= 7 )
      break;
    ++v5;
    v13 = (int)v6 <= 8;
    v6 -= 8;
    v9 = a1[2] + 8;
    a1[2] = v9;
    if ( v13 )
      return 1;
  }
  if ( a4 )
    *v5 = (unsigned __int8)v12 >> (8 - v6);
  a1[2] += v6;
  return 1;
}


// ======================================================================
// ADDR: 0x8713e
// SYMBOL: sub_8713E
int __fastcall sub_8713E(int result, int a2)
{
  *(_DWORD *)(result + 8) += a2;
  return result;
}


// ======================================================================
