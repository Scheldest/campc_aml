// ADDR: 0x100ee8
// SYMBOL: sub_100EE8
int __fastcall sub_100EE8(int a1)
{
  char v2; // r8
  __int16 v3; // r9
  int v4; // r0
  __int16 v5; // r2

  v2 = *(_BYTE *)dword_2402D0;
  *(_BYTE *)dword_2402D0 = sub_F8224(**(unsigned __int8 **)(a1 + 4));
  v3 = *(_WORD *)dword_2402DC;
  v4 = sub_F8224(**(unsigned __int8 **)(a1 + 4));
  v5 = v4 - 4;
  if ( v4 != 4 )
    v5 = v4;
  *(_WORD *)dword_2402DC = v5;
  sub_F82C8();
  sub_F82F8(**(unsigned __int8 **)(a1 + 4));
  sub_F8280();
  sub_F8230(**(unsigned __int8 **)(a1 + 4));
  sub_F83C8();
  sub_F8400(**(unsigned __int8 **)(a1 + 4));
  off_247510(**(_DWORD **)(a1 + 8), **(_DWORD **)(a1 + 12));
  *(_BYTE *)dword_2402D0 = v2;
  *(_WORD *)dword_2402DC = v3;
  sub_F8390();
  sub_F8298();
  return sub_F8268();
}


// ======================================================================
// ADDR: 0x108d44
// SYMBOL: sub_108D44
int __fastcall sub_108D44(int a1)
{
  int v1; // r1

  v1 = 0;
  while ( dword_262CF0[v1] != a1 )
  {
    if ( ++v1 == 210 )
    {
      LOBYTE(v1) = 0;
      return (unsigned __int8)v1;
    }
  }
  return (unsigned __int8)v1;
}


// ======================================================================
