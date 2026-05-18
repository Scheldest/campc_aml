// ADDR: 0x16820c
// SYMBOL: sub_16820C
int __fastcall sub_16820C(int result, float *a2, int a3)
{
  int v3; // r3
  float v4; // s4
  float v5; // s6
  float v6; // s0
  float v7; // s2
  float v8; // s8
  float v9; // s10
  float v10; // s12
  float v11; // s14
  float v12; // s0
  float v13; // s2
  float v14; // s4
  float v15; // s6

  v3 = *(_DWORD *)(result + 172);
  if ( !a3 || (a3 & v3) != 0 )
  {
    v4 = *(float *)(result + 12);
    v5 = *(float *)(result + 16);
    *(_DWORD *)(result + 184) = 2139095039;
    *(_DWORD *)(result + 188) = 2139095039;
    v6 = *a2;
    v7 = a2[1];
    v8 = *(float *)(result + 200);
    v9 = *(float *)(result + 204);
    v10 = *(float *)(result + 224);
    v11 = *(float *)(result + 228);
    *(_DWORD *)(result + 172) = v3 & 0xFFFFFFF1;
    v12 = (float)(int)v6;
    v13 = (float)(int)v7;
    v14 = v12 - v4;
    *(float *)(result + 12) = v12;
    v15 = v13 - v5;
    *(float *)(result + 16) = v13;
    *(float *)(result + 224) = v14 + v10;
    *(float *)(result + 200) = v14 + v8;
    *(float *)(result + 228) = v15 + v11;
    *(float *)(result + 204) = v15 + v9;
  }
  return result;
}


// ======================================================================
