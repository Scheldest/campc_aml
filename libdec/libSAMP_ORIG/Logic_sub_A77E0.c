// ADDR: 0x89e08
// SYMBOL: sub_89E08
int __fastcall sub_89E08(float a1, float a2, float a3, float a4, float a5)
{
  float v5; // s16
  int v7; // r4
  int v8; // r0
  float v9; // s0
  float v10; // s4
  float v11; // s0
  float v12; // s2
  float v13; // s6
  float v14; // s8
  float v15; // s10
  float v16; // s12
  float v17; // s14
  float v18; // s4
  float v19; // s0
  float v20; // s2
  float v21; // s6
  float v22; // s8
  float v23; // s10
  float v24; // s12
  float v25; // s14
  float v27[2]; // [sp+Ch] [bp-64h] BYREF
  float v28[2]; // [sp+14h] [bp-5Ch] BYREF
  _DWORD v29[2]; // [sp+1Ch] [bp-54h] BYREF
  _DWORD v30[19]; // [sp+24h] [bp-4Ch] BYREF

  *(float *)&v30[1] = a2;
  *(float *)&v29[1] = a4;
  *(float *)v30 = a1;
  *(float *)v29 = a3;
  v5 = *(float *)(dword_1ACF68 + 5468);
  if ( v5 > 0.0 )
  {
    v7 = *(_DWORD *)(dword_1ACF68 + 6572);
    v8 = *(_DWORD *)(v7 + 636);
    v28[1] = a2 + 1.0;
    v28[0] = a1 + 1.0;
    v9 = *(float *)(dword_1ACF68 + 5400);
    v27[1] = a4 + 1.0;
    v27[0] = a3 + 1.0;
    v10 = *(float *)(dword_1ACF68 + 5672);
    v11 = *(float *)(dword_1ACF68 + 5680) * v9;
    v12 = *(float *)(dword_1ACF68 + 5668);
    v13 = *(float *)(dword_1ACF68 + 5676);
    v14 = v10;
    if ( v10 > 1.0 )
      v14 = 1.0;
    v15 = *(float *)(dword_1ACF68 + 5668);
    if ( v12 > 1.0 )
      v15 = 1.0;
    v16 = *(float *)(dword_1ACF68 + 5676);
    if ( v13 > 1.0 )
      v16 = 1.0;
    v17 = v11;
    if ( v11 > 1.0 )
      v17 = 1.0;
    if ( v10 < 0.0 )
      v14 = 0.0;
    if ( v12 < 0.0 )
      v15 = 0.0;
    if ( v13 < 0.0 )
      v16 = 0.0;
    if ( v11 < 0.0 )
      v17 = 0.0;
    sub_9D568(
      v8,
      (int)v28,
      (int)v27,
      (int)(float)((float)(v15 * 255.0) + 0.5) | ((int)(float)((float)(v14 * 255.0) + 0.5) << 8) | ((int)(float)((float)(v16 * 255.0) + 0.5) << 16) | ((int)(float)((float)(v17 * 255.0) + 0.5) << 24),
      a5,
      15,
      v5);
    v18 = *(float *)(dword_1ACF68 + 5656);
    v19 = *(float *)(dword_1ACF68 + 5664) * *(float *)(dword_1ACF68 + 5400);
    v20 = *(float *)(dword_1ACF68 + 5652);
    v21 = *(float *)(dword_1ACF68 + 5660);
    v22 = v18;
    if ( v18 > 1.0 )
      v22 = 1.0;
    v23 = *(float *)(dword_1ACF68 + 5652);
    if ( v20 > 1.0 )
      v23 = 1.0;
    v24 = *(float *)(dword_1ACF68 + 5660);
    if ( v21 > 1.0 )
      v24 = 1.0;
    v25 = *(float *)(dword_1ACF68 + 5664) * *(float *)(dword_1ACF68 + 5400);
    if ( v19 > 1.0 )
      v25 = 1.0;
    if ( v18 < 0.0 )
      v22 = 0.0;
    if ( v20 < 0.0 )
      v23 = 0.0;
    if ( v21 < 0.0 )
      v24 = 0.0;
    if ( v19 < 0.0 )
      v25 = 0.0;
    sub_9D568(
      *(_DWORD *)(v7 + 636),
      (int)v30,
      (int)v29,
      (int)(float)((float)(v23 * 255.0) + 0.5) | ((int)(float)((float)(v22 * 255.0) + 0.5) << 8) | ((int)(float)((float)(v24 * 255.0) + 0.5) << 16) | ((int)(float)((float)(v25 * 255.0) + 0.5) << 24),
      a5,
      15,
      v5);
  }
  return v30[2];
}


// ======================================================================
// ADDR: 0x96288
// SYMBOL: sub_96288
int __fastcall sub_96288(_BYTE *a1)
{
  __int64 v1; // r2
  unsigned __int8 *v2; // r1
  unsigned int v3; // r0
  unsigned int v4; // r0
  int v5; // r12
  _DWORD *v6; // r1
  unsigned int v7; // r4
  unsigned int v8; // r2
  unsigned int *v9; // r5
  _DWORD *v10; // r5
  unsigned int v11; // t1

  LODWORD(v1) = (unsigned __int8)*a1;
  if ( *a1 )
  {
    v2 = a1 + 1;
    v3 = -1;
    do
    {
      HIDWORD(v1) = v1;
      LODWORD(v1) = *v2;
      if ( v1 == 0x2300000023LL )
      {
        LODWORD(v1) = 35;
        if ( v2[1] == 35 )
          v3 = -1;
      }
      ++v2;
      v3 = dword_52D88[HIDWORD(v1) ^ (unsigned __int8)v3] ^ (v3 >> 8);
    }
    while ( (_DWORD)v1 );
    v4 = ~v3;
  }
  else
  {
    v4 = 0;
  }
  v5 = *(_DWORD *)(dword_1ACF68 + 6556);
  v6 = *(_DWORD **)(dword_1ACF68 + 6564);
  if ( v5 )
  {
    v6 = *(_DWORD **)(dword_1ACF68 + 6564);
    v7 = *(_DWORD *)(dword_1ACF68 + 6556);
    do
    {
      v8 = v7 >> 1;
      v9 = &v6[2 * (v7 >> 1)];
      v11 = *v9;
      v10 = v9 + 2;
      if ( v11 < v4 )
      {
        v8 = v7 + ~(v7 >> 1);
        v6 = v10;
      }
      v7 = v8;
    }
    while ( v8 );
  }
  if ( v6 == (_DWORD *)(*(_DWORD *)(dword_1ACF68 + 6564) + 8 * v5) || *v6 != v4 )
    return 0;
  else
    return v6[1];
}


// ======================================================================
// ADDR: 0x96334
// SYMBOL: sub_96334
int __fastcall sub_96334(int a1, int a2)
{
  int v4; // r0
  bool v5; // cc
  float v6; // r1
  float v7; // s0
  float v8; // s2
  int v9; // s0
  _DWORD v11[2]; // [sp+0h] [bp-20h] BYREF
  float v12; // [sp+8h] [bp-18h] BYREF
  float v13; // [sp+Ch] [bp-14h]
  int v14; // [sp+14h] [bp-Ch]

  if ( *(_BYTE *)(a2 + 125) )
  {
    v4 = *(_DWORD *)(a2 + 144);
    v5 = v4 <= 0;
    if ( v4 <= 0 )
      v5 = *(_DWORD *)(a2 + 148) <= 0;
    if ( v5 )
      goto LABEL_8;
  }
  if ( *(_BYTE *)(a2 + 129) && !*(_DWORD *)(a2 + 168) && *(int *)(a2 + 164) >= 1 )
  {
LABEL_8:
    v6 = *(float *)(a2 + 40);
    v12 = *(float *)(a2 + 36);
    v13 = v6;
  }
  else
  {
    v7 = *(float *)(a2 + 44);
    if ( v7 == 0.0 )
      v7 = *(float *)(a2 + 224) - *(float *)(a2 + 216);
    v8 = *(float *)(a2 + 48);
    v9 = (int)v7;
    if ( v8 == 0.0 )
      v8 = *(float *)(a2 + 228) - *(float *)(a2 + 220);
    v12 = (float)v9;
    v13 = (float)(int)v8;
  }
  sub_965F4(v11, a2, &v12);
  sub_963FC(a1, a2, v11[0], v11[1]);
  return v14;
}


// ======================================================================
// ADDR: 0x97224
// SYMBOL: sub_97224
float sub_97224()
{
  int v0; // r0
  float *v1; // r1
  float v2; // s0
  int v3; // r1
  int v4; // r2
  float v5; // s2
  float v6; // s4
  int v7; // r1
  float v8; // s2

  v0 = *(_DWORD *)(dword_1ACF68 + 6572);
  v1 = (float *)(dword_1ACF68 + 6764);
  if ( !(*(unsigned __int8 *)(dword_1ACF68 + 6760) << 31) )
    v1 = (float *)(v0 + 368);
  v2 = *v1;
  if ( *v1 < 0.0 )
  {
    v3 = *(_DWORD *)(v0 + 448);
    if ( v3 )
    {
      v4 = *(_DWORD *)(v3 + 12);
      v5 = *(float *)(v3 + 20);
      v6 = *(float *)(v3 + 24);
      v7 = *(_DWORD *)(v3 + 68);
      if ( v4 > -2 )
        ++v4;
      v8 = (float)(*(float *)(v0 + 12) + (float)(v5 + (float)((float)(v6 - v5) * *(float *)(v7 + 28 * v4))))
         - *(float *)(v0 + 52);
    }
    else
    {
      v8 = *(float *)(v0 + 552);
    }
    v2 = v2 + (float)(v8 - *(float *)(v0 + 200));
    if ( v2 <= 1.0 )
      v2 = 1.0;
  }
  return (float)(int)v2;
}


// ======================================================================
// ADDR: 0x97734
// SYMBOL: sub_97734
int __fastcall sub_97734(__int64 *a1, __int64 *a2, int a3, int a4)
{
  int v4; // lr
  __int64 v5; // kr00_8
  __int64 v6; // r0

  v4 = dword_1ACF68;
  *(_DWORD *)(dword_1ACF68 + 6672) |= 0x10u;
  v5 = *a1;
  v6 = *a2;
  *(_DWORD *)(v4 + 6732) = v6;
  *(_QWORD *)(v4 + 6724) = v5;
  *(_DWORD *)(v4 + 6736) = HIDWORD(v6);
  *(_DWORD *)(v4 + 6740) = a3;
  *(_DWORD *)(v4 + 6744) = a4;
  return v4 + 6748;
}


// ======================================================================
// ADDR: 0x978a8
// SYMBOL: sub_978A8
float sub_978A8()
{
  return (float)(*(float *)(dword_1ACF68 + 5460) + *(float *)(dword_1ACF68 + 5460)) + *(float *)(dword_1ACF68 + 6344);
}


// ======================================================================
// ADDR: 0x98474
// SYMBOL: sub_98474
bool __fastcall sub_98474(int a1)
{
  int v1; // r1

  v1 = *(_DWORD *)(dword_1ACF68 + 6824);
  return *(_DWORD *)(dword_1ACF68 + 6812) > v1 && *(_DWORD *)(*(_DWORD *)(dword_1ACF68 + 6820) + 36 * v1) == a1;
}


// ======================================================================
// ADDR: 0x984a4
// SYMBOL: sub_984A4
int __fastcall sub_984A4(unsigned int a1)
{
  int v2; // r5
  _DWORD *v3; // r8
  int v4; // r0
  unsigned int v5; // r11
  unsigned int v6; // r2
  int v7; // r4
  _QWORD *v8; // r1
  int v9; // r0
  _DWORD *v10; // r6
  int v11; // r5
  char *v12; // r0
  unsigned int *v13; // r0
  int v14; // t1
  int v15; // r5
  int v16; // r2
  void *v17; // r0
  const void *v18; // r1
  void *v19; // r6
  int v20; // r1
  int v21; // r0
  bool v22; // zf
  unsigned __int64 v23; // d17
  int v24; // r0
  __int64 v25; // d18
  __int64 v26; // d19
  int v27; // r0
  int v28; // r9
  int v29; // r2
  int v30; // r4
  _DWORD *v31; // r0
  const void *v32; // r1
  int v33; // r1
  int v34; // r0
  bool v35; // zf
  __int64 v36; // d16
  unsigned __int64 v37; // d17
  char *v38; // r1
  __int64 v39; // d18
  __int64 v40; // d19
  _DWORD v42[2]; // [sp+8h] [bp-50h] BYREF
  __int64 v43; // [sp+10h] [bp-48h]
  unsigned __int64 v44; // [sp+18h] [bp-40h]
  __int64 v45; // [sp+20h] [bp-38h] BYREF
  _BYTE v46[12]; // [sp+28h] [bp-30h]
  int v47; // [sp+38h] [bp-20h]

  v2 = dword_1ACF68;
  v3 = (_DWORD *)(dword_1ACF68 + 6496);
  v4 = *(_DWORD *)(dword_1ACF68 + 6572);
  v5 = *(_DWORD *)(dword_1ACF68 + 6496);
  *(_QWORD *)&v46[4] = 0LL;
  v6 = *(_DWORD *)(dword_1ACF68 + 6836);
  v7 = *(_DWORD *)(dword_1ACF68 + 6824);
  LODWORD(v45) = *(_DWORD *)(*(_DWORD *)(v4 + 460) + 4 * *(_DWORD *)(v4 + 452) - 4);
  v43 = a1;
  v44 = __PAIR64__(v5, v6);
  sub_98718(v42);
  HIDWORD(v45) = v42[0];
  *(_DWORD *)v46 = v42[1];
  v8 = (__int64 *)((char *)&v45 + 4);
  if ( *(float *)(v2 + 228) >= -256000.0 )
    v8 = (_QWORD *)(v2 + 224);
  if ( *(float *)(v2 + 224) < -256000.0 )
    v8 = (__int64 *)((char *)&v45 + 4);
  v9 = v3[79];
  *(_QWORD *)&v46[4] = *v8;
  if ( v9 <= v7 )
  {
    if ( v9 == v3[80] )
    {
      v15 = v9 + 1;
      if ( v9 )
        v16 = v9 + v9 / 2;
      else
        v16 = 8;
      if ( v16 > v15 )
        v15 = v16;
      if ( v9 < v15 )
      {
        if ( dword_1ACF68 )
          ++*(_DWORD *)(dword_1ACF68 + 880);
        v17 = (void *)off_117248(36 * v15, dword_1ACF70);
        v18 = (const void *)v3[81];
        v19 = v17;
        if ( v18 )
        {
          j_memcpy(v17, v18, 36 * v3[79]);
          v21 = v3[81];
          v22 = v21 == 0;
          if ( v21 )
          {
            v20 = dword_1ACF68;
            v22 = dword_1ACF68 == 0;
          }
          if ( !v22 )
            --*(_DWORD *)(v20 + 880);
          off_11724C(v21, dword_1ACF70);
        }
        v9 = v3[79];
        v3[80] = v15;
        v3[81] = v19;
      }
    }
    v23 = v44;
    v24 = v3[81] + 36 * v9;
    v25 = v45;
    v26 = *(_QWORD *)v46;
    *(_QWORD *)v24 = v43;
    *(_QWORD *)(v24 + 8) = v23;
    v24 += 16;
    *(_QWORD *)v24 = v25;
    *(_QWORD *)(v24 + 8) = v26;
    *(_DWORD *)(v24 + 16) = *(_DWORD *)&v46[8];
    ++v3[79];
  }
  else
  {
    v10 = (_DWORD *)v3[81];
    v11 = 9 * v7;
    if ( v10[9 * v7] == a1
      && (v12 = (char *)&v10[9 * v7], v14 = *((_DWORD *)v12 + 3), v13 = (unsigned int *)(v12 + 12), v14 == *v3 - 1) )
    {
      *v13 = v5;
    }
    else
    {
      v27 = v3[80];
      v28 = v7 + 1;
      if ( v27 <= v7 )
      {
        if ( v27 )
          v29 = v27 + v27 / 2;
        else
          v29 = 8;
        v30 = v7 + 1;
        if ( v29 > v28 )
          v30 = v29;
        if ( v27 < v30 )
        {
          if ( dword_1ACF68 )
            ++*(_DWORD *)(dword_1ACF68 + 880);
          v31 = (_DWORD *)off_117248(36 * v30, dword_1ACF70);
          v32 = (const void *)v3[81];
          v10 = v31;
          if ( v32 )
          {
            j_memcpy(v31, v32, 36 * v3[79]);
            v34 = v3[81];
            v35 = v34 == 0;
            if ( v34 )
            {
              v33 = dword_1ACF68;
              v35 = dword_1ACF68 == 0;
            }
            if ( !v35 )
              --*(_DWORD *)(v33 + 880);
            off_11724C(v34, dword_1ACF70);
          }
          v3[80] = v30;
          v3[81] = v10;
        }
      }
      v36 = v43;
      v37 = v44;
      v38 = (char *)&v10[v11];
      v39 = v45;
      v40 = *(_QWORD *)v46;
      v3[79] = v28;
      *(_QWORD *)v38 = v36;
      *((_QWORD *)v38 + 1) = v37;
      v38 += 16;
      *(_QWORD *)v38 = v39;
      *((_QWORD *)v38 + 1) = v40;
      *((_DWORD *)v38 + 4) = *(_DWORD *)&v46[8];
    }
  }
  return v47;
}


// ======================================================================
// ADDR: 0x989e8
// SYMBOL: sub_989E8
int sub_989E8()
{
  sub_98A0C(*(_DWORD *)(dword_1ACF68 + 6572), 2);
  return sub_94DC0();
}


// ======================================================================
// ADDR: 0x99094
// SYMBOL: sub_99094
float *__fastcall sub_99094(float *result)
{
  float v1; // s12
  float v2; // s2
  float v3; // s0
  float v4; // s4
  float v5; // s10
  float v6; // s6
  float v7; // s2
  float v8; // s0
  bool v9; // fzf
  bool v10; // fnf
  float v11; // s4
  float v12; // s2

  v1 = *(float *)(dword_1ACF68 + 20);
  v2 = *(float *)(dword_1ACF68 + 5556);
  v3 = *(float *)(dword_1ACF68 + 5552);
  v4 = v2 + v2;
  v5 = *(float *)(dword_1ACF68 + 16);
  v6 = v3 + v3;
  v7 = -v2;
  v8 = -v3;
  v9 = v1 == v4;
  v10 = v1 < v4;
  v11 = 0.0;
  if ( !v10 && !v9 )
    v11 = v7;
  v12 = 0.0;
  if ( v5 > v6 )
    v12 = v8;
  result[3] = v1 + v11;
  result[2] = v5 + v12;
  result[1] = 0.0 - v11;
  *result = 0.0 - v12;
  return result;
}


// ======================================================================
