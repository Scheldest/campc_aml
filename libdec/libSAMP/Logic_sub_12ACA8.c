// ADDR: 0x1745e0
// SYMBOL: sub_1745E0
// local variable allocation has failed, the output may be wrong!
const char *__fastcall sub_1745E0(
        const char *result,
        int a2,
        float a3,
        int a4,
        unsigned int a5,
        const char *a6,
        const char *a7,
        float a8,
        float *a9)
{
  const char *v9; // r4
  int v13; // s0
  int v14; // r3
  unsigned __int64 v15; // d17
  float v16; // s12
  float v17; // s14
  float v18; // s1
  float v19; // s3
  unsigned __int64 v20; // [sp+20h] [bp-28h] BYREF
  unsigned __int64 v21; // [sp+28h] [bp-20h]

  if ( a5 >= 0x1000000 )
  {
    v9 = result;
    result = a7;
    if ( !a7 )
      result = &a6[strlen(a6)];
    if ( result != a6 )
    {
      v13 = LODWORD(a3);
      if ( !a2 )
        a2 = *(_DWORD *)(*((_DWORD *)v9 + 10) + 8);
      if ( a3 == 0.0 )
        v13 = *(_DWORD *)(*((_DWORD *)v9 + 10) + 12);
      v14 = *((_DWORD *)v9 + 18);
      v15 = *(_QWORD *)(v14 + 16 * *((_DWORD *)v9 + 16) - 8);
      v20 = *(_QWORD *)(v14 + 16 * *((_DWORD *)v9 + 16) - 16);
      v21 = v15;
      if ( a9 )
      {
        v16 = *a9;
        v17 = a9[1];
        v18 = a9[2];
        v19 = a9[3];
        if ( *(float *)&v20 >= *a9 )
          LODWORD(v16) = v20;
        if ( *((float *)&v20 + 1) >= v17 )
          v17 = *((float *)&v20 + 1);
        if ( *(float *)&v21 < v18 )
          LODWORD(v18) = v21;
        if ( *((float *)&v21 + 1) < v19 )
          v19 = *((float *)&v21 + 1);
        v20 = __PAIR64__(LODWORD(v17), LODWORD(v16));
        v21 = __PAIR64__(LODWORD(v19), LODWORD(v18));
      }
      return (const char *)sub_1746E4(
                             a2,
                             (int)v9,
                             v13,
                             *(_DWORD *)a4,
                             *(float *)(a4 + 4),
                             a5,
                             (int)&v20,
                             (int)a6,
                             (int)result,
                             a8,
                             a9 != 0);
    }
  }
  return result;
}


// ======================================================================
