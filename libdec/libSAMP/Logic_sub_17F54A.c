// ADDR: 0x1821b6
// SYMBOL: sub_1821B6
void __fastcall sub_1821B6(int a1, int a2, int a3)
{
  _DWORD *v3; // r0
  int v4[3]; // [sp+4h] [bp-Ch] BYREF

  v4[0] = a2;
  v3 = (_DWORD *)(a1 + 2496);
  if ( a3 )
    sub_1821D6(v3, v4, 0);
  else
    sub_180D28(v3, v4);
}


// ======================================================================
