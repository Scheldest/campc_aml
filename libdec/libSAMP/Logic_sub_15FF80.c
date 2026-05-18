// ADDR: 0x15ff14
// SYMBOL: sub_15FF14
struct sigaltstack *__fastcall sub_15FF14(struct sigaltstack *a1)
{
  int v2; // r5
  void *ss_sp; // r0

  v2 = 0;
  a1->ss_sp = &off_22F96C;
  do
  {
    sigaction(
      *(_DWORD *)&asc_BA758[v2],
      (const struct sigaction *)((char *)&a1[174] + 16 * *(_DWORD *)&asc_BA758[v2]),
      0);
    v2 += 4;
  }
  while ( v2 != 44 );
  sigaltstack(a1 + 173, 0);
  ss_sp = a1[172].ss_sp;
  if ( ss_sp )
    operator delete[](ss_sp);
  sub_1606B0(&a1[171]);
  return a1;
}


// ======================================================================
