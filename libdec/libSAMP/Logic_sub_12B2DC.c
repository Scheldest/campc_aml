// ADDR: 0x172c12
// SYMBOL: sub_172C12
int __fastcall sub_172C12(int *a1, unsigned int a2, float a3, float a4, float a5, int a6)
{
  int v7; // r0
  float v8; // s0
  float v9; // s2
  float v10; // s6
  float v11; // s4
  int v12; // r1
  int v13; // r6
  int v14; // r1
  void *v15; // r0
  const void *v16; // r1
  int v17; // r5
  unsigned __int64 *v18; // r0
  unsigned __int64 v20; // [sp+0h] [bp-20h]

  v7 = a1[16];
  v8 = a4;
  v9 = a5;
  v10 = a3;
  v11 = *(float *)&a2;
  v20 = __PAIR64__(LODWORD(a3), a2);
  if ( a6 )
  {
    if ( v7 )
    {
      v12 = a1[18] + 16 * v7;
      if ( *(float *)(v12 - 16) > v11 )
      {
        LODWORD(v20) = *(_DWORD *)(v12 - 16);
        v11 = *(float *)&v20;
      }
      if ( *(float *)(v12 - 12) > a3 )
      {
        HIDWORD(v20) = *(_DWORD *)(v12 - 12);
        v10 = *((float *)&v20 + 1);
      }
      if ( *(float *)(v12 - 8) < a4 )
        v8 = *(float *)(v12 - 8);
      if ( *(float *)(v12 - 4) < a5 )
        v9 = *(float *)(v12 - 4);
    }
    else
    {
      v7 = 0;
    }
  }
  if ( v10 >= v9 )
    v9 = v10;
  if ( v11 >= v8 )
    v8 = v11;
  if ( v7 == a1[17] )
  {
    v13 = v7 + 1;
    if ( v7 )
      v14 = v7 + v7 / 2;
    else
      v14 = 8;
    if ( v14 > v13 )
      v13 = v14;
    if ( v7 < v13 )
    {
      v15 = (void *)sub_1654B0(16 * v13);
      v16 = (const void *)a1[18];
      v17 = (int)v15;
      if ( v16 )
      {
        j_memcpy(v15, v16, 16 * a1[16]);
        sub_165578(a1[18]);
      }
      v7 = a1[16];
      a1[17] = v13;
      a1[18] = v17;
    }
  }
  v18 = (unsigned __int64 *)(a1[18] + 16 * v7);
  *v18 = v20;
  v18[1] = __PAIR64__(LODWORD(v9), LODWORD(v8));
  ++a1[16];
  return sub_172AB2(a1);
}


// ======================================================================
