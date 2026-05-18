// ADDR: 0x118b08
// SYMBOL: sub_118B08
int __fastcall sub_118B08(int a1, float a2, int a3, float a4, int a5)
{
  void (__fastcall *v9)(float *, int, _QWORD *); // r3
  void (__fastcall *v10)(float *, int, _QWORD *); // r3
  float v11; // s16
  float v12; // s20
  float v13; // s24
  float v14; // s18
  float v15; // s20
  int v16; // s18
  int v17; // r5
  int v18; // r0
  float v19; // s4
  _QWORD v21[2]; // [sp+10h] [bp-80h] BYREF
  int v22; // [sp+24h] [bp-6Ch] BYREF
  float v23; // [sp+28h] [bp-68h] BYREF
  float v24; // [sp+2Ch] [bp-64h]
  float v25; // [sp+34h] [bp-5Ch] BYREF
  float v26; // [sp+38h] [bp-58h]
  float v27; // [sp+3Ch] [bp-54h] BYREF
  float v28; // [sp+40h] [bp-50h]
  _DWORD v29[19]; // [sp+44h] [bp-4Ch] BYREF

  v29[0] = a5;
  v9 = *(void (__fastcall **)(float *, int, _QWORD *))(*(_DWORD *)a1 + 8);
  v21[0] = 0x4280000042800000LL;
  v9(&v27, a1, v21);
  v10 = *(void (__fastcall **)(float *, int, _QWORD *))(*(_DWORD *)a1 + 8);
  v21[0] = 0x4180000041800000LL;
  v10(&v25, a1, v21);
  (*(void (__fastcall **)(_QWORD *, int))(*(_DWORD *)a1 + 20))(v21, a1);
  v11 = a4;
  v12 = *(float *)v21;
  (*(void (__fastcall **)(float *, int))(*(_DWORD *)a1 + 76))(&v23, a1);
  if ( a4 <= 0.0 )
    v13 = -v23;
  else
    v13 = v23;
  (*(void (__fastcall **)(_QWORD *, int))(*(_DWORD *)a1 + 20))(v21, a1);
  v14 = *((float *)v21 + 1);
  (*(void (__fastcall **)(float *, int))(*(_DWORD *)a1 + 76))(&v23, a1);
  LODWORD(v21[0]) = -1073741824;
  v15 = (float)(v12 + v13) * 0.5;
  *(float *)&v16 = v14 - (float)(v24 * 0.5);
  sub_163176(a1 + 96, v15 + a4, v16, LODWORD(v27), LODWORD(v28), v21);
  sub_163176(a3, (float)(v15 + a4) + (float)(v25 * 0.5), *(float *)&v16 + (float)(v26 * 0.5), v27 - v25, v28 - v26, v29);
  sub_163588(a1 + 100, COERCE_INT(v15 + a4), v16, SLODWORD(v27), v28, a2 * 0.01, (int)v29);
  v23 = 0.0;
  v24 = 0.0;
  sub_118CF4(&v23, 8, 8, "%.0f%%", a2);
  v17 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 24))(a1, 1056964608);
  v18 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 24))(a1, 1067869798);
  sub_163C58(v17, v18);
  sub_163CA4(0);
  sub_163D1C(1);
  sub_163D80(2);
  v22 = -1;
  sub_163C74(&v22);
  memset(v21, 0, sizeof(v21));
  sub_163C40(&v23, v21);
  v19 = -v27;
  if ( v11 > 0.0 )
    v19 = v27;
  return sub_163D64(v15 + v19, *(float *)&v16 + v28, v21);
}


// ======================================================================
