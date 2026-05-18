// ADDR: 0x18a49e
// SYMBOL: sub_18A49E
int __fastcall sub_18A49E(char **a1, _DWORD *a2)
{
  char *v3; // r5
  int v5; // r6
  unsigned int v6; // r0
  _DWORD *v7; // r0
  char *v8; // r9
  char *v9; // r6
  int result; // r0

  v3 = a1[1];
  if ( v3 == a1[2] )
  {
    v5 = 2 * (_DWORD)v3;
    if ( !v3 )
      v5 = 16;
    v6 = 4 * v5 + 8;
    a1[2] = (char *)v5;
    if ( v6 < 4 * v5 )
      v6 = -1;
    if ( v5 != (v5 & 0x3FFFFFFE) )
      v6 = -1;
    v7 = (_DWORD *)operator new[](v6);
    v8 = *a1;
    *v7 = 4;
    v7[1] = v5;
    v9 = (char *)(v7 + 2);
    j_memcpy(v7 + 2, v8, 4 * (_DWORD)v3);
    if ( v8 )
    {
      operator delete[](v8 - 8);
      v3 = a1[1];
    }
    *a1 = v9;
  }
  else
  {
    v9 = *a1;
  }
  *(_DWORD *)&v9[4 * (_DWORD)v3] = *a2;
  result = (int)(a1[1] + 1);
  a1[1] = (char *)result;
  return result;
}


// ======================================================================
