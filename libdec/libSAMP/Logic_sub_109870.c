// ADDR: 0x10990c
// SYMBOL: sub_10990C
int __fastcall sub_10990C(int a1)
{
  int result; // r0
  int v3; // r0
  float *v4; // r1
  float v5; // s18
  float v6; // s16
  float v7; // s22
  int v8; // r0
  double v9; // d10
  double v10; // r2
  double v11; // d8
  double v12; // d9
  int i; // r5
  int v14; // r0
  int v15; // [sp+10h] [bp-38h]
  int v16; // [sp+14h] [bp-34h]
  int v17; // [sp+18h] [bp-30h]

  result = *(_DWORD *)(a1 + 12);
  if ( result )
  {
    result = sub_108354(*(_DWORD *)(a1 + 8));
    if ( result )
    {
      v3 = *(_DWORD *)(a1 + 12);
      v4 = *(float **)(v3 + 20);
      v5 = v4[12];
      v6 = v4[13];
      v7 = v4[14];
      if ( *(_DWORD *)(v3 + 1124) )
      {
        v8 = sub_10830C();
        v9 = v5;
        v10 = v5;
        v11 = v6;
        v12 = (float)(v7 + 2.0);
        sub_107188(
          word_B3E22,
          v8,
          SLODWORD(v10),
          SHIDWORD(v10),
          SLODWORD(v11),
          SHIDWORD(v11),
          SLODWORD(v12),
          SHIDWORD(v12),
          v15,
          v16,
          v17);
      }
      else
      {
        v11 = v6;
        v9 = v5;
        v12 = (float)(v7 + 2.0);
      }
      for ( i = 282; i != 289; ++i )
      {
        result = *(_DWORD *)(*(_DWORD *)(a1 + 12) + 4 * i);
        if ( result )
        {
          v14 = sub_10830C();
          result = sub_107188(
                     word_B3E22,
                     v14,
                     SLODWORD(v9),
                     SHIDWORD(v9),
                     SLODWORD(v11),
                     SHIDWORD(v11),
                     SLODWORD(v12),
                     SHIDWORD(v12),
                     v15,
                     v16,
                     v17);
        }
      }
    }
  }
  return result;
}


// ======================================================================
