// ADDR: 0x62c74
// SYMBOL: sub_62C74
int __fastcall sub_62C74(int a1, int a2)
{
  int v3; // r0
  int64x2_t v4; // q8
  int v5; // r0
  int v6; // r1
  int v7; // r11
  const char *v8; // r5
  int v9; // r1
  int64x2_t v10; // q8
  unsigned __int8 v11; // r10
  unsigned __int8 v12; // r4
  unsigned __int8 v13; // r9
  int v14; // r0
  int64x2_t v15; // q8
  int v18; // [sp+28h] [bp-298h] BYREF
  _BYTE v19[2]; // [sp+2Eh] [bp-292h] BYREF
  _QWORD v20[3]; // [sp+30h] [bp-290h] BYREF
  int v21; // [sp+48h] [bp-278h]
  __int64 v22; // [sp+4Ch] [bp-274h]
  __int64 v23; // [sp+54h] [bp-26Ch]
  _QWORD v24[3]; // [sp+148h] [bp-178h] BYREF
  _BYTE v25[11]; // [sp+160h] [bp-160h] BYREF
  __int64 v26; // [sp+16Bh] [bp-155h]
  _QWORD v27[3]; // [sp+260h] [bp-60h] BYREF
  int v28; // [sp+278h] [bp-48h]
  __int64 v29; // [sp+27Ch] [bp-44h]
  __int64 v30; // [sp+284h] [bp-3Ch]
  int v31; // [sp+28Ch] [bp-34h]

  v24[0] = unk_509F0;
  v24[1] = unk_509F8;
  v24[2] = unk_50A00;
  qmemcpy(v25, "54\t/99??>?>", sizeof(v25));
  v26 = unk_50A13;
  v3 = (unsigned __int8)byte_1A3B5C;
  __dmb(0xBu);
  if ( !(v3 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A3B5C) )
  {
    sub_66C94(&xmmword_1A3B30, v24);
    _cxa_atexit((void (*)(void *))sub_66D6E, &xmmword_1A3B30, &off_110560);
    j___cxa_guard_release((__guard *)&byte_1A3B5C);
  }
  if ( byte_1A3B5A )
  {
    v4.n128_u64[0] = 0x5A5A5A5A5A5A5A5ALL;
    v4.n128_u64[1] = 0x5A5A5A5A5A5A5A5ALL;
    byte_1A3B53 ^= 0x5Au;
    xmmword_1A3B30 = (__int128)veorq_s64((int64x2_t)xmmword_1A3B30, v4);
    byte_1A3B54 ^= 0x5Au;
    byte_1A3B55 ^= 0x5Au;
    byte_1A3B56 ^= 0x5Au;
    byte_1A3B52 ^= 0x5Au;
    xmmword_1A3B40 = (__int128)veorq_s64((int64x2_t)xmmword_1A3B40, v4);
    byte_1A3B51 ^= 0x5Au;
    byte_1A3B57 ^= 0x5Au;
    byte_1A3B58 ^= 0x5Au;
    byte_1A3B50 ^= 0x5Au;
    byte_1A3B59 ^= 0x5Au;
    byte_1A3B5A ^= 0x5Au;
  }
  _android_log_print(4, "SAMP_ORIG", (const char *)&xmmword_1A3B30);
  v5 = sub_86BA8((int)v24, *(void **)(a2 + 20), *(_DWORD *)(a2 + 12));
  sub_8713E(v5, 8);
  sub_8713E(v24, 32);
  sub_8713E(v24, 16);
  sub_86E30((int)v24, (int)v19);
  sub_86E30((int)v24, (int)&v18);
  sub_6C73C("Connected. Joining the game...", v6);
  v7 = v18;
  v20[0] = unk_50A20;
  v20[1] = unk_50A28;
  v20[2] = unk_50A30;
  v21 = 510226275;
  v8 = "0.3.7-R4";
  v22 = unk_50A3C;
  v23 = unk_50A44;
  v9 = (unsigned __int8)byte_1A3B8C;
  if ( dword_1A447C != 1 )
    v8 = "0.3.7";
  __dmb(0xBu);
  if ( !(v9 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A3B8C) )
  {
    sub_66D84(&xmmword_1A3B60, v20);
    _cxa_atexit((void (*)(void *))sub_66E66, &xmmword_1A3B60, &off_110560);
    j___cxa_guard_release((__guard *)&byte_1A3B8C);
  }
  if ( byte_1A3B8B )
  {
    v10.n128_u64[0] = 0x5A5A5A5A5A5A5A5ALL;
    v10.n128_u64[1] = 0x5A5A5A5A5A5A5A5ALL;
    byte_1A3B83 ^= 0x5Au;
    xmmword_1A3B60 = (__int128)veorq_s64((int64x2_t)xmmword_1A3B60, v10);
    byte_1A3B84 ^= 0x5Au;
    byte_1A3B85 ^= 0x5Au;
    byte_1A3B86 ^= 0x5Au;
    byte_1A3B82 ^= 0x5Au;
    xmmword_1A3B70 = (__int128)veorq_s64((int64x2_t)xmmword_1A3B70, v10);
    byte_1A3B81 ^= 0x5Au;
    byte_1A3B87 ^= 0x5Au;
    byte_1A3B88 ^= 0x5Au;
    byte_1A3B80 ^= 0x5Au;
    byte_1A3B89 ^= 0x5Au;
    byte_1A3B8A ^= 0x5Au;
    byte_1A3B8B ^= 0x5Au;
  }
  v11 = _strlen_chk((const char *)&xmmword_1A3B60, 0x2Cu);
  v12 = _strlen_chk(aSampPlayer, 0xFFFFFFFF);
  v13 = _strlen_chk(v8, 9u);
  *(_DWORD *)(a1 + 536) = 6;
  sub_86B90(v20);
  LODWORD(v27[0]) = 4057;
  sub_86D52(v20, v27, 32, 1);
  LOBYTE(v27[0]) = 1;
  sub_86D52(v20, v27, 8, 1);
  LOBYTE(v27[0]) = v12;
  sub_86D52(v20, v27, 8, 1);
  sub_86C1C(v20, aSampPlayer, v12);
  LODWORD(v27[0]) = v7 ^ 0xFD9;
  sub_86D52(v20, v27, 32, 1);
  LOBYTE(v27[0]) = v11;
  sub_86D52(v20, v27, 8, 1);
  v27[0] = unk_50A20;
  v27[1] = unk_50A28;
  v27[2] = unk_50A30;
  v28 = 510226275;
  v29 = unk_50A3C;
  v30 = unk_50A44;
  v14 = (unsigned __int8)byte_1A3BBC;
  __dmb(0xBu);
  if ( !(v14 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A3BBC) )
  {
    sub_66D84(&xmmword_1A3B90, v27);
    _cxa_atexit((void (*)(void *))sub_66E66, &xmmword_1A3B90, &off_110560);
    j___cxa_guard_release((__guard *)&byte_1A3BBC);
  }
  if ( byte_1A3BBB )
  {
    v15.n128_u64[0] = 0x5A5A5A5A5A5A5A5ALL;
    v15.n128_u64[1] = 0x5A5A5A5A5A5A5A5ALL;
    byte_1A3BB3 ^= 0x5Au;
    xmmword_1A3B90 = (__int128)veorq_s64((int64x2_t)xmmword_1A3B90, v15);
    byte_1A3BB4 ^= 0x5Au;
    byte_1A3BB5 ^= 0x5Au;
    byte_1A3BB6 ^= 0x5Au;
    byte_1A3BB2 ^= 0x5Au;
    xmmword_1A3BA0 = (__int128)veorq_s64((int64x2_t)xmmword_1A3BA0, v15);
    byte_1A3BB1 ^= 0x5Au;
    byte_1A3BB7 ^= 0x5Au;
    byte_1A3BB8 ^= 0x5Au;
    byte_1A3BB0 ^= 0x5Au;
    byte_1A3BB9 ^= 0x5Au;
    byte_1A3BBA ^= 0x5Au;
    byte_1A3BBB ^= 0x5Au;
  }
  sub_86C1C(v20, &xmmword_1A3B90, v11);
  LOBYTE(v27[0]) = v13;
  sub_86D52(v20, v27, 8, 1);
  sub_86C1C(v20, v8, v13);
  if ( byte_1A4484 )
    sub_7EFE8(dword_116E1C, v20);
  (*(void (__fastcall **)(_DWORD, int *, _QWORD *, int, int, _DWORD, _DWORD, int, int, int, _DWORD))(**(_DWORD **)(a1 + 528) + 108))(
    *(_DWORD *)(a1 + 528),
    &dword_116E1C,
    v20,
    1,
    8,
    0,
    0,
    -1,
    0xFFFF,
    0xFFFF,
    0);
  sub_86BF8(v20);
  sub_86BF8(v24);
  return v31;
}


// ======================================================================
// ADDR: 0x7f0cc
// SYMBOL: sub_7F0CC
int __fastcall sub_7F0CC(int a1)
{
  unsigned int v2; // r6
  unsigned __int8 *v3; // r4
  int v4; // r1
  _WORD *v5; // r5
  signed int v6; // r6
  char *v7; // r1
  int v8; // r0
  const char *v9; // r0
  in_addr_t v10; // r0
  unsigned int v11; // r2
  int v12; // r2
  _DWORD *v13; // r0
  int v15; // r5
  int v16; // r6
  unsigned __int8 *v17; // r4
  int v18; // r0
  int *v19; // r8
  int v20; // r0
  int v21; // r9
  void *v22; // r4
  int v23; // r1
  int v24; // r3
  int v25; // r2
  void *v26; // r0
  int v27; // [sp+0h] [bp-30h] BYREF
  sockaddr addr; // [sp+4h] [bp-2Ch] BYREF

  if ( !byte_1A49B2 )
  {
    sub_80664("[sv:dbg:network:receive] : packet received.");
    byte_1A49B2 = 1;
  }
  if ( !byte_1A45F3 )
  {
    sub_80664("[sv:err:network:receive] : network not initialized.");
    return 1;
  }
  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 <= 4 )
  {
    sub_80664("[sv:err:network:receive] : invalid packet length (%u).", *(_DWORD *)(a1 + 12));
    return 1;
  }
  v3 = *(unsigned __int8 **)(a1 + 20);
  v4 = *v3;
  if ( v4 != 222 )
  {
    sub_80664("[sv:err:network:receive] : invalid packet id (%hhu).", v4);
    return 1;
  }
  v5 = v3 + 1;
  v6 = v2 - 1;
  if ( v6 == sub_7DD90((int)(v3 + 1)) )
  {
    if ( *v5 == 1 )
    {
      if ( *(_WORD *)(v3 + 3) == 5 )
      {
        sub_80664("[sv:dbg:network:pluginInit] : plugin init packet (bitrate:%u;mute:%hhu)", *(_DWORD *)(v3 + 5), v3[9]);
        v16 = dword_1A499C;
        v15 = dword_1A4998;
        if ( dword_1A4998 != dword_1A499C )
        {
          v17 = v3 + 5;
          do
          {
            v18 = *(_DWORD *)(v15 + 16);
            if ( v18 )
              (*(void (__fastcall **)(int, unsigned __int8 *))(*(_DWORD *)v18 + 24))(v18, v17);
            v15 += 24;
          }
          while ( v15 != v16 );
        }
        dword_1A45F4 = 3;
      }
    }
    else if ( *v5 )
    {
      v19 = (int *)operator new(0xCu);
      *v19 = 0;
      v19[1] = 0;
      v19[2] = 0;
      if ( v6 <= -1 )
        std::__vector_base_common<true>::__throw_length_error(v19);
      v20 = operator new(v6);
      v21 = v20 + v6;
      v22 = (void *)v20;
      v19[2] = v20 + v6;
      *v19 = v20;
      sub_10967C(v20, v6);
      v19[1] = v21;
      j_memcpy(v22, v5, v6);
      v23 = dword_1A4700;
      v24 = dword_1A4780;
      v25 = dword_1A4700 + 1 - dword_1A4680;
      if ( dword_1A4700 + 1 != dword_1A4680 )
        v25 = dword_1A4700 + 1;
      __dmb(0xBu);
      if ( v25 == v24 )
      {
        v26 = (void *)*v19;
        if ( *v19 )
        {
          v19[1] = (int)v26;
          operator delete(v26);
        }
        operator delete(v19);
      }
      else
      {
        *(_DWORD *)(dword_1A4684 + 4 * v23 + 128) = v19;
        __dmb(0xBu);
        dword_1A4700 = v25;
      }
    }
    else if ( *(_WORD *)(v3 + 3) == 6 )
    {
      v7 = (char *)dword_1A4608;
      if ( !((unsigned __int8)dword_1A4600 << 31) )
        v7 = (char *)&dword_1A4600 + 1;
      sub_80664(
        "[sv:dbg:network:serverInfo] : connecting to voiceserver '%s:%hu'...",
        v7,
        *(unsigned __int16 *)(v3 + 9),
        (unsigned __int8)dword_1A4600 << 31);
      byte_1A49B0 = 1;
      v8 = sub_7E42C();
      sub_83B30(v8);
      *(_DWORD *)&addr.sa_data[6] = 0;
      *(_DWORD *)&addr.sa_data[10] = 0;
      v9 = (const char *)dword_1A4608;
      addr.sa_family = 2;
      if ( !((unsigned __int8)dword_1A4600 << 31) )
        v9 = (char *)&dword_1A4600 + 1;
      v10 = inet_addr(v9);
      v11 = *(unsigned __int16 *)(v3 + 9);
      *(_DWORD *)&addr.sa_data[2] = v10;
      *(_WORD *)addr.sa_data = bswap32(v11) >> 16;
      if ( connect(dword_116E00, &addr, 16) == -1 )
      {
        sub_80664("[sv:err:network:serverInfo] : connect error.");
      }
      else
      {
        v13 = (_DWORD *)dword_1A461C;
        dword_1A460C = *(_DWORD *)(v3 + 5);
        v12 = dword_1A460C;
        *(_DWORD *)(dword_1A461C + 16) = 0;
        v13[3] = 0;
        v13[2] = 1;
        v13[1] = v12;
        v13[5] = 0;
        sub_8613E();
        dword_1A45F4 = 2;
        sub_7F3A4(&v27, sub_7ED6C);
        if ( dword_1A45F8 )
          std::terminate();
        dword_1A45F8 = v27;
        v27 = 0;
        std::thread::~thread((std::thread *)&v27);
      }
    }
  }
  else
  {
    sub_80664("[sv:err:network:receive] : invalid packet size (%u).", v6);
  }
  return 0;
}


// ======================================================================
