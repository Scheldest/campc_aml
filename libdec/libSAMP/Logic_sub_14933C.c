// ADDR: 0x104b1c
// SYMBOL: sub_104B1C
unsigned __int8 *__fastcall sub_104B1C(int a1, __int16 a2, __int16 a3, unsigned int a4)
{
  int v4; // r0
  unsigned __int8 *result; // r0

  v4 = 7 * *(unsigned __int8 *)(a1 + 96);
  *(_WORD *)&byte_25B22C[4 * v4] = a2;
  result = &byte_25B22C[4 * v4];
  result[8] = (a4 & 0x10) != 0;
  result[7] = (a4 & 8) != 0;
  result[6] = (a4 & 4) != 0;
  result[5] = (a4 & 2) != 0;
  result[9] = (a4 & 0x20) != 0;
  result[4] = a4 & 1;
  *((_WORD *)result + 1) = a3;
  if ( ((a4 >> 5) & 1) == 0 )
    result[27] = 0;
  result[18] = (a4 & 0x4000) != 0;
  result[17] = (a4 & 0x2000) != 0;
  result[16] = (a4 & 0x1000) != 0;
  result[15] = (a4 & 0x800) != 0;
  result[14] = (a4 & 0x400) != 0;
  result[13] = (a4 & 0x200) != 0;
  result[12] = BYTE1(a4) & 1;
  result[11] = (unsigned __int8)a4 >> 7;
  result[10] = (a4 & 0x40) != 0;
  return result;
}


// ======================================================================
// ADDR: 0x104dd4
// SYMBOL: sub_104DD4
void __fastcall sub_104DD4(int a1, unsigned __int16 *a2)
{
  _DWORD *v3; // r0
  bool v5; // zf
  int v6; // r0
  unsigned int v8; // r0
  int v9; // r5
  int v10; // r6
  double v11; // d8
  int v12; // r10
  int v13; // r11
  unsigned int v14; // r8
  char *v15; // r1
  char *v16; // r2
  _BOOL4 v17; // [sp+20h] [bp-58h] BYREF
  char v18; // [sp+24h] [bp-54h] BYREF
  char v19; // [sp+25h] [bp-53h] BYREF
  char v20; // [sp+26h] [bp-52h] BYREF
  char v21; // [sp+27h] [bp-51h] BYREF
  double v22; // [sp+28h] [bp-50h] BYREF
  _DWORD v23[2]; // [sp+30h] [bp-48h] BYREF
  void *v24; // [sp+38h] [bp-40h]
  _DWORD v25[2]; // [sp+40h] [bp-38h] BYREF
  void *v26; // [sp+48h] [bp-30h]

  v3 = *(_DWORD **)(a1 + 92);
  if ( v3 )
  {
    v5 = *v3 == dword_23DF24 + 6716708;
    if ( *v3 != dword_23DF24 + 6716708 )
      v5 = v3[6] == 0;
    if ( !v5 )
    {
      v6 = *a2;
      v25[0] = 0;
      v25[1] = 0;
      v26 = 0;
      v23[0] = 0;
      v23[1] = 0;
      v24 = 0;
      if ( sub_F857C(v6, (int)v25, (int)v23) )
      {
        v8 = a2[1];
        v9 = (v8 >> 8) & 1;
        v10 = (v8 >> 9) & 1;
        v11 = (double)(unsigned __int8)v8;
        v12 = (v8 >> 10) & 1;
        v13 = (v8 >> 11) & 1;
        v14 = v8 >> 13;
        _android_log_print(
          4,
          "AXL",
          "delta: %f loop: %d lockx: %d locky: %d freeze: %d time: %d",
          v11,
          v9,
          v10,
          v12,
          v13,
          v8 >> 13);
        v20 = v10;
        v15 = (char *)v24;
        v16 = (char *)v26;
        v22 = v11;
        v21 = v9;
        v19 = v12;
        v18 = v13;
        v17 = v14 == 2;
        if ( !(LOBYTE(v23[0]) << 31) )
          v15 = (char *)v23 + 1;
        if ( !(LOBYTE(v25[0]) << 31) )
          v16 = (char *)v25 + 1;
        sub_104F28(a1, v15, v16, &v22, &v21, &v20, &v19, &v18, &v17);
      }
      if ( LOBYTE(v23[0]) << 31 )
        operator delete(v24);
      if ( LOBYTE(v25[0]) << 31 )
        operator delete(v26);
    }
  }
}


// ======================================================================
// ADDR: 0x1051c0
// SYMBOL: sub_1051C0
int __fastcall sub_1051C0(int result)
{
  int v1; // r1
  int v2; // r4
  int v3; // r2
  int v4; // r3
  int v5; // [sp+0h] [bp-20h]
  int v6; // [sp+4h] [bp-1Ch]
  int v7; // [sp+8h] [bp-18h]
  int v8; // [sp+Ch] [bp-14h]
  int v9; // [sp+10h] [bp-10h]
  int v10; // [sp+14h] [bp-Ch]
  int v11; // [sp+14h] [bp-Ch]
  int v12; // [sp+18h] [bp-8h]
  int v13; // [sp+18h] [bp-8h]

  v1 = *(_DWORD *)(result + 104);
  if ( v1 )
  {
    v2 = result;
    sub_107188(&unk_B369A, v1, 0, 0, 0, 0, 0, 0, 0, v10, v12);
    result = sub_107188(&unk_B3816, *(_DWORD *)(v2 + 104), v3, v4, v5, v6, v7, v8, v9, v11, v13);
    *(_DWORD *)(v2 + 104) = 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x106b50
// SYMBOL: sub_106B50
bool __fastcall sub_106B50(int a1)
{
  int v2; // r0
  _BOOL4 result; // r0

  result = 0;
  if ( *(_DWORD *)(a1 + 92) )
  {
    if ( sub_1082F4(*(_DWORD *)(a1 + 8)) )
    {
      v2 = *(_DWORD *)(*(_DWORD *)(a1 + 92) + 1088);
      if ( v2 )
      {
        if ( *(_DWORD *)(v2 + 16) && sub_10944E() == 1022 )
          return 1;
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x109fea
// SYMBOL: sub_109FEA
bool __fastcall sub_109FEA(int a1)
{
  return sub_108354(*(_DWORD *)(a1 + 8)) != 0;
}


// ======================================================================
// ADDR: 0x149a00
// SYMBOL: sub_149A00
float __fastcall sub_149A00(int a1)
{
  float result; // r0
  _BOOL4 v3; // r0
  unsigned int v4; // s0
  int v5; // r0
  float v6; // r2
  float v7; // r1
  int v8; // r0
  float v9; // r2
  float v10; // r1
  float v11; // s0
  float v12; // s2
  int v13; // s4
  int v14; // r1
  float v15; // s2
  int v16; // s4
  int v17; // r1
  float v18; // r3
  int v19; // [sp+3Ch] [bp-74h] BYREF
  int v20; // [sp+40h] [bp-70h]
  float v21; // [sp+44h] [bp-6Ch]
  int v22; // [sp+48h] [bp-68h] BYREF
  int v23; // [sp+4Ch] [bp-64h]
  int v24; // [sp+50h] [bp-60h]
  int v25; // [sp+54h] [bp-5Ch]
  arg6_F894A v26; // [sp+58h] [bp-58h]
  int v27; // [sp+60h] [bp-50h]
  int v28; // [sp+64h] [bp-4Ch]
  arg9_F894A v29; // [sp+68h] [bp-48h]
  int v30; // [sp+70h] [bp-40h]
  int v31; // [sp+74h] [bp-3Ch]
  float v32; // [sp+78h] [bp-38h]
  float v33; // [sp+7Ch] [bp-34h]
  float v34; // [sp+80h] [bp-30h]

  result = *(float *)(a1 + 296);
  if ( result != 0.0 )
  {
    sub_F8910(SLODWORD(result), &v22);
    v3 = sub_F8C70(*(_DWORD *)(a1 + 296));
    v4 = *(_DWORD *)(a1 + 40);
    if ( v3 )
    {
      v5 = sub_108700(*(float *)(a1 + 40), v32);
      v6 = *(float *)(a1 + 44);
      v7 = v33;
      *(_DWORD *)(a1 + 64) = v5;
      v8 = sub_108700(v6, v7);
      v9 = *(float *)(a1 + 48);
      v10 = v34;
      *(_DWORD *)(a1 + 68) = v8;
      result = COERCE_FLOAT(sub_108700(v9, v10));
      v11 = *(float *)(a1 + 68);
      *(float *)(a1 + 72) = result;
      if ( result > 0.00001 || v11 > 0.00001 )
      {
        if ( result > 1.0 || v11 > 2.0 )
        {
          v12 = *(float *)(a1 + 44);
          v13 = *(int *)(a1 + 48);
          v14 = *(_DWORD *)(a1 + 296);
          v32 = *(float *)(a1 + 40);
          v33 = v12;
          v34 = *(float *)&v13;
          return COERCE_FLOAT(
                   sub_F894A(
                     v14,
                     v22,
                     v23,
                     v24,
                     v25,
                     v26,
                     v27,
                     v28,
                     v29,
                     v30,
                     v31,
                     (arg12_F894A)__PAIR64__(LODWORD(v12), LODWORD(v32)),
                     v13));
        }
        else
        {
          sub_F8994(*(_DWORD *)(a1 + 296), &v19);
          if ( *(float *)(a1 + 64) > 0.00001 )
            *(float *)&v19 = *(float *)&v19 + (float)((float)(*(float *)(a1 + 40) - v32) * 0.1);
          if ( *(float *)(a1 + 68) > 0.00001 )
            *(float *)&v20 = *(float *)&v20 + (float)((float)(*(float *)(a1 + 44) - v33) * 0.1);
          if ( *(float *)(a1 + 72) <= 0.00001 )
          {
            v18 = v21;
          }
          else
          {
            v18 = v21 + (float)((float)(*(float *)(a1 + 48) - v34) * 0.1);
            v21 = v18;
          }
          return COERCE_FLOAT(sub_F89BC(*(_DWORD *)(a1 + 296), v19, v20, SLODWORD(v18)));
        }
      }
    }
    else
    {
      v15 = *(float *)(a1 + 44);
      v16 = *(int *)(a1 + 48);
      v17 = *(_DWORD *)(a1 + 296);
      v32 = *(float *)(a1 + 40);
      v33 = v15;
      v34 = *(float *)&v16;
      return COERCE_FLOAT(
               sub_F894A(
                 v17,
                 v22,
                 v23,
                 v24,
                 v25,
                 v26,
                 v27,
                 v28,
                 v29,
                 v30,
                 v31,
                 (arg12_F894A)__PAIR64__(LODWORD(v15), v4),
                 v16));
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x149c18
// SYMBOL: sub_149C18
_DWORD *__fastcall sub_149C18(_DWORD *a1, _DWORD *a2, _DWORD *a3, int *a4)
{
  int v7; // s0
  int v8; // s2
  int v9; // r0
  int v10; // r3

  sub_17D12C(
    a1 + 19,
    *a2,
    a2[1],
    a2[2],
    a2[3],
    a2[4],
    a2[5],
    a2[6],
    a2[7],
    a2[8],
    a2[9],
    a2[10],
    a2[11],
    a2[12],
    a2[13],
    a2[14]);
  a1[23] = *a3;
  v7 = *a4;
  a1[24] = a3[1];
  v8 = a4[1];
  a1[25] = a3[2];
  v9 = a1[1];
  v10 = a4[2];
  a1[26] = v7;
  a1[27] = v8;
  a1[28] = v10;
  return sub_F89BC(v9, v7, v8, v10);
}


// ======================================================================
// ADDR: 0x149cc4
// SYMBOL: sub_149CC4
float __fastcall sub_149CC4(int a1)
{
  float result; // r0
  _BOOL4 v3; // r0
  unsigned int v4; // s0
  int v5; // r0
  float v6; // r2
  float v7; // r1
  int v8; // r0
  float v9; // r2
  float v10; // r1
  float v11; // s0
  float v12; // s0
  float v13; // s2
  int v14; // s4
  int v15; // r0
  int *v16; // r3
  int v17; // r1
  float v18; // s2
  int v19; // s4
  float v20; // s0
  float v21; // [sp+3Ch] [bp-74h] BYREF
  float v22; // [sp+40h] [bp-70h]
  float v23; // [sp+44h] [bp-6Ch]
  int v24; // [sp+48h] [bp-68h] BYREF
  int v25; // [sp+4Ch] [bp-64h]
  int v26; // [sp+50h] [bp-60h]
  int v27; // [sp+54h] [bp-5Ch]
  arg6_F894A v28; // [sp+58h] [bp-58h]
  int v29; // [sp+60h] [bp-50h]
  int v30; // [sp+64h] [bp-4Ch]
  arg9_F894A v31; // [sp+68h] [bp-48h]
  int v32; // [sp+70h] [bp-40h]
  int v33; // [sp+74h] [bp-3Ch]
  float v34; // [sp+78h] [bp-38h]
  float v35; // [sp+7Ch] [bp-34h]
  float v36; // [sp+80h] [bp-30h]

  result = *(float *)(a1 + 4);
  if ( result != 0.0 )
  {
    sub_F8910(SLODWORD(result), &v24);
    v3 = sub_F8C70(*(_DWORD *)(a1 + 4));
    v4 = *(_DWORD *)(a1 + 92);
    if ( !v3 )
    {
      v17 = *(_DWORD *)(a1 + 4);
      v18 = *(float *)(a1 + 96);
      v19 = *(int *)(a1 + 100);
      v34 = *(float *)(a1 + 92);
      v35 = v18;
      v36 = *(float *)&v19;
      return COERCE_FLOAT(
               sub_F894A(
                 v17,
                 v24,
                 v25,
                 v26,
                 v27,
                 v28,
                 v29,
                 v30,
                 v31,
                 v32,
                 v33,
                 (arg12_F894A)__PAIR64__(LODWORD(v18), v4),
                 v19));
    }
    v5 = sub_108700(*(float *)(a1 + 92), v34);
    v6 = *(float *)(a1 + 96);
    v7 = v35;
    *(_DWORD *)(a1 + 64) = v5;
    v8 = sub_108700(v6, v7);
    v9 = *(float *)(a1 + 100);
    v10 = v36;
    *(_DWORD *)(a1 + 68) = v8;
    result = COERCE_FLOAT(sub_108700(v9, v10));
    v11 = *(float *)(a1 + 68);
    *(float *)(a1 + 72) = result;
    if ( result > 0.05 || v11 > 0.05 )
    {
      if ( sub_109864(*(_DWORD *)(a1 + 4)) == 4
        || sub_109864(*(_DWORD *)(a1 + 4)) == 5
        || sub_109864(*(_DWORD *)(a1 + 4)) == 3 )
      {
        v12 = 2.0;
      }
      else
      {
        v12 = 0.5;
      }
      if ( *(float *)(a1 + 64) > 8.0 || *(float *)(a1 + 72) > v12 )
      {
        v13 = *(float *)(a1 + 96);
        v14 = *(int *)(a1 + 100);
        v15 = *(_DWORD *)(a1 + 4);
        v34 = *(float *)(a1 + 92);
        v35 = v13;
        v36 = *(float *)&v14;
        sub_F894A(
          v15,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33,
          (arg12_F894A)__PAIR64__(LODWORD(v13), LODWORD(v34)),
          v14);
        v16 = (int *)(a1 + 104);
        return COERCE_FLOAT(sub_F89BC(*(_DWORD *)(a1 + 4), *v16, v16[1], v16[2]));
      }
      sub_F8994(*(_DWORD *)(a1 + 4), &v21);
      v20 = v21;
      if ( v21 > 0.05 )
      {
        v20 = v21 + (float)((float)(*(float *)(a1 + 92) - v34) * 0.06);
        v21 = v20;
      }
      if ( v22 > 0.05 )
        v22 = v22 + (float)((float)(*(float *)(a1 + 96) - v35) * 0.06);
      if ( v23 > 0.05 )
        v23 = v23 + (float)((float)(*(float *)(a1 + 100) - v36) * 0.06);
      if ( COERCE_FLOAT(sub_108700(v20, 0.0)) > 0.01
        || COERCE_FLOAT(sub_108700(v22, 0.0)) > 0.01
        || (result = COERCE_FLOAT(sub_108700(v23, 0.0)), result > 0.01) )
      {
        v16 = (int *)&v21;
        return COERCE_FLOAT(sub_F89BC(*(_DWORD *)(a1 + 4), *v16, v16[1], v16[2]));
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x149f48
// SYMBOL: sub_149F48
int __fastcall sub_149F48(int a1)
{
  int result; // r0
  __int64 v3; // d17
  int v4; // s0
  _QWORD v5[2]; // [sp+48h] [bp-90h] BYREF
  _QWORD v6[2]; // [sp+58h] [bp-80h] BYREF
  _QWORD v7[2]; // [sp+68h] [bp-70h] BYREF
  int v8; // [sp+7Ch] [bp-5Ch] BYREF
  int v9; // [sp+80h] [bp-58h]
  int v10; // [sp+84h] [bp-54h]
  int v11; // [sp+88h] [bp-50h]
  arg6_F894A v12; // [sp+8Ch] [bp-4Ch]
  int v13; // [sp+94h] [bp-44h]
  int v14; // [sp+98h] [bp-40h]
  arg9_F894A v15; // [sp+9Ch] [bp-3Ch]
  int v16; // [sp+A4h] [bp-34h]
  int v17; // [sp+A8h] [bp-30h]
  arg12_F894A v18; // [sp+ACh] [bp-2Ch]
  int v19; // [sp+B4h] [bp-24h]

  result = *(_DWORD *)(a1 + 296);
  if ( result )
  {
    sub_F8910(result, &v8);
    v7[0] = 1065353216LL;
    v7[1] = 0LL;
    v5[0] = 1065353216LL;
    v5[1] = 0LL;
    sub_17D12C(
      v7,
      v8,
      v9,
      v10,
      v11,
      v12.arr[0],
      v12.arr[1],
      v13,
      v14,
      v15.arr[0],
      v15.arr[1],
      v16,
      v17,
      v18.arr[0],
      v18.arr[1],
      v19);
    v3 = *(_QWORD *)(a1 + 142);
    v6[0] = *(_QWORD *)(a1 + 134);
    v6[1] = v3;
    sub_17D338(v5, v6, v7, 1061158912);
    sub_17D238(v5, &v8);
    sub_F894A(*(_DWORD *)(a1 + 296), v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19);
    *(float *)&v4 = atan2f(COERCE_FLOAT(v12.arr[0] ^ 0x80000000), *(float *)&v12.arr[1]) * 57.295776;
    if ( *(float *)&v4 > 360.0 )
      *(float *)&v4 = *(float *)&v4 + -360.0;
    if ( *(float *)&v4 < 0.0 )
      *(float *)&v4 = *(float *)&v4 + 360.0;
    return sub_104D60(*(_DWORD *)(a1 + 296), v4);
  }
  return result;
}


// ======================================================================
// ADDR: 0x14a0b8
// SYMBOL: sub_14A0B8
int __fastcall sub_14A0B8(int a1)
{
  int result; // r0
  int v3; // s0
  int v4; // r3
  int v5; // r1
  int v6; // r2
  int v7; // s0
  float v8; // [sp+48h] [bp-90h] BYREF
  float v9; // [sp+4Ch] [bp-8Ch]
  float v10; // [sp+50h] [bp-88h]
  int v11; // [sp+58h] [bp-80h] BYREF
  int v12; // [sp+5Ch] [bp-7Ch]
  int v13; // [sp+60h] [bp-78h]
  int v14; // [sp+64h] [bp-74h]
  arg6_F894A v15; // [sp+68h] [bp-70h]
  int v16; // [sp+70h] [bp-68h]
  int v17; // [sp+74h] [bp-64h]
  arg9_F894A v18; // [sp+78h] [bp-60h]
  int v19; // [sp+80h] [bp-58h]
  int v20; // [sp+84h] [bp-54h]
  arg12_F894A v21; // [sp+88h] [bp-50h]
  int v22; // [sp+90h] [bp-48h]
  _QWORD v23[2]; // [sp+98h] [bp-40h] BYREF
  _QWORD v24[6]; // [sp+A8h] [bp-30h] BYREF

  v24[0] = 1065353216LL;
  v24[1] = 0LL;
  v23[0] = 1065353216LL;
  v23[1] = 0LL;
  result = *(_DWORD *)(a1 + 4);
  v8 = 0.0;
  v9 = 0.0;
  v10 = 0.0;
  if ( result )
  {
    sub_F89E0(result, &v8);
    v3 = 1017370378;
    v4 = 1017370378;
    if ( v8 <= 0.02 )
    {
      if ( v8 >= -0.02 )
      {
        v5 = LODWORD(v8);
      }
      else
      {
        v5 = -1130113270;
        v8 = -0.02;
      }
    }
    else
    {
      v5 = 1017370378;
      v8 = 0.02;
    }
    v6 = 1017370378;
    if ( v9 <= 0.02 )
    {
      v3 = -1130113270;
      if ( v9 >= -0.02 )
      {
        v6 = LODWORD(v9);
LABEL_12:
        v7 = 1017370378;
        if ( v10 <= 0.02 )
        {
          v7 = -1130113270;
          if ( v10 >= -0.02 )
          {
            v4 = LODWORD(v10);
            goto LABEL_17;
          }
          v4 = -1130113270;
        }
        v10 = *(float *)&v7;
LABEL_17:
        sub_F8A08(*(_DWORD *)(a1 + 4), v5, v6, v4);
        sub_F8910(*(_DWORD *)(a1 + 4), &v11);
        sub_17D12C(
          v24,
          v11,
          v12,
          v13,
          v14,
          v15.arr[0],
          v15.arr[1],
          v16,
          v17,
          v18.arr[0],
          v18.arr[1],
          v19,
          v20,
          v21.arr[0],
          v21.arr[1],
          v22);
        sub_17D338(v23, a1 + 76, v24, 1061158912);
        sub_17D2F2(v23);
        sub_17D238(v23, &v11);
        return sub_F894A(*(_DWORD *)(a1 + 4), v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22);
      }
      v6 = -1130113270;
    }
    v9 = *(float *)&v3;
    goto LABEL_12;
  }
  return result;
}


// ======================================================================
