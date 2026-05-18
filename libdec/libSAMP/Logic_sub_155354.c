// ADDR: 0x15c614
// SYMBOL: sub_15C614
int __fastcall sub_15C614(int a1, __int16 a2)
{
  int v2; // r4
  int result; // r0
  int v5; // r6
  __int16 v6; // [sp+2h] [bp-1Eh] BYREF
  _BYTE v7[28]; // [sp+4h] [bp-1Ch] BYREF

  v2 = a1 + 24;
  v6 = a2;
  result = sub_15D7E2(a1 + 24, &v6);
  if ( result )
  {
    v5 = result;
    sub_15BEC4(a1, (int *)(result + 12));
    sub_15DA90(v7, v2, v5);
    return sub_15D7C0(v7, 0);
  }
  return result;
}


// ======================================================================
