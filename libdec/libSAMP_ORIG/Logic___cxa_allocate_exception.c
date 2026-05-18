// ADDR: 0x1077b4
// SYMBOL: sub_1077B4
void *__fastcall sub_1077B4(size_t a1, int a2, void *a3, void *a4)
{
  size_t v4; // r4
  void *v6[4]; // [sp+0h] [bp-10h] BYREF

  v6[0] = a3;
  v6[1] = a4;
  v4 = a1;
  if ( !a1 )
    v4 = 1;
  if ( posix_memalign(v6, 0x10u, v4) )
    return (void *)sub_1077FC(v4);
  else
    return v6[0];
}


// ======================================================================
