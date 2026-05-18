// ADDR: 0x102918
// SYMBOL: sub_102918
bool sub_102918()
{
  unsigned int v0; // r2
  int v1; // r1
  _BOOL4 result; // r0
  int v3; // r0
  unsigned int v4; // r2
  int v5; // r0

  if ( (word_25B210 | word_25B212) << 16 )
  {
    v0 = word_25B210 * word_25B210 + word_25B212 * word_25B212;
    v1 = dword_25C924;
    result = v0 < 0x1000;
    if ( !(v0 >> 12) && dword_25C924 )
    {
      v3 = sub_F0B30();
      v1 = dword_25C924;
      v4 = v3 - dword_25C924;
      result = 1;
      if ( v4 > 0xFA )
        return result;
      goto LABEL_10;
    }
  }
  else
  {
    v1 = dword_25C924;
    result = 0;
  }
  if ( !result && v1 )
  {
    v5 = 0;
LABEL_13:
    dword_25C924 = v5;
    return 0;
  }
LABEL_10:
  if ( !result )
    return 0;
  result = 0;
  if ( !v1 )
  {
    v5 = sub_F0B30();
    goto LABEL_13;
  }
  return result;
}


// ======================================================================
