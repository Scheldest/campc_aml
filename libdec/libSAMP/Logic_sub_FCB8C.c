// ADDR: 0x10479c
// SYMBOL: sub_10479C
_DWORD *__fastcall sub_10479C(int a1, char a2, char a3)
{
  _DWORD *result; // r0
  int v5; // r0
  int v6; // r6
  bool v7; // zf
  int v8; // r1
  _DWORD v9[4]; // [sp+0h] [bp-30h] BYREF
  _DWORD *v10; // [sp+10h] [bp-20h]
  char v11; // [sp+1Eh] [bp-12h] BYREF
  char v12; // [sp+1Fh] [bp-11h] BYREF

  result = *(_DWORD **)(a1 + 92);
  v11 = a3;
  v12 = a2;
  if ( result )
  {
    result = (_DWORD *)sub_1082F4(*(_DWORD *)(a1 + 8));
    if ( result )
    {
      v9[3] = &v12;
      v9[1] = a1;
      v9[2] = &v11;
      v5 = *(unsigned __int8 *)(a1 + 96);
      v10 = v9;
      v6 = *(_DWORD *)dword_2402E4;
      *(_DWORD *)dword_2402E4 = v5;
      v9[0] = &off_22B1D8;
      sub_107020(v9);
      result = v10;
      v7 = v9 == v10;
      *(_DWORD *)dword_2402E4 = v6;
      if ( v7 )
      {
        v8 = 4;
      }
      else
      {
        if ( !result )
          return result;
        v8 = 5;
      }
      return (_DWORD *)(*(int (**)(void))(*result + 4 * v8))();
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x141154
// SYMBOL: sub_141154
int __fastcall sub_141154(int a1, unsigned int a2, char a3)
{
  int v5; // r0
  int v6; // r5
  int v7; // r4
  _BYTE v9[278]; // [sp+20h] [bp-128h] BYREF
  _WORD v10[9]; // [sp+136h] [bp-12h] BYREF

  v5 = sub_17D4A8(v9);
  v10[0] = a2;
  sub_17D628(v5, v10, 16, 1);
  LOBYTE(v10[0]) = a3;
  sub_17D628(v9, v10, 8, 1);
  (*(void (__fastcall **)(_DWORD, void *, _BYTE *, int))(**(_DWORD **)(dword_23DEF4 + 528) + 108))(
    *(_DWORD *)(dword_23DEF4 + 528),
    &unk_23C758,
    v9,
    1);
  v6 = *(_DWORD *)(*(_DWORD *)(dword_23DEF4 + 944) + 4);
  if ( v6 )
  {
    if ( a2 >> 4 <= 0x7C && sub_F2396(v6, a2) )
    {
      v7 = *(_DWORD *)(v6 + 4 * a2);
      if ( v7 )
      {
        if ( sub_109F36(*(_DWORD *)(v6 + 4 * a2)) )
        {
          sub_107188(word_B94C8, *(_DWORD *)(v7 + 8), 3, 2, 10, 0, 0, -1, 0xFFFF, 0xFFFF, 0);
          dword_23902C = sub_F0B30();
        }
      }
    }
  }
  return sub_17D542(v9);
}


// ======================================================================
// ADDR: 0x148eba
// SYMBOL: sub_148EBA
bool __fastcall sub_148EBA(int a1, unsigned int a2)
{
  int v2; // r0

  return a2 <= 0x3EC && (v2 = *(_DWORD *)(a1 + 4 * a2 + 4)) != 0 && *(_BYTE *)(v2 + 29) != 0;
}


// ======================================================================
