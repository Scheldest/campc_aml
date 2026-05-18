// ADDR: 0x128150
// SYMBOL: sub_128150
int __fastcall sub_128150(int a1, int a2, int a3, char a4)
{
  int v4; // r0
  char v6; // [sp+7h] [bp-11h] BYREF
  int v7; // [sp+8h] [bp-10h] BYREF
  int v8; // [sp+Ch] [bp-Ch] BYREF

  v4 = *(_DWORD *)(a1 + 16);
  v7 = a3;
  v8 = a2;
  v6 = a4;
  if ( !v4 )
    sub_DC92C();
  return (*(int (__fastcall **)(int, int *, int *, char *))(*(_DWORD *)v4 + 24))(v4, &v8, &v7, &v6);
}


// ======================================================================
