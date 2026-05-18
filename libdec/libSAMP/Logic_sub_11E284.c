// ADDR: 0x11e388
// SYMBOL: sub_11E388
int sub_11E388(int a1, int a2, int a3, int a4, int a5, ...)
{
  int v5; // r0
  int v7; // [sp+0h] [bp-18h] BYREF
  _DWORD v8[5]; // [sp+4h] [bp-14h] BYREF
  va_list va; // [sp+1Ch] [bp+4h] BYREF

  va_start(va, a5);
  v5 = *(_DWORD *)(a1 + 16);
  v8[0] = a3;
  v8[1] = a4;
  v8[2] = a5;
  v7 = a2;
  if ( !v5 )
    sub_DC92C();
  return (*(int (__fastcall **)(int, int *, _DWORD *, int *))(*(_DWORD *)v5 + 24))(v5, &v7, v8, (int *)va);
}


// ======================================================================
