// ADDR: 0xf6190
// SYMBOL: sub_F6190
int __fastcall sub_F6190(int a1)
{
  int v2; // r0

  v2 = sub_F61A4();
  return sub_15E868(v2, a1);
}


// ======================================================================
// ADDR: 0x141418
// SYMBOL: sub_141418
int __fastcall sub_141418(int result)
{
  *(_BYTE *)(result + 416) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_BYTE *)(result + 9) = 0;
  return result;
}


// ======================================================================
// ADDR: 0x14a8b4
// SYMBOL: sub_14A8B4
int __fastcall sub_14A8B4(int a1)
{
  int result; // r0
  _DWORD v3[18]; // [sp+0h] [bp-48h] BYREF

  result = *(_DWORD *)(a1 + 296);
  if ( result )
  {
    result = sub_104108(result);
    if ( result )
    {
      sub_F8910(*(_DWORD *)(a1 + 296), v3);
      sub_104098(*(_DWORD *)(a1 + 296), *(float *)&v3[12], *(float *)&v3[13], *(float *)&v3[14]);
      result = 0;
      *(_DWORD *)(a1 + 4) = 0;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x14feb6
// SYMBOL: sub_14FEB6
int __fastcall sub_14FEB6(int a1, unsigned int a2)
{
  int v4; // r0
  char *v5; // r2
  char *v6; // r6
  int v8; // r8

  if ( a2 >> 4 > 0x7C )
    return 0;
  if ( !sub_F2396(a1, a2) )
    return 0;
  v4 = *(_DWORD *)(a1 + 4 * a2);
  if ( !v4 )
    return 0;
  v5 = *(char **)(a1 + 60004);
  v6 = *(char **)(a1 + 60000);
  if ( v6 != v5 )
  {
    while ( *(_DWORD *)v6 != a2 )
    {
      v6 += 4;
      if ( v6 == v5 )
        goto LABEL_13;
    }
  }
  if ( v6 != v5 )
  {
    v8 = v5 - (v6 + 4);
    if ( v5 != v6 + 4 )
      j_memmove(v6, v6 + 4, v5 - (v6 + 4));
    *(_DWORD *)(a1 + 60004) = &v6[v8];
    v4 = *(_DWORD *)(a1 + 4 * a2);
  }
LABEL_13:
  *(_BYTE *)(a1 + a2 + 40000) = 0;
  if ( v4 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
  *(_DWORD *)(a1 + 4 * a2) = 0;
  *(_DWORD *)(a1 + 4 * a2 + 8000) = 0;
  return 1;
}


// ======================================================================
