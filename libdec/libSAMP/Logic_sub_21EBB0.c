// ADDR: 0x221e78
// SYMBOL: sub_221E78
int __fastcall sub_221E78(int a1, int a2, __int64 a3, _DWORD *a4)
{
  int v4; // r5
  int result; // r0
  int v7; // r2
  int v8; // r0
  int v9; // r1

  v4 = a3;
  if ( a2 == 5 )
  {
    result = 2;
    if ( !a3 )
    {
      v7 = *a4;
      v8 = a1;
      v9 = 143;
      return 2 * (sub_222CE4(v8, v9, v7) != 0);
    }
  }
  else
  {
    if ( a2 == 1 )
    {
      result = 2;
      if ( (HIDWORD(a3) & 0xFFFFFFFB) != 1 )
        return result;
      if ( HIDWORD(a3) == 1 )
      {
        if ( (unsigned int)a3 > 0xF )
          return result;
        sub_222EF0(a1);
      }
      else if ( (unsigned int)a3 > 0x1F )
      {
        return result;
      }
      return 2 * (sub_222E24(a1, v4 + 256, *a4, a4[1]) != 0);
    }
    if ( a2 )
    {
      fprintf((FILE *)((char *)&_sF + 168), "libunwind: %s - %s\n", "_Unwind_VRS_Set", "unsupported register class");
      fflush((FILE *)((char *)&_sF + 168));
      abort();
    }
    result = 2;
    if ( (unsigned int)a3 <= 0xF && !HIDWORD(a3) )
    {
      v7 = *a4;
      v8 = a1;
      v9 = v4;
      return 2 * (sub_222CE4(v8, v9, v7) != 0);
    }
  }
  return result;
}


// ======================================================================
