// ADDR: 0xe2f44
// SYMBOL: sub_E2F44
_DWORD *__fastcall sub_E2F44(std::error_category *a1)
{
  _DWORD *result; // r0

  result = (_DWORD *)std::error_category::error_category(a1);
  *result = &off_112F88;
  return result;
}


// ======================================================================
