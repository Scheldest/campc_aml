// ADDR: 0x69e44
// SYMBOL: Java_com_sampmobilerp_game_ui_UI_sendDialogResponse
int __fastcall Java_com_sampmobilerp_game_ui_UI_sendDialogResponse(
        int a1,
        int a2,
        unsigned __int16 a3,
        unsigned __int8 a4,
        unsigned __int16 a5,
        int a6)
{
  int v9; // r0
  int v10; // r10
  int64x2_t v11; // q8
  int (__fastcall *v12)(int, int, char *); // r3
  const void *v13; // r11
  unsigned int v14; // r0
  size_t v15; // r5
  char *v16; // r6
  char *s; // r2
  _DWORD v19[2]; // [sp+8h] [bp-30h] BYREF
  void *v20; // [sp+10h] [bp-28h]
  char v21; // [sp+17h] [bp-21h] BYREF
  int v22; // [sp+18h] [bp-20h]

  v9 = (unsigned __int8)byte_1A4334;
  __dmb(0xBu);
  if ( !(v9 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A4334) )
  {
    xmmword_1A4300 = xmmword_50E18;
    xmmword_1A4310 = xmmword_50E28;
    xmmword_1A4320 = xmmword_50E38;
    dword_1A4330 = 1514088756;
    _cxa_atexit((void (*)(void *))sub_67142, &xmmword_1A4300, &off_110560);
    j___cxa_guard_release((__guard *)&byte_1A4334);
  }
  v10 = a6;
  if ( HIBYTE(dword_1A4330) )
  {
    v11.n128_u64[0] = 0x5A5A5A5A5A5A5A5ALL;
    v11.n128_u64[1] = 0x5A5A5A5A5A5A5A5ALL;
    xmmword_1A4300 = (__int128)veorq_s64((int64x2_t)xmmword_1A4300, v11);
    xmmword_1A4310 = (__int128)veorq_s64((int64x2_t)xmmword_1A4310, v11);
    HIBYTE(dword_1A4330) ^= 0x5Au;
    xmmword_1A4320 = (__int128)veorq_s64((int64x2_t)xmmword_1A4320, v11);
    BYTE2(dword_1A4330) ^= 0x5Au;
    BYTE1(dword_1A4330) ^= 0x5Au;
    LOBYTE(dword_1A4330) = dword_1A4330 ^ 0x5A;
  }
  _android_log_print(4, "SAMP_ORIG", (const char *)&xmmword_1A4300);
  v12 = *(int (__fastcall **)(int, int, char *))(*(_DWORD *)a1 + 736);
  v21 = 1;
  v13 = (const void *)v12(a1, a6, &v21);
  v14 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 684))(a1, a6);
  if ( v14 >= 0xFFFFFFF0 )
    std::__basic_string_common<true>::__throw_length_error(v19);
  v15 = v14;
  if ( v14 >= 0xB )
  {
    v16 = (char *)operator new((v14 + 16) & 0xFFFFFFF0);
    v19[1] = v15;
    v20 = v16;
    v10 = a6;
    v19[0] = ((v15 + 16) & 0xFFFFFFF0) + 1;
    goto LABEL_9;
  }
  LOBYTE(v19[0]) = 2 * v14;
  v16 = (char *)v19 + 1;
  if ( v14 )
LABEL_9:
    j_memcpy(v16, v13, v15);
  v16[v15] = 0;
  if ( *(_DWORD *)(dword_1A4408 + 2350836) )
  {
    s = (char *)v20;
    if ( !(LOBYTE(v19[0]) << 31) )
      s = (char *)v19 + 1;
    sub_6A05C(dword_1A4434, a3, a4, a5, s);
  }
  (*(void (__fastcall **)(int, int, const void *, int))(*(_DWORD *)a1 + 768))(a1, v10, v13, 2);
  if ( LOBYTE(v19[0]) << 31 )
    operator delete(v20);
  return v22;
}


// ======================================================================
// ADDR: 0x6a160
// SYMBOL: Java_com_sampmobilerp_game_ui_UI_sendScoreboardClick
int __fastcall Java_com_sampmobilerp_game_ui_UI_sendScoreboardClick(int a1, int a2, int a3)
{
  int v4; // r0
  int64x2_t v5; // q8
  int v6; // r0
  int v8; // [sp+1Ch] [bp-12Ch] BYREF
  _BYTE v9[276]; // [sp+20h] [bp-128h] BYREF
  int v10; // [sp+134h] [bp-14h]

  v4 = (unsigned __int8)byte_1A437C;
  __dmb(0xBu);
  if ( !(v4 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A437C) )
  {
    xmmword_1A4340 = xmmword_50E50;
    xmmword_1A4350 = xmmword_50E60;
    xmmword_1A4360 = xmmword_50E70;
    *(_QWORD *)((char *)&xmmword_1A4360 + 9) = 0x36193E283B35383FLL;
    *(_QWORD *)&byte_1A4371 = unk_50E81;
    _cxa_atexit((void (*)(void *))sub_6AE0E, &xmmword_1A4340, &off_110560);
    j___cxa_guard_release((__guard *)&byte_1A437C);
  }
  if ( byte_1A4378 )
  {
    v5.n128_u64[0] = 0x5A5A5A5A5A5A5A5ALL;
    v5.n128_u64[1] = 0x5A5A5A5A5A5A5A5ALL;
    xmmword_1A4340 = (__int128)veorq_s64((int64x2_t)xmmword_1A4340, v5);
    byte_1A4375 ^= 0x5Au;
    xmmword_1A4350 = (__int128)veorq_s64((int64x2_t)xmmword_1A4350, v5);
    byte_1A4374 ^= 0x5Au;
    xmmword_1A4360 = (__int128)veorq_s64((int64x2_t)xmmword_1A4360, v5);
    byte_1A4373 ^= 0x5Au;
    byte_1A4372 ^= 0x5Au;
    byte_1A4371 ^= 0x5Au;
    byte_1A4376 ^= 0x5Au;
    byte_1A4377 ^= 0x5Au;
    byte_1A4378 ^= 0x5Au;
    byte_1A4370 ^= 0x5Au;
  }
  _android_log_print(4, "SAMP_ORIG", (const char *)&xmmword_1A4340, a3);
  v6 = sub_86B90(v9);
  v8 = a3;
  sub_86D52(v6, &v8, 32, 1);
  v8 = 0;
  sub_86D52(v9, &v8, 32, 1);
  (*(void (__fastcall **)(_DWORD, void *, _BYTE *, int, int, _DWORD, _DWORD, int, int, int, _DWORD))(**(_DWORD **)(dword_1A4434 + 528) + 108))(
    *(_DWORD *)(dword_1A4434 + 528),
    &unk_116E2C,
    v9,
    1,
    9,
    0,
    0,
    -1,
    0xFFFF,
    0xFFFF,
    0);
  sub_6937C(dword_1A41D8, 0);
  dword_1A44CC = 0;
  sub_86BF8(v9);
  return v10;
}


// ======================================================================
// ADDR: 0x6a360
// SYMBOL: Java_com_sampmobilerp_game_ui_UI_keyboardSend
int Java_com_sampmobilerp_game_ui_UI_keyboardSend()
{
  int v0; // r0
  int64x2_t v1; // q8

  v0 = (unsigned __int8)byte_1A43B0;
  __dmb(0xBu);
  if ( !(v0 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A43B0) )
  {
    qmemcpy(&dword_1A43A4, "85;(>\t?4>Z", 10);
    *(_QWORD *)&xmmword_1A4380 = 0x373539053B2C3B10LL;
    *((_QWORD *)&xmmword_1A4380 + 1) = 0x3835372A373B2905LL;
    *(_QWORD *)&xmmword_1A4390 = 0x332F052A283F3633LL;
    *((_QWORD *)&xmmword_1A4390 + 1) = 0xA171B0905130F05LL;
    dword_1A43A0 = 591343877;
    _cxa_atexit((void (*)(void *))sub_6AE28, &xmmword_1A4380, &off_110560);
    j___cxa_guard_release((__guard *)&byte_1A43B0);
  }
  if ( HIBYTE(word_1A43AC) )
  {
    v1.n128_u64[0] = 0x5A5A5A5A5A5A5A5ALL;
    v1.n128_u64[1] = 0x5A5A5A5A5A5A5A5ALL;
    HIBYTE(dword_1A43A0) ^= 0x5Au;
    xmmword_1A4380 = (__int128)veorq_s64((int64x2_t)xmmword_1A4380, v1);
    LOBYTE(dword_1A43A4) = dword_1A43A4 ^ 0x5A;
    BYTE1(dword_1A43A4) ^= 0x5Au;
    BYTE2(dword_1A43A4) ^= 0x5Au;
    BYTE2(dword_1A43A0) ^= 0x5Au;
    xmmword_1A4390 = (__int128)veorq_s64((int64x2_t)xmmword_1A4390, v1);
    BYTE1(dword_1A43A0) ^= 0x5Au;
    HIBYTE(dword_1A43A4) ^= 0x5Au;
    byte_1A43A8 ^= 0x5Au;
    LOBYTE(dword_1A43A0) = dword_1A43A0 ^ 0x5A;
    byte_1A43A9 ^= 0x5Au;
    byte_1A43AA ^= 0x5Au;
    byte_1A43AB ^= 0x5Au;
    LOBYTE(word_1A43AC) = word_1A43AC ^ 0x5A;
    HIBYTE(word_1A43AC) ^= 0x5Au;
  }
  return sub_10C158(4, "SAMP_ORIG", &xmmword_1A4380);
}


// ======================================================================
// ADDR: 0x6a500
// SYMBOL: Java_com_sampmobilerp_game_ui_UI_voicePressed
int Java_com_sampmobilerp_game_ui_UI_voicePressed()
{
  int v0; // r0
  int64x2_t v1; // q8
  int result; // r0

  v0 = (unsigned __int8)byte_1A43F0;
  __dmb(0xBu);
  if ( !(v0 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A43F0) )
  {
    qmemcpy(&dword_1A43E4, "9?\n(?))?>Z", 10);
    *(_QWORD *)&xmmword_1A43C0 = 0x373539053B2C3B10LL;
    *((_QWORD *)&xmmword_1A43C0 + 1) = 0x3835372A373B2905LL;
    *(_QWORD *)&xmmword_1A43D0 = 0x3B3D052A283F3633LL;
    *((_QWORD *)&xmmword_1A43D0 + 1) = 0x130F05332F053F37LL;
    dword_1A43E0 = 859122693;
    _cxa_atexit((void (*)(void *))sub_6AE28, &xmmword_1A43C0, &off_110560);
    j___cxa_guard_release((__guard *)&byte_1A43F0);
  }
  if ( HIBYTE(word_1A43EC) )
  {
    v1.n128_u64[0] = 0x5A5A5A5A5A5A5A5ALL;
    v1.n128_u64[1] = 0x5A5A5A5A5A5A5A5ALL;
    HIBYTE(dword_1A43E0) ^= 0x5Au;
    xmmword_1A43C0 = (__int128)veorq_s64((int64x2_t)xmmword_1A43C0, v1);
    LOBYTE(dword_1A43E4) = dword_1A43E4 ^ 0x5A;
    BYTE1(dword_1A43E4) ^= 0x5Au;
    BYTE2(dword_1A43E4) ^= 0x5Au;
    BYTE2(dword_1A43E0) ^= 0x5Au;
    xmmword_1A43D0 = (__int128)veorq_s64((int64x2_t)xmmword_1A43D0, v1);
    BYTE1(dword_1A43E0) ^= 0x5Au;
    HIBYTE(dword_1A43E4) ^= 0x5Au;
    byte_1A43E8 ^= 0x5Au;
    LOBYTE(dword_1A43E0) = dword_1A43E0 ^ 0x5A;
    byte_1A43E9 ^= 0x5Au;
    byte_1A43EA ^= 0x5Au;
    byte_1A43EB ^= 0x5Au;
    LOBYTE(word_1A43EC) = word_1A43EC ^ 0x5A;
    HIBYTE(word_1A43EC) ^= 0x5Au;
  }
  _android_log_print(4, "SAMP_ORIG", (const char *)&xmmword_1A43C0);
  result = dword_1A442C;
  if ( dword_1A442C )
  {
    result = *(_DWORD *)(dword_1A442C + 128);
    *(_BYTE *)(result + 1) ^= 1u;
  }
  return result;
}


// ======================================================================
// ADDR: 0x6a6c4
// SYMBOL: Java_com_sampmobilerp_game_ui_UI_sendButtonPanelKey
char *__fastcall Java_com_sampmobilerp_game_ui_UI_sendButtonPanelKey(int a1, int a2, int a3)
{
  int v4; // r2
  int v5; // r4
  char *result; // r0
  int v7; // r0
  char **v8; // r0

  _android_log_print(4, "SAMP_ORIG", "Java_com_sampmobilerp_game_ui_UI_sendButtonPanelKey: %d", a3);
  v4 = *(_DWORD *)(dword_1A4408 + 2350836);
  switch ( a3 )
  {
    case 1:
      v5 = *(_DWORD *)(*(_DWORD *)(v4 + 944) + 24);
      result = (char *)dword_1A44CC;
      if ( dword_1A44CC )
      {
        dword_1A44CC = 0;
        result = (char *)sub_6937C(dword_1A41D8, 0);
      }
      if ( v5 )
        return (char *)((int (__fastcall *)(int, _DWORD, _DWORD))(dword_1A4408 + 1373309))(v5, 0, 0);
      return result;
    case 2:
      result = (char *)sub_6C808(a3 - 1);
      if ( result )
      {
        result = (char *)dword_1A44CC;
        if ( !dword_1A44CC )
        {
          result = (char *)sub_6937C(dword_1A41D8, 1);
          dword_1A44CC = 1;
        }
      }
      return result;
    case 3:
      v8 = off_114BB4;
      goto LABEL_21;
    case 4:
      v8 = off_114BB8;
      goto LABEL_21;
    case 5:
      v8 = off_114BBC;
      goto LABEL_21;
    case 6:
      result = &byte_1A3A60;
      byte_1A3A60 = 1;
      byte_1A44D3 = 1;
      return result;
    case 7:
      v8 = off_114BC0;
      goto LABEL_21;
    case 8:
      v8 = off_114BC4;
      goto LABEL_21;
    case 9:
      v8 = off_114BC8;
LABEL_21:
      result = *v8;
      *result = 1;
      break;
    case 10:
      result = **(char ***)(v4 + 944);
      if ( result )
      {
        result = (char *)*((_DWORD *)result + 1263);
        if ( result )
          result = (char *)((int (*)(void))(dword_1A4408 + 1315021))();
      }
      break;
    default:
      v7 = (unsigned __int8)byte_1A43FC;
      __dmb(0xBu);
      if ( !(v7 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A43FC) )
      {
        dword_1A43F8 = 1511920406;
        dword_1A43F4 = 453776403;
        _cxa_atexit((void (*)(void *))sub_6AE3E, &dword_1A43F4, &off_110560);
        j___cxa_guard_release((__guard *)&byte_1A43FC);
      }
      if ( HIBYTE(dword_1A43F8) )
      {
        HIBYTE(dword_1A43F8) ^= 0x5Au;
        LOBYTE(dword_1A43F4) = dword_1A43F4 ^ 0x5A;
        BYTE1(dword_1A43F4) ^= 0x5Au;
        LOBYTE(dword_1A43F8) = dword_1A43F8 ^ 0x5A;
        BYTE2(dword_1A43F4) ^= 0x5Au;
        BYTE1(dword_1A43F8) ^= 0x5Au;
        HIBYTE(dword_1A43F4) ^= 0x5Au;
        BYTE2(dword_1A43F8) ^= 0x5Au;
      }
      result = (char *)sub_10C158(4, "SAMP_ORIG", &dword_1A43F4);
      break;
  }
  return result;
}


// ======================================================================
// ADDR: 0x6a8bc
// SYMBOL: Java_com_sampmobilerp_game_ui_UI_sendSettingslistener
char *__fastcall Java_com_sampmobilerp_game_ui_UI_sendSettingslistener(int a1, int a2, int a3)
{
  char *result; // r0
  _DWORD *v5; // r5
  void (__fastcall *v6)(_DWORD *, int, int); // r0

  _android_log_print(4, "SAMP_ORIG", "Java_com_sampmobilerp_game_ui_UI_sendSettingslistener: %d", a3);
  result = (char *)sub_68858();
  if ( (unsigned int)&result[-dword_1A41E0] >> 2 <= 0x7C )
    return (char *)sub_10C158(4, "SAMP_ORIG", "Anti spam clicks");
  dword_1A41E0 = (int)result;
  v5 = (_DWORD *)dword_11769C;
  if ( dword_11769C )
  {
    if ( a3 != 1 )
      goto LABEL_5;
    return (char *)((int (__fastcall *)(_DWORD *))(dword_1A4404 + 2740661))(v5);
  }
  v5 = (_DWORD *)operator new(0x58u);
  _android_log_print(4, "SAMP_ORIG", "FlowScreen::FlowScreen(%s, %s)", "true", "true");
  v6 = (void (__fastcall *)(_DWORD *, int, int))dlsym((void *)dword_1A440C, "_ZN10FlowScreenC2Ebb");
  v6(v5, 1, 1);
  dword_11769C = (int)v5;
  result = (char *)dword_1A4540;
  *v5 = dword_1A4540;
  if ( a3 == 1 )
    return (char *)((int (__fastcall *)(_DWORD *))(dword_1A4404 + 2740661))(v5);
LABEL_5:
  if ( a3 == 2 )
  {
    result = &byte_1A39F9;
    byte_1A39F9 = 1;
    dword_1A453C = 1;
  }
  else if ( a3 == 3 )
  {
    exit(0);
  }
  return result;
}


// ======================================================================
// ADDR: 0x6a9e8
// SYMBOL: Java_com_sampmobilerp_game_ui_UI_sendCustomSettingsListener
int __fastcall Java_com_sampmobilerp_game_ui_UI_sendCustomSettingsListener(int a1, int a2, int a3)
{
  int result; // r0

  _android_log_print(4, "SAMP_ORIG", "Java_com_sampmobilerp_game_ui_UI_sendCustomSettingsListener: %d", a3);
  result = sub_68858();
  if ( (unsigned int)(result - dword_1A41E0) >> 2 <= 0x7C )
    return sub_10C158(4, "SAMP_ORIG", "Anti spam clicks");
  dword_1A41E0 = result;
  if ( a3 == 1 )
  {
    byte_1A39F9 = 0;
    result = 2;
    dword_1A453C = 2;
  }
  return result;
}


// ======================================================================
// ADDR: 0x7a930
// SYMBOL: Java_com_sampmobilerp_game_ui_UI_editobjectinput
float *__fastcall Java_com_sampmobilerp_game_ui_UI_editobjectinput(int a1, int a2, int a3, int a4)
{
  int v4; // r0

  v4 = a3;
  if ( a3 )
    v4 = 1;
  if ( (unsigned int)(a4 - 6) <= 2 )
    dword_1A4544 = a4 - 5;
  if ( (unsigned __int8)byte_116D34 != v4 )
    byte_116D34 = v4;
  if ( a4 == 2 )
    return (float *)sub_79948();
  if ( a4 == 1 )
    return (float *)sub_794B8();
  return sub_79CE0((float *)(a3 != 0), dword_1A4544, a4);
}


// ======================================================================
