// ADDR: 0x842e4
// SYMBOL: sub_842E4
int __fastcall sub_842E4(int a1, int a2, int *a3, int a4, int **a5)
{
  unsigned int v5; // r6
  int v6; // r9
  int v7; // r5
  unsigned int v8; // r10
  unsigned int v9; // r1
  unsigned int v10; // r11
  unsigned int v11; // r0
  unsigned int v12; // r4
  unsigned int v13; // r1
  _DWORD *v14; // r8
  unsigned int v15; // r1
  unsigned int v16; // r0
  int v17; // r6
  unsigned int v18; // r9
  unsigned int v19; // r1
  _DWORD *v20; // r5
  int *v21; // r1
  int v22; // r2
  float v23; // s0
  _DWORD *v24; // r8
  float v25; // s2
  int v26; // r1
  int v27; // r6
  int v28; // r4
  _BOOL4 v29; // r4
  float v30; // r0
  std::__ndk1 *v31; // r1
  unsigned int v32; // r0
  unsigned int v33; // r1
  int v34; // r0
  _DWORD *v35; // r1
  int v36; // r6
  unsigned int v37; // r0
  char v38; // r0
  unsigned int v39; // r1
  unsigned int v41; // [sp+4h] [bp-34h]
  int v43; // [sp+18h] [bp-20h]

  v6 = a2;
  v7 = *a3;
  v8 = *(_DWORD *)(a2 + 4);
  v9 = (1540483477 * ((1540483477 * v7) ^ ((unsigned int)(1540483477 * v7) >> 24))) ^ 0x6F47A654;
  v10 = (1540483477 * (v9 ^ (v9 >> 13))) ^ ((1540483477 * (v9 ^ (v9 >> 13))) >> 15);
  if ( v8 )
  {
    v11 = ((v8 - ((v8 >> 1) & 0x55555555)) & 0x33333333) + (((v8 - ((v8 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v12 = (16843009 * ((v11 + (v11 >> 4)) & 0xF0F0F0F)) >> 24;
    if ( v12 > 1 )
    {
      v5 = (1540483477 * (v9 ^ (v9 >> 13))) ^ ((1540483477 * (v9 ^ (v9 >> 13))) >> 15);
      if ( v10 >= v8 )
      {
        sub_109688(v10, v8);
        v5 = v13;
      }
    }
    else
    {
      v5 = v10 & (v8 - 1);
    }
    v14 = *(_DWORD **)(*(_DWORD *)v6 + 4 * v5);
    if ( v14 )
    {
      v15 = v8 - 1;
      v41 = v5;
      while ( 1 )
      {
        v14 = (_DWORD *)*v14;
        if ( !v14 )
          break;
        v16 = v14[1];
        if ( v16 != v10 )
        {
          if ( v12 <= 1 )
          {
            v16 &= v15;
          }
          else if ( v16 >= v8 )
          {
            v17 = v6;
            v18 = v15;
            sub_109688(v16, v8);
            v16 = v19;
            v15 = v18;
            v6 = v17;
            v5 = v41;
          }
          if ( v16 != v5 )
            break;
        }
        if ( v14[2] == v7 )
        {
          v38 = 0;
          v36 = a1;
          goto LABEL_39;
        }
      }
    }
  }
  v20 = (_DWORD *)operator new(0x20u);
  v21 = *a5;
  v22 = *(_DWORD *)(v6 + 12) + 1;
  v20[4] = -1;
  v20[1] = v10;
  v20[3] = 0;
  v23 = *(float *)(v6 + 16);
  v24 = (_DWORD *)(v6 + 8);
  v25 = (float)(unsigned int)v22;
  v26 = *v21;
  *v20 = 0;
  v20[7] = 0;
  v20[5] = 0;
  v20[6] = 0;
  v20[2] = v26;
  if ( v8 && (float)(v23 * (float)v8) >= v25 )
  {
    v10 = v5;
  }
  else
  {
    v27 = 2 * v8;
    if ( v8 < 3 )
    {
      v29 = 1;
    }
    else
    {
      v28 = v8 & (v8 - 1);
      v29 = v28 != 0;
    }
    v30 = ceilf(v25 / v23);
    v31 = (std::__ndk1 *)(v29 | v27);
    v32 = (unsigned int)v30;
    if ( (v29 | (unsigned int)v27) < v32 )
      v31 = (std::__ndk1 *)v32;
    sub_84538(v6, v31);
    v8 = *(_DWORD *)(v6 + 4);
    if ( (v8 & (v8 - 1)) != 0 )
    {
      if ( v10 >= v8 )
      {
        sub_109688(v10, *(_DWORD *)(v6 + 4));
        v10 = v33;
      }
    }
    else
    {
      v10 &= v8 - 1;
    }
  }
  v34 = *(_DWORD *)v6;
  v35 = *(_DWORD **)(*(_DWORD *)v6 + 4 * v10);
  if ( v35 )
  {
    v36 = a1;
    *v20 = *v35;
    *v35 = v20;
  }
  else
  {
    *v20 = *v24;
    *v24 = v20;
    *(_DWORD *)(v34 + 4 * v10) = v24;
    v36 = a1;
    if ( *v20 )
    {
      v37 = *(_DWORD *)(*v20 + 4);
      if ( (v8 & (v8 - 1)) != 0 )
      {
        if ( v37 >= v8 )
        {
          sub_109688(v37, v8);
          v37 = v39;
        }
      }
      else
      {
        v37 &= v8 - 1;
      }
      *(_DWORD *)(*(_DWORD *)v6 + 4 * v37) = v20;
    }
  }
  v14 = v20;
  ++*(_DWORD *)(v6 + 12);
  v38 = 1;
LABEL_39:
  *(_BYTE *)(v36 + 4) = v38;
  *(_DWORD *)v36 = v14;
  return v43;
}


// ======================================================================
// ADDR: 0x84a94
// SYMBOL: sub_84A94
int __fastcall sub_84A94(int a1)
{
  return a1 + 8;
}


// ======================================================================
