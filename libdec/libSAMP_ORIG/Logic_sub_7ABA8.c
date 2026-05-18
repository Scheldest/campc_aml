// ADDR: 0x6284c
// SYMBOL: sub_6284C
int __fastcall sub_6284C(int a1, int a2)
{
  bool v2; // zf
  int v4; // r0
  bool v5; // zf
  float *v6; // r0
  float *v7; // r1
  float v8; // s0

  v2 = a1 == 0;
  if ( a1 )
    v2 = a2 == 0;
  if ( v2 )
    return 0;
  v4 = *(_DWORD *)(a1 + 92);
  v5 = v4 == 0;
  if ( v4 )
  {
    a2 = *(_DWORD *)(a2 + 12);
    v5 = a2 == 0;
  }
  if ( v5 )
    return 0;
  v6 = *(float **)(v4 + 20);
  v7 = *(float **)(a2 + 20);
  v8 = sqrt(
         (float)(v7[13] - v6[13]) * (float)(v7[13] - v6[13])
       + (float)(v7[12] - v6[12]) * (float)(v7[12] - v6[12])
       + (float)(v7[14] - v6[14]) * (float)(v7[14] - v6[14]));
  return LODWORD(v8);
}


// ======================================================================
