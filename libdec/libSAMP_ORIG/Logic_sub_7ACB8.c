// ADDR: 0x69554
// SYMBOL: sub_69554
int __fastcall sub_69554(int a1, const char *a2)
{
  int v3; // r0
  int v4; // r6
  int v5; // r0
  size_t v6; // r0
  int v7; // r8
  size_t v8; // r0
  int v10; // r0

  v3 = sub_68E3C();
  if ( v3 )
  {
    v4 = v3;
    v5 = (*(int (__fastcall **)(int, const char *))(*(_DWORD *)v3 + 24))(v3, "java/lang/String");
    (*(void (__fastcall **)(int, int, const char *, const char *))(*(_DWORD *)v4 + 132))(
      v4,
      v5,
      "<init>",
      "([BLjava/lang/String;)V");
    (*(void (__fastcall **)(int, const char *))(*(_DWORD *)v4 + 668))(v4, "UTF-8");
    v6 = strlen(a2);
    v7 = (*(int (__fastcall **)(int, size_t))(*(_DWORD *)v4 + 704))(v4, v6);
    v8 = strlen(a2);
    (*(void (__fastcall **)(int, int, _DWORD, size_t, const char *))(*(_DWORD *)v4 + 832))(v4, v7, 0, v8, a2);
    sub_6918C(v4);
    return sub_69070(v4);
  }
  else
  {
    v10 = (unsigned __int8)byte_1A4288;
    __dmb(0xBu);
    if ( !(v10 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A4288) )
    {
      byte_1A4286 = 90;
      word_1A4284 = 11316;
      dword_1A4280 = 1064973588;
      _cxa_atexit((void (*)(void *))sub_66E8E, &dword_1A4280, &off_110560);
      j___cxa_guard_release((__guard *)&byte_1A4288);
    }
    if ( byte_1A4286 )
    {
      byte_1A4286 ^= 0x5Au;
      LOBYTE(dword_1A4280) = dword_1A4280 ^ 0x5A;
      BYTE1(dword_1A4280) ^= 0x5Au;
      BYTE2(dword_1A4280) ^= 0x5Au;
      LOBYTE(word_1A4284) = word_1A4284 ^ 0x5A;
      HIBYTE(dword_1A4280) ^= 0x5Au;
      HIBYTE(word_1A4284) ^= 0x5Au;
    }
    return sub_10C158(4, "SAMP_ORIG", &dword_1A4280);
  }
}


// ======================================================================
// ADDR: 0x696c8
// SYMBOL: sub_696C8
int __fastcall sub_696C8(int a1, int a2, const char *a3, int a4, int a5, const char *a6)
{
  int v7; // r0
  int v8; // r4
  int v9; // r0
  size_t v10; // r0
  int v11; // r5
  size_t v12; // r0
  int v13; // r9
  size_t v14; // r0
  int v15; // r6
  size_t v16; // r0
  int v18; // r0
  int v19; // [sp+Ch] [bp-3Ch]

  v7 = sub_68E3C();
  if ( v7 )
  {
    v8 = v7;
    v9 = (*(int (__fastcall **)(int, const char *))(*(_DWORD *)v8 + 24))(v8, "java/lang/String");
    (*(void (__fastcall **)(int, int, const char *, const char *))(*(_DWORD *)v8 + 132))(
      v8,
      v9,
      "<init>",
      "([BLjava/lang/String;)V");
    (*(void (__fastcall **)(int, const char *))(*(_DWORD *)v8 + 668))(v8, "UTF-8");
    v10 = strlen(a3);
    v11 = (*(int (__fastcall **)(int, size_t))(*(_DWORD *)v8 + 704))(v8, v10);
    v12 = strlen(a3);
    (*(void (__fastcall **)(int, int, _DWORD, size_t, const char *))(*(_DWORD *)v8 + 832))(v8, v11, 0, v12, a3);
    v13 = sub_6918C(v8);
    v14 = strlen(a6);
    v15 = (*(int (__fastcall **)(int, size_t))(*(_DWORD *)v8 + 704))(v8, v14);
    v16 = strlen(a6);
    (*(void (__fastcall **)(int, int, _DWORD, size_t, const char *))(*(_DWORD *)v8 + 832))(v8, v15, 0, v16, a6);
    v19 = sub_6918C(v8);
    sub_69070(v8);
    (*(void (__fastcall **)(int, int))(*(_DWORD *)v8 + 92))(v8, v13);
    return (*(int (__fastcall **)(int, int))(*(_DWORD *)v8 + 92))(v8, v19);
  }
  else
  {
    v18 = (unsigned __int8)byte_1A4294;
    __dmb(0xBu);
    if ( !(v18 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A4294) )
    {
      byte_1A4292 = 90;
      word_1A4290 = 11316;
      dword_1A428C = 1064973588;
      _cxa_atexit((void (*)(void *))sub_66E8E, &dword_1A428C, &off_110560);
      j___cxa_guard_release((__guard *)&byte_1A4294);
    }
    if ( byte_1A4292 )
    {
      byte_1A4292 ^= 0x5Au;
      LOBYTE(dword_1A428C) = dword_1A428C ^ 0x5A;
      BYTE1(dword_1A428C) ^= 0x5Au;
      BYTE2(dword_1A428C) ^= 0x5Au;
      LOBYTE(word_1A4290) = word_1A4290 ^ 0x5A;
      HIBYTE(dword_1A428C) ^= 0x5Au;
      HIBYTE(word_1A4290) ^= 0x5Au;
    }
    return sub_10C158(4, "SAMP_ORIG", &dword_1A428C);
  }
}


// ======================================================================
// ADDR: 0x698b0
// SYMBOL: sub_698B0
int sub_698B0()
{
  int v0; // r0
  int v2; // r0

  v0 = sub_68E3C();
  if ( v0 )
    return sub_69070(v0);
  v2 = (unsigned __int8)byte_1A42A0;
  __dmb(0xBu);
  if ( !(v2 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A42A0) )
  {
    byte_1A429E = 90;
    word_1A429C = 11316;
    dword_1A4298 = 1064973588;
    _cxa_atexit((void (*)(void *))sub_66E8E, &dword_1A4298, &off_110560);
    j___cxa_guard_release((__guard *)&byte_1A42A0);
  }
  if ( byte_1A429E )
  {
    byte_1A429E ^= 0x5Au;
    LOBYTE(dword_1A4298) = dword_1A4298 ^ 0x5A;
    BYTE1(dword_1A4298) ^= 0x5Au;
    BYTE2(dword_1A4298) ^= 0x5Au;
    LOBYTE(word_1A429C) = word_1A429C ^ 0x5A;
    HIBYTE(dword_1A4298) ^= 0x5Au;
    HIBYTE(word_1A429C) ^= 0x5Au;
  }
  return sub_10C158(4, "SAMP_ORIG", &dword_1A4298);
}


// ======================================================================
// ADDR: 0x7ada8
// SYMBOL: sub_7ADA8
int __fastcall sub_7ADA8(int *a1)
{
  int v2; // r4
  uint16x8_t v3; // q8
  int v4; // r1
  int v5; // r0
  uint8x8_t *v6; // r1
  unsigned __int64 v7; // d16
  __int16 v8; // r12
  __int16 v9; // r6
  __int16 v10; // r4
  __int16 v11; // lr
  int v12; // r0
  void **v13; // r10
  _DWORD *v14; // r4
  int v15; // r0
  int v16; // r5
  int v17; // r1
  int v18; // r6
  unsigned int v19; // r0
  __int64 v20; // r0
  void *v21; // r9
  signed int v22; // r5
  unsigned int v23; // r6
  unsigned int v24; // r0
  char *v25; // r8
  char *v26; // r10
  char *v27; // r6
  _DWORD *v28; // r6
  int v29; // r10
  int v30; // r2
  int v31; // r0
  int v32; // r4
  int v33; // r2
  int v34; // r0
  int v35; // r6
  int v36; // r1
  int v37; // r9
  _DWORD *v38; // r0
  bool v39; // zf
  int v40; // r6
  __int64 v41; // kr08_8
  void *v42; // r2
  signed int v43; // r5
  unsigned int v44; // r11
  int v45; // r0
  void *v46; // r8
  char *v47; // r0
  char *v48; // r8
  _DWORD *v49; // r8
  void *v50; // r6
  _DWORD *v51; // r0
  int v52; // r1
  int v53; // r1
  char *v55; // [sp+4h] [bp-64h]
  int v56; // [sp+Ch] [bp-5Ch]
  int *v57; // [sp+14h] [bp-54h]
  unsigned __int8 *v58; // [sp+18h] [bp-50h]
  void **v59; // [sp+1Ch] [bp-4Ch]
  int v60; // [sp+20h] [bp-48h]
  struct timeval tv; // [sp+24h] [bp-44h] BYREF
  float v62; // [sp+2Ch] [bp-3Ch]
  int v63; // [sp+30h] [bp-38h]
  int v64; // [sp+34h] [bp-34h]

  gettimeofday(&tv, 0);
  if ( (unsigned int)(tv.tv_usec / 1000 + 1000 * tv.tv_sec - a1[1]) >= 0x7D0 && *(_DWORD *)(dword_1A4408 + 2350836) )
  {
    v2 = 0;
    gettimeofday(&tv, 0);
    v3 = 0uLL;
    v4 = **(_DWORD **)(dword_1A4434 + 944);
    a1[1] = tv.tv_usec / 1000 + 1000 * tv.tv_sec;
    v58 = (unsigned __int8 *)(v4 + 5020);
    v5 = v4 + 4020;
    v56 = v4;
    do
    {
      v6 = (uint8x8_t *)(v5 + v2);
      v2 += 8;
      v3 = vaddw_u8(v3, (uint8x8_t)v6->n64_u64[0]);
    }
    while ( v2 != 1000 );
    v7 = vadd_s16((int16x4_t)v3.n128_u64[0], *(int16x4_t *)&v3.n128_i8[8]).n64_u64[0];
    v8 = *v58;
    v9 = v58[1];
    v10 = v58[2];
    v11 = v58[3];
    v12 = *a1;
    if ( *a1 <= (unsigned __int16)(WORD1(v7) + v7 + WORD2(v7) + HIWORD(v7) + v8 + v9 + v10 + v11) - 19 )
    {
      if ( v12 > -1 )
        goto LABEL_9;
    }
    else
    {
      v12 = (unsigned __int16)(WORD1(v7) + v7 + WORD2(v7) + HIWORD(v7) + v8 + v9 + v10 + v11) - 19;
    }
    *a1 = v12 & ~(v12 >> 31);
LABEL_9:
    v13 = (void **)(a1 + 2);
    a1[3] = a1[2];
    sub_698B0();
    v14 = (_DWORD *)operator new(0x18u);
    v14[4] = 0;
    v14[5] = 0;
    v15 = dword_1A4434;
    v16 = v56;
    v17 = *((_DWORD *)v58 + 9);
    v18 = *((unsigned __int16 *)v58 + 2);
    v14[2] = *((_DWORD *)v58 + 10);
    v14[3] = v17;
    *v14 = v18;
    v14[1] = v56 + 5026;
    v19 = ((int (__fastcall *)(_DWORD))((char *)&unk_1413FD + dword_1A4408))(*(_DWORD *)(**(_DWORD **)(v15 + 944) + 5052));
    v63 = 1065353216;
    v62 = (float)BYTE1(v19) * 0.0039216;
    *(float *)&tv.tv_usec = (float)BYTE2(v19) * 0.0039216;
    *(float *)&tv.tv_sec = (float)HIBYTE(v19) * 0.0039216;
    v14[4] = sub_88A34(&tv, BYTE1(v19), BYTE2(v19));
    v20 = *(_QWORD *)(a1 + 3);
    v59 = (void **)(a1 + 2);
    if ( (_DWORD)v20 == HIDWORD(v20) )
    {
      v21 = *v13;
      v22 = v20 - (_DWORD)*v13;
      v23 = (v22 >> 2) + 1;
      if ( v23 >= 0x40000000 )
        std::__vector_base_common<true>::__throw_length_error(a1 + 2);
      LOWORD(v24) = -4;
      if ( v23 <= v22 >> 1 )
        v23 = v22 >> 1;
      HIWORD(v24) = 0x7FFF;
      if ( v22 >= v24 )
        v23 = 0x3FFFFFFF;
      if ( v23 )
      {
        if ( v23 >= 0x40000000 )
LABEL_53:
          sub_7B270("allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
        v25 = (char *)operator new(4 * v23);
      }
      else
      {
        v25 = 0;
      }
      v26 = &v25[4 * v23];
      v27 = &v25[4 * (v22 >> 2)];
      *(_DWORD *)v27 = v14;
      v28 = v27 + 4;
      if ( v22 >= 1 )
        j_memcpy(v25, v21, v22);
      a1[2] = (int)v25;
      a1[3] = (int)v28;
      a1[4] = (int)v26;
      v16 = v56;
      if ( v21 )
        operator delete(v21);
    }
    else
    {
      *(_DWORD *)v20 = v14;
      a1[3] = v20 + 4;
    }
    v29 = 0;
    v57 = a1;
    v60 = 1;
    do
    {
      if ( *(_BYTE *)(v16 + v29 + 4020) )
      {
        v37 = v16 + 4 * v29;
        v38 = *(_DWORD **)(v37 + 4);
        v39 = v38 == 0;
        if ( v38 )
          v39 = *v38 == 0;
        if ( !v39 && !((int (__fastcall *)(int, _DWORD))(dword_1A4408 + 1347259))(v16, (unsigned __int16)v29) )
        {
          v40 = operator new(0x18u);
          v41 = *(_QWORD *)(a1 + 3);
          *(_QWORD *)v40 = 0LL;
          *(_QWORD *)(v40 + 8) = 0LL;
          *(_DWORD *)(v40 + 20) = 0;
          *(_DWORD *)(v40 + 16) = 0;
          if ( (unsigned int)v41 >= HIDWORD(v41) )
          {
            v42 = *v59;
            v43 = v41 - (_DWORD)*v59;
            v44 = (v43 >> 2) + 1;
            if ( v44 >= 0x40000000 )
              std::__vector_base_common<true>::__throw_length_error(v59);
            v45 = HIDWORD(v41) - (_DWORD)v42;
            if ( v44 <= (HIDWORD(v41) - (int)v42) >> 1 )
              v44 = v45 >> 1;
            if ( (unsigned int)v45 >= 0x7FFFFFFC )
              v44 = 0x3FFFFFFF;
            if ( v44 )
            {
              if ( v44 >= 0x40000000 )
                goto LABEL_53;
              v46 = *v59;
              v47 = (char *)operator new(4 * v44);
              v42 = v46;
            }
            else
            {
              v47 = 0;
            }
            v48 = &v47[4 * (v43 >> 2)];
            *(_DWORD *)v48 = v40;
            v49 = v48 + 4;
            if ( v43 >= 1 )
            {
              v50 = v42;
              v55 = v47;
              j_memcpy(v47, v42, v43);
              v47 = v55;
              v42 = v50;
            }
            v57[2] = (int)v47;
            v57[3] = (int)v49;
            v57[4] = (int)&v47[4 * v44];
            v16 = v56;
            if ( v42 )
              operator delete(v42);
          }
          else
          {
            *(_DWORD *)v41 = v40;
            a1[3] = v41 + 4;
          }
          v51 = (_DWORD *)*((_DWORD *)*v59 + v60);
          v52 = *((unsigned __int16 *)v58 + 2);
          *v51 = v29;
          v39 = v52 == (unsigned __int16)v29;
          v53 = v56 + 5026;
          if ( !v39 )
          {
            v53 = *(_DWORD *)(v37 + 4);
            if ( v53 )
              v53 += 4;
          }
          v30 = dword_1A4408;
          v51[1] = v53;
          v31 = ((int (__fastcall *)(int, _DWORD))(v30 + 1347215))(v16, (unsigned __int16)v29);
          v32 = v60;
          v33 = dword_1A4408;
          *(_DWORD *)(*((_DWORD *)*v59 + v60) + 8) = v31;
          v34 = ((int (__fastcall *)(int, _DWORD))(v33 + 1347237))(v16, (unsigned __int16)v29);
          v35 = dword_1A4408;
          v36 = **(_DWORD **)(v37 + 4);
          *(_DWORD *)(*((_DWORD *)*v59 + v60) + 12) = v34;
          a1 = v57;
          ++v60;
          *(_DWORD *)(*((_DWORD *)*v59 + v32) + 16) = ((unsigned int)((int (__fastcall *)(int))(v35 + 1352707))(v36) >> 8)
                                                    - 0x1000000;
        }
      }
      ++v29;
    }
    while ( v29 != 1004 );
  }
  return v64;
}


// ======================================================================
// ADDR: 0x7b1ec
// SYMBOL: sub_7B1EC
int sub_7B1EC(int a1, int a2, int a3, ...)
{
  int v4; // [sp+8h] [bp-Ch]
  int v5; // [sp+8h] [bp-Ch]
  va_list va; // [sp+1Ch] [bp+8h] BYREF

  va_start(va, a3);
  _vsprintf_chk(a1, 0, 8, "#%02X%02X%02X", va, va, v4);
  return v5;
}


// ======================================================================
