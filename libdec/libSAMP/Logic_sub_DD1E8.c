// ADDR: 0xdd260
// SYMBOL: sub_DD260
int __fastcall sub_DD260(int a1, unsigned int a2, unsigned int a3, __int64 *a4, int a5)
{
  unsigned int v5; // r6
  int v6; // r9
  int v7; // r4
  unsigned int v9; // r8
  unsigned int v10; // r5
  __int16 v11; // r0
  int v12; // r1
  __int64 v13; // kr00_8
  unsigned int v14; // r9
  int v15; // r11
  unsigned int v16; // r2
  int v17; // r0
  __int16 v18; // r0
  int v19; // r1
  __int64 v20; // kr08_8
  unsigned int v21; // r11
  int v22; // r6
  unsigned int v23; // r2
  int v24; // r0
  __int64 v25; // kr10_8
  __int16 v26; // r1
  signed int v27; // r0
  signed int v28; // r11
  int v29; // r2
  unsigned int v30; // r3
  unsigned int v31; // r2
  unsigned int v32; // r1
  bool v34; // zf
  int v35; // r0
  int v36; // r1
  int v37; // r2
  __int64 v38; // kr20_8
  int v39; // r2
  _BYTE *v40; // r0
  int v41; // r10
  bool v42; // zf
  int v43; // r0
  int v44; // r1
  int v45; // r2
  __int64 v46; // r2
  unsigned int v47; // r0
  _BYTE *v48; // r0
  const char *v49; // r1
  int v50; // r2
  char *v51; // r1
  char *v52; // r0
  const char *v53; // r2
  char *v54; // r0
  int v55; // r3
  __int64 v56; // r0
  unsigned int v57; // r3
  unsigned int v58; // r6
  __int64 v59; // kr30_8
  unsigned int v60; // r2
  bool v61; // zf
  int v62; // r0
  int v63; // r1
  int v64; // r2
  bool v65; // zf
  int v66; // r0
  int v67; // r1
  int v68; // r2
  __int64 v69; // kr48_8
  int v70; // r0
  int v71; // r3
  _BYTE *v72; // r0
  char *v73; // r0
  int v75; // [sp+Ch] [bp-4Ch] BYREF
  unsigned int v76; // [sp+10h] [bp-48h] BYREF
  unsigned int v77; // [sp+14h] [bp-44h]
  unsigned int v78; // [sp+18h] [bp-40h]
  unsigned int v79; // [sp+1Ch] [bp-3Ch]
  int v80; // [sp+20h] [bp-38h]
  bool v81; // [sp+24h] [bp-34h]
  _DWORD v82[9]; // [sp+34h] [bp-24h] BYREF

  v6 = *((unsigned __int8 *)a4 + 8);
  v75 = a1;
  v7 = a1;
  v9 = a3;
  v10 = a2;
  switch ( v6 )
  {
    case 0:
    case 1:
      if ( (*(_WORD *)((_BYTE *)a4 + 9) & 0x100) == 0 )
        goto LABEL_83;
      if ( sub_DD6FC(&v75, a2, a2, 0, a3, a4, a5) )
        return v75;
      v7 = v75;
LABEL_83:
      v56 = *a4;
      v57 = __clz(v10 | 1) ^ 0x1F;
      v58 = dword_91AF8[2 * v57];
      v59 = *(_QWORD *)&dword_91AF8[2 * v57] + v10;
      if ( (*((_DWORD *)a4 + 1) + 1) | *(_DWORD *)a4 )
      {
        v60 = HIDWORD(v59) + HIBYTE(v9);
        if ( (*(_WORD *)((_BYTE *)a4 + 9) & 0xF) == 4 )
        {
          if ( (unsigned int)v56 > v60 )
            v60 = *(_DWORD *)a4;
        }
        else if ( SHIDWORD(v56) > SHIDWORD(v59) )
        {
          v60 = HIDWORD(v56) + HIBYTE(v9);
        }
        v78 = dword_91AF8[2 * v57] + v10;
        v79 = v10;
        v80 = HIDWORD(v59);
        v76 = v9;
        v77 = v60;
        return sub_DDB98(v7, a4);
      }
      v61 = v9 == 0;
      if ( v9 )
      {
        v58 = v9 & 0xFFFFFF;
        v61 = (v9 & 0xFFFFFF) == 0;
      }
      if ( !v61 )
      {
        do
        {
          v62 = *(_DWORD *)(v7 + 8);
          v63 = v62 + 1;
          if ( *(_DWORD *)(v7 + 12) < (unsigned int)(v62 + 1) )
          {
            (**(void (__fastcall ***)(int))v7)(v7);
            v62 = *(_DWORD *)(v7 + 8);
            v63 = v62 + 1;
          }
          v64 = *(_DWORD *)(v7 + 4);
          *(_DWORD *)(v7 + 8) = v63;
          *(_BYTE *)(v64 + v62) = v58;
          v58 >>= 8;
        }
        while ( v58 );
      }
      sub_DCEB4(v82, (int)&v76, v10, SHIDWORD(v59));
      v51 = (char *)v82[1];
      return sub_DCF1C((int)&v76, (int)v51, v7);
    case 2:
      v25 = 2863311531LL * (__clz(a2 | 1) ^ 0x1F);
      v26 = *(_WORD *)((char *)a4 + 9);
      v27 = *((_DWORD *)a4 + 1);
      v28 = (__clz(v10 | 1) ^ 0x1F) / 3 + 1;
      if ( (v26 & 0x80) != 0 && v27 <= v28 && v10 )
      {
        v29 = 12288;
        if ( !v9 )
          v29 = 48;
        v9 = (v29 | v9) + 0x1000000;
      }
      v30 = *(_DWORD *)a4;
      if ( (v27 + 1) | *(_DWORD *)a4 )
      {
        v31 = v28 + HIBYTE(v9);
        if ( (v26 & 0xF) == 4 )
        {
          v32 = v30 - v31;
          if ( v30 < v31 )
            v32 = 0;
          if ( v30 > v31 )
            v31 = *(_DWORD *)a4;
        }
        else if ( v27 <= v28 )
        {
          v32 = 0;
        }
        else
        {
          v32 = v27 - v28;
          v31 = HIBYTE(v9) + v27;
        }
        v78 = v32;
        v79 = v10;
        v80 = (HIDWORD(v25) >> 1) + 1;
        v76 = v9;
        v77 = v31;
        return sub_DDE4C(v7, a4);
      }
      v65 = v9 == 0;
      if ( v9 )
      {
        v5 = v9 & 0xFFFFFF;
        v65 = (v9 & 0xFFFFFF) == 0;
      }
      if ( !v65 )
      {
        do
        {
          v66 = *(_DWORD *)(v7 + 8);
          v67 = v66 + 1;
          if ( *(_DWORD *)(v7 + 12) < (unsigned int)(v66 + 1) )
          {
            (**(void (__fastcall ***)(int))v7)(v7);
            v66 = *(_DWORD *)(v7 + 8);
            v67 = v66 + 1;
          }
          v68 = *(_DWORD *)(v7 + 4);
          *(_DWORD *)(v7 + 8) = v67;
          *(_BYTE *)(v68 + v66) = v5;
          v5 >>= 8;
        }
        while ( v5 );
      }
      v69 = *(_QWORD *)(v7 + 8);
      v70 = HIDWORD(v25) >> 1;
      if ( HIDWORD(v69) >= (unsigned int)(v69 + v28) )
      {
        v71 = *(_DWORD *)(v7 + 4);
        *(_DWORD *)(v7 + 8) = v69 + v28;
        if ( v71 )
        {
          v72 = (_BYTE *)(v70 + v69 + HIDWORD(v69));
          do
          {
            v34 = v10 >> 3 == 0;
            *v72-- = v10 & 7 | 0x30;
            v10 >>= 3;
          }
          while ( !v34 );
          return v7;
        }
      }
      v73 = (char *)&v76 + v70;
      v51 = (char *)&v76 + v28;
      do
      {
        v34 = v10 >> 3 == 0;
        *v73-- = v10 & 7 | 0x30;
        v10 >>= 3;
      }
      while ( !v34 );
      return sub_DCF1C((int)&v76, (int)v51, v7);
    case 3:
    case 4:
      v18 = *(_WORD *)((char *)a4 + 9);
      if ( (v18 & 0x80) != 0 )
      {
        v19 = 30768;
        if ( v6 == 4 )
          v19 = 22576;
        if ( a3 )
          v19 <<= 8;
        v9 = (v19 | a3) + 0x2000000;
      }
      v20 = *a4;
      v21 = __clz(v10 | 1);
      v22 = 8 - (v21 >> 2);
      if ( (*((_DWORD *)a4 + 1) + 1) | *(_DWORD *)a4 )
      {
        v23 = v22 + HIBYTE(v9);
        if ( (v18 & 0xF) == 4 )
        {
          v24 = v20 - v23;
          if ( (unsigned int)v20 < v23 )
            v24 = 0;
          if ( (unsigned int)v20 > v23 )
            v23 = *(_DWORD *)a4;
        }
        else if ( SHIDWORD(v20) <= v22 )
        {
          v24 = 0;
        }
        else
        {
          v24 = HIDWORD(v20) - v22;
          v23 = HIDWORD(v20) + HIBYTE(v9);
        }
        v78 = v24;
        v79 = v10;
        v80 = 8 - (v21 >> 2);
        v76 = v9;
        v77 = v23;
        v81 = v6 == 4;
        return sub_DDC48(v7, a4);
      }
      v41 = 8 - (v21 >> 2);
      v42 = v9 == 0;
      if ( v9 )
      {
        v22 = v9 & 0xFFFFFF;
        v42 = (v9 & 0xFFFFFF) == 0;
      }
      if ( !v42 )
      {
        do
        {
          v43 = *(_DWORD *)(v7 + 8);
          v44 = v43 + 1;
          if ( *(_DWORD *)(v7 + 12) < (unsigned int)(v43 + 1) )
          {
            (**(void (__fastcall ***)(int))v7)(v7);
            v43 = *(_DWORD *)(v7 + 8);
            v44 = v43 + 1;
          }
          v45 = *(_DWORD *)(v7 + 4);
          *(_DWORD *)(v7 + 8) = v44;
          *(_BYTE *)(v45 + v43) = v22;
          v22 = (unsigned int)v22 >> 8;
        }
        while ( v22 );
      }
      v46 = *(_QWORD *)(v7 + 8);
      v47 = v21 >> 2;
      if ( HIDWORD(v46) >= (unsigned int)(v46 + v41) )
      {
        HIDWORD(v46) = *(_DWORD *)(v7 + 4);
        *(_DWORD *)(v7 + 8) = v46 + v41;
        if ( HIDWORD(v46) )
        {
          v48 = (_BYTE *)(v46 - v47 + HIDWORD(v46) + 7);
          v49 = "0123456789ABCDEF";
          if ( v6 != 4 )
            v49 = "0123456789abcdef";
          do
          {
            v50 = v10 & 0xF;
            v10 >>= 4;
            *v48-- = v49[v50];
          }
          while ( v10 );
          return v7;
        }
      }
      v53 = "0123456789ABCDEF";
      v54 = (char *)&v76 - v47 + 7;
      if ( v6 != 4 )
        v53 = "0123456789abcdef";
      v51 = (char *)&v76 + v41;
      do
      {
        v55 = v10 & 0xF;
        v10 >>= 4;
        *v54-- = v53[v55];
      }
      while ( v10 );
      return sub_DCF1C((int)&v76, (int)v51, v7);
    case 5:
    case 6:
      v11 = *(_WORD *)((char *)a4 + 9);
      if ( (v11 & 0x80) != 0 )
      {
        v12 = 25136;
        if ( v6 == 6 )
          v12 = 16944;
        if ( a3 )
          v12 <<= 8;
        v9 = (v12 | a3) + 0x2000000;
      }
      v13 = *a4;
      v14 = __clz(v10 | 1);
      v15 = 32 - v14;
      if ( (*((_DWORD *)a4 + 1) + 1) | *(_DWORD *)a4 )
      {
        v16 = v15 + HIBYTE(v9);
        if ( (v11 & 0xF) == 4 )
        {
          v17 = v13 - v16;
          if ( (unsigned int)v13 < v16 )
            v17 = 0;
          if ( (unsigned int)v13 > v16 )
            v16 = *(_DWORD *)a4;
        }
        else if ( SHIDWORD(v13) <= v15 )
        {
          v17 = 0;
        }
        else
        {
          v17 = HIDWORD(v13) - v15;
          v16 = HIDWORD(v13) + HIBYTE(v9);
        }
        v78 = v17;
        v79 = v10;
        v80 = 32 - v14;
        v76 = v9;
        v77 = v16;
        return sub_DDD64(v7, a4);
      }
      v34 = v9 == 0;
      if ( v9 )
      {
        v5 = v9 & 0xFFFFFF;
        v34 = (v9 & 0xFFFFFF) == 0;
      }
      if ( !v34 )
      {
        do
        {
          v35 = *(_DWORD *)(v7 + 8);
          v36 = v35 + 1;
          if ( *(_DWORD *)(v7 + 12) < (unsigned int)(v35 + 1) )
          {
            (**(void (__fastcall ***)(int))v7)(v7);
            v35 = *(_DWORD *)(v7 + 8);
            v36 = v35 + 1;
          }
          v37 = *(_DWORD *)(v7 + 4);
          *(_DWORD *)(v7 + 8) = v36;
          *(_BYTE *)(v37 + v35) = v5;
          v5 >>= 8;
        }
        while ( v5 );
      }
      v38 = *(_QWORD *)(v7 + 8);
      if ( HIDWORD(v38) < (unsigned int)(v38 + v15)
        || (v39 = *(_DWORD *)(v7 + 4), *(_DWORD *)(v7 + 8) = v38 + v15, !v39) )
      {
        v51 = (char *)&v76 + v15;
        v52 = (char *)&v76 - v14 + 31;
        do
        {
          v34 = v10 >> 1 == 0;
          *v52-- = v10 & 1 | 0x30;
          v10 >>= 1;
        }
        while ( !v34 );
        return sub_DCF1C((int)&v76, (int)v51, v7);
      }
      v40 = (_BYTE *)(v38 - v14 + HIDWORD(v38) + 31);
      do
      {
        v34 = v10 >> 1 == 0;
        *v40-- = v10 & 1 | 0x30;
        v10 >>= 1;
      }
      while ( !v34 );
      return v7;
    case 15:
      LOBYTE(v76) = 0;
      BYTE1(v76) = a2;
      return sub_DDF34(a1, a4, 1, 1, &v76);
    default:
      fmt::v8::detail::throw_format_error((fmt::v8::detail *)"invalid type specifier", (const char *)a2);
  }
}


// ======================================================================
// ADDR: 0xde1cc
// SYMBOL: sub_DE1CC
int __fastcall sub_DE1CC(int a1, int a2, int a3, unsigned int a4, int a5)
{
  int v6; // r8
  bool v7; // cf
  unsigned int v8; // r3
  char v9; // r0
  int v10; // r5
  int result; // r0

  v6 = a2 + 11;
  v7 = *(_DWORD *)a2 >= a4;
  v8 = *(_DWORD *)a2 - a4;
  v9 = byte_91D40[*(_WORD *)(a2 + 9) & 0xF];
  if ( !v7 )
    v8 = 0;
  v10 = v8 - (v8 >> v9);
  if ( v8 >> v9 )
    a1 = sub_DD992(a1, v8 >> v9, v6);
  sub_DCF30(a1, *(char **)a5, (char *)(*(_DWORD *)a5 + *(_DWORD *)(a5 + 4)));
  result = a1;
  if ( v10 )
    return sub_DD992(a1, v10, v6);
  return result;
}


// ======================================================================
