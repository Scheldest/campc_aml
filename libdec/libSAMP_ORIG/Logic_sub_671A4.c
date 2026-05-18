// ADDR: 0x67530
// SYMBOL: sub_67530
int __fastcall sub_67530(int a1, _QWORD *a2, int a3)
{
  _DWORD *v4; // r2
  int v6; // r0
  bool v7; // zf
  int v8; // r6
  int v9; // r0
  int v10; // r1
  float v11; // s14
  float *v12; // r1
  float v13; // s10
  float v14; // s6
  float v15; // s4
  float v16; // s2
  float v17; // s0
  float v18; // s1
  float v19; // s12
  float v20; // s8
  int result; // r0
  __int64 *v22; // r1
  __int64 v23; // d16
  __int64 v24; // d17
  __int64 v25; // d18
  __int64 v26; // d19
  __int64 v27; // d20
  __int64 v28; // d21
  __int64 v29; // d22
  __int64 v30; // d23
  _QWORD *v31; // r8

  v4 = *(_DWORD **)(a1 + 92);
  if ( !v4 || *v4 == dword_1A4404 + 6716708 )
    return 0;
  v6 = *(_DWORD *)(a1 + 4);
  v7 = v6 == 0;
  if ( v6 )
    v7 = *(_DWORD *)(v6 + 24) == 0;
  if ( v7 )
    return 0;
  v8 = ((int (*)(void))(dword_1A4404 + 6098977))();
  v9 = ((int (__fastcall *)(int, int))(dword_1A4404 + 1846417))(v8, a3);
  v10 = *(_DWORD *)(v8 + 8);
  v11 = *(float *)(v10 + (v9 << 6));
  v12 = (float *)(v10 + (v9 << 6));
  v13 = v12[1];
  v14 = v12[2];
  v15 = v12[4];
  v16 = v12[5];
  v17 = v12[6];
  v18 = v12[8];
  v19 = v12[9];
  v20 = v12[10];
  result = 0;
  if ( fabsf(v11) != INFINITY
    && fabsf(v13) != INFINITY
    && fabsf(v15) != INFINITY
    && fabsf(v17) != INFINITY
    && fabsf(v19) != INFINITY )
  {
    result = 0;
    if ( v11 <= 20000.0 && v11 >= -20000.0 )
    {
      result = 0;
      if ( v13 <= 20000.0 && v13 >= -20000.0 )
      {
        result = 0;
        if ( v14 <= 20000.0 && v14 >= -20000.0 )
        {
          result = 0;
          if ( v18 <= 20000.0 && v18 >= -20000.0 )
          {
            result = 0;
            if ( v19 <= 20000.0 && v19 >= -20000.0 )
            {
              result = 0;
              if ( v20 <= 20000.0 && v20 >= -20000.0 )
              {
                result = 0;
                if ( v15 <= 20000.0 && v15 >= -20000.0 )
                {
                  result = 0;
                  if ( v16 <= 20000.0 && v16 >= -20000.0 )
                  {
                    result = 0;
                    if ( v17 <= 20000.0 && v17 >= -20000.0 )
                    {
                      if ( v12 )
                      {
                        v23 = *(_QWORD *)v12;
                        v24 = *((_QWORD *)v12 + 1);
                        v22 = (__int64 *)(v12 + 4);
                        result = 1;
                        v25 = *v22;
                        v26 = v22[1];
                        v22 += 2;
                        v27 = *v22;
                        v28 = v22[1];
                        v22 += 2;
                        v29 = *v22;
                        v30 = v22[1];
                        *a2 = v23;
                        a2[1] = v24;
                        v31 = a2 + 2;
                        *v31 = v25;
                        v31[1] = v26;
                        v31 += 2;
                        *v31 = v27;
                        v31[1] = v28;
                        v31 += 2;
                        *v31 = v29;
                        v31[1] = v30;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x686a0
// SYMBOL: sub_686A0
float *__fastcall sub_686A0(float *result, float *a2, float *a3)
{
  float v3; // s0
  float v4; // s4
  float v5; // r12
  float v6; // r3
  float v7; // s0
  float v8; // s2
  float v9; // s6
  float v10; // r3
  float v11; // s0

  v3 = a3[1];
  v4 = a3[2];
  v5 = a2[2];
  v6 = (float)((float)((float)(a2[4] * v3) + (float)(a2[8] * v4)) + (float)(*a2 * *a3)) + a2[12];
  v7 = (float)(v3 * a2[5]) + (float)(a2[9] * v4);
  v8 = a2[1];
  *result = v6;
  v9 = *a3;
  v10 = (float)(v7 + (float)(v8 * *a3)) + a2[13];
  v11 = a2[6];
  result[1] = v10;
  result[2] = a2[14] + (float)((float)((float)(v11 * a3[1]) + (float)(a2[10] * v4)) + (float)(v5 * v9));
  return result;
}


// ======================================================================
// ADDR: 0x6875c
// SYMBOL: sub_6875C
int __fastcall sub_6875C(int a1, int a2, int a3)
{
  return ((int (__fastcall *)(int, char *, int, int))(dword_1A4404 + 1980789))(a1, (char *)&unk_116C7C + 12 * a2, a3, 1);
}


// ======================================================================
// ADDR: 0x68790
// SYMBOL: sub_68790
int __fastcall sub_68790(int result, float *a2)
{
  float v2; // r12
  float v3; // s6
  float v4; // s0
  float v5; // r3
  float v6; // s2
  float v7; // s8
  float v8; // s4
  float v9; // r2
  float v10; // s0
  float v11; // s2

  v2 = *(float *)(result + 8);
  v3 = *(float *)(result + 16);
  v4 = *(float *)(result + 4);
  v5 = *(float *)(result + 20);
  *(float *)result = *a2 * *(float *)result;
  v6 = *a2;
  v7 = *(float *)(result + 24);
  *(float *)(result + 4) = *a2 * v4;
  v8 = a2[1];
  *(float *)(result + 20) = v8 * v5;
  v9 = a2[1];
  *(float *)(result + 16) = v8 * v3;
  *(float *)(result + 8) = v6 * v2;
  v10 = *(float *)(result + 32);
  *(float *)(result + 24) = v9 * v7;
  v11 = a2[2];
  *(float *)(result + 32) = v11 * v10;
  *(float *)(result + 36) = v11 * *(float *)(result + 36);
  *(float *)(result + 40) = v11 * *(float *)(result + 40);
  *(_DWORD *)(result + 12) &= 0xFFFDFFFC;
  return result;
}


// ======================================================================
