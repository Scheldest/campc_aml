// ADDR: 0x10fe18
// SYMBOL: sub_10FE18
int __fastcall sub_10FE18(int a1, unsigned int a2)
{
  int v4; // r0
  int v5; // r0
  unsigned int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r3

  v4 = (unsigned __int8)byte_263370;
  __dmb(0xBu);
  if ( !(v4 << 31) && j___cxa_guard_acquire((__guard *)&byte_263370) )
  {
    dword_26336C = dword_23DF24 + 6840224;
    j___cxa_guard_release((__guard *)&byte_263370);
  }
  v5 = (unsigned __int8)byte_263378;
  __dmb(0xBu);
  if ( !(v5 << 31) && j___cxa_guard_acquire((__guard *)&byte_263378) )
  {
    dword_263374 = dword_23DF24 + 7940980;
    j___cxa_guard_release((__guard *)&byte_263378);
  }
  v6 = *(_DWORD *)dword_26336C;
  v7 = *(_DWORD *)dword_26336C - 4096;
  if ( v7 - *(_DWORD *)dword_263374 <= a2 )
  {
    v8 = *(_DWORD *)(a1 + 4);
    v9 = v8 - 10;
    if ( v8 != 10 )
      v9 = v8 + 1;
    *(_DWORD *)(a1 + 4) = v9;
    if ( v8 )
      v7 = v6 >> 1;
    a2 = v7;
  }
  (*(void (__fastcall **)(unsigned int))a1)(a2);
  ((void (*)(void))(dword_23DF24 + 2948541))();
  ((void (*)(void))(dword_23DF24 + 4545457))();
  ((void (*)(void))(dword_23DF24 + 6020721))();
  return ((int (__fastcall *)(_DWORD, _DWORD))(dword_23DF24 + 4144469))(0, 0);
}


// ======================================================================
