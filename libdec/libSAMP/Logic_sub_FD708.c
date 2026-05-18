// ADDR: 0xfd5fa
// SYMBOL: sub_FD5FA
int __fastcall sub_FD5FA(int a1)
{
  int result; // r0

  result = 0;
  if ( a1 > 6741099 )
  {
    if ( a1 <= 6741691 )
    {
      if ( a1 == 6741100 )
      {
        return 5720052;
      }
      else if ( a1 == 6741396 )
      {
        return 5725320;
      }
    }
    else
    {
      switch ( a1 )
      {
        case 6741692:
          return 5743232;
        case 6741988:
          return 5747460;
        case 6742284:
          return 5754928;
      }
    }
  }
  else if ( a1 <= 6740247 )
  {
    if ( a1 == 6739592 )
    {
      return 5586388;
    }
    else if ( a1 == 6739968 )
    {
      return 5642784;
    }
  }
  else
  {
    switch ( a1 )
    {
      case 6740248:
        return 5671700;
      case 6740528:
        return 5684816;
      case 6740804:
        return 5706296;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x1010f8
// SYMBOL: sub_1010F8
int __fastcall sub_1010F8(int a1)
{
  unsigned __int8 *v2; // r1
  unsigned __int8 *v3; // r1
  int v4; // r0
  __int16 v5; // r2
  int v6; // r0
  char v7; // r2
  void (*v8)(void); // r1

  v2 = *(unsigned __int8 **)(a1 + 4);
  byte_2473E0 = *(_BYTE *)dword_2402D0;
  *(_BYTE *)dword_2402D0 = sub_F8224(*v2);
  v3 = *(unsigned __int8 **)(a1 + 4);
  word_2473E2 = *(_WORD *)dword_2402DC;
  v4 = sub_F8224(*v3);
  v5 = v4 - 4;
  if ( v4 != 4 )
    v5 = v4;
  *(_WORD *)dword_2402DC = v5;
  sub_F8280();
  sub_F8230(**(unsigned __int8 **)(a1 + 4));
  v6 = dword_2473E4;
  *(_DWORD *)(*(_DWORD *)(dword_2473E4 + 1124) + 1436) = 4;
  v7 = *(_BYTE *)(v6 + 58);
  *(_DWORD *)(*(_DWORD *)(v6 + 1124) + 1436) = 0;
  v8 = (void (*)(void))(dword_23DF24 + **(_DWORD **)(a1 + 8) + 1);
  byte_247518 = v7;
  v8();
  *(_BYTE *)dword_2402D0 = byte_2473E0;
  *(_WORD *)dword_2402DC = word_2473E2;
  return sub_F8268();
}


// ======================================================================
