// ADDR: 0x166320
// SYMBOL: sub_166320
int __fastcall sub_166320(float a1, float a2, int a3, float a4)
{
  float v4; // s4
  float v5; // s0
  float v6; // s2
  float v7; // s8
  float v8; // s6
  float v9; // s12
  float v10; // s1
  float v11; // s4
  float v12; // s14
  float v13; // s10
  int v14; // r4
  __int64 v15; // d16
  __int64 v16; // d17
  float v17; // s0
  int v18; // r0
  float v20[2]; // [sp+8h] [bp-30h] BYREF
  float v21[2]; // [sp+10h] [bp-28h] BYREF
  float v22[2]; // [sp+18h] [bp-20h] BYREF
  __int64 v23; // [sp+20h] [bp-18h] BYREF
  int v24; // [sp+28h] [bp-10h]
  float v25; // [sp+2Ch] [bp-Ch]

  v4 = *(float *)(dword_381B58 + 6344);
  v5 = a2 + (float)((float)(v4 * 0.5) * a4);
  v6 = (float)(v4 * 0.5) + a1;
  v7 = (float)(v4 * 0.4) * a4;
  switch ( a3 )
  {
    case 0:
      v7 = -v7;
      goto LABEL_3;
    case 1:
LABEL_3:
      v8 = v7 * -0.866;
      v9 = v7 * 0.866;
      v10 = v7 * 0.0;
      v11 = v7 * -0.75;
      v12 = v7 * 0.75;
      v13 = v7 * -0.75;
      break;
    case 2:
      v7 = -v7;
      goto LABEL_6;
    case 3:
LABEL_6:
      v11 = v7 * 0.866;
      v13 = v7 * -0.866;
      v12 = v7 * 0.0;
      v8 = v7 * -0.75;
      v10 = v7 * 0.75;
      v9 = v7 * -0.75;
      break;
    default:
      v11 = 0.0;
      v8 = 0.0;
      v13 = 0.0;
      v9 = 0.0;
      v12 = 0.0;
      v10 = 0.0;
      break;
  }
  v14 = *(_DWORD *)(*(_DWORD *)(dword_381B58 + 6572) + 636);
  v15 = *(_QWORD *)(dword_381B58 + 5572);
  v16 = *(_QWORD *)(dword_381B58 + 5580);
  v22[1] = v5 + v10;
  v22[0] = v6 + v12;
  v21[1] = v5 + v9;
  v21[0] = v6 + v13;
  v20[1] = v5 + v8;
  v20[0] = v6 + v11;
  v17 = *(float *)(dword_381B58 + 5400);
  v23 = v15;
  v24 = v16;
  v25 = v17 * *((float *)&v16 + 1);
  v18 = sub_165778((float *)&v23);
  return sub_17443A(v14, v22, v21, v20, v18);
}


// ======================================================================
// ADDR: 0x16eb10
// SYMBOL: sub_16EB10
bool __fastcall sub_16EB10(int a1, float a2)
{
  float v2; // s0
  float *v3; // r0

  if ( !*(_BYTE *)(dword_381B58 + a1 + 232) )
    return 0;
  v2 = a2;
  v3 = (float *)(dword_381B58 + 4 * a1 + 1092);
  if ( a2 < 0.0 )
    v2 = *(float *)(dword_381B58 + 48);
  return *v3 >= (float)(v2 * v2);
}


// ======================================================================
// ADDR: 0x16eb58
// SYMBOL: sub_16EB58
bool sub_16EB58()
{
  int v0; // r0

  v0 = *(_DWORD *)(dword_381B58 + 6608);
  return v0 && v0 == *(_DWORD *)(*(_DWORD *)(dword_381B58 + 6572) + 264);
}


// ======================================================================
