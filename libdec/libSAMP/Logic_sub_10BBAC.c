// ADDR: 0x10bd04
// SYMBOL: sub_10BD04
int __fastcall sub_10BD04(int a1, int a2, int a3, int a4, int a5)
{
  int result; // r0

  result = dword_23DEF8;
  if ( dword_23DEF8 )
    return sub_F15E0(dword_23DEF8, a2, a3, a4, *(_QWORD *)(a1 + 16 * a5 + 8), *(_QWORD *)(a1 + 16 * a5 + 16));
  return result;
}


// ======================================================================
// ADDR: 0x10bd3c
// SYMBOL: sub_10BD3C
int __fastcall sub_10BD3C(int a1, __int16 a2)
{
  int v2; // r4
  int result; // r0
  _WORD v4[5]; // [sp+6h] [bp-Ah] BYREF

  v2 = a1 + 72;
  v4[0] = a2;
  result = sub_10C464(a1 + 72, v4);
  if ( result )
    return sub_10C6D8(v2, v4);
  return result;
}


// ======================================================================
// ADDR: 0x10c0b8
// SYMBOL: sub_10C0B8
int __fastcall sub_10C0B8(int a1, int a2, unsigned __int16 *a3, int a4, _WORD **a5)
{
  int v5; // r10
  unsigned int v6; // r5
  unsigned int v8; // r4
  int v9; // r11
  unsigned int v10; // r0
  unsigned int v11; // r11
  int v12; // r1
  int *v13; // r6
  unsigned int v14; // r0
  unsigned int v15; // r1
  int result; // r0
  float v17; // s0
  int v18; // s2
  float v19; // s2
  int v20; // r8
  _BOOL4 v21; // r5
  float v22; // r0
  std::__ndk1 *v23; // r1
  unsigned int v24; // r0
  unsigned int v25; // r1
  int v26; // r0
  int *v27; // r1
  unsigned int v28; // r0
  unsigned int v29; // r1

  v6 = *(_DWORD *)(a2 + 4);
  v8 = *a3;
  v9 = a1;
  if ( v6 )
  {
    v10 = ((v6 - ((v6 >> 1) & 0x55555555)) & 0x33333333) + (((v6 - ((v6 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v11 = (16843009 * ((v10 + (v10 >> 4)) & 0xF0F0F0F)) >> 24;
    if ( v11 > 1 )
    {
      v5 = *a3;
      if ( v6 <= v8 )
      {
        sub_221798(v8, v6);
        v5 = v12;
      }
    }
    else
    {
      v5 = (v6 - 1) & v8;
    }
    v13 = *(int **)(*(_DWORD *)a2 + 4 * v5);
    if ( v13 )
    {
      while ( 1 )
      {
        v13 = (int *)*v13;
        if ( !v13 )
          break;
        v14 = v13[1];
        if ( v14 != v8 )
        {
          if ( v11 > 1 )
          {
            if ( v14 >= v6 )
            {
              sub_221798(v14, v6);
              v14 = v15;
            }
          }
          else
          {
            v14 &= v6 - 1;
          }
          if ( v14 != v5 )
            break;
        }
        if ( *((unsigned __int16 *)v13 + 4) == v8 )
        {
          result = 0;
          v9 = a1;
          goto LABEL_39;
        }
      }
    }
    v9 = a1;
  }
  v13 = (int *)operator new(0x14u);
  v13[1] = v8;
  v17 = *(float *)(a2 + 16);
  v18 = *(_DWORD *)(a2 + 12) + 1;
  *((_WORD *)v13 + 4) = **a5;
  v19 = (float)(unsigned int)v18;
  *v13 = 0;
  v13[3] = 0;
  v13[4] = 0;
  if ( v6 && (float)(v17 * (float)v6) >= v19 )
  {
    v8 = v5;
  }
  else
  {
    v20 = 2 * v6;
    v21 = v6 < 3 || (v6 & (v6 - 1)) != 0;
    v22 = ceilf(v19 / v17);
    v23 = (std::__ndk1 *)(v21 | v20);
    v24 = (unsigned int)v22;
    if ( (v21 | (unsigned int)v20) < v24 )
      v23 = (std::__ndk1 *)v24;
    sub_10C272(a2, v23);
    v6 = *(_DWORD *)(a2 + 4);
    if ( (v6 & (v6 - 1)) != 0 )
    {
      if ( v6 <= v8 )
      {
        sub_221798(v8, *(_DWORD *)(a2 + 4));
        v8 = v25;
      }
    }
    else
    {
      v8 &= v6 - 1;
    }
  }
  v26 = *(_DWORD *)a2;
  v27 = *(int **)(*(_DWORD *)a2 + 4 * v8);
  if ( v27 )
  {
    *v13 = *v27;
    *v27 = (int)v13;
  }
  else
  {
    *v13 = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a2 + 8) = v13;
    *(_DWORD *)(v26 + 4 * v8) = a2 + 8;
    if ( *v13 )
    {
      v28 = *(_DWORD *)(*v13 + 4);
      if ( (v6 & (v6 - 1)) != 0 )
      {
        if ( v28 >= v6 )
        {
          sub_221798(v28, v6);
          v28 = v29;
        }
      }
      else
      {
        v28 &= v6 - 1;
      }
      *(_DWORD *)(*(_DWORD *)a2 + 4 * v28) = v13;
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
// ADDR: 0x15e5d4
// SYMBOL: sub_15E5D4
int __fastcall sub_15E5D4(unsigned int a1)
{
  int v1; // r1
  int v2; // r0
  int *v4; // r0
  int v5; // r0

  if ( dword_23DEF4 )
  {
    v1 = **(_DWORD **)(dword_23DEF4 + 944);
    if ( v1 )
    {
      if ( *(unsigned __int16 *)(v1 + 5024) == a1 )
      {
        v2 = *(_DWORD *)(v1 + 5052) + 28;
        return *(_DWORD *)v2;
      }
      if ( a1 <= 0x3EC )
      {
        if ( *(_BYTE *)(v1 + a1 + 4020) )
        {
          v4 = *(int **)(v1 + 4 * a1 + 4);
          if ( v4 )
          {
            v5 = *v4;
            if ( v5 )
            {
              v2 = v5 + 296;
              return *(_DWORD *)v2;
            }
          }
        }
      }
    }
  }
  return 0;
}


// ======================================================================
