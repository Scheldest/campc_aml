// ADDR: 0x120db4
// SYMBOL: sub_120DB4
int __fastcall sub_120DB4(
        _DWORD *a1,
        int *a2,
        int *a3,
        int *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10)
{
  int v10; // r6
  char *v11; // r4
  int v12; // r3
  int v13; // r2
  _DWORD *v14; // r0
  int v15; // r1

  v10 = a1[2];
  v11 = (char *)a1[1];
  v12 = *a4;
  v13 = *a3;
  v14 = (_DWORD *)(*a1 + (v10 >> 1));
  v15 = *a2;
  if ( v10 << 31 )
    v11 = *(char **)&v11[*v14];
  return ((int (__fastcall *)(_DWORD *, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))v11)(
           v14,
           v15,
           v13,
           v12,
           *a5,
           *a6,
           *a7,
           *a8,
           *a9,
           *a10);
}


// ======================================================================
