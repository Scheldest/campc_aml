// ADDR: 0x9bfd8
// SYMBOL: sub_9BFD8
int __fastcall sub_9BFD8(int *a1, unsigned int a2, float a3, float a4, float a5, int a6)
{
  float v7; // s0
  float v8; // s2
  float v9; // s6
  float v10; // s4
  int v11; // r0
  int v12; // r1
  int v13; // r6
  int v14; // r1
  void *v15; // r0
  const void *v16; // r1
  int v17; // r5
  unsigned __int64 *v18; // r0
  unsigned __int64 v20; // [sp+0h] [bp-28h]

  v7 = a5;
  v8 = a4;
  v9 = a3;
  v10 = *(float *)&a2;
  v11 = a1[16];
  v20 = __PAIR64__(LODWORD(a3), a2);
  if ( a6 )
  {
    if ( v11 )
    {
      v12 = a1[18] + 16 * v11;
      if ( *(float *)(v12 - 16) > v10 )
      {
        LODWORD(v20) = *(_DWORD *)(v12 - 16);
        v10 = *(float *)&v20;
      }
      if ( *(float *)(v12 - 12) > a3 )
      {
        HIDWORD(v20) = *(_DWORD *)(v12 - 12);
        v9 = *((float *)&v20 + 1);
      }
      if ( *(float *)(v12 - 8) < a4 )
        v8 = *(float *)(v12 - 8);
      if ( *(float *)(v12 - 4) < a5 )
        v7 = *(float *)(v12 - 4);
    }
    else
    {
      v11 = 0;
    }
  }
  if ( v9 >= v7 )
    v7 = v9;
  if ( v10 >= v8 )
    v8 = v10;
  if ( v11 == a1[17] )
  {
    v13 = v11 + 1;
    if ( v11 )
      v14 = v11 + v11 / 2;
    else
      v14 = 8;
    if ( v14 > v13 )
      v13 = v14;
    if ( v11 < v13 )
    {
      v15 = (void *)sub_885E4(16 * v13);
      v16 = (const void *)a1[18];
      v17 = (int)v15;
      if ( v16 )
      {
        j_memcpy(v15, v16, 16 * a1[16]);
        sub_88614(a1[18]);
      }
      v11 = a1[16];
      a1[17] = v13;
      a1[18] = v17;
    }
  }
  v18 = (unsigned __int64 *)(a1[18] + 16 * v11);
  *v18 = v20;
  v18[1] = __PAIR64__(LODWORD(v7), LODWORD(v8));
  ++a1[16];
  return sub_9BE2C(a1);
}


// ======================================================================
// ADDR: 0x9c12e
// SYMBOL: sub_9C12E
int __fastcall sub_9C12E(int *a1)
{
  --a1[16];
  return sub_9BE2C(a1);
}


// ======================================================================
