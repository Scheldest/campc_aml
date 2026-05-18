// ADDR: 0x147ed4
// SYMBOL: sub_147ED4
int __fastcall sub_147ED4(int *a1)
{
  int v2; // r0
  _BYTE *v3; // r5
  int result; // r0

  v2 = *a1;
  if ( v2 == 1 )
  {
    sub_148084(a1, 0);
  }
  else if ( v2 == 2 )
  {
    sub_147F30(a1, 0);
  }
  *((_WORD *)a1 + 4) = -1;
  a1[1] = -1;
  v3 = *(_BYTE **)(dword_23DEEC + 132);
  *a1 = 0;
  if ( v3[80] != 1 )
    (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)v3 + 36))(v3, 1);
  result = 1;
  v3[80] = 1;
  return result;
}


// ======================================================================
