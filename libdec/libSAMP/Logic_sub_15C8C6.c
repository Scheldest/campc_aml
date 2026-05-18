// ADDR: 0x15c8e2
// SYMBOL: sub_15C8E2
void __fastcall sub_15C8E2(int a1, _DWORD *a2)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r5

  if ( a2 )
  {
    v2 = a2;
    do
    {
      v3 = (_DWORD *)*v2;
      sub_150F66((int)(v2 + 3));
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
}


// ======================================================================
