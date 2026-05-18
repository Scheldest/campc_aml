// ADDR: 0xa5030
// SYMBOL: sub_A5030
int __fastcall sub_A5030(float *a1)
{
  float v1; // s0
  float v2; // s1
  float v4; // s0
  float v5; // r2
  float v6; // s2
  int v7; // r1
  int v8; // r0
  int v9; // r2
  int v10; // r12
  int v11; // r1
  int result; // r0

  sub_A520E(a1);
  v4 = a1[4] + v1;
  v5 = *a1;
  v6 = a1[5] + v2;
  a1[2] = v4;
  a1[3] = v6;
  a1[4] = v4;
  a1[5] = v6;
  v7 = (int)v4;
  v8 = (int)v6;
  if ( v5 == 0.0 )
  {
    v9 = *((_DWORD *)a1 + 11);
    v10 = *((_DWORD *)a1 + 10);
    *(_WORD *)(v10 + 14 * v9) = v7;
    v11 = v10 + 14 * v9;
    *(_DWORD *)(v11 + 8) = 0;
    *(_DWORD *)(v11 + 4) = 0;
    *(_BYTE *)(v11 + 12) = 1;
    *(_WORD *)(v11 + 2) = v8;
  }
  else
  {
    if ( *((_DWORD *)a1 + 7) >= v7 )
    {
      if ( !*((_DWORD *)a1 + 1) )
        *((_DWORD *)a1 + 7) = v7;
    }
    else
    {
      *((_DWORD *)a1 + 7) = v7;
    }
    if ( *((_DWORD *)a1 + 9) >= v8 )
    {
      if ( !*((_DWORD *)a1 + 1) )
        *((_DWORD *)a1 + 9) = v8;
    }
    else
    {
      *((_DWORD *)a1 + 9) = v8;
    }
    if ( *((_DWORD *)a1 + 6) <= v7 )
    {
      if ( !*((_DWORD *)a1 + 1) )
        *((_DWORD *)a1 + 6) = v7;
    }
    else
    {
      *((_DWORD *)a1 + 6) = v7;
    }
    if ( *((_DWORD *)a1 + 8) <= v8 )
    {
      if ( !*((_DWORD *)a1 + 1) )
        *((_DWORD *)a1 + 8) = v8;
    }
    else
    {
      *((_DWORD *)a1 + 8) = v8;
    }
    v9 = *((_DWORD *)a1 + 11);
    *((_DWORD *)a1 + 1) = 1;
  }
  result = v9 + 1;
  *((_DWORD *)a1 + 11) = v9 + 1;
  return result;
}


// ======================================================================
// ADDR: 0xa50f0
// SYMBOL: sub_A50F0
int __fastcall sub_A50F0(int result)
{
  float v1; // s0
  float v2; // s1
  float v3; // s2
  float v4; // s3
  float v5; // s4
  float v6; // s5
  float v7; // s8
  float v8; // s0
  bool v9; // zf
  float v10; // s2
  float v11; // s4
  int v12; // r8
  int v13; // r1
  int v14; // r12
  int v15; // lr
  int v16; // r5
  int v17; // r3
  int v18; // r9
  int v19; // r4
  int v20; // r6
  int v21; // r3
  int v22; // r2
  int v23; // r4
  int v24; // r3

  v7 = *(float *)(result + 20) + v2;
  v8 = *(float *)(result + 16) + v1;
  v9 = *(_DWORD *)result == 0;
  v10 = v8 + v3;
  v11 = v10 + v5;
  v12 = (int)v7;
  v13 = (int)v8;
  *(float *)(result + 20) = (float)(v7 + v4) + v6;
  *(float *)(result + 16) = v11;
  v14 = (int)(float)(v7 + v4);
  v15 = (int)v10;
  v16 = (int)(float)((float)(v7 + v4) + v6);
  v17 = (int)v11;
  if ( v9 )
  {
    v22 = *(_DWORD *)(result + 44);
    v23 = *(_DWORD *)(result + 40);
    *(_WORD *)(v23 + 14 * v22) = v17;
    v24 = v23 + 14 * v22;
    *(_BYTE *)(v24 + 12) = 4;
    *(_WORD *)(v24 + 10) = v14;
    *(_WORD *)(v24 + 8) = v15;
    *(_WORD *)(v24 + 6) = v12;
    *(_WORD *)(v24 + 4) = v13;
    *(_WORD *)(v24 + 2) = v16;
  }
  else
  {
    v18 = *(_DWORD *)(result + 28);
    if ( v18 < v17 || !*(_DWORD *)(result + 4) )
    {
      v18 = (int)v11;
      *(_DWORD *)(result + 28) = v17;
    }
    v19 = *(_DWORD *)(result + 36);
    if ( v19 < v16 || !*(_DWORD *)(result + 4) )
    {
      v19 = (int)(float)((float)(v7 + v4) + v6);
      *(_DWORD *)(result + 36) = v16;
    }
    v20 = *(_DWORD *)(result + 24);
    if ( v20 > v17 || !*(_DWORD *)(result + 4) )
    {
      v20 = (int)v11;
      *(_DWORD *)(result + 24) = v17;
    }
    v21 = *(_DWORD *)(result + 32);
    if ( v21 > v16 || !*(_DWORD *)(result + 4) )
    {
      v21 = (int)(float)((float)(v7 + v4) + v6);
      *(_DWORD *)(result + 32) = v16;
    }
    *(_DWORD *)(result + 4) = 1;
    if ( v18 < v13 )
    {
      *(_DWORD *)(result + 28) = v13;
      v18 = (int)v8;
    }
    if ( v19 < v12 )
    {
      *(_DWORD *)(result + 36) = v12;
      v19 = (int)v7;
    }
    if ( v20 > v13 )
    {
      *(_DWORD *)(result + 24) = v13;
      v20 = (int)v8;
    }
    if ( v21 > v12 )
    {
      *(_DWORD *)(result + 32) = v12;
      v21 = (int)v7;
    }
    if ( v18 < v15 )
      *(_DWORD *)(result + 28) = v15;
    if ( v19 < v14 )
      *(_DWORD *)(result + 36) = v14;
    if ( v20 > v15 )
      *(_DWORD *)(result + 24) = v15;
    if ( v21 > v14 )
      *(_DWORD *)(result + 32) = v14;
    v22 = *(_DWORD *)(result + 44);
    *(_DWORD *)(result + 4) = 1;
  }
  *(_DWORD *)(result + 44) = v22 + 1;
  return result;
}


// ======================================================================
// ADDR: 0xa520e
// SYMBOL: sub_A520E
int __fastcall sub_A520E(int result)
{
  float v1; // s0
  float v2; // s2
  int v3; // s2
  int v4; // s0
  int v5; // r3
  int v6; // r12
  int v7; // r1

  v1 = *(float *)(result + 8);
  v2 = *(float *)(result + 12);
  if ( v1 != *(float *)(result + 16) || v2 != *(float *)(result + 20) )
  {
    v3 = (int)v2;
    v4 = (int)v1;
    if ( *(_DWORD *)result )
    {
      if ( *(_DWORD *)(result + 28) >= v4 )
      {
        if ( !*(_DWORD *)(result + 4) )
          *(_DWORD *)(result + 28) = v4;
      }
      else
      {
        *(_DWORD *)(result + 28) = v4;
      }
      if ( *(_DWORD *)(result + 36) >= v3 )
      {
        if ( !*(_DWORD *)(result + 4) )
          *(_DWORD *)(result + 36) = v3;
      }
      else
      {
        *(_DWORD *)(result + 36) = v3;
      }
      if ( *(_DWORD *)(result + 24) <= v4 )
      {
        if ( !*(_DWORD *)(result + 4) )
          *(_DWORD *)(result + 24) = v4;
      }
      else
      {
        *(_DWORD *)(result + 24) = v4;
      }
      if ( *(_DWORD *)(result + 32) <= v3 )
      {
        if ( !*(_DWORD *)(result + 4) )
          *(_DWORD *)(result + 32) = v3;
      }
      else
      {
        *(_DWORD *)(result + 32) = v3;
      }
      v5 = *(_DWORD *)(result + 44);
      *(_DWORD *)(result + 4) = 1;
    }
    else
    {
      v5 = *(_DWORD *)(result + 44);
      v6 = *(_DWORD *)(result + 40);
      *(_WORD *)(v6 + 14 * v5) = v4;
      v7 = v6 + 14 * v5;
      *(_DWORD *)(v7 + 8) = 0;
      *(_DWORD *)(v7 + 4) = 0;
      *(_BYTE *)(v7 + 12) = 2;
      *(_WORD *)(v7 + 2) = v3;
    }
    *(_DWORD *)(result + 44) = v5 + 1;
  }
  return result;
}


// ======================================================================
