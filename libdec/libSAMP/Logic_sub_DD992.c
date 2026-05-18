// ADDR: 0xdd9d2
// SYMBOL: sub_DD9D2
int __fastcall sub_DD9D2(int a1, int a2, char *a3)
{
  int v5; // r6
  int v6; // r0
  int v7; // r1
  int v8; // r2
  char v9; // r3

  if ( a2 )
  {
    v5 = a2;
    do
    {
      v6 = *(_DWORD *)(a1 + 8);
      v7 = v6 + 1;
      if ( *(_DWORD *)(a1 + 12) < (unsigned int)(v6 + 1) )
      {
        (**(void (__fastcall ***)(int))a1)(a1);
        v6 = *(_DWORD *)(a1 + 8);
        v7 = v6 + 1;
      }
      v8 = *(_DWORD *)(a1 + 4);
      --v5;
      v9 = *a3;
      *(_DWORD *)(a1 + 8) = v7;
      *(_BYTE *)(v8 + v6) = v9;
    }
    while ( v5 );
  }
  return a1;
}


// ======================================================================
