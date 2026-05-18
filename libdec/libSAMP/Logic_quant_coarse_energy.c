// ADDR: 0x199f08
// SYMBOL: sub_199F08
int __fastcall sub_199F08(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int *a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15)
{
  __int16 v16; // r1
  __int16 v17; // r2
  int v18; // lr
  int v19; // r11
  int v20; // r0
  int v21; // r6
  int v22; // r9
  int v23; // r1
  int v24; // r0
  int v25; // r1
  int v26; // r2
  int v27; // r10
  int v28; // r3
  int v29; // r1
  int v30; // r4
  int v31; // r5
  int v32; // r2
  signed int v33; // r2
  int v34; // r1
  int v35; // r8
  int v36; // r2
  int v37; // r12
  int v38; // r1
  int v39; // r6
  int v40; // r3
  int v41; // r1
  int v43; // [sp+8h] [bp-58h]
  int v44; // [sp+Ch] [bp-54h]
  int v45; // [sp+10h] [bp-50h]
  int v46; // [sp+14h] [bp-4Ch]
  int v47; // [sp+18h] [bp-48h]
  __int16 v48; // [sp+20h] [bp-40h]
  _BOOL4 v52; // [sp+30h] [bp-30h]
  int v53; // [sp+34h] [bp-2Ch] BYREF
  _DWORD v54[2]; // [sp+38h] [bp-28h]

  v54[0] = 0;
  v54[1] = 0;
  if ( a7 + 3 <= a6 )
    j_ec_enc_bit_logp(a10, a13, 3);
  if ( a13 )
  {
    v16 = 0;
    v17 = 4915;
  }
  else
  {
    v16 = word_B3CBC[a12];
    v17 = word_B3C9C[a12];
  }
  if ( a2 >= a3 )
  {
    v19 = 0;
  }
  else
  {
    v18 = a5;
    v19 = 0;
    v20 = *(_DWORD *)(a1 + 8);
    v48 = v17;
    v21 = a2;
    v47 = v16;
    v43 = a3;
    do
    {
      v22 = 0;
      v52 = v21 > 1 && a15 != 0;
      v46 = 3 * a11 * (a3 - v21);
      v23 = v21;
      if ( v21 >= 20 )
        v23 = 20;
      v45 = (2 * v23) | 1;
      v44 = 2 * v23;
      do
      {
        v24 = v21 + v20 * v22;
        v25 = -9216;
        v26 = *(__int16 *)(v18 + 2 * v24);
        if ( v26 > -9216 )
          v25 = *(__int16 *)(v18 + 2 * v24);
        v27 = v54[v22];
        v28 = v47 * v25;
        v29 = *(__int16 *)(a4 + 2 * v24);
        v30 = (v29 << 7) - ((v28 + 128) >> 8) - v27;
        v31 = (v30 + 0x10000) >> 17;
        v53 = v31;
        if ( v31 <= -1 )
        {
          v32 = v26 - a14;
          if ( v32 <= -28672 )
            LOWORD(v32) = -28672;
          if ( (__int16)v32 > v29 )
          {
            v31 = (v31 + (((__int16)v32 - v29) >> 10)) & ((v31 + (((__int16)v32 - v29) >> 10)) >> 31);
            v53 = v31;
          }
        }
        v33 = a6 + 32 - a10[5] - __clz(a10[7]);
        v34 = v31;
        if ( v21 != a2 )
        {
          v34 = v31;
          if ( v33 - v46 <= 23 )
          {
            v34 = 1;
            if ( v31 < 1 )
              v34 = v31;
            v53 = v34;
            if ( v33 - v46 <= 15 )
            {
              if ( v34 <= -1 )
                v34 = -1;
              v53 = v34;
            }
          }
        }
        v35 = (v28 + 128) >> 8;
        if ( v52 )
        {
          v34 &= v34 >> 31;
          v53 = v34;
        }
        if ( v33 < 15 )
        {
          if ( v33 < 2 )
          {
            if ( v33 == 1 )
            {
              v53 = v34 & (v34 >> 31);
              j_ec_enc_bit_logp(a10, -v53, 1);
              v18 = a5;
            }
            else
            {
              v53 = -1;
            }
          }
          else
          {
            if ( v34 >= 1 )
              v34 = 1;
            if ( v34 <= -1 )
              v34 = -1;
            v53 = v34;
            j_ec_enc_icdf(a10, (2 * v34) ^ (v34 >> 31), &unk_C27A5, 2);
            v18 = a5;
          }
        }
        else
        {
          j_ec_laplace_encode(a10, &v53, *(unsigned __int8 *)(a8 + v44) << 7, *(unsigned __int8 *)(a8 + v45) << 6);
          v18 = a5;
        }
        v36 = v53;
        v37 = v21;
        v20 = *(_DWORD *)(a1 + 8);
        v38 = v21 + v20 * v22;
        v39 = (__int16)(4 * v53) * v48;
        *(_WORD *)(a9 + 2 * v38) = ((unsigned int)(v30 + 64) >> 7) - ((_WORD)v53 << 10);
        v40 = v27 + v35 + (v36 << 17);
        if ( v40 <= -3670016 )
          v40 = -3670016;
        *(_WORD *)(v18 + 2 * v38) = (unsigned int)(v40 + 64) >> 7;
        v54[v22] = (v36 << 17) - v39 + v27;
        v41 = v31 - v36;
        if ( v31 - v36 < 0 )
          v41 = v36 - v31;
        ++v22;
        v19 += v41;
        v21 = v37;
      }
      while ( v22 < a11 );
      a3 = v43;
      v21 = v37 + 1;
    }
    while ( v37 + 1 != v43 );
  }
  if ( a15 )
    return 0;
  return v19;
}


// ======================================================================
