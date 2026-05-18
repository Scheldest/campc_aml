// ADDR: 0x17e580
// SYMBOL: sub_17E580
bool __fastcall sub_17E580(int a1, int a2)
{
  return (*(_DWORD *)a1 ^ *(_DWORD *)a2 | *(unsigned __int16 *)(a2 + 4) ^ *(unsigned __int16 *)(a1 + 4)) == 0;
}


// ======================================================================
// ADDR: 0x180978
// SYMBOL: sub_180978
int __fastcall sub_180978(int a1)
{
  int v2; // r0
  int v3; // r4
  unsigned int *v4; // r0
  unsigned __int8 *v5; // r1
  unsigned int v6; // r2
  int v7; // r0
  bool v8; // zf

  v2 = ((int (*)(void))sub_180A0C)();
  if ( !v2 )
    return 0;
  v3 = v2;
  v4 = (unsigned int *)sub_16201C();
  sub_16206C(v4, *(unsigned __int8 **)(v3 + 20), *(_DWORD *)(v3 + 12), 1);
  while ( 1 )
  {
    v5 = *(unsigned __int8 **)(v3 + 20);
    v6 = *(_DWORD *)(v3 + 12);
    v7 = *v5;
    if ( v7 != 20 )
    {
      if ( v6 < 6 )
        break;
      v8 = v7 == 40;
      if ( v7 == 40 )
        v8 = v5[5] == 20;
      if ( !v8 )
        break;
    }
    sub_180BD0(a1, v5, v6, *(_DWORD *)(v3 + 4), *(_DWORD *)(v3 + 8));
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 64))(a1, v3);
    v3 = sub_180A0C(a1);
    if ( !v3 )
      return 0;
  }
  return v3;
}


// ======================================================================
