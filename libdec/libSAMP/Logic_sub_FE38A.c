// ADDR: 0xf0ac4
// SYMBOL: sub_F0AC4
int sub_F0AC4()
{
  int result; // r0
  struct timeval v1; // [sp+0h] [bp-10h] BYREF

  if ( dword_23DEF4 && *(_DWORD *)(dword_23DEF4 + 536) == 5 )
    (*(void (__fastcall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_23DEF4 + 528) + 12))(
      *(_DWORD *)(dword_23DEF4 + 528),
      1000,
      0);
  byte_23DF18 = 1;
  gettimeofday(&v1, 0);
  result = v1.tv_usec / 1000 + 1000 * v1.tv_sec;
  dword_23DF20 = result;
  return result;
}


// ======================================================================
