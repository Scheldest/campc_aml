// ADDR: 0x11d870
// SYMBOL: sub_11D870
int __fastcall sub_11D870(
        _DWORD *a1,
        int *a2,
        int *a3,
        int *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        unsigned __int8 *a9)
{
  int v9; // r6
  char *v10; // lr
  int v11; // r3
  int v12; // r2
  _DWORD *v13; // r0
  int v14; // r1

  v9 = a1[2];
  v10 = (char *)a1[1];
  v11 = *a4;
  v12 = *a3;
  v13 = (_DWORD *)(*a1 + (v9 >> 1));
  v14 = *a2;
  if ( v9 << 31 )
    v10 = *(char **)&v10[*v13];
  return ((int (__fastcall *)(_DWORD *, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, bool))v10)(
           v13,
           v14,
           v12,
           v11,
           *a5,
           *a6,
           *a7,
           *a8,
           *a9 != 0);
}


// ======================================================================
