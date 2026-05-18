// ADDR: 0x150ec4
// SYMBOL: sub_150EC4
void __fastcall sub_150EC4(int a1, _DWORD *a2)
{
  _DWORD *v2; // r4
  int v3; // r0
  _DWORD *v4; // r6

  if ( a2 )
  {
    v2 = a2;
    do
    {
      v3 = v2[3];
      v4 = (_DWORD *)*v2;
      v2[3] = 0;
      if ( v3 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
      operator delete(v2);
      v2 = v4;
    }
    while ( v4 );
  }
}


// ======================================================================
