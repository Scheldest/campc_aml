// ADDR: 0x11ff0c
// SYMBOL: sub_11FF0C
int __fastcall sub_11FF0C(int a1, int a2, int a3, int a4, int a5, char a6)
{
  int v6; // r0
  char v8; // [sp+Bh] [bp-15h] BYREF
  int v9; // [sp+Ch] [bp-14h] BYREF
  int v10; // [sp+10h] [bp-10h] BYREF
  _DWORD v11[3]; // [sp+14h] [bp-Ch] BYREF

  v6 = *(_DWORD *)(a1 + 16);
  v10 = a3;
  v11[0] = a2;
  v9 = a4;
  v8 = a6;
  if ( !v6 )
    sub_DC92C();
  return (*(int (__fastcall **)(int, _DWORD *, int *, int *, int *, char *))(*(_DWORD *)v6 + 24))(
           v6,
           v11,
           &v10,
           &v9,
           &a5,
           &v8);
}


// ======================================================================
