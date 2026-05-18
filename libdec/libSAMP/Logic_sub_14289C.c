// ADDR: 0x143758
// SYMBOL: sub_143758
int __fastcall sub_143758(int *a1, float *a2, float *a3, float *a4, float *a5)
{
  int v5; // r9
  int v6; // r10
  int v7; // r11
  int v10; // r0
  int v12; // r2
  int v14; // r3
  int v15; // r1
  int v16; // r3
  int v17; // r2
  int v18; // r3
  int v19; // r1
  int v20; // r0
  int result; // r0
  float v22; // s0
  float v23; // s2
  float v24; // s4
  float v25; // s0
  float v26; // s2
  float v27; // s0
  int v28; // [sp+0h] [bp-28h]
  unsigned __int16 v29; // [sp+6h] [bp-22h] BYREF
  unsigned __int16 v30; // [sp+8h] [bp-20h] BYREF
  _WORD v31[15]; // [sp+Ah] [bp-1Eh] BYREF

  v10 = *a1;
  v12 = a1[2];
  if ( v12 >= v10 )
  {
    v15 = a1[2];
  }
  else
  {
    v14 = *(unsigned __int8 *)(a1[3] + (v12 >> 3));
    v15 = v12 + 1;
    a1[2] = v12 + 1;
    v28 = (unsigned __int8)(v14 << (v12 & 7)) >> 7;
  }
  if ( v15 >= v10 )
  {
    v17 = v15;
  }
  else
  {
    v16 = *(unsigned __int8 *)(a1[3] + (v15 >> 3));
    v17 = v15 + 1;
    a1[2] = v15 + 1;
    v6 = (unsigned __int8)(v16 << (v15 & 7)) >> 7;
  }
  if ( v17 >= v10 )
  {
    v19 = v17;
  }
  else
  {
    v18 = *(unsigned __int8 *)(a1[3] + (v17 >> 3));
    v19 = v17 + 1;
    a1[2] = v17 + 1;
    v7 = (unsigned __int8)(v18 << (v17 & 7)) >> 7;
  }
  if ( v19 < v10 )
  {
    v20 = *(unsigned __int8 *)(a1[3] + (v19 >> 3));
    a1[2] = v19 + 1;
    v5 = (unsigned __int8)(v20 << (v19 & 7)) >> 7;
  }
  sub_17D786((int)a1, (int)v31);
  sub_17D786((int)a1, (int)&v30);
  result = sub_17D786((int)a1, (int)&v29);
  if ( result )
  {
    v22 = (double)v31[0] / 65535.0;
    v23 = (double)v30 / 65535.0;
    v24 = (double)v29 / 65535.0;
    *a3 = v22;
    *a4 = v23;
    *a5 = v24;
    if ( v6 << 24 )
      *a3 = -*a3;
    if ( v7 << 24 )
      *a4 = -*a4;
    v25 = *a5;
    if ( v5 << 24 )
    {
      v25 = -v25;
      *a5 = v25;
    }
    v26 = (float)((float)(1.0 - (float)(*a3 * *a3)) - (float)(*a4 * *a4)) - (float)(v25 * v25);
    if ( v26 < 0.0 )
      v26 = 0.0;
    v27 = sqrtf(v26);
    *a2 = v27;
    if ( v28 << 24 )
      *a2 = -v27;
  }
  return result;
}


// ======================================================================
// ADDR: 0x1438f0
// SYMBOL: sub_1438F0
int __fastcall sub_1438F0(int a1, float *a2, float *a3, float *a4)
{
  float v4; // s16
  float v5; // s18
  unsigned int v10; // r0
  unsigned int v11; // s0
  int result; // r0
  float v13; // s2
  float v14; // [sp+4h] [bp-2Ch] BYREF
  unsigned __int16 v15; // [sp+Ah] [bp-26h] BYREF
  unsigned __int16 v16; // [sp+Ch] [bp-24h] BYREF
  _WORD v17[17]; // [sp+Eh] [bp-22h] BYREF

  if ( !sub_17D786(a1, (int)&v14) )
    return 0;
  if ( v14 > 0.0000099999997 )
  {
    if ( sub_17D786(a1, (int)&v15) )
      v4 = (float)((float)v15 / 32768.0) + -1.0;
    if ( sub_17D786(a1, (int)&v16) )
      v5 = (float)((float)v16 / 32768.0) + -1.0;
    if ( sub_17D786(a1, (int)v17) )
    {
      v10 = v17[0];
      *a2 = v4;
      v11 = v10;
      *a3 = v5;
      result = 1;
      v13 = v14;
      *a4 = (float)((float)v11 / 32768.0) + -1.0;
      *a2 = v13 * *a2;
      *a3 = v13 * *a3;
      *a4 = v13 * *a4;
      return result;
    }
    return 0;
  }
  *a2 = 0.0;
  *a3 = 0.0;
  *a4 = 0.0;
  return 1;
}


// ======================================================================
// ADDR: 0x14a8e8
// SYMBOL: sub_14A8E8
int __fastcall sub_14A8E8(int a1, char *src, int a3)
{
  int32x4_t v11; // t2
  unsigned int v12; // r6
  int v13; // r8
  int v14; // r0
  unsigned int v15; // r1
  unsigned int v16; // r2
  int v17; // r1
  int result; // r0

  _Q8 = *(_OWORD *)(src + 8);
  __asm { VCEQ.F32        Q8, Q8, #0.0 }
  v11.n128_u64[0] = ~(_QWORD)_Q8;
  v11.n128_u64[1] = ~*((_QWORD *)&_Q8 + 1);
  *(int16x4_t *)&_Q8 = vmovn_s32(v11);
  if ( !((_Q8 & 1 | (2 * (BYTE2(_Q8) & 1u)) | (4 * (BYTE4(_Q8) & 1u)) | (8 * (unsigned int)WORD3(_Q8))) << 28) )
    return _android_log_print(4, "AXL", "Bad CQuaternion: File: %s - Line: %i", "remoteplayer.cpp", 667);
  *(_DWORD *)(a1 + 292) = a3;
  j_memcpy((void *)(a1 + 184), src, 0x3Fu);
  v12 = *(unsigned __int16 *)src;
  *(_WORD *)(a1 + 22) = v12;
  v13 = *(_DWORD *)(*(_DWORD *)(dword_23DEF4 + 944) + 4);
  if ( v13 && v12 >> 4 <= 0x7C && sub_F2396(*(_DWORD *)(*(_DWORD *)(dword_23DEF4 + 944) + 4), v12) )
    v14 = *(_DWORD *)(v13 + 4 * v12);
  else
    v14 = 0;
  v15 = (unsigned __int8)src[52];
  v16 = (unsigned __int8)src[53];
  *(_DWORD *)(a1 + 4) = v14;
  *(_BYTE *)(a1 + 36) = 0;
  *(_BYTE *)(a1 + 26) = 17;
  *(float *)(a1 + 8) = (float)v15;
  *(float *)(a1 + 12) = (float)v16;
  v17 = sub_F0B30();
  result = *(_DWORD *)(a1 + 296);
  *(_DWORD *)(a1 + 288) = v17;
  *(_BYTE *)(a1 + 27) = 0;
  if ( result )
  {
    result = sub_104108(result);
    if ( !result )
      result = sub_14AA0C(a1);
  }
  if ( *(_BYTE *)(a1 + 25) != 19 )
  {
    result = sub_14B6A0(a1, 19);
    *(_BYTE *)(a1 + 25) = 19;
  }
  return result;
}


// ======================================================================
