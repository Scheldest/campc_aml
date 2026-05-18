// ADDR: 0x13887c
// SYMBOL: sub_13887C
_DWORD *__fastcall sub_13887C(int a1)
{
  int v2; // r0
  _DWORD *v3; // r0
  int v4; // r1

  v2 = *(_DWORD *)(a1 + 172);
  if ( v2 != -1 )
    sub_17CC50(dword_381BF4, v2 + 1);
  if ( *(unsigned __int8 *)(a1 + 124) << 31 )
    operator delete(*(void **)(a1 + 132));
  v3 = *(_DWORD **)(a1 + 104);
  *(_DWORD *)a1 = &off_22EEF4;
  if ( (_DWORD *)(a1 + 88) == v3 )
  {
    v4 = 4;
    goto LABEL_9;
  }
  if ( v3 )
  {
    v4 = 5;
LABEL_9:
    (*(void (**)(void))(*v3 + 4 * v4))();
  }
  return sub_12BCE4((_DWORD *)a1);
}


// ======================================================================
