// ADDR: 0x1596b2
// SYMBOL: sub_1596B2
int __fastcall sub_1596B2(int a1, int a2, int *a3, _QWORD *a4)
{
  int v4; // r11
  unsigned int v5; // r10
  _QWORD *v6; // r5
  unsigned int v7; // r4
  int v9; // r8
  unsigned int v10; // r0
  unsigned int v11; // r8
  int v12; // r1
  _DWORD *v13; // r6
  unsigned int v14; // r0
  unsigned int v15; // r1
  int result; // r0
  float v17; // s0
  int v18; // r0
  float v19; // s2
  int v20; // r11
  int v21; // r8
  int v22; // r5
  _BOOL4 v23; // r5
  float v24; // r0
  std::__ndk1 *v25; // r1
  unsigned int v26; // r0
  unsigned int v27; // r1
  int v28; // r0
  _DWORD *v29; // r1
  unsigned int v30; // r0
  unsigned int v31; // r1

  v5 = *(_DWORD *)(a2 + 4);
  v6 = a4;
  v7 = *a3;
  v9 = a1;
  if ( v5 )
  {
    v10 = ((v5 - ((v5 >> 1) & 0x55555555)) & 0x33333333) + (((v5 - ((v5 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v11 = (16843009 * ((v10 + (v10 >> 4)) & 0xF0F0F0F)) >> 24;
    if ( v11 > 1 )
    {
      v4 = *a3;
      if ( v7 >= v5 )
      {
        sub_221798(v7, v5);
        v4 = v12;
      }
    }
    else
    {
      v4 = (v5 - 1) & v7;
    }
    v13 = *(_DWORD **)(*(_DWORD *)a2 + 4 * v4);
    if ( v13 )
    {
      while ( 1 )
      {
        v13 = (_DWORD *)*v13;
        if ( !v13 )
          break;
        v14 = v13[1];
        if ( v14 != v7 )
        {
          if ( v11 > 1 )
          {
            if ( v14 >= v5 )
            {
              sub_221798(v14, v5);
              v14 = v15;
            }
          }
          else
          {
            v14 &= v5 - 1;
          }
          if ( v14 != v4 )
            break;
        }
        if ( v13[2] == v7 )
        {
          result = 0;
          v9 = a1;
          goto LABEL_39;
        }
      }
    }
    v6 = a4;
    v9 = a1;
  }
  v13 = (_DWORD *)operator new(0x10u);
  v17 = *(float *)(a2 + 16);
  v18 = *(_DWORD *)(a2 + 12) + 1;
  *v13 = 0;
  v13[1] = v7;
  *((_QWORD *)v13 + 1) = *v6;
  v19 = (float)(unsigned int)v18;
  if ( v5 && (float)(v17 * (float)v5) >= v19 )
  {
    v7 = v4;
  }
  else
  {
    v20 = v9;
    v21 = 2 * v5;
    if ( v5 < 3 )
    {
      v23 = 1;
    }
    else
    {
      v22 = v5 & (v5 - 1);
      v23 = v22 != 0;
    }
    v24 = ceilf(v19 / v17);
    v25 = (std::__ndk1 *)(v23 | v21);
    v26 = (unsigned int)v24;
    if ( (v23 | (unsigned int)v21) < v26 )
      v25 = (std::__ndk1 *)v26;
    sub_159880(a2, v25);
    v5 = *(_DWORD *)(a2 + 4);
    v9 = v20;
    if ( (v5 & (v5 - 1)) != 0 )
    {
      if ( v7 >= v5 )
      {
        sub_221798(v7, *(_DWORD *)(a2 + 4));
        v7 = v27;
      }
    }
    else
    {
      v7 &= v5 - 1;
    }
  }
  v28 = *(_DWORD *)a2;
  v29 = *(_DWORD **)(*(_DWORD *)a2 + 4 * v7);
  if ( v29 )
  {
    *v13 = *v29;
    *v29 = v13;
  }
  else
  {
    *v13 = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a2 + 8) = v13;
    *(_DWORD *)(v28 + 4 * v7) = a2 + 8;
    if ( *v13 )
    {
      v30 = *(_DWORD *)(*v13 + 4);
      if ( (v5 & (v5 - 1)) != 0 )
      {
        if ( v30 >= v5 )
        {
          sub_221798(v30, v5);
          v30 = v31;
        }
      }
      else
      {
        v30 &= v5 - 1;
      }
      *(_DWORD *)(*(_DWORD *)a2 + 4 * v30) = v13;
    }
  }
  ++*(_DWORD *)(a2 + 12);
  result = 1;
LABEL_39:
  *(_BYTE *)(v9 + 4) = result;
  *(_DWORD *)v9 = v13;
  return result;
}


// ======================================================================
