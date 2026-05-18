// ADDR: 0x79bcc
// SYMBOL: sub_79BCC
int __fastcall sub_79BCC(int a1, int a2, __int16 a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v15; // [sp+1Ch] [bp-12Ch] BYREF
  _BYTE v16[276]; // [sp+20h] [bp-128h] BYREF
  int v17; // [sp+134h] [bp-14h]

  sub_86B90(v16);
  if ( a2 )
    sub_86F46(v16);
  else
    sub_86ECA(v16);
  LOWORD(v15) = a3;
  sub_86D52(v16, &v15, 16, 1);
  v15 = a4;
  sub_86D52(v16, &v15, 32, 1);
  v15 = a5;
  sub_86D52(v16, &v15, 32, 1);
  v15 = a6;
  sub_86D52(v16, &v15, 32, 1);
  v15 = a7;
  sub_86D52(v16, &v15, 32, 1);
  v15 = a8;
  sub_86D52(v16, &v15, 32, 1);
  v15 = a9;
  sub_86D52(v16, &v15, 32, 1);
  v15 = a10;
  sub_86D52(v16, &v15, 32, 1);
  (*(void (__fastcall **)(_DWORD, void *, _BYTE *, int, int, _DWORD, _DWORD, int, int, int, _DWORD))(**(_DWORD **)(a1 + 528) + 108))(
    *(_DWORD *)(a1 + 528),
    &unk_116E40,
    v16,
    1,
    8,
    0,
    0,
    -1,
    0xFFFF,
    0xFFFF,
    0);
  sub_86BF8(v16);
  return v17;
}


// ======================================================================
