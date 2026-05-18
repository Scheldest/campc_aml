// ADDR: 0x1806c4
// SYMBOL: sub_1806C4
int __fastcall sub_1806C4(int a1, int a2, int a3, int a4, int a5, int a6, __int64 a7, int a8)
{
  int result; // r0
  __int64 v13; // [sp+1Ch] [bp-24h] BYREF

  v13 = a7;
  result = 0;
  if ( a2 && a3 >= 0 && *(_DWORD *)(a1 + 832) )
  {
    if ( *(_BYTE *)(a1 + 4) )
      return 0;
    if ( a8 )
      goto LABEL_7;
    if ( sub_17E580((int)&v13, (int)&unk_BE944) )
      return 0;
    if ( *(_DWORD *)(a1 + 2048)
      && (*(int (__fastcall **)(int, _DWORD, _DWORD))(*(_DWORD *)a1 + 96))(a1, v13, HIDWORD(v13)) == -1 )
    {
      return (***(int (__fastcall ****)(_DWORD, int, int, int, int, int, _DWORD, _DWORD))(a1 + 2048))(
               *(_DWORD *)(a1 + 2048),
               a2,
               8 * a3,
               a4,
               a5,
               a6,
               v13,
               HIDWORD(v13));
    }
    else
    {
LABEL_7:
      sub_180774(a1, a2, 8 * a3, a4, a5, a6, v13, HIDWORD(v13), a8, 0);
      return 1;
    }
  }
  return result;
}


// ======================================================================
