// ADDR: 0x166474
// SYMBOL: sub_166474
unsigned __int64 *__fastcall sub_166474(unsigned __int64 *result, int a2, int a3)
{
  int v4; // r2
  int v5; // r6
  int v6; // s16
  unsigned __int64 v7; // d17
  float v8; // s6
  float v9; // s4
  float v10; // s8
  float v11; // s2
  float v12; // s0
  float v13; // s10
  float v14; // s12
  float v15; // s14
  _BOOL4 v16; // r10
  int v17; // r9
  __int64 v18; // d16
  __int64 v19; // d17
  float v20; // s0
  int v21; // r0
  int v22; // r4
  float v23; // s0
  __int64 v24; // d17
  int v25; // r0
  float v26[2]; // [sp+10h] [bp-70h] BYREF
  float v27[2]; // [sp+18h] [bp-68h] BYREF
  unsigned __int64 v28; // [sp+20h] [bp-60h] BYREF
  unsigned __int64 v29; // [sp+28h] [bp-58h] BYREF
  __int64 v30; // [sp+30h] [bp-50h] BYREF
  int v31; // [sp+38h] [bp-48h]
  float v32; // [sp+3Ch] [bp-44h]

  v4 = dword_381B58;
  if ( *(_DWORD *)(dword_381B58 + 6840) == a2 && ((a3 & 4) != 0 || !*(_BYTE *)(dword_381B58 + 6934)) )
  {
    v5 = *(_DWORD *)(dword_381B58 + 6572);
    if ( !*(_BYTE *)(v5 + 320) )
    {
      if ( (a3 & 8) != 0 )
        v6 = 0;
      else
        v6 = *(_DWORD *)(dword_381B58 + 5464);
      v7 = result[1];
      v28 = *result;
      v29 = v7;
      v8 = *(float *)(v5 + 468);
      v9 = *(float *)(v5 + 464);
      v10 = v8;
      v11 = *(float *)(v5 + 472);
      v12 = *(float *)(v5 + 476);
      if ( *((float *)&v28 + 1) >= v8 )
        v10 = *((float *)&v28 + 1);
      v13 = *(float *)(v5 + 464);
      if ( *(float *)&v28 >= v9 )
        LODWORD(v13) = v28;
      v14 = *(float *)(v5 + 472);
      if ( *(float *)&v29 < v11 )
        LODWORD(v14) = v29;
      v15 = *(float *)(v5 + 476);
      if ( *((float *)&v29 + 1) < v12 )
        v15 = *((float *)&v29 + 1);
      v28 = __PAIR64__(LODWORD(v10), LODWORD(v13));
      v29 = __PAIR64__(LODWORD(v15), LODWORD(v14));
      if ( a3 << 31 )
      {
        *((float *)&v28 + 1) = v10 + -4.0;
        *((float *)&v29 + 1) = v15 + 4.0;
        *(float *)&v29 = v14 + 4.0;
        *(float *)&v28 = v13 + -4.0;
        v16 = (float)(v10 + -4.0) >= v8
           && (float)(v13 + -4.0) >= v9
           && (float)(v14 + 4.0) <= v11
           && (float)(v15 + 4.0) <= v12;
        if ( (float)(v10 + -4.0) < v8
          || (float)(v13 + -4.0) < v9
          || (float)(v14 + 4.0) > v11
          || (float)(v15 + 4.0) > v12 )
        {
          sub_172C12(
            *(_DWORD *)(v5 + 636),
            COERCE_INT(v13 + -4.0),
            COERCE_INT(v10 + -4.0),
            COERCE_INT(v14 + 4.0),
            v15 + 4.0,
            0);
          v4 = dword_381B58;
        }
        v17 = *(_DWORD *)(v5 + 636);
        v18 = *(_QWORD *)(v4 + 6276);
        v19 = *(_QWORD *)(v4 + 6284);
        v27[1] = (float)(v10 + -4.0) + 1.0;
        v27[0] = (float)(v13 + -4.0) + 1.0;
        v20 = *(float *)(v4 + 5400);
        v26[0] = (float)(v14 + 4.0) + -1.0;
        v26[1] = (float)(v15 + 4.0) + -1.0;
        v30 = v18;
        v31 = v19;
        v32 = v20 * *((float *)&v19 + 1);
        v21 = sub_165778((float *)&v30);
        sub_1740F8(v17, v27, v26, v21, v6, 15, 0x40000000);
        if ( !v16 )
          sub_172D44(*(_DWORD *)(v5 + 636));
      }
      result = (unsigned __int64 *)(a3 << 30);
      if ( (a3 & 2) != 0 )
      {
        v22 = *(_DWORD *)(v5 + 636);
        v23 = *(float *)(dword_381B58 + 5400);
        v24 = *(_QWORD *)(dword_381B58 + 6284);
        v30 = *(_QWORD *)(dword_381B58 + 6276);
        v31 = v24;
        v32 = v23 * *((float *)&v24 + 1);
        v25 = sub_165778((float *)&v30);
        return (unsigned __int64 *)sub_1740F8(v22, &v28, &v29, v25, v6, -1, 1065353216);
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x166eac
// SYMBOL: sub_166EAC
int __fastcall sub_166EAC(int result, int a2)
{
  int v2; // r3

  v2 = *(_DWORD *)(dword_381B58 + 6836);
  *(_DWORD *)(dword_381B58 + 6840) = result;
  *(_DWORD *)(v2 + 4 * a2 + 780) = result;
  return result;
}


// ======================================================================
// ADDR: 0x16702c
// SYMBOL: sub_16702C
int sub_16702C()
{
  int v0; // r2
  int v1; // r1
  int result; // r0

  v0 = *(_DWORD *)(dword_381B58 + 6572);
  v1 = *(_DWORD *)(v0 + 268);
  *(_WORD *)(dword_381B58 + 6623) = 257;
  result = v1 | 4;
  *(_DWORD *)(v0 + 268) = v1 | 4;
  return result;
}


// ======================================================================
// ADDR: 0x16eb84
// SYMBOL: sub_16EB84
int sub_16EB84()
{
  int result; // r0
  int v1; // r1

  result = dword_381B58 + 6572;
  v1 = *(_DWORD *)(*(_DWORD *)(dword_381B58 + 6572) + 264);
  if ( *(_DWORD *)(dword_381B58 + 6588) == v1 )
    *(_BYTE *)(dword_381B58 + 6592) = 1;
  if ( *(_DWORD *)(result + 36) == v1 )
    *(_BYTE *)(result + 49) = 1;
  return result;
}


// ======================================================================
// ADDR: 0x16ebb4
// SYMBOL: sub_16EBB4
int __fastcall sub_16EBB4(int a1, _QWORD *a2)
{
  _QWORD *v3; // r10
  int *v4; // r5
  int v5; // r1
  int v6; // r6
  int v7; // r0
  int (__fastcall *v8)(int, int); // r12
  void *v9; // r0
  const void *v10; // r1
  int v11; // r8
  int v12; // r0
  int v13; // r0
  int result; // r0
  __int64 v15; // d17
  _BYTE v16[20]; // [sp+8h] [bp-30h]

  *(_DWORD *)v16 = a1;
  v3 = (_QWORD *)(dword_381B58 + 16 * a1 + 5572);
  v4 = (int *)(dword_381B58 + 6776);
  v5 = *(_DWORD *)(dword_381B58 + 6776);
  *(_QWORD *)&v16[4] = *v3;
  *(_QWORD *)&v16[12] = *(_QWORD *)(dword_381B58 + 16 * a1 + 5580);
  if ( v5 == *(_DWORD *)(dword_381B58 + 6780) )
  {
    v6 = v5 + 1;
    if ( v5 )
      v7 = v5 + v5 / 2;
    else
      v7 = 8;
    if ( v7 > v6 )
      v6 = v7;
    if ( v5 < v6 )
    {
      v8 = off_2390AC;
      ++*(_DWORD *)(dword_381B58 + 880);
      v9 = (void *)v8(20 * v6, dword_381B60);
      v10 = (const void *)v4[2];
      v11 = (int)v9;
      if ( v10 )
      {
        j_memcpy(v9, v10, 20 * *v4);
        v12 = v4[2];
        if ( v12 && dword_381B58 )
          --*(_DWORD *)(dword_381B58 + 880);
        off_2390B0(v12, dword_381B60);
      }
      v5 = *v4;
      v4[1] = v6;
      v4[2] = v11;
    }
  }
  v13 = v4[2] + 20 * v5;
  *(_QWORD *)v13 = *(_QWORD *)v16;
  *(_QWORD *)(v13 + 8) = *(_QWORD *)&v16[8];
  *(_DWORD *)(v13 + 16) = *(_DWORD *)&v16[16];
  result = *v4 + 1;
  *v4 = result;
  v15 = a2[1];
  *v3 = *a2;
  v3[1] = v15;
  return result;
}


// ======================================================================
// ADDR: 0x16ee68
// SYMBOL: sub_16EE68
int __fastcall sub_16EE68(int result)
{
  int v1; // lr
  int *v2; // r2
  int v3; // r3
  _QWORD *v4; // r1
  int v5; // r3
  __int64 v6; // d16
  __int64 v7; // d17
  _QWORD *v8; // r1

  if ( result >= 1 )
  {
    ++result;
    v1 = dword_381B58;
    v2 = (int *)(dword_381B58 + 6776);
    v3 = *(_DWORD *)(dword_381B58 + 6776);
    do
    {
      --result;
      v4 = (_QWORD *)(v2[2] + 20 * v3);
      v5 = *((_DWORD *)v4 - 5);
      v4 -= 2;
      v6 = *v4;
      v7 = v4[1];
      v8 = (_QWORD *)(v1 + 16 * v5 + 5572);
      *v8 = v6;
      v8[1] = v7;
      v3 = *v2 - 1;
      *v2 = v3;
    }
    while ( (unsigned int)result > 1 );
  }
  return result;
}


// ======================================================================
// ADDR: 0x16fe88
// SYMBOL: sub_16FE88
float *__fastcall sub_16FE88(float *result)
{
  int v1; // r1
  int v2; // r2
  float v3; // s2
  int v4; // r3
  float v5; // s0
  float v6; // s2
  int v7; // r2

  v1 = *(_DWORD *)(dword_381B58 + 6572);
  v2 = *(_DWORD *)(v1 + 448);
  v3 = *(float *)(v1 + 556) - *(float *)(v1 + 16);
  *result = *(float *)(v1 + 552) - *(float *)(v1 + 12);
  result[1] = v3;
  if ( v2 )
  {
    v4 = *(_DWORD *)(v2 + 12);
    v5 = *(float *)(v2 + 20);
    v6 = *(float *)(v2 + 24);
    v7 = *(_DWORD *)(v2 + 68);
    if ( v4 > -2 )
      ++v4;
    *result = (float)(v5 + (float)((float)(v6 - v5) * *(float *)(v7 + 28 * v4))) - *(float *)(v1 + 60);
  }
  return result;
}


// ======================================================================
// ADDR: 0x16fef4
// SYMBOL: sub_16FEF4
float *__fastcall sub_16FEF4(float *result)
{
  float *v1; // r1
  float v2; // s2

  v1 = *(float **)(dword_381B58 + 6572);
  v2 = v1[139] - v1[4];
  *result = v1[138] - v1[3];
  result[1] = v2;
  return result;
}


// ======================================================================
// ADDR: 0x1703dc
// SYMBOL: sub_1703DC
int sub_1703DC()
{
  int result; // r0
  int v1; // r1
  int v2; // r4
  int v3; // r12
  int v4; // r1
  int v5; // r2
  int *v6; // r1

  result = dword_381B58;
  v1 = *(_DWORD *)(dword_381B58 + 6824);
  if ( v1 >= 1 )
  {
    v2 = dword_381B58 + 6812;
    result = *(_DWORD *)(dword_381B58 + 6812);
    if ( v1 <= result )
    {
      result = v1 - 1;
      v3 = *(_DWORD *)(dword_381B58 + 6820);
      if ( *(_DWORD *)(*(_DWORD *)(dword_381B58 + 6832) + 36 * (v1 - 1)) == *(_DWORD *)(v3 + 36 * (v1 - 1)) )
      {
        if ( (unsigned int)v1 < 2 )
        {
LABEL_11:
          result = 0;
        }
        else
        {
          v4 = v3 + 36 * (v1 - 1);
          v5 = *(_DWORD *)(v4 + 4);
          v6 = (int *)(v4 - 32);
          while ( v5 )
          {
            if ( (*(_BYTE *)(v5 + 11) & 0x10) == 0 )
              break;
            v5 = *v6;
            if ( *v6 )
            {
              if ( (*(_BYTE *)(v5 + 11) & 8) != 0 )
                break;
            }
            --result;
            v6 -= 9;
            if ( !result )
              goto LABEL_11;
          }
        }
        sub_1702CC(result, 1);
        result = *(_DWORD *)(v2 + 24);
        if ( result )
          *(_BYTE *)(result + 320) = 1;
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x170ad8
// SYMBOL: sub_170AD8
int sub_170AD8()
{
  int v0; // r0
  int v1; // r4

  v0 = *(_DWORD *)(dword_381B58 + 6572);
  v1 = *(_DWORD *)(v0 + 448);
  sub_174F42(*(_DWORD *)(v0 + 636) + 100, *(_DWORD *)(v0 + 636), 0);
  return sub_16DDF0((int *)(v1 + 44), v1 + 52, 0);
}


// ======================================================================
// ADDR: 0x170b10
// SYMBOL: sub_170B10
int sub_170B10()
{
  sub_174F42(
    *(_DWORD *)(*(_DWORD *)(dword_381B58 + 6572) + 636) + 100,
    *(_DWORD *)(*(_DWORD *)(dword_381B58 + 6572) + 636),
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_381B58 + 6572) + 448) + 12) + 1);
  return sub_16DE44();
}


// ======================================================================
