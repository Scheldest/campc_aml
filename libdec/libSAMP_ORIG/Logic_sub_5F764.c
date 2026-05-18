// ADDR: 0x6b238
// SYMBOL: sub_6B238
int sub_6B238(const char *a1, ...)
{
  int v2; // r3
  char v4[256]; // [sp+8h] [bp-114h] BYREF
  int v5; // [sp+108h] [bp-14h]
  int vars8; // [sp+124h] [bp+8h] BYREF
  va_list va; // [sp+124h] [bp+8h]
  int varsC; // [sp+128h] [bp+Ch]
  va_list va1; // [sp+12Ch] [bp+10h] BYREF

  va_start(va1, a1);
  va_start(va, a1);
  vars8 = va_arg(va1, _DWORD);
  varsC = va_arg(va1, _DWORD);
  v2 = dword_1A4404 + 7170172;
  if ( dword_1A4404 == -7170172 )
  {
    _android_log_print(6, "SAMP_ORIG", "Failed to initialize settings. (game storage null)", v2);
    std::terminate();
  }
  if ( !dword_1A4414 )
  {
    sub_6B318(v4, 7170172, varsC, v2);
    dword_1A4414 = (int)fopen(v4, "w");
  }
  sub_10967C((int)v4, 0xFFu);
  vsnprintf(v4, 0xFFu, a1, va);
  _android_log_write(4, "SAMP_MOBILE", v4);
  if ( dword_1A4414 )
  {
    fprintf((FILE *)dword_1A4414, "%s\n", v4);
    fflush((FILE *)dword_1A4414);
  }
  return v5;
}


// ======================================================================
// ADDR: 0x10967c
// SYMBOL: sub_10967C
void *__fastcall sub_10967C(void *a1, size_t n)
{
  return memset(a1, 0, n);
}


// ======================================================================
