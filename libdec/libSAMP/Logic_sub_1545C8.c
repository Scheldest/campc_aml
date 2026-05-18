// ADDR: 0x1546ec
// SYMBOL: sub_1546EC
int sub_1546EC(int a1, int a2, const char *a3, ...)
{
  va_list va; // [sp+14h] [bp-4h] BYREF

  va_start(va, a3);
  return _vsprintf_chk(a1, 0, 2047, a3, va);
}


// ======================================================================
// ADDR: 0x159660
// SYMBOL: sub_159660
const char *__fastcall sub_159660(int a1)
{
  int v1; // r0
  int v3; // [sp+4h] [bp-Ch] BYREF

  v3 = a1;
  v1 = sub_159A70(&unk_381A14, &v3);
  if ( v1 )
    return *(const char **)(v1 + 12);
  else
    return "BASS_ERROR_UNKNOWN";
}


// ======================================================================
