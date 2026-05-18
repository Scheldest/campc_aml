// ADDR: 0x13ae8c
// SYMBOL: sub_13AE8C
int __fastcall sub_13AE8C(int a1, int *a2)
{
  int v2; // r4
  int v3; // r1
  int v5; // [sp+4h] [bp-14h] BYREF
  int v6; // [sp+8h] [bp-10h] BYREF

  v2 = *a2;
  sub_13AEB4(&v5, a1);
  v3 = v5;
  v5 = 0;
  if ( v3 )
    sub_13AFEA(&v6);
  return v2;
}


// ======================================================================
// ADDR: 0x13b010
// SYMBOL: sub_13B010
int __fastcall sub_13B010(int a1, int a2, __int16 *a3, int a4, int a5, int a6)
{
  int v6; // r6
  unsigned int v7; // r4
  int v8; // r10
  unsigned int v9; // r11
  unsigned int v11; // r0
  unsigned int v12; // r5
  int v13; // r1
  int **v14; // r8
  unsigned int v15; // r1
  unsigned int v16; // r0
  int v17; // r6
  unsigned int v18; // r10
  unsigned int v19; // r1
  int result; // r0
  float v21; // s0
  float v22; // s2
  int v23; // r6
  _BOOL4 v24; // r4
  float v25; // r0
  std::__ndk1 *v26; // r1
  unsigned int v27; // r0
  unsigned int v28; // r1
  int *v29; // r0
  int v30; // r0
  int *v31; // r5
  unsigned int v32; // r0
  unsigned int v33; // r1
  int v34; // [sp+10h] [bp-30h]
  int v35; // [sp+14h] [bp-2Ch]
  int *v36; // [sp+18h] [bp-28h] BYREF

  v7 = *(_DWORD *)(a2 + 4);
  v8 = a2;
  v9 = *a3;
  if ( v7 )
  {
    v35 = a4;
    v11 = ((v7 - ((v7 >> 1) & 0x55555555)) & 0x33333333) + (((v7 - ((v7 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v12 = (16843009 * ((v11 + (v11 >> 4)) & 0xF0F0F0F)) >> 24;
    if ( v12 > 1 )
    {
      v6 = *a3;
      if ( v7 <= v9 )
      {
        sub_221798(v9, v7);
        v6 = v13;
      }
    }
    else
    {
      v6 = (v7 - 1) & v9;
    }
    v14 = *(int ***)(*(_DWORD *)v8 + 4 * v6);
    if ( v14 )
    {
      v15 = v7 - 1;
      v34 = v6;
      while ( 1 )
      {
        v14 = (int **)*v14;
        if ( !v14 )
          break;
        v16 = (unsigned int)v14[1];
        if ( v16 != v9 )
        {
          if ( v12 > 1 )
          {
            if ( v16 >= v7 )
            {
              v17 = v8;
              v18 = v15;
              sub_221798(v16, v7);
              v16 = v19;
              v15 = v18;
              v8 = v17;
              v6 = v34;
            }
          }
          else
          {
            v16 &= v15;
          }
          if ( v16 != v6 )
            break;
        }
        if ( *((unsigned __int16 *)v14 + 4) == (unsigned __int16)v9 )
        {
          result = 0;
          goto LABEL_40;
        }
      }
    }
    a4 = v35;
  }
  sub_13B1F8(&v36, v8, v9, a4, a5, a6);
  v21 = *(float *)(v8 + 16);
  v22 = (float)(unsigned int)(*(_DWORD *)(v8 + 12) + 1);
  if ( v7 && (float)(v21 * (float)v7) >= v22 )
  {
    v9 = v6;
  }
  else
  {
    v23 = 2 * v7;
    v24 = v7 < 3 || (v7 & (v7 - 1)) != 0;
    v25 = ceilf(v22 / v21);
    v26 = (std::__ndk1 *)(v24 | v23);
    v27 = (unsigned int)v25;
    if ( (v24 | (unsigned int)v23) < v27 )
      v26 = (std::__ndk1 *)v27;
    sub_13B260(v8, v26);
    v7 = *(_DWORD *)(v8 + 4);
    if ( (v7 & (v7 - 1)) != 0 )
    {
      if ( v7 <= v9 )
      {
        sub_221798(v9, *(_DWORD *)(v8 + 4));
        v9 = v28;
      }
    }
    else
    {
      v9 &= v7 - 1;
    }
  }
  v29 = *(int **)(*(_DWORD *)v8 + 4 * v9);
  if ( v29 )
  {
    *v36 = *v29;
    *v29 = (int)v36;
  }
  else
  {
    *v36 = *(_DWORD *)(v8 + 8);
    v30 = *(_DWORD *)v8;
    *(_DWORD *)(v8 + 8) = v36;
    *(_DWORD *)(v30 + 4 * v9) = v8 + 8;
    v31 = v36;
    if ( *v36 )
    {
      v32 = *(_DWORD *)(*v36 + 4);
      if ( (v7 & (v7 - 1)) != 0 )
      {
        if ( v32 >= v7 )
        {
          sub_221798(v32, v7);
          v32 = v33;
        }
      }
      else
      {
        v32 &= v7 - 1;
      }
      *(_DWORD *)(*(_DWORD *)v8 + 4 * v32) = v31;
    }
  }
  v14 = (int **)v36;
  ++*(_DWORD *)(v8 + 12);
  result = 1;
LABEL_40:
  *(_BYTE *)(a1 + 4) = result;
  *(_DWORD *)a1 = v14;
  return result;
}


// ======================================================================
