// ADDR: 0x17f3c8
// SYMBOL: sub_17F3C8
unsigned __int8 *__fastcall sub_17F3C8(int a1, int a2, int a3, const void *a4, size_t a5)
{
  unsigned __int8 *v7; // r0
  unsigned __int8 *v8; // r5
  int v9; // r6
  int v11; // [sp+8h] [bp-28h] BYREF
  int v12; // [sp+Ch] [bp-24h]
  _DWORD v13[8]; // [sp+10h] [bp-20h] BYREF

  v11 = a2;
  v12 = a3;
  if ( sub_17E580((int)&v11, (int)&unk_BE920) )
  {
    sub_17D55E((_DWORD *)(a1 + 12));
    v7 = (unsigned __int8 *)(a1 + 12);
  }
  else
  {
    v8 = (unsigned __int8 *)(a1 + 2804);
    v9 = 32;
    v13[0] = v11;
    v13[1] = v12;
    while ( !sub_17E580((int)(v8 - 12), (int)v13) )
    {
      --v9;
      v8 += 292;
      if ( !v9 )
        return (unsigned __int8 *)sub_181ACA(a1, v11, v12, a4, a5);
    }
    sub_17D55E(v8);
    v7 = v8;
  }
  return sub_17D566(v7, a4, a5);
}


// ======================================================================
