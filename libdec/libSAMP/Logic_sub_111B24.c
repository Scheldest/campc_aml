// ADDR: 0x111bd4
// SYMBOL: sub_111BD4
int sub_111BD4()
{
  int result; // r0

  result = sub_108640((int)"hud");
  if ( result == -1 )
    return sub_108640((int)"*");
  return result;
}


// ======================================================================
// ADDR: 0x114e60
// SYMBOL: sub_114E60
int __fastcall sub_114E60(int a1, int a2)
{
  float v4; // s0
  bool v5; // zf
  _QWORD *v6; // r1
  __int64 v7; // d17
  __int64 *v8; // r3
  __int64 v9; // d18
  __int64 v10; // d19
  int v11; // r0
  int v12; // r0
  const char *v13; // r1
  int result; // r0

  v4 = 1.0;
  v5 = a2 == 0;
  v6 = &unk_B50EC;
  if ( !a2 )
    v6 = &unk_B50FC;
  v7 = v6[1];
  v8 = (__int64 *)&unk_B511C;
  if ( !v5 )
  {
    v8 = (__int64 *)&unk_B510C;
    v4 = 1.4142;
  }
  v9 = *v8;
  v10 = v8[1];
  *(_QWORD *)(a1 + 16) = *v6;
  *(_QWORD *)(a1 + 24) = v7;
  v11 = *(_DWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 32) = v9;
  *(_QWORD *)(a1 + 40) = v10;
  *(float *)(a1 + 56) = v4;
  if ( v11 )
  {
    v12 = v11 + 8;
    v13 = "SquareTick";
    if ( !a2 )
      v13 = "hud_ticks";
    sub_163C24(v12, v13, "hud_ticks");
    result = *(_DWORD *)(a1 + 80);
    *(_BYTE *)(result + 32) = a2;
  }
  else
  {
    result = 1;
    *(_BYTE *)(a1 + 84) = 1;
  }
  *(_BYTE *)(a1 + 85) = a2;
  return result;
}


// ======================================================================
// ADDR: 0x163144
// SYMBOL: sub_163144
int (*sub_163144())(void)
{
  sub_1630AC();
  sub_10867C();
  sub_1086A8();
  sub_1630DC();
  return sub_1086D4();
}


// ======================================================================
