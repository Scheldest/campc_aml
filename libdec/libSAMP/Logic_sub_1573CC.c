// ADDR: 0x15764a
// SYMBOL: sub_15764A
unsigned int *__fastcall sub_15764A(unsigned int *result, int a2, unsigned int a3, unsigned int a4)
{
  int v4; // r12
  int v5; // r9
  int v6; // r6
  int v7; // r5
  int v8; // r8
  unsigned int v9; // r1
  unsigned int v10; // r10
  int v11; // r11
  int v12; // r4
  _BOOL4 v13; // r2
  int v14; // r3
  unsigned __int64 v15; // kr00_8
  bool v16; // zf
  int v17; // r2
  int v18; // r2
  bool v19; // nf
  int v20; // r4
  unsigned int v21; // r5
  char v22; // r2
  unsigned int v23; // r2
  int v24; // [sp+0h] [bp-28h]

  v4 = (a4 >> 20) - 1075;
  v5 = a4 & 0xFFFFF;
  if ( a4 >= 0x100000 )
    v5 += 0x100000;
  else
    v4 = -1074;
  v6 = (2 * v5) | (a3 >> 31);
  v7 = v4 - 1;
  v8 = 2 * a3;
  v9 = 2 * a3 + 1;
  v10 = a3;
  v11 = v4;
  v12 = v5;
  v24 = v6;
  do
  {
    --v7;
    v6 = (2 * v6) | (v9 >> 31);
    v9 *= 2;
  }
  while ( v6 > -1 );
  do
  {
    --v11;
    v12 = (2 * v12) | (a3 >> 31);
    a3 *= 2;
  }
  while ( v12 > -1 );
  result[3] = 0;
  *result = a3;
  result[1] = v12;
  result[2] = v11;
  result[8] = v9;
  result[6] = v7;
  result[10] = v7;
  v13 = (v10 | a4 & 0xFFFFF) == 0 && a4 >> 21 != 0;
  v14 = v24;
  if ( v13 )
  {
    v14 = (4 * v5) | (v10 >> 30);
    v8 = 4 * v10;
  }
  v15 = __PAIR64__(v14, v8) - 1;
  v16 = !v13;
  v17 = v4 - 1;
  if ( !v16 )
    v17 = v4 - 2;
  v18 = v17 - v7;
  v20 = v18 - 32;
  v19 = v18 - 32 < 0;
  v21 = (_DWORD)v15 << v18;
  v22 = 32 - v18;
  if ( !v19 )
    v21 = 0;
  result[9] = v6;
  result[4] = v21;
  v23 = ((unsigned int)v15 >> v22) | HIDWORD(v15);
  if ( v20 >= 0 )
    v23 = (_DWORD)v15 << v20;
  result[5] = v23;
  return result;
}


// ======================================================================
// ADDR: 0x157736
// SYMBOL: sub_157736
int __fastcall sub_157736(
        int a1,
        _DWORD *a2,
        _DWORD *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10)
{
  int v11; // r3
  unsigned int v12; // r4
  int v13; // r5
  bool v14; // nf
  unsigned int v15; // r6
  int v16; // r3
  unsigned __int64 v17; // kr10_8
  bool v18; // cf
  int v19; // r3
  unsigned int v20; // r5
  unsigned int v21; // r4
  unsigned int v22; // lr
  int v23; // r0
  int v24; // r12
  int v25; // r0
  int v26; // r6
  int v27; // r0
  int v28; // r1
  unsigned int v29; // r5
  int v30; // r8
  unsigned __int64 v31; // r2
  unsigned int v32; // r1
  int v33; // r0
  unsigned int v34; // r6
  unsigned int v35; // kr20_4
  unsigned int v36; // r8
  unsigned __int64 v37; // kr28_8
  unsigned int v38; // r10
  unsigned __int64 v39; // r0
  int v40; // r5
  unsigned int v41; // r0
  unsigned __int64 v42; // kr30_8
  unsigned __int64 v43; // kr18_8
  unsigned __int64 v44; // r10
  unsigned int v45; // r3
  int v46; // r12
  int v47; // r0
  int v48; // r6
  unsigned __int64 v49; // r2
  int v50; // r12
  unsigned int v51; // r5
  unsigned int v52; // r5
  unsigned int v53; // r6
  int v54; // r12
  unsigned __int64 v55; // kr50_8
  int v56; // r1
  int v57; // r0
  unsigned __int64 v60; // [sp+4h] [bp-5Ch]
  unsigned int v61; // [sp+Ch] [bp-54h]
  int v62; // [sp+10h] [bp-50h]
  __int64 v63; // [sp+14h] [bp-4Ch]
  unsigned int v64; // [sp+24h] [bp-3Ch]
  int v65; // [sp+28h] [bp-38h]
  _DWORD *v66; // [sp+2Ch] [bp-34h]
  unsigned int v67; // [sp+30h] [bp-30h]
  int v68; // [sp+34h] [bp-2Ch]
  unsigned int v69; // [sp+3Ch] [bp-24h]

  v11 = -32 - a10;
  v12 = 1u >> (a10 + 32);
  v13 = -a10;
  if ( -32 - a10 >= 0 )
    v12 = 1 << v11;
  v14 = v11 < 0;
  v15 = ((unsigned int)a9 >> v13) | (HIDWORD(a9) << (a10 + 32));
  if ( v11 >= 0 )
    v15 = HIDWORD(a9) >> v11;
  v16 = 1 << v13;
  if ( !v14 )
    v16 = 0;
  v60 = __PAIR64__(v12, v16);
  v17 = a9 - a7;
  v18 = v16 != 0;
  v19 = v16 - 1;
  LODWORD(v63) = v19 & a9;
  v20 = v12 - !v18;
  v21 = (unsigned __int64)(a9 - a5) >> 32;
  v22 = a9 - a5;
  HIDWORD(v63) = v20 & HIDWORD(a9);
  v61 = v20;
  v62 = v19;
  v67 = v15;
  if ( v15 <= 0x3B9AC9FF )
  {
    v24 = -a10;
    if ( v15 <= 0x5F5E0FF )
    {
      if ( v15 <= 0x98967F )
      {
        if ( v15 <= 0xF423F )
        {
          if ( v15 <= 0x1869F )
          {
            if ( v15 <= 0x270F )
            {
              if ( v15 >> 3 <= 0x7C )
              {
                if ( v15 <= 0x63 )
                {
                  v56 = 1;
                  v57 = 1;
                  if ( v15 > 9 )
                    v57 = 2;
                  v68 = v57;
                  if ( v15 > 9 )
                    v56 = 10;
                  v64 = v56;
                  goto LABEL_19;
                }
                v68 = 3;
                v23 = 100;
              }
              else
              {
                v68 = 4;
                v23 = 1000;
              }
            }
            else
            {
              v68 = 5;
              v23 = 10000;
            }
            goto LABEL_9;
          }
          v64 = 100000;
          v25 = 6;
        }
        else
        {
          v64 = 1000000;
          v25 = 7;
        }
      }
      else
      {
        v64 = 10000000;
        v25 = 8;
      }
    }
    else
    {
      v64 = 100000000;
      v25 = 9;
    }
    v68 = v25;
    goto LABEL_19;
  }
  v23 = 1000000000;
  v68 = 10;
  v24 = -a10;
LABEL_9:
  v64 = v23;
LABEL_19:
  v69 = a9 - a5;
  v65 = v24;
  v66 = a2;
  while ( v68 > 0 )
  {
    v26 = v24;
    v27 = sub_220A6C(v67, v64);
    v28 = *a2;
    v29 = v67 - v27 * v64;
    ++*a2;
    v24 = v26;
    v22 = a9 - a5;
    v30 = v68 - 1;
    *(_BYTE *)(a1 + v28) = v27 + 48;
    LOBYTE(v31) = 32 - v26;
    HIDWORD(v31) = v29 << v26;
    v32 = v29 >> (32 - v26);
    v33 = v26 - 32;
    if ( v26 - 32 >= 0 )
    {
      v32 = v29 << v33;
      HIDWORD(v31) = 0;
    }
    v67 = v29;
    --v68;
    v35 = v63 + HIDWORD(v31);
    HIDWORD(v31) = (v63 + __PAIR64__(v32, HIDWORD(v31))) >> 32;
    v34 = v35;
    if ( __PAIR64__(v21, v69) >= __PAIR64__(HIDWORD(v31), v35) )
    {
      *a3 += v30;
      v36 = v64 >> v31;
      if ( v33 >= 0 )
        v36 = v64 << v33;
      LODWORD(v31) = v35;
      v37 = __PAIR64__(v21, v69) - __PAIR64__(HIDWORD(v31), v35);
      v38 = v64 << v24;
      if ( v33 >= 0 )
        v38 = 0;
      LODWORD(v39) = (v31 - v17) >> 32;
      if ( v31 >= v17 )
        return v39;
      LODWORD(v39) = (v37 - __PAIR64__(v36, v38)) >> 32;
      if ( v37 < __PAIR64__(v36, v38) )
        return v39;
      v40 = *a2 - 1;
      v41 = HIDWORD(v31);
      while ( 1 )
      {
        v42 = __PAIR64__(v41, v34) + __PAIR64__(v36, v38);
        if ( __PAIR64__(v41, v34) + __PAIR64__(v36, v38) >= v17 && v42 - v17 >= v17 - __PAIR64__(v41, v34) )
          break;
        v22 = a9 - a5;
        --*(_BYTE *)(a1 + v40);
        if ( v42 < v17 )
        {
          v43 = __PAIR64__(v41, v34) + __PAIR64__(v36, v38);
          v41 = HIDWORD(v43);
          v34 = v43;
          if ( __PAIR64__(v21, v69) - v42 >= __PAIR64__(v36, v38) )
            continue;
        }
        goto LABEL_38;
      }
      v22 = a9 - a5;
LABEL_38:
      v24 = v65;
      a2 = v66;
      v34 = v35;
    }
    else
    {
      v64 /= 0xAu;
    }
    LODWORD(v39) = (__PAIR64__(v21, v22) - __PAIR64__(HIDWORD(v31), v34)) >> 32;
    if ( __PAIR64__(v21, v22) >= __PAIR64__(HIDWORD(v31), v34) )
      return v39;
  }
  v44 = a9 - a7;
  v46 = HIDWORD(v63);
  v45 = v63;
  v47 = 0;
  do
  {
    v48 = *a2;
    v49 = 10 * __PAIR64__(v46, v45);
    ++*a2;
    v50 = (10 * (unsigned __int64)v22) >> 32;
    v22 *= 10;
    v51 = ((unsigned int)v49 >> v65) | (HIDWORD(v49) << (32 - v65));
    if ( v65 - 32 >= 0 )
      v51 = HIDWORD(v49) >> (v65 - 32);
    v44 *= 10LL;
    --v47;
    *(_BYTE *)(a1 + v48) = v51 + 48;
    a2 = v66;
    v21 = v50 + 10 * v21;
    v46 = HIDWORD(v49) & v61;
    v45 = v49 & v62;
  }
  while ( __PAIR64__(v21, v22) < __PAIR64__(v46, (unsigned int)v49 & v62) );
  *a3 += v47;
  v39 = __PAIR64__(v21, v22) - __PAIR64__(v46, v45);
  if ( __PAIR64__(v46, v45) < v44 )
  {
    v18 = v39 >= v60;
    LODWORD(v39) = (v39 - v60) >> 32;
    if ( v18 )
    {
      LODWORD(v39) = *v66;
      v52 = v46;
      v53 = v49 & v62;
      v54 = *v66 - 1;
      do
      {
        v55 = v60 + __PAIR64__(v52, v53);
        if ( v60 + __PAIR64__(v52, v53) >= v44 )
        {
          LODWORD(v39) = v21;
          if ( v55 - v44 >= v44 - __PAIR64__(v52, v53) )
            break;
        }
        --*(_BYTE *)(a1 + v54);
        if ( v55 >= v44 )
          break;
        v52 = (v60 + __PAIR64__(v52, v53)) >> 32;
        v53 = v55;
      }
      while ( __PAIR64__(v21, v22) - v55 >= v60 );
    }
  }
  return v39;
}


// ======================================================================
