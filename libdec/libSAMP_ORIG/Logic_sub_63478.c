// ADDR: 0x6c95c
// SYMBOL: sub_6C95C
int sub_6C95C(const char *a1, ...)
{
  void (__fastcall *v1)(_DWORD, _BYTE *); // r4
  int v2; // r5
  _BYTE v4[1024]; // [sp+8h] [bp-40Ch] BYREF
  int v5; // [sp+408h] [bp-Ch]
  va_list va; // [sp+41Ch] [bp+8h] BYREF

  va_start(va, a1);
  if ( *(_DWORD *)(dword_1A4408 + 2350828) )
  {
    _vsprintf_chk(v4, 0, 1024, a1, va, va);
    v1 = (void (__fastcall *)(_DWORD, _BYTE *))(dword_1A4408 + 1234065);
    v2 = *(_DWORD *)(dword_1A4408 + 2350828);
    if ( !v2 )
      _android_log_print(4, "SAMP_ORIG", "UI pointer is null");
    v1(*(_DWORD *)(v2 + 96), v4);
  }
  else
  {
    _android_log_print(4, "SAMP_ORIG", "UI pointer is null");
    _android_log_print(4, "SAMP_ORIG", "SAMP::addInfoMessage: UI pointer is null");
  }
  return v5;
}


// ======================================================================
