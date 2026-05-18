// ADDR: 0x10bda0
// SYMBOL: sub_10BDA0
int __fastcall sub_10BDA0(int a1, char a2)
{
  int result; // r0

  result = sub_14469C(dword_23DEF4);
  *(_BYTE *)(a1 + 92) = a2;
  return result;
}


// ======================================================================
// ADDR: 0x10bdc0
// SYMBOL: sub_10BDC0
int __fastcall sub_10BDC0(int a1)
{
  return *(unsigned __int8 *)(a1 + 92);
}


// ======================================================================
// ADDR: 0x17c118
// SYMBOL: sub_17C118
int __fastcall sub_17C118(_DWORD *a1, int a2)
{
  char v4; // r1
  int v5; // r0
  int v6; // r5
  int (__fastcall *v7)(int); // r1
  int result; // r0

  if ( sub_10BDC0(dword_2631B0) == a2 )
  {
    v4 = a2;
    if ( a2 )
      v4 = 1;
    sub_10BDA0(dword_2631B0, v4);
  }
  v5 = sub_17C080();
  if ( !v5 )
    return sub_2242C8(4, "AXL", "Env not loaded. (SetInputLayout)");
  v6 = v5;
  sub_17C1B8(v5, *a1, a1[1], a2);
  v7 = *(int (__fastcall **)(int))(*(_DWORD *)v6 + 912);
  *(_BYTE *)(*(_DWORD *)(dword_23DEEC + 88) + 144) = a2 != 0;
  result = v7(v6);
  if ( result )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 64))(v6);
    return (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 68))(v6);
  }
  return result;
}


// ======================================================================
