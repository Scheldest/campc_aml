// ADDR: 0x9d89c
// SYMBOL: sub_9D89C
// local variable allocation has failed, the output may be wrong!
int __fastcall sub_9D89C(
        _DWORD *a1,
        int a2,
        float a3,
        int a4,
        unsigned int a5,
        const char *a6,
        const char *a7,
        float a8,
        float *a9)
{
  int v10; // r0
  int v14; // s0
  int v15; // r3
  unsigned __int64 v16; // d17
  float v17; // s12
  float v18; // s14
  float v19; // s1
  float v20; // s3
  unsigned __int64 v22; // [sp+20h] [bp-30h] BYREF
  unsigned __int64 v23; // [sp+28h] [bp-28h]
  int v24; // [sp+34h] [bp-1Ch]

  if ( a5 >= 0x1000000 )
  {
    v10 = (int)a7;
    if ( a7 )
    {
      if ( a7 == a6 )
        return v24;
    }
    else
    {
      v10 = (int)&a6[strlen(a6)];
      if ( (const char *)v10 == a6 )
        return v24;
    }
    v14 = LODWORD(a3);
    if ( !a2 )
      a2 = *(_DWORD *)(a1[10] + 8);
    if ( a3 == 0.0 )
      v14 = *(_DWORD *)(a1[10] + 12);
    v15 = a1[18];
    v16 = *(_QWORD *)(v15 + 16 * a1[16] - 8);
    v22 = *(_QWORD *)(v15 + 16 * a1[16] - 16);
    v23 = v16;
    if ( a9 )
    {
      v17 = *a9;
      v18 = a9[1];
      v19 = a9[2];
      v20 = a9[3];
      if ( *(float *)&v22 >= *a9 )
        LODWORD(v17) = v22;
      if ( *((float *)&v22 + 1) >= v18 )
        v18 = *((float *)&v22 + 1);
      if ( *(float *)&v23 < v19 )
        LODWORD(v19) = v23;
      if ( *((float *)&v23 + 1) < v20 )
        v20 = *((float *)&v23 + 1);
      v22 = __PAIR64__(LODWORD(v18), LODWORD(v17));
      v23 = __PAIR64__(LODWORD(v20), LODWORD(v19));
    }
    sub_9D9C8(a2, (int)a1, v14, *(_DWORD *)a4, *(float *)(a4 + 4), a5, (int)&v22, (int)a6, v10, a8, a9 != 0);
  }
  return v24;
}


// ======================================================================
