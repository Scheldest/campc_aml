// ADDR: 0xf8ef0
// SYMBOL: sub_F8EF0
int __fastcall sub_F8EF0(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(a1 + 4);
  if ( !v1 || *(_DWORD *)v1 == dword_23DF24 + 6716708 )
    return 1;
  else
    return *(_BYTE *)(v1 + 28) & 1;
}


// ======================================================================
// ADDR: 0xf907c
// SYMBOL: sub_F907C
int __fastcall sub_F907C(int a1)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 4);
  if ( result )
    return ((int (*)(void))(dword_23DF24 + 4112277))();
  return result;
}


// ======================================================================
// ADDR: 0xf909c
// SYMBOL: sub_F909C
int __fastcall sub_F909C(int a1, int a2, int a3)
{
  int v4; // r0

  v4 = *(_DWORD *)(a1 + 4);
  if ( !v4 || *(_DWORD *)v4 == dword_23DF24 + 6716708 || sub_108E24(*(unsigned __int16 *)(v4 + 38)) <= 0.0 )
    return 0;
  else
    return ((int (__fastcall *)(int, int, _DWORD))((char *)&unk_2DEAE1 + dword_23DF24))(a2, a3, *(_DWORD *)(a1 + 4));
}


// ======================================================================
// ADDR: 0x10227c
// SYMBOL: sub_10227C
bool __fastcall sub_10227C(int a1)
{
  _DWORD *v1; // r0
  bool v2; // zf

  v1 = *(_DWORD **)(a1 + 4);
  if ( !v1 )
    return 0;
  v2 = *v1 == dword_23DF24 + 6716708;
  if ( *v1 != dword_23DF24 + 6716708 )
    v2 = v1[6] == 0;
  return !v2;
}


// ======================================================================
// ADDR: 0x108538
// SYMBOL: sub_108538
int __fastcall sub_108538(unsigned int a1)
{
  int v1; // r0

  if ( a1 <= 0x4E20 )
    v1 = *(_DWORD *)(*(_DWORD *)(dword_23DF24 + 6788820) + 4 * a1) + 44;
  else
    v1 = 44;
  return *(_DWORD *)v1;
}


// ======================================================================
