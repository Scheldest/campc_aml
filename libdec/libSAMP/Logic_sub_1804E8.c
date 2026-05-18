// ADDR: 0x17d4c0
// SYMBOL: sub_17D4C0
int __fastcall sub_17D4C0(int a1, signed int size)
{
  void *v3; // r0
  size_t v4; // r1
  int result; // r0

  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)a1 = 0;
  if ( size > 256 )
  {
    v3 = malloc(size);
    v4 = 8 * size;
  }
  else
  {
    v3 = (void *)(a1 + 17);
    v4 = 2048;
  }
  *(_DWORD *)(a1 + 12) = v3;
  result = a1;
  *(_BYTE *)(a1 + 16) = 1;
  *(_DWORD *)(a1 + 4) = v4;
  return result;
}


// ======================================================================
// ADDR: 0x180774
// SYMBOL: sub_180774
int __fastcall sub_180774(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int a5,
        char a6,
        int a7,
        __int16 a8,
        char a9,
        int a10)
{
  unsigned int *v13; // r0
  int v14; // r6
  void *v15; // r0
  int v16; // r0
  int v17; // r1
  int result; // r0

  if ( a2 && a3 >= 1 )
  {
    v13 = (unsigned int *)sub_16201C();
    sub_16206C(v13, a2, (unsigned int)a3 >> 3, 0);
  }
  v14 = sub_182F10(a1 + 1980);
  v15 = (void *)operator new[]((a3 + 7) >> 3);
  *(_DWORD *)(v14 + 48) = v15;
  j_memcpy(v15, a2, (a3 + 7) >> 3);
  *(_DWORD *)(v14 + 28) = a10;
  *(_DWORD *)(v14 + 52) = 0;
  *(_BYTE *)(v14 + 24) = a9;
  *(_WORD *)(v14 + 20) = a8;
  *(_DWORD *)(v14 + 16) = a7;
  *(_DWORD *)(v14 + 4) = a4;
  *(_BYTE *)(v14 + 12) = a6;
  *(_DWORD *)v14 = a3;
  *(_DWORD *)(v14 + 8) = a5;
  v16 = *(_DWORD *)(a1 + 1992);
  v17 = *(_DWORD *)(a1 + 2000);
  *(_BYTE *)(v16 + 56) = 1;
  result = *(_DWORD *)(v16 + 60);
  *(_DWORD *)(a1 + 2000) = v17 + 1;
  *(_DWORD *)(a1 + 1992) = result;
  return result;
}


// ======================================================================
// ADDR: 0x1825e8
// SYMBOL: sub_1825E8
int __fastcall sub_1825E8(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v11; // lr
  int v14; // r0
  int v15; // r5
  unsigned int v16; // r4
  int v17; // r0
  int v18; // r1
  int v19; // r0
  int v20; // r8
  unsigned int v21; // r4
  int v22; // r0
  int v23; // r11
  int v24; // r1
  unsigned __int8 *v25; // r0
  int v26; // t1
  int v27; // r4
  int v28; // r3
  int v29; // r2
  int v30; // r1
  int v31; // r4
  int v32; // r12
  _BOOL4 v33; // r4
  int v35; // [sp+18h] [bp-168h] BYREF
  int v36; // [sp+20h] [bp-160h] BYREF
  int v37; // [sp+24h] [bp-15Ch]
  int v38; // [sp+28h] [bp-158h]
  int v39; // [sp+2Ch] [bp-154h]
  unsigned int v40; // [sp+30h] [bp-150h]
  unsigned int v41; // [sp+34h] [bp-14Ch]
  int v42; // [sp+38h] [bp-148h]
  unsigned int v43; // [sp+3Ch] [bp-144h]
  int v44; // [sp+40h] [bp-140h]
  int *v45; // [sp+44h] [bp-13Ch]
  int v46[69]; // [sp+48h] [bp-138h] BYREF
  __int64 v47; // [sp+15Ch] [bp-24h] BYREF

  v42 = a4;
  v47 = a7;
  v39 = a3;
  if ( a3 )
  {
    if ( *(_DWORD *)(a1 + 2016) - 40 < v39 / 8 )
    {
      v46[0] = v11 - sub_163FF8("libsamp.so");
      sub_10B6E4(1, "Potential split packet from {}", 30, v46);
      if ( a2 )
      {
        v46[0] = *a2;
        sub_186F1C(1, "Packet id {}", 12, v46);
      }
    }
  }
  if ( a8 )
  {
    v14 = *(unsigned __int16 *)(a1 + 8);
    v45 = (int *)((char *)&v36 - ((4 * v14 + 7) & 0xFFFFFFF8));
    if ( !v14 )
      goto LABEL_17;
    v15 = 0;
    v16 = 0;
    v44 = 0;
    do
    {
      v17 = *(_DWORD *)(a1 + 832);
      if ( *(_BYTE *)(v17 + v15)
        && sub_17E596(v17 + v15 + 4, (int)&v47)
        && sub_17E596(*(_DWORD *)(a1 + 832) + v15 + 4, (int)&unk_BE944) )
      {
        v18 = v44;
        v45[v44] = v16;
        v44 = v18 + 1;
      }
      ++v16;
      v15 += 2112;
    }
    while ( v16 < *(unsigned __int16 *)(a1 + 8) );
    if ( !v44 )
      goto LABEL_17;
  }
  else
  {
    v45 = &v35;
    v19 = sub_1811B4(a1, a7, SHIDWORD(a7), 1);
    if ( v19 == -1 || (unsigned int)(*(_DWORD *)(*(_DWORD *)(a1 + 832) + 2112 * v19 + 2108) - 1) < 3 )
    {
LABEL_17:
      LOBYTE(v20) = 0;
      return v20 & 1;
    }
    *v45 = v19;
    v44 = 1;
  }
  v20 = 0;
  v40 = v39 + 7;
  v21 = (v39 + 7) >> 3;
  v38 = sub_221404(a10, a11, 1000, 0);
  v22 = 1;
  v43 = v21;
  if ( v21 > 1 )
    v22 = v21;
  v36 = v22;
  v41 = a5 - 8;
  v23 = 0;
  v37 = a9 ^ 1;
  do
  {
    if ( *(_BYTE *)(a1 + 2020) )
    {
      if ( v40 >= 8 )
      {
        v24 = v36;
        v25 = a2;
        do
        {
          v26 = *v25++;
          --v24;
          ++*(_DWORD *)(a1 + 4 * v26 + 932);
        }
        while ( v24 );
      }
      *(_DWORD *)(a1 + 1964) += v43;
    }
    if ( *(_DWORD *)(a1 + 1960) )
    {
      v27 = v43;
      sub_17D4C0((int)v46, v43);
      sub_17DE2C(*(_DWORD *)(a1 + 1960), a2, v27, v46);
      v28 = *(_DWORD *)(a1 + 832);
      v29 = v46[0];
      v30 = v46[3];
      v31 = *(_DWORD *)(a1 + 2016);
      v32 = v45[v23];
      *(_DWORD *)(a1 + 1972) += (v46[0] + 7) >> 3;
      sub_18888C(v28 + 2112 * v32 + 24, v30, v29, v42, a5, a6, 1, v31, a10, a11);
      sub_17D542((int)v46);
    }
    else
    {
      if ( (v37 | v20) << 31 )
        v33 = 0;
      else
        v33 = v23 - v44 == -1;
      sub_18888C(
        *(_DWORD *)(a1 + 832) + 2112 * v45[v23] + 24,
        a2,
        v39,
        v42,
        a5,
        a6,
        !v33,
        *(_DWORD *)(a1 + 2016),
        a10,
        a11);
      v20 |= v33;
    }
    if ( v41 <= 2 )
      *(_DWORD *)(*(_DWORD *)(a1 + 832) + 2112 * v45[v23] + 1792) = v38;
    ++v23;
  }
  while ( v23 != v44 );
  return v20 & 1;
}


// ======================================================================
