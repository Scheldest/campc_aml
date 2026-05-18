// ADDR: 0xe577c
// SYMBOL: sub_E577C
bool __fastcall sub_E577C(int a1)
{
  int v1; // r1
  int *v2; // r3
  int *v3; // r2
  int v4; // r12
  int v5; // r3

  v1 = *(_DWORD *)(a1 + 84) & 8;
  if ( !v1 )
  {
    v2 = (int *)(a1 + 32);
    *(_DWORD *)(a1 + 28) = 0;
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 24) = 0;
    if ( !*(_BYTE *)(a1 + 90) )
      v2 = (int *)(a1 + 56);
    v3 = (int *)(a1 + 52);
    if ( !*(_BYTE *)(a1 + 90) )
      v3 = (int *)(a1 + 60);
    v4 = *v3;
    v5 = *v2;
    *(_DWORD *)(a1 + 84) = 8;
    *(_DWORD *)(a1 + 8) = v5;
    *(_DWORD *)(a1 + 12) = v5 + v4;
    *(_DWORD *)(a1 + 16) = v5 + v4;
  }
  return v1 == 0;
}


// ======================================================================
