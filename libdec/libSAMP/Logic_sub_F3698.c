// ADDR: 0x163b24
// SYMBOL: sub_163B24
int __fastcall sub_163B24(int a1)
{
  return *(_DWORD *)(a1 + 4);
}


// ======================================================================
// ADDR: 0x163b84
// SYMBOL: sub_163B84
int sub_163B84()
{
  int v0; // r0

  v0 = (unsigned __int8)byte_381AB8;
  __dmb(0xBu);
  if ( !(v0 << 31) && j___cxa_guard_acquire((__guard *)&byte_381AB8) )
  {
    dword_381AB4 = dword_23DF24 + 7208996;
    j___cxa_guard_release((__guard *)&byte_381AB8);
  }
  return dword_381AB4;
}


// ======================================================================
// ADDR: 0x163bd8
// SYMBOL: sub_163BD8
int __fastcall sub_163BD8(int a1)
{
  int *v2; // r0
  int v3; // r0

  v2 = (int *)sub_163B84();
  v3 = sub_163B28(*v2);
  if ( v3 )
    return (*(int (__fastcall **)(int, int))(*(_DWORD *)v3 + 4))(v3, a1);
  else
    return 0;
}


// ======================================================================
// ADDR: 0x163c1a
// SYMBOL: sub_163C1A
int __fastcall sub_163C1A(int result)
{
  *(_BYTE *)(result + 78) = *(_BYTE *)(result + 77);
  return result;
}


// ======================================================================
