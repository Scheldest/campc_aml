// ADDR: 0x117174
// SYMBOL: sub_117174
int __fastcall sub_117174(float *a1, float a2, float a3, int a4, int a5)
{
  float v9; // s16
  float v10; // s18
  float v11; // s0
  float v12; // s18
  float v13; // s20
  float v14; // s16
  float v15; // s18
  float v16; // s24
  float v17; // s22
  float v18; // s2
  int result; // r0
  float v20; // s2
  float v21[2]; // [sp+Ch] [bp-54h] BYREF
  _DWORD v22[19]; // [sp+14h] [bp-4Ch] BYREF

  v22[0] = a5;
  v9 = a1[18];
  (*(void (__fastcall **)(float *, float *))(*(_DWORD *)a1 + 92))(v21, a1);
  v10 = v21[0];
  (*(void (__fastcall **)(float *, float *))(*(_DWORD *)a1 + 92))(v21, a1);
  v11 = v9 - v10;
  v12 = a1[21];
  v13 = v21[0];
  v21[0] = -1.4757e20;
  v14 = (float)(v11 * 0.95) * 0.0625;
  v15 = v12 + (float)(v14 * a3);
  sub_163176(a1 + 12, LODWORD(v13), LODWORD(v15), v11 * 0.95, LODWORD(v14), v21);
  v16 = a2;
  v17 = (float)(v11 * 0.95) / 100.0;
  if ( a2 > 100.0 )
    v16 = 100.0;
  sub_163176(a1 + 17, LODWORD(v13), LODWORD(v15), v16 * v17, LODWORD(v14), v22);
  v21[0] = NAN;
  v18 = v15 + v14 * -0.25;
  result = sub_163176(a4, v13 + (float)((float)(v11 * 0.95) * 0.1), LODWORD(v18), v14 * 1.25, v14 * 1.25, v21);
  if ( v16 > 0.0 )
  {
    v20 = (float)(v13 + (float)(v17 * v16)) + (float)(v14 * -0.66667);
    if ( v20 < (float)(v13 - (float)(v14 * 0.33333)) )
      v20 = v14 * 0.33333;
    v21[0] = NAN;
    return sub_163176(a1 + 16, LODWORD(v20), v15 + (float)(v14 * -0.5), LODWORD(v14), v14 + v14, v21);
  }
  return result;
}


// ======================================================================
