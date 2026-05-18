// ADDR: 0xf236c
// SYMBOL: sub_F236C
int sub_F236C(int a1, int a2, const char *a3, ...)
{
  va_list va; // [sp+14h] [bp-4h] BYREF

  va_start(va, a3);
  return _vsprintf_chk(a1, 0, 256, a3, (int *)va);
}


// ======================================================================
// ADDR: 0xf8a2c
// SYMBOL: sub_F8A2C
int __fastcall sub_F8A2C(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 )
    return *(unsigned __int16 *)(v1 + 38);
  _android_log_print(6, "AXL", "CEntity: Can't read model id - m_pEntity is nullptr");
  return 0;
}


// ======================================================================
// ADDR: 0x109864
// SYMBOL: sub_109864
int __fastcall sub_109864(int a1)
{
  int *v1; // r0

  v1 = *(int **)(a1 + 12);
  if ( v1 )
    return sub_10837C(v1);
  else
    return 0;
}


// ======================================================================
// ADDR: 0x109ab4
// SYMBOL: sub_109AB4
int __fastcall sub_109AB4(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(a1 + 12);
  if ( v1 )
    return *(_DWORD *)(v1 + 1228);
  else
    return 0;
}


// ======================================================================
// ADDR: 0x10a484
// SYMBOL: sub_10A484
int __fastcall sub_10A484(int a1)
{
  if ( *(_DWORD *)(a1 + 12) && sub_108354(*(_DWORD *)(a1 + 8)) )
    return *(unsigned __int8 *)(*(_DWORD *)(a1 + 12) + 1164);
  else
    return 0;
}


// ======================================================================
