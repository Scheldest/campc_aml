// ADDR: 0x13430c
// SYMBOL: sub_13430C
_DWORD *__fastcall sub_13430C(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // r1

  v2 = (_DWORD *)a1[26];
  *a1 = &off_22EEF4;
  if ( a1 + 22 == v2 )
  {
    v3 = 4;
    goto LABEL_5;
  }
  if ( v2 )
  {
    v3 = 5;
LABEL_5:
    (*(void (**)(void))(*v2 + 4 * v3))();
  }
  return sub_12BCE4(a1);
}


// ======================================================================
