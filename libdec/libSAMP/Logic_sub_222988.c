// ADDR: 0x222a24
// SYMBOL: sub_222A24
int __fastcall sub_222A24(
        int a1,
        int a2,
        _DWORD *a3,
        int (__fastcall *a4)(int, int, _DWORD *, _DWORD *, int, int),
        int a5)
{
  int result; // r0
  int (__fastcall *v9)(int, _DWORD *, int); // r3
  int v10; // r1
  int v11; // r2
  _DWORD v12[3]; // [sp+8h] [bp-40h] BYREF
  int (__fastcall *v13)(int, _DWORD *, int); // [sp+14h] [bp-34h]
  int v14; // [sp+1Ch] [bp-2Ch]
  int v15; // [sp+28h] [bp-20h]

  sub_222BB0(a2, a1);
  for ( result = sub_222E9C(a2, v12); !result; result = sub_222E9C(a2, v12) )
  {
    result = a4(1, 10, a3, a3, a2, a5);
    if ( result )
      break;
    v9 = v13;
    if ( v13 )
    {
      v10 = v14;
      v11 = v15;
      a3[18] = v12[0];
      a3[19] = v11;
      a3[20] = v10;
      result = v9(9, a3, a2);
      switch ( result )
      {
        case 7:
          sub_222ED0(a2);
          break;
        case 8:
          break;
        case 5:
          return a4(1, 26, a3, a3, a2, a5);
        default:
          return result;
      }
    }
  }
  return result;
}


// ======================================================================
