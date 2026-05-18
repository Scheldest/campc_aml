// ADDR: 0x6a05c
// SYMBOL: sub_6A05C
int __fastcall sub_6A05C(int a1, __int16 a2, char a3, __int16 a4, char *s)
{
  unsigned __int8 v9; // r9
  int v10; // r0
  __int16 v12; // [sp+1Eh] [bp-132h] BYREF
  _BYTE v13[276]; // [sp+20h] [bp-130h] BYREF
  int v14; // [sp+134h] [bp-1Ch]

  _android_log_print(4, "SAMP_ORIG", "sendDialogResponse");
  if ( *(_DWORD *)(a1 + 536) == 5 )
  {
    v9 = strlen(s);
    v10 = sub_86B90(v13);
    v12 = a2;
    sub_86D52(v10, &v12, 16, 1);
    LOBYTE(v12) = a3;
    sub_86D52(v13, &v12, 8, 1);
    v12 = a4;
    sub_86D52(v13, &v12, 16, 1);
    LOBYTE(v12) = v9;
    sub_86D52(v13, &v12, 8, 1);
    sub_86C1C(v13, s, v9);
    (*(void (__fastcall **)(_DWORD, void *, _BYTE *, int, int, _DWORD, _DWORD, int, int, int, _DWORD))(**(_DWORD **)(a1 + 528) + 108))(
      *(_DWORD *)(a1 + 528),
      &unk_116E28,
      v13,
      1,
      9,
      0,
      0,
      -1,
      0xFFFF,
      0xFFFF,
      0);
    sub_86BF8(v13);
  }
  return v14;
}


// ======================================================================
