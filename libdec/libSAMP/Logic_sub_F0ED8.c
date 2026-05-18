// ADDR: 0x15fd40
// SYMBOL: sub_15FD40
struct sigaltstack *__fastcall sub_15FD40(struct sigaltstack *a1)
{
  size_t *p_ss_size; // r5
  rlim_t rlim_cur; // r6
  int v4; // r0
  int v5; // r6
  int v6; // r4
  char *v7; // r0
  int v9; // r0
  int sig; // [sp+8h] [bp-38h] BYREF
  _DWORD v11[4]; // [sp+Ch] [bp-34h] BYREF
  struct rlimit v12; // [sp+1Ch] [bp-24h] BYREF

  p_ss_size = &a1[260].ss_size;
  a1[171].ss_sp = 0;
  a1->ss_sp = &off_22F96C;
  a1[171].ss_flags = 0;
  a1[171].ss_size = 0;
  sub_22178C((int)&a1[260].ss_size, 0x1040u);
  getrlimit(3, &v12);
  rlim_cur = v12.rlim_cur;
  a1[172].ss_sp = (void *)operator new[](v12.rlim_cur);
  a1[172].ss_flags = 0;
  a1[172].ss_size = rlim_cur;
  v4 = sigaltstack(a1 + 172, a1 + 173);
  if ( v4 )
  {
    v9 = _errno(v4);
    sub_15FE3C("UnhandledExceptionFilter: Can't setup staack for signals - {}", v9);
    std::terminate();
  }
  v5 = 0;
  v11[1] = 0;
  v11[2] = 134217732;
  v11[3] = 0;
  v11[0] = sub_15FE58;
  do
  {
    sig = *(_DWORD *)&asc_BA758[v5];
    sigaction(sig, (const struct sigaction *)v11, (struct sigaction *)((char *)&a1[174] + 16 * sig));
    v6 = sig;
    v7 = strsignal(sig);
    strncpy((char *)&p_ss_size[16 * v6], v7, 0x40u);
    sub_1607C4(1, "UnhandledExceptionFilter: Install handler for {} (\"{}\")", 55, &sig, &p_ss_size[16 * sig]);
    v5 += 4;
  }
  while ( v5 != 44 );
  return a1;
}


// ======================================================================
