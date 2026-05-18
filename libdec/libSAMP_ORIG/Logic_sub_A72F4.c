// ADDR: 0x88d28
// SYMBOL: sub_88D28
int __fastcall sub_88D28(float *a1)
{
  float v1; // s2
  float v2; // s4
  float v3; // s6
  float v4; // s12
  float v5; // s14
  float v6; // s8
  float v7; // s10
  float v8; // s1

  v1 = *a1;
  v2 = a1[1];
  v3 = a1[2];
  v4 = *a1;
  v5 = v3;
  v6 = a1[3] * *(float *)(dword_1ACF68 + 5400);
  v7 = v2;
  if ( v2 > 1.0 )
    v7 = 1.0;
  if ( v1 > 1.0 )
    v4 = 1.0;
  if ( v3 > 1.0 )
    v5 = 1.0;
  v8 = a1[3] * *(float *)(dword_1ACF68 + 5400);
  if ( v6 > 1.0 )
    v8 = 1.0;
  if ( v2 < 0.0 )
    v7 = 0.0;
  if ( v1 < 0.0 )
    v4 = 0.0;
  if ( v3 < 0.0 )
    v5 = 0.0;
  if ( v6 < 0.0 )
    v8 = 0.0;
  return (int)(float)((float)(v4 * 255.0) + 0.5) | ((int)(float)((float)(v7 * 255.0) + 0.5) << 8) | ((int)(float)((float)(v5 * 255.0) + 0.5) << 16) | ((int)(float)((float)(v8 * 255.0) + 0.5) << 24);
}


// ======================================================================
// ADDR: 0x8b2c0
// SYMBOL: sub_8B2C0
int __fastcall sub_8B2C0(__int64 a1)
{
  float v1; // s2
  float v2; // s6
  float v3; // s0
  float v5[5]; // [sp+4h] [bp-14h] BYREF

  v1 = *(float *)(a1 + 4);
  v2 = *(float *)(a1 + 12);
  v3 = *(float *)(a1 + 8) - *(float *)a1;
  LODWORD(a1) = v5;
  v5[0] = v3;
  v5[1] = v2 - v1;
  sub_8B104(a1);
  return LODWORD(v5[2]);
}


// ======================================================================
// ADDR: 0x97b74
// SYMBOL: sub_97B74
int __fastcall sub_97B74(unsigned int a1)
{
  _DWORD *v1; // r5
  int v2; // r1
  _DWORD *v3; // r8
  unsigned int v4; // r2
  unsigned int v5; // r2
  unsigned int v6; // r2
  unsigned int v7; // r2
  int v8; // r6
  int v9; // r0
  int (__fastcall *v10)(int, int); // r3
  int v11; // r1
  _DWORD *v12; // r0
  const void *v13; // r1
  int v14; // r1
  int v15; // r0
  bool v16; // zf
  int result; // r0
  int v18; // [sp+4h] [bp-1Ch]

  v1 = *(_DWORD **)(dword_1ACF68 + 6572);
  v2 = v1[113];
  v3 = (_DWORD *)v1[115];
  v4 = ~v3[v2 - 1];
  v5 = dword_52D88[(unsigned __int8)(v4 ^ a1)] ^ (v4 >> 8);
  v6 = dword_52D88[(unsigned __int8)(v5 ^ BYTE1(a1))] ^ (v5 >> 8);
  v7 = dword_52D88[(unsigned __int8)(v6 ^ BYTE2(a1))] ^ (v6 >> 8);
  v18 = ~(dword_52D88[(unsigned __int8)v7 ^ HIBYTE(a1)] ^ (v7 >> 8));
  if ( v2 == v1[114] )
  {
    v8 = v2 + 1;
    if ( v2 )
      v9 = v2 + v2 / 2;
    else
      v9 = 8;
    if ( v9 > v8 )
      v8 = v9;
    if ( v2 < v8 )
    {
      v10 = off_117248;
      v11 = dword_1ACF70;
      ++*(_DWORD *)(dword_1ACF68 + 880);
      v12 = (_DWORD *)v10(4 * v8, v11);
      v13 = (const void *)v1[115];
      v3 = v12;
      if ( v13 )
      {
        j_memcpy(v12, v13, 4 * v1[113]);
        v15 = v1[115];
        v16 = v15 == 0;
        if ( v15 )
        {
          v14 = dword_1ACF68;
          v16 = dword_1ACF68 == 0;
        }
        if ( !v16 )
          --*(_DWORD *)(v14 + 880);
        off_11724C(v15, dword_1ACF70);
      }
      v2 = v1[113];
      v1[114] = v8;
      v1[115] = v3;
    }
  }
  v3[v2] = v18;
  result = v1[113] + 1;
  v1[113] = result;
  return result;
}


// ======================================================================
// ADDR: 0x97dac
// SYMBOL: sub_97DAC
int sub_97DAC()
{
  int result; // r0

  result = *(_DWORD *)(dword_1ACF68 + 6572);
  --*(_DWORD *)(result + 452);
  return result;
}


// ======================================================================
