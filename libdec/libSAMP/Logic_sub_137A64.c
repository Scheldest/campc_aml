// ADDR: 0x138e50
// SYMBOL: sub_138E50
int __fastcall sub_138E50(__int64 a1, int a2, int a3)
{
  __int64 v3; // r4
  int v5; // r2

  v3 = a1;
  LODWORD(a1) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  *(_DWORD *)(v3 + 16) = a3;
  if ( HIDWORD(a1) )
  {
    if ( HIDWORD(a1) >= 0x4444445 )
      sub_DC8D4((int)"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
    LODWORD(a1) = operator new(60 * HIDWORD(a1));
  }
  HIDWORD(a1) = a1 + 60 * a2;
  v5 = a1 + 60 * HIDWORD(v3);
  *(_QWORD *)v3 = a1;
  LODWORD(a1) = v3;
  *(_DWORD *)(v3 + 8) = HIDWORD(a1);
  *(_DWORD *)(v3 + 12) = v5;
  return a1;
}


// ======================================================================
// ADDR: 0x138ea8
// SYMBOL: sub_138EA8
int __fastcall sub_138EA8(int *a1, _DWORD *a2)
{
  int v2; // r2
  int v3; // r12
  int v4; // r3
  int v5; // t1
  __int64 v6; // d16
  __int64 v7; // d16
  int v8; // r4
  _QWORD *v9; // r3
  __int64 v10; // d16
  __int64 v11; // d17
  __int64 v12; // d18
  __int64 v13; // d19
  int v14; // r3
  int v15; // r3
  int result; // r0

  v2 = a1[1];
  v3 = *a1;
  v4 = a2[1];
  if ( v2 != *a1 )
  {
    do
    {
      v5 = *(_DWORD *)(v2 - 60);
      v2 -= 60;
      *(_DWORD *)(v4 - 60) = v5;
      v6 = *(_QWORD *)(v2 + 4);
      *(_DWORD *)(v4 - 48) = *(_DWORD *)(v2 + 12);
      *(_QWORD *)(v4 - 56) = v6;
      v7 = *(_QWORD *)(v2 + 16);
      v8 = *(_DWORD *)(v2 + 24);
      *(_DWORD *)(v2 + 4) = 0;
      *(_DWORD *)(v2 + 8) = 0;
      *(_DWORD *)(v2 + 12) = 0;
      *(_DWORD *)(v4 - 36) = v8;
      *(_QWORD *)(v4 - 44) = v7;
      v9 = (_QWORD *)(v4 - 32);
      v10 = *(_QWORD *)(v2 + 28);
      v11 = *(_QWORD *)(v2 + 36);
      v12 = *(_QWORD *)(v2 + 44);
      v13 = *(_QWORD *)(v2 + 52);
      *(_DWORD *)(v2 + 24) = 0;
      *(_DWORD *)(v2 + 16) = 0;
      *(_DWORD *)(v2 + 20) = 0;
      *v9 = v10;
      v9[1] = v11;
      v9 += 2;
      *v9 = v12;
      v9[1] = v13;
      v4 = a2[1] - 60;
      a2[1] = v4;
    }
    while ( v2 != v3 );
    v3 = *a1;
  }
  *a1 = v4;
  a2[1] = v3;
  v14 = a1[1];
  a1[1] = a2[2];
  a2[2] = v14;
  v15 = a1[2];
  a1[2] = a2[3];
  result = a2[1];
  a2[3] = v15;
  *a2 = result;
  return result;
}


// ======================================================================
// ADDR: 0x138f32
// SYMBOL: sub_138F32
void **__fastcall sub_138F32(void **a1)
{
  sub_138F48();
  if ( *a1 )
    operator delete(*a1);
  return a1;
}


// ======================================================================
