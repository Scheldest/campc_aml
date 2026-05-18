// ADDR: 0xf15e0
// SYMBOL: sub_F15E0
int __fastcall sub_F15E0(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  int result; // r0
  float v8; // s16
  int v9; // r0
  int v10; // r1
  float v11; // [sp+10h] [bp-60h] BYREF
  float v12; // [sp+14h] [bp-5Ch]
  float v13[3]; // [sp+18h] [bp-58h] BYREF
  _DWORD v14[3]; // [sp+24h] [bp-4Ch] BYREF
  float v15[2]; // [sp+30h] [bp-40h] BYREF
  __int64 v16; // [sp+38h] [bp-38h] BYREF
  _QWORD v17[6]; // [sp+40h] [bp-30h] BYREF

  v14[0] = a2;
  v14[1] = a3;
  v14[2] = a4;
  result = ((int (__fastcall *)(_DWORD *, float *, _DWORD, _DWORD, _DWORD, _DWORD))(dword_23DF24 + 6051737))(
             v14,
             v13,
             0,
             0,
             0,
             0);
  if ( v13[2] >= 1.0 )
  {
    v8 = (float)(*(float *)(dword_23DEEC + 24) * 0.0019531) * 20.0;
    v9 = sub_167F88();
    v10 = **(_DWORD **)(a1 + 8);
    v17[0] = a5;
    v11 = v13[0] - (float)(v8 * 0.5);
    v12 = v13[1] - (float)(v8 * 0.5);
    v16 = a6;
    v15[0] = v8 + v11;
    v15[1] = v8 + v12;
    return sub_174BE2(v9, v10, &v11, v15, v17, &v16, -1);
  }
  return result;
}


// ======================================================================
