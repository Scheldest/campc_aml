// ADDR: 0x6937c
// SYMBOL: sub_6937C
int __fastcall sub_6937C(int a1, int a2)
{
  int v3; // r0
  int v4; // r10
  int v5; // r5
  int v6; // r0
  int v7; // r0
  _DWORD *v8; // r5
  int v9; // r9
  int v10; // r0
  int v11; // r0
  int v13; // r0
  int v14; // r0
  _DWORD *v15; // r5
  int v16; // r9
  int v17; // r0

  v3 = sub_68E3C();
  if ( v3 )
  {
    v4 = v3;
    v5 = dword_1A459C;
    if ( !dword_1A459C )
    {
      v5 = operator new(0x14u);
      sub_7ACAC();
      dword_1A459C = v5;
    }
    if ( a2 )
    {
      v6 = sub_7ACB8(v5);
      v7 = sub_6C844(v6);
      v8 = *(_DWORD **)(v7 + 8);
      if ( !v8 )
      {
        v9 = v7;
        v8 = (_DWORD *)operator new(0x2F0u);
        *v8 = &off_11056C;
        ((void (__fastcall *)(_DWORD *))(dword_1A4408 + 1063817))(v8);
        *(_DWORD *)(v9 + 8) = v8;
      }
      v10 = ((int (__fastcall *)(_DWORD *, _DWORD))(dword_1A4408 + 1065501))(v8, 0);
    }
    else
    {
      v13 = sub_7B240(v5);
      v14 = sub_6C844(v13);
      v15 = *(_DWORD **)(v14 + 8);
      if ( !v15 )
      {
        v16 = v14;
        v15 = (_DWORD *)operator new(0x2F0u);
        *v15 = &off_11056C;
        ((void (__fastcall *)(_DWORD *))(dword_1A4408 + 1063817))(v15);
        *(_DWORD *)(v16 + 8) = v15;
      }
      v10 = ((int (__fastcall *)(_DWORD *, int))(dword_1A4408 + 1065501))(v15, 1);
    }
    v17 = sub_6C808(v10);
    sub_6C90C(*(_DWORD *)(v17 + 96), a2 ^ 1);
    return sub_69070(v4);
  }
  else
  {
    v11 = (unsigned __int8)byte_1A427C;
    __dmb(0xBu);
    if ( !(v11 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A427C) )
    {
      byte_1A427A = 90;
      word_1A4278 = 11316;
      dword_1A4274 = 1064973588;
      _cxa_atexit((void (*)(void *))sub_66E8E, &dword_1A4274, &off_110560);
      j___cxa_guard_release((__guard *)&byte_1A427C);
    }
    if ( byte_1A427A )
    {
      byte_1A427A ^= 0x5Au;
      LOBYTE(dword_1A4274) = dword_1A4274 ^ 0x5A;
      BYTE1(dword_1A4274) ^= 0x5Au;
      BYTE2(dword_1A4274) ^= 0x5Au;
      LOBYTE(word_1A4278) = word_1A4278 ^ 0x5A;
      HIBYTE(dword_1A4274) ^= 0x5Au;
      HIBYTE(word_1A4278) ^= 0x5Au;
    }
    return sub_10C158(4, "SAMP_ORIG", &dword_1A4274);
  }
}


// ======================================================================
// ADDR: 0x6c808
// SYMBOL: sub_6C808
int sub_6C808()
{
  if ( *(_DWORD *)(dword_1A4408 + 2350828) )
    return *(_DWORD *)(dword_1A4408 + 2350828);
  _android_log_print(4, "SAMP_ORIG", "UI pointer is null");
  return 0;
}


// ======================================================================
