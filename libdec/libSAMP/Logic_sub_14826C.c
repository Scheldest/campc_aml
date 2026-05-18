// ADDR: 0x1056b4
// SYMBOL: sub_1056B4
int __fastcall sub_1056B4(int a1, unsigned int a2)
{
  if ( a2 <= 9 && *(_BYTE *)(a1 + a2 + 116) )
    return *(_DWORD *)(a1 + 4 * a2 + 648);
  else
    return 0;
}


// ======================================================================
// ADDR: 0x1482e0
// SYMBOL: sub_1482E0
int __fastcall sub_1482E0(int a1, int a2, float *a3, float a4)
{
  int result; // r0
  __int64 v8; // [sp+8h] [bp-80h] BYREF
  __int64 v9; // [sp+10h] [bp-78h]
  int v10; // [sp+18h] [bp-70h] BYREF
  int v11; // [sp+1Ch] [bp-6Ch]
  int v12; // [sp+20h] [bp-68h] BYREF
  int v13; // [sp+24h] [bp-64h]
  int v14; // [sp+28h] [bp-60h] BYREF
  int v15; // [sp+2Ch] [bp-5Ch]
  int v16; // [sp+34h] [bp-54h] BYREF
  int v17; // [sp+38h] [bp-50h]
  float v18; // [sp+3Ch] [bp-4Ch]
  float v19[3]; // [sp+40h] [bp-48h] BYREF
  float v20; // [sp+4Ch] [bp-3Ch] BYREF
  float v21; // [sp+50h] [bp-38h]
  float v22; // [sp+54h] [bp-34h]

  v22 = 0.0;
  v20 = a4;
  v21 = 0.0;
  sub_108F30(v19, a3, &v20);
  sub_1091DC((int)v19, (int)&v16);
  v21 = 0.0;
  v22 = 0.0;
  v20 = -a4;
  sub_108F30(v19, a3, &v20);
  sub_1091DC((int)v19, (int)&v14);
  if ( v18 > 1.0 )
  {
    v10 = v14;
    v11 = v15;
    v12 = v16;
    v13 = v17;
    v8 = 1065353216LL;
    v9 = 0x3F80000000000000LL;
    sub_12AB6C(a2, (int)&v12, (int)&v10, (int)&v8);
  }
  v22 = 0.0;
  v21 = a4;
  v20 = 0.0;
  sub_108F30(v19, a3, &v20);
  sub_1091DC((int)v19, (int)&v16);
  v22 = 0.0;
  v21 = -a4;
  v20 = 0.0;
  sub_108F30(v19, a3, &v20);
  sub_1091DC((int)v19, (int)&v14);
  if ( v18 > 1.0 )
  {
    v10 = v14;
    v11 = v15;
    v12 = v16;
    v13 = v17;
    v8 = 0x3F80000000000000LL;
    v9 = 0x3F80000000000000LL;
    sub_12AB6C(a2, (int)&v12, (int)&v10, (int)&v8);
  }
  v22 = a4;
  v20 = 0.0;
  v21 = 0.0;
  sub_108F30(v19, a3, &v20);
  sub_1091DC((int)v19, (int)&v16);
  v22 = -a4;
  v20 = 0.0;
  v21 = 0.0;
  sub_108F30(v19, a3, &v20);
  result = sub_1091DC((int)v19, (int)&v14);
  if ( v18 > 1.0 )
  {
    v10 = v14;
    v11 = v15;
    v12 = v16;
    v13 = v17;
    v8 = 0LL;
    v9 = 0x3F8000003F800000LL;
    return sub_12AB6C(a2, (int)&v12, (int)&v10, (int)&v8);
  }
  return result;
}


// ======================================================================
