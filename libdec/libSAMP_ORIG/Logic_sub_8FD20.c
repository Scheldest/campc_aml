// ADDR: 0x88c10
// SYMBOL: sub_88C10
int __fastcall sub_88C10(int a1, float a2)
{
  float *v2; // r0
  float v3; // s6
  float v4; // s4
  float v5; // s8
  float v6; // s12
  float v7; // s14
  float v8; // s0
  float v9; // s10
  float v10; // s1

  v2 = (float *)(dword_1ACF68 + 5400 + 16 * a1);
  v3 = v2[44];
  v4 = v2[43];
  v5 = v2[45];
  v6 = v4;
  v7 = v5;
  v8 = v2[46] * (float)(*(float *)(dword_1ACF68 + 5400) * a2);
  v9 = v3;
  if ( v3 > 1.0 )
    v9 = 1.0;
  if ( v4 > 1.0 )
    v6 = 1.0;
  if ( v5 > 1.0 )
    v7 = 1.0;
  v10 = v2[46] * (float)(*(float *)(dword_1ACF68 + 5400) * a2);
  if ( v8 > 1.0 )
    v10 = 1.0;
  if ( v3 < 0.0 )
    v9 = 0.0;
  if ( v4 < 0.0 )
    v6 = 0.0;
  if ( v5 < 0.0 )
    v7 = 0.0;
  if ( v8 < 0.0 )
    v10 = 0.0;
  return (int)(float)((float)(v6 * 255.0) + 0.5) | ((int)(float)((float)(v9 * 255.0) + 0.5) << 8) | ((int)(float)((float)(v7 * 255.0) + 0.5) << 16) | ((int)(float)((float)(v10 * 255.0) + 0.5) << 24);
}


// ======================================================================
// ADDR: 0x88e34
// SYMBOL: sub_88E34
int __fastcall sub_88E34(int *a1, int a2, _QWORD *a3)
{
  _QWORD *v5; // r6
  int v6; // r2
  int v7; // r5
  int v8; // r9
  int v9; // r0
  _QWORD *v10; // r0
  const void *v11; // r1
  int v12; // r1
  int v13; // r0
  bool v14; // zf
  int v15; // r1

  v5 = (_QWORD *)a1[2];
  v6 = *a1;
  v7 = (a2 - (int)v5) >> 3;
  if ( *a1 == a1[1] )
  {
    v8 = v6 + 1;
    if ( v6 )
      v9 = v6 + v6 / 2;
    else
      v9 = 8;
    if ( v9 > v8 )
      v8 = v9;
    if ( v6 < v8 )
    {
      if ( dword_1ACF68 )
        ++*(_DWORD *)(dword_1ACF68 + 880);
      v10 = (_QWORD *)off_117248(8 * v8, dword_1ACF70);
      v11 = (const void *)a1[2];
      v5 = v10;
      if ( v11 )
      {
        j_memcpy(v10, v11, 8 * *a1);
        v13 = a1[2];
        v14 = v13 == 0;
        if ( v13 )
        {
          v12 = dword_1ACF68;
          v14 = dword_1ACF68 == 0;
        }
        if ( !v14 )
          --*(_DWORD *)(v12 + 880);
        off_11724C(v13, dword_1ACF70);
      }
      v6 = *a1;
      a1[1] = v8;
      a1[2] = (int)v5;
    }
  }
  if ( v6 > v7 )
  {
    j_memmove(&v5[v7 + 1], &v5[v7], 8 * (v6 - v7));
    v5 = (_QWORD *)a1[2];
  }
  v5[v7] = *a3;
  v15 = a1[2];
  ++*a1;
  return v15 + 8 * v7;
}


// ======================================================================
// ADDR: 0x89b34
// SYMBOL: sub_89B34
int __fastcall sub_89B34(float a1, float a2, float a3, float a4, int a5, int a6, float a7)
{
  int v7; // r6
  int v8; // r4
  float v9; // s18
  int v10; // r0
  float v11; // s0
  float v12; // s4
  float v13; // s0
  float v14; // s2
  float v15; // s6
  float v16; // s8
  float v17; // s10
  float v18; // s12
  float v19; // s14
  float v20; // s4
  float v21; // s0
  float v22; // s2
  float v23; // s6
  float v24; // s8
  float v25; // s10
  float v26; // s12
  float v27; // s14
  float v29[2]; // [sp+Ch] [bp-64h] BYREF
  float v30[2]; // [sp+14h] [bp-5Ch] BYREF
  float v31; // [sp+1Ch] [bp-54h] BYREF
  float v32; // [sp+20h] [bp-50h]
  float v33; // [sp+24h] [bp-4Ch] BYREF
  float v34; // [sp+28h] [bp-48h]
  int v35; // [sp+2Ch] [bp-44h]

  v7 = dword_1ACF68;
  v33 = a1;
  v34 = a2;
  v31 = a3;
  v32 = a4;
  v8 = *(_DWORD *)(dword_1ACF68 + 6572);
  sub_9D624(*(_DWORD *)(v8 + 636), (int)&v33, (int)&v31, a5, a7, 15);
  if ( a6 )
  {
    v9 = *(float *)(v7 + 5468);
    if ( v9 > 0.0 )
    {
      v10 = *(_DWORD *)(v8 + 636);
      v30[1] = v34 + 1.0;
      v30[0] = v33 + 1.0;
      v11 = *(float *)(dword_1ACF68 + 5400);
      v29[1] = v32 + 1.0;
      v29[0] = v31 + 1.0;
      v12 = *(float *)(dword_1ACF68 + 5672);
      v13 = *(float *)(dword_1ACF68 + 5680) * v11;
      v14 = *(float *)(dword_1ACF68 + 5668);
      v15 = *(float *)(dword_1ACF68 + 5676);
      v16 = v12;
      if ( v12 > 1.0 )
        v16 = 1.0;
      v17 = *(float *)(dword_1ACF68 + 5668);
      if ( v14 > 1.0 )
        v17 = 1.0;
      v18 = *(float *)(dword_1ACF68 + 5676);
      if ( v15 > 1.0 )
        v18 = 1.0;
      v19 = v13;
      if ( v13 > 1.0 )
        v19 = 1.0;
      if ( v12 < 0.0 )
        v16 = 0.0;
      if ( v14 < 0.0 )
        v17 = 0.0;
      if ( v15 < 0.0 )
        v18 = 0.0;
      if ( v13 < 0.0 )
        v19 = 0.0;
      sub_9D568(
        v10,
        (int)v30,
        (int)v29,
        (int)(float)((float)(v17 * 255.0) + 0.5) | ((int)(float)((float)(v16 * 255.0) + 0.5) << 8) | ((int)(float)((float)(v18 * 255.0) + 0.5) << 16) | ((int)(float)((float)(v19 * 255.0) + 0.5) << 24),
        a7,
        15,
        v9);
      v20 = *(float *)(dword_1ACF68 + 5656);
      v21 = *(float *)(dword_1ACF68 + 5664) * *(float *)(dword_1ACF68 + 5400);
      v22 = *(float *)(dword_1ACF68 + 5652);
      v23 = *(float *)(dword_1ACF68 + 5660);
      v24 = v20;
      if ( v20 > 1.0 )
        v24 = 1.0;
      v25 = *(float *)(dword_1ACF68 + 5652);
      if ( v22 > 1.0 )
        v25 = 1.0;
      v26 = *(float *)(dword_1ACF68 + 5660);
      if ( v23 > 1.0 )
        v26 = 1.0;
      v27 = *(float *)(dword_1ACF68 + 5664) * *(float *)(dword_1ACF68 + 5400);
      if ( v21 > 1.0 )
        v27 = 1.0;
      if ( v20 < 0.0 )
        v24 = 0.0;
      if ( v22 < 0.0 )
        v25 = 0.0;
      if ( v23 < 0.0 )
        v26 = 0.0;
      if ( v21 < 0.0 )
        v27 = 0.0;
      sub_9D568(
        *(_DWORD *)(v8 + 636),
        (int)&v33,
        (int)&v31,
        (int)(float)((float)(v25 * 255.0) + 0.5) | ((int)(float)((float)(v24 * 255.0) + 0.5) << 8) | ((int)(float)((float)(v26 * 255.0) + 0.5) << 16) | ((int)(float)((float)(v27 * 255.0) + 0.5) << 24),
        a7,
        15,
        v9);
    }
  }
  return v35;
}


// ======================================================================
// ADDR: 0x8a600
// SYMBOL: sub_8A600
int __fastcall sub_8A600(int a1, int a2, const char *a3)
{
  int v5; // r9
  int v6; // r0
  __int64 v7; // d20
  __int64 v8; // d21
  size_t v9; // r5
  void *v10; // r6
  __int64 v11; // r2
  unsigned __int8 *v12; // r1
  unsigned int v13; // r0
  int v14; // r1
  int v15; // r0
  int v16; // r2
  int v17; // r10
  int v18; // r1
  void *v19; // r0
  const void *v20; // r1
  void *v21; // r5
  int v22; // r1
  int v23; // r0
  bool v24; // zf
  size_t v25; // r0
  int v26; // r1
  int v27; // r2
  char *v28; // r0
  int v29; // r3
  int v30; // r1
  unsigned int v31; // r2
  int v32; // r5
  bool v33; // zf
  int v34; // r0
  int v35; // r1
  _QWORD *v36; // r9
  __int64 v37; // d16
  __int64 v38; // d17
  int result; // r0

  *(_QWORD *)(a1 + 12) = 0LL;
  *(_QWORD *)(a1 + 20) = 0LL;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_QWORD *)(a1 + 36) = 0LL;
  *(_QWORD *)(a1 + 44) = 0LL;
  *(_QWORD *)(a1 + 52) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  v5 = a1 + 96;
  v6 = a1 + 392;
  *(_QWORD *)(v5 + 192) = 0x7F7FFFFF7F7FFFFFLL;
  *(_QWORD *)(v5 + 200) = 0xFF7FFFFFFF7FFFFFLL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  v7 = *(_QWORD *)(a1 + 288);
  v8 = *(_QWORD *)(a1 + 296);
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_QWORD *)v5 = 0LL;
  *(_QWORD *)(v5 + 8) = 0LL;
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)v6 = 0LL;
  *(_QWORD *)(v6 + 8) = 0LL;
  v6 += 16;
  *(_QWORD *)v6 = 0LL;
  *(_QWORD *)(v6 + 8) = 0LL;
  *(_DWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 272) = v7;
  *(_QWORD *)(a1 + 280) = v8;
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(a1 + 436) = 0LL;
  *(_QWORD *)(a1 + 444) = 0LL;
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0x7F7FFFFF7F7FFFFFLL;
  *(_QWORD *)(a1 + 472) = 0xFF7FFFFFFF7FFFFFLL;
  *(_QWORD *)(a1 + 480) = 0x7F7FFFFF7F7FFFFFLL;
  *(_QWORD *)(a1 + 488) = 0xFF7FFFFFFF7FFFFFLL;
  *(_QWORD *)(a1 + 496) = 0x7F7FFFFF7F7FFFFFLL;
  *(_QWORD *)(a1 + 504) = 0xFF7FFFFFFF7FFFFFLL;
  *(_QWORD *)(a1 + 512) = 0x7F7FFFFF7F7FFFFFLL;
  *(_QWORD *)(a1 + 520) = 0xFF7FFFFFFF7FFFFFLL;
  *(_QWORD *)(a1 + 528) = 0x7F7FFFFF7F7FFFFFLL;
  *(_QWORD *)(a1 + 536) = 0xFF7FFFFFFF7FFFFFLL;
  *(_DWORD *)(a1 + 368) = 0;
  *(_DWORD *)(a1 + 372) = -1082130432;
  *(_DWORD *)(a1 + 324) = 0;
  *(_DWORD *)(a1 + 328) = 0;
  *(_DWORD *)(a1 + 332) = 0;
  *(_DWORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 304) = 0x100000000LL;
  *(_QWORD *)(a1 + 312) = 0LL;
  *(_QWORD *)(a1 + 348) = 0x100000001LL;
  *(_QWORD *)(a1 + 356) = -1LL;
  *(_QWORD *)(a1 + 544) = 0x7F7FFFFF7F7FFFFFLL;
  *(_QWORD *)(a1 + 552) = 0xFF7FFFFFFF7FFFFFLL;
  *(_DWORD *)(a1 + 116) = 0;
  *(_DWORD *)(a1 + 268) = 0;
  *(_DWORD *)(a1 + 340) = 0;
  *(_BYTE *)(a1 + 322) = 0;
  *(_DWORD *)(a1 + 344) = 0;
  *(_DWORD *)(a1 + 428) = 0;
  *(_DWORD *)(a1 + 432) = 0;
  *(_DWORD *)(a1 + 364) = 0;
  *(_WORD *)(a1 + 320) = 0;
  sub_AEA38();
  *(_QWORD *)(a1 + 604) = 0LL;
  *(_QWORD *)(a1 + 612) = 0LL;
  *(_DWORD *)(a1 + 620) = 0;
  *(_DWORD *)(a1 + 624) = 0;
  sub_8AA58(a1 + 640);
  *(_QWORD *)(a1 + 788) = 0x7F7FFFFF7F7FFFFFLL;
  *(_QWORD *)(a1 + 796) = 0xFF7FFFFFFF7FFFFFLL;
  *(_QWORD *)(a1 + 804) = 0x7F7FFFFF7F7FFFFFLL;
  *(_QWORD *)(a1 + 812) = 0xFF7FFFFFFF7FFFFFLL;
  v9 = _strlen_chk(a3, 0xFFFFFFFF) + 1;
  if ( dword_1ACF68 )
    ++*(_DWORD *)(dword_1ACF68 + 880);
  v10 = (void *)off_117248(v9, dword_1ACF70);
  j_memcpy(v10, a3, v9);
  *(_DWORD *)a1 = v10;
  LODWORD(v11) = *(unsigned __int8 *)a3;
  if ( *a3 )
  {
    v12 = (unsigned __int8 *)(a3 + 1);
    v13 = -1;
    do
    {
      HIDWORD(v11) = v11;
      LODWORD(v11) = *v12;
      if ( v11 == 0x2300000023LL )
      {
        LODWORD(v11) = 35;
        if ( v12[1] == 35 )
          v13 = -1;
      }
      ++v12;
      v13 = dword_52D88[HIDWORD(v11) ^ (unsigned __int8)v13] ^ (v13 >> 8);
    }
    while ( (_DWORD)v11 );
    v14 = ~v13;
  }
  else
  {
    v14 = 0;
  }
  v16 = *(_DWORD *)(a1 + 456);
  v15 = *(_DWORD *)(a1 + 452);
  *(_DWORD *)(a1 + 4) = v14;
  if ( v15 == v16 )
  {
    v17 = v15 + 1;
    if ( v15 )
      v18 = v15 + v15 / 2;
    else
      v18 = 8;
    if ( v18 > v17 )
      v17 = v18;
    if ( v15 < v17 )
    {
      if ( dword_1ACF68 )
        ++*(_DWORD *)(dword_1ACF68 + 880);
      v19 = (void *)off_117248(4 * v17, dword_1ACF70);
      v20 = *(const void **)(a1 + 460);
      v21 = v19;
      if ( v20 )
      {
        j_memcpy(v19, v20, 4 * *(_DWORD *)(a1 + 452));
        v23 = *(_DWORD *)(a1 + 460);
        v24 = v23 == 0;
        if ( v23 )
        {
          v22 = dword_1ACF68;
          v24 = dword_1ACF68 == 0;
        }
        if ( !v24 )
          --*(_DWORD *)(v22 + 880);
        off_11724C(v23, dword_1ACF70);
      }
      v15 = *(_DWORD *)(a1 + 452);
      *(_DWORD *)(a1 + 456) = v17;
      *(_DWORD *)(a1 + 460) = v21;
    }
  }
  *(_DWORD *)(*(_DWORD *)(a1 + 460) + 4 * v15) = *(_DWORD *)(a1 + 4);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 52) = 0LL;
  *(_QWORD *)(a1 + 60) = 0LL;
  ++*(_DWORD *)(a1 + 452);
  v25 = _strlen_chk(a3, 0xFFFFFFFF);
  v26 = *(_DWORD *)(a1 + 452);
  v27 = *(_DWORD *)(a1 + 460);
  *(_DWORD *)(a1 + 68) = v25 + 1;
  v28 = "MOVE";
  v29 = 35;
  v30 = ~*(_DWORD *)(v27 + 4 * v26 - 4);
  v31 = v30;
  do
  {
    v32 = v29;
    v29 = (unsigned __int8)*v28;
    v33 = v32 == 35;
    if ( v32 == 35 )
      v33 = v29 == 35;
    if ( v33 )
    {
      v29 = 35;
      if ( v28[1] == 35 )
        v31 = v30;
    }
    ++v28;
    v31 = dword_52D88[v32 ^ (unsigned __int8)v31] ^ (v31 >> 8);
  }
  while ( v29 );
  v34 = dword_1ACF68 + 6608;
  v35 = ~v31;
  if ( *(_DWORD *)(dword_1ACF68 + 6608) == ~v31 )
    *(_DWORD *)(dword_1ACF68 + 6612) = v35;
  if ( *(_DWORD *)(v34 + 44) == v35 )
    *(_BYTE *)(v34 + 48) = 1;
  *(_DWORD *)(a1 + 132) = -65536;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_BYTE *)(a1 + 131) = -1;
  *(_DWORD *)(a1 + 127) = 0;
  *(_DWORD *)(a1 + 72) = v35;
  *(_DWORD *)(a1 + 76) = 0;
  *(_QWORD *)v5 = 0x7F7FFFFF7F7FFFFFLL;
  *(_QWORD *)(v5 + 8) = 0x3F0000003F000000LL;
  v36 = (_QWORD *)(v5 + 60);
  *(_DWORD *)(a1 + 188) = 2139095039;
  *(_DWORD *)(a1 + 192) = 2139095039;
  *(_DWORD *)(a1 + 196) = 2139095039;
  *(_DWORD *)(a1 + 628) = 1065353216;
  *(_DWORD *)(a1 + 632) = -1;
  *(_DWORD *)(a1 + 636) = a1 + 640;
  *(_WORD *)(a1 + 136) = -1;
  *(_QWORD *)(a1 + 140) = 0xFFFFFFFF00000000LL;
  *(_DWORD *)(a1 + 148) = -1;
  *(_DWORD *)(a1 + 560) = -1;
  *(_DWORD *)(a1 + 564) = 0;
  *(_DWORD *)(a1 + 684) = *(_DWORD *)a1;
  *(_QWORD *)(a1 + 804) = 0x7F7FFFFF7F7FFFFFLL;
  *(_QWORD *)(a1 + 812) = 0xFF7FFFFFFF7FFFFFLL;
  *(_QWORD *)(a1 + 760) = 0LL;
  *(_QWORD *)(a1 + 768) = 0LL;
  *v36 = 0xFFFFFFFF00000000LL;
  v36[1] = 0LL;
  v36 += 2;
  v37 = *(_QWORD *)(a1 + 804);
  v38 = *(_QWORD *)(a1 + 812);
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 84) = 0;
  *(_BYTE *)(a1 + 152) = 0;
  *v36 = 0xF0000000FLL;
  v36[1] = 0x7F7FFFFF0000000FLL;
  *(_DWORD *)(a1 + 780) = 0;
  *(_DWORD *)(a1 + 784) = 0;
  *(_DWORD *)(a1 + 776) = 0;
  result = a1;
  *(_QWORD *)(a1 + 788) = v37;
  *(_QWORD *)(a1 + 796) = v38;
  return result;
}


// ======================================================================
// ADDR: 0x8b770
// SYMBOL: sub_8B770
bool __fastcall sub_8B770(float *a1, float *a2, int a3)
{
  float v3; // s12
  float v4; // s14
  float v5; // s8
  float v6; // s10
  float *v7; // r1
  float *v8; // r0
  float v9; // s4
  float v10; // s2
  float v11; // s0
  float v12; // s6
  _BOOL4 result; // r0
  float v14; // s10
  float v15; // s6

  v3 = *a2;
  v4 = a2[1];
  v5 = *a1;
  v6 = a1[1];
  v7 = (float *)(dword_1ACF68 + 5488);
  if ( a3 )
  {
    v8 = *(float **)(dword_1ACF68 + 6572);
    v9 = v8[135];
    v10 = v8[134];
    v11 = v8[133];
    v12 = v8[132];
    if ( v4 < v9 )
      v9 = v4;
    if ( v3 < v10 )
      v10 = v3;
    if ( v6 >= v11 )
      v11 = v6;
    if ( v5 >= v12 )
      v12 = v5;
  }
  else
  {
    v12 = *a1;
    v11 = a1[1];
    v10 = v3;
    v9 = v4;
  }
  result = 0;
  v14 = v12 - *v7;
  v15 = *(float *)(dword_1ACF68 + 224);
  if ( v15 >= v14 )
    return *(float *)(dword_1ACF68 + 228) < (float)(v9 + *(float *)(dword_1ACF68 + 5492))
        && v15 < (float)(v10 + *v7)
        && *(float *)(dword_1ACF68 + 228) >= (float)(v11 - *(float *)(dword_1ACF68 + 5492));
  return result;
}


// ======================================================================
// ADDR: 0x963fc
// SYMBOL: sub_963FC
int __fastcall sub_963FC(_QWORD *a1, int a2, __int64 a3)
{
  float *v5; // r9
  float v6; // s6
  float v7; // s2
  float v8; // s0
  float v9; // s6
  void (__fastcall *v10)(int *); // r1
  __int64 v11; // r2
  __int64 v12; // kr00_8
  int v13; // r1
  float v14; // s2
  float v15; // s0
  float v16; // s6
  float v17; // s8
  float v18; // s6
  float v19; // s2
  float v20; // s2
  int v22; // [sp+0h] [bp-38h] BYREF
  __int64 v23; // [sp+4h] [bp-34h]
  __int64 v24; // [sp+Ch] [bp-2Ch]
  float v25; // [sp+14h] [bp-24h]
  float v26; // [sp+18h] [bp-20h]
  int v27; // [sp+1Ch] [bp-1Ch]

  v5 = (float *)dword_1ACF68;
  if ( (*(_BYTE *)(dword_1ACF68 + 6672) & 0x10) != 0 )
  {
    v6 = *(float *)(dword_1ACF68 + 6724);
    v7 = *(float *)(dword_1ACF68 + 6728);
    if ( v6 >= 0.0 )
    {
      v8 = *(float *)&a3;
      if ( *(float *)(dword_1ACF68 + 6732) < *(float *)&a3 )
        v8 = *(float *)(dword_1ACF68 + 6732);
      if ( v6 > *(float *)&a3 )
        v8 = *(float *)(dword_1ACF68 + 6724);
    }
    else
    {
      v8 = *(float *)(a2 + 28);
    }
    if ( v7 >= 0.0 )
    {
      v9 = *((float *)&a3 + 1);
      if ( *(float *)(dword_1ACF68 + 6736) < *((float *)&a3 + 1) )
        v9 = *(float *)(dword_1ACF68 + 6736);
      if ( v7 > *((float *)&a3 + 1) )
        v9 = *(float *)(dword_1ACF68 + 6728);
    }
    else
    {
      v9 = *(float *)(a2 + 32);
    }
    v10 = *(void (__fastcall **)(int *))(dword_1ACF68 + 6740);
    if ( v10 )
    {
      v11 = *(_QWORD *)(a2 + 12);
      v12 = *(_QWORD *)(a2 + 28);
      v22 = *(_DWORD *)(dword_1ACF68 + 6744);
      v23 = v11;
      v24 = v12;
      v26 = v9;
      v25 = v8;
      v10(&v22);
      v8 = v25;
      v9 = v26;
    }
    *((float *)&a3 + 1) = (float)(int)v9;
    *(float *)&a3 = (float)(int)v8;
  }
  v13 = *(_DWORD *)(a2 + 8);
  if ( (v13 & 0x1000040) == 0 )
  {
    v14 = v5[1355];
    v15 = v5[1356];
    if ( v14 <= *(float *)&a3 )
      v14 = *(float *)&a3;
    if ( v15 <= *((float *)&a3 + 1) )
      v15 = *((float *)&a3 + 1);
    v16 = 0.0;
    if ( !(v13 << 31) )
      v16 = (float)(*(float *)(dword_1ACF68 + 5460) + *(float *)(dword_1ACF68 + 5460))
          + (float)(*(float *)(dword_1ACF68 + 6348) * *(float *)(a2 + 628));
    v17 = 0.0;
    if ( (v13 & 0x400) != 0 )
      v17 = (float)(*(float *)(dword_1ACF68 + 5460) + *(float *)(dword_1ACF68 + 5460))
          + (float)(*(float *)(a2 + 328) + (float)(*(float *)(dword_1ACF68 + 6348) * *(float *)(a2 + 628)));
    *(float *)&a3 = v14;
    v18 = v16 + v17;
    v19 = v5[1353] + -1.0;
    if ( v19 <= 0.0 )
      v19 = 0.0;
    v20 = v18 + v19;
    if ( v15 >= v20 )
      v20 = v15;
    *((float *)&a3 + 1) = v20;
  }
  *a1 = a3;
  return v27;
}


// ======================================================================
// ADDR: 0x965f4
// SYMBOL: sub_965F4
int __fastcall sub_965F4(float *a1, int a2, float *a3)
{
  float v6; // s0
  int v7; // r1
  int v8; // r4
  float v9; // s4
  float v10; // s18
  float v11; // s20
  float v12; // s16
  float v13; // s2
  float v14; // s0
  unsigned __int64 v15; // r2
  float v16; // s4
  float v17; // s10
  float v18; // s22
  float v19; // s24
  float v20; // s4
  float v21; // s6
  unsigned int v22; // r0
  int v23; // r1
  int v24; // r0
  __int64 v26; // [sp+4h] [bp-44h] BYREF
  int v27; // [sp+Ch] [bp-3Ch]

  v6 = 0.0;
  v7 = *(_DWORD *)(a2 + 8);
  v8 = dword_1ACF68 + 5420;
  if ( !(v7 << 31) )
    v6 = (float)(*(float *)(dword_1ACF68 + 5460) + *(float *)(dword_1ACF68 + 5460))
       + (float)(*(float *)(dword_1ACF68 + 6348) * *(float *)(a2 + 628));
  v9 = 0.0;
  if ( (v7 & 0x400) != 0 )
    v9 = (float)(*(float *)(dword_1ACF68 + 5460) + *(float *)(dword_1ACF68 + 5460))
       + (float)(*(float *)(a2 + 328) + (float)(*(float *)(dword_1ACF68 + 6348) * *(float *)(a2 + 628)));
  v10 = v6 + v9;
  v11 = *(float *)(a2 + 52) + *(float *)(a2 + 52);
  v12 = *(float *)(a2 + 56) + *(float *)(a2 + 56);
  v13 = (float)(v11 + *a3) + 0.0;
  v14 = (float)(v6 + v9) + (float)(v12 + a3[1]);
  if ( (v7 & 0x2000000) != 0 )
  {
    *a1 = v13;
    a1[1] = v14;
  }
  else
  {
    v15 = *(_QWORD *)v8;
    if ( (v7 & 0x14000000) != 0 )
    {
      v16 = 4.0;
      v17 = 4.0;
      if ( *((float *)&v15 + 1) < 4.0 )
        v17 = *(float *)(dword_1ACF68 + 5424);
      if ( *(float *)&v15 < 4.0 )
        v16 = *(float *)v8;
      v15 = __PAIR64__(LODWORD(v17), LODWORD(v16));
    }
    v18 = v13;
    v19 = v14;
    v20 = *(float *)(dword_1ACF68 + 16) - (float)(*(float *)(dword_1ACF68 + 5552) + *(float *)(dword_1ACF68 + 5552));
    v21 = *(float *)(dword_1ACF68 + 20) - (float)(*(float *)(dword_1ACF68 + 5556) + *(float *)(dword_1ACF68 + 5556));
    if ( v20 <= *(float *)&v15 )
      v20 = *(float *)&v15;
    if ( v21 <= *((float *)&v15 + 1) )
      v21 = *((float *)&v15 + 1);
    if ( v13 > v20 )
      v18 = v20;
    if ( v14 > v21 )
      v19 = v21;
    if ( v13 < *(float *)&v15 )
      LODWORD(v18) = v15;
    if ( v14 < *((float *)&v15 + 1) )
      v19 = *((float *)&v15 + 1);
    *a1 = v18;
    a1[1] = v19;
    sub_963FC(&v26, a2, __SPAIR64__(LODWORD(v19), LODWORD(v18)));
    v22 = *(_DWORD *)(a2 + 8);
    if ( (float)(*(float *)&v26 - v11) < *a3 && (*(_DWORD *)(a2 + 8) & 0x808) == 0x800 )
      v23 = 1;
    else
      v23 = (unsigned __int16)v22 >> 15;
    if ( (float)((float)(*((float *)&v26 + 1) - v12) - v10) >= a3[1] || (v22 & 8) != 0 )
      v24 = (v22 >> 14) & 1;
    else
      v24 = 1;
    if ( v23 )
      a1[1] = v19 + *(float *)(v8 + 84);
    if ( v24 )
      *a1 = v18 + *(float *)(v8 + 84);
  }
  return v27;
}


// ======================================================================
// ADDR: 0x9681c
// SYMBOL: sub_9681C
int __fastcall sub_9681C(float *a1, int a2)
{
  float v4; // s0
  int v5; // r6
  float v6; // s12
  float v7; // s10
  float v8; // s2
  int v9; // r4
  float v10; // s4
  float v11; // s6
  float v12; // s2
  float v13; // s8
  float v14; // s4
  bool v15; // fzf
  bool v16; // fnf
  float v17; // s6
  float v18; // s2
  int v19; // r0
  int v20; // r0
  float v21; // s4
  int v22; // r1
  float v23; // s2
  float v24; // s6
  float v25; // s4
  float v26; // s0
  float v27; // s6
  float v28; // s4
  float v29; // s2
  float v30; // s0
  float v31; // s4
  float v33; // s16
  float v34; // s18
  float v35; // s2
  float v36; // s16
  float v37; // s0
  float v38; // s2
  float v39; // [sp+Ch] [bp-4Ch] BYREF
  float v40; // [sp+10h] [bp-48h]
  float v41; // [sp+14h] [bp-44h] BYREF
  float v42; // [sp+18h] [bp-40h]
  float v43; // [sp+1Ch] [bp-3Ch]
  float v44; // [sp+20h] [bp-38h]
  float v45[13]; // [sp+24h] [bp-34h] BYREF

  v4 = 0.0;
  v5 = dword_1ACF68;
  v6 = *(float *)(dword_1ACF68 + 20);
  v7 = *(float *)(dword_1ACF68 + 16);
  v8 = *(float *)(dword_1ACF68 + 5556);
  v9 = dword_1ACF68 + 5460;
  v10 = *(float *)(dword_1ACF68 + 5552);
  v11 = v8 + v8;
  v12 = -v8;
  v13 = v10 + v10;
  v14 = -v10;
  v15 = v6 == v11;
  v16 = v6 < v11;
  v17 = 0.0;
  if ( !v16 && !v15 )
    v17 = v12;
  v18 = 0.0;
  if ( v7 > v13 )
    v18 = v14;
  v19 = *(_DWORD *)(a2 + 8);
  v45[3] = v6 + v17;
  v45[2] = v7 + v18;
  v45[1] = 0.0 - v17;
  v45[0] = 0.0 - v18;
  if ( (v19 & 0x10000000) != 0 )
  {
    v20 = *(_DWORD *)(*(_DWORD *)(dword_1ACF68 + 6552) + 4 * *(_DWORD *)(dword_1ACF68 + 6544) - 8);
    if ( *(_BYTE *)(v20 + 322) )
    {
      v21 = 0.0;
      v22 = *(_DWORD *)(v20 + 8);
      if ( !(v22 << 31) )
        v21 = (float)(*(float *)v9 + *(float *)v9) + (float)(*(float *)(dword_1ACF68 + 6348) * *(float *)(v20 + 628));
      v23 = *(float *)(v20 + 16) + v21;
      if ( (v22 & 0x400) != 0 )
        v4 = (float)(*(float *)v9 + *(float *)v9)
           + (float)(*(float *)(v20 + 328) + (float)(*(float *)(dword_1ACF68 + 6348) * *(float *)(v20 + 628)));
      v24 = v23 + v4;
      v25 = 3.4028e38;
      v26 = -3.4028e38;
    }
    else
    {
      v29 = *(float *)(v20 + 12);
      v30 = *(float *)(dword_1ACF68 + 5480);
      v31 = (float)(v29 + *(float *)(v20 + 20)) - v30;
      v26 = v30 + v29;
      v23 = -3.4028e38;
      v25 = v31 - *(float *)(v20 + 112);
      v24 = 3.4028e38;
    }
    v44 = v24;
    v43 = v25;
    v42 = v23;
    v41 = v26;
    goto LABEL_18;
  }
  if ( (v19 & 0x4000000) != 0 )
  {
    v27 = *(float *)(a2 + 16);
    v28 = *(float *)(a2 + 12);
    v44 = v27 + 1.0;
    v42 = v27 + -1.0;
    v43 = v28 + 1.0;
    v41 = v28 + -1.0;
LABEL_18:
    sub_98C8C(a1, a2 + 12, a2 + 20, a2 + 160, v45, &v41, 0);
    return LODWORD(v45[4]);
  }
  if ( (v19 & 0x2000000) != 0 )
  {
    v33 = *(float *)(dword_1ACF68 + 5560);
    sub_98718(&v39);
    if ( *(_BYTE *)(v9 + 1474) || !*(_BYTE *)(v9 + 1475) || (*(_BYTE *)(v5 + 8) & 4) != 0 )
    {
      v34 = v40;
      v35 = v33 * 24.0;
      v36 = v39;
      v37 = v35 + v40;
      v38 = v35 + v39;
    }
    else
    {
      v34 = v40;
      v36 = v39;
      v37 = v40 + 8.0;
      v38 = v39 + 16.0;
    }
    v44 = v37;
    v43 = v38;
    v42 = v34 + -8.0;
    v41 = v36 + -16.0;
    sub_98C8C(a1, &v39, a2 + 20, a2 + 160, v45, &v41, 0);
    if ( *(_DWORD *)(a2 + 160) == -1 )
    {
      a1[1] = v34 + 2.0;
      *a1 = v36 + 2.0;
    }
  }
  else
  {
    *(_QWORD *)a1 = *(_QWORD *)(a2 + 12);
  }
  return LODWORD(v45[4]);
}


// ======================================================================
// ADDR: 0x96aa8
// SYMBOL: sub_96AA8
int __fastcall sub_96AA8(int result, float *a2, float *a3)
{
  float v3; // s0
  float v4; // s3
  float v5; // s4
  float v6; // s14
  float v7; // s2
  float v8; // s6
  float v9; // s0
  float v10; // s2

  if ( !*(_BYTE *)(dword_1ACF68 + 176) || *(unsigned __int8 *)(result + 8) << 31 )
    v3 = *(float *)(result + 24);
  else
    v3 = (float)(*(float *)(dword_1ACF68 + 5460) + *(float *)(dword_1ACF68 + 5460))
       + (float)(*(float *)(dword_1ACF68 + 6348) * *(float *)(result + 628));
  v4 = a3[1];
  v5 = v4 + a2[1];
  v6 = *(float *)(result + 20);
  v7 = *a3 + *a2;
  if ( (float)(v3 + *(float *)(result + 16)) >= v5 )
    v5 = v3 + *(float *)(result + 16);
  v9 = v5 - v3;
  v8 = a2[2];
  if ( (float)(v6 + *(float *)(result + 12)) >= v7 )
    v7 = v6 + *(float *)(result + 12);
  v10 = v7 - v6;
  if ( (float)(a2[3] - v4) < v9 )
    v9 = a2[3] - v4;
  if ( (float)(v8 - *a3) < v10 )
    v10 = v8 - *a3;
  *(float *)(result + 12) = v10;
  *(float *)(result + 16) = v9;
  return result;
}


// ======================================================================
// ADDR: 0x97a54
// SYMBOL: sub_97A54
int __fastcall sub_97A54(_BYTE *a1)
{
  _DWORD *v1; // r9
  int v2; // lr
  _DWORD *v3; // r8
  int v4; // r3
  int v5; // r2
  int v6; // r6
  unsigned __int8 *v7; // r0
  unsigned int v8; // r3
  int v9; // r5
  bool v10; // zf
  int v11; // r6
  int v12; // r0
  _DWORD *v13; // r0
  const void *v14; // r1
  int v15; // r1
  int v16; // r0
  bool v17; // zf
  int result; // r0
  int v19; // [sp+4h] [bp-1Ch]

  v1 = *(_DWORD **)(dword_1ACF68 + 6572);
  v2 = v1[113];
  v3 = (_DWORD *)v1[115];
  v4 = v3[v2 - 1];
  v5 = (unsigned __int8)*a1;
  v6 = ~v4;
  if ( *a1 )
  {
    v7 = a1 + 1;
    v8 = ~v4;
    do
    {
      v9 = v5;
      v5 = *v7;
      v10 = v9 == 35;
      if ( v9 == 35 )
        v10 = v5 == 35;
      if ( v10 )
      {
        v5 = 35;
        if ( v7[1] == 35 )
          v8 = v6;
      }
      ++v7;
      v8 = dword_52D88[(unsigned __int8)v8 ^ v9] ^ (v8 >> 8);
    }
    while ( v5 );
  }
  else
  {
    v8 = ~v4;
  }
  v19 = ~v8;
  if ( v2 == v1[114] )
  {
    v11 = v2 + 1;
    if ( v2 )
      v12 = v2 + v2 / 2;
    else
      v12 = 8;
    if ( v12 > v11 )
      v11 = v12;
    if ( v2 < v11 )
    {
      if ( dword_1ACF68 )
        ++*(_DWORD *)(dword_1ACF68 + 880);
      v13 = (_DWORD *)off_117248(4 * v11, dword_1ACF70);
      v14 = (const void *)v1[115];
      v3 = v13;
      if ( v14 )
      {
        j_memcpy(v13, v14, 4 * v1[113]);
        v16 = v1[115];
        v17 = v16 == 0;
        if ( v16 )
        {
          v15 = dword_1ACF68;
          v17 = dword_1ACF68 == 0;
        }
        if ( !v17 )
          --*(_DWORD *)(v15 + 880);
        off_11724C(v16, dword_1ACF70);
      }
      v2 = v1[113];
      v1[114] = v11;
      v1[115] = v3;
    }
  }
  v3[v2] = v19;
  result = v1[113] + 1;
  v1[113] = result;
  return result;
}


// ======================================================================
// ADDR: 0x99284
// SYMBOL: sub_99284
int *__fastcall sub_99284(float *a1, int a2, int a3, float a4, float a5)
{
  char v8; // r6
  float v9; // s16
  float v10; // s18
  float v11; // s16
  float v12; // s18
  float v13; // s20
  float v14; // s20
  float v15; // s22
  float v16; // s24
  float v17; // s22
  float v18; // s24
  float v19; // s26
  int *result; // r0

  *a1 = 0.0;
  a1[1] = 0.0;
  v8 = a2;
  if ( a2 << 31 )
  {
    v11 = sub_99114(19, a3);
    v12 = sub_99114(18, a3);
    v13 = sub_99114(21, a3);
    v10 = (float)(v11 - v12) + 0.0;
    v9 = (float)(v13 - sub_99114(20, a3)) + 0.0;
    *a1 = v10;
    a1[1] = v9;
    if ( (v8 & 2) == 0 )
      goto LABEL_6;
    goto LABEL_5;
  }
  v9 = 0.0;
  v10 = 0.0;
  if ( (a2 & 2) != 0 )
  {
LABEL_5:
    v14 = sub_99114(5, a3);
    v15 = sub_99114(4, a3);
    v16 = sub_99114(7, a3);
    v10 = (float)(v14 - v15) + v10;
    v9 = (float)(v16 - sub_99114(6, a3)) + v9;
    *a1 = v10;
    a1[1] = v9;
  }
LABEL_6:
  if ( (v8 & 4) != 0 )
  {
    v17 = sub_99114(9, a3);
    v18 = sub_99114(8, a3);
    v19 = sub_99114(11, a3);
    v10 = (float)(v17 - v18) + v10;
    v9 = (float)(v19 - sub_99114(10, a3)) + v9;
    *a1 = v10;
    a1[1] = v9;
  }
  result = &dword_1ACF68;
  if ( a4 != 0.0 && *(float *)(dword_1ACF68 + 820) > 0.0 )
  {
    v9 = v9 * a4;
    v10 = v10 * a4;
    *a1 = v10;
    a1[1] = v9;
  }
  if ( a5 != 0.0 )
  {
    result = (int *)dword_1ACF68;
    if ( *(float *)(dword_1ACF68 + 824) > 0.0 )
    {
      *a1 = v10 * a5;
      a1[1] = v9 * a5;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x9adb0
// SYMBOL: sub_9ADB0
int __fastcall sub_9ADB0(int *a1, _DWORD *a2)
{
  int result; // r0
  _DWORD *v5; // r6
  int v6; // r0
  _DWORD *v7; // r0
  const void *v8; // r1
  int v9; // r1
  int v10; // r0
  bool v11; // zf

  if ( *a1 )
    return sub_9AE60(a1, a1[2], a2);
  if ( a1[1] )
  {
    v5 = (_DWORD *)a1[2];
    v6 = 0;
  }
  else
  {
    if ( dword_1ACF68 )
      ++*(_DWORD *)(dword_1ACF68 + 880);
    v7 = (_DWORD *)off_117248(32, dword_1ACF70);
    v8 = (const void *)a1[2];
    v5 = v7;
    if ( v8 )
    {
      j_memcpy(v7, v8, 4 * *a1);
      v10 = a1[2];
      v11 = v10 == 0;
      if ( v10 )
      {
        v9 = dword_1ACF68;
        v11 = dword_1ACF68 == 0;
      }
      if ( !v11 )
        --*(_DWORD *)(v9 + 880);
      off_11724C(v10, dword_1ACF70);
    }
    v6 = *a1;
    a1[1] = 8;
    a1[2] = (int)v5;
  }
  v5[v6] = *a2;
  result = *a1 + 1;
  *a1 = result;
  return result;
}


// ======================================================================
// ADDR: 0x9c2ac
// SYMBOL: sub_9C2AC
int __fastcall sub_9C2AC(int a1, int a2, int a3, int a4, int a5, float a6)
{
  int *v7; // r0
  float *v9; // r6
  int v10; // r11
  int v11; // r1
  int v12; // r9
  int v13; // r3
  int v14; // r1
  int v15; // r11
  float *v16; // r0
  int v17; // r2
  float v18; // s0
  float v19; // s10
  int v20; // r5
  float v21; // s8
  float v22; // s6
  int v23; // r5
  float v24; // s4
  float v25; // s6
  int v26; // r3
  float v27; // s4
  int v28; // r2
  float v29; // s6
  float v30; // s4
  int v31; // r3
  int v32; // r5
  _WORD *v33; // r6
  _WORD *v34; // lr
  int v35; // r1
  bool v36; // zf
  int v37; // r12
  int v38; // r2
  float v39; // s4
  float v40; // s6
  float *v41; // r2
  float v42; // s8
  float v43; // s10
  float v44; // s12
  float v45; // s12
  int v46; // r0
  int v47; // r2
  int v48; // r0
  int v49; // lr
  float *v50; // r5
  float *v51; // r12
  float *v52; // r4
  int v53; // r3
  float *v54; // r0
  float *v55; // r1
  int v56; // r2
  int v57; // r3
  float *v58; // r3
  float v59; // s0
  float v60; // s2
  float v61; // s4
  float v62; // s4
  float *v63; // r4
  float v64; // s0
  float v65; // s2
  float *v66; // r2
  __int64 v67; // r0
  float v68; // s4
  float *v69; // r0
  float v70; // s12
  float v71; // s8
  float v72; // s10
  float v73; // s6
  float v74; // s9
  float v75; // s5
  float v76; // s14
  float v77; // s7
  float v78; // s1
  float v79; // s5
  float *v80; // r0
  float v81; // s14
  float v82; // s9
  float v83; // s11
  float v84; // s1
  float v85; // s4
  float v86; // s5
  float *v87; // r0
  float v88; // s6
  float v89; // s3
  float v90; // s12
  int v91; // r2
  int v92; // r1
  int v93; // r0
  int v94; // lr
  int v95; // r6
  float *v96; // r3
  __int16 v97; // r5
  float v98; // s12
  float v99; // s10
  __int16 v100; // r3
  float v101; // s8
  float v102; // s6
  float v103; // s10
  float v104; // s10
  int v105; // r5
  float *v106; // r5
  float *v107; // r3
  float v108; // s8
  float v109; // s14
  float v110; // s6
  float v111; // s1
  float v112; // s12
  float v113; // s10
  float v114; // s6
  float v115; // s8
  int v116; // r4
  int v117; // r12
  _QWORD *v118; // r1
  _QWORD *v119; // r0
  int v120; // r5
  int v121; // r6
  int v122; // r1
  _DWORD *v123; // r1
  int v124; // r2
  int v125; // r1
  int v126; // r2
  int v127; // r1
  __int64 v128; // r2
  float *v129; // r1
  float v130; // s1
  float *v131; // r0
  float v132; // s2
  float v133; // s8
  float v134; // s10
  float v135; // s14
  float v136; // s2
  float v137; // s8
  float v138; // s0
  float v139; // s6
  float v140; // s14
  float v141; // s1
  float v142; // s4
  int v143; // r2
  int v144; // r1
  int v145; // r0
  int v146; // r6
  int v147; // r3
  float *v148; // r5
  float v149; // s4
  float v150; // s2
  float v151; // s6
  float v152; // s6
  float *v153; // r5
  float v154; // s2
  float v155; // s8
  float v156; // s4
  float v157; // s6
  float *v158; // r3
  int v159; // r6
  int v160; // r5
  _QWORD *v161; // r1
  __int64 *v162; // r0
  __int64 v163; // t1
  int v164; // r1
  __int64 v165; // r2
  int v166; // r1
  int v167; // r1
  __int64 v168; // t1
  int v170; // [sp+0h] [bp-58h] BYREF
  int v171; // [sp+4h] [bp-54h]
  int v172; // [sp+8h] [bp-50h]
  int v173; // [sp+Ch] [bp-4Ch]
  float *v174; // [sp+10h] [bp-48h]
  float *v175; // [sp+14h] [bp-44h]
  int v176; // [sp+18h] [bp-40h]
  int v177; // [sp+1Ch] [bp-3Ch]
  int v178; // [sp+20h] [bp-38h]

  if ( a3 < 2 )
    return v178;
  v7 = *(int **)(a1 + 40);
  v177 = a2;
  v9 = (float *)(a3 - 1);
  v10 = a3;
  v11 = *(unsigned __int8 *)(a1 + 36);
  v12 = v7[1];
  v13 = a3 - 1;
  v173 = *v7;
  if ( a5 )
    v13 = a3;
  v176 = v13;
  if ( v11 << 31 )
  {
    v46 = 12;
    v47 = 3 * a3;
    if ( a6 > 1.0 )
    {
      v46 = 18;
      v47 = 4 * v10;
    }
    v172 = v47;
    sub_9C1B4(a1, v46 * v13, v47);
    v48 = 3;
    v49 = v176;
    if ( a6 > 1.0 )
      v48 = 5;
    v50 = (float *)((char *)&v170 - 8 * v10 * v48);
    v51 = v50 + 1;
    v174 = &v50[2 * v10];
    v52 = (float *)v177;
    v171 = a4 & 0xFFFFFF;
    v53 = 0;
    v54 = (float *)(v177 + 4);
    v55 = v50 + 1;
    do
    {
      v56 = v53 + 1;
      v57 = (int)v9 - v53;
      if ( v57 )
        v57 = v56;
      v58 = &v52[2 * v57];
      v59 = v58[1] - *v54;
      v60 = *v58 - *(v54 - 1);
      v61 = (float)(v59 * v59) + (float)(v60 * v60);
      if ( v61 > 0.0 )
      {
        v62 = 1.0 / sqrtf(v61);
        v59 = v59 * v62;
        v60 = v60 * v62;
      }
      *(v55 - 1) = v59;
      v54 += 2;
      v53 = v56;
      *v55 = -v60;
      v55 += 2;
    }
    while ( v49 != v56 );
    v175 = v50;
    if ( a5 )
    {
      if ( a6 > 1.0 )
      {
        v63 = v174;
        v64 = (float)(a6 + -1.0) * 0.5;
        v65 = v64 + 1.0;
        goto LABEL_26;
      }
    }
    else
    {
      v66 = v174;
      v67 = *((_QWORD *)v174 - 2);
      LODWORD(v50[2 * (_DWORD)v9]) = v67;
      v68 = *(float *)&v67;
      v69 = &v50[2 * (_DWORD)v9];
      v69[1] = *((float *)&v67 + 1);
      if ( a6 > 1.0 )
      {
        v70 = v52[1];
        v71 = v50[1];
        v72 = *v52;
        v73 = *v50;
        v74 = *v52;
        v75 = *v52;
        v64 = (float)(a6 + -1.0) * 0.5;
        v76 = *v52 + (float)(v64 * *v50);
        v77 = v64 * v68;
        v66[3] = v70 + (float)(v64 * v71);
        v65 = v64 + 1.0;
        v66[2] = v76;
        v78 = v69[1];
        v79 = v75 - (float)(v64 * *v50);
        v80 = &v52[2 * (_DWORD)v9];
        v81 = v64 * v78;
        v63 = v66;
        v82 = v74 + (float)(v73 * (float)(v64 + 1.0));
        v83 = v80[1];
        v84 = (float)(v64 + 1.0) * v78;
        v85 = (float)(v64 + 1.0) * v68;
        v66[5] = v70 - (float)(v64 * v50[1]);
        v66[4] = v79;
        v86 = *v80;
        v87 = &v66[8 * (_DWORD)v9];
        v88 = v70 + (float)((float)(v64 + 1.0) * v71);
        v89 = *v50;
        v90 = v70 - (float)((float)(v64 + 1.0) * v50[1]);
        *v66 = v82;
        v66[1] = v88;
        v66[7] = v90;
        v66[6] = v72 - (float)((float)(v64 + 1.0) * v89);
        v87[5] = v83 - v81;
        v87[4] = v86 - v77;
        v87[2] = v77 + v86;
        v87[7] = v83 - v84;
        v87[6] = v86 - v85;
        v87[3] = v81 + v83;
        *v87 = v85 + v86;
        v87[1] = v84 + v83;
LABEL_26:
        v91 = *(_DWORD *)(a1 + 52);
        v92 = 1;
        v93 = *(_DWORD *)(a1 + 60) + 36;
        v94 = v91;
        while ( 1 )
        {
          v95 = v10 - v92;
          if ( v10 != v92 )
            v95 = v92;
          v96 = &v50[2 * v95];
          v97 = v94 + 1;
          v98 = v96[1];
          v99 = *v96;
          v100 = v94 + 3;
          v101 = (float)(*v51 + v98) * 0.5;
          v102 = (float)(*(v51 - 1) + v99) * 0.5;
          v103 = (float)(v101 * v101) + (float)(v102 * v102);
          if ( v103 < 0.5 )
            v103 = 0.5;
          v104 = 1.0 / v103;
          *(_WORD *)(v93 - 6) = v100;
          *(_WORD *)(v93 - 8) = v100;
          *(_WORD *)(v93 - 10) = v94 + 2;
          *(_WORD *)(v93 - 18) = v94;
          *(_WORD *)(v93 - 20) = v94;
          *(_WORD *)(v93 - 22) = v97;
          *(_WORD *)(v93 - 30) = v94 + 2;
          *(_WORD *)(v93 - 32) = v94 + 2;
          *(_WORD *)(v93 - 34) = v97;
          if ( v10 != v92 )
            v91 = v94 + 4;
          *(_WORD *)(v93 - 4) = v91 + 3;
          v105 = v177;
          *(_WORD *)(v93 - 2) = v91 + 2;
          v106 = (float *)(v105 + 8 * v95);
          *(_WORD *)(v93 - 12) = v91 + 2;
          *(_WORD *)(v93 - 28) = v91 + 2;
          v107 = &v63[8 * v95];
          *(_WORD *)(v93 - 16) = v91;
          v108 = v101 * v104;
          v109 = *v106;
          v110 = v102 * v104;
          v111 = v106[1];
          *(_WORD *)(v93 - 14) = v91 + 1;
          *(_WORD *)(v93 - 24) = v91 + 1;
          *(_WORD *)(v93 - 26) = v91 + 1;
          *(_WORD *)(v93 - 36) = v91 + 1;
          v112 = v65 * v108;
          v113 = v65 * v110;
          v114 = v64 * v110;
          v115 = v64 * v108;
          v107[7] = v111 - v112;
          *v107 = v109 + v113;
          v107[4] = v109 - v114;
          v107[5] = v111 - v115;
          v107[6] = v109 - v113;
          v107[3] = v111 + v115;
          v107[2] = v109 + v114;
          v107[1] = v111 + v112;
          if ( v176 == v92 )
            break;
          v94 = v91;
          v93 += 36;
          v51 += 2;
          v91 = *(_DWORD *)(a1 + 52);
          ++v92;
          v50 = v175;
        }
        v116 = v173;
        v117 = v171;
        *(_DWORD *)(a1 + 60) = v93;
        v118 = *(_QWORD **)(a1 + 56);
        v119 = v174 + 4;
        do
        {
          v120 = *((_DWORD *)v119 - 1);
          --v10;
          v121 = *((_DWORD *)v119 - 2);
          *v118 = *(v119 - 2);
          v122 = *(_DWORD *)(a1 + 56);
          *(_DWORD *)(v122 + 8) = v116;
          *(_DWORD *)(v122 + 12) = v12;
          v123 = *(_DWORD **)(a1 + 56);
          v123[5] = v121;
          v123[6] = v120;
          v124 = *(_DWORD *)(a1 + 56);
          v123[4] = v117;
          *(_DWORD *)(v124 + 28) = v116;
          *(_DWORD *)(v124 + 32) = v12;
          v125 = *(_DWORD *)(a1 + 56);
          *(_QWORD *)(v125 + 40) = *v119;
          v126 = *(_DWORD *)(a1 + 56);
          *(_DWORD *)(v125 + 36) = a4;
          *(_DWORD *)(v126 + 48) = v116;
          *(_DWORD *)(v126 + 52) = v12;
          v127 = *(_DWORD *)(a1 + 56);
          v128 = v119[1];
          v119 += 4;
          *(_QWORD *)(v127 + 60) = v128;
          LODWORD(v128) = *(_DWORD *)(a1 + 56);
          *(_DWORD *)(v127 + 56) = a4;
          *(_DWORD *)(v128 + 68) = v116;
          *(_DWORD *)(v128 + 72) = v12;
          LODWORD(v128) = *(_DWORD *)(a1 + 56);
          v118 = (_QWORD *)(v128 + 80);
          *(_DWORD *)(a1 + 56) = v128 + 80;
          *(_DWORD *)(v128 + 76) = v117;
        }
        while ( v10 );
LABEL_50:
        *(_DWORD *)(a1 + 52) += (unsigned __int16)v172;
        return v178;
      }
      v129 = &v52[2 * (_DWORD)v9];
      v130 = v69[1];
      v131 = &v66[4 * (_DWORD)v9];
      v132 = v52[1];
      v133 = v50[1];
      v134 = v133 + v132;
      v135 = v129[1];
      v136 = v132 - v133;
      v137 = *v52 - *v50;
      v138 = *v50 + *v52;
      v139 = v135 - v130;
      v140 = v130 + v135;
      v141 = *v129 + v68;
      v142 = *v129 - v68;
      v66[1] = v134;
      v66[3] = v136;
      v66[2] = v137;
      *v66 = v138;
      v131[3] = v139;
      v131[1] = v140;
      *v131 = v141;
      v131[2] = v142;
    }
    v143 = *(_DWORD *)(a1 + 52);
    v144 = 1;
    v145 = *(_DWORD *)(a1 + 60) + 24;
    v146 = v143;
    while ( 1 )
    {
      v147 = v10 - v144;
      if ( v10 != v144 )
        v147 = v144;
      v148 = &v50[2 * v147];
      v149 = (float)(*v51 + v148[1]) * 0.5;
      v150 = (float)(*(v51 - 1) + *v148) * 0.5;
      v151 = (float)(v149 * v149) + (float)(v150 * v150);
      if ( v151 < 0.5 )
        v151 = 0.5;
      v152 = 1.0 / v151;
      *(_WORD *)(v145 - 10) = v146 + 1;
      *(_WORD *)(v145 - 18) = v146 + 2;
      *(_WORD *)(v145 - 20) = v146 + 2;
      v153 = &v52[2 * v147];
      *(_WORD *)(v145 - 6) = v146;
      *(_WORD *)(v145 - 8) = v146;
      *(_WORD *)(v145 - 22) = v146;
      v154 = v150 * v152;
      v155 = v153[1];
      v156 = v149 * v152;
      v157 = *v153;
      if ( v10 != v144 )
        v143 = v146 + 3;
      v158 = &v174[4 * v147];
      *(_WORD *)(v145 - 4) = v143;
      *(_WORD *)(v145 - 14) = v143;
      *(_WORD *)(v145 - 24) = v143;
      *(_WORD *)(v145 - 2) = v143 + 1;
      *(_WORD *)(v145 - 12) = v143 + 1;
      *(_WORD *)(v145 - 16) = v143 + 2;
      *v158 = v157 + v154;
      v158[3] = v155 - v156;
      v158[2] = v157 - v154;
      v158[1] = v155 + v156;
      if ( v49 == v144 )
        break;
      v146 = v143;
      v145 += 24;
      v51 += 2;
      v143 = *(_DWORD *)(a1 + 52);
      ++v144;
      v50 = v175;
    }
    v159 = v173;
    v160 = v171;
    *(_DWORD *)(a1 + 60) = v145;
    v161 = *(_QWORD **)(a1 + 56);
    v162 = (__int64 *)(v174 + 2);
    do
    {
      v163 = *(_QWORD *)v52;
      v52 += 2;
      --v10;
      *v161 = v163;
      v164 = *(_DWORD *)(a1 + 56);
      v165 = *(v162 - 1);
      *(_DWORD *)(v164 + 8) = v159;
      *(_DWORD *)(v164 + 12) = v12;
      v166 = *(_DWORD *)(a1 + 56);
      *(_QWORD *)(v166 + 20) = v165;
      LODWORD(v165) = *(_DWORD *)(a1 + 56);
      *(_DWORD *)(v166 + 16) = a4;
      *(_DWORD *)(v165 + 28) = v159;
      *(_DWORD *)(v165 + 32) = v12;
      v167 = *(_DWORD *)(a1 + 56);
      v168 = *v162;
      v162 += 2;
      *(_QWORD *)(v167 + 40) = v168;
      LODWORD(v165) = *(_DWORD *)(a1 + 56);
      *(_DWORD *)(v167 + 36) = v160;
      *(_DWORD *)(v165 + 48) = v159;
      *(_DWORD *)(v165 + 52) = v12;
      LODWORD(v165) = *(_DWORD *)(a1 + 56);
      v161 = (_QWORD *)(v165 + 60);
      *(_DWORD *)(a1 + 56) = v165 + 60;
      *(_DWORD *)(v165 + 56) = v160;
    }
    while ( v10 );
    goto LABEL_50;
  }
  sub_9C1B4(a1, 6 * v13, 4 * v13);
  v14 = v177;
  v15 = v173;
  v16 = (float *)(v177 + 4);
  v17 = 0;
  v175 = v9;
  v18 = a6 * 0.5;
  do
  {
    v37 = v17 + 1;
    v38 = (int)v9 - v17;
    v39 = *(v16 - 1);
    v40 = *v16;
    if ( v38 )
      v38 = v37;
    v41 = (float *)(v14 + 8 * v38);
    v42 = v41[1] - v40;
    v43 = *v41 - v39;
    v44 = (float)(v42 * v42) + (float)(v43 * v43);
    if ( v44 > 0.0 )
    {
      v45 = 1.0 / sqrtf(v44);
      v42 = v42 * v45;
      v43 = v43 * v45;
    }
    v19 = v18 * v43;
    v20 = *(_DWORD *)(a1 + 56);
    v21 = v18 * v42;
    *(_DWORD *)(v20 + 8) = v15;
    *(_DWORD *)(v20 + 12) = v12;
    *(float *)(v20 + 4) = v40 - v19;
    *(float *)v20 = v39 + v21;
    v22 = v41[1] - v19;
    v23 = *(_DWORD *)(a1 + 56);
    v24 = v21 + *v41;
    *(_DWORD *)(v23 + 28) = v15;
    *(_DWORD *)(v23 + 32) = v12;
    *(_DWORD *)(v23 + 16) = a4;
    *(float *)(v23 + 24) = v22;
    *(float *)(v23 + 20) = v24;
    v25 = v19 + v41[1];
    v26 = *(_DWORD *)(a1 + 56);
    v27 = *v41 - v21;
    *(_DWORD *)(v26 + 48) = v15;
    *(_DWORD *)(v26 + 52) = v12;
    v28 = *(_DWORD *)(a1 + 56);
    *(_DWORD *)(v26 + 36) = a4;
    *(float *)(v26 + 44) = v25;
    *(float *)(v26 + 40) = v27;
    v29 = *v16;
    v30 = *(v16 - 1);
    v16 += 2;
    *(_DWORD *)(v28 + 68) = v15;
    *(_DWORD *)(v28 + 72) = v12;
    v31 = *(_DWORD *)(a1 + 52);
    v32 = *(_DWORD *)(a1 + 56);
    v33 = *(_WORD **)(a1 + 60);
    v34 = v33 + 6;
    *(_DWORD *)(a1 + 52) = v31 + 4;
    v33[1] = v31 + 1;
    v33[2] = v31 + 2;
    v33[4] = v31 + 2;
    v33[5] = v31 + 3;
    v35 = v176;
    *v33 = v31;
    v33[3] = v31;
    v36 = v35 == v37;
    v14 = v177;
    v9 = v175;
    *(_DWORD *)(v28 + 56) = a4;
    *(float *)(v28 + 60) = v30 - v21;
    *(float *)(v28 + 64) = v19 + v29;
    v17 = v37;
    *(_DWORD *)(a1 + 56) = v32 + 80;
    *(_DWORD *)(a1 + 60) = v34;
    *(_DWORD *)(v32 + 76) = a4;
  }
  while ( !v36 );
  return v178;
}


// ======================================================================
// ADDR: 0x9ca40
// SYMBOL: sub_9CA40
// local variable allocation has failed, the output may be wrong!
int __fastcall sub_9CA40(int a1, __int64 *a2, int a3, int a4)
{
  __int64 v7; // kr00_8
  _DWORD *v8; // r4
  _QWORD *v9; // r1
  int v10; // r0
  __int64 v11; // t1
  int v12; // r2
  unsigned int v13; // r0
  __int16 *v14; // r2
  int v15; // r6
  unsigned int v16; // r12
  __int16 *v17; // r1
  _DWORD *v18; // r4
  int v19; // r2
  unsigned int v20; // r6
  __int16 *v21; // r0
  unsigned int v22; // r12
  __int16 *v23; // r1
  int32x4_t v24; // q8
  int16x8_t v25; // q15
  int32x4_t v26; // q9
  int32x4_t v27; // q0
  unsigned int v28; // r3
  int32x4_t v29; // q10
  int16x8_t v30; // q11 OVERLAPPED
  int32x4_t v31; // q2
  int16x8_t v32; // q13
  int16x8_t v33; // q12
  __int16 *v34; // r0
  unsigned int v35; // r0
  unsigned int v36; // r2
  int *v37; // r12
  float *v38; // r11
  float *v39; // r2
  unsigned int v40; // lr
  int v41; // r6
  float v42; // s6
  float *v43; // r3
  float v44; // s8
  int v45; // r5
  int v46; // r2
  float *v47; // r2
  float v48; // s4
  float v49; // s2
  float v50; // s8
  float v51; // s6
  float v52; // s10
  float v53; // s10
  float *v54; // r3
  _DWORD *v55; // lr
  float *v56; // r5
  int v57; // r2
  int v58; // r6
  unsigned int v59; // r0
  float v60; // s8
  float v61; // s10
  int v62; // r3
  float v63; // s6
  __int16 v64; // r12
  float v65; // s4
  float v66; // s10
  float v67; // s8
  float v68; // s12
  float v69; // s12
  int v70; // r1
  float v71; // s8
  float v72; // s14
  float v73; // s10
  float v74; // s12
  int v75; // r3
  float v76; // s8
  float v77; // s10
  float v78; // s12
  float v79; // s14
  int v80; // r6
  _WORD *v81; // r8
  int32x4_t v82; // q8
  int16x8_t v83; // q15
  int32x4_t v84; // q9
  int32x4_t v85; // q0
  unsigned int v86; // r5
  int32x4_t v87; // q10
  int16x8_t v88; // q11 OVERLAPPED
  int32x4_t v89; // q2
  int16x8_t v90; // q13
  int16x8_t v91; // q12
  __int16 *v92; // r2
  unsigned int v93; // r2
  unsigned int v94; // r3
  int v95; // r0
  int v97; // [sp+0h] [bp-40h] BYREF
  unsigned int v98; // [sp+4h] [bp-3Ch]
  int v99; // [sp+8h] [bp-38h]
  int v100; // [sp+Ch] [bp-34h]
  unsigned int v101; // [sp+10h] [bp-30h]
  _DWORD *v102; // [sp+14h] [bp-2Ch]
  int v103; // [sp+18h] [bp-28h]
  int v104; // [sp+1Ch] [bp-24h]

  if ( a3 >= 3 )
  {
    v7 = *(_QWORD *)*(_DWORD *)(a1 + 40);
    if ( (*(_BYTE *)(a1 + 36) & 2) == 0 )
    {
      v8 = (_DWORD *)a1;
      sub_9C1B4(a1, 3 * a3 - 6, a3);
      v9 = (_QWORD *)v8[14];
      v10 = a3;
      do
      {
        v11 = *a2++;
        --v10;
        *v9 = v11;
        *(_QWORD *)(v8[14] + 8) = v7;
        v12 = v8[14];
        v9 = (_QWORD *)(v12 + 20);
        v8[14] = v12 + 20;
        *(_DWORD *)(v12 + 16) = a4;
      }
      while ( v10 );
      v13 = v8[13];
      v14 = (__int16 *)v8[15];
      v15 = a3 - 2;
      if ( (unsigned int)(a3 - 2) >= 8 )
      {
        v82.n128_u64[0] = 0x700000006LL;
        v82.n128_u64[1] = 0x900000008LL;
        v83.n128_u64[0] = -1LL;
        v83.n128_u64[1] = -1LL;
        v16 = (v15 & 0xFFFFFFF8) + 2;
        v84.n128_u64[0] = 0x300000002LL;
        v84.n128_u64[1] = 0x500000004LL;
        v85.n128_u64[0] = 0x800000008LL;
        v85.n128_u64[1] = 0x800000008LL;
        v86 = v15 & 0xFFFFFFF8;
        v87 = vdupq_n_s32(v13);
        v17 = &v14[3 * (v15 & 0xFFFFFFF8)];
        v88 = vdupq_n_s16(v13);
        do
        {
          v86 -= 8;
          v89 = vaddq_s32(v87, v82);
          v82 = vaddq_s32(v82, v85);
          v90.n128_u64[0] = vmovn_s32(vaddq_s32(v87, v84)).n64_u64[0];
          *(int16x4_t *)&v90.n128_i8[8] = vmovn_s32(v89);
          v91 = vaddq_s16(v90, v83);
          v84 = vaddq_s32(v84, v85);
          vst3_s16(v14, *(int16x4x3_t *)v88.n128_u64);
          v92 = v14 + 12;
          vst3_s16(v92, *(int16x4x3_t *)&v88.n128_i8[8]);
          v14 = v92 + 12;
        }
        while ( v86 );
        if ( v15 == (v15 & 0xFFFFFFF8) )
          goto LABEL_28;
      }
      else
      {
        v16 = 2;
        v17 = (__int16 *)v8[15];
      }
      v93 = v16 + v13;
      v94 = a3 - v16;
      do
      {
        v17[2] = v93;
        v17[1] = v93++ - 1;
        *v17 = v13;
        v17 += 3;
        --v94;
      }
      while ( v94 );
LABEL_28:
      v8[15] = v17;
      v95 = v13 + (unsigned __int16)a3;
LABEL_29:
      v8[13] = v95;
      return v104;
    }
    v100 = *(_DWORD *)(*(_DWORD *)(a1 + 40) + 4);
    v97 = 2 * a3;
    v102 = (_DWORD *)a1;
    sub_9C1B4(a1, 9 * a3 - 6, 2 * a3);
    v18 = v102;
    v19 = a3 - 2;
    v20 = v102[13];
    v21 = (__int16 *)v102[15];
    if ( (unsigned int)(a3 - 2) >= 8 )
    {
      v24.n128_u64[0] = 0x700000006LL;
      v24.n128_u64[1] = 0x900000008LL;
      v25.n128_u64[0] = 0xFFFEFFFEFFFEFFFELL;
      v25.n128_u64[1] = 0xFFFEFFFEFFFEFFFELL;
      v22 = (v19 & 0xFFFFFFF8) + 2;
      v26.n128_u64[0] = 0x300000002LL;
      v26.n128_u64[1] = 0x500000004LL;
      v27.n128_u64[0] = 0x800000008LL;
      v27.n128_u64[1] = 0x800000008LL;
      v28 = v19 & 0xFFFFFFF8;
      v29 = vdupq_n_s32(v20);
      v23 = &v21[3 * (v19 & 0xFFFFFFF8)];
      v30 = vdupq_n_s16(v20);
      do
      {
        v28 -= 8;
        v31 = vaddq_s32(vshlq_n_s32(v24, 1u), v29);
        v24 = vaddq_s32(v24, v27);
        v32.n128_u64[0] = vmovn_s32(vaddq_s32(vshlq_n_s32(v26, 1u), v29)).n64_u64[0];
        *(int16x4_t *)&v32.n128_i8[8] = vmovn_s32(v31);
        v33 = vaddq_s16(v32, v25);
        v26 = vaddq_s32(v26, v27);
        vst3_s16(v21, *(int16x4x3_t *)v30.n128_u64);
        v34 = v21 + 12;
        vst3_s16(v34, *(int16x4x3_t *)&v30.n128_i8[8]);
        v21 = v34 + 12;
      }
      while ( v28 );
      if ( v19 == (v19 & 0xFFFFFFF8) )
      {
LABEL_14:
        v37 = &v97 - 2 * a3;
        v18[15] = v23;
        v38 = (float *)a2 + 1;
        v39 = (float *)&a2[a3 - 1];
        v40 = v20 + 1;
        v101 = v20;
        v41 = 0;
        v42 = *v39;
        v43 = (float *)a2 + 1;
        v44 = v39[1];
        v45 = a3;
        v46 = a3 - 1;
        do
        {
          v48 = *v43;
          v49 = *(v43 - 1);
          v50 = *v43 - v44;
          v51 = v49 - v42;
          v52 = (float)(v50 * v50) + (float)(v51 * v51);
          if ( v52 > 0.0 )
          {
            v53 = 1.0 / sqrtf(v52);
            v50 = v50 * v53;
            v51 = v51 * v53;
          }
          v47 = (float *)&v37[2 * v46];
          v43 += 2;
          *v47 = v50;
          v44 = v48;
          --v45;
          v47[1] = -v51;
          v42 = v49;
          v46 = v41++;
        }
        while ( v45 );
        v54 = (float *)&v37[2 * a3 - 2];
        v98 = v40;
        v99 = a3;
        v55 = v102;
        v56 = (float *)(v37 + 1);
        v57 = v102[14];
        LOWORD(v58) = a3 - 1;
        v59 = v101;
        v60 = *v54;
        v61 = v54[1];
        v62 = 0;
        do
        {
          v63 = *v56;
          v64 = v58;
          v65 = *(v56 - 1);
          v56 += 2;
          v103 = v62;
          v66 = (float)(v61 + v63) * 0.5;
          v67 = (float)(v60 + v65) * 0.5;
          v68 = (float)(v66 * v66) + (float)(v67 * v67);
          if ( v68 < 0.5 )
            v68 = 0.5;
          v69 = 1.0 / v68;
          v70 = v100;
          v71 = v67 * v69;
          v72 = *v38;
          v73 = v66 * v69;
          v74 = *(v38 - 1);
          *(_DWORD *)(v57 + 8) = v7;
          *(_DWORD *)(v57 + 12) = v70;
          v75 = v55[14];
          v76 = v71 * 0.5;
          *(_DWORD *)(v75 + 16) = a4;
          v77 = v73 * 0.5;
          *(float *)v57 = v74 - v76;
          *(float *)(v57 + 4) = v72 - v77;
          v78 = *(v38 - 1);
          v79 = *v38;
          v38 += 2;
          *(_DWORD *)(v75 + 28) = v7;
          *(_DWORD *)(v75 + 32) = v70;
          v81 = (_WORD *)v55[15];
          v80 = v55[14];
          v57 = v80 + 40;
          *(_DWORD *)(v80 + 36) = a4 & 0xFFFFFF;
          v55[14] = v80 + 40;
          v55[15] = v81 + 6;
          LOWORD(v70) = v98;
          *(float *)(v75 + 20) = v78 + v76;
          v60 = v65;
          *(float *)(v75 + 24) = v77 + v79;
          v61 = v63;
          LOWORD(v80) = v70 + 2 * v64;
          LOWORD(v70) = v101;
          v81[2] = v80;
          v81[3] = v80;
          v81[4] = v59 + 1;
          v58 = v103;
          *v81 = v59;
          v81[5] = v59;
          v59 += 2;
          v81[1] = v70 + 2 * v64;
          v62 = v58 + 1;
        }
        while ( v99 != v58 + 1 );
        v8 = v102;
        v95 = (v97 & 0xFFFE) + v102[13];
        goto LABEL_29;
      }
    }
    else
    {
      v22 = 2;
      v23 = (__int16 *)v102[15];
    }
    v35 = v20 + 2 * v22;
    v36 = a3 - v22;
    do
    {
      v23[2] = v35;
      v23[1] = v35 - 2;
      v35 += 2;
      *v23 = v20;
      v23 += 3;
      --v36;
    }
    while ( v36 );
    goto LABEL_14;
  }
  return v104;
}


// ======================================================================
// ADDR: 0x9ce08
// SYMBOL: sub_9CE08
int __fastcall sub_9CE08(_DWORD *a1, int a2, float a3, int a4, int a5)
{
  int v7; // r1
  int v9; // r6
  int v10; // r0
  int v11; // r5
  void *v12; // r0
  const void *v13; // r1
  void *v14; // r10
  int v15; // r1
  int v16; // r2
  int v17; // r5
  int v18; // r1
  void *v19; // r0
  const void *v20; // r1
  void *v21; // r11
  int v22; // r0
  int result; // r0
  int v24; // r6
  int v25; // r0
  void *v26; // r0
  const void *v27; // r1
  void *v28; // r5
  float v29; // [sp+0h] [bp-30h]
  float v30; // [sp+4h] [bp-2Ch]

  v7 = a1[22];
  if ( a3 == 0.0 || (v9 = a4, a5 < a4) )
  {
    if ( v7 == a1[23] )
    {
      v24 = v7 + 1;
      if ( v7 )
        v25 = v7 + v7 / 2;
      else
        v25 = 8;
      if ( v25 > v24 )
        v24 = v25;
      if ( v7 < v24 )
      {
        v26 = (void *)sub_885E4(8 * v24);
        v27 = (const void *)a1[24];
        v28 = v26;
        if ( v27 )
        {
          j_memcpy(v26, v27, 8 * a1[22]);
          sub_88614(a1[24]);
        }
        v7 = a1[22];
        a1[23] = v24;
        a1[24] = v28;
      }
    }
    *(_QWORD *)(a1[24] + 8 * v7) = *(_QWORD *)a2;
    result = a1[22] + 1;
    a1[22] = result;
  }
  else
  {
    v10 = a1[23];
    v11 = v7 + a5 - a4 + 1;
    if ( v10 < v11 )
    {
      v12 = (void *)sub_885E4(8 * v11);
      v13 = (const void *)a1[24];
      v14 = v12;
      if ( v13 )
      {
        j_memcpy(v12, v13, 8 * a1[22]);
        sub_88614(a1[24]);
      }
      v10 = v11;
      a1[23] = v11;
      a1[24] = v14;
    }
    v15 = a1[22];
    while ( 1 )
    {
      v16 = a1[10] + 8 * (v9 % 12);
      v29 = *(float *)a2 + (float)(*(float *)(v16 + 40) * a3);
      v30 = *(float *)(a2 + 4) + (float)(*(float *)(v16 + 44) * a3);
      if ( v15 == v10 )
      {
        v17 = v10 + 1;
        if ( v10 )
          v18 = v10 + v10 / 2;
        else
          v18 = 8;
        if ( v18 > v17 )
          v17 = v18;
        v15 = v10;
        if ( v10 < v17 )
        {
          v19 = (void *)sub_885E4(8 * v17);
          v20 = (const void *)a1[24];
          v21 = v19;
          if ( v20 )
          {
            j_memcpy(v19, v20, 8 * a1[22]);
            sub_88614(a1[24]);
          }
          v15 = a1[22];
          a1[23] = v17;
          a1[24] = v21;
        }
      }
      v22 = a1[24];
      *(float *)(v22 + 8 * v15) = v29;
      *(float *)(v22 + 8 * v15 + 4) = v30;
      result = a1[22];
      v15 = result + 1;
      a1[22] = result + 1;
      if ( a5 == v9 )
        break;
      v10 = a1[23];
      ++v9;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x9cf78
// SYMBOL: sub_9CF78
int __fastcall sub_9CF78(_DWORD *a1, int a2, float a3, float a4, float a5, int a6)
{
  int v8; // r0
  int v10; // r5
  int v11; // r1
  void *v12; // r0
  const void *v13; // r1
  void *v14; // r6
  int result; // r0
  int v17; // r10
  int v18; // r6
  void *v19; // r0
  const void *v20; // r1
  void *v21; // r8
  float v22; // s18
  int v23; // r5
  int v24; // r6
  float v25; // s4
  int v26; // r8
  int v27; // r0
  void *v28; // r0
  const void *v29; // r1
  void *v30; // r10
  int v31; // r0
  float v32; // r2
  float v33; // [sp+0h] [bp-50h] BYREF
  float v34; // [sp+4h] [bp-4Ch] BYREF
  float v35; // [sp+8h] [bp-48h]
  float v36; // [sp+Ch] [bp-44h]

  v8 = a1[22];
  if ( a3 == 0.0 )
  {
    if ( v8 == a1[23] )
    {
      v10 = v8 + 1;
      if ( v8 )
        v11 = v8 + v8 / 2;
      else
        v11 = 8;
      if ( v11 > v10 )
        v10 = v11;
      if ( v8 < v10 )
      {
        v12 = (void *)sub_885E4(8 * v10);
        v13 = (const void *)a1[24];
        v14 = v12;
        if ( v13 )
        {
          j_memcpy(v12, v13, 8 * a1[22]);
          sub_88614(a1[24]);
        }
        v8 = a1[22];
        a1[23] = v10;
        a1[24] = v14;
      }
    }
    *(_QWORD *)(a1[24] + 8 * v8) = *(_QWORD *)a2;
    result = a1[22] + 1;
    a1[22] = result;
  }
  else
  {
    v17 = a1[23];
    v18 = v8 + a6 + 1;
    if ( v17 < v18 )
    {
      v19 = (void *)sub_885E4(8 * v18);
      v20 = (const void *)a1[24];
      v21 = v19;
      if ( v20 )
      {
        j_memcpy(v19, v20, 8 * a1[22]);
        sub_88614(a1[24]);
      }
      v17 = v18;
      a1[23] = v18;
      a1[24] = v21;
    }
    result = a6;
    if ( a6 >= 0 )
    {
      v22 = a4;
      v23 = 0;
      v24 = a1[22];
      while ( 1 )
      {
        sincosf(v22 + (float)((float)((float)v23 / (float)a6) * (float)(a5 - v22)), &v34, &v33);
        v25 = *(float *)(a2 + 4) + (float)(v34 * a3);
        v35 = *(float *)a2 + (float)(v33 * a3);
        v36 = v25;
        if ( v24 == v17 )
        {
          v26 = v17 + 1;
          if ( v17 )
            v27 = v17 + v17 / 2;
          else
            v27 = 8;
          if ( v27 > v26 )
            v26 = v27;
          v24 = v17;
          if ( v17 < v26 )
          {
            v28 = (void *)sub_885E4(8 * v26);
            v29 = (const void *)a1[24];
            v30 = v28;
            if ( v29 )
            {
              j_memcpy(v28, v29, 8 * a1[22]);
              sub_88614(a1[24]);
            }
            v24 = a1[22];
            a1[23] = v26;
            a1[24] = v30;
          }
        }
        v31 = a1[24];
        v32 = v36;
        *(float *)(v31 + 8 * v24) = v35;
        *(float *)(v31 + 8 * v24 + 4) = v32;
        v24 = a1[22] + 1;
        result = a6;
        a1[22] = v24;
        if ( a6 == v23 )
          break;
        v17 = a1[23];
        ++v23;
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0xa634c
// SYMBOL: sub_A634C
int __fastcall sub_A634C(float *a1, int a2, _BYTE *a3, char *a4, int a5)
{
  int v7; // r8
  int v9; // r9
  int v10; // r5
  int v11; // r0
  int v12; // r0
  int v13; // r1
  int v14; // r11
  int v15; // r2
  int v16; // r3
  _BYTE *v17; // r12
  int v18; // r0
  char *v19; // r5
  int v20; // r11
  float *v21; // r6
  bool v22; // zf
  int v23; // r4
  int v24; // r4
  int v25; // r4
  bool v26; // zf
  int v27; // r5
  int v28; // r4
  int v29; // r4
  int v30; // r0
  int v31; // r0
  bool v32; // zf
  int v33; // r1
  int v34; // r5
  int v35; // r11
  int v36; // r4
  int v37; // r4
  int v38; // r0
  float v39; // s2
  char v40; // r6
  int v41; // r11
  int v42; // r8
  _BYTE *v43; // r6
  int v45; // r0
  bool v46; // zf
  bool v47; // zf
  _BYTE *v48; // r10
  int v49; // r0
  _BOOL4 v50; // r1
  int v51; // [sp+0h] [bp-38h]
  float *v52; // [sp+4h] [bp-34h]
  int v53; // [sp+8h] [bp-30h]
  int v54; // [sp+Ch] [bp-2Ch]
  char *v55; // [sp+Ch] [bp-2Ch]
  char *v56; // [sp+Ch] [bp-2Ch]
  int v57; // [sp+10h] [bp-28h]
  int v59; // [sp+18h] [bp-20h]

  v7 = a5;
  v59 = dword_1ACF68;
  v9 = dword_1ACF68 + 6572;
  v10 = *(_DWORD *)(dword_1ACF68 + 6572);
  *(_BYTE *)(v10 + 124) = 1;
  if ( (a5 & 0x100) == 0 )
  {
    if ( (a5 & 0x1E) == 0 )
      v7 = a5 | 2;
    v53 = *(_DWORD *)(v9 + 4);
    if ( (v7 & 0x20) != 0 && *(_DWORD *)(v9 + 8) == v10 )
    {
      v11 = 1;
      *(_DWORD *)(v9 + 4) = v10;
    }
    else
    {
      v11 = 0;
    }
    v54 = v11;
    v12 = sub_8B914(a1, a2);
    v13 = *(unsigned __int8 *)(v9 + 876);
    v57 = v10;
    if ( v12 )
    {
      if ( !*(_BYTE *)(v9 + 876) )
      {
        v15 = 0;
        v14 = 1;
        v16 = v59;
        goto LABEL_32;
      }
      v13 = 1;
      if ( *(_DWORD *)(v9 + 900) == a2 )
        v14 = (*(unsigned __int8 *)(v9 + 880) >> 1) & 1;
      else
        v14 = 1;
    }
    else
    {
      v14 = 0;
    }
    v16 = v59;
    v15 = 0;
    if ( (v7 & 0x1000) != 0 && v13 )
    {
      if ( (*(_BYTE *)(v9 + 880) & 4) != 0 )
      {
        v15 = 0;
      }
      else
      {
        if ( sub_8B850(32) )
        {
          sub_8B0B4(a2);
          if ( sub_95424(
                 *(float *)(v9 + 28) + 0.0001,
                 (float)(*(float *)(v9 + 28) + 0.0001) - *(float *)(v59 + 24),
                 0.01,
                 0.7) )
          {
            sub_8C628(v10);
            v14 = 1;
            v15 = 1;
          }
          else
          {
            v15 = 0;
            v14 = 1;
          }
        }
        else
        {
          v15 = 0;
        }
        v16 = v59;
      }
    }
LABEL_32:
    v52 = (float *)(v16 + 1032);
    if ( v54 )
      *(_DWORD *)(v9 + 4) = v53;
    v17 = a3;
    if ( ((unsigned __int8)(v7 & 0x40) >> 6) ^ 1 | v14 ^ 1 )
    {
      v22 = v14 == 0;
      v20 = v10;
      v19 = a4;
      v21 = a1;
      if ( v22 )
      {
LABEL_53:
        v25 = 0;
        goto LABEL_76;
      }
    }
    else
    {
      v18 = *(_DWORD *)(v9 + 24);
      v19 = a4;
      v20 = v57;
      v21 = a1;
      v22 = v18 == a2;
      if ( v18 != a2 )
        v22 = v18 == 0;
      if ( !v22 )
        goto LABEL_53;
    }
    if ( (v7 & 0x400) != 0 )
    {
      if ( *(_BYTE *)(v16 + 248) )
        goto LABEL_74;
      v26 = *(_BYTE *)(v16 + 249) == 0;
      if ( !*(_BYTE *)(v16 + 249) )
        v26 = *(_BYTE *)(v16 + 250) == 0;
      if ( !v26 )
        goto LABEL_74;
    }
    if ( (v7 & 2) != 0 && *(_BYTE *)(v16 + 984) )
    {
      v23 = v15;
      sub_8AF74(a2, v20);
      if ( (v7 & 0x2000) == 0 )
        sub_8AFEC(a2, v20);
      sub_8C628(v20);
      v17 = a3;
      v16 = v59;
      v15 = v23;
    }
    if ( (v7 & 4) != 0 && *(_BYTE *)(v16 + 984) || (v7 & 0x10) != 0 && *(_BYTE *)(v16 + 989) )
    {
      v24 = v16;
      if ( (v7 & 0x800) != 0 )
        sub_8B080();
      else
        sub_8AF74(a2, v20);
      sub_8C628(v20);
      v17 = a3;
      v15 = 1;
      v16 = v24;
    }
    if ( (v7 & 8) != 0 && *(_BYTE *)(v16 + 994) )
    {
      v55 = v19;
      if ( v7 << 31 )
      {
        if ( *v52 < *(float *)(v16 + 136) )
          v15 = 1;
      }
      else
      {
        v15 = 1;
      }
      v27 = v15;
      v28 = v16;
      sub_8B080();
      v15 = v27;
      v19 = v55;
      v17 = a3;
      v16 = v28;
    }
    if ( v7 << 31 && *(_DWORD *)(v9 + 36) == a2 && *(float *)(v16 + 1012) > 0.0 )
    {
      v29 = v16;
      v30 = sub_95510(0, 1) | v15;
      v17 = a3;
      v16 = v29;
      if ( !v30 )
      {
LABEL_73:
        v15 = 0;
        v25 = 1;
        goto LABEL_76;
      }
    }
    else
    {
LABEL_74:
      if ( !v15 )
        goto LABEL_73;
    }
    v25 = 1;
    v15 = 1;
    *(_BYTE *)(v9 + 362) = 1;
LABEL_76:
    v31 = *(_DWORD *)(v9 + 268);
    v32 = v31 == a2;
    if ( v31 == a2 )
      v32 = *(_BYTE *)(v9 + 362) == 0;
    if ( v32 && *(_BYTE *)(v9 + 363) )
    {
      v45 = *(_DWORD *)(v9 + 36);
      v46 = v45 == 0;
      if ( v45 )
        v46 = v45 == a2;
      if ( v46 )
      {
        if ( (v7 & 0x4000) == 0 )
          v25 = 1;
      }
      else if ( (v7 & 0x4000) == 0 && v45 == *(_DWORD *)(v20 + 72) )
      {
        v25 = 1;
      }
    }
    if ( *(_DWORD *)(v9 + 276) == a2 )
    {
      v33 = 3;
      v56 = v19;
      v34 = v20;
      v51 = v25;
      if ( !(v7 << 31) )
        v33 = 1;
      v35 = v15;
      v36 = *(_DWORD *)(v9 + 272);
      v37 = (v36 == a2) | (sub_99114(0, v33) > 0.0);
      if ( v37 || *(_DWORD *)(v9 + 36) == a2 )
      {
        v35 |= v37;
        *(_DWORD *)(v9 + 272) = a2;
        sub_8AF74(a2, v34);
        if ( !(v37 ^ 1 | ((unsigned __int16)(v7 & 0x2000) >> 13)) )
          sub_8AFEC(a2, v34);
        *(_DWORD *)(v9 + 56) = 15;
      }
      v17 = a3;
      v15 = v35;
      v16 = v59;
      v19 = v56;
      v25 = v51;
    }
    if ( *(_DWORD *)(v9 + 36) == a2 )
    {
      if ( v15 )
        *(_BYTE *)(v9 + 50) = 1;
      v38 = *(_DWORD *)(v9 + 76);
      if ( v38 == 2 )
      {
        if ( *(_DWORD *)(v9 + 276) != a2 )
        {
          v42 = v15;
          v43 = v17;
          sub_8B080();
          v17 = v43;
          v15 = v42;
        }
      }
      else if ( v38 == 1 )
      {
        if ( *(_BYTE *)(v9 + 48) )
        {
          v39 = *(float *)(v16 + 228) - v21[1];
          *(float *)(v9 + 64) = *(float *)(v16 + 224) - *v21;
          *(float *)(v9 + 68) = v39;
        }
        v40 = *(_BYTE *)(v16 + 232);
        if ( v40 )
        {
          v40 = 1;
          v41 = v15;
        }
        else
        {
          v47 = (((unsigned __int8)(v7 & 2) >> 1) ^ 1 | v25 ^ 1) == 0;
          if ( !(((unsigned __int8)(v7 & 2) >> 1) ^ 1 | v25 ^ 1) )
            v47 = *(_BYTE *)(v9 + 876) == 0;
          if ( v47 )
          {
            v41 = v15;
            if ( (v7 & 0x10) != 0 )
            {
              v49 = *(unsigned __int8 *)(v16 + 1004);
              if ( *(_BYTE *)(v16 + 1004) )
                v49 = 1;
            }
            else
            {
              v49 = 0;
            }
            if ( v7 << 31 )
              v50 = *v52 < *(float *)(v16 + 136);
            else
              v50 = 1;
            v48 = v17;
            if ( !v49 )
              v41 = v50 | v15;
          }
          else
          {
            v48 = v17;
            v41 = v15;
          }
          sub_8B080();
          v17 = v48;
        }
        if ( (v7 & 0x2000) == 0 )
          *(_BYTE *)(v9 + 362) = 1;
        v15 = v41;
        goto LABEL_101;
      }
    }
    v40 = 0;
LABEL_101:
    if ( v17 )
      *v17 = v25;
    if ( v19 )
      *v19 = v40;
    return v15;
  }
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( *(_DWORD *)(v9 + 36) == a2 )
    sub_8B080();
  return 0;
}


// ======================================================================
// ADDR: 0xa69b8
// SYMBOL: sub_A69B8
int __fastcall sub_A69B8(int a1, float *a2)
{
  int v3; // r9
  float v4; // s4
  float v5; // s0
  float v6; // s2
  float v7; // s8
  int v8; // r8
  float v9; // s4
  int v10; // r6
  int v11; // r4
  int v12; // r0
  unsigned int v13; // r3
  float v14; // s0
  float v15; // s18
  unsigned int v16; // r5
  _DWORD *v17; // r0
  float v18; // s16
  float v19; // s4
  _DWORD *v20; // r0
  float v22; // [sp+4h] [bp-5Ch] BYREF
  float v23; // [sp+8h] [bp-58h]
  float v24; // [sp+Ch] [bp-54h] BYREF
  float v25; // [sp+10h] [bp-50h]
  float v26; // [sp+14h] [bp-4Ch] BYREF
  float v27; // [sp+18h] [bp-48h]
  char v28; // [sp+1Eh] [bp-42h] BYREF
  char v29; // [sp+1Fh] [bp-41h] BYREF
  __int64 v30; // [sp+20h] [bp-40h] BYREF
  float v31; // [sp+28h] [bp-38h]
  float v32; // [sp+2Ch] [bp-34h]

  v3 = dword_1ACF68 + 5456;
  v4 = *(float *)(dword_1ACF68 + 6344);
  v5 = *(float *)(dword_1ACF68 + 5456) + *(float *)(dword_1ACF68 + 5456);
  v6 = *(float *)(dword_1ACF68 + 5460) + *(float *)(dword_1ACF68 + 5460);
  v7 = v4 + a2[1];
  v8 = *(_DWORD *)(dword_1ACF68 + 6572);
  v9 = v4 + *a2;
  v30 = *(_QWORD *)a2;
  v32 = v7 + v6;
  v31 = v9 + v5;
  v10 = sub_8B314((float *)&v30, a1, 0);
  v11 = sub_A634C((float *)&v30, a1, &v29, &v28, 0);
  if ( v10 )
  {
    v12 = 23;
    if ( !v28 )
      v12 = 22;
    v13 = sub_88C10(v12, 1.0);
    v26 = (float)(*(float *)&v30 + v31) * 0.5;
    v27 = (float)(*((float *)&v30 + 1) + v32) * 0.5;
    if ( v29 )
    {
      v14 = (float)(*(float *)(v3 + 888) * 0.5) + 1.0;
      if ( v14 <= 2.0 )
        v14 = 2.0;
      sub_9D838(*(_DWORD *)(v8 + 636), (int)&v26, v14, v13, 12);
    }
    v15 = *(float *)(v3 + 888);
    v16 = sub_88C10(0, 1.0);
    v17 = *(_DWORD **)(v8 + 636);
    v18 = (float)((float)(v15 * 0.5) * 0.7071) + -1.0;
    v27 = v27 + -0.5;
    v19 = v18 + (float)(v26 + -0.5);
    v26 = v26 + -0.5;
    v25 = v18 + v27;
    v23 = v27 - v18;
    v24 = v19;
    v22 = v26 - v18;
    sub_9D43C(v17, &v24, &v22, v16, 1.0);
    v20 = *(_DWORD **)(v8 + 636);
    v24 = v18 + v26;
    v25 = v27 - v18;
    v23 = v18 + v27;
    v22 = v26 - v18;
    sub_9D43C(v20, &v24, &v22, v16, 1.0);
  }
  return v11;
}


// ======================================================================
// ADDR: 0xa6ba8
// SYMBOL: sub_A6BA8
int __fastcall sub_A6BA8(int a1, float *a2)
{
  float *v3; // r4
  float v4; // s4
  float v5; // s0
  float v6; // s2
  float v7; // s8
  int v8; // r9
  float v9; // s4
  int v10; // r8
  int v11; // r1
  int v12; // r0
  unsigned int v13; // r5
  int v14; // r0
  float v15; // s0
  int v16; // r6
  float v17; // s2
  int v18; // r5
  float v19; // s0
  float v20; // s2
  float v22[2]; // [sp+Ch] [bp-3Ch] BYREF
  unsigned __int8 v23; // [sp+16h] [bp-32h] BYREF
  unsigned __int8 v24; // [sp+17h] [bp-31h] BYREF
  __int64 v25; // [sp+18h] [bp-30h] BYREF
  float v26; // [sp+20h] [bp-28h]
  float v27; // [sp+24h] [bp-24h]

  v3 = (float *)(dword_1ACF68 + 5456);
  v4 = *(float *)(dword_1ACF68 + 6344);
  v5 = *(float *)(dword_1ACF68 + 5456) + *(float *)(dword_1ACF68 + 5456);
  v6 = *(float *)(dword_1ACF68 + 5460) + *(float *)(dword_1ACF68 + 5460);
  v7 = v4 + a2[1];
  v8 = *(_DWORD *)(dword_1ACF68 + 6572);
  v9 = v4 + *a2;
  v25 = *(_QWORD *)a2;
  v27 = v7 + v6;
  v26 = v9 + v5;
  sub_8B314((float *)&v25, a1, 0);
  v10 = sub_A634C((float *)&v25, a1, &v24, (char *)&v23, 0);
  v11 = 22;
  if ( !v24 )
    v11 = 21;
  v12 = v11;
  if ( v24 )
    v12 = 23;
  if ( !v23 )
    v12 = v11;
  v13 = sub_88C10(v12, 1.0);
  v14 = sub_88C10(0, 1.0);
  v15 = *(float *)&v25;
  v16 = v14;
  v17 = *((float *)&v25 + 1);
  v22[0] = (float)(*(float *)&v25 + v26) * 0.5;
  v22[1] = (float)(*((float *)&v25 + 1) + v27) * 0.5;
  if ( v23 | v24 )
  {
    sub_9D838(*(_DWORD *)(v8 + 636), (int)v22, (float)(v3[222] * 0.5) + 1.0, v13, 12);
    v17 = *((float *)&v25 + 1);
    v15 = *(float *)&v25;
  }
  v18 = 1;
  v19 = v15 + *v3;
  v20 = v17 + v3[1];
  if ( !*(_BYTE *)(v8 + 125) )
    v18 = 3;
  sub_8A0BC(*(_DWORD *)(v8 + 636), v19, v20, v16, v18, 1.0);
  if ( sub_955FC() && sub_955B0(0, -1.0) )
    sub_8C564(v8);
  return v10;
}


// ======================================================================
// ADDR: 0xa71ac
// SYMBOL: sub_A71AC
int __fastcall sub_A71AC(int a1)
{
  int v2; // r5
  const char *v3; // r1
  int v4; // r6
  int v5; // r8
  __int64 v6; // d17
  float v7; // s0
  float v8; // s12
  float v9; // s2
  float v10; // s4
  float v11; // s6
  float v12; // s8
  float v13; // s10
  int v14; // r1
  unsigned int v15; // r2
  float v17; // [sp+10h] [bp-38h] BYREF
  float v18; // [sp+14h] [bp-34h]
  float v19; // [sp+18h] [bp-30h]
  float v20; // [sp+1Ch] [bp-2Ch]
  __int64 v21; // [sp+20h] [bp-28h] BYREF
  float v22[3]; // [sp+28h] [bp-20h]
  int v23; // [sp+34h] [bp-14h]

  v2 = 0;
  v3 = "#SCROLLX";
  v4 = *(_DWORD *)(dword_1ACF68 + 6572);
  if ( a1 )
    v3 = "#SCROLLY";
  v5 = sub_8AEAC(*(_DWORD *)(dword_1ACF68 + 6572), (unsigned int)v3, 0);
  sub_8AE84(v5);
  v6 = *(_QWORD *)(v4 + 488);
  v7 = *(float *)(v4 + 12);
  v8 = *(float *)(v4 + 112 + 4 * a1);
  v9 = *(float *)(v4 + 16);
  v10 = *(float *)(v4 + 20);
  v11 = *(float *)(v4 + 24);
  v12 = *(float *)(v4 + 64);
  v13 = *(float *)(v4 + 112 + 4 * (a1 ^ 1));
  v21 = *(_QWORD *)(v4 + 480);
  *(_QWORD *)v22 = v6;
  if ( v8 <= 0.0 )
    v2 = 1;
  v14 = 8 * v2;
  if ( a1 )
  {
    v20 = *(float *)(v4 + 492);
    v18 = *((float *)&v21 + 1);
    v19 = v7 + v10;
    v15 = *(_DWORD *)(v4 + 8);
    v17 = (float)((float)(v7 + v10) - v12) - v13;
    if ( v15 << 31 )
      v14 |= ~(v15 >> 9) & 2;
  }
  else
  {
    v14 |= 4u;
    v17 = *(float *)&v21;
    v19 = v22[0];
    v20 = v9 + v11;
    v18 = (float)((float)(v9 + v11) - v12) - v13;
  }
  sub_A6D44(
    &v17,
    v5,
    a1,
    (float *)(v4 + 4 * a1 + 80),
    v22[a1] - v22[a1 - 2],
    (float)(*(float *)(v4 + 4 * a1 + 52) + *(float *)(v4 + 4 * a1 + 52)) + *(float *)(v4 + 4 * a1 + 36),
    v14);
  return v23;
}


// ======================================================================
// ADDR: 0xaea50
// SYMBOL: sub_AEA50
int __fastcall sub_AEA50(int result, int a2, float a3, int a4)
{
  float v4; // s2
  float v5; // s4
  float v6; // s6
  float v7; // s12
  float v8; // s8
  float v9; // s4
  float v10; // s0

  *(float *)result = a3;
  *(_DWORD *)(result + 8) = 0;
  if ( a4 )
  {
    *(_DWORD *)(result + 24) = 0;
    *(_DWORD *)(result + 28) = 0;
    *(_DWORD *)(result + 32) = 0;
  }
  v4 = -0.0;
  v5 = *(float *)(result + 24) + 0.0;
  v6 = *(float *)(result + 28);
  v7 = -0.0;
  v8 = *(float *)(result + 32);
  if ( v6 > 0.0 )
    v7 = a3;
  if ( v8 > 0.0 )
    v4 = a3;
  *(_DWORD *)(result + 12) = 0;
  v9 = v5 + v7;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  v10 = (float)(v9 + v6) + v4;
  *(float *)(result + 16) = (float)(int)v9;
  *(float *)(result + 4) = v10 + v8;
  *(float *)(result + 20) = (float)(int)v10;
  return result;
}


// ======================================================================
