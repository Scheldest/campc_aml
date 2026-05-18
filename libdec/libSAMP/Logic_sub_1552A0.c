// ADDR: 0x15c65c
// SYMBOL: sub_15C65C
void __fastcall sub_15C65C(int a1, int a2, __int16 a3)
{
  int v5; // r0
  __int64 v6; // kr00_8
  unsigned int *v7; // r0
  unsigned int v8; // r1
  int v9; // r0
  __int16 v10[5]; // [sp+6h] [bp-Ah] BYREF

  v10[0] = a3;
  v5 = sub_15D7E2(a2 + 24, v10);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 12);
    *(_QWORD *)a1 = v6;
    if ( HIDWORD(v6) )
    {
      v7 = (unsigned int *)(HIDWORD(v6) + 4);
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 + 1, v7) );
    }
  }
  else
  {
    v9 = sub_15DBC6(a2 + 44, v10);
    if ( v9 )
    {
      sub_15C1BC(a1, a2, v10[0], (unsigned __int8 *)(v9 + 12), *(unsigned __int8 *)(v9 + 24));
    }
    else
    {
      *(_DWORD *)a1 = 0;
      *(_DWORD *)(a1 + 4) = 0;
    }
  }
}


// ======================================================================
