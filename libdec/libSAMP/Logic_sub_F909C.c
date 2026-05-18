// ADDR: 0x108e24
// SYMBOL: sub_108E24
int __fastcall sub_108E24(unsigned int a1)
{
  int *v1; // r0
  int v2; // r0

  if ( a1 <= 0x4E20 )
    v1 = (int *)(*(_DWORD *)(*(_DWORD *)(dword_23DF24 + 6788820) + 4 * a1) + 44);
  else
    v1 = (_DWORD *)&word_2C;
  v2 = *v1;
  if ( v2 )
    return *(_DWORD *)(v2 + 36);
  else
    return 0;
}


// ======================================================================
