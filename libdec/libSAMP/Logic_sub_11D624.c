// ADDR: 0x11d734
// SYMBOL: sub_11D734
int __fastcall sub_11D734(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, char a9)
{
  int v9; // r0
  char v11; // [sp+1Bh] [bp-15h] BYREF
  int v12; // [sp+1Ch] [bp-14h] BYREF
  int v13; // [sp+20h] [bp-10h] BYREF
  _DWORD v14[3]; // [sp+24h] [bp-Ch] BYREF

  v9 = *(_DWORD *)(a1 + 16);
  v13 = a3;
  v14[0] = a2;
  v12 = a4;
  v11 = a9;
  if ( !v9 )
    sub_DC92C();
  return (*(int (__fastcall **)(int, _DWORD *, int *, int *, int *, int *, int *, int *, char *))(*(_DWORD *)v9 + 24))(
           v9,
           v14,
           &v13,
           &v12,
           &a5,
           &a6,
           &a7,
           &a8,
           &v11);
}


// ======================================================================
