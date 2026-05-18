// ADDR: 0x152f2c
// SYMBOL: sub_152F2C
void __fastcall sub_152F2C(int a1, _DWORD *a2)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r5

  if ( a2 )
  {
    v2 = a2;
    do
    {
      v3 = (_DWORD *)*v2;
      sub_153336(v2 + 3, 0);
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
}


// ======================================================================
