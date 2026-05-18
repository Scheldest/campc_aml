// ADDR: 0x220270
// SYMBOL: sub_220270
int __fastcall sub_220270(_BYTE *a1, unsigned int a2, _DWORD *a3)
{
  _DWORD *v3; // r4
  int v4; // r2
  char v5; // r4
  int i; // r5

  v3 = &unk_384178;
  if ( a3 )
    v3 = a3;
  if ( !a1 )
  {
    v4 = 1;
    *v3 = 0;
    return v4;
  }
  if ( !a2 )
  {
    v4 = 1;
    *a1 = 0;
    *v3 = 0;
    return v4;
  }
  if ( *v3 )
  {
    *(_DWORD *)_errno(a1) = 84;
    *v3 = 0;
    return -1;
  }
  if ( a2 <= 0x7F )
  {
    *a1 = a2;
    return 1;
  }
  if ( a2 >= 0x800 )
  {
    if ( a2 >= 0x10000 )
    {
      if ( a2 >= 0x200000 )
      {
        *(_DWORD *)_errno(a1) = 84;
        return -1;
      }
      v4 = 4;
      v5 = -16;
    }
    else
    {
      v4 = 3;
      v5 = -32;
    }
  }
  else
  {
    v5 = -64;
    v4 = 2;
  }
  for ( i = v4 - 1; i; --i )
  {
    a1[i] = a2 & 0x3F | 0x80;
    a2 >>= 6;
  }
  *a1 = a2 | v5;
  return v4;
}


// ======================================================================
