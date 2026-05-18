// ADDR: 0x11067c
// SYMBOL: sub_11067C
int __fastcall sub_11067C(_DWORD *a1, int *a2, int *a3, int *a4, unsigned __int8 *a5, _DWORD *a6, _DWORD *a7)
{
  int v7; // r4
  char *v8; // r12
  int v9; // r3
  int v10; // r2
  _DWORD *v11; // r0
  int v12; // r1

  v7 = a1[2];
  v8 = (char *)a1[1];
  v9 = *a4;
  v10 = *a3;
  v11 = (_DWORD *)(*a1 + (v7 >> 1));
  v12 = *a2;
  if ( v7 << 31 )
    v8 = *(char **)&v8[*v11];
  return ((int (__fastcall *)(_DWORD *, int, int, int, bool, _DWORD, _DWORD))v8)(v11, v12, v10, v9, *a5 != 0, *a6, *a7);
}


// ======================================================================
