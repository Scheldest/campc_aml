// ADDR: 0x159880
// SYMBOL: sub_159880
std::__ndk1 *__fastcall sub_159880(std::__ndk1 *result, std::__ndk1 *this)
{
  std::__ndk1 *v2; // r4
  std::__ndk1 *v3; // r5
  unsigned int v4; // r6
  unsigned int v5; // r1
  unsigned int v6; // r1
  unsigned int v7; // r1

  v2 = result;
  if ( this == (std::__ndk1 *)((char *)&dword_0 + 1) )
  {
    v3 = (std::__ndk1 *)(&dword_0 + 2);
  }
  else
  {
    result = (std::__ndk1 *)((char *)this - 1);
    v3 = this;
    if ( ((unsigned int)this & ((unsigned int)this - 1)) != 0 )
    {
      result = (std::__ndk1 *)std::__next_prime(this, (unsigned int)this);
      v3 = result;
    }
  }
  v4 = *((_DWORD *)v2 + 1);
  if ( (unsigned int)v3 > v4 )
    return (std::__ndk1 *)sub_159938(v2, v3);
  if ( (unsigned int)v3 < v4 )
  {
    result = (std::__ndk1 *)ceilf((float)*((unsigned int *)v2 + 3) / *((float *)v2 + 4));
    if ( v4 < 3
      || (v6 = ((v4 - ((v4 >> 1) & 0x55555555)) & 0x33333333) + (((v4 - ((v4 >> 1) & 0x55555555)) >> 2) & 0x33333333),
          v5 = (16843009 * ((v6 + (v6 >> 4)) & 0xF0F0F0F)) >> 24,
          v5 > 1) )
    {
      result = (std::__ndk1 *)std::__next_prime(result, v5);
    }
    else
    {
      v7 = 32 - __clz((unsigned int)result - 1);
      if ( (unsigned int)result >= 2 )
        result = (std::__ndk1 *)(1 << v7);
    }
    if ( v3 < result )
      v3 = result;
    if ( (unsigned int)v3 < v4 )
      return (std::__ndk1 *)sub_159938(v2, v3);
  }
  return result;
}


// ======================================================================
