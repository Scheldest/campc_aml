// ADDR: 0x15f2ee
// SYMBOL: sub_15F2EE
int __fastcall sub_15F2EE(int a1, int a2, int *a3, int a4, int **a5)
{
  unsigned int v5; // r10
  int v6; // r4
  int v7; // r5
  int v8; // r9
  unsigned int v9; // r8
  unsigned int v10; // r1
  unsigned int v11; // r11
  unsigned int v12; // r0
  unsigned int v13; // r5
  unsigned int v14; // r1
  int *v15; // r6
  unsigned int v16; // r1
  unsigned int v17; // r0
  unsigned int v18; // r5
  int v19; // r10
  unsigned int v20; // r9
  unsigned int v21; // r1
  int result; // r0
  int *v23; // r2
  int v24; // r1
  unsigned int v25; // s2
  float v26; // s0
  int v27; // r1
  float v28; // s2
  int v29; // r10
  int v30; // r4
  int v31; // r5
  _BOOL4 v32; // r5
  float v33; // r0
  std::__ndk1 *v34; // r1
  unsigned int v35; // r0
  unsigned int v36; // r1
  int v37; // r0
  int *v38; // r1
  unsigned int v39; // r0
  unsigned int v40; // r1
  unsigned int v41; // [sp+4h] [bp-24h]

  v6 = *a3;
  v7 = a1;
  v8 = a2;
  v9 = *(_DWORD *)(a2 + 4);
  v10 = (1540483477 * ((1540483477 * v6) ^ ((unsigned int)(1540483477 * v6) >> 24))) ^ 0x6F47A654;
  v11 = (1540483477 * (v10 ^ (v10 >> 13))) ^ ((1540483477 * (v10 ^ (v10 >> 13))) >> 15);
  if ( v9 )
  {
    v12 = ((v9 - ((v9 >> 1) & 0x55555555)) & 0x33333333) + (((v9 - ((v9 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v13 = (16843009 * ((v12 + (v12 >> 4)) & 0xF0F0F0F)) >> 24;
    if ( v13 > 1 )
    {
      v5 = (1540483477 * (v10 ^ (v10 >> 13))) ^ ((1540483477 * (v10 ^ (v10 >> 13))) >> 15);
      if ( v11 >= v9 )
      {
        sub_221798(v11, v9);
        v5 = v14;
      }
    }
    else
    {
      v5 = v11 & (v9 - 1);
    }
    v15 = *(int **)(*(_DWORD *)v8 + 4 * v5);
    if ( v15 )
    {
      v16 = v9 - 1;
      v41 = v13;
      while ( 1 )
      {
        v15 = (int *)*v15;
        if ( !v15 )
          break;
        v17 = v15[1];
        if ( v17 != v11 )
        {
          if ( v13 > 1 )
          {
            if ( v17 >= v9 )
            {
              v18 = v5;
              v19 = v8;
              v20 = v16;
              sub_221798(v17, v9);
              v17 = v21;
              v16 = v20;
              v8 = v19;
              v5 = v18;
              v13 = v41;
            }
          }
          else
          {
            v17 &= v16;
          }
          if ( v17 != v5 )
            break;
        }
        if ( v15[2] == v6 )
        {
          result = 0;
          v7 = a1;
          goto LABEL_40;
        }
      }
    }
    v7 = a1;
  }
  v15 = (int *)operator new(0x28u);
  v23 = *a5;
  v24 = *(_DWORD *)(v8 + 12) + 1;
  *((_WORD *)v15 + 10) = 0;
  v25 = v24;
  v26 = *(float *)(v8 + 16);
  v27 = *v23;
  v28 = (float)v25;
  v15[1] = v11;
  *((_QWORD *)v15 + 3) = 0LL;
  *((_QWORD *)v15 + 4) = 0LL;
  *v15 = 0;
  v15[2] = v27;
  v15[3] = 0;
  if ( v9 && (float)(v26 * (float)v9) >= v28 )
  {
    v11 = v5;
  }
  else
  {
    v29 = v7;
    v30 = 2 * v9;
    if ( v9 < 3 )
    {
      v32 = 1;
    }
    else
    {
      v31 = v9 & (v9 - 1);
      v32 = v31 != 0;
    }
    v33 = ceilf(v28 / v26);
    v34 = (std::__ndk1 *)(v32 | v30);
    v35 = (unsigned int)v33;
    if ( (v32 | (unsigned int)v30) < v35 )
      v34 = (std::__ndk1 *)v35;
    sub_15F4FA(v8, v34);
    v9 = *(_DWORD *)(v8 + 4);
    v7 = v29;
    if ( (v9 & (v9 - 1)) != 0 )
    {
      if ( v11 >= v9 )
      {
        sub_221798(v11, *(_DWORD *)(v8 + 4));
        v11 = v36;
      }
    }
    else
    {
      v11 &= v9 - 1;
    }
  }
  v37 = *(_DWORD *)v8;
  v38 = *(int **)(*(_DWORD *)v8 + 4 * v11);
  if ( v38 )
  {
    *v15 = *v38;
    *v38 = (int)v15;
  }
  else
  {
    *v15 = *(_DWORD *)(v8 + 8);
    *(_DWORD *)(v8 + 8) = v15;
    *(_DWORD *)(v37 + 4 * v11) = v8 + 8;
    if ( *v15 )
    {
      v39 = *(_DWORD *)(*v15 + 4);
      if ( (v9 & (v9 - 1)) != 0 )
      {
        if ( v39 >= v9 )
        {
          sub_221798(v39, v9);
          v39 = v40;
        }
      }
      else
      {
        v39 &= v9 - 1;
      }
      *(_DWORD *)(*(_DWORD *)v8 + 4 * v39) = v15;
    }
  }
  ++*(_DWORD *)(v8 + 12);
  result = 1;
LABEL_40:
  *(_BYTE *)(v7 + 4) = result;
  *(_DWORD *)v7 = v15;
  return result;
}


// ======================================================================
