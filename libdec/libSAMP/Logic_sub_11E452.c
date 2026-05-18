// ADDR: 0x11e47c
// SYMBOL: sub_11E47C
int __fastcall sub_11E47C(_DWORD *a1, int *a2, int *a3, _DWORD *a4)
{
  int v4; // r6
  char *v6; // r4
  int v7; // r2
  _DWORD *v8; // r0
  int v9; // r1

  v4 = a1[2];
  v6 = (char *)a1[1];
  v7 = *a3;
  v8 = (_DWORD *)(*a1 + (v4 >> 1));
  v9 = *a2;
  if ( v4 << 31 )
    v6 = *(char **)&v6[*v8];
  return ((int (__fastcall *)(_DWORD *, int, int, int, int, _DWORD))v6)(v8, v9, v7, a3[1], a3[2], *a4);
}


// ======================================================================
