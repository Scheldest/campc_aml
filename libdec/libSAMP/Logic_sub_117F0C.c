// ADDR: 0x117d08
// SYMBOL: sub_117D08
int __fastcall sub_117D08(int a1, float a2, int a3, float a4, int a5)
{
  void (__fastcall *v9)(float *, int, _QWORD *); // r3
  float v10; // s22
  float v11; // s24
  float v12; // s18
  float v13; // s20
  float v14; // s26
  float v15; // s28
  int v16; // s18
  int v17; // s20
  int v18; // r6
  int v19; // r0
  _QWORD v21[2]; // [sp+10h] [bp-88h] BYREF
  int v22; // [sp+24h] [bp-74h] BYREF
  float v23; // [sp+28h] [bp-70h] BYREF
  float v24; // [sp+2Ch] [bp-6Ch]
  float v25; // [sp+34h] [bp-64h] BYREF
  float v26; // [sp+38h] [bp-60h]
  _DWORD v27[23]; // [sp+3Ch] [bp-5Ch] BYREF

  v27[0] = a5;
  v9 = *(void (__fastcall **)(float *, int, _QWORD *))(*(_DWORD *)a1 + 8);
  v21[0] = 0x42A0000042A00000LL;
  v9(&v25, a1, v21);
  v10 = v25;
  v11 = v26;
  (*(void (__fastcall **)(_QWORD *, int))(*(_DWORD *)a1 + 20))(v21, a1);
  v12 = *(float *)v21;
  (*(void (__fastcall **)(float *, int))(*(_DWORD *)a1 + 76))(&v23, a1);
  v13 = v25;
  v14 = v23;
  (*(void (__fastcall **)(_QWORD *, int))(*(_DWORD *)a1 + 20))(v21, a1);
  v15 = *((float *)v21 + 1);
  (*(void (__fastcall **)(float *, int))(*(_DWORD *)a1 + 76))(&v23, a1);
  LODWORD(v21[0]) = -1;
  *(float *)&v16 = (float)(v13 * -3.3) + (float)((float)(v12 + v14) * 0.5);
  *(float *)&v17 = (float)(v15 + (float)(v24 * -0.55)) + a4;
  sub_163176(a1 + 92, v16, v17, LODWORD(v25), LODWORD(v26), v21);
  sub_163176(
    a3,
    *(float *)&v16 + (float)((float)(v10 * 0.25) * 0.5),
    *(float *)&v17 + (float)((float)(v11 * 0.25) * 0.5),
    v25 - (float)(v10 * 0.25),
    v26 - (float)(v11 * 0.25),
    v27);
  sub_163588(a1 + 96, v16, v17, SLODWORD(v25), v26, a2 * 0.01, (int)v27);
  v23 = 0.0;
  v24 = 0.0;
  sub_117EEC(&v23, 8, 8, "%.0f%%", a2);
  v18 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 24))(a1, 1058642330);
  v19 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 24))(a1, 1070386381);
  sub_163C58(v18, v19);
  sub_163CA4(0);
  sub_163D1C(1);
  sub_163D80(2);
  v22 = -1;
  sub_163C74(&v22);
  memset(v21, 0, sizeof(v21));
  sub_163C40(&v23, v21);
  return sub_163D64(*(float *)&v16 + (float)(v25 * 0.5), *(float *)&v17 + v26, v21);
}


// ======================================================================
