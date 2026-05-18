// ADDR: 0x1ba828
// SYMBOL: sub_1BA828
int sub_1BA828()
{
  int result; // r0
  unsigned int v1; // r2
  const char *v2; // r3

  free((void *)dword_382818);
  dword_382818 = 0;
  dword_38281C = 0;
  free((void *)dword_382820);
  dword_382820 = 0;
  dword_382824 = 0;
  free((void *)dword_382828);
  dword_382828 = 0;
  dword_38282C = 0;
  free((void *)dword_382840);
  dword_382840 = 0;
  free((void *)dword_382844);
  dword_382844 = 0;
  free((void *)dword_382848);
  dword_382848 = 0;
  __dmb(0xBu);
  do
    result = __ldrex((unsigned int *)&dword_382838);
  while ( __strex(0, (unsigned int *)&dword_382838) );
  __dmb(0xBu);
  if ( result )
  {
    v1 = 0;
    do
    {
      result = *(_DWORD *)&aZnkst6Ndk14Fs1_14[result + 41];
      ++v1;
    }
    while ( result );
    result = LogLevel;
    if ( LogLevel )
    {
      v2 = (const char *)&dword_1BA970;
      if ( v1 <= 1 )
        v2 = &byte_8F794;
      return j_al_print("ReleaseALC", "%u device%s not closed\n", v1, v2);
    }
  }
  return result;
}


// ======================================================================
