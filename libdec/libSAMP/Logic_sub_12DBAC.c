// ADDR: 0x12dcaa
// SYMBOL: sub_12DCAA
int __fastcall sub_12DCAA(int a1, int a2, int a3)
{
  int v4; // r0
  int result; // r0
  unsigned int *v8; // r0
  unsigned int v9; // r1
  unsigned __int8 **v10; // r4
  unsigned __int8 **i; // r6
  unsigned __int8 *v12; // r0
  int v13; // r1
  int v14; // r1
  unsigned int *v15; // [sp+4h] [bp-1Ch] BYREF

  v4 = *(unsigned __int8 *)(a1 + 12);
  __dmb(0xBu);
  result = v4 << 31;
  if ( !result )
  {
    std::mutex::lock((std::mutex *)(a1 + 4));
    v8 = *(unsigned int **)(a1 + 8);
    v15 = v8;
    __dmb(0xBu);
    do
      v9 = __ldrex(v8);
    while ( __strex(v9 + 1, v8) );
    __dmb(0xBu);
    std::mutex::unlock((std::mutex *)(a1 + 4));
    v10 = (unsigned __int8 **)v15[2];
    for ( i = (unsigned __int8 **)v15[1]; i != v10; i += 2 )
    {
      v12 = *i;
      v13 = (*i)[8];
      __dmb(0xBu);
      if ( v13 << 31 )
      {
        v14 = v12[9];
        __dmb(0xBu);
        if ( !(v14 << 31) )
          (*(void (__fastcall **)(unsigned __int8 *, int, int))(*(_DWORD *)v12 + 16))(v12, a2, a3);
      }
    }
    return sub_12DFE0(&v15);
  }
  return result;
}


// ======================================================================
