// ADDR: 0xf146c
// SYMBOL: sub_F146C
int __fastcall sub_F146C(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int result; // r0
  float v8; // s16
  int v9; // r0
  int *v10; // r1
  int v11; // r2
  float v12[2]; // [sp+20h] [bp-48h] BYREF
  float v13[2]; // [sp+28h] [bp-40h] BYREF
  float v14[3]; // [sp+30h] [bp-38h] BYREF
  _DWORD v15[11]; // [sp+3Ch] [bp-2Ch] BYREF

  v15[0] = a2;
  v15[1] = a3;
  v15[2] = a4;
  result = ((int (__fastcall *)(_DWORD *, float *, _DWORD, _DWORD, _DWORD, _DWORD))(dword_23DF24 + 6051737))(
             v15,
             v14,
             0,
             0,
             0,
             0);
  if ( v14[2] >= 1.0 )
  {
    v8 = (float)(*(float *)(dword_23DEEC + 24) / 480.0) * 30.0;
    v9 = sub_167F88();
    v10 = *(int **)(a1 + 4);
    v12[1] = v8;
    v12[0] = v8;
    v11 = *v10;
    v13[0] = v14[0] - (float)(v8 * 0.5);
    v13[1] = v14[1] - (float)(v8 * 0.5);
    return ((int (__fastcall *)(int, int, int, float *, float *, int, int, _DWORD, _DWORD, int, int))sub_F1538)(
             v9,
             v9,
             v11,
             v13,
             v12,
             a5,
             a6,
             0,
             0,
             1065353216,
             1065353216);
  }
  return result;
}


// ======================================================================
