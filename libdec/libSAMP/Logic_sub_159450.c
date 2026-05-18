// ADDR: 0x15917e
// SYMBOL: sub_15917E
int __fastcall sub_15917E(int a1, int a2, int a3)
{
  char *v4; // r2
  char v6; // r1
  const char *v7; // r6
  size_t v8; // r0
  double v9; // d16
  int result; // r0
  double v11; // [sp+0h] [bp-20h] BYREF
  int v12; // [sp+8h] [bp-18h]

  v4 = *(char **)(a3 + 4);
  *(_DWORD *)a1 = a2;
  sub_DC6DC((_DWORD *)(a1 + 4), v4);
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  v6 = *(_BYTE *)(a3 + 8);
  v7 = *(const char **)a3;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_BYTE *)(a1 + 28) = (v6 & 2) != 0;
  v8 = strlen(v7);
  sub_164D04(&v11, v7, v8);
  if ( *(unsigned __int8 *)(a1 + 16) << 31 )
    operator delete(*(void **)(a1 + 24));
  v9 = v11;
  *(_DWORD *)(a1 + 24) = v12;
  result = a1;
  *(double *)(a1 + 16) = v9;
  return result;
}


// ======================================================================
// ADDR: 0x159504
// SYMBOL: sub_159504
int __fastcall sub_159504(__int64 a1, int a2, int a3)
{
  __int64 v3; // r4
  int v5; // r2

  v3 = a1;
  LODWORD(a1) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  *(_DWORD *)(v3 + 16) = a3;
  if ( HIDWORD(a1) )
  {
    if ( HIDWORD(a1) >= 0x6666667 )
      sub_DC8D4((int)"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
    LODWORD(a1) = operator new(40 * HIDWORD(a1));
  }
  HIDWORD(a1) = a1 + 40 * a2;
  v5 = a1 + 40 * HIDWORD(v3);
  *(_QWORD *)v3 = a1;
  LODWORD(a1) = v3;
  *(_DWORD *)(v3 + 8) = HIDWORD(a1);
  *(_DWORD *)(v3 + 12) = v5;
  return a1;
}


// ======================================================================
// ADDR: 0x15955c
// SYMBOL: sub_15955C
int __fastcall sub_15955C(int *a1, _DWORD *a2)
{
  int v2; // r2
  int v3; // r12
  int v4; // r3
  int v5; // t1
  __int64 v6; // d16
  __int64 v7; // d16
  int v8; // r4
  __int64 v9; // d16
  int v10; // r4
  int v11; // r3
  int v12; // r3
  int result; // r0

  v2 = a1[1];
  v3 = *a1;
  v4 = a2[1];
  if ( v2 != *a1 )
  {
    do
    {
      v5 = *(_DWORD *)(v2 - 40);
      v2 -= 40;
      *(_DWORD *)(v4 - 40) = v5;
      v6 = *(_QWORD *)(v2 + 4);
      *(_DWORD *)(v4 - 28) = *(_DWORD *)(v2 + 12);
      *(_QWORD *)(v4 - 36) = v6;
      v7 = *(_QWORD *)(v2 + 16);
      v8 = *(_DWORD *)(v2 + 24);
      *(_DWORD *)(v2 + 12) = 0;
      *(_DWORD *)(v2 + 4) = 0;
      *(_DWORD *)(v2 + 8) = 0;
      *(_DWORD *)(v4 - 16) = v8;
      *(_QWORD *)(v4 - 24) = v7;
      v9 = *(_QWORD *)(v2 + 28);
      v10 = *(_DWORD *)(v2 + 36);
      *(_DWORD *)(v2 + 24) = 0;
      *(_DWORD *)(v2 + 16) = 0;
      *(_DWORD *)(v2 + 20) = 0;
      *(_DWORD *)(v4 - 4) = v10;
      *(_QWORD *)(v4 - 12) = v9;
      v4 = a2[1] - 40;
      a2[1] = v4;
    }
    while ( v2 != v3 );
    v3 = *a1;
  }
  *a1 = v4;
  a2[1] = v3;
  v11 = a1[1];
  a1[1] = a2[2];
  a2[2] = v11;
  v12 = a1[2];
  a1[2] = a2[3];
  result = a2[1];
  a2[3] = v12;
  *a2 = result;
  return result;
}


// ======================================================================
// ADDR: 0x1595dc
// SYMBOL: sub_1595DC
void **__fastcall sub_1595DC(void **a1)
{
  sub_1595F2();
  if ( *a1 )
    operator delete(*a1);
  return a1;
}


// ======================================================================
