// ADDR: 0x120c7c
// SYMBOL: sub_120C7C
int sub_120C7C(int a1, int a2, int a3, int a4, ...)
{
  int v4; // r0
  int v6; // [sp+1Ch] [bp-14h] BYREF
  int v7; // [sp+20h] [bp-10h] BYREF
  _DWORD v8[3]; // [sp+24h] [bp-Ch] BYREF
  int v9; // [sp+38h] [bp+8h] BYREF
  va_list va; // [sp+38h] [bp+8h]
  int v11; // [sp+3Ch] [bp+Ch] BYREF
  va_list va1; // [sp+3Ch] [bp+Ch]
  int v13; // [sp+40h] [bp+10h] BYREF
  va_list va2; // [sp+40h] [bp+10h]
  int v15; // [sp+44h] [bp+14h] BYREF
  va_list va3; // [sp+44h] [bp+14h]
  int v17; // [sp+48h] [bp+18h] BYREF
  va_list va4; // [sp+48h] [bp+18h]
  va_list va5; // [sp+4Ch] [bp+1Ch] BYREF

  va_start(va5, a4);
  va_start(va4, a4);
  va_start(va3, a4);
  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v9 = va_arg(va1, _DWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _DWORD);
  va_copy(va3, va2);
  v13 = va_arg(va3, _DWORD);
  va_copy(va4, va3);
  v15 = va_arg(va4, _DWORD);
  va_copy(va5, va4);
  v17 = va_arg(va5, _DWORD);
  v4 = *(_DWORD *)(a1 + 16);
  v7 = a3;
  v8[0] = a2;
  v6 = a4;
  if ( !v4 )
    sub_DC92C();
  return (*(int (__fastcall **)(int, _DWORD *, int *, int *, int *, int *, int *, int *, int *, int *))(*(_DWORD *)v4 + 24))(
           v4,
           v8,
           &v7,
           &v6,
           (int *)va,
           (int *)va1,
           (int *)va2,
           (int *)va3,
           (int *)va4,
           (int *)va5);
}


// ======================================================================
