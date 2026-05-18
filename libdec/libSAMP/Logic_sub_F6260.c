// ADDR: 0xf627c
// SYMBOL: sub_F627C
void __fastcall sub_F627C(int a1, _DWORD *a2)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r5

  if ( a2 )
  {
    v2 = a2;
    do
    {
      v3 = (_DWORD *)*v2;
      sub_F629E(v2 + 3, 0);
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
}


// ======================================================================
