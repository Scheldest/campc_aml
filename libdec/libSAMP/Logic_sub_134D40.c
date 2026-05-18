// ADDR: 0x134e26
// SYMBOL: sub_134E26
int __fastcall sub_134E26(int a1)
{
  _BYTE *v1; // r6
  _BYTE *v3; // r5
  int result; // r0

  v1 = *(_BYTE **)(a1 + 100);
  if ( v1[80] != 1 )
    (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)v1 + 36))(v1, 1);
  v3 = *(_BYTE **)(a1 + 96);
  v1[80] = 1;
  if ( v3[80] != 1 )
    (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)v3 + 36))(v3, 1);
  result = 0;
  v3[80] = 1;
  *(_BYTE *)(a1 + 88) = 0;
  return result;
}


// ======================================================================
// ADDR: 0x1357d0
// SYMBOL: sub_1357D0
int __fastcall sub_1357D0(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  sub_135804(a1[27], a2, a5);
  sub_135804(a1[28], a3, a5);
  return sub_135804(a1[29], a4, a5);
}


// ======================================================================
