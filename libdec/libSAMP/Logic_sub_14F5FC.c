// ADDR: 0x1081c8
// SYMBOL: sub_1081C8
int __fastcall sub_1081C8(int a1)
{
  int result; // r0
  bool v3; // zf
  int v4; // r1
  int v5; // r0
  int v6; // r1
  int v7; // r1
  int v8; // r5

  result = *(_DWORD *)(a1 + 2444);
  v3 = result == 5;
  if ( result == 5 )
  {
    result = *(_DWORD *)(a1 + 2472) + 1;
    v3 = result == 0;
  }
  if ( v3 )
  {
    v4 = sub_108480(*(unsigned __int16 *)(a1 + 2478));
    v5 = *(unsigned __int16 *)(a1 + 2478);
    if ( v4 )
    {
      if ( sub_1083F0(v5) )
      {
        v6 = *(unsigned __int16 *)(a1 + 2478);
      }
      else
      {
        v6 = 0;
        *(_WORD *)(a1 + 2478) = 0;
      }
      result = sub_107730((_DWORD *)dword_23DEFC, v6, *(_DWORD *)(a1 + 2436), a1 + 2480, *(float *)(a1 + 2492));
    }
    else if ( sub_1084DC(v5) )
    {
      result = sub_1079AC(
                 (_DWORD *)dword_23DEFC,
                 *(unsigned __int16 *)(a1 + 2478),
                 *(_DWORD *)(a1 + 2436),
                 a1 + 2480,
                 *(float *)(a1 + 2492),
                 *(unsigned __int16 *)(a1 + 2496),
                 *(unsigned __int16 *)(a1 + 2498));
    }
    else
    {
      if ( sub_1083F0(*(unsigned __int16 *)(a1 + 2478)) )
      {
        v7 = *(unsigned __int16 *)(a1 + 2478);
      }
      else
      {
        v7 = 18631;
        *(_WORD *)(a1 + 2478) = 18631;
      }
      result = sub_1074A4((_DWORD *)dword_23DEFC, v7, *(_DWORD *)(a1 + 2436), a1 + 2480, *(float *)(a1 + 2492));
    }
    v8 = result;
    if ( result )
    {
      result = sub_108C44();
      *(_DWORD *)(a1 + 2472) = result;
      dword_2629D0[result] = v8;
    }
  }
  return result;
}


// ======================================================================
