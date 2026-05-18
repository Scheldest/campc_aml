// ADDR: 0xfb760
// SYMBOL: sub_FB760
int sub_FB760(int a1, int a2, int a3, ...)
{
  va_list va; // [sp+14h] [bp-4h] BYREF

  va_start(va, a3);
  return _vsprintf_chk(a1, 0, 255, a3, (int *)va);
}


// ======================================================================
// ADDR: 0x10dfd8
// SYMBOL: sub_10DFD8
int __fastcall sub_10DFD8(int a1, const char **a2)
{
  int result; // r0
  int v4; // r2
  _DWORD *v6; // r1
  _DWORD *v7; // r3
  _DWORD *v8; // r5
  const char *v9; // r3
  int v10[6]; // [sp+10h] [bp-18h] BYREF

  v4 = a1 + 12;
  result = *(_DWORD *)(a1 + 12);
  v6 = *(_DWORD **)(v4 - 8);
  if ( v6 )
  {
    v7 = (_DWORD *)(v4 - 8);
    do
    {
      v8 = v6;
      if ( v6[4] >= result )
        v7 = v6;
      else
        v8 = v6 + 1;
      v6 = (_DWORD *)*v8;
    }
    while ( *v8 );
    if ( v7 != (_DWORD *)(v4 - 8) && result >= v7[4] )
    {
      sub_10E4D0(v10, a1);
      v9 = *(const char **)(v10[0] + 28);
      if ( !(*(unsigned __int8 *)(v10[0] + 20) << 31) )
        v9 = (const char *)(v10[0] + 21);
      *a2 = v9;
      return _android_log_print(3, "AXL", "Load water from file %s", v9);
    }
  }
  return result;
}


// ======================================================================
