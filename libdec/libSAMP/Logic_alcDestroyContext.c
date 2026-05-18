// ADDR: 0x1bf3fc
// SYMBOL: sub_1BF3FC
int __fastcall sub_1BF3FC(_DWORD *a1, int a2)
{
  unsigned int v4; // r0
  unsigned int v5; // r3
  pthread_mutex_t *v6; // r6
  unsigned int *v7; // r5
  int v8; // t1
  unsigned int v9; // r5
  int v10; // t1
  unsigned int v11; // r0
  unsigned int v12; // r1
  unsigned int v13; // r1

  if ( pthread_getspecific(dword_38279C) == a1 )
  {
    if ( (unsigned int)LogLevel >= 2 )
      j_al_print("ReleaseContext", "%p released while current on thread\n", a1);
    pthread_setspecific(dword_38279C, 0);
    j_ALCcontext_DecRef(a1);
  }
  v4 = __ldrex((unsigned int *)&dword_382830);
  if ( (_DWORD *)v4 == a1 )
  {
    __dmb(0xBu);
    while ( __strex(0, (unsigned int *)&dword_382830) )
    {
      v5 = __ldrex((unsigned int *)&dword_382830);
      if ( (_DWORD *)v5 != a1 )
        goto LABEL_9;
    }
    __dmb(0xBu);
    j_ALCcontext_DecRef(a1);
  }
  else
  {
LABEL_9:
    __clrex();
    __dmb(0xBu);
  }
  v6 = (pthread_mutex_t *)(a2 + 8);
  j_EnterCriticalSection((pthread_mutex_t *)(a2 + 8));
  v8 = *(_DWORD *)(a2 + 166224);
  v7 = (unsigned int *)(a2 + 166224);
  if ( v8 )
  {
    while ( 1 )
    {
      v11 = a1[65];
      v12 = __ldrex(v7);
      if ( (_DWORD *)v12 == a1 )
        break;
LABEL_13:
      __clrex();
      __dmb(0xBu);
      v9 = *v7;
      v10 = *(_DWORD *)(v9 + 260);
      v7 = (unsigned int *)(v9 + 260);
      if ( !v10 )
        goto LABEL_20;
    }
    __dmb(0xBu);
    while ( __strex(v11, v7) )
    {
      v13 = __ldrex(v7);
      if ( (_DWORD *)v13 != a1 )
        goto LABEL_13;
    }
    __dmb(0xBu);
  }
LABEL_20:
  j_LeaveCriticalSection(v6);
  return j_ALCcontext_DecRef(a1);
}


// ======================================================================
