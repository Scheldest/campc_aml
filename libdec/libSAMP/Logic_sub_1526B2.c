// ADDR: 0x1537d6
// SYMBOL: sub_1537D6
int __fastcall sub_1537D6(int a1, int a2, unsigned __int16 *a3, int a4, __int16 **a5, int **a6)
{
  int v6; // r9
  unsigned int v7; // r4
  unsigned int v9; // r6
  unsigned int v10; // r0
  unsigned int v11; // r10
  int v12; // r1
  int **v13; // r5
  unsigned int v14; // r0
  unsigned int v15; // r1
  int result; // r0
  int v17; // r6
  int *v18; // r0
  float v19; // s0
  __int16 v20; // r1
  int v21; // r5
  float v22; // s2
  int v23; // r5
  _BOOL4 v24; // r4
  float v25; // r0
  std::__ndk1 *v26; // r1
  unsigned int v27; // r0
  unsigned int v28; // r1
  int *v29; // r0
  int v30; // r0
  unsigned int v31; // r0
  unsigned int v32; // r1
  int *v34; // [sp+8h] [bp-28h]

  v7 = *(_DWORD *)(a2 + 4);
  v9 = *a3;
  if ( v7 )
  {
    v10 = ((v7 - ((v7 >> 1) & 0x55555555)) & 0x33333333) + (((v7 - ((v7 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v11 = (16843009 * ((v10 + (v10 >> 4)) & 0xF0F0F0F)) >> 24;
    if ( v11 > 1 )
    {
      v6 = *a3;
      if ( v7 <= v9 )
      {
        sub_221798(v9, v7);
        v6 = v12;
      }
    }
    else
    {
      v6 = (v7 - 1) & v9;
    }
    v13 = *(int ***)(*(_DWORD *)a2 + 4 * v6);
    if ( v13 )
    {
      while ( 1 )
      {
        v13 = (int **)*v13;
        if ( !v13 )
          break;
        v14 = (unsigned int)v13[1];
        if ( v14 != v9 )
        {
          if ( v11 > 1 )
          {
            if ( v14 >= v7 )
            {
              sub_221798(v14, v7);
              v14 = v15;
            }
          }
          else
          {
            v14 &= v7 - 1;
          }
          if ( v14 != v6 )
            break;
        }
        if ( *((unsigned __int16 *)v13 + 4) == v9 )
        {
          result = 0;
          v17 = a1;
          goto LABEL_38;
        }
      }
    }
  }
  v18 = (int *)operator new(0x10u);
  v19 = *(float *)(a2 + 16);
  v20 = **a5;
  v21 = **a6;
  v22 = (float)(unsigned int)(*(_DWORD *)(a2 + 12) + 1);
  **a6 = 0;
  v18[1] = v9;
  *((_WORD *)v18 + 4) = v20;
  *v18 = 0;
  v18[3] = v21;
  v34 = v18;
  if ( v7 && (float)(v19 * (float)v7) >= v22 )
  {
    v9 = v6;
  }
  else
  {
    v23 = 2 * v7;
    v24 = v7 < 3 || (v7 & (v7 - 1)) != 0;
    v25 = ceilf(v22 / v19);
    v26 = (std::__ndk1 *)(v24 | v23);
    v27 = (unsigned int)v25;
    if ( (v24 | (unsigned int)v23) < v27 )
      v26 = (std::__ndk1 *)v27;
    sub_1539B2(a2, v26);
    v7 = *(_DWORD *)(a2 + 4);
    if ( (v7 & (v7 - 1)) != 0 )
    {
      if ( v7 <= v9 )
      {
        sub_221798(v9, *(_DWORD *)(a2 + 4));
        v9 = v28;
      }
    }
    else
    {
      v9 &= v7 - 1;
    }
  }
  v29 = *(int **)(*(_DWORD *)a2 + 4 * v9);
  if ( v29 )
  {
    v17 = a1;
    *v34 = *v29;
    *v29 = (int)v34;
  }
  else
  {
    *v34 = *(_DWORD *)(a2 + 8);
    v30 = *(_DWORD *)a2;
    *(_DWORD *)(a2 + 8) = v34;
    *(_DWORD *)(v30 + 4 * v9) = a2 + 8;
    v17 = a1;
    if ( *v34 )
    {
      v31 = *(_DWORD *)(*v34 + 4);
      if ( (v7 & (v7 - 1)) != 0 )
      {
        if ( v31 >= v7 )
        {
          sub_221798(v31, v7);
          v31 = v32;
        }
      }
      else
      {
        v31 &= v7 - 1;
      }
      *(_DWORD *)(*(_DWORD *)a2 + 4 * v31) = v34;
    }
  }
  v13 = (int **)v34;
  ++*(_DWORD *)(a2 + 12);
  result = 1;
LABEL_38:
  *(_BYTE *)(v17 + 4) = result;
  *(_DWORD *)v17 = v13;
  return result;
}


// ======================================================================
// ADDR: 0x15426c
// SYMBOL: sub_15426C
int **__fastcall sub_15426C(_DWORD *a1, unsigned __int16 *a2)
{
  unsigned int v2; // r4
  unsigned int v4; // r5
  unsigned int v5; // r0
  unsigned int v6; // r9
  int v7; // r8
  int v8; // r1
  int ***v9; // r0
  int **i; // r6
  unsigned int v11; // r0
  unsigned int v12; // r1

  v2 = a1[1];
  if ( v2 )
  {
    v4 = *a2;
    v5 = ((v2 - ((v2 >> 1) & 0x55555555)) & 0x33333333) + (((v2 - ((v2 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v6 = (16843009 * ((v5 + (v5 >> 4)) & 0xF0F0F0F)) >> 24;
    if ( v6 > 1 )
    {
      if ( v2 <= v4 )
      {
        sub_221798(v4, v2);
        v7 = v8;
      }
      else
      {
        v7 = *a2;
      }
    }
    else
    {
      v7 = (v2 - 1) & v4;
    }
    v9 = *(int ****)(*a1 + 4 * v7);
    if ( v9 )
    {
      for ( i = *v9; i; i = (int **)*i )
      {
        v11 = (unsigned int)i[1];
        if ( v11 == v4 )
        {
          if ( *((unsigned __int16 *)i + 4) == v4 )
            return i;
        }
        else
        {
          if ( v6 > 1 )
          {
            if ( v11 >= v2 )
            {
              sub_221798(v11, v2);
              v11 = v12;
            }
          }
          else
          {
            v11 &= v2 - 1;
          }
          if ( v11 != v7 )
            return 0;
        }
      }
    }
  }
  return 0;
}


// ======================================================================
