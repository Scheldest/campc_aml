// ADDR: 0xc26e0
// SYMBOL: sub_C26E0
int __fastcall sub_C26E0(int a1, __int16 *a2, int a3, int a4, _DWORD *a5, char a6, unsigned int a7)
{
  int v7; // r5
  int v8; // r6
  __int16 *v9; // r4
  __int16 v10; // t1
  int result; // r0
  unsigned int v12; // r6
  __int16 *v13; // r12
  int v14; // r4
  int v15; // r8
  __int16 v16; // r10
  int v17; // r2
  unsigned int v18; // r6
  int v19; // r9
  _DWORD *v20; // r2
  __int16 v21; // r0
  __int16 v22; // r2
  int v23; // r4
  int v24; // r11
  __int16 v25; // r10
  int v26; // r6
  unsigned int v27; // r0
  int v28; // r9
  _DWORD *v29; // r6
  __int16 v30; // r0
  __int16 v31; // r2
  int v32; // [sp+4h] [bp-38h]
  int v33; // [sp+8h] [bp-34h]
  char v34; // [sp+8h] [bp-34h]
  unsigned int v35; // [sp+Ch] [bp-30h]
  char v36; // [sp+10h] [bp-2Ch]
  __int16 *v37; // [sp+10h] [bp-2Ch]
  __int16 *v38; // [sp+14h] [bp-28h]

  v7 = 1;
  *a5 = 0;
  a5[1] = 1;
  if ( a3 >= 1 )
  {
    v7 = 1;
    v8 = a3;
    v9 = a2;
    do
    {
      v10 = *v9++;
      --v8;
      v7 += (unsigned int)(v10 * v10) >> a6;
    }
    while ( v8 );
  }
  result = a4;
  if ( a4 >= 1 )
  {
    LOWORD(v35) = -1;
    v12 = __clz(a7);
    v38 = a2;
    if ( (int)(31 - v12) <= 14 )
    {
      v34 = v12 - 17;
      v37 = &a2[a3];
      v23 = 0;
      v24 = 0;
      v25 = -1;
      v32 = 0;
      do
      {
        v26 = *(_DWORD *)(a1 + 4 * v23);
        if ( v26 >= 1 )
        {
          v27 = (__int16)(v26 << v34) * (__int16)(v26 << v34);
          v28 = (__int16)((int)v27 >> 15);
          if ( 2 * SHIWORD(v24) * (__int16)(v27 >> 15) + ((v28 * (unsigned __int16)v24) >> 15) <= 2 * v25 * SHIWORD(v7)
                                                                                                + (((unsigned __int16)v7
                                                                                                  * v25) >> 15) )
          {
            a2 = v38;
          }
          else
          {
            v25 = v35;
            v24 = v32;
            if ( 2 * SHIWORD(v32) * (__int16)v28 + ((v28 * (unsigned __int16)v32) >> 15) <= 2
                                                                                          * (__int16)v35
                                                                                          * SHIWORD(v7)
                                                                                          + (((unsigned __int16)v7
                                                                                            * (__int16)v35) >> 15) )
            {
              v25 = v27 >> 15;
              v24 = v7;
              v29 = a5 + 1;
            }
            else
            {
              a5[1] = *a5;
              v35 = v27 >> 15;
              v29 = a5;
              v32 = v7;
            }
            a2 = v38;
            *v29 = v23;
          }
        }
        v30 = a2[v23];
        v31 = v37[v23++];
        v7 += ((unsigned int)(v31 * v31) >> a6) - ((unsigned int)(v30 * v30) >> a6);
        if ( v7 <= 1 )
          v7 = 1;
        result = a4;
      }
      while ( a4 != v23 );
    }
    else
    {
      v13 = &a2[a3];
      v36 = 17 - v12;
      v14 = 0;
      v15 = 0;
      v16 = -1;
      v33 = 0;
      do
      {
        v17 = *(_DWORD *)(a1 + 4 * v14);
        if ( v17 >= 1 )
        {
          v18 = (__int16)((unsigned int)v17 >> v36) * (__int16)((unsigned int)v17 >> v36);
          v19 = (__int16)((int)v18 >> 15);
          if ( 2 * SHIWORD(v15) * (__int16)(v18 >> 15) + ((v19 * (unsigned __int16)v15) >> 15) <= 2 * v16 * SHIWORD(v7)
                                                                                                + (((unsigned __int16)v7
                                                                                                  * v16) >> 15) )
          {
            a2 = v38;
          }
          else
          {
            v16 = v35;
            if ( 2 * SHIWORD(v33) * (__int16)v19 + ((v19 * (unsigned __int16)v33) >> 15) <= 2
                                                                                          * (__int16)v35
                                                                                          * SHIWORD(v7)
                                                                                          + (((unsigned __int16)v7
                                                                                            * (__int16)v35) >> 15) )
            {
              v16 = v18 >> 15;
              v15 = v7;
              v20 = a5 + 1;
            }
            else
            {
              v15 = v33;
              v20 = a5;
              a5[1] = *a5;
              v35 = v18 >> 15;
              v33 = v7;
            }
            a2 = v38;
            *v20 = v14;
          }
        }
        v21 = a2[v14];
        v22 = v13[v14++];
        v7 += ((unsigned int)(v22 * v22) >> a6) - ((unsigned int)(v21 * v21) >> a6);
        if ( v7 <= 1 )
          v7 = 1;
        result = a4;
      }
      while ( a4 != v14 );
    }
  }
  return result;
}


// ======================================================================
