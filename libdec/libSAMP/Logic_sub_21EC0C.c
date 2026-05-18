// ADDR: 0x21ec54
// SYMBOL: sub_21EC54
int *__fastcall sub_21EC54(int a1)
{
  unsigned int v2; // r1
  int *v3; // r0
  int *v4; // r2
  int *v5; // r3
  int *v6; // r5
  unsigned int v7; // r5
  int *v8; // r0
  int v9; // r1
  void *v11; // [sp+0h] [bp-18h] BYREF

  v11 = &unk_384120;
  EnterCriticalSection_0((pthread_mutex_t *)&unk_384120);
  v2 = ((unsigned int)(a1 + 3) >> 2) + 1;
  v3 = (int *)dword_384124;
  v4 = dword_383F20;
  if ( !dword_384124 )
  {
    dword_384124 = (int)dword_383F20;
    dword_383F20[0] = 8388736;
    v3 = dword_383F20;
  }
  v5 = 0;
  while ( 1 )
  {
    v6 = 0;
    if ( !v3 || v3 == (int *)&unk_384120 )
      break;
    v7 = *((unsigned __int16 *)v3 + 1);
    if ( v2 < v7 )
    {
      v4 = (int *)(v7 - v2);
      v5 = (int *)(unsigned __int16)(v7 - v2);
      *((_WORD *)v3 + 1) = v7 - v2;
      LOWORD(v3[(_DWORD)v5]) = 0;
      v8 = &v3[(_DWORD)v5];
      v6 = v8 + 1;
      *((_WORD *)v8 + 1) = v2;
      break;
    }
    if ( v2 == v7 )
    {
      v9 = *(unsigned __int16 *)v3;
      if ( v5 )
        *(_WORD *)v5 = v9;
      else
        dword_384124 = (int)&dword_383F20[v9];
      v2 = 0;
      *(_WORD *)v3 = 0;
      v6 = v3 + 1;
      break;
    }
    v5 = v3;
    v3 = &dword_383F20[*(unsigned __int16 *)v3];
  }
  ((void (__fastcall *)(void **, unsigned int, int *, int *))sub_21EDF0)(&v11, v2, v4, v5);
  return v6;
}


// ======================================================================
