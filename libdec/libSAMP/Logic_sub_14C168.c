// ADDR: 0x14851a
// SYMBOL: sub_14851A
int __fastcall sub_14851A(int a1, unsigned int a2)
{
  _BYTE *v2; // r4
  int v3; // r1
  int v4; // r0
  _DWORD *v5; // r5

  if ( a2 >> 3 <= 0x7C )
  {
    v2 = (_BYTE *)(a1 + a2 + 4);
    if ( *v2 )
    {
      v3 = a1 + 4 * a2;
      v4 = *(_DWORD *)(v3 + 1004);
      if ( v4 )
      {
        v5 = (_DWORD *)(v3 + 1004);
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
        *v2 = 0;
        *v5 = 0;
      }
    }
  }
  return 1;
}


// ======================================================================
