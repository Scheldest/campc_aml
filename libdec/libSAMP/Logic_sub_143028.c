// ADDR: 0x14ae1c
// SYMBOL: sub_14AE1C
float __fastcall sub_14AE1C(float result, unsigned __int16 *a2)
{
  unsigned int v2; // r4
  float *v3; // r9
  float v4; // r6
  int v6; // r5
  int v8; // r4
  int32x4_t v14; // t2
  unsigned int v15; // r6
  int v16; // r5
  int v17; // r3
  float v18; // [sp+50h] [bp-88h] BYREF
  float v19; // [sp+54h] [bp-84h]
  float v20; // [sp+58h] [bp-80h]
  __int128 v21; // [sp+60h] [bp-78h] BYREF
  int v22; // [sp+70h] [bp-68h] BYREF
  int v23; // [sp+74h] [bp-64h]
  int v24; // [sp+78h] [bp-60h]
  int v25; // [sp+7Ch] [bp-5Ch]
  arg6_F894A v26; // [sp+80h] [bp-58h]
  int v27; // [sp+88h] [bp-50h]
  int v28; // [sp+8Ch] [bp-4Ch]
  arg9_F894A v29; // [sp+90h] [bp-48h]
  int v30; // [sp+98h] [bp-40h]
  int v31; // [sp+9Ch] [bp-3Ch]
  arg12_F894A v32; // [sp+A0h] [bp-38h]
  int v33; // [sp+A8h] [bp-30h]

  v3 = (float *)(a2 + 1);
  v2 = *a2;
  if ( *a2 )
  {
    v4 = result;
    LODWORD(result) = 0xFFFF;
    _ZF = v2 == 0xFFFF;
    if ( v2 != 0xFFFF )
    {
      result = *(float *)(LODWORD(v4) + 4);
      _ZF = LODWORD(result) == 0;
    }
    if ( !_ZF )
    {
      result = *(float *)(dword_23DEF4 + 944);
      v6 = *(_DWORD *)(LODWORD(result) + 4);
      if ( v6 )
      {
        LODWORD(result) = v2 >> 4;
        if ( v2 >> 4 <= 0x7C )
        {
          LODWORD(result) = sub_F2396(v6, *a2);
          if ( result != 0.0 )
          {
            v8 = *(_DWORD *)(v6 + 4 * v2);
            if ( v8 )
            {
              if ( sub_109F60(v8) || (LODWORD(result) = sub_109FC4(v8), result != 0.0) )
              {
                if ( sub_109E00(*(_DWORD *)(LODWORD(v4) + 4)) != v8 )
                {
                  sub_109C00(*(_DWORD *)(LODWORD(v4) + 4), v8);
                  sub_10A0B8(*(_DWORD *)(LODWORD(v4) + 4));
                }
                sub_F8910(v8, &v22);
                _Q8 = *(_OWORD *)(a2 + 7);
                __asm { VCEQ.F32        Q9, Q8, #0.0 }
                v21 = _Q8;
                v14.n128_u64[0] = ~(_QWORD)_Q9;
                v14.n128_u64[1] = ~*((_QWORD *)&_Q9 + 1);
                *(int16x4_t *)&_Q9 = vmovn_s32(v14);
                if ( (_Q9 & 1 | (2 * (BYTE2(_Q9) & 1u)) | (4 * (BYTE4(_Q9) & 1u)) | (8 * (unsigned int)WORD3(_Q9))) << 28 )
                {
                  sub_17D238(&v21, &v22);
                  if ( COERCE_FLOAT(sub_108700(*v3, *(float *)v32.arr)) > 0.5
                    || COERCE_FLOAT(sub_108700(v3[1], *(float *)&v32.arr[1])) > 0.5
                    || (result = COERCE_FLOAT(sub_108700(v3[2], *(float *)&v33)), result > 0.5) )
                  {
                    if ( COERCE_FLOAT(sub_108700(*v3, *(float *)v32.arr)) > 6.0
                      || COERCE_FLOAT(sub_108700(v3[1], *(float *)&v32.arr[1])) > 6.0
                      && COERCE_FLOAT(sub_108700(v3[2], *(float *)&v33)) > 3.0 )
                    {
                      v15 = *((_DWORD *)v3 + 1);
                      v16 = *((int *)v3 + 2);
                      *(float *)v32.arr = *v3;
                      v32.arr[1] = v15;
                      v33 = v16;
                      sub_F894A(
                        v8,
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
                        (arg12_F894A)__PAIR64__(v15, v32.arr[0]),
                        v16);
                      sub_F89BC(v8, *(_DWORD *)(a2 + 15), *(_DWORD *)(a2 + 17), *(_DWORD *)(a2 + 19));
                      return COERCE_FLOAT(sub_F8A08(v8, *(_DWORD *)(a2 + 21), *(_DWORD *)(a2 + 23), *(_DWORD *)(a2 + 25)));
                    }
                    else
                    {
                      sub_F894A(v8, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33);
                      sub_F8A08(v8, *(_DWORD *)(a2 + 21), *(_DWORD *)(a2 + 23), *(_DWORD *)(a2 + 25));
                      v18 = 0.0;
                      v19 = 0.0;
                      v20 = 0.0;
                      sub_F8994(v8, &v18);
                      if ( COERCE_FLOAT(sub_108700(*v3, *(float *)v32.arr)) > 0.05 )
                        v18 = v18 + (float)((float)(*v3 - *(float *)v32.arr) * 0.025);
                      if ( COERCE_FLOAT(sub_108700(v3[1], *(float *)&v32.arr[1])) > 0.05 )
                        v19 = v19 + (float)((float)(v3[1] - *(float *)&v32.arr[1]) * 0.025);
                      if ( COERCE_FLOAT(sub_108700(v3[2], *(float *)&v33)) <= 0.05 )
                      {
                        *(float *)&v17 = v20;
                      }
                      else
                      {
                        *(float *)&v17 = v20 + (float)((float)(v3[2] - *(float *)&v33) * 0.025);
                        v20 = *(float *)&v17;
                      }
                      return COERCE_FLOAT(sub_F89BC(v8, SLODWORD(v18), SLODWORD(v19), v17));
                    }
                  }
                }
                else
                {
                  return COERCE_FLOAT(_android_log_print(4, "AXL", "Bad CQuaternion: File: %s - Line: %i", "remoteplayer.cpp", 900));
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
