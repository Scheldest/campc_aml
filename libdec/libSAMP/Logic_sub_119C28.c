// ADDR: 0x11aa22
// SYMBOL: sub_11AA22
int __fastcall sub_11AA22(int a1, int a2, int a3)
{
  int v3; // r0
  int v5; // [sp+0h] [bp-10h] BYREF
  int v6; // [sp+4h] [bp-Ch] BYREF

  v3 = *(_DWORD *)(a1 + 16);
  v5 = a3;
  v6 = a2;
  if ( !v3 )
    sub_DC92C();
  return (*(int (__fastcall **)(int, int *, int *))(*(_DWORD *)v3 + 24))(v3, &v6, &v5);
}


// ======================================================================
