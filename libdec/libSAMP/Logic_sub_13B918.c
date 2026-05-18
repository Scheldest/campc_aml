// ADDR: 0x13be9c
// SYMBOL: sub_13BE9C
int __fastcall sub_13BE9C(int a1, int a2)
{
  __int64 v3; // kr00_8
  int result; // r0
  _BYTE v6[8]; // [sp+4h] [bp-24h] BYREF
  int v7; // [sp+Ch] [bp-1Ch]

  v3 = *(_QWORD *)(a1 + 4);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    if ( (unsigned int)(-1431655765 * (((int)v3 - *(_DWORD *)a1) >> 2) + 1) > 0x15555555 )
      std::__vector_base_common<true>::__throw_length_error(a1);
    sub_13C270(v6);
    sub_13C1F6(v7, a2);
    v7 += 12;
    sub_13C2C8(a1, v6);
    return sub_13C326(v6);
  }
  else
  {
    sub_13C1F6(v3, a2);
    result = v3 + 12;
    *(_DWORD *)(a1 + 4) = v3 + 12;
  }
  return result;
}


// ======================================================================
// ADDR: 0x13bf3c
// SYMBOL: sub_13BF3C
int __fastcall sub_13BF3C(int a1, int a2, int a3)
{
  int *v5; // r0
  int *v6; // r1
  int v7; // r2
  int v9; // [sp+0h] [bp-10h] BYREF
  int v10; // [sp+4h] [bp-Ch]

  v5 = *(int **)(a1 + 96);
  v6 = *(int **)(a1 + 100);
  v9 = a2;
  v10 = a3;
  if ( v5 == v6 )
  {
    sub_13C3B0(a1 + 92, &v9);
  }
  else
  {
    v7 = v10;
    *v5 = v9;
    v5[1] = v7;
    *(_DWORD *)(a1 + 96) = v5 + 2;
  }
  return sub_12BDF6(a1, a2);
}


// ======================================================================
// ADDR: 0x13c09c
// SYMBOL: sub_13C09C
void **__fastcall sub_13C09C(void **a1)
{
  if ( *a1 )
  {
    sub_13C0B6(a1);
    operator delete(*a1);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x13c0e8
// SYMBOL: sub_13C0E8
void __fastcall sub_13C0E8(int *a1, int *a2)
{
  int v4; // r0
  int v5; // r6
  unsigned int v6; // r5
  int v7; // r2
  int v8; // r0
  char *v9; // r0
  char *v10; // r1
  int v11; // r2
  void *v12; // [sp+4h] [bp-24h] BYREF
  char *v13; // [sp+8h] [bp-20h]
  char *v14; // [sp+Ch] [bp-1Ch]
  char *v15; // [sp+10h] [bp-18h]
  _DWORD *v16; // [sp+14h] [bp-14h]

  v4 = *a1;
  v5 = a1[1] - v4;
  v6 = (v5 >> 2) + 1;
  if ( v6 >= 0x40000000 )
    std::__vector_base_common<true>::__throw_length_error(a1);
  v7 = a1[2];
  v16 = a1 + 2;
  v8 = v7 - v4;
  if ( v6 <= v8 >> 1 )
    v6 = v8 >> 1;
  if ( (unsigned int)v8 >= 0x7FFFFFFC )
    v6 = 0x3FFFFFFF;
  if ( v6 )
  {
    if ( v6 >= 0x40000000 )
      sub_DC8D4((int)"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
    v9 = (char *)operator new(4 * v6);
  }
  else
  {
    v9 = 0;
  }
  v10 = &v9[4 * (v5 >> 2)];
  v15 = &v9[4 * v6];
  v11 = *a2;
  v12 = v9;
  v13 = v10;
  *(_DWORD *)v10 = v11;
  v14 = v10 + 4;
  sub_13C1BC(a1, &v12);
  if ( v14 != v13 )
    v14 += 4 * ~((unsigned int)(v14 - v13 - 4) >> 2);
  if ( v12 )
    operator delete(v12);
}


// ======================================================================
// ADDR: 0x13c368
// SYMBOL: sub_13C368
int __fastcall sub_13C368(__int64 a1, int a2, int a3)
{
  __int64 v3; // r4
  int v5; // r2

  v3 = a1;
  LODWORD(a1) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  *(_DWORD *)(v3 + 16) = a3;
  if ( HIDWORD(a1) )
  {
    if ( HIDWORD(a1) >= 0x40000000 )
      sub_DC8D4((int)"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
    LODWORD(a1) = operator new(4 * HIDWORD(a1));
  }
  HIDWORD(a1) = a1 + 4 * a2;
  v5 = a1 + 4 * HIDWORD(v3);
  *(_QWORD *)v3 = a1;
  LODWORD(a1) = v3;
  *(_DWORD *)(v3 + 8) = HIDWORD(a1);
  *(_DWORD *)(v3 + 12) = v5;
  return a1;
}


// ======================================================================
// ADDR: 0x13d96c
// SYMBOL: sub_13D96C
int __fastcall sub_13D96C(int a1, int a2)
{
  _DWORD *v2; // r4
  int v3; // r0

  v2 = *(_DWORD **)(a1 + 96);
  if ( *(_BYTE *)(a2 + 88) )
  {
    v3 = v2[24];
    *(_DWORD *)(a2 + 84) = v3;
    v2[24] = v3 + 1;
  }
  sub_12BDF6((int)v2, a2);
  return (*(int (__fastcall **)(_DWORD *))(*v2 + 8))(v2);
}


// ======================================================================
// ADDR: 0x13daac
// SYMBOL: sub_13DAAC
int __fastcall sub_13DAAC(int a1, char a2)
{
  int result; // r0

  result = sub_12BC78(a1);
  *(_BYTE *)(result + 88) = a2;
  *(_DWORD *)(result + 84) = -1;
  *(_DWORD *)result = &off_22F0B8;
  return result;
}


// ======================================================================
