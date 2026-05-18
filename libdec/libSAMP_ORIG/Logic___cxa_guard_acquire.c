// ADDR: 0x106ca8
// SYMBOL: sub_106CA8
int __fastcall sub_106CA8(int a1)
{
  if ( !*(_BYTE *)(a1 + 4) )
  {
    *(_DWORD *)a1 = syscall(224);
    *(_BYTE *)(a1 + 4) = 1;
  }
  return a1;
}


// ======================================================================
// ADDR: 0x106cc4
// SYMBOL: sub_106CC4
const char **__fastcall sub_106CC4(const char **a1)
{
  void *v3; // r0

  if ( pthread_mutex_unlock((pthread_mutex_t *)&unk_1AF688) )
  {
    v3 = (void *)((int (*)(const char *, ...))loc_106D0C)("%s failed to release mutex", *a1);
    sub_71D14(v3);
  }
  return a1;
}


// ======================================================================
