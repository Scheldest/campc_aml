// ADDR: 0x21e100
// SYMBOL: sub_21E100
int __fastcall sub_21E100(int a1)
{
  if ( !*(_BYTE *)(a1 + 4) )
  {
    *(_DWORD *)a1 = syscall(224);
    *(_BYTE *)(a1 + 4) = 1;
  }
  return a1;
}


// ======================================================================
// ADDR: 0x21e11c
// SYMBOL: sub_21E11C
const char **__fastcall sub_21E11C(const char **a1)
{
  void *v3; // r0

  if ( LeaveCriticalSection_0((pthread_mutex_t *)&unk_383F08) )
  {
    v3 = (void *)((int (*)(const char *, ...))loc_21E164)("%s failed to release mutex", *a1);
    sub_DC924(v3);
  }
  return a1;
}


// ======================================================================
