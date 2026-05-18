// ADDR: 0x157c88
// SYMBOL: sub_157C88
void __fastcall sub_157C88(int *a1)
{
  int v2; // r0
  int v3; // r1
  _DWORD *v4; // r4
  int v5; // t1

  v2 = *a1;
  a1[2] = 0;
  a1[3] = 0;
  *((_BYTE *)a1 + 16) = 0;
  *a1 = 0;
  if ( v2 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  v5 = a1[1];
  v4 = a1 + 1;
  v3 = v5;
  *v4 = 0;
  if ( v5 )
    sub_15614C((int)v4, v3);
}


// ======================================================================
// ADDR: 0x157cb8
// SYMBOL: sub_157CB8
void __fastcall sub_157CB8(int **a1, int *a2)
{
  int *v4; // r5
  int v5; // r1
  int *v6; // r0
  int v7; // r0
  const char *v8; // r3
  char v9[8]; // [sp+4h] [bp-81Ch] BYREF
  void *v10; // [sp+Ch] [bp-814h]
  char s[2063]; // [sp+11h] [bp-80Fh] BYREF

  v4 = (int *)operator new(0x2Cu);
  sub_157AF0((int)v4, 48000, 2);
  *v4 = (int)&off_22F770;
  sub_15BBFE((int)(v4 + 6), 0x17700u);
  v4[9] = 0;
  v4[10] = 0;
  v5 = *a2;
  *v4 = (int)&off_22F5D4;
  sub_157B14(v4, v5);
  v6 = *a1;
  *a1 = v4;
  if ( v6 )
    (*(void (__fastcall **)(int *))(*v6 + 4))(v6);
  v7 = std::string::basic_string(v9, a2 + 4);
  v8 = (const char *)v10;
  if ( !((unsigned __int8)v9[0] << 31) )
    v8 = (const char *)(v7 + 1);
  sub_157FA8(s, (unsigned __int8)v9[0] << 31, "Selected recording device: %s", v8);
  sub_159B70(4, s);
  if ( (unsigned __int8)v9[0] << 31 )
    operator delete(v10);
}


// ======================================================================
// ADDR: 0x157d94
// SYMBOL: sub_157D94
bool __fastcall sub_157D94(int a1, int a2)
{
  unsigned int v2; // r12
  int v3; // lr
  int v4; // r3
  unsigned int v5; // r6
  size_t v6; // r2
  unsigned int v7; // r4
  unsigned __int8 *v8; // r1
  const void *v9; // r0
  unsigned __int8 *v10; // r3
  int v11; // r2
  int v12; // r0
  int v13; // t1
  int v14; // t1
  bool v15; // zf
  _BOOL4 result; // r0

  v3 = a1 + 4;
  v2 = *(unsigned __int8 *)(a1 + 4);
  v4 = a2 + 4;
  v5 = *(unsigned __int8 *)(a2 + 4);
  v6 = *(_DWORD *)(a1 + 8);
  v7 = *(_DWORD *)(a2 + 8);
  if ( (v2 & 1) == 0 )
    v6 = v2 >> 1;
  if ( (v5 & 1) == 0 )
    v7 = v5 >> 1;
  if ( v6 != v7 )
    return 0;
  v8 = *(unsigned __int8 **)(a2 + 12);
  v9 = *(const void **)(a1 + 12);
  if ( (v5 & 1) == 0 )
    v8 = (unsigned __int8 *)(v4 + 1);
  v10 = (unsigned __int8 *)(v3 + 1);
  if ( (v2 & 1) != 0 )
  {
    if ( v6 )
      return memcmp(v9, v8, v6) == 0;
    return 1;
  }
  if ( !v6 )
    return 1;
  v11 = (v2 >> 1) - 1;
  do
  {
    v13 = *v8++;
    v12 = v13;
    v14 = *v10++;
    v15 = v14 == v12;
    result = v14 == v12;
    if ( !v15 )
      break;
    v15 = v11-- == 0;
  }
  while ( !v15 );
  return result;
}


// ======================================================================
// ADDR: 0x157e1c
// SYMBOL: sub_157E1C
int __fastcall sub_157E1C(const char *a1, _DWORD *a2)
{
  char v3[2055]; // [sp+1h] [bp-807h] BYREF

  sub_157FA8(v3, a2, a1, *a2);
  return sub_159B70(2, v3);
}


// ======================================================================
// ADDR: 0x157f44
// SYMBOL: sub_157F44
void **__fastcall sub_157F44(void **a1)
{
  char *v1; // r4
  char *v3; // r5
  void *v4; // r0

  v1 = (char *)*a1;
  if ( *a1 )
  {
    v3 = (char *)a1[1];
    if ( v3 == v1 )
    {
      v4 = *a1;
    }
    else
    {
      do
      {
        v3 -= 40;
        sub_157F84(a1 + 2, v3);
      }
      while ( v3 != v1 );
      v4 = *a1;
    }
    a1[1] = v1;
    operator delete(v4);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x159258
// SYMBOL: sub_159258
int __fastcall sub_159258(_DWORD *a1)
{
  int result; // r0
  int v2; // r1
  _DWORD v3[4]; // [sp+0h] [bp-20h] BYREF
  _DWORD *v4; // [sp+10h] [bp-10h]

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  v4 = v3;
  v3[1] = a1;
  v3[0] = &off_22F608;
  sub_15920A((int)v3);
  result = (int)v4;
  if ( v3 == v4 )
  {
    v2 = 4;
  }
  else
  {
    if ( !v4 )
      return result;
    v2 = 5;
  }
  return (*(int (**)(void))(*v4 + 4 * v2))();
}


// ======================================================================
// ADDR: 0x1592bc
// SYMBOL: sub_1592BC
int __fastcall sub_1592BC(_DWORD *a1, __int64 *a2, const void *a3, size_t n)
{
  _DWORD *v4; // r4
  __int64 v5; // kr00_8
  unsigned __int8 *v6; // r4
  unsigned __int8 *v9; // r6
  unsigned __int8 *v10; // r8
  unsigned int v11; // r2
  __int64 v12; // r0
  int v13; // r1
  int v14; // r8
  __int64 v15; // d16
  int result; // r0
  _DWORD v18[9]; // [sp+4h] [bp-24h] BYREF

  v4 = a1;
  v5 = *a2;
  if ( (_DWORD)v5 == HIDWORD(v5) )
  {
LABEL_17:
    result = 0;
    *v4 = 0;
  }
  else
  {
    v6 = (unsigned __int8 *)(v5 + 28);
    v9 = 0;
    do
    {
      v10 = v9;
      if ( n )
      {
        v11 = *(v6 - 24);
        v12 = *(_QWORD *)(v6 - 20);
        if ( (v11 & 1) == 0 )
          LODWORD(v12) = v11 >> 1;
        v18[1] = v12;
        if ( (v11 & 1) == 0 )
          HIDWORD(v12) = v6 - 23;
        v18[0] = HIDWORD(v12);
        if ( (_DWORD)v12 == n && !sub_126DBE((int)v18, a3, n) )
        {
          v14 = operator new(0x28u);
          *(_DWORD *)v14 = *((_DWORD *)v6 - 7);
          std::string::basic_string(v14 + 4, v6 - 24);
          std::string::basic_string(v14 + 16, v6 - 12);
          result = *((_DWORD *)v6 + 2);
          v15 = *(_QWORD *)v6;
          *a1 = v14;
          goto LABEL_19;
        }
      }
      v13 = *v6;
      if ( !v9 )
        v9 = v6 - 28;
      v6 += 40;
      if ( !v13 )
        v9 = v10;
    }
    while ( (_DWORD)v5 != HIDWORD(v5) );
    v4 = a1;
    if ( !v9 )
      goto LABEL_17;
    v14 = operator new(0x28u);
    *(_DWORD *)v14 = *(_DWORD *)v9;
    std::string::basic_string(v14 + 4, &byte_4[(_DWORD)v9]);
    std::string::basic_string(v14 + 16, v9 + 16);
    v15 = *(_QWORD *)(v9 + 28);
    result = *(int *)((char *)&dword_24 + (_DWORD)v9);
    *a1 = v14;
LABEL_19:
    *(_DWORD *)(v14 + 36) = result;
    *(_QWORD *)(v14 + 28) = v15;
  }
  return result;
}


// ======================================================================
