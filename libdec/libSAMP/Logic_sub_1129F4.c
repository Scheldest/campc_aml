// ADDR: 0x17d786
// SYMBOL: sub_17D786
int __fastcall sub_17D786(_DWORD *a1, _BYTE *a2, int a3, int a4)
{
  _BYTE *v5; // r6
  unsigned int v6; // r4
  int v9; // r2
  int v10; // r0
  unsigned int v11; // r12
  int v12; // r2
  bool v13; // cc

  if ( a3 < 1 )
    return 0;
  v5 = a2;
  v6 = a3;
  if ( a1[2] + a3 > *a1 )
    return 0;
  sub_22178C((int)a2, (unsigned int)(a3 + 7) >> 3);
  v9 = a1[2];
  v10 = v9 & 7;
  v11 = 8 - v10;
  while ( 1 )
  {
    v12 = (*(unsigned __int8 *)(a1[3] + (v9 >> 3)) << v10) | (unsigned __int8)*v5;
    *v5 = v12;
    if ( v10 && v6 > v11 )
    {
      LOBYTE(v12) = v12 | (*(unsigned __int8 *)(a1[3] + ((int)a1[2] >> 3) + 1) >> v11);
      *v5 = v12;
    }
    if ( v6 <= 7 )
      break;
    ++v5;
    v13 = (int)v6 <= 8;
    v6 -= 8;
    v9 = a1[2] + 8;
    a1[2] = v9;
    if ( v13 )
      return 1;
  }
  if ( a4 )
    *v5 = (unsigned __int8)v12 >> (8 - v6);
  a1[2] += v6;
  return 1;
}


// ======================================================================
// ADDR: 0x17d81c
// SYMBOL: sub_17D81C
int __fastcall sub_17D81C(int result)
{
  *(_DWORD *)(result + 8) = 0;
  return result;
}


// ======================================================================
