// ADDR: 0x18d3f0
// SYMBOL: sub_18D3F0
unsigned __int8 *__fastcall sub_18D3F0(unsigned __int8 *result, int a2)
{
  for ( ; a2; result += 4 )
  {
    --a2;
    *(_DWORD *)result = dword_23B6B8[*result] ^ dword_23BAB8[result[1]] ^ dword_23BEB8[result[2]] ^ dword_23C2B8[result[3]];
  }
  return result;
}


// ======================================================================
// ADDR: 0x18d45c
// SYMBOL: sub_18D45C
int __fastcall sub_18D45C(void *src, int a2, int a3)
{
  int v3; // r8
  int v4; // r11
  int v5; // r1
  int v6; // r6
  int v7; // r10
  int v8; // r5
  int v9; // r2
  bool v10; // cc
  unsigned int v11; // r8
  int v12; // r0
  _DWORD *v13; // r1
  unsigned int v14; // r0
  int v15; // r2
  _DWORD *v16; // r1
  int v17; // r0
  int v18; // r12
  int v19; // lr
  int v20; // r2
  int v21; // r3
  int v22; // r5
  int v23; // r0
  int v24; // r2
  int i; // r3
  unsigned __int8 v26; // r4
  unsigned __int8 v27; // r5
  int v28; // r2
  int v29; // r1
  int v30; // r1
  _DWORD *v31; // r2
  int v32; // r3
  int v33; // r1
  int v34; // r5
  int v35; // r2
  unsigned int v36; // r4
  int v37; // r0
  _DWORD *v38; // r1
  unsigned int v39; // r0
  int v40; // r2
  unsigned __int8 v42; // [sp+4h] [bp-74h]
  unsigned __int8 *v43; // [sp+8h] [bp-70h]
  unsigned __int8 *v44; // [sp+Ch] [bp-6Ch]
  unsigned __int8 *v45; // [sp+10h] [bp-68h]
  int v46; // [sp+18h] [bp-60h]
  int v47; // [sp+1Ch] [bp-5Ch]
  int v48; // [sp+20h] [bp-58h]
  int v49; // [sp+24h] [bp-54h]
  int v50; // [sp+28h] [bp-50h]
  int v51; // [sp+2Ch] [bp-4Ch]
  _DWORD dest[3]; // [sp+38h] [bp-40h] BYREF
  _BYTE v54[12]; // [sp+3Ch] [bp-3Ch] BYREF
  int v55; // [sp+48h] [bp-30h]
  _DWORD v56[11]; // [sp+4Ch] [bp-2Ch]

  v3 = dword_382770;
  v46 = dword_382770;
  v4 = dword_382770 - 6;
  if ( dword_382770 < 7 )
  {
    v7 = 0;
    v6 = 0;
  }
  else
  {
    j_memcpy(dest, src, 4 * dword_382770 - 24);
    v5 = 0;
    v6 = 0;
    v7 = 0;
    do
    {
      if ( v6 > 3 )
      {
        v15 = v6;
      }
      else
      {
        v8 = v5 + 1;
        v9 = ~v5;
        v10 = v4 <= v5 + 1;
        v11 = 3 - v6;
        v12 = v5 + 1;
        v13 = &dest[v5];
        if ( !v10 )
          v12 = v4;
        v14 = v12 + v9;
        if ( v11 >= v14 )
          v11 = v14;
        if ( !v14 )
          v11 = 0;
        j_memcpy((void *)(a3 + 16 * v7 + 4 * v6), v13, 4 * v11 + 4);
        v5 = v8 + v11;
        v15 = v6 + v11 + 1;
        v3 = dword_382770;
      }
      if ( v15 == 4 )
        ++v7;
      v6 = v15 - 4;
      if ( v15 != 4 )
        v6 = v15;
    }
    while ( v5 < v4 && v7 <= v3 );
  }
  if ( v7 <= v3 )
  {
    v16 = &dest[v46 - 7];
    v45 = (unsigned __int8 *)v16 + 3;
    v44 = (unsigned __int8 *)v16 + 2;
    v43 = (unsigned __int8 *)v16 + 1;
    v48 = LOBYTE(dest[0]);
    v51 = BYTE1(dest[0]);
    v50 = BYTE2(dest[0]);
    v49 = HIBYTE(dest[0]);
    v17 = 0;
    do
    {
      v47 = v17;
      v18 = byte_2394B8[*v45];
      v19 = *v44;
      v20 = byte_2394B8[*v43] ^ v48;
      LOBYTE(dest[0]) = byte_2394B8[*v43] ^ v48;
      v21 = byte_23C6B8[4 * v17] ^ v20;
      v22 = v51 ^ byte_2394B8[v19];
      v23 = byte_2394B8[LOBYTE(dest[v46 - 7])] ^ v49;
      v50 ^= v18;
      BYTE2(dest[0]) = v50;
      v51 = v22;
      BYTE1(dest[0]) = v22;
      LOBYTE(dest[0]) = v21;
      HIBYTE(dest[0]) = v23;
      v48 = v21;
      v49 = v23;
      if ( v4 == 8 )
      {
        v24 = dest[0];
        for ( i = 1; i != 4; ++i )
        {
          v24 ^= dest[i];
          dest[i] = v24;
        }
        v26 = byte_2394B8[v54[8]];
        v27 = byte_2394B8[v54[10]];
        v42 = byte_2394B8[v54[11]];
        BYTE1(v55) ^= byte_2394B8[v54[9]];
        BYTE2(v55) ^= v27;
        v28 = 0;
        LOBYTE(v55) = v55 ^ v26;
        HIBYTE(v55) ^= v42;
        v29 = v55;
        do
        {
          v29 ^= v56[v28];
          v56[v28++] = v29;
        }
        while ( v28 != 3 );
      }
      else if ( v46 >= 8 )
      {
        v30 = dest[0];
        v31 = v54;
        v32 = v46 - 7;
        do
        {
          --v32;
          v30 ^= *v31;
          *v31++ = v30;
        }
        while ( v32 );
      }
      if ( v46 >= 7 && v7 <= v3 )
      {
        v33 = 0;
        do
        {
          if ( v6 > 3 )
          {
            v40 = v6;
          }
          else
          {
            v34 = v33 + 1;
            v35 = ~v33;
            v10 = v4 <= v33 + 1;
            v36 = 3 - v6;
            v37 = v33 + 1;
            v38 = &dest[v33];
            if ( !v10 )
              v37 = v4;
            v39 = v37 + v35;
            if ( v36 >= v39 )
              v36 = v39;
            if ( !v39 )
              v36 = 0;
            j_memcpy((void *)(a3 + 16 * v7 + 4 * v6), v38, 4 * v36 + 4);
            v33 = v34 + v36;
            v3 = dword_382770;
            v40 = v6 + v36 + 1;
          }
          if ( v40 == 4 )
            ++v7;
          v6 = v40 - 4;
          if ( v40 != 4 )
            v6 = v40;
        }
        while ( v33 < v4 && v7 <= v3 );
      }
      v17 = v47 + 1;
    }
    while ( v7 <= v3 );
  }
  return 0;
}


// ======================================================================
