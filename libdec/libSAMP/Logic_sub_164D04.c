// ADDR: 0x164d6c
// SYMBOL: sub_164D6C
int __fastcall sub_164D6C(_BYTE *a1, int a2)
{
  int v2; // r2
  _BYTE *v3; // r3
  char v4; // r0
  int v5; // r0
  unsigned int v6; // r2
  unsigned int v7; // r2
  int result; // r0

LABEL_1:
  v2 = a2 + 1;
  v3 = a1;
  while ( 1 )
  {
    v4 = *(_BYTE *)(v2 - 1);
    if ( !v4 )
      break;
    a2 = v2;
    if ( (*(_BYTE *)(v2 - 1) & 0x80) == 0 )
    {
      *v3 = v4;
      a1 = v3 + 1;
      goto LABEL_1;
    }
    v5 = v4 & 0x7F;
    ++v2;
    if ( v5 != 24 )
    {
      v6 = dword_BAD58[v5];
      *(_WORD *)v3 = v6;
      a1 = v3 + 2;
      v7 = HIWORD(v6);
      if ( v7 )
      {
        v3[2] = v7;
        a1 = v3 + 3;
      }
      goto LABEL_1;
    }
  }
  result = 0;
  *v3 = 0;
  return result;
}


// ======================================================================
