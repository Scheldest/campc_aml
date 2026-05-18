// ADDR: 0x167f9c
// SYMBOL: sub_167F9C
int __fastcall sub_167F9C(int a1)
{
  int v2; // r5
  int v3; // r0
  float v4; // s0
  float v5; // s4
  float v6; // s2
  bool v7; // nf
  int result; // r0

  v2 = dword_381B58;
  sub_168010(a1);
  sub_166ECC(*(_DWORD *)(a1 + 80), a1);
  v3 = *(_DWORD *)(a1 + 764);
  v4 = *(float *)(v2 + 224);
  v5 = *(float *)(v3 + 12);
  v6 = *(float *)(v2 + 228) - *(float *)(v3 + 16);
  *(_BYTE *)(v2 + 6934) = 1;
  *(float *)(v2 + 6640) = v6;
  *(float *)(v2 + 6636) = v4 - v5;
  result = *(unsigned __int8 *)(a1 + 8) << 29;
  v7 = (*(_BYTE *)(a1 + 8) & 4) != 0;
  if ( (*(_BYTE *)(a1 + 8) & 4) == 0 )
  {
    result = *(unsigned __int8 *)(*(_DWORD *)(a1 + 764) + 8) << 29;
    v7 = (*(_BYTE *)(*(_DWORD *)(a1 + 764) + 8) & 4) != 0;
  }
  if ( !v7 )
  {
    result = v2 + 6584;
    *(_DWORD *)(v2 + 6584) = a1;
  }
  return result;
}


// ======================================================================
// ADDR: 0x1683bc
// SYMBOL: sub_1683BC
int sub_1683BC()
{
  int v0; // r0
  int v1; // r2
  int *i; // r1
  int result; // r0

  v0 = *(_DWORD *)(dword_381B58 + 6812);
  if ( v0 < 1 )
    return 0;
  v1 = v0 + 1;
  for ( i = (int *)(*(_DWORD *)(dword_381B58 + 6820) + 36 * v0 - 32); ; i -= 9 )
  {
    result = *i;
    if ( *i )
    {
      if ( (*(_BYTE *)(result + 11) & 8) != 0 )
        break;
    }
    if ( (unsigned int)--v1 <= 1 )
      return 0;
  }
  return result;
}


// ======================================================================
