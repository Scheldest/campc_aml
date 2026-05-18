// ADDR: 0x110564
// SYMBOL: sub_110564
int sub_110564(int a1, int a2, int a3, int a4, char a5, ...)
{
  int v5; // r0
  char v7; // [sp+13h] [bp-15h] BYREF
  int v8; // [sp+14h] [bp-14h] BYREF
  int v9; // [sp+18h] [bp-10h] BYREF
  _DWORD v10[3]; // [sp+1Ch] [bp-Ch] BYREF
  int v11; // [sp+2Ch] [bp+4h] BYREF
  va_list va; // [sp+2Ch] [bp+4h]
  va_list va1; // [sp+30h] [bp+8h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v11 = va_arg(va1, _DWORD);
  v5 = *(_DWORD *)(a1 + 16);
  v9 = a3;
  v10[0] = a2;
  v8 = a4;
  v7 = a5;
  if ( !v5 )
    sub_DC92C();
  return (*(int (__fastcall **)(int, _DWORD *, int *, int *, char *, int *, int *))(*(_DWORD *)v5 + 24))(
           v5,
           v10,
           &v9,
           &v8,
           &v7,
           (int *)va,
           (int *)va1);
}


// ======================================================================
