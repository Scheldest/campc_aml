// ADDR: 0xfb190
// SYMBOL: sub_FB190
int __fastcall sub_FB190(
        _DWORD *a1,
        int *a2,
        _DWORD *a3,
        int *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10,
        _DWORD *a11,
        _DWORD *a12,
        _DWORD *a13)
{
  int v13; // r3
  char *v14; // r6
  int v15; // r1
  _DWORD *v16; // r0
  int v18; // [sp+28h] [bp-20h]

  v18 = *a4;
  v13 = a1[2];
  v14 = (char *)a1[1];
  v15 = *a2;
  v16 = (_DWORD *)(*a1 + (v13 >> 1));
  if ( v13 << 31 )
    v14 = *(char **)&v14[*v16];
  return ((int (__fastcall *)(_DWORD *, int, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))v14)(
           v16,
           v15,
           *a3,
           v18,
           *a5,
           *a6,
           *a7,
           *a8,
           *a9,
           *a10,
           *a11,
           *a12,
           *a13);
}


// ======================================================================
