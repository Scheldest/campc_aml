// ADDR: 0x8b104
// SYMBOL: sub_8B104
int __fastcall sub_8B104(__int64 a1)
{
  int v1; // r2
  float v2; // s6
  float v3; // s0
  float *v4; // r1
  float v5; // s2
  float v6; // s1
  float v7; // s4
  float v8; // s14
  float v9; // s8
  float v10; // s10
  float v11; // s1
  float v12; // s6

  v1 = *(_DWORD *)(dword_1ACF68 + 6572);
  if ( !*(_BYTE *)(v1 + 127) )
  {
    v2 = *(float *)(a1 + 4);
    v3 = *((float *)&a1 + 1);
    v4 = (float *)(dword_1ACF68 + 5472);
    if ( *(float *)(v1 + 236) >= v2 )
      v2 = *(float *)(v1 + 236);
    v5 = *(float *)(v1 + 204);
    v6 = *(float *)(dword_1ACF68 + 5476);
    v7 = *(float *)(v1 + 200) + *(float *)a1;
    v8 = (float)(int)(float)((float)(v2 + v5) + v6);
    v9 = (float)(int)(float)((float)(*(float *)(v1 + 12) + *(float *)(v1 + 436)) + *(float *)(v1 + 444));
    v10 = v8 - v6;
    v11 = v7;
    if ( *(float *)(v1 + 224) >= v7 )
      v11 = *(float *)(v1 + 224);
    if ( *(float *)(v1 + 248) >= v3 )
      v3 = *(float *)(v1 + 248);
    if ( *(float *)(v1 + 228) >= v10 )
      v10 = *(float *)(v1 + 228);
    *(_DWORD *)(v1 + 248) = 0;
    *(_DWORD *)(v1 + 236) = 0;
    LODWORD(a1) = *(_DWORD *)(v1 + 348);
    *(float *)(v1 + 200) = v9;
    *(float *)(v1 + 204) = v8;
    *(float *)(v1 + 208) = v7;
    *(float *)(v1 + 212) = v5;
    *(float *)(v1 + 244) = v2;
    *(float *)(v1 + 252) = v3;
    *(float *)(v1 + 224) = v11;
    *(float *)(v1 + 228) = v10;
    if ( !(_DWORD)a1 )
    {
      v12 = *v4;
      a1 = *(_QWORD *)(v1 + 240);
      *(_BYTE *)(v1 + 124) = 1;
      *(float *)(v1 + 248) = v3;
      *(_QWORD *)(v1 + 232) = a1;
      *(float *)(v1 + 204) = v5;
      *(float *)(v1 + 200) = v7 + v12;
    }
  }
  return a1;
}


// ======================================================================
