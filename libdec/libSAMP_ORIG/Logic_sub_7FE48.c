// ADDR: 0x7fe30
// SYMBOL: sub_7FE30
_DWORD *__fastcall sub_7FE30(std::logic_error *a1, const char *a2)
{
  _DWORD *result; // r0

  result = (_DWORD *)std::logic_error::logic_error(a1, a2);
  *result = &off_1147D4;
  return result;
}


// ======================================================================
// ADDR: 0x10c188
// SYMBOL: sub_10C188
int __fastcall sub_10C188(void (*lpfunc)(void *), void *obj, void *lpdso_handle)
{
  return _cxa_atexit(lpfunc, obj, lpdso_handle);
}


// ======================================================================
