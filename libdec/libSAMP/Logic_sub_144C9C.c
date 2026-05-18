// ADDR: 0xfa364
// SYMBOL: sub_FA364
int sub_FA364()
{
  _DWORD *v0; // r1
  int result; // r0
  _WORD *v2; // r1

  v0 = *(_DWORD **)(dword_23DF24 + 8003096);
  result = v0[2];
  if ( result >= 1 )
  {
    v2 = (_WORD *)(*v0 + 48);
    do
    {
      *v2 = 0;
      v2 += 30;
      --result;
    }
    while ( result );
  }
  return result;
}


// ======================================================================
// ADDR: 0x144590
// SYMBOL: sub_144590
_QWORD *__fastcall sub_144590(int a1)
{
  int v2; // r0
  _QWORD *result; // r0

  v2 = *(_DWORD *)(a1 + 524);
  if ( *(_BYTE *)(v2 + 36) )
  {
    nullsub_31();
    v2 = *(_DWORD *)(a1 + 524);
  }
  result = (_QWORD *)(v2 + 56);
  *result = loc_1445B8;
  result[1] = loc_1445C0;
  return result;
}


// ======================================================================
