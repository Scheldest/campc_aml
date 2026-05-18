// ADDR: 0x68858
// SYMBOL: sub_68858
int sub_68858()
{
  timeval tv; // [sp+4h] [bp-14h] BYREF

  gettimeofday(&tv, 0);
  return tv.tv_usec / 1000 + 1000 * tv.tv_sec;
}


// ======================================================================
