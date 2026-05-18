// ADDR: 0x17daa2
// SYMBOL: sub_17DAA2
unsigned __int16 *__fastcall sub_17DAA2(unsigned __int16 *result, unsigned __int8 *a2, int a3)
{
  int v3; // r12
  int v4; // lr
  int v5; // r3
  int v6; // r4
  int v7; // t1
  int v8; // r5

  if ( a3 )
  {
    v3 = result[2];
    v4 = result[1];
    v5 = *((_DWORD *)result + 2);
    v6 = *result;
    do
    {
      v7 = *a2++;
      --a3;
      v8 = v7 ^ BYTE1(v6);
      v5 += v8;
      *((_DWORD *)result + 2) = v5;
      v6 = v3 + (v6 + v8) * v4;
      *result = v6;
    }
    while ( a3 );
  }
  return result;
}


// ======================================================================
// ADDR: 0x187150
// SYMBOL: sub_187150
unsigned int sub_187150()
{
  unsigned int v1; // r2
  unsigned int v2; // r0

  if ( dword_2390B4-- <= 0 )
    return sub_18702C();
  v1 = *(_DWORD *)dword_38274C;
  dword_38274C += 4;
  v2 = v1 ^ (v1 >> 11) ^ ((v1 ^ (v1 >> 11)) << 7) & 0x9D2C5680;
  return v2 ^ (v2 << 15) & 0xEFC60000 ^ ((v2 ^ (v2 << 15) & 0xEFC60000) >> 18);
}


// ======================================================================
// ADDR: 0x18de38
// SYMBOL: sub_18DE38
int __fastcall sub_18DE38(unsigned __int8 *a1, _BYTE *a2, _DWORD *a3, int a4, int *a5)
{
  int v6; // r2
  int v7; // r2
  int *v8; // r9
  _DWORD *v9; // r6
  int v10; // r4
  unsigned int v11; // r11
  unsigned int v12; // r3
  unsigned int v13; // r10
  int v14; // r9
  int v15; // r6
  int v16; // r2
  int v17; // r8
  int v18; // r0
  int v19; // r4
  unsigned int v20; // lr
  int v21; // r5
  int v22; // r12
  unsigned int v23; // r6
  int v24; // r5
  int v25; // r9
  int v26; // r4
  int v27; // r8
  int v28; // r1
  unsigned int v29; // r10
  unsigned __int8 v30; // r0
  int v31; // r3
  unsigned __int8 v32; // r2
  unsigned __int8 v33; // r10
  unsigned __int8 v34; // r8
  char v35; // r1
  unsigned int v36; // r2
  char v37; // r3
  unsigned __int8 v38; // r0
  int v39; // r0
  int v40; // r12
  unsigned int v41; // r2
  unsigned int v42; // r1
  _DWORD *v43; // r8
  int64x2_t v44; // q4
  int v45; // r4
  int64x2_t v46; // q8
  int v48; // [sp+0h] [bp-80h]
  int v49; // [sp+4h] [bp-7Ch]
  _DWORD *v50; // [sp+8h] [bp-78h]
  int v51; // [sp+10h] [bp-70h]
  int v52; // [sp+10h] [bp-70h]
  int v53; // [sp+18h] [bp-68h]
  int v54; // [sp+18h] [bp-68h]
  int v55; // [sp+1Ch] [bp-64h]
  unsigned __int8 v56; // [sp+20h] [bp-60h]
  int v57; // [sp+24h] [bp-5Ch]
  int v58; // [sp+24h] [bp-5Ch]
  int v59; // [sp+28h] [bp-58h]
  unsigned int v60; // [sp+2Ch] [bp-54h]
  unsigned __int8 v61; // [sp+2Ch] [bp-54h]
  unsigned int v62; // [sp+30h] [bp-50h]
  int v63; // [sp+34h] [bp-4Ch]
  int v64; // [sp+34h] [bp-4Ch]
  int v65; // [sp+34h] [bp-4Ch]
  unsigned int v66; // [sp+38h] [bp-48h]
  unsigned int v67; // [sp+38h] [bp-48h]
  int v68; // [sp+38h] [bp-48h]
  int v69; // [sp+3Ch] [bp-44h]
  _OWORD v70[4]; // [sp+40h] [bp-40h] BYREF

  v6 = -5;
  if ( a1 && a2 )
  {
    if ( *a2 != 1 )
    {
      v7 = *a1;
      v8 = a5;
      v48 = a4 / 16;
      switch ( v7 )
      {
        case 3:
          if ( a4 >= 16 )
          {
            v11 = *(_DWORD *)(a1 + 9);
            v12 = *(_DWORD *)(a1 + 1);
            v13 = *(_DWORD *)(a1 + 5);
            v14 = *(_DWORD *)(a1 + 13);
            v15 = v48;
            v50 = a2 + 48;
            v16 = v12 >> 8;
            v63 = v11 >> 8;
            v17 = HIWORD(v12);
            v69 = v12;
            v18 = HIBYTE(v12);
            v19 = v13 >> 8;
            v20 = HIWORD(v13);
            v21 = HIBYTE(v13);
            v66 = HIWORD(v11);
            v60 = HIBYTE(v11);
            do
            {
              v49 = v15;
              v22 = v21;
              v23 = v14;
              v24 = v19;
              v25 = v18;
              v26 = v17;
              v27 = v13;
              v28 = v63;
              v29 = v66;
              v30 = v60;
              v62 = 0;
              v31 = v16;
              do
              {
                v32 = v29;
                v67 = v29;
                v33 = v30;
                v64 = v28;
                v61 = v30;
                DWORD2(v70[0]) = ((v32 << 16) | (v30 << 24) | ((unsigned __int8)v28 << 8)) + (unsigned __int8)v11;
                DWORD1(v70[0]) = (((unsigned __int8)v20 << 16) | (v22 << 24) | ((unsigned __int8)v24 << 8))
                               + (unsigned __int8)v27;
                v51 = v27;
                v53 = v31;
                v57 = v22;
                HIDWORD(v70[0]) = v23;
                v34 = v24;
                LODWORD(v70[0]) = (((unsigned __int8)v26 << 16) | (v25 << 24) | ((unsigned __int8)v31 << 8))
                                + (unsigned __int8)v69;
                sub_18D6E0(v70, (int *)v70, v50);
                v35 = v62 & 7;
                v36 = v62 >> 3;
                v37 = *((_BYTE *)a5 + (v62++ >> 3));
                v38 = ((unsigned __int8)(v70[0] & 0x80) >> v35) ^ v37;
                *((_BYTE *)a5 + v36) = v38;
                v55 = (v23 >> 15) & 1 | (2 * (v23 & 0x7F)) | ((((v23 >> 7) & 0xFE) + ((v23 >> 23) & 1)) << 8) | (((v23 >> 15) & 0xFE | (v23 >> 31)) << 16) | ((((v38 >> (v35 ^ 7)) & 1) + ((v23 >> 23) & 0xFE)) << 24);
                v39 = (unsigned __int8)v23 >> 7;
                v23 = v55;
                v56 = v39 | (2 * v61);
                v60 = (2 * v67) | (v33 >> 7);
                v68 = (2 * v64) | ((unsigned __int8)v67 >> 7);
                v65 = (2 * v11) | ((unsigned __int8)v64 >> 7);
                v59 = (2 * v57) | ((unsigned __int8)v11 >> 7);
                v40 = (2 * v20) | ((unsigned __int8)v57 >> 7);
                v24 = (2 * v24) | ((unsigned __int8)v20 >> 7);
                v27 = (2 * v51) | (v34 >> 7);
                v58 = (2 * v25) | ((unsigned __int8)v51 >> 7);
                v11 = v65;
                v28 = v68;
                v29 = v60;
                v20 = v40;
                v31 = (2 * v53) | ((unsigned __int8)v26 >> 7);
                v41 = v53 << 24;
                v54 = v40;
                v22 = v59;
                v30 = v56;
                v26 = (2 * v26) | ((unsigned __int8)v25 >> 7);
                v52 = v26;
                v25 = v58;
                v69 = (2 * v69) | (v41 >> 31);
              }
              while ( v62 != 128 );
              v11 = v65;
              v16 = v31;
              v63 = v68;
              v15 = v49 - 1;
              v42 = v60;
              LOBYTE(v60) = v56;
              v14 = v55;
              v19 = v24;
              v20 = v54;
              v13 = v27;
              v17 = v52;
              v18 = v58;
              v21 = v59;
              v66 = v42;
            }
            while ( v49 > 1 );
          }
          return v48 << 7;
        case 2:
          if ( a4 >= 16 )
          {
            v43 = a2 + 48;
            v44 = *(int64x2_t *)(a1 + 1);
            v45 = v48 + 1;
            do
            {
              v46 = *(int64x2_t *)a3;
              a3 += 4;
              v44 = veorq_s64(v44, v46);
              v70[0] = v44;
              sub_18D6E0(v70, v8, v43);
              --v45;
              v8 += 4;
            }
            while ( v45 > 1 );
          }
          return v48 << 7;
        case 1:
          if ( a4 >= 16 )
          {
            v9 = a2 + 48;
            v10 = v48 + 1;
            do
            {
              sub_18D6E0(a3, v8, v9);
              --v10;
              v8 += 4;
              a3 += 4;
            }
            while ( v10 > 1 );
          }
          return v48 << 7;
      }
    }
    return -5;
  }
  return v6;
}


// ======================================================================
