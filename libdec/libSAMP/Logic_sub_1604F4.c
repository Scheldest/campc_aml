// ADDR: 0x221d60
// SYMBOL: sub_221D60
int __fastcall sub_221D60(int a1, int a2, __int64 a3, int a4)
{
  int v4; // r6
  int result; // r0
  int v7; // r0
  int v8; // r1

  v4 = a3;
  if ( a2 == 5 )
  {
    result = 2;
    if ( !a3 )
    {
      v7 = a1;
      v8 = 143;
      return 2 * (sub_222C8C(v7, v8, a4) != 0);
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
      return 2 * (sub_222DCC(a1, v4 + 256, a4) != 0);
    }
    if ( a2 )
    {
      fprintf(
        (FILE *)((char *)&_sF + 168),
        "libunwind: %s - %s\n",
        "_Unwind_VRS_Get_Internal",
        "unsupported register class");
      fflush((FILE *)((char *)&_sF + 168));
      abort();
    }
    result = 2;
    if ( (unsigned int)a3 <= 0xF && !HIDWORD(a3) )
    {
      v7 = a1;
      v8 = a3;
      return 2 * (sub_222C8C(v7, v8, a4) != 0);
    }
  }
  return result;
}


// ======================================================================
