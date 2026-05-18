// ADDR: 0x8a0bc
// SYMBOL: sub_8A0BC
int __fastcall sub_8A0BC(int a1, float a2, float a3, int a4, int a5, float a6)
{
  float v6; // s4
  float v7; // s0
  float v8; // s2
  float v9; // s8
  float v10; // s6
  float v11; // s1
  float v12; // s14
  float v13; // s4
  float v14; // s12
  float v15; // s10
  float v17[2]; // [sp+4h] [bp-24h] BYREF
  float v18[2]; // [sp+Ch] [bp-1Ch] BYREF
  float v19[5]; // [sp+14h] [bp-14h] BYREF

  v6 = *(float *)(*(_DWORD *)(a1 + 40) + 12);
  v7 = a3 + (float)((float)(v6 * 0.5) * a6);
  v8 = (float)(v6 * 0.5) + a2;
  v9 = (float)(v6 * 0.4) * a6;
  switch ( a5 )
  {
    case 0:
      v9 = -v9;
      goto LABEL_3;
    case 1:
LABEL_3:
      v10 = v9 * -0.866;
      v11 = v9 * 0.0;
      v12 = v9 * 0.866;
      v13 = v9 * -0.75;
      v14 = v9 * 0.75;
      v15 = v9 * -0.75;
      break;
    case 2:
      v9 = -v9;
      goto LABEL_6;
    case 3:
LABEL_6:
      v13 = v9 * 0.866;
      v15 = v9 * -0.866;
      v14 = v9 * 0.0;
      v10 = v9 * -0.75;
      v11 = v9 * 0.75;
      v12 = v9 * -0.75;
      break;
    default:
      v13 = 0.0;
      v10 = 0.0;
      v15 = 0.0;
      v12 = 0.0;
      v14 = 0.0;
      v11 = 0.0;
      break;
  }
  v19[1] = v7 + v11;
  v18[1] = v7 + v12;
  v19[0] = v8 + v14;
  v18[0] = v8 + v15;
  v17[1] = v7 + v10;
  v17[0] = v8 + v13;
  ((void (__fastcall *)(int, float *, float *, float *, int))sub_9D6F8)(a1, v19, v18, v17, a4);
  return LODWORD(v19[2]);
}


// ======================================================================
// ADDR: 0x955b0
// SYMBOL: sub_955B0
bool __fastcall sub_955B0(int a1, float a2)
{
  float v3; // s0
  float *v4; // r0

  if ( !*(_BYTE *)(dword_1ACF68 + a1 + 232) )
    return 0;
  v3 = a2;
  v4 = (float *)(dword_1ACF68 + 4 * a1 + 1092);
  if ( a2 < 0.0 )
    v3 = *(float *)(dword_1ACF68 + 48);
  return *v4 >= (float)(v3 * v3);
}


// ======================================================================
