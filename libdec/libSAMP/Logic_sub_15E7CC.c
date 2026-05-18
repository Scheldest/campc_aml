// ADDR: 0x15ed76
// SYMBOL: sub_15ED76
_DWORD *__fastcall sub_15ED76(_DWORD *a1, int *a2)
{
  unsigned int v2; // r4
  int v3; // r9
  unsigned int v5; // r1
  unsigned int v6; // r5
  unsigned int v7; // r0
  unsigned int v8; // r10
  unsigned int v9; // r8
  unsigned int v10; // r1
  _DWORD *v11; // r0
  _DWORD *v12; // r6
  unsigned int v13; // r0
  unsigned int v14; // r1

  v2 = a1[1];
  if ( v2 )
  {
    v3 = *a2;
    v5 = (1540483477 * ((1540483477 * *a2) ^ ((unsigned int)(1540483477 * *a2) >> 24))) ^ 0x6F47A654;
    v6 = (1540483477 * (v5 ^ (v5 >> 13))) ^ ((1540483477 * (v5 ^ (v5 >> 13))) >> 15);
    v7 = ((v2 - ((v2 >> 1) & 0x55555555)) & 0x33333333) + (((v2 - ((v2 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v8 = (16843009 * ((v7 + (v7 >> 4)) & 0xF0F0F0F)) >> 24;
    if ( v8 > 1 )
    {
      if ( v6 >= v2 )
      {
        sub_221798(v6, v2);
        v9 = v10;
      }
      else
      {
        v9 = (1540483477 * (v5 ^ (v5 >> 13))) ^ ((1540483477 * (v5 ^ (v5 >> 13))) >> 15);
      }
    }
    else
    {
      v9 = v6 & (v2 - 1);
    }
    v11 = *(_DWORD **)(*a1 + 4 * v9);
    if ( v11 )
    {
      v12 = (_DWORD *)*v11;
      if ( *v11 )
      {
        do
        {
          v13 = v12[1];
          if ( v13 == v6 )
          {
            if ( v12[2] == v3 )
              return v12;
          }
          else
          {
            if ( v8 > 1 )
            {
              if ( v13 >= v2 )
              {
                sub_221798(v13, v2);
                v13 = v14;
              }
            }
            else
            {
              v13 &= v2 - 1;
            }
            if ( v13 != v9 )
              return 0;
          }
          v12 = (_DWORD *)*v12;
        }
        while ( v12 );
      }
    }
  }
  return 0;
}


// ======================================================================
// ADDR: 0x15ee48
// SYMBOL: sub_15EE48
int __fastcall sub_15EE48(int a1, int a2, int *a3, int a4, _DWORD **a5)
{
  unsigned int v5; // r6
  int v6; // r5
  int v7; // r9
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
  int result; // r0
  int v21; // r6
  _DWORD *v22; // r5
  int v23; // r1
  _DWORD *v24; // r8
  float v25; // s0
  float v26; // s2
  int v27; // r6
  int v28; // r4
  _BOOL4 v29; // r4
  float v30; // r0
  std::__ndk1 *v31; // r1
  unsigned int v32; // r0
  unsigned int v33; // r1
  int v34; // r0
  _DWORD *v35; // r1
  unsigned int v36; // r0
  unsigned int v37; // r1
  unsigned int v38; // [sp+0h] [bp-30h]

  v6 = *a3;
  v7 = a2;
  v8 = *(_DWORD *)(a2 + 4);
  v9 = (1540483477 * ((1540483477 * v6) ^ ((unsigned int)(1540483477 * v6) >> 24))) ^ 0x6F47A654;
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
        sub_221798(v10, v8);
        v5 = v13;
      }
    }
    else
    {
      v5 = v10 & (v8 - 1);
    }
    v14 = *(_DWORD **)(*(_DWORD *)v7 + 4 * v5);
    if ( v14 )
    {
      v15 = v8 - 1;
      v38 = v5;
      while ( 1 )
      {
        v14 = (_DWORD *)*v14;
        if ( !v14 )
          break;
        v16 = v14[1];
        if ( v16 != v10 )
        {
          if ( v12 > 1 )
          {
            if ( v16 >= v8 )
            {
              v17 = v7;
              v18 = v15;
              sub_221798(v16, v8);
              v16 = v19;
              v15 = v18;
              v7 = v17;
              v5 = v38;
            }
          }
          else
          {
            v16 &= v15;
          }
          if ( v16 != v5 )
            break;
        }
        if ( v14[2] == v6 )
        {
          result = 0;
          v21 = a1;
          goto LABEL_39;
        }
      }
    }
  }
  v22 = (_DWORD *)operator new(0x10u);
  v23 = *(_DWORD *)(v7 + 12);
  v24 = (_DWORD *)(v7 + 8);
  v25 = *(float *)(v7 + 16);
  v22[2] = **a5;
  v22[1] = v10;
  *v22 = 0;
  v26 = (float)(unsigned int)(v23 + 1);
  v22[3] = 0;
  if ( v8 && (float)(v25 * (float)v8) >= v26 )
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
    v30 = ceilf(v26 / v25);
    v31 = (std::__ndk1 *)(v29 | v27);
    v32 = (unsigned int)v30;
    if ( (v29 | (unsigned int)v27) < v32 )
      v31 = (std::__ndk1 *)v32;
    sub_15F074(v7, v31);
    v8 = *(_DWORD *)(v7 + 4);
    if ( (v8 & (v8 - 1)) != 0 )
    {
      if ( v10 >= v8 )
      {
        sub_221798(v10, *(_DWORD *)(v7 + 4));
        v10 = v33;
      }
    }
    else
    {
      v10 &= v8 - 1;
    }
  }
  v34 = *(_DWORD *)v7;
  v35 = *(_DWORD **)(*(_DWORD *)v7 + 4 * v10);
  if ( v35 )
  {
    v21 = a1;
    *v22 = *v35;
    *v35 = v22;
  }
  else
  {
    *v22 = *v24;
    *v24 = v22;
    *(_DWORD *)(v34 + 4 * v10) = v24;
    v21 = a1;
    if ( *v22 )
    {
      v36 = *(_DWORD *)(*v22 + 4);
      if ( (v8 & (v8 - 1)) != 0 )
      {
        if ( v36 >= v8 )
        {
          sub_221798(v36, v8);
          v36 = v37;
        }
      }
      else
      {
        v36 &= v8 - 1;
      }
      *(_DWORD *)(*(_DWORD *)v7 + 4 * v36) = v22;
    }
  }
  v14 = v22;
  ++*(_DWORD *)(v7 + 12);
  result = 1;
LABEL_39:
  *(_BYTE *)(v21 + 4) = result;
  *(_DWORD *)v21 = v14;
  return result;
}


// ======================================================================
