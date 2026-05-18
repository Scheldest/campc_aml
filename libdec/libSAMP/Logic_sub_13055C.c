// ADDR: 0x12f66c
// SYMBOL: sub_12F66C
int __fastcall sub_12F66C(_DWORD *a1)
{
  _BYTE *v1; // r6
  _BYTE *v3; // r5
  int result; // r0
  int v5; // r2
  int v6; // r6

  v1 = (_BYTE *)a1[25];
  if ( !v1 )
    return sub_12F5E0((int)a1);
  if ( v1[80] != 1 )
    (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)v1 + 36))(v1, 1);
  v3 = (_BYTE *)a1[23];
  v1[80] = 1;
  if ( v3[80] )
  {
    (*(void (__fastcall **)(_BYTE *, _DWORD))(*(_DWORD *)v3 + 36))(v3, 0);
    result = a1[23];
  }
  else
  {
    result = (int)v3;
  }
  v3[80] = 0;
  v5 = a1[24];
  v6 = a1[26];
  a1[23] = a1[25];
  a1[24] = v6;
  a1[25] = result;
  a1[26] = v5;
  return result;
}


// ======================================================================
// ADDR: 0x12f6d2
// SYMBOL: sub_12F6D2
int __fastcall sub_12F6D2(int result, int a2)
{
  _DWORD *v2; // r4
  int v3; // r1

  v2 = (_DWORD *)result;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      result = *(_DWORD *)(result + 96);
      if ( result == 1 )
      {
        sub_12F3D0(v2, 0);
        result = v2[24];
      }
      if ( result == 3 )
      {
        v3 = 2;
        return sub_12F3D0(v2, v3);
      }
    }
  }
  else
  {
    result = *(_DWORD *)(result + 96);
    if ( !result )
    {
      sub_12F3D0(v2, 1);
      result = v2[24];
    }
    if ( result == 2 )
    {
      v3 = 3;
      return sub_12F3D0(v2, v3);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x12f988
// SYMBOL: sub_12F988
void __fastcall sub_12F988(int a1)
{
  const void *v2; // r0
  _BYTE v3[8]; // [sp+4h] [bp-14h] BYREF
  void *v4; // [sp+Ch] [bp-Ch]

  if ( *(_DWORD *)(a1 + 136) )
  {
    std::string::basic_string(v3, *(_DWORD *)(a1 + 108) + 100);
    (*(void (__fastcall **)(_DWORD, _BYTE *))(**(_DWORD **)(a1 + 136) + 32))(*(_DWORD *)(a1 + 136), v3);
    v2 = *(const void **)(a1 + 136);
    if ( v2
      && j___dynamic_cast(
           v2,
           (const struct __class_type_info *)&`typeinfo for'Widget,
           (const struct __class_type_info *)&`typeinfo for'Chat,
           0) )
    {
      sub_12FA04(*(_DWORD *)(a1 + 108), v3);
    }
    sub_12F5E0(a1);
    if ( v3[0] << 31 )
      operator delete(v4);
  }
}


// ======================================================================
// ADDR: 0x12faf4
// SYMBOL: sub_12FAF4
void __fastcall sub_12FAF4(_DWORD *a1)
{
  int v1; // r6
  int v3; // r0
  int v4; // r9
  int v5; // r1
  int v6; // r0
  double v7; // d16
  int v8; // r0
  int v9; // r4
  void *v10; // r0
  int v11; // r4
  __int64 v12; // [sp+4h] [bp-4Ch] BYREF
  void *v13; // [sp+Ch] [bp-44h]
  _DWORD v14[2]; // [sp+10h] [bp-40h] BYREF
  void *v15; // [sp+18h] [bp-38h]
  __int64 v16; // [sp+1Ch] [bp-34h] BYREF
  void *v17; // [sp+24h] [bp-2Ch]
  double v18; // [sp+28h] [bp-28h] BYREF
  int v19; // [sp+30h] [bp-20h]

  v1 = a1[27];
  v3 = *(_DWORD *)(v1 + 128) - *(_DWORD *)(v1 + 124);
  if ( v3 )
  {
    v4 = v3 >> 2;
    v5 = a1[21];
    v6 = a1[35];
    if ( v6 == v5 )
    {
      std::string::basic_string(&v18, v1 + 100);
      if ( *(unsigned __int8 *)(v1 + 112) << 31 )
        operator delete(*(void **)(v1 + 120));
      v7 = v18;
      *(_DWORD *)(v1 + 120) = v19;
      *(double *)(v1 + 112) = v7;
      v5 = a1[21];
      v6 = a1[35];
      LOWORD(v18) = 0;
    }
    if ( v6 == v5 )
      v6 = -1431655765 * v4;
    a1[35] = v6 - 1;
    if ( !v6 )
    {
      v11 = a1[27];
      std::string::basic_string(&v16, v11 + 112);
      sub_12F86A(v11, &v16);
      if ( !((unsigned __int8)v16 << 31) )
        return;
      v10 = v17;
      goto LABEL_15;
    }
    v8 = a1[27];
    v14[0] = 0;
    v14[1] = 0;
    v15 = 0;
    sub_12FBF8(v8);
    v9 = a1[27];
    std::string::basic_string(&v12, v14);
    sub_12F86A(v9, &v12);
    if ( (unsigned __int8)v12 << 31 )
      operator delete(v13);
    if ( LOBYTE(v14[0]) << 31 )
    {
      v10 = v15;
LABEL_15:
      operator delete(v10);
    }
  }
}


// ======================================================================
// ADDR: 0x12fc38
// SYMBOL: sub_12FC38
void __fastcall sub_12FC38(_DWORD *a1)
{
  int v1; // r6
  int v3; // r0
  int v4; // r8
  int v5; // r0
  double v6; // d16
  unsigned int v7; // r1
  int v8; // r0
  int v9; // r4
  void *v10; // r0
  int v11; // r4
  __int64 v12; // [sp+4h] [bp-44h] BYREF
  void *v13; // [sp+Ch] [bp-3Ch]
  _DWORD v14[2]; // [sp+10h] [bp-38h] BYREF
  void *v15; // [sp+18h] [bp-30h]
  __int64 v16; // [sp+1Ch] [bp-2Ch] BYREF
  void *v17; // [sp+24h] [bp-24h]
  double v18; // [sp+28h] [bp-20h] BYREF
  int v19; // [sp+30h] [bp-18h]

  v1 = a1[27];
  v3 = *(_DWORD *)(v1 + 128) - *(_DWORD *)(v1 + 124);
  if ( v3 )
  {
    v4 = -1431655765 * (v3 >> 2);
    v5 = a1[35];
    if ( v5 == a1[21] )
    {
      std::string::basic_string(&v18, v1 + 100);
      if ( *(unsigned __int8 *)(v1 + 112) << 31 )
        operator delete(*(void **)(v1 + 120));
      v6 = v18;
      *(_DWORD *)(v1 + 120) = v19;
      *(double *)(v1 + 112) = v6;
      v5 = a1[35];
      LOWORD(v18) = 0;
    }
    v7 = -1;
    if ( v5 < v4 - 1 )
      v7 = v5 + 1;
    a1[35] = v7;
    if ( v7 == -1 )
    {
      v11 = a1[27];
      std::string::basic_string(&v16, v11 + 112);
      sub_12F86A(v11, &v16);
      if ( !((unsigned __int8)v16 << 31) )
        return;
      v10 = v17;
      goto LABEL_15;
    }
    v8 = a1[27];
    v14[0] = 0;
    v14[1] = 0;
    v15 = 0;
    sub_12FBF8(v8, v7, (int)v14);
    v9 = a1[27];
    std::string::basic_string(&v12, v14);
    sub_12F86A(v9, &v12);
    if ( (unsigned __int8)v12 << 31 )
      operator delete(v13);
    if ( LOBYTE(v14[0]) << 31 )
    {
      v10 = v15;
LABEL_15:
      operator delete(v10);
    }
  }
}


// ======================================================================
// ADDR: 0x12fd4c
// SYMBOL: sub_12FD4C
int __fastcall sub_12FD4C(int a1, int a2)
{
  unsigned int v3; // r0
  int v4; // r1
  unsigned int v5; // r2
  double v6; // d16
  int result; // r0
  double v8; // [sp+0h] [bp-18h] BYREF
  int v9; // [sp+8h] [bp-10h]

  std::string::push_back(a1 + 100, a2);
  v3 = *(unsigned __int8 *)(a1 + 100);
  v4 = *(_DWORD *)(a1 + 108);
  v5 = *(_DWORD *)(a1 + 104);
  if ( (v3 & 1) == 0 )
  {
    v4 = a1 + 101;
    v5 = v3 >> 1;
  }
  sub_164D04(&v8, v4, v5);
  if ( *(unsigned __int8 *)(a1 + 88) << 31 )
    operator delete(*(void **)(a1 + 96));
  v6 = v8;
  result = v9;
  *(_DWORD *)(a1 + 96) = v9;
  *(double *)(a1 + 88) = v6;
  return result;
}


// ======================================================================
// ADDR: 0x12fd94
// SYMBOL: sub_12FD94
int __fastcall sub_12FD94(int a1)
{
  int result; // r0
  unsigned int v3; // r2
  unsigned int v4; // t1
  unsigned int v5; // r5
  int v6; // r3
  unsigned int v7; // r1
  int v8; // r1
  char v9; // r2
  _BYTE *v10; // r1
  int v11; // r1
  unsigned int v12; // r3
  int v13; // r1
  unsigned int v14; // r2
  double v15; // d16
  double v16; // [sp+0h] [bp-18h] BYREF
  int v17; // [sp+8h] [bp-10h]

  v4 = *(unsigned __int8 *)(a1 + 100);
  result = a1 + 100;
  v3 = v4;
  v5 = *(_DWORD *)(result + 4);
  v6 = v4 & 1;
  v7 = v5;
  if ( (v4 & 1) == 0 )
    v7 = v3 >> 1;
  if ( v7 )
  {
    if ( v6 )
    {
      v11 = *(_DWORD *)(a1 + 108);
      *(_DWORD *)(a1 + 104) = v5 - 1;
      v10 = (_BYTE *)(v11 + v5 - 1);
    }
    else
    {
      v8 = (v3 >> 1) - 1;
      v9 = 2 * v8;
      v10 = (_BYTE *)(v8 + result + 1);
      *(_BYTE *)result = v9;
    }
    *v10 = 0;
    v12 = *(unsigned __int8 *)(a1 + 100);
    v13 = *(_DWORD *)(a1 + 108);
    v14 = *(_DWORD *)(a1 + 104);
    if ( (v12 & 1) == 0 )
    {
      v13 = result + 1;
      v14 = v12 >> 1;
    }
    sub_164D04(&v16, v13, v14);
    if ( *(unsigned __int8 *)(a1 + 88) << 31 )
      operator delete(*(void **)(a1 + 96));
    v15 = v16;
    result = v17;
    *(_DWORD *)(a1 + 96) = v17;
    *(double *)(a1 + 88) = v15;
  }
  return result;
}


// ======================================================================
