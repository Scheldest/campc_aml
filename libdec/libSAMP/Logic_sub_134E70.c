// ADDR: 0x148134
// SYMBOL: sub_148134
int __fastcall sub_148134(int a1)
{
  int v2; // r0
  _BYTE *v3; // r5
  int result; // r0

  v2 = *(_DWORD *)a1;
  if ( v2 == 1 )
  {
    sub_148084(a1, 1);
  }
  else if ( v2 == 2 )
  {
    sub_147F30(a1, 1);
  }
  *(_WORD *)(a1 + 8) = -1;
  *(_DWORD *)(a1 + 4) = -1;
  v3 = *(_BYTE **)(dword_23DEEC + 132);
  *(_DWORD *)a1 = 0;
  if ( v3[80] != 1 )
    (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)v3 + 36))(v3, 1);
  result = 1;
  v3[80] = 1;
  return result;
}


// ======================================================================
