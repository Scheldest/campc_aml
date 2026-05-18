// ADDR: 0x11de0c
// SYMBOL: sub_11DE0C
int sub_11DE0C(int a1, int a2, int a3, int a4, ...)
{
  int v4; // r0
  int v6; // [sp+4h] [bp-14h] BYREF
  int v7; // [sp+8h] [bp-10h] BYREF
  int v8; // [sp+Ch] [bp-Ch] BYREF
  va_list va; // [sp+18h] [bp+0h] BYREF

  va_start(va, a4);
  v4 = *(_DWORD *)(a1 + 16);
  v7 = a3;
  v8 = a2;
  v6 = a4;
  if ( !v4 )
    sub_DC92C();
  return (*(int (__fastcall **)(int, int *, int *, int *, int *))(*(_DWORD *)v4 + 24))(v4, &v8, &v7, &v6, (int *)va);
}


// ======================================================================
