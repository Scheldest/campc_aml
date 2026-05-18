// ADDR: 0x107364
// SYMBOL: sub_107364
int __fastcall sub_107364(int *a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r1
  _DWORD v5[2]; // [sp+0h] [bp-38h] BYREF
  double v6; // [sp+8h] [bp-30h]
  int v7; // [sp+10h] [bp-28h]
  __int64 v8; // [sp+18h] [bp-20h]
  __int64 v9; // [sp+20h] [bp-18h]

  result = ((int (__fastcall *)(int))((char *)&loc_216E30 + dword_23DF24))(2);
  a1[1] = result;
  if ( result )
  {
    v8 = unk_91DA0;
    v9 = unk_91DA8;
    ((void (*)(void))((char *)&loc_2167C4 + dword_23DF24 + 3))();
    v3 = off_2636C4(256, 256, 0, 1);
    v4 = dword_23DF24;
    a1[3] = v3;
    *a1 = ((int (*)(void))((char *)&loc_1D5AB8 + v4 + 1192))();
    a1[2] = ((int (*)(void))((char *)&loc_1D822C + dword_23DF24))();
    v7 = 1112014848;
    *(_QWORD *)&v6 = unk_B3BD8;
    sub_1090FC();
    sub_109118(a1[2], 0, 1119092736);
    result = *a1;
    if ( *a1 )
    {
      if ( a1[2] )
      {
        *(_DWORD *)(result + 100) = a1[3];
        ((void (__fastcall *)(int, int))((char *)&loc_1DCFE4 + dword_23DF24))(*a1, a1[2]);
        ((void (__fastcall *)(int, int))((char *)&loc_1D5AB8 + dword_23DF24 + 148))(*a1, 1133903872);
        ((void (__fastcall *)(int, int))((char *)&loc_1D5AB8 + dword_23DF24))(*a1, 1008981770);
        v5[0] = 1056964608;
        v5[1] = 1056964608;
        ((void (__fastcall *)(int, _DWORD *))((char *)&loc_1D5AB8 + dword_23DF24 + 972))(*a1, v5);
        ((void (__fastcall *)(int, int))((char *)&loc_1D5AB8 + dword_23DF24 + 752))(*a1, 1);
        result = *(_DWORD *)(dword_23DF24 + 10471736);
        if ( result )
          return ((int (__fastcall *)(int, int))((char *)&loc_21E004 + dword_23DF24))(result, *a1);
      }
    }
  }
  return result;
}


// ======================================================================
