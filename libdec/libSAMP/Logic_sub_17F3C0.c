// ADDR: 0x17f368
// SYMBOL: sub_17F368
int __fastcall sub_17F368(int a1, int a2, int a3)
{
  int v4; // r4
  int v5; // r6
  int v7; // [sp+0h] [bp-20h] BYREF
  int v8; // [sp+4h] [bp-1Ch]
  _DWORD v9[6]; // [sp+8h] [bp-18h] BYREF

  v7 = a2;
  v8 = a3;
  if ( sub_17E580((int)&v7, (int)&unk_BE920) )
    return a1 + 12;
  v4 = a1 + 2804;
  v5 = 32;
  v9[0] = v7;
  v9[1] = v8;
  while ( !sub_17E580(v4 - 12, (int)v9) )
  {
    --v5;
    v4 += 292;
    if ( !v5 )
      return 0;
  }
  return v4;
}


// ======================================================================
