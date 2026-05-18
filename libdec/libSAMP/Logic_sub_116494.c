// ADDR: 0x1164b8
// SYMBOL: sub_1164B8
int __fastcall sub_1164B8(int a1, float a2, float a3, float a4, int a5)
{
  int (__fastcall *v9)(int, int); // r2
  int v10; // r6
  int v11; // r0
  float v12; // s16
  float v13; // s18
  float v14; // r6
  float v15; // s20
  float v16; // r0
  float v17; // s18
  float v18; // r5
  float v19; // s20
  float v20; // r6
  float v21; // r0
  float v22; // s0
  float v23; // r0
  _BYTE v25[4]; // [sp+8h] [bp-78h] BYREF
  float v26; // [sp+Ch] [bp-74h]
  float v27[2]; // [sp+10h] [bp-70h] BYREF
  _BYTE v28[32]; // [sp+18h] [bp-68h] BYREF
  _BYTE v29[20]; // [sp+38h] [bp-48h] BYREF
  _DWORD v30[13]; // [sp+4Ch] [bp-34h] BYREF

  v9 = *(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 96);
  v30[0] = a5;
  v10 = v9(a1, 1057006215);
  v11 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 96))(a1, 1066192077);
  sub_163C58(v10, v11);
  v12 = a2;
  memset(v28, 0, sizeof(v28));
  memset(v29, 0, 16);
  sub_116828(v29);
  sub_163C40(v29, v28);
  (*(void (__fastcall **)(float *, int))(*(_DWORD *)a1 + 92))(v27, a1);
  v13 = v27[0];
  v14 = COERCE_FLOAT((*(int (__fastcall **)(int))(*(_DWORD *)a1 + 24))(a1));
  (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)a1 + 92))(v25, a1);
  v15 = v26;
  v16 = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 24))(a1);
  sub_163D64(v13 + (float)(v14 * 398.0), v15 + (float)(a4 * v16), v28);
  (*(void (__fastcall **)(float *, int))(*(_DWORD *)a1 + 92))(v27, a1);
  v17 = v27[0];
  v18 = COERCE_FLOAT((*(int (__fastcall **)(int))(*(_DWORD *)a1 + 24))(a1));
  (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)a1 + 92))(v25, a1);
  v19 = v26;
  v20 = COERCE_FLOAT((*(int (__fastcall **)(int))(*(_DWORD *)a1 + 24))(a1));
  v21 = COERCE_FLOAT((*(int (__fastcall **)(int))(*(_DWORD *)a1 + 24))(a1));
  if ( v12 > 100.0 )
    v12 = 100.0;
  v22 = (float)(v21 * 234.0) * 0.01;
  v23 = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 24))(a1);
  return sub_163176(a1 + 44, v17 + (float)(v18 * 134.0), v19 + (float)(a3 * v20), v12 * v22, v23 * 8.0, v30);
}


// ======================================================================
