// ADDR: 0xf80fc
// SYMBOL: sub_F80FC
int sub_F80FC()
{
  char *v0; // r0
  int i; // r1
  int j; // r5
  int result; // r0

  unk_2402E8 = 0LL;
  unk_2402F0 = 0LL;
  unk_2402F8 = 0LL;
  unk_240300 = 0LL;
  unk_240308 = 0LL;
  unk_240310 = 0LL;
  sub_22178C((int)&unk_240318, 0x2760u);
  sub_22177C((int)&byte_242A78, 0xD2u, 4);
  v0 = (char *)&dword_2431E4;
  for ( i = 0; i != 210; ++i )
  {
    for ( j = 0; j != 44; j += 4 )
      *(_DWORD *)&v0[j] = 1148829696;
    dword_242B4C[i] = 1065353216;
    v0 += 44;
    dword_242E94[i] = 1051372191;
  }
  dword_2402D0 = dword_23DF24 + 9773350;
  dword_2402D8 = dword_23DF24 + 10644112;
  dword_2402DC = dword_23DF24 + 9774940;
  dword_2402E0 = dword_23DF24 + 9848804;
  result = dword_23DF24 + 9773476;
  dword_2402CC = dword_23DF24 + 9773696;
  dword_2402D4 = dword_23DF24 + 9773476;
  return result;
}


// ======================================================================
// ADDR: 0xf84e4
// SYMBOL: sub_F84E4
int sub_F84E4()
{
  int v0; // r6
  int *v1; // r5
  char *v2; // r4
  int result; // r0

  v0 = 1812;
  v1 = &dword_245634;
  v2 = (char *)&unk_92E2A;
  do
  {
    result = sub_10919C(v2);
    *v1++ = result;
    v2 += 72;
    --v0;
  }
  while ( v0 );
  return result;
}


// ======================================================================
// ADDR: 0x103978
// SYMBOL: sub_103978
int sub_103978()
{
  int result; // r0

  _android_log_print(4, "AXL", "Applying samp patches.. (ingame)");
  sub_22177C(dword_23DF24 + 10015314, 0x64u, 1);
  result = dword_23DF24 + 10015314;
  *(_DWORD *)(dword_23DF24 + 10015416) = 100;
  return result;
}


// ======================================================================
// ADDR: 0x107328
// SYMBOL: sub_107328
int sub_107328()
{
  dword_25D988 = operator new(0x100u);
  return sub_22178C(dword_25D988, 0x100u);
}


// ======================================================================
