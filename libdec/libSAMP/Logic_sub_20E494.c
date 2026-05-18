// ADDR: 0x20e568
// SYMBOL: sub_20E568
int __fastcall sub_20E568(_DWORD *a1, _DWORD *a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int result; // r0

  sub_20E5B6(a1 + 4, *a1, a1[1], a2 + 1);
  v4 = *a1;
  *a1 = a2[1];
  a2[1] = v4;
  v5 = a1[1];
  a1[1] = a2[2];
  a2[2] = v5;
  v6 = a1[2];
  a1[2] = a2[3];
  a2[3] = v6;
  result = a2[1];
  *a2 = result;
  return result;
}


// ======================================================================
// ADDR: 0x20e598
// SYMBOL: sub_20E598
int __fastcall sub_20E598(int a1)
{
  sub_20E5C8();
  if ( *(_DWORD *)a1 )
    sub_20E22A(*(_DWORD *)(a1 + 16), *(void **)a1);
  return a1;
}


// ======================================================================
