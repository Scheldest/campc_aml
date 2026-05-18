// ADDR: 0x101394
// SYMBOL: sub_101394
int __fastcall sub_101394(int *a1)
{
  int v2; // r1
  int result; // r0
  _DWORD v4[6]; // [sp+0h] [bp-18h] BYREF

  *a1 = ((int (*)(void))((char *)&loc_1D5AB8 + dword_23DF24 + 1192))();
  v2 = ((int (*)(void))((char *)&loc_1D822C + dword_23DF24))();
  result = *a1;
  a1[1] = v2;
  if ( v2 && result )
  {
    ((void (*)(void))(dword_23DF24 + 1953765))();
    ((void (__fastcall *)(int, int))((char *)&loc_1D5AB8 + dword_23DF24 + 148))(*a1, 1133903872);
    ((void (__fastcall *)(int, int))((char *)&loc_1D5AB8 + dword_23DF24))(*a1, 1008981770);
    v4[0] = 1056964608;
    v4[1] = 1056964608;
    ((void (__fastcall *)(int, _DWORD *))((char *)&loc_1D5AB8 + dword_23DF24 + 972))(*a1, v4);
    ((void (__fastcall *)(int, int))((char *)&loc_1D5AB8 + dword_23DF24 + 752))(*a1, 1);
    result = *(_DWORD *)(dword_23DF24 + 10471736);
    if ( result )
      return ((int (__fastcall *)(int, int))((char *)&loc_21E004 + dword_23DF24))(result, *a1);
  }
  return result;
}


// ======================================================================
