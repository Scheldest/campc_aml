// ADDR: 0x1a87f4
// SYMBOL: sub_1A87F4
int __fastcall sub_1A87F4(_DWORD *a1, int a2)
{
  __int16 v3; // r9
  int v4; // r6
  _DWORD *v5; // r1
  int result; // r0
  int v7; // r5
  int v8; // r8
  int v9; // r0
  int v10; // r10
  int v11; // r9
  _BYTE v12[304]; // [sp-130h] [bp-158h] BYREF
  int v13; // [sp+0h] [bp-28h]

  v3 = a2;
  v4 = a1[1144];
  if ( v4 == a2 && a1[1140] == a1[1139] )
  {
    v5 = a1 + 1139;
    result = 0;
  }
  else
  {
    if ( v4 )
    {
      v7 = a1[1145];
      v13 = j_silk_resampler_init(v12, 1000 * (__int16)v4, a1[1139], 0);
      v8 = a1[1139] / 1000 * (10 * v7 + 5);
      v9 = j_silk_resampler((int)v12, (int)&v12[-((2 * v8 + 7) & 0xFFFFFFF8)], a1 + 1796);
      v10 = v9 + v13;
      v11 = v10 + j_silk_resampler_init(a1 + 1444, a1[1139], 1000 * v3, 1);
      result = j_silk_resampler((int)(a1 + 1444), (int)(a1 + 1796), &v12[-((2 * v8 + 7) & 0xFFFFFFF8)]) + v11;
    }
    else
    {
      result = j_silk_resampler_init(a1 + 1444, a1[1139], 1000 * a2, 1);
    }
    v5 = a1 + 1139;
  }
  a1[1140] = *v5;
  return result;
}


// ======================================================================
