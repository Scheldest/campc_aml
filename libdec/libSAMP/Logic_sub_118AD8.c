// ADDR: 0x1146f8
// SYMBOL: sub_1146F8
int __fastcall sub_1146F8(int a1)
{
  int v2; // r4
  float v3; // s16
  int result; // r0
  int v5; // r5
  int v6; // t1
  float v7; // s16
  float v8; // s18
  float v9; // s20
  float v10; // s22
  int v11; // r6
  int v12; // [sp+Ch] [bp-64h] BYREF
  _BYTE v13[4]; // [sp+10h] [bp-60h] BYREF
  int v14; // [sp+14h] [bp-5Ch]
  int v15; // [sp+18h] [bp-58h] BYREF
  _BYTE v16[4]; // [sp+20h] [bp-50h] BYREF
  float v17; // [sp+24h] [bp-4Ch]
  float v18[2]; // [sp+28h] [bp-48h] BYREF
  float v19[2]; // [sp+30h] [bp-40h] BYREF
  float v20[14]; // [sp+38h] [bp-38h] BYREF

  v2 = a1 + 4;
  (*(void (__fastcall **)(float *, int, int))(*(_DWORD *)a1 + 8))(v20, a1, a1 + 4);
  v3 = v20[0];
  (*(void (__fastcall **)(float *, int, int))(*(_DWORD *)a1 + 8))(v19, a1, v2);
  if ( v3 != v19[1]
    || (result = (*(int (__fastcall **)(float *, int, int))(*(_DWORD *)a1 + 8))(v18, a1, v2), v18[0] != 0.0) )
  {
    v6 = *(_DWORD *)(a1 - 16);
    v5 = a1 - 16;
    (*(void (__fastcall **)(float *, int))(v6 + 20))(v20, v5);
    v7 = v20[0];
    (*(void (__fastcall **)(float *, int))(*(_DWORD *)v5 + 76))(v19, v5);
    v8 = v19[0];
    (*(void (__fastcall **)(float *, int))(*(_DWORD *)v5 + 20))(v18, v5);
    v9 = v18[1];
    (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)v5 + 76))(v16, v5);
    v10 = v17;
    (*(void (__fastcall **)(int *, int))(*(_DWORD *)v5 + 76))(&v15, v5);
    v11 = v15;
    (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)v5 + 76))(v13, v5);
    v12 = -1;
    return sub_163176(v2, (float)(v7 - v8) * 0.5, v9 - v10, v11, v14, &v12);
  }
  return result;
}


// ======================================================================
