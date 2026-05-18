// ADDR: 0x180874
// SYMBOL: sub_180874
int __fastcall sub_180874(int a1, int *a2, int a3, int a4, int a5, arg6_180874 a6, int a7)
{
  int v11; // r4
  arg6_180874 v13; // [sp+1Ch] [bp-24h] BYREF

  v13 = a6;
  if ( !byte_381C18 )
  {
    pthread_mutex_init((pthread_mutex_t *)&unk_381C14, 0);
    byte_381C18 = 1;
  }
  EnterCriticalSection_0((pthread_mutex_t *)&unk_381C14);
  if ( *a2 == 0 || (unsigned int)*a2 >= 0xFFFFFFF9 || !*(_DWORD *)(a1 + 832) || *(_BYTE *)(a1 + 4) )
    goto LABEL_7;
  if ( a7 )
  {
LABEL_10:
    sub_180774(a1, (unsigned __int8 *)a2[3], *a2, a3, a4, a5, v13.arr[0], v13.arr[1], a7, 0);
    LeaveCriticalSection_0((pthread_mutex_t *)&unk_381C14);
    return 1;
  }
  if ( !sub_17E580((int)&v13, (int)&unk_BE944) )
  {
    if ( *(_DWORD *)(a1 + 2048)
      && (*(int (__fastcall **)(int, _DWORD, _DWORD))(*(_DWORD *)a1 + 96))(a1, v13.arr[0], v13.arr[1]) == -1 )
    {
      v11 = (***(int (__fastcall ****)(_DWORD, int, int, int, int, int, _DWORD, _DWORD))(a1 + 2048))(
              *(_DWORD *)(a1 + 2048),
              a2[3],
              *a2,
              a3,
              a4,
              a5,
              v13.arr[0],
              v13.arr[1]);
      LeaveCriticalSection_0((pthread_mutex_t *)&unk_381C14);
      return v11;
    }
    goto LABEL_10;
  }
LABEL_7:
  LeaveCriticalSection_0((pthread_mutex_t *)&unk_381C14);
  return 0;
}


// ======================================================================
