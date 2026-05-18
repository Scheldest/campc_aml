// ADDR: 0x14f958
// SYMBOL: sub_14F958
unsigned int __fastcall sub_14F958(int a1, int a2)
{
  unsigned int result; // r0
  int v4; // r6
  int v5; // r9
  __int64 v6; // kr00_8
  int v7; // r11
  float v8; // s20
  float v9; // s22
  float v10; // s18
  int v11; // r4
  unsigned int v12; // r4
  int v13; // r4
  int v14; // r1
  int v15; // r0
  float v16; // s10
  int v17; // r0
  int v18; // [sp+10h] [bp-98h]
  int v20; // [sp+18h] [bp-90h]
  int v21; // [sp+1Ch] [bp-8Ch]
  float v22; // [sp+20h] [bp-88h] BYREF
  float v23; // [sp+24h] [bp-84h]
  float v24; // [sp+30h] [bp-78h]
  float v25; // [sp+34h] [bp-74h]
  float v26; // [sp+40h] [bp-68h]
  float v27; // [sp+44h] [bp-64h]

  *(float *)&result = COERCE_FLOAT(sub_E35A0(dword_23DEF0));
  v21 = result;
  if ( *(float *)&result != 0.0 )
  {
    result = dword_23DEF4;
    if ( dword_23DEF4 )
    {
      v4 = 81920;
      v5 = 0;
      v6 = *(_QWORD *)*(_DWORD *)(dword_23DEF4 + 944);
      v20 = *(_DWORD *)(*(_DWORD *)(dword_23DEF4 + 944) + 4);
      do
      {
        result = *(unsigned __int8 *)(a1 + v4);
        if ( *(_BYTE *)(a1 + v4) )
        {
          v7 = a1 + v5;
          result = *(unsigned __int16 *)(a1 + v5 + 34);
          v8 = *(float *)(a1 + v5 + 16);
          v9 = *(float *)(a1 + v5 + 20);
          v10 = *(float *)(a1 + v5 + 24);
          if ( result == 0xFFFF )
          {
            v12 = *(unsigned __int16 *)(v7 + 36);
            if ( v12 == 0xFFFF )
            {
              *(float *)&result = sub_F8DB8(
                                    v21,
                                    *(float *)(a1 + v5 + 16),
                                    *(float *)(a1 + v5 + 20),
                                    *(float *)(a1 + v5 + 24));
              if ( *(float *)&result <= *(float *)(v7 + 28) )
                goto LABEL_22;
            }
            else
            {
              result = v12 >> 4;
              if ( v12 >> 4 <= 0x7C )
              {
                result = sub_F2396(v20, *(unsigned __int16 *)(v7 + 36));
                if ( *(float *)&result != 0.0 )
                {
                  result = v20;
                  v13 = *(_DWORD *)(v20 + 4 * v12);
                  if ( v13 )
                  {
                    v14 = *(_DWORD *)(v13 + 12);
                    if ( v14 )
                    {
                      result = *(unsigned int *)(v14 + 20);
                      if ( *(float *)&result != 0.0 )
                      {
                        v18 = *(_DWORD *)(v13 + 12);
                        *(float *)&result = COERCE_FLOAT(sub_F8E1C(v13));
                        if ( *(float *)&result <= *(float *)(v7 + 28) )
                        {
                          sub_F8910(v13, &v22);
                          v15 = *(_DWORD *)(v18 + 20);
                          v16 = (float)((float)(v9 * v24) + (float)(v8 * v22)) + (float)(v10 * v26);
                          v9 = (float)((float)((float)(v9 * v25) + (float)(v8 * v23)) + (float)(v10 * v27))
                             + *(float *)(v15 + 52);
                          v8 = v16 + *(float *)(v15 + 48);
                          goto LABEL_22;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else if ( result <= 0x3EC )
          {
            if ( *(_BYTE *)(v6 + HIDWORD(v6) + 4020) )
            {
              result = *(unsigned int *)(v6 + 4 * HIDWORD(v6) + 4);
              if ( *(float *)&result != 0.0 )
              {
                v11 = *(_DWORD *)result;
                if ( *(_DWORD *)result )
                {
                  *(float *)&result = COERCE_FLOAT(sub_14B4F8(*(_DWORD *)result));
                  if ( *(float *)&result <= *(float *)(v7 + 28) )
                  {
                    result = *(unsigned int *)(v11 + 296);
                    if ( *(float *)&result != 0.0 )
                    {
                      sub_104D90(result);
                      v8 = v8 + v22;
                      v9 = v9 + v23;
LABEL_22:
                      v17 = *(unsigned __int8 *)(v7 + 32);
                      if ( *(_BYTE *)(v7 + 32) )
                        v17 = 1;
                      *(float *)&result = COERCE_FLOAT(sub_14FB68(v17, a2, LODWORD(v8), LODWORD(v9)));
                    }
                  }
                }
              }
            }
          }
        }
        ++v4;
        v5 += 40;
      }
      while ( v4 != 83968 );
    }
  }
  return result;
}


// ======================================================================
