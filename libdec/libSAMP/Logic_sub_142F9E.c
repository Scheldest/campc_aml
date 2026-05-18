// ADDR: 0x14b194
// SYMBOL: sub_14B194
float __fastcall sub_14B194(int a1, unsigned __int16 *a2)
{
  float result; // r0
  unsigned int v3; // r4
  float *v4; // r5
  int v5; // r6
  int v7; // r4
  float v8; // s16
  float v9; // s18
  int v10; // s20
  float v11; // s22
  int v12; // s24
  int v13; // s26
  int v14; // r2
  int v15; // r1
  double v16; // d16
  float v17; // s4
  bool v18; // zf
  float v19; // r1
  float v20; // r2
  float v21; // r3
  int v22; // [sp+48h] [bp-A0h] BYREF
  int v23; // [sp+4Ch] [bp-9Ch]
  int v24; // [sp+50h] [bp-98h]
  int v25; // [sp+54h] [bp-94h]
  arg6_F894A v26; // [sp+58h] [bp-90h]
  int v27; // [sp+60h] [bp-88h]
  int v28; // [sp+64h] [bp-84h]
  arg9_F894A v29; // [sp+68h] [bp-80h]
  int v30; // [sp+70h] [bp-78h]
  int v31; // [sp+74h] [bp-74h]
  arg12_F894A v32; // [sp+78h] [bp-70h]
  int v33; // [sp+80h] [bp-68h]
  arg12_F894A v34; // [sp+88h] [bp-60h] BYREF
  float v35; // [sp+90h] [bp-58h]

  LODWORD(result) = 0xFFFF;
  v4 = (float *)((char *)a2 + 3);
  v3 = *a2;
  if ( v3 != 0xFFFF )
  {
    result = *(float *)&dword_23DEF4;
    if ( dword_23DEF4 )
    {
      result = *(float *)(dword_23DEF4 + 944);
      v5 = *(_DWORD *)(LODWORD(result) + 4);
      if ( v5 )
      {
        LODWORD(result) = v3 >> 4;
        if ( v3 >> 4 <= 0x7C )
        {
          LODWORD(result) = sub_F2396(v5, *a2);
          if ( result != 0.0 )
          {
            v7 = *(_DWORD *)(v5 + 4 * v3);
            if ( v7 )
            {
              LODWORD(result) = sub_10A1E4(v7);
              if ( result == 0.0 )
              {
                result = v4[3];
                v8 = result;
                if ( result <= 1.0 && result >= -1.0 )
                {
                  result = v4[4];
                  v9 = result;
                  if ( result <= 1.0 && result >= -1.0 )
                  {
                    result = v4[5];
                    v10 = LODWORD(result);
                    if ( result <= 1.0 && result >= -1.0 )
                    {
                      result = *v4;
                      v11 = *v4;
                      if ( *v4 <= 1.0 && v11 >= -1.0 )
                      {
                        result = v4[1];
                        v12 = LODWORD(result);
                        if ( result <= 1.0 && result >= -1.0 )
                        {
                          result = v4[2];
                          v13 = LODWORD(result);
                          if ( result <= 1.0 && result >= -1.0 )
                          {
                            result = v4[9];
                            if ( result <= 100.0 && result >= -100.0 )
                            {
                              result = v4[10];
                              if ( result <= 100.0 && result >= -100.0 )
                              {
                                result = v4[11];
                                if ( result <= 100.0 && result >= -100.0 )
                                {
                                  result = v4[12];
                                  if ( result <= 100.0 && result >= -100.0 )
                                  {
                                    result = v4[13];
                                    if ( result <= 100.0 && result >= -100.0 )
                                    {
                                      result = v4[14];
                                      if ( result <= 100.0 && result >= -100.0 )
                                      {
                                        v14 = 0;
                                        v15 = 1;
                                        v16 = *(double *)((char *)a2 + 27);
                                        v35 = *(float *)((char *)a2 + 35);
                                        result = COERCE_FLOAT(&v34);
                                        v34 = *(arg12_F894A *)&v16;
                                        while ( 1 )
                                        {
                                          v17 = *(float *)&v34.arr[v14];
                                          if ( v17 > 20000.0 || v17 < -20000.0 )
                                            break;
                                          v18 = v15 << 31 == 0;
                                          v14 = 1;
                                          v15 = 0;
                                          if ( v18 )
                                          {
                                            if ( v35 <= 100000.0 && v35 >= -10000.0 )
                                            {
                                              result = sub_F8DB8(
                                                         v7,
                                                         *(float *)((char *)a2 + 27),
                                                         *(float *)((char *)a2 + 31),
                                                         *(float *)((char *)a2 + 35));
                                              if ( result >= 0.54 )
                                              {
                                                sub_F8910(v7, &v22);
                                                v19 = *(float *)((char *)a2 + 27);
                                                v20 = *(float *)((char *)a2 + 31);
                                                v21 = *(float *)((char *)a2 + 35);
                                                v27 = v10;
                                                *(float *)&v26.arr[1] = v9;
                                                *(float *)v26.arr = v8;
                                                v24 = v13;
                                                v23 = v12;
                                                v22 = LODWORD(v11);
                                                if ( sub_F8DB8(v7, v19, v20, v21) > 3.87 )
                                                {
                                                  v33 = LODWORD(v35);
                                                  v32 = v34;
                                                }
                                                sub_F89BC(
                                                  v7,
                                                  *(_DWORD *)((char *)a2 + 39),
                                                  *(_DWORD *)((char *)a2 + 43),
                                                  *(_DWORD *)((char *)a2 + 47));
                                                sub_F8A08(
                                                  v7,
                                                  *(_DWORD *)((char *)a2 + 51),
                                                  *(_DWORD *)((char *)a2 + 55),
                                                  *(_DWORD *)((char *)a2 + 59));
                                                return COERCE_FLOAT(
                                                         sub_F894A(
                                                           v7,
                                                           v22,
                                                           v23,
                                                           v24,
                                                           v25,
                                                           v26,
                                                           v27,
                                                           v28,
                                                           v29,
                                                           v30,
                                                           v31,
                                                           v32,
                                                           v33));
                                              }
                                            }
                                            return result;
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
