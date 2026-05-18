// ADDR: 0x138038
// SYMBOL: sub_138038
int __fastcall sub_138038(int a1)
{
  _DWORD *v2; // r4
  int v3; // r5
  unsigned __int8 *v4; // r6
  int v5; // r0
  int v6; // r1

  v2 = (_DWORD *)dword_3141D0;
  HIBYTE(word_3141DC) = a1;
  if ( dword_3141D0 )
  {
    do
    {
      v3 = v2[3];
      v4 = *(unsigned __int8 **)(v3 + 168);
      if ( v4[80] != a1 )
      {
        (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)v4 + 36))(*(_DWORD *)(v3 + 168), a1);
        v3 = v2[3];
      }
      v5 = *(_DWORD *)(v3 + 116);
      v6 = dword_3141E0;
      v4[80] = a1;
      if ( v6 != v5 )
      {
        if ( *(unsigned __int8 *)(v3 + 80) != a1 )
          (*(void (__fastcall **)(int, int))(*(_DWORD *)v3 + 36))(v3, a1);
        *(_BYTE *)(v3 + 80) = a1;
      }
      v2 = (_DWORD *)*v2;
    }
    while ( v2 );
  }
  if ( a1 )
  {
    if ( dword_3141E0 )
      dword_3141E0 = 0;
    if ( byte_3141E4 )
      byte_3141E4 = 0;
    if ( (_BYTE)word_3141DC )
      LOBYTE(word_3141DC) = 0;
  }
  return sub_137E48(*(_DWORD *)(dword_23DEEC + 132));
}


// ======================================================================
// ADDR: 0x1393f2
// SYMBOL: sub_1393F2
int __fastcall sub_1393F2(_DWORD *a1, unsigned __int8 *a2)
{
  int **v3; // r0

  v3 = sub_13934C(a1, a2);
  if ( !v3 )
    return 0;
  sub_13940E(a1, v3);
  return 1;
}


// ======================================================================
