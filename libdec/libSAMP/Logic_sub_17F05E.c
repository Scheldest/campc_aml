// ADDR: 0x17f024
// SYMBOL: sub_17F024
int __fastcall sub_17F024(int a1, int a2, int a3)
{
  __int16 *v3; // r5
  int v4; // r6
  _DWORD v6[6]; // [sp+0h] [bp-18h] BYREF

  v6[0] = a2;
  v6[1] = a3;
  v3 = (__int16 *)(a1 + 2800);
  v4 = 32;
  while ( !sub_17E580((int)(v3 - 4), (int)v6) )
  {
    --v4;
    v3 += 146;
    if ( !v4 )
      return -1;
  }
  return *v3;
}


// ======================================================================
