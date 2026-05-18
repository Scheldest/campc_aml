// ADDR: 0xe384c
// SYMBOL: sub_E384C
_DWORD *__fastcall sub_E384C(_DWORD *a1, unsigned __int8 *a2, int a3)
{
  int v6; // r4
  int v7; // r0
  __int64 v8; // kr00_8
  unsigned __int8 v9; // r2
  int v10; // r0
  unsigned int v11; // r0
  unsigned int v12; // r1
  int v13; // r2
  _BYTE v15[28]; // [sp+4h] [bp-1Ch] BYREF

  std::istream::sentry::sentry(v15, a1, 1);
  if ( !v15[0] )
    return a1;
  if ( *a2 << 31 )
  {
    **((_BYTE **)a2 + 2) = 0;
    *((_DWORD *)a2 + 1) = 0;
  }
  else
  {
    *(_WORD *)a2 = 0;
  }
  v6 = 0;
  while ( 1 )
  {
    v7 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 24);
    v8 = *(_QWORD *)(v7 + 12);
    if ( (_DWORD)v8 != HIDWORD(v8) )
    {
      *(_DWORD *)(v7 + 12) = v8 + 1;
      v9 = *(_BYTE *)v8;
      goto LABEL_9;
    }
    v10 = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 40))(v7);
    v9 = v10;
    if ( v10 == -1 )
      break;
LABEL_9:
    if ( v9 == a3 )
    {
      v13 = 0;
      goto LABEL_17;
    }
    std::string::push_back(a2, v9);
    v11 = *a2;
    --v6;
    v12 = *((_DWORD *)a2 + 1);
    if ( !(v11 << 31) )
      v12 = v11 >> 1;
    if ( v12 == -17 )
    {
      v13 = 4;
      goto LABEL_17;
    }
  }
  v13 = 2;
  if ( !v6 )
    v13 = 6;
LABEL_17:
  std::ios_base::clear(
    (std::ios_base *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
    *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 16) | v13);
  return a1;
}


// ======================================================================
// ADDR: 0xe3ec0
// SYMBOL: sub_E3EC0
int __fastcall sub_E3EC0(int a1)
{
  int v1; // r5
  int v3; // r0
  unsigned int v4; // r3
  unsigned int v5; // r1
  int v6; // r2
  int v7; // r1
  int result; // r0
  unsigned int v9; // r2
  int v10; // r0
  int v11; // r6
  int v12; // r1
  unsigned int v13; // r1
  unsigned int v14; // r2
  unsigned int v15; // r1
  int v16; // r3
  int v17; // r2

  v1 = a1 + 32;
  std::string::operator=(a1 + 32);
  v3 = *(_DWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 44) = 0;
  if ( (v3 & 8) != 0 )
  {
    v4 = *(unsigned __int8 *)(a1 + 32);
    v6 = *(_DWORD *)(a1 + 40);
    v5 = *(_DWORD *)(a1 + 36);
    if ( (v4 & 1) == 0 )
    {
      v6 = v1 + 1;
      v5 = v4 >> 1;
    }
    v7 = v5 + v6;
    *(_DWORD *)(a1 + 44) = v7;
    *(_DWORD *)(a1 + 8) = v6;
    *(_DWORD *)(a1 + 12) = v6;
    *(_DWORD *)(a1 + 16) = v7;
  }
  result = v3 << 27;
  if ( result < 0 )
  {
    v9 = *(unsigned __int8 *)(a1 + 32);
    v11 = *(_DWORD *)(a1 + 36);
    v10 = *(_DWORD *)(a1 + 32);
    v12 = *(_DWORD *)(a1 + 40);
    if ( (v9 & 1) == 0 )
    {
      v11 = v9 >> 1;
      v12 = v1 + 1;
    }
    *(_DWORD *)(a1 + 44) = v12 + v11;
    v13 = (v10 & 0xFFFFFFFE) - 1;
    if ( (v9 & 1) == 0 )
      v13 = 10;
    std::string::resize(v1, v13, 0);
    v14 = *(unsigned __int8 *)(a1 + 32);
    result = *(_DWORD *)(a1 + 40);
    v15 = *(_DWORD *)(a1 + 36);
    v16 = *(unsigned __int8 *)(a1 + 48);
    if ( (v14 & 1) == 0 )
    {
      result = v1 + 1;
      v15 = v14 >> 1;
    }
    *(_DWORD *)(a1 + 20) = result;
    *(_DWORD *)(a1 + 24) = result;
    *(_DWORD *)(a1 + 28) = v15 + result;
    if ( v16 << 30 )
    {
      if ( v11 <= -1 )
      {
        v17 = v11 - 0x7FFFFFFF;
        do
        {
          result += 0x7FFFFFFF;
          v11 = v17;
          v17 = 1;
        }
        while ( v11 < 0 );
      }
      else if ( !v11 )
      {
        return result;
      }
      result += v11;
      *(_DWORD *)(a1 + 24) = result;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x12ae34
// SYMBOL: sub_12AE34
unsigned int __fastcall sub_12AE34(int a1, _QWORD *a2, __int64 *a3, unsigned __int8 *a4, int a5, float a6)
{
  unsigned int v6; // r6
  unsigned int result; // r0
  int v9; // r12
  float v10; // s16
  __int64 v12; // d17
  unsigned __int8 *v13; // r6
  unsigned int v14; // r8
  int v15; // r11
  unsigned __int8 *v16; // r9
  int v17; // r0
  int v18; // r1
  int v19; // s0
  int v20; // r1
  int v21; // s0
  float v22; // s0
  __int64 v23; // [sp+10h] [bp-60h] BYREF
  __int64 v24; // [sp+18h] [bp-58h]
  __int64 v25; // [sp+20h] [bp-50h] BYREF
  __int64 v26; // [sp+28h] [bp-48h]
  float v27[16]; // [sp+30h] [bp-40h] BYREF

  v6 = *a4;
  result = *((_DWORD *)a4 + 1);
  v9 = v6 & 1;
  if ( (v6 & 1) == 0 )
    result = v6 >> 1;
  if ( result )
  {
    v10 = a6;
    if ( a6 == 0.0 )
      v10 = *(float *)(*(_DWORD *)(a1 + 8) + 16);
    *(_QWORD *)v27 = *a2;
    v12 = a3[1];
    v13 = (unsigned __int8 *)*((_DWORD *)a4 + 2);
    v25 = *a3;
    v26 = v12;
    if ( !v9 )
      v13 = a4 + 1;
    v14 = (unsigned int)&v13[result];
    v15 = (int)v13;
    while ( 1 )
    {
      result = *v13;
      if ( result <= 9 )
        break;
      if ( result == 10 )
      {
        if ( v13 != (unsigned __int8 *)v15 )
          sub_12ACA8(a1, (int)v27, (int)&v25, v15, (int)v13, a5, SLODWORD(v10));
        v27[0] = *(float *)a2;
        v27[1] = v10 + v27[1];
        goto LABEL_33;
      }
      if ( result != 123 )
        goto LABEL_34;
      v16 = v13 + 7;
      if ( (unsigned int)(v13 + 7) >= v14 )
        goto LABEL_34;
      v17 = *v16;
      if ( v17 != 125 )
        goto LABEL_34;
      if ( v13 != (unsigned __int8 *)v15 )
      {
        sub_12ACA8(a1, (int)v27, (int)&v25, v15, (int)v13, a5, SLODWORD(v10));
        v18 = *(_DWORD *)(a1 + 8);
        v19 = LODWORD(v10);
        if ( v10 == 0.0 )
          v19 = *(_DWORD *)(v18 + 16);
        v17 = sub_178B18((int)&v23, v18, v19, 2139095039, 0.0, v15, (int)v13, 0);
        v27[0] = *(float *)&v23 + v27[0];
      }
      v23 = 0LL;
      v24 = 0LL;
      if ( sub_12B008(v17, v13 + 1, v13 + 7, &v23) )
      {
        v25 = v23;
        v26 = v24;
      }
      v15 = (int)(v13 + 8);
LABEL_35:
      v13 = v16 + 1;
    }
    if ( result == 9 )
    {
      if ( v13 == (unsigned __int8 *)v15 )
      {
        v22 = v27[0];
      }
      else
      {
        sub_12ACA8(a1, (int)v27, (int)&v25, v15, (int)v13, a5, SLODWORD(v10));
        v20 = *(_DWORD *)(a1 + 8);
        v21 = LODWORD(v10);
        if ( v10 == 0.0 )
          v21 = *(_DWORD *)(v20 + 16);
        sub_178B18((int)&v23, v20, v21, 2139095039, 0.0, v15, (int)v13, 0);
        v22 = *(float *)&v23 + v27[0];
      }
      v27[0] = v10 + v22;
LABEL_33:
      v15 = (int)(v13 + 1);
    }
    else if ( !*v13 )
    {
      if ( v13 != (unsigned __int8 *)v15 )
        return sub_12ACA8(a1, (int)v27, (int)&v25, v15, (int)v13, a5, SLODWORD(v10));
      return result;
    }
LABEL_34:
    v16 = v13;
    goto LABEL_35;
  }
  return result;
}


// ======================================================================
// ADDR: 0x12b090
// SYMBOL: sub_12B090
int __fastcall sub_12B090(float *a1, int a2, unsigned __int8 *a3, float a4)
{
  unsigned int v4; // r4
  int result; // r0
  unsigned int v8; // r1
  int v9; // s22
  float v10; // s20
  float v11; // s18
  float v12; // s16
  unsigned int v13; // r11
  _BYTE *i; // r8
  unsigned int v15; // r1
  _BYTE *v16; // r6
  int v17; // r1
  int v18; // s0
  int v19; // r1
  int v20; // s0
  int v21; // r1
  int v22; // s0
  int v23; // r1
  float v24; // [sp+10h] [bp-50h] BYREF
  float v25; // [sp+14h] [bp-4Ch]

  v4 = *a3;
  result = 0;
  v8 = *((_DWORD *)a3 + 1);
  *a1 = 0.0;
  a1[1] = 0.0;
  if ( (v4 & 1) == 0 )
    v8 = v4 >> 1;
  if ( v8 )
  {
    *(float *)&v9 = a4;
    v10 = 0.0;
    v11 = 0.0;
    v12 = 0.0;
    if ( a4 == 0.0 )
      v9 = *(int *)(*(_DWORD *)(a2 + 8) + 16);
    result = *((_DWORD *)a3 + 2);
    if ( (v4 & 1) == 0 )
      result = (int)(a3 + 1);
    v13 = result + v8;
    for ( i = (_BYTE *)result; ; i = v16 + 1 )
    {
      v15 = (unsigned __int8)*i;
      if ( v15 <= 9 )
        break;
      if ( v15 == 10 )
      {
        if ( i != (_BYTE *)result )
        {
          v21 = *(_DWORD *)(a2 + 8);
          v22 = v9;
          if ( *(float *)&v9 == 0.0 )
            v22 = *(_DWORD *)(v21 + 16);
          sub_178B18((int)&v24, v21, v22, 2139095039, 0.0, result, (int)i, 0);
          v11 = v11 + v24;
          if ( v12 == 0.0 )
            v12 = v25;
        }
        result = (int)(i + 1);
        if ( v10 >= v11 )
          v11 = v10;
        v12 = *(float *)&v9 + v12;
        *a1 = v11;
        v10 = v11;
        v11 = 0.0;
LABEL_36:
        v16 = i;
        continue;
      }
      if ( v15 != 123 )
        goto LABEL_36;
      v16 = i + 7;
      if ( (unsigned int)(i + 7) >= v13 || *v16 != 125 )
        goto LABEL_36;
      if ( i != (_BYTE *)result )
      {
        v17 = *(_DWORD *)(a2 + 8);
        v18 = v9;
        if ( *(float *)&v9 == 0.0 )
          v18 = *(_DWORD *)(v17 + 16);
        sub_178B18((int)&v24, v17, v18, 2139095039, 0.0, result, (int)i, 0);
        v11 = v11 + v24;
        if ( v12 == 0.0 )
          v12 = v25;
      }
      result = (int)(i + 8);
    }
    if ( v15 == 9 )
    {
      if ( i != (_BYTE *)result )
      {
        v19 = *(_DWORD *)(a2 + 8);
        v20 = v9;
        if ( *(float *)&v9 == 0.0 )
          v20 = *(_DWORD *)(v19 + 16);
        sub_178B18((int)&v24, v19, v20, 2139095039, 0.0, result, (int)i, 0);
        v11 = v11 + v24;
        if ( v12 == 0.0 )
          v12 = v25;
      }
      v11 = *(float *)&v9 + v11;
      result = (int)(i + 1);
    }
    else if ( !*i )
    {
      if ( i != (_BYTE *)result )
      {
        v23 = *(_DWORD *)(a2 + 8);
        if ( *(float *)&v9 == 0.0 )
          v9 = *(int *)(v23 + 16);
        result = sub_178B18((int)&v24, v23, v9, 2139095039, 0.0, result, (int)i, 0);
        v11 = v11 + v24;
        if ( v12 == 0.0 )
          v12 = v25;
      }
      if ( v12 <= 0.0 )
        v12 = 0.0;
      if ( v10 >= v11 )
        v11 = v10;
      *a1 = v11;
      a1[1] = v12;
      return result;
    }
    goto LABEL_36;
  }
  return result;
}


// ======================================================================
