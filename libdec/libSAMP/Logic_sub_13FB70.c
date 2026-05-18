// ADDR: 0xf8000
// SYMBOL: sub_F8000
int sub_F8000()
{
  float v0; // s0

  v0 = (*(float *)dword_2402D4 + -35.0) * 0.028571429;
  return LODWORD(v0);
}


// ======================================================================
// ADDR: 0xf803c
// SYMBOL: sub_F803C
int sub_F803C()
{
  return *(_DWORD *)dword_2402D8;
}


// ======================================================================
// ADDR: 0x10510c
// SYMBOL: sub_10510C
// attributes: thunk
int sub_10510C()
{
  return sub_F7FE0();
}


// ======================================================================
// ADDR: 0x105118
// SYMBOL: sub_105118
int __fastcall sub_105118(int a1)
{
  int v1; // r0

  v1 = *(unsigned __int8 *)(a1 + 96);
  if ( v1 )
    return sub_F8224(v1);
  else
    return sub_F7FEC();
}


// ======================================================================
// ADDR: 0x105130
// SYMBOL: sub_105130
int __fastcall sub_105130(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(a1 + 92);
  if ( v1 )
    return *(_DWORD *)(*(_DWORD *)(v1 + 1092) + 84);
  else
    return 0;
}


// ======================================================================
// ADDR: 0x105190
// SYMBOL: sub_105190
int __fastcall sub_105190(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(a1 + 92);
  if ( v1 )
    return v1 + 28 * *(&stru_710.st_info + v1) + 1444;
  else
    return 0;
}


// ======================================================================
