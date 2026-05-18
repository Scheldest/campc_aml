// ADDR: 0x164106
// SYMBOL: sub_164106
unsigned int __fastcall sub_164106(_DWORD *a1, const char *a2, const char *a3)
{
  unsigned int v6; // r8
  unsigned int v7; // r4
  unsigned int v8; // r5
  unsigned int v9; // r4
  unsigned int v10; // r11
  unsigned int v11; // r4
  _DWORD *v12; // r5
  int v13; // r6
  unsigned int result; // r0

  v6 = sub_163FF8(a2);
  v7 = sub_163FF8(a2);
  v8 = sub_1640DA(a2, 6) + v7;
  v9 = sub_163FF8(a2);
  v10 = sub_1640DA(a2, 5) + v9;
  if ( v8 == v10 )
  {
LABEL_5:
    result = 0;
    *a1 = -1;
    a1[1] = 0;
    a1[2] = 0;
  }
  else
  {
    v11 = v10 - v8;
    v12 = (_DWORD *)(v8 + 4);
    v13 = 0;
    while ( strcmp((const char *)(*(v12 - 1) + v10), a3) )
    {
      v11 -= 16;
      v12 += 4;
      ++v13;
      if ( !v11 )
        goto LABEL_5;
    }
    result = *v12 + v6;
    a1[2] = v12[1];
    *a1 = v13;
    a1[1] = result;
  }
  return result;
}


// ======================================================================
