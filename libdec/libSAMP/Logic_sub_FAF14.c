// ADDR: 0xfb034
// SYMBOL: sub_FB034
int sub_FB034(int a1, int a2, int a3, int a4, ...)
{
  int v4; // r0
  int v6; // [sp+24h] [bp-1Ch] BYREF
  int v7; // [sp+28h] [bp-18h] BYREF
  _DWORD v8[5]; // [sp+2Ch] [bp-14h] BYREF
  int v9; // [sp+48h] [bp+8h] BYREF
  va_list va; // [sp+48h] [bp+8h]
  int v11; // [sp+4Ch] [bp+Ch] BYREF
  va_list va1; // [sp+4Ch] [bp+Ch]
  int v13; // [sp+50h] [bp+10h] BYREF
  va_list va2; // [sp+50h] [bp+10h]
  int v15; // [sp+54h] [bp+14h] BYREF
  va_list va3; // [sp+54h] [bp+14h]
  int v17; // [sp+58h] [bp+18h] BYREF
  va_list va4; // [sp+58h] [bp+18h]
  int v19; // [sp+5Ch] [bp+1Ch] BYREF
  va_list va5; // [sp+5Ch] [bp+1Ch]
  int v21; // [sp+60h] [bp+20h] BYREF
  va_list va6; // [sp+60h] [bp+20h]
  int v23; // [sp+64h] [bp+24h] BYREF
  va_list va7; // [sp+64h] [bp+24h]
  va_list va8; // [sp+68h] [bp+28h] BYREF

  va_start(va8, a4);
  va_start(va7, a4);
  va_start(va6, a4);
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
  va_copy(va6, va5);
  v19 = va_arg(va6, _DWORD);
  va_copy(va7, va6);
  v21 = va_arg(va7, _DWORD);
  va_copy(va8, va7);
  v23 = va_arg(va8, _DWORD);
  v4 = *(_DWORD *)(a1 + 16);
  v7 = a3;
  v8[0] = a2;
  v6 = a4;
  if ( !v4 )
    sub_DC92C();
  return (*(int (__fastcall **)(int, _DWORD *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *))(*(_DWORD *)v4 + 24))(
           v4,
           v8,
           &v7,
           &v6,
           (int *)va,
           (int *)va1,
           (int *)va2,
           (int *)va3,
           (int *)va4,
           (int *)va5,
           (int *)va6,
           (int *)va7,
           (int *)va8);
}


// ======================================================================
