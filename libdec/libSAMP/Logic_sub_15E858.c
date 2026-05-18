// ADDR: 0x15e798
// SYMBOL: sub_15E798
int __fastcall sub_15E798(int *a1, int a2)
{
  int v3; // r0
  int v5; // r0

  v3 = *a1;
  if ( !v3 )
  {
    v5 = operator new(0x14u);
    *(_QWORD *)v5 = 0LL;
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_DWORD *)(v5 + 16) = 1065353216;
    sub_F6246(a1, v5);
    v3 = *a1;
  }
  return sub_15E7CC(v3, a2);
}


// ======================================================================
// ADDR: 0x15f286
// SYMBOL: sub_15F286
int __fastcall sub_15F286(_DWORD *a1)
{
  int result; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r5
  int v5; // r1
  int i; // r2

  result = a1[3];
  if ( result )
  {
    v3 = (_DWORD *)a1[2];
    if ( v3 )
    {
      do
      {
        v4 = (_DWORD *)*v3;
        operator delete(v3);
        v3 = v4;
      }
      while ( v4 );
    }
    v5 = a1[1];
    result = 0;
    a1[2] = 0;
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
        *(_DWORD *)(*a1 + 4 * i) = 0;
    }
    a1[3] = 0;
  }
  return result;
}


// ======================================================================
