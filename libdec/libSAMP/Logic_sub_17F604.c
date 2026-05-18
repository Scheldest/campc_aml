// ADDR: 0x1823c0
// SYMBOL: sub_1823C0
void *__fastcall sub_1823C0(int a1, int a2, int a3)
{
  unsigned int v4; // r0
  int v5; // r6
  unsigned int v6; // r5
  int v7; // r1
  const void *v8; // r0
  int v9; // r5
  int v10; // r0
  int v12; // [sp+8h] [bp-18h] BYREF
  int v13; // [sp+Ch] [bp-14h]

  v12 = a2;
  v13 = a3;
  if ( sub_17E580((int)&v12, (int)&unk_BE944) )
  {
    v4 = *(unsigned __int16 *)(a1 + 8);
    if ( *(_WORD *)(a1 + 8) )
    {
      v5 = 0;
      v6 = 0;
      do
      {
        v7 = *(_DWORD *)(a1 + 832);
        if ( *(_BYTE *)(v7 + v5) )
        {
          v8 = (const void *)sub_18A0A4(v7 + v5 + 24);
          j_memcpy(&unk_381CC0, v8, 0xC8u);
          v4 = *(unsigned __int16 *)(a1 + 8);
        }
        ++v6;
        v5 += 2112;
      }
      while ( v6 < v4 );
      return &unk_381CC0;
    }
    else
    {
      return &unk_381CC0;
    }
  }
  else
  {
    v9 = 0;
    v10 = sub_181978(a1, v12, v13, 0, 0);
    if ( v10 )
    {
      if ( *(_BYTE *)(a1 + 4) )
        return 0;
      else
        return (void *)sub_18A0A4(v10 + 24);
    }
  }
  return (void *)v9;
}


// ======================================================================
