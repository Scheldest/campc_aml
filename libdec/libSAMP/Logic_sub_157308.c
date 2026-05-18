// ADDR: 0x15736c
// SYMBOL: sub_15736C
int __fastcall sub_15736C(_BYTE *a1, double a2)
{
  double v3; // d16
  _BYTE *v4; // r4
  size_t v6; // [sp+8h] [bp-10h] BYREF
  size_t v7[3]; // [sp+Ch] [bp-Ch] BYREF

  v3 = a2;
  v4 = a1;
  if ( SHIDWORD(a2) <= -1 )
  {
    v3 = -a2;
    *a1 = 45;
    v4 = a1 + 1;
  }
  if ( v3 == 0.0 )
  {
    v4[2] = 48;
    *(_WORD *)v4 = 11824;
    return (int)(v4 + 3);
  }
  else
  {
    v6 = 0;
    v7[0] = 0;
    sub_1573CC(v4, v7, &v6, HIDWORD(a2), LODWORD(v3), HIDWORD(v3));
    return sub_157528(v4, v7[0], v6, -4, 15);
  }
}


// ======================================================================
