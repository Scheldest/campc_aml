// ADDR: 0x74b78
// SYMBOL: sub_74B78
int __fastcall sub_74B78(int a1)
{
  _BYTE v3[276]; // [sp+20h] [bp-128h] BYREF
  int v4; // [sp+134h] [bp-14h]

  if ( (unsigned int)(sub_68858() - dword_1A44F0) >= 0x65 )
  {
    dword_1A44F0 = sub_68858();
    sub_86B90(v3);
    (*(void (__fastcall **)(_DWORD, void *, _BYTE *, int, int, _DWORD, _DWORD, int, int, int, _DWORD))(**(_DWORD **)(a1 + 528) + 108))(
      *(_DWORD *)(a1 + 528),
      &unk_116E20,
      v3,
      1,
      8,
      0,
      0,
      -1,
      0xFFFF,
      0xFFFF,
      0);
    sub_86BF8(v3);
  }
  return v4;
}


// ======================================================================
// ADDR: 0x74c80
// SYMBOL: sub_74C80
int sub_74C80(int a1, int a2, int a3, ...)
{
  int v4; // [sp+8h] [bp-Ch]
  va_list va; // [sp+1Ch] [bp+8h] BYREF

  va_start(va, a3);
  _vsprintf_chk(a1, 0, 11, "%d", va);
  return v4;
}


// ======================================================================
// ADDR: 0x75206
// SYMBOL: sub_75206
char *__fastcall sub_75206(_DWORD *a1, _DWORD *a2)
{
  int v3; // r0
  char *result; // r0
  unsigned int v5; // r9
  char *v6; // r10
  char *v7; // r6
  char *v8; // r5
  unsigned int v9; // r11
  char *v10; // r4
  char *v11; // r5
  char *v12; // r6
  unsigned int v13; // r9
  char *v14; // r0
  unsigned int v15; // r0
  unsigned int v16; // r2
  bool v17; // cf
  char *v18; // r1
  unsigned int v19; // r3
  __int64 v20; // d16
  __int64 v21; // d17
  char v22; // t1
  char *v23; // r0
  bool v24; // cf
  char *v25; // r1
  unsigned int v26; // r3
  __int64 v27; // d16
  __int64 v28; // d17
  char v29; // t1

  v3 = a2[12];
  if ( (v3 & 0x10) != 0 )
  {
    v5 = a2[11];
    v6 = (char *)a2[6];
    v7 = (char *)v5;
    if ( v5 < (unsigned int)v6 )
    {
      a2[11] = v6;
      v7 = v6;
    }
    v8 = (char *)a2[5];
    v9 = v7 - v8;
    if ( (unsigned int)(v7 - v8) < 0xFFFFFFF0 )
    {
      if ( v9 > 0xA )
      {
        v14 = (char *)operator new((v9 + 16) & 0xFFFFFFF0);
        *a1 = ((v9 + 16) & 0xFFFFFFF0) + 1;
        a1[1] = v9;
        a1[2] = v14;
        v10 = v14;
        if ( v8 == v7 )
          goto LABEL_41;
      }
      else
      {
        *(_BYTE *)a1 = 2 * v9;
        v10 = (char *)a1 + 1;
        if ( v8 == v7 )
          goto LABEL_41;
      }
      v15 = v5;
      if ( (unsigned int)v6 > v5 )
        v15 = (unsigned int)v6;
      v16 = v15 - (_DWORD)v8;
      if ( v15 - (unsigned int)v8 < 0x10 )
        goto LABEL_28;
      if ( (unsigned int)v6 > v5 )
        v5 = (unsigned int)v6;
      v17 = (unsigned int)v10 >= v5;
      if ( (unsigned int)v10 < v5 )
        v17 = v8 >= &v10[v5 - (_DWORD)v8];
      if ( v17 )
      {
        result = &v10[v16 & 0xFFFFFFF0];
        v18 = &v8[v16 & 0xFFFFFFF0];
        v19 = v16 & 0xFFFFFFF0;
        do
        {
          v20 = *(_QWORD *)v8;
          v21 = *((_QWORD *)v8 + 1);
          v8 += 16;
          v19 -= 16;
          *(_QWORD *)v10 = v20;
          *((_QWORD *)v10 + 1) = v21;
          v10 += 16;
        }
        while ( v19 );
        if ( v16 == (v16 & 0xFFFFFFF0) )
          goto LABEL_44;
      }
      else
      {
LABEL_28:
        v18 = v8;
        result = v10;
      }
      do
      {
        v22 = *v18++;
        *result++ = v22;
      }
      while ( v18 != v7 );
      goto LABEL_44;
    }
LABEL_45:
    std::__basic_string_common<true>::__throw_length_error(a1);
  }
  if ( (v3 & 8) == 0 )
  {
    result = 0;
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
    return result;
  }
  v11 = (char *)a2[2];
  v12 = (char *)a2[4];
  v13 = v12 - v11;
  if ( (unsigned int)(v12 - v11) >= 0xFFFFFFF0 )
    goto LABEL_45;
  if ( v13 <= 0xA )
  {
    *(_BYTE *)a1 = 2 * v13;
    v10 = (char *)a1 + 1;
    if ( v11 == v12 )
      goto LABEL_41;
    goto LABEL_32;
  }
  v23 = (char *)operator new((v13 + 16) & 0xFFFFFFF0);
  *a1 = ((v13 + 16) & 0xFFFFFFF0) + 1;
  a1[1] = v13;
  a1[2] = v23;
  v10 = v23;
  if ( v11 == v12 )
  {
LABEL_41:
    result = v10;
    goto LABEL_44;
  }
  if ( v13 < 0x10 )
    goto LABEL_42;
LABEL_32:
  v24 = v10 >= v12;
  if ( v10 < v12 )
    v24 = v11 >= &v10[v13];
  if ( v24 )
  {
    result = &v10[v13 & 0xFFFFFFF0];
    v25 = &v11[v13 & 0xFFFFFFF0];
    v26 = v13 & 0xFFFFFFF0;
    do
    {
      v27 = *(_QWORD *)v11;
      v28 = *((_QWORD *)v11 + 1);
      v11 += 16;
      v26 -= 16;
      *(_QWORD *)v10 = v27;
      *((_QWORD *)v10 + 1) = v28;
      v10 += 16;
    }
    while ( v26 );
    if ( v13 == (v13 & 0xFFFFFFF0) )
      goto LABEL_44;
  }
  else
  {
LABEL_42:
    v25 = v11;
    result = v10;
  }
  do
  {
    v29 = *v25++;
    *result++ = v29;
  }
  while ( v25 != v12 );
LABEL_44:
  *result = 0;
  return result;
}


// ======================================================================
// ADDR: 0x87f98
// SYMBOL: sub_87F98
_BYTE *__fastcall sub_87F98(_BYTE *result, int a2, unsigned int a3)
{
  unsigned int v3; // r12
  char v4; // r4
  int v5; // lr
  int v6; // r4
  int v7; // r3
  int v8; // r3
  unsigned int v9; // r4
  unsigned int v10; // r4

  v3 = 0;
LABEL_2:
  v4 = a3;
  if ( a3 )
    v4 = 1;
  v5 = (unsigned __int8)v4 & (v3 >= a3);
  v6 = a2 + 1;
  while ( 1 )
  {
    v7 = *(unsigned __int8 *)(v6 - 1);
    a2 = v6;
    if ( (v7 == 0) | v5 )
      break;
    if ( (v7 & 0x80) == 0 )
    {
      *result++ = v7;
      ++v3;
      goto LABEL_2;
    }
    v8 = v7 & 0x7F;
    ++v6;
    if ( v8 != 24 )
    {
      v9 = dword_52B88[v8];
      *(_WORD *)result = v9;
      v10 = HIWORD(v9);
      if ( v10 )
      {
        result[2] = v10;
        result += 3;
      }
      else
      {
        result += 2;
      }
      ++v3;
      goto LABEL_2;
    }
  }
  *result = 0;
  return result;
}


// ======================================================================
// ADDR: 0x8b214
// SYMBOL: sub_8B214
float __fastcall sub_8B214(float result, float a2)
{
  int v2; // r12
  int v3; // r2
  float v4; // s0
  float v5; // s2
  int v6; // r12

  v2 = dword_1ACF68;
  v3 = *(_DWORD *)(dword_1ACF68 + 6572);
  *(_BYTE *)(v3 + 124) = 1;
  if ( !*(_BYTE *)(v3 + 127) )
  {
    v4 = a2;
    if ( result == 0.0 )
    {
      if ( a2 < 0.0 )
        v4 = *(float *)(v2 + 5472);
      v5 = *(float *)(v3 + 208);
    }
    else
    {
      if ( a2 < 0.0 )
        v4 = 0.0;
      v5 = *(float *)(v3 + 440) + (float)(v4 + (float)((float)(*(float *)(v3 + 12) - *(float *)(v3 + 80)) + result));
      v4 = *(float *)(v3 + 444);
    }
    v6 = *(_DWORD *)(v3 + 212);
    result = *(float *)(v3 + 252);
    *(_QWORD *)(v3 + 232) = *(_QWORD *)(v3 + 240);
    *(_DWORD *)(v3 + 204) = v6;
    *(float *)(v3 + 248) = result;
    *(float *)(v3 + 200) = v4 + v5;
  }
  return result;
}


// ======================================================================
// ADDR: 0x8b850
// SYMBOL: sub_8B850
bool __fastcall sub_8B850(char a1)
{
  int v1; // r1
  int v2; // lr
  int v3; // r12
  bool v4; // zf
  int v5; // r2
  bool v6; // zf
  bool v7; // zf
  int v9; // r0
  int v10; // r2

  v1 = *(_DWORD *)(dword_1ACF68 + 6572);
  if ( *(_BYTE *)(dword_1ACF68 + 6935) && !*(_BYTE *)(dword_1ACF68 + 6934) )
  {
    v9 = *(_DWORD *)(dword_1ACF68 + 6840);
    if ( v9 )
      return v9 == *(_DWORD *)(v1 + 264);
  }
  else if ( *(unsigned __int8 *)(v1 + 268) << 31 )
  {
    v2 = *(_DWORD *)(v1 + 764);
    if ( (a1 & 0x40) != 0 || *(_DWORD *)(dword_1ACF68 + 6580) == v2 )
    {
      if ( (a1 & 0x20) != 0 )
        goto LABEL_11;
      v3 = *(_DWORD *)(dword_1ACF68 + 6608);
      v4 = v3 == 0;
      if ( v3 )
        v4 = v3 == *(_DWORD *)(v1 + 264);
      if ( v4 || *(_BYTE *)(dword_1ACF68 + 6621) || v3 == *(_DWORD *)(v1 + 72) )
      {
LABEL_11:
        v5 = *(_DWORD *)(dword_1ACF68 + 6836);
        v6 = v5 == 0;
        if ( v5 )
        {
          v5 = *(_DWORD *)(v5 + 764);
          v6 = v5 == 0;
        }
        if ( v6 )
          goto LABEL_34;
        v7 = *(_BYTE *)(v5 + 123) == 0;
        if ( *(_BYTE *)(v5 + 123) )
          v7 = v5 == v2;
        if ( v7 || (v10 = *(_DWORD *)(v5 + 8), (v10 & 0x8000000) == 0) && ((a1 & 8) != 0 || (v10 & 0x4000000) == 0) )
        {
LABEL_34:
          if ( (a1 < 0 || (*(_DWORD *)(v1 + 364) & 4) == 0)
            && (*(_DWORD *)(v1 + 264) != *(_DWORD *)(v1 + 72) || !*(_BYTE *)(v1 + 124)) )
          {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}


// ======================================================================
// ADDR: 0x8fcd4
// SYMBOL: sub_8FCD4
int __fastcall sub_8FCD4(_QWORD *a1, int a2)
{
  int v2; // r2
  int result; // r0

  v2 = dword_1ACF68;
  *(_DWORD *)(dword_1ACF68 + 6672) |= 2u;
  *(_QWORD *)(v2 + 6704) = *a1;
  result = v2 + 6672;
  if ( !a2 )
    a2 = 1;
  *(_DWORD *)(v2 + 6680) = a2;
  return result;
}


// ======================================================================
// ADDR: 0x9559c
// SYMBOL: sub_9559C
int __fastcall sub_9559C(int a1)
{
  return *(unsigned __int8 *)(a1 + dword_1ACF68 + 989);
}


// ======================================================================
// ADDR: 0x9565c
// SYMBOL: sub_9565C
int __fastcall sub_9565C(_BYTE *a1)
{
  int v1; // r8
  int v2; // r4
  int v3; // r6
  int v4; // r5
  int v5; // r9
  unsigned __int8 *v6; // r6
  unsigned int v7; // r4
  int v8; // r10
  bool v9; // zf
  int v10; // r1

  v1 = dword_1ACF68 + 6572;
  v2 = *(_DWORD *)(dword_1ACF68 + 6572);
  v3 = *(_DWORD *)(*(_DWORD *)(v2 + 460) + 4 * *(_DWORD *)(v2 + 452) - 4);
  *(_BYTE *)(v2 + 124) = 1;
  v4 = (unsigned __int8)*a1;
  v5 = ~v3;
  if ( *a1 )
  {
    v6 = a1 + 1;
    v7 = v5;
    do
    {
      v8 = v4;
      v4 = *v6;
      v9 = v8 == 35;
      if ( v8 == 35 )
        v9 = v4 == 35;
      if ( v9 )
      {
        v4 = 35;
        if ( v6[1] == 35 )
          v7 = v5;
      }
      ++v6;
      v7 = dword_52D88[(unsigned __int8)v7 ^ v8] ^ (v7 >> 8);
    }
    while ( v4 );
  }
  else
  {
    v7 = ~v3;
  }
  v10 = ~v7;
  if ( *(_DWORD *)(v1 + 36) == ~v7 )
    *(_DWORD *)(v1 + 40) = v10;
  if ( *(_DWORD *)(v1 + 80) == v10 )
    *(_BYTE *)(v1 + 84) = 1;
  return sub_95710(a1);
}


// ======================================================================
// ADDR: 0x959e0
// SYMBOL: sub_959E0
int sub_959E0()
{
  int v0; // r6
  _DWORD *v2; // r8
  __int64 v3; // kr00_8
  int v4; // r0
  float v5; // s20
  float v6; // s16
  unsigned __int64 v7; // kr08_8
  int v8; // r0
  float32x4_t v9; // q4
  bool v10; // zf
  int v11; // r0
  bool v12; // zf
  int v13; // r1
  float32x4_t v14; // q8
  int v15; // r1
  __int64 v16; // d17
  int v17; // r0
  float *v18; // r2
  float v19; // s0
  float v20; // s6
  float v21; // s4
  float *v22; // r2
  float v23; // s10
  float v24; // s6
  float32x4_t v25; // [sp+0h] [bp-60h] BYREF
  unsigned __int64 v26; // [sp+10h] [bp-50h] BYREF
  __int64 v27; // [sp+18h] [bp-48h]
  float v28[3]; // [sp+20h] [bp-40h] BYREF
  int v29; // [sp+2Ch] [bp-34h]

  v0 = *(_DWORD *)(dword_1ACF68 + 6572);
  if ( *(__int16 *)(v0 + 132) >= 2 )
    return sub_94DC0();
  v2 = (_DWORD *)(dword_1ACF68 + 6572);
  v3 = *(_QWORD *)(v0 + 20);
  v4 = *(_DWORD *)(v0 + 156);
  *(_QWORD *)v28 = v3;
  v5 = *(float *)&v3;
  if ( v4 << 31 )
  {
    if ( *(float *)&v3 <= 4.0 )
      v5 = 4.0;
    v28[0] = v5;
  }
  v6 = *((float *)&v3 + 1);
  if ( (v4 & 2) != 0 )
  {
    if ( *((float *)&v3 + 1) <= 4.0 )
      v6 = 4.0;
    v28[1] = v6;
  }
  sub_94DC0();
  v9.n128_f32[3] = *(float *)(*v2 + 204) + v6;
  v26 = *(_QWORD *)(*v2 + 200);
  v7 = v26;
  v9.n128_f32[2] = *(float *)&v26 + v5;
  *((float *)&v27 + 1) = v9.n128_f32[3];
  *(float *)&v27 = *(float *)&v26 + v5;
  sub_8B104((unsigned int)v28);
  v8 = *(_DWORD *)(v0 + 312);
  v9.n128_u64[0] = v26;
  v10 = v8 == 0;
  if ( !v8 )
    v10 = *(_BYTE *)(v0 + 321) == 0;
  if ( !v10 && (*(_BYTE *)(v0 + 10) & 0x80) == 0 )
  {
    sub_8B314((float *)&v26, *(_DWORD *)(v0 + 76), 0);
    sub_8A1F8(&v26, *(_DWORD *)(v0 + 76), 1);
    v11 = *(_DWORD *)(v0 + 312);
    v12 = v11 == 0;
    if ( !v11 )
      v12 = v0 == v2[66];
    if ( v12 )
    {
      v13 = v2[67];
      v14.n128_u64[0] = 0xC0000000C0000000LL;
      v14.n128_u64[1] = 0x4000000040000000LL;
      v25 = vaddq_f32(v9, v14);
      sub_8A1F8(v25.n128_u64, v13, 2);
    }
    return v29;
  }
  v15 = dword_1ACF68;
  v16 = v27;
  v17 = *(_DWORD *)(dword_1ACF68 + 6572);
  *(_QWORD *)(v17 + 272) = v26;
  *(_QWORD *)(v17 + 280) = v16;
  v18 = *(float **)(v15 + 6572);
  *(_DWORD *)(v15 + 6760) = 0;
  *(_DWORD *)(v17 + 264) = 0;
  *(_DWORD *)(v17 + 268) = 0;
  v19 = v18[133];
  if ( v19 < v9.n128_f32[3] && v18[135] > *((float *)&v7 + 1) )
  {
    v20 = v18[132];
    if ( v20 < v9.n128_f32[2] )
    {
      v21 = v18[134];
      if ( v21 > *(float *)&v7 )
      {
LABEL_26:
        v22 = (float *)(v15 + 5488);
        if ( v20 <= *(float *)&v7 )
          v20 = *(float *)&v7;
        v23 = v20 - *v22;
        v24 = *(float *)(v15 + 224);
        if ( v24 >= v23 )
        {
          if ( v19 <= *((float *)&v7 + 1) )
            v19 = *((float *)&v7 + 1);
          if ( v9.n128_f32[2] < v21 )
            v21 = v9.n128_f32[2];
          if ( *(float *)(v15 + 228) >= (float)(v19 - *(float *)(v15 + 5492)) && v24 < (float)(v21 + *v22) )
            *(_DWORD *)(v17 + 268) = 1;
        }
        return v29;
      }
    }
  }
  if ( *(_BYTE *)(v15 + 11552) )
  {
    v20 = v18[132];
    v21 = v18[134];
    goto LABEL_26;
  }
  return v29;
}


// ======================================================================
// ADDR: 0x96058
// SYMBOL: sub_96058
int __fastcall sub_96058(int a1, _QWORD *a2)
{
  int v3; // r3
  int v4; // r1
  int *v5; // r5
  _QWORD *v6; // r10
  int v7; // r4
  int v8; // r0
  int (__fastcall *v9)(int, int); // r6
  void *v10; // r0
  const void *v11; // r1
  int v12; // r8
  int v13; // r1
  int v14; // r0
  bool v15; // zf
  int v16; // r1
  __int64 v18; // [sp+8h] [bp-30h]
  int v19; // [sp+10h] [bp-28h]
  int v20; // [sp+18h] [bp-20h]

  if ( 0x606432u >> a1 << 31 )
  {
    v3 = dword_536AC[3 * a1 + 2] + dword_1ACF68;
    v4 = *(_DWORD *)(dword_1ACF68 + 6788);
    v5 = (int *)(dword_1ACF68 + 6788);
    v6 = (_QWORD *)(v3 + 5400);
    v19 = *(_DWORD *)(v3 + 5404);
    LODWORD(v18) = a1;
    HIDWORD(v18) = *(_DWORD *)(v3 + 5400);
    if ( v4 == *(_DWORD *)(dword_1ACF68 + 6792) )
    {
      v7 = v4 + 1;
      if ( v4 )
        v8 = v4 + v4 / 2;
      else
        v8 = 8;
      if ( v8 > v7 )
        v7 = v8;
      if ( v4 < v7 )
      {
        v9 = off_117248;
        ++*(_DWORD *)(dword_1ACF68 + 880);
        v10 = (void *)v9(12 * v7, dword_1ACF70);
        v11 = (const void *)v5[2];
        v12 = (int)v10;
        if ( v11 )
        {
          j_memcpy(v10, v11, 12 * *v5);
          v14 = v5[2];
          v15 = v14 == 0;
          if ( v14 )
          {
            v13 = dword_1ACF68;
            v15 = dword_1ACF68 == 0;
          }
          if ( !v15 )
            --*(_DWORD *)(v13 + 880);
          off_11724C(v14, dword_1ACF70);
        }
        v4 = *v5;
        v5[1] = v7;
        v5[2] = v12;
      }
    }
    v16 = v5[2] + 12 * v4;
    *(_QWORD *)v16 = v18;
    *(_DWORD *)(v16 + 8) = v19;
    ++*v5;
    *v6 = *a2;
  }
  return v20;
}


// ======================================================================
// ADDR: 0x9618c
// SYMBOL: sub_9618C
int __fastcall sub_9618C(int result)
{
  int v1; // lr
  _DWORD *v2; // r10
  int v3; // r3
  int v4; // r12
  int v5; // r1
  _DWORD *v6; // r4
  _DWORD *v7; // r2
  _DWORD *v8; // r6

  if ( result >= 1 )
  {
    ++result;
    v1 = dword_1ACF68 + 5400;
    v2 = (_DWORD *)(dword_1ACF68 + 6788);
    v3 = *(_DWORD *)(dword_1ACF68 + 6788);
    v4 = *(_DWORD *)(dword_1ACF68 + 6796);
    v5 = v3 - 1;
    v6 = (_DWORD *)(v4 + 12 * (v3 - 1));
    do
    {
      --v3;
      v8 = (_DWORD *)(dword_536AC[3 * *v6 + 2] + v1);
      if ( 0x1F9BCDu >> *v6 << 31 )
      {
        v7 = v6 + 1;
      }
      else
      {
        if ( !(0x606432u >> *v6 << 31) )
          goto LABEL_5;
        *v8++ = v6[1];
        v7 = (_DWORD *)(v4 + 12 * v3 + 8);
      }
      *v8 = *v7;
LABEL_5:
      *v2 = v5;
      --result;
      --v5;
      v6 -= 3;
    }
    while ( result > 1 );
  }
  return result;
}


// ======================================================================
// ADDR: 0x96b84
// SYMBOL: sub_96B84
int sub_96B84()
{
  int v0; // r4
  int v1; // r9
  int v2; // r0
  int v3; // r8
  _DWORD *v4; // r0
  int v5; // r1
  int v6; // r1
  __int64 v7; // d17
  float v8; // s0
  int v9; // r1
  bool v10; // r0
  float v11; // s18
  float v12; // s20
  int v13; // r12
  int v14; // r4
  int v15; // r2
  int v16; // r11
  int v17; // r1
  float *v18; // r0
  float v19; // s4
  float v20; // s0
  float v21; // s2
  float v22; // s6
  float v23; // s8
  float v24; // s10
  float v25; // s12
  float v26; // s14
  int v27; // s2
  int v28; // r0
  int v29; // r3
  int v30; // r1
  int v31; // r10
  int v32; // r0
  float v33; // s0
  float v34; // s2
  float v35; // s4
  float v36; // s0
  float v37; // s2
  float v38; // s19
  float v39; // s2
  int v40; // r5
  int v41; // r1
  int v42; // r0
  int v43; // r2
  _BOOL4 v44; // r0
  int v45; // r1
  int v46; // r0
  _DWORD *v47; // r2
  int v48; // r0
  int v49; // r2
  float v50; // s0
  float v51; // s2
  float *v52; // r3
  int v53; // r0
  int v54; // r5
  int v55; // r2
  float v56; // s2
  float v57; // s0
  float v58; // s4
  float v59; // s6
  float v60; // s0
  float v61; // s0
  float v62; // s2
  int v64; // [sp+8h] [bp-98h]
  int v65; // [sp+Ch] [bp-94h]
  int v66; // [sp+10h] [bp-90h]
  float v67[2]; // [sp+18h] [bp-88h] BYREF
  float v68[2]; // [sp+20h] [bp-80h] BYREF
  __int16 v69; // [sp+2Ah] [bp-76h] BYREF
  float v70[29]; // [sp+2Ch] [bp-74h] BYREF

  v0 = dword_1ACF68;
  v1 = *(_DWORD *)(dword_1ACF68 + 6572);
  v2 = *(_DWORD *)(v1 + 388);
  v3 = *(_DWORD *)(v1 + 448);
  *(_BYTE *)(v1 + 124) = 1;
  *(_DWORD *)(v1 + 388) = v2 - 1;
  if ( v2 == 1 )
    v4 = (_DWORD *)(v1 + 564);
  else
    v4 = (_DWORD *)(*(_DWORD *)(v1 + 396) + 4 * v2 - 8);
  v5 = *(_DWORD *)(v3 + 16);
  *(_DWORD *)(v1 + 368) = *v4;
  if ( v5 >= 2 )
  {
    sub_9C12E(*(_DWORD *)(v1 + 636));
    v6 = *(_DWORD *)(v1 + 636);
    v7 = *(_QWORD *)(*(_DWORD *)(v6 + 72) + 16 * *(_DWORD *)(v6 + 64) - 8);
    *(_QWORD *)(v1 + 528) = *(_QWORD *)(*(_DWORD *)(v6 + 72) + 16 * *(_DWORD *)(v6 + 64) - 16);
    *(_QWORD *)(v1 + 536) = v7;
    sub_9E2F4(v6 + 100);
  }
  v8 = *(float *)(v1 + 204);
  if ( *(float *)(v3 + 32) >= v8 )
    v8 = *(float *)(v3 + 32);
  v9 = *(_DWORD *)(v3 + 4);
  *(float *)(v3 + 32) = v8;
  *(float *)(v1 + 204) = v8;
  if ( (v9 & 0x10) == 0 )
    *(_DWORD *)(v1 + 224) = *(_DWORD *)(v3 + 40);
  v10 = 0;
  if ( !(v9 << 31) )
  {
    if ( *(_BYTE *)(v1 + 127) )
    {
      v10 = 0;
      goto LABEL_80;
    }
    v11 = *(float *)(v1 + 532);
    v10 = 0;
    v12 = *(float *)(v1 + 540);
    if ( *(float *)(v3 + 36) >= v11 )
      v11 = *(float *)(v3 + 36);
    if ( v8 < v12 )
      v12 = v8;
    v13 = *(_DWORD *)(v3 + 16);
    if ( v13 >= 2 )
    {
      v64 = v0 + 6572;
      v66 = v9 & 2;
      v65 = -1;
      v14 = 0;
      v15 = dword_1ACF68;
      v16 = 1;
      while ( 1 )
      {
        v29 = *(_DWORD *)(v15 + 6572);
        v30 = *(_DWORD *)v3 + v16;
        v31 = *(_DWORD *)(v3 + 68);
        v32 = *(_DWORD *)(v29 + 448);
        v33 = *(float *)(v32 + 20);
        v34 = *(float *)(v32 + 24);
        v35 = *(float *)(*(_DWORD *)(v32 + 68) + v14 + 28);
        v70[1] = v11;
        v36 = v33 + (float)((float)(v34 - v33) * v35);
        v37 = *(float *)(v1 + 12);
        v70[3] = v12;
        v38 = v37 + v36;
        v39 = (float)(v37 + v36) + 4.0;
        v70[2] = v39;
        v70[0] = v38 + -4.0;
        v40 = *(_DWORD *)(v15 + 6608);
        if ( v30 == v40 )
          *(_DWORD *)(v15 + 6612) = v30;
        if ( v30 == *(_DWORD *)(v15 + 6652) )
          *(_BYTE *)(v15 + 6656) = 1;
        if ( (*(float *)(v29 + 532) >= v12
           || *(float *)(v29 + 540) <= v11
           || *(float *)(v29 + 528) >= v39
           || *(float *)(v29 + 536) <= (float)(v38 + -4.0))
          && (!v30 || v30 != v40)
          && !*(_BYTE *)(v15 + 11552) )
        {
          goto LABEL_39;
        }
        v69 = 0;
        if ( v66 )
          break;
        sub_A634C(v70, v30, (char *)&v69 + 1, &v69, 0);
        v41 = HIBYTE(v69);
        v42 = (unsigned __int8)v69;
        if ( v69 )
          *(_DWORD *)(v64 + 872) = 4;
        if ( v42 )
        {
          v43 = v65;
          if ( (*(_BYTE *)(v31 + v14 + 36) & 2) == 0 )
            v43 = v16;
          v65 = v43;
        }
        v44 = v42 == 0;
        if ( !v41 )
          goto LABEL_61;
        v17 = 28;
LABEL_20:
        if ( !v44 )
          v17 = 29;
        v18 = (float *)(dword_1ACF68 + 5400 + 16 * v17);
        v19 = v18[44];
        v20 = v18[46] * *(float *)(dword_1ACF68 + 5400);
        v21 = v18[43];
        v22 = v18[45];
        v23 = v19;
        if ( v19 > 1.0 )
          v23 = 1.0;
        v24 = v18[43];
        if ( v21 > 1.0 )
          v24 = 1.0;
        v25 = v18[45];
        if ( v22 > 1.0 )
          v25 = 1.0;
        v26 = v18[46] * *(float *)(dword_1ACF68 + 5400);
        if ( v20 > 1.0 )
          v26 = 1.0;
        if ( v19 < 0.0 )
          v23 = 0.0;
        if ( v21 < 0.0 )
          v24 = 0.0;
        v27 = (int)v38;
        if ( v22 < 0.0 )
          v25 = 0.0;
        if ( v20 < 0.0 )
          v26 = 0.0;
        v28 = *(_DWORD *)(v1 + 636);
        v68[1] = v11 + 1.0;
        v67[1] = v12;
        v68[0] = (float)v27;
        v67[0] = (float)v27;
        sub_9D43C(
          v28,
          (int)v68,
          (int)v67,
          (int)(float)((float)(v24 * 255.0) + 0.5) | ((int)(float)((float)(v23 * 255.0) + 0.5) << 8) | ((int)(float)((float)(v25 * 255.0) + 0.5) << 16) | ((int)(float)((float)(v26 * 255.0) + 0.5) << 24));
        v15 = dword_1ACF68;
        v13 = *(_DWORD *)(v3 + 16);
LABEL_39:
        ++v16;
        v14 += 28;
        if ( v16 >= v13 )
        {
          v45 = v65 + 1;
          if ( v65 == -1 )
          {
            v10 = 0;
          }
          else
          {
            if ( !*(_BYTE *)(v3 + 9) && v13 >= 0 )
            {
              v46 = v13 + 1;
              v47 = (_DWORD *)(*(_DWORD *)(v3 + 68) + 4);
              do
              {
                --v46;
                *v47 = *(v47 - 1);
                v47 += 7;
              }
              while ( v46 );
            }
            v48 = dword_1ACF68;
            v49 = *(_DWORD *)(dword_1ACF68 + 6572);
            v50 = *(float *)(dword_1ACF68 + 224) - *(float *)(dword_1ACF68 + 6636);
            v51 = *(float *)(v49 + 12);
            *(_BYTE *)(v3 + 9) = 1;
            v52 = (float *)(v48 + 5500);
            v53 = *(_DWORD *)(v49 + 448);
            if ( v65 > 0 )
              v54 = v65 - 1;
            else
              v54 = *(_DWORD *)(v53 + 12);
            v55 = *(_DWORD *)(v53 + 68);
            v56 = (float)(v50 + 4.0) - v51;
            v57 = *(float *)(v53 + 20);
            v58 = *(float *)(v53 + 24) - v57;
            v59 = *v52 + (float)(v57 + (float)(v58 * *(float *)(v55 + 28 * v54)));
            if ( v56 >= v59 )
              v59 = v56;
            if ( (*(_BYTE *)(v3 + 4) & 4) != 0 )
            {
              if ( v65 <= -2 )
                v45 = *(_DWORD *)(v53 + 12);
              v60 = (float)(v57 + (float)(v58 * *(float *)(v55 + 28 * v45))) - *v52;
              if ( v59 < v60 )
                v60 = v59;
            }
            else
            {
              v60 = v59;
            }
            sub_9962C(v65, LODWORD(v60));
            v10 = v65 != -1;
          }
          goto LABEL_80;
        }
      }
      v44 = 1;
LABEL_61:
      v17 = 27;
      goto LABEL_20;
    }
  }
LABEL_80:
  v61 = *(float *)(v1 + 12);
  v62 = *(float *)(v1 + 436);
  *(_DWORD *)(v1 + 448) = 0;
  *(_BYTE *)(v3 + 9) = v10;
  *(_DWORD *)(v1 + 444) = 0;
  *(float *)(v1 + 200) = (float)(int)(float)((float)(v61 + v62) + 0.0);
  return LODWORD(v70[4]);
}


// ======================================================================
// ADDR: 0x97c90
// SYMBOL: sub_97C90
int __fastcall sub_97C90(unsigned int a1)
{
  _DWORD *v1; // r5
  int v2; // r1
  _DWORD *v3; // r8
  unsigned int v4; // r2
  unsigned int v5; // r2
  unsigned int v6; // r2
  unsigned int v7; // r2
  int v8; // r6
  int v9; // r0
  int (__fastcall *v10)(int, int); // r3
  int v11; // r1
  _DWORD *v12; // r0
  const void *v13; // r1
  int v14; // r1
  int v15; // r0
  bool v16; // zf
  int result; // r0
  int v18; // [sp+4h] [bp-1Ch]

  v1 = *(_DWORD **)(dword_1ACF68 + 6572);
  v2 = v1[113];
  v3 = (_DWORD *)v1[115];
  v4 = ~v3[v2 - 1];
  v5 = dword_52D88[(unsigned __int8)(v4 ^ a1)] ^ (v4 >> 8);
  v6 = dword_52D88[(unsigned __int8)(v5 ^ BYTE1(a1))] ^ (v5 >> 8);
  v7 = dword_52D88[(unsigned __int8)(v6 ^ BYTE2(a1))] ^ (v6 >> 8);
  v18 = ~(dword_52D88[(unsigned __int8)v7 ^ HIBYTE(a1)] ^ (v7 >> 8));
  if ( v2 == v1[114] )
  {
    v8 = v2 + 1;
    if ( v2 )
      v9 = v2 + v2 / 2;
    else
      v9 = 8;
    if ( v9 > v8 )
      v8 = v9;
    if ( v2 < v8 )
    {
      v10 = off_117248;
      v11 = dword_1ACF70;
      ++*(_DWORD *)(dword_1ACF68 + 880);
      v12 = (_DWORD *)v10(4 * v8, v11);
      v13 = (const void *)v1[115];
      v3 = v12;
      if ( v13 )
      {
        j_memcpy(v12, v13, 4 * v1[113]);
        v15 = v1[115];
        v16 = v15 == 0;
        if ( v15 )
        {
          v14 = dword_1ACF68;
          v16 = dword_1ACF68 == 0;
        }
        if ( !v16 )
          --*(_DWORD *)(v14 + 880);
        off_11724C(v15, dword_1ACF70);
      }
      v2 = v1[113];
      v1[114] = v8;
      v1[115] = v3;
    }
  }
  v3[v2] = v18;
  result = v1[113] + 1;
  v1[113] = result;
  return result;
}


// ======================================================================
// ADDR: 0x99408
// SYMBOL: sub_99408
unsigned int sub_99408()
{
  int v0; // r4
  int v1; // r5
  unsigned int result; // r0
  int v3; // r6
  int v4; // r0
  int *v5; // r1
  int v6; // r0
  int v7; // r1
  int v8; // r1
  float v9; // s0
  int v10; // r2
  __int64 v11; // d17
  __int64 v12; // kr00_8
  int v13; // r3
  float *v14; // r12
  int v15; // r4
  int v16; // s0
  float v17; // s6
  float v18; // s2
  int v19; // r0
  int v20; // r1
  int v21; // r4
  int v22; // r2
  int v23; // r2
  int v24; // r2
  __int64 v25; // d17
  int v26; // r0
  float v27; // s0
  float v28; // s2
  float *v29; // r0

  v0 = dword_1ACF68;
  v1 = *(_DWORD *)(dword_1ACF68 + 6572);
  *(_BYTE *)(v1 + 124) = 1;
  result = *(unsigned __int8 *)(v1 + 127);
  if ( !*(_BYTE *)(v1 + 127) )
  {
    v3 = *(_DWORD *)(v1 + 448);
    if ( v3 )
    {
      result = *(_DWORD *)(v3 + 16);
      if ( result == 1 )
      {
        *(float *)(v1 + 200) = (float)(int)(float)((float)(*(float *)(v1 + 12) + *(float *)(v1 + 436))
                                                 + *(float *)(v1 + 444));
      }
      else
      {
        v4 = *(_DWORD *)(v1 + 388);
        *(_DWORD *)(v1 + 388) = v4 - 1;
        if ( v4 == 1 )
          v5 = (int *)(v1 + 564);
        else
          v5 = (int *)(*(_DWORD *)(v1 + 396) + 4 * v4 - 8);
        v6 = *(_DWORD *)(v1 + 636);
        v7 = *v5;
        *(_BYTE *)(v1 + 124) = 1;
        *(_DWORD *)(v1 + 368) = v7;
        sub_9C12E(v6);
        v8 = *(_DWORD *)(v1 + 636);
        v9 = *(float *)(v1 + 204);
        v10 = *(_DWORD *)(v8 + 72);
        v11 = *(_QWORD *)(v10 + 16 * *(_DWORD *)(v8 + 64) - 8);
        *(_QWORD *)(v1 + 528) = *(_QWORD *)(v10 + 16 * *(_DWORD *)(v8 + 64) - 16);
        *(_QWORD *)(v1 + 536) = v11;
        if ( *(float *)(v3 + 32) >= v9 )
          v9 = *(float *)(v3 + 32);
        v12 = *(_QWORD *)(v3 + 12);
        *(float *)(v3 + 32) = v9;
        v13 = v12 + 1;
        *(_DWORD *)(v3 + 12) = v12 + 1;
        if ( (int)v12 + 1 >= SHIDWORD(v12) )
        {
          *(_DWORD *)(v1 + 444) = 0;
          sub_9E5DE(v8 + 100, v8, 1);
          v16 = *(_DWORD *)(v3 + 32);
          *(_DWORD *)(v3 + 12) = 0;
          *(_DWORD *)(v3 + 28) = v16;
        }
        else
        {
          v14 = (float *)(v0 + 5472);
          v15 = *(_DWORD *)(*(_DWORD *)(dword_1ACF68 + 6572) + 448);
          if ( (int)v12 <= -2 )
            v13 = *(_DWORD *)(v15 + 12);
          *(float *)(v1 + 444) = *v14
                               + (float)((float)(*(float *)(v15 + 20)
                                               + (float)((float)(*(float *)(v15 + 24) - *(float *)(v15 + 20))
                                                       * *(float *)(*(_DWORD *)(v15 + 68) + 28 * v13)))
                                       - *(float *)(v1 + 436));
          sub_9E5DE(v8 + 100, v8, v12 + 2);
          v16 = *(_DWORD *)(v3 + 28);
        }
        v17 = *(float *)(v1 + 444);
        v18 = *(float *)(v1 + 12) + *(float *)(v1 + 436);
        v19 = dword_1ACF68;
        *(_DWORD *)(v1 + 232) = 0;
        *(_DWORD *)(v1 + 236) = 0;
        v20 = *(_DWORD *)(v3 + 12);
        v21 = *(_DWORD *)(v19 + 6572);
        *(_DWORD *)(v1 + 248) = 0;
        *(_DWORD *)(v1 + 204) = v16;
        v22 = *(_DWORD *)(v21 + 448);
        *(float *)(v1 + 200) = (float)(int)(float)(v18 + v17);
        if ( v20 <= -1 )
          v20 = *(_DWORD *)(v22 + 12);
        v23 = *(_DWORD *)(v22 + 68);
        *(_BYTE *)(v21 + 124) = 1;
        sub_9BFD8(
          *(_DWORD *)(v21 + 636),
          *(_DWORD *)(v23 + 28 * v20 + 12),
          *(_DWORD *)(v23 + 28 * v20 + 16),
          *(_DWORD *)(v23 + 28 * v20 + 20),
          *(float *)(v23 + 28 * v20 + 24),
          0);
        v24 = dword_1ACF68;
        v25 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(v21 + 636) + 72) + 16 * *(_DWORD *)(*(_DWORD *)(v21 + 636) + 64) - 8);
        *(_QWORD *)(v21 + 528) = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(v21 + 636) + 72)
                                           + 16 * *(_DWORD *)(*(_DWORD *)(v21 + 636) + 64)
                                           - 16);
        *(_QWORD *)(v21 + 536) = v25;
        v26 = *(_DWORD *)(*(_DWORD *)(v24 + 6572) + 448);
        v27 = *(float *)(v26 + 20);
        v28 = *(float *)(v26 + 24);
        v29 = (float *)(*(_DWORD *)(v26 + 68) + 28 * *(_DWORD *)(v26 + 12));
        return sub_970FC((float)((float)(v29[7] - *v29) * (float)(v28 - v27)) * 0.65);
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x99738
// SYMBOL: sub_99738
int __fastcall sub_99738(int a1, float a2)
{
  int v3; // r1

  v3 = *(_DWORD *)(*(_DWORD *)(dword_1ACF68 + 6572) + 448);
  if ( a1 <= -1 )
    a1 = *(_DWORD *)(v3 + 12);
  return sub_9962C(
           a1 + 1,
           (float)(*(float *)(v3 + 20)
                 + (float)((float)(*(float *)(v3 + 24) - *(float *)(v3 + 20))
                         * *(float *)(*(_DWORD *)(v3 + 68) + 28 * a1)))
         + a2);
}


// ======================================================================
// ADDR: 0x99f94
// SYMBOL: sub_99F94
unsigned int __fastcall sub_99F94(int a1, const char *a2, int a3)
{
  int v5; // r6
  int v6; // r0
  unsigned int result; // r0
  int v8; // r1
  bool v9; // zf

  v5 = a3 ^ 1;
  v6 = *(_DWORD *)(dword_1ACF68 + 6572);
  *(_BYTE *)(v6 + 124) = 1;
  result = *(_DWORD *)(v6 + 448);
  if ( !result )
    goto LABEL_6;
  v8 = *(_DWORD *)(result + 16);
  v9 = v8 == a1;
  if ( v8 == a1 )
  {
    result = *(_DWORD *)(result + 4);
    v9 = result == v5;
  }
  if ( !v9 )
  {
    result = sub_96B84();
LABEL_6:
    if ( a1 != 1 )
      return sub_99AB0(a2, a1, v5);
  }
  return result;
}


// ======================================================================
// ADDR: 0xa62b8
// SYMBOL: sub_A62B8
int sub_A62B8(_QWORD *a1, const char *a2, ...)
{
  int v3; // r0
  int v4; // r1
  int v5; // r2
  char *v6; // r6
  int v7; // r0
  int v9; // [sp+4h] [bp-14h]
  va_list va; // [sp+20h] [bp+8h] BYREF

  va_start(va, a2);
  sub_95E08(0, a1);
  v3 = dword_1ACF68;
  v4 = *(_DWORD *)(dword_1ACF68 + 6572);
  v5 = *(unsigned __int8 *)(v4 + 127);
  *(_BYTE *)(v4 + 124) = 1;
  if ( !v5 )
  {
    v6 = (char *)(v3 + 12096);
    v7 = sub_88724((char *)(v3 + 12096), 3073, a2, va);
    sub_A5E84(v6, &v6[v7], 1);
  }
  sub_96230(1);
  return v9;
}


// ======================================================================
// ADDR: 0xa7558
// SYMBOL: sub_A7558
int sub_A7558()
{
  int v0; // r0
  int v1; // r4
  int v2; // r2
  float v3; // s0
  int v4; // r5
  int v6; // [sp+4h] [bp-14h] BYREF
  int v7; // [sp+8h] [bp-10h]
  int v8; // [sp+Ch] [bp-Ch]

  v0 = dword_1ACF68;
  v1 = *(_DWORD *)(dword_1ACF68 + 6572);
  v2 = *(unsigned __int8 *)(v1 + 127);
  *(_BYTE *)(v1 + 124) = 1;
  if ( !v2 )
  {
    v3 = *(float *)(v1 + 236);
    v4 = *(_DWORD *)(v1 + 348);
    *(_DWORD *)(v1 + 348) = 1;
    if ( v3 <= 0.0 )
      v7 = *(_DWORD *)(v0 + 6344);
    else
      v7 = 0;
    v6 = 0;
    sub_8B104((unsigned int)&v6);
    *(_DWORD *)(v1 + 348) = v4;
  }
  return v8;
}


// ======================================================================
// ADDR: 0xa7c88
// SYMBOL: sub_A7C88
int __fastcall sub_A7C88(char *a1, int a2, unsigned int a3, float *a4)
{
  int v5; // r8
  int v6; // r4
  int v7; // r6
  bool v9; // zf
  int v10; // r10
  int v13; // r11
  float v14; // s8
  float v15; // s10
  float v16; // s18
  float v17; // s0
  float v18; // s2
  float v19; // s20
  float v20; // s22
  float v21; // s16
  float v22; // s4
  float v23; // s12
  float v24; // s14
  int v25; // r1
  float v26; // s0
  unsigned int v27; // r0
  float v28; // s0
  float v29; // s6
  float v30; // s2
  int v31; // r6
  int v32; // r0
  int v33; // r0
  unsigned int v34; // r11
  bool v35; // zf
  int v36; // r1
  int v37; // r1
  int v38; // r2
  int v39; // r0
  int v40; // r0
  bool v41; // zf
  int v42; // [sp+18h] [bp-90h]
  unsigned int v44; // [sp+20h] [bp-88h]
  float v45[2]; // [sp+28h] [bp-80h] BYREF
  char v46; // [sp+32h] [bp-76h] BYREF
  unsigned __int8 v47; // [sp+33h] [bp-75h] BYREF
  unsigned __int64 v48; // [sp+34h] [bp-74h] BYREF
  float v49; // [sp+3Ch] [bp-6Ch]
  float v50; // [sp+40h] [bp-68h]
  float v51[2]; // [sp+44h] [bp-64h] BYREF
  float v52[2]; // [sp+4Ch] [bp-5Ch] BYREF
  float v53; // [sp+54h] [bp-54h] BYREF
  float v54; // [sp+58h] [bp-50h]
  float v55[2]; // [sp+5Ch] [bp-4Ch] BYREF

  v5 = dword_1ACF68;
  v6 = *(_DWORD *)(dword_1ACF68 + 6572);
  *(_BYTE *)(v6 + 124) = 1;
  if ( *(_BYTE *)(v6 + 127) )
    return 0;
  v10 = a3 & 2;
  v9 = v10 == 0;
  if ( (a3 & 2) != 0 )
    v9 = *(_DWORD *)(v6 + 448) == 0;
  if ( !v9 )
    sub_99784();
  v13 = sub_8AAD4(v6, (unsigned int)a1, 0);
  sub_899BC(v55, (unsigned int)a1, 0, 1, -1.0);
  v14 = *(float *)(v6 + 204);
  v15 = *(float *)(v6 + 248);
  v16 = v14 + v15;
  v17 = v55[0];
  v18 = v55[1];
  if ( a4[1] != 0.0 )
    v18 = a4[1];
  if ( *a4 != 0.0 )
    v17 = *a4;
  v51[0] = *(float *)(v6 + 200);
  v54 = v18;
  v19 = v51[0];
  v53 = v17;
  v51[1] = v14 + v15;
  v52[1] = v18 + v16;
  v52[0] = v17 + v51[0];
  sub_8B104((unsigned int)&v53);
  v20 = *(float *)(v6 + 52);
  if ( v10 )
    sub_97860((float *)&v48);
  else
    sub_9777C((float *)&v48);
  v21 = *(float *)&v48;
  v22 = v54;
  v23 = *(float *)(v5 + 5472);
  v24 = *(float *)(v5 + 5476);
  v25 = 0;
  v26 = (float)((float)(*(float *)&v48 + *(float *)(v6 + 12)) - v20) - v19;
  if ( v55[0] >= v26 )
    v26 = v55[0];
  if ( *a4 != 0.0 )
    v25 = 1;
  v27 = (((a3 & 0x800000) >> 23) ^ 1) & v25;
  if ( v27 )
    v26 = *a4;
  v28 = v26 + v19;
  if ( a4[1] != 0.0 )
    v22 = a4[1];
  if ( v27 )
    v20 = -0.0;
  v44 = a3 & 8;
  v29 = (float)(int)(float)(v24 * 0.5);
  v30 = (float)(int)(float)(v23 * 0.5);
  *((float *)&v48 + 1) = v16 - v29;
  *(float *)&v48 = v19 - v30;
  v50 = (float)(v24 - v29) + (float)(v16 + v22);
  v49 = (float)(v23 - v30) + (float)(v28 + v20);
  if ( (a3 & 8) != 0 )
  {
    v31 = *(_DWORD *)(v6 + 364);
    *(_DWORD *)(v6 + 364) = v31 | 0x14;
    v32 = sub_8B314((float *)&v48, v13, 0);
    *(_DWORD *)(v6 + 364) = v31;
    if ( !v32 )
      goto LABEL_27;
  }
  else if ( !sub_8B314((float *)&v48, v13, 0) )
  {
LABEL_27:
    if ( v10 && *(_DWORD *)(v6 + 448) )
      sub_997F0();
    return 0;
  }
  v42 = v13;
  v33 = sub_A634C(
          (float *)&v48,
          v13,
          &v47,
          &v46,
          (((a3 >> 9) & 0x800) + ((a3 >> 19) & 4) + ((a3 >> 19) & 8)) & 0xFFFFFFED | (32 * v44) | (2 * ((a3 & 4) != 0)) & 0xEF | (16 * ((a3 & 4) != 0)) | ((a3 & 0x1000000) >> 18));
  v34 = __clz(v44);
  v35 = v33 == 0;
  v7 = v33;
  if ( !v33 )
    v35 = v47 == 0;
  if ( !v35 && !*(_BYTE *)(v5 + 6935) && *(_DWORD *)(v5 + 6836) == v6 )
  {
    v36 = *(_DWORD *)(v5 + 6924);
    if ( v36 == *(_DWORD *)(v6 + 304) )
    {
      *(_BYTE *)(v5 + 6934) = 1;
      sub_8AF54(v42, v36);
    }
  }
  if ( v7 )
    sub_8B0DC();
  if ( (a3 & 0x1000000) != 0 )
    sub_9562C();
  v37 = v47;
  if ( v47 )
    v37 = 1;
  if ( (v37 | (v34 >> 5) & a2) == 1 )
  {
    v38 = 25;
    if ( !v47 )
      v38 = 24;
    v39 = v38;
    if ( v47 )
      v39 = 26;
    if ( !v46 )
      v39 = v38;
    v40 = sub_88C10(v39, 1.0);
    sub_89B34(*(float *)&v48, *((float *)&v48 + 1), v49, v50, v40, 0, 0.0);
    sub_8A1F8(&v48, v42, 10);
  }
  v41 = v10 == 0;
  if ( v10 )
    v41 = *(_DWORD *)(v6 + 448) == 0;
  if ( !v41 )
  {
    sub_997F0();
    sub_9777C(v45);
    v49 = v49 - (float)(v45[0] - v21);
  }
  if ( (a3 & 8) != 0 )
  {
    sub_95E08(0, (_QWORD *)(v5 + 5588));
    sub_89A94((char *)v51, v52, a1, 0, v55, (float *)(v5 + 5536), (float *)&v48);
    sub_96230(1);
    if ( !v7 )
      return v7;
  }
  else
  {
    sub_89A94((char *)v51, v52, a1, 0, v55, (float *)(v5 + 5536), (float *)&v48);
    if ( !v7 )
      return v7;
  }
  if ( !(a3 << 31) && (*(_DWORD *)(v6 + 8) & 0x4000000) != 0 && (*(_BYTE *)(v6 + 364) & 0x20) == 0 )
    sub_98968();
  return v7;
}


// ======================================================================
