// ADDR: 0x18129e
// SYMBOL: sub_18129E
int __fastcall sub_18129E(
        int a1,
        int a2,
        _DWORD *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14)
{
  if ( a3 )
    return (*(int (__fastcall **)(int, int, _DWORD, _DWORD, int, int, int, int, int, int, int, int, int, int, int))(*(_DWORD *)a1 + 84))(
             a1,
             a2,
             a3[3],
             *a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14);
  else
    return (*(int (__fastcall **)(int, int, _DWORD, _DWORD, int, int, int, int, int, int, int, int, int, int, int))(*(_DWORD *)a1 + 84))(
             a1,
             a2,
             0,
             0,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14);
}


// ======================================================================
