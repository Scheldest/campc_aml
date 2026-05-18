// ADDR: 0x10d528
// SYMBOL: sub_10D528
int __fastcall sub_10D528(int a1, int a2)
{
  int v4; // r0
  _DWORD *v5; // r4
  int result; // r0
  int v7; // r0
  size_t v8; // r5
  _DWORD v9[5]; // [sp+4h] [bp-14h] BYREF

  v9[0] = a1;
  v4 = sub_10D5B4(a1);
  v5 = (_DWORD *)dword_263258;
  sub_10D5B4(v4);
  if ( v5 != (_DWORD *)dword_26325C )
  {
    while ( *v5 != a1 )
    {
      if ( ++v5 == (_DWORD *)dword_26325C )
      {
        v5 = (_DWORD *)dword_26325C;
        break;
      }
    }
  }
  sub_10D5B4(dword_26325C);
  result = dword_26325C;
  if ( a2 )
  {
    if ( v5 != (_DWORD *)dword_26325C )
      return result;
    sub_10D5B4(dword_26325C);
    v7 = dword_26325C;
    if ( dword_26325C == dword_263260 )
      return sub_10D6D8(&dword_263258, v9);
    *(_DWORD *)dword_26325C = a1;
    result = v7 + 4;
  }
  else
  {
    if ( v5 == (_DWORD *)dword_26325C )
      return result;
    sub_10D5B4(dword_26325C);
    v8 = dword_26325C - (_DWORD)(v5 + 1);
    if ( (_DWORD *)dword_26325C != v5 + 1 )
      j_memmove(v5, v5 + 1, v8);
    result = (int)v5 + v8;
  }
  dword_26325C = result;
  return result;
}


// ======================================================================
