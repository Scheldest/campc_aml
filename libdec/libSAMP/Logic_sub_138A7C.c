// ADDR: 0x139c12
// SYMBOL: sub_139C12
int __fastcall sub_139C12(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r5
  void *v4; // r0

  v2 = *(_DWORD **)(a1 + 8);
  if ( v2 )
  {
    do
    {
      v3 = (_DWORD *)*v2;
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  v4 = *(void **)a1;
  *(_DWORD *)a1 = 0;
  if ( v4 )
    operator delete(v4);
  return a1;
}


// ======================================================================
