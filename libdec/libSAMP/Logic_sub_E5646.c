// ADDR: 0xe57c2
// SYMBOL: sub_E57C2
int __fastcall sub_E57C2(int result)
{
  unsigned int v1; // r3
  int v2; // r1
  int v3; // r2
  int v4; // r2

  if ( (*(_BYTE *)(result + 84) & 0x10) == 0 )
  {
    v1 = *(_DWORD *)(result + 52);
    v2 = 0;
    v3 = 0;
    *(_DWORD *)(result + 8) = 0;
    *(_DWORD *)(result + 12) = 0;
    *(_DWORD *)(result + 16) = 0;
    if ( v1 >= 9 )
    {
      if ( *(_BYTE *)(result + 90) )
      {
        v2 = *(_DWORD *)(result + 32);
        v4 = v1 + v2;
      }
      else
      {
        v2 = *(_DWORD *)(result + 56);
        v4 = *(_DWORD *)(result + 60) + v2;
      }
      v3 = v4 - 1;
    }
    *(_DWORD *)(result + 20) = v2;
    *(_DWORD *)(result + 24) = v2;
    *(_DWORD *)(result + 84) = 16;
    *(_DWORD *)(result + 28) = v3;
  }
  return result;
}


// ======================================================================
