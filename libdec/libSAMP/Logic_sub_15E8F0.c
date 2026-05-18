// ADDR: 0x15f6ec
// SYMBOL: sub_15F6EC
int __fastcall sub_15F6EC(int a1, int a2, int *a3, int a4, _DWORD **a5)
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
  _DWORD *v15; // r6
  unsigned int v16; // r1
  unsigned int v17; // r0
  unsigned int v18; // r5
  int v19; // r10
  unsigned int v20; // r9
  unsigned int v21; // r1
  int result; // r0
  float v23; // s0
  int v24; // s2
  float v25; // s2
  int v26; // r10
  int v27; // r4
  int v28; // r5
  _BOOL4 v29; // r5
  float v30; // r0
  std::__ndk1 *v31; // r1
  unsigned int v32; // r0
  unsigned int v33; // r1
  int v34; // r0
  _DWORD *v35; // r1
  unsigned int v36; // r0
  unsigned int v37; // r1
  unsigned int v38; // [sp+4h] [bp-24h]

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
    v15 = *(_DWORD **)(*(_DWORD *)v8 + 4 * v5);
    if ( v15 )
    {
      v16 = v9 - 1;
      v38 = v13;
      while ( 1 )
      {
        v15 = (_DWORD *)*v15;
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
              v13 = v38;
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
  v15 = (_DWORD *)operator new(0x68u);
  v15[2] = **a5;
  sub_22178C((int)(v15 + 3), 0x5Cu);
  v23 = *(float *)(v8 + 16);
  v24 = *(_DWORD *)(v8 + 12) + 1;
  *v15 = 0;
  v15[1] = v11;
  v25 = (float)(unsigned int)v24;
  if ( v9 && (float)(v23 * (float)v9) >= v25 )
  {
    v11 = v5;
  }
  else
  {
    v26 = v7;
    v27 = 2 * v9;
    if ( v9 < 3 )
    {
      v29 = 1;
    }
    else
    {
      v28 = v9 & (v9 - 1);
      v29 = v28 != 0;
    }
    v30 = ceilf(v25 / v23);
    v31 = (std::__ndk1 *)(v29 | v27);
    v32 = (unsigned int)v30;
    if ( (v29 | (unsigned int)v27) < v32 )
      v31 = (std::__ndk1 *)v32;
    sub_15F8F4(v8, v31);
    v9 = *(_DWORD *)(v8 + 4);
    v7 = v26;
    if ( (v9 & (v9 - 1)) != 0 )
    {
      if ( v11 >= v9 )
      {
        sub_221798(v11, *(_DWORD *)(v8 + 4));
        v11 = v33;
      }
    }
    else
    {
      v11 &= v9 - 1;
    }
  }
  v34 = *(_DWORD *)v8;
  v35 = *(_DWORD **)(*(_DWORD *)v8 + 4 * v11);
  if ( v35 )
  {
    *v15 = *v35;
    *v35 = v15;
  }
  else
  {
    *v15 = *(_DWORD *)(v8 + 8);
    *(_DWORD *)(v8 + 8) = v15;
    *(_DWORD *)(v34 + 4 * v11) = v8 + 8;
    if ( *v15 )
    {
      v36 = *(_DWORD *)(*v15 + 4);
      if ( (v9 & (v9 - 1)) != 0 )
      {
        if ( v36 >= v9 )
        {
          sub_221798(v36, v9);
          v36 = v37;
        }
      }
      else
      {
        v36 &= v9 - 1;
      }
      *(_DWORD *)(*(_DWORD *)v8 + 4 * v36) = v15;
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
