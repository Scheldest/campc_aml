// ADDR: 0x105bd0
// SYMBOL: sub_105BD0
int __fastcall sub_105BD0(int a1, int a2, int a3, _DWORD *a4)
{
  int (__fastcall *v7)(int, int); // r4
  int v8; // r0
  float *v9; // r4
  int result; // r0

  v7 = (int (__fastcall *)(int, int))(dword_23DF24 + 6177433);
  v8 = sub_104648(a1, 6177433);
  v9 = (float *)v7(v8, 1);
  *a4 = *((_DWORD *)v9 + 9);
  a4[1] = *((_DWORD *)v9 + 10);
  result = *(_DWORD *)(a1 + 92);
  a4[2] = *((_DWORD *)v9 + 11);
  if ( !result )
  {
    *(float *)(a3 + 8) = (float)(v9[11] + *(float *)(a3 + 8)) + 0.15;
    return result;
  }
  if ( **(_DWORD **)(a1 + 4) == dword_23DF24 + 6716708 )
  {
    *(float *)(a3 + 8) = (float)(v9[11] + *(float *)(a3 + 8)) + 0.15;
  }
  else
  {
    ((void (*)(void))(dword_23DF24 + 4868765))();
    result = *(_DWORD *)(a1 + 92);
    *(float *)(a3 + 8) = (float)(v9[11] + *(float *)(a3 + 8)) + 0.15;
    if ( !result )
      return result;
  }
  if ( **(_DWORD **)(a1 + 4) != dword_23DF24 + 6716708 )
    return ((int (*)(void))(dword_23DF24 + 4858937))();
  return result;
}


// ======================================================================
