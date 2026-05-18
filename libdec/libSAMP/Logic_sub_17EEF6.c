// ADDR: 0x18179c
// SYMBOL: sub_18179C
int __fastcall sub_18179C(int a1, int a2, int a3)
{
  int result; // r0
  int v7; // r0
  _DWORD v8[3]; // [sp+20h] [bp-130h] BYREF
  _DWORD v9[7]; // [sp+134h] [bp-1Ch] BYREF

  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 44))(a1);
  if ( result )
  {
    v7 = sub_17D4C0((int)v8, 5);
    LOBYTE(v9[0]) = 6;
    sub_17D628(v7, v9, 8, 1);
    sub_17E348();
    v9[0] = sub_17E2E4();
    sub_17D628((int)v8, v9, 32, 1);
    (*(void (__fastcall **)(int, _DWORD *, _DWORD, int, _DWORD, int, int, _DWORD))(*(_DWORD *)a1 + 56))(
      a1,
      v8,
      0,
      6,
      0,
      a2,
      a3,
      0);
    return sub_17D542((int)v8);
  }
  return result;
}


// ======================================================================
