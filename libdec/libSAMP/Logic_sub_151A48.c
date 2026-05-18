// ADDR: 0x151aa8
// SYMBOL: sub_151AA8
int __fastcall sub_151AA8(int a1)
{
  int v2; // r0
  double v3; // r0
  double v4; // d16
  double v5; // d17
  int v6; // r0
  int v7; // r0
  int v8; // r1
  int v9; // r0
  int result; // r0

  v2 = ((int (*)(void))sub_17E2E4)();
  if ( !*(_BYTE *)(a1 + 19) )
  {
    LODWORD(v3) = v2 - *(_DWORD *)(a1 + 36) + *(_DWORD *)(a1 + 32);
    HIDWORD(v3) = LODWORD(v3) >> 3;
    if ( LODWORD(v3) >> 3 > 0x7C )
    {
      v4 = (double)LODWORD(v3) / 1000.0;
      v5 = *(double *)(a1 + 24);
      if ( v4 >= v5 )
      {
        if ( !*(_BYTE *)(a1 + 16) )
          return 0;
        v3 = fmod(v4, v5);
        v4 = v3;
      }
      if ( !sub_15DF60(*(_DWORD *)(a1 + 4), HIDWORD(v3), LODWORD(v4), HIDWORD(v4)) )
        return 1;
    }
  }
  v6 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 8))(*(_DWORD *)(a1 + 4));
  v7 = sub_17E2E4(v6);
  v8 = *(unsigned __int8 *)(a1 + 17);
  *(_DWORD *)(a1 + 40) = v7;
  if ( v8 )
  {
    v9 = sub_15DEFA(*(_DWORD *)(a1 + 4));
    *(_DWORD *)(a1 + 44) = sub_17E2E4(v9);
  }
  result = 1;
  *(_BYTE *)(a1 + 18) = 1;
  return result;
}


// ======================================================================
// ADDR: 0x15df00
// SYMBOL: sub_15DF00
bool __fastcall sub_15DF00(int a1)
{
  return sub_164BBC(*(_DWORD *)(a1 + 8)) == 0;
}


// ======================================================================
// ADDR: 0x15df86
// SYMBOL: sub_15DF86
bool __fastcall sub_15DF86(int a1)
{
  return sub_164B08(*(_DWORD *)(a1 + 8), 4) != 0;
}


// ======================================================================
// ADDR: 0x15df9a
// SYMBOL: sub_15DF9A
int __fastcall sub_15DF9A(int a1)
{
  __int64 v2; // r0
  unsigned int v3; // r6
  unsigned int v4; // r5
  int v5; // r0
  char v6; // r4
  unsigned __int64 v7; // r0

  v2 = sub_164B08(*(_DWORD *)(a1 + 8), 1);
  v3 = HIDWORD(v2);
  v4 = v2;
  HIDWORD(v2) &= v2;
  v5 = *(_DWORD *)(a1 + 8);
  v6 = BYTE4(v2) + 1;
  if ( HIDWORD(v2) != -1 )
    v6 = 1;
  v7 = sub_164B08(v5, 2);
  return (__PAIR64__(v3, v4) >= v7) & (((unsigned int)v7 & HIDWORD(v7)) != -1) & (unsigned __int8)v6;
}


// ======================================================================
