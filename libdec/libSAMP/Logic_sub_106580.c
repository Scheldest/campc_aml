// ADDR: 0x10679c
// SYMBOL: sub_10679C
int __fastcall sub_10679C(int a1)
{
  int v1; // r2
  int result; // r0
  _DWORD v4[18]; // [sp+30h] [bp-48h] BYREF

  v1 = *(_DWORD *)(a1 + 60);
  if ( v1 )
  {
    sub_107188("\n\aiifffiissi", *(_DWORD *)(a1 + 8), v1, 6, 0, 0, 0, 0, 0, 0, 6);
    *(_DWORD *)(a1 + 60) = 0;
  }
  sub_F8910(a1, v4);
  (*(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a1 + 16))(a1, v4[12], v4[13], v4[14]);
  result = 0;
  *(_BYTE *)(a1 + 59) = 0;
  return result;
}


// ======================================================================
