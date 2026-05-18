// ADDR: 0xf0ed8
// SYMBOL: sub_F0ED8
void *__fastcall sub_F0ED8(int a1)
{
  void *result; // r0
  int v3; // r0
  std::runtime_error *exception; // r4

  result = (void *)dword_381A54;
  if ( !dword_381A54 )
  {
    if ( a1 )
    {
      exception = (std::runtime_error *)j___cxa_allocate_exception(8u);
      std::runtime_error::runtime_error(exception, "UEF instance not created yet");
      j___cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::runtime_error,
        (void (*)(void *))std::underflow_error::~underflow_error);
    }
    v3 = (unsigned __int8)byte_23FBB0;
    __dmb(0xBu);
    if ( !(v3 << 31) )
    {
      if ( j___cxa_guard_acquire((__guard *)&byte_23FBB0) )
      {
        sub_15FD40(&unk_23DF38);
        _cxa_atexit((void (*)(void *))sub_15FF14, &unk_23DF38, &off_22A540);
        j___cxa_guard_release((__guard *)&byte_23FBB0);
      }
    }
    result = &unk_23DF38;
    dword_381A54 = (int)&unk_23DF38;
  }
  return result;
}


// ======================================================================
// ADDR: 0xf0fa0
// SYMBOL: sub_F0FA0
unsigned int *sub_F0FA0()
{
  unsigned int *result; // r0
  int v1; // r4
  std::__shared_weak_count *v2; // r4
  unsigned int v3; // r1
  std::__shared_weak_count *v4; // r4
  unsigned int v5; // r1
  int v6; // [sp+0h] [bp-10h] BYREF
  int v7; // [sp+4h] [bp-Ch]

  result = (unsigned int *)dword_381A0C;
  if ( !dword_381A0C )
  {
    v1 = operator new(0xA8u);
    sub_F120C();
    v7 = v1;
    v6 = v1 + 16;
    sub_F129A(&v6, v1 + 20);
    v2 = (std::__shared_weak_count *)dword_381A10;
    dword_381A0C = v6;
    result = 0;
    dword_381A10 = v7;
    v6 = 0;
    v7 = 0;
    if ( v2 )
    {
      result = (unsigned int *)((char *)v2 + 4);
      __dmb(0xBu);
      do
        v3 = __ldrex(result);
      while ( __strex(v3 - 1, result) );
      __dmb(0xBu);
      if ( !v3 )
      {
        (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v2 + 8))(v2);
        result = (unsigned int *)std::__shared_weak_count::__release_weak(v2);
      }
      v4 = (std::__shared_weak_count *)v7;
      if ( v7 )
      {
        result = (unsigned int *)(v7 + 4);
        __dmb(0xBu);
        do
          v5 = __ldrex(result);
        while ( __strex(v5 - 1, result) );
        __dmb(0xBu);
        if ( !v5 )
        {
          (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v4 + 8))(v4);
          return (unsigned int *)std::__shared_weak_count::__release_weak(v4);
        }
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0xf1050
// SYMBOL: sub_F1050
unsigned int *sub_F1050()
{
  unsigned int *result; // r0
  int v1; // r4
  std::__shared_weak_count *v2; // r4
  unsigned int v3; // r1
  std::__shared_weak_count *v4; // r4
  unsigned int v5; // r1
  int v6; // [sp+0h] [bp-10h] BYREF
  int v7; // [sp+4h] [bp-Ch]

  result = (unsigned int *)dword_2631B0;
  if ( !dword_2631B0 )
  {
    v1 = operator new(0x70u);
    sub_F1310();
    v7 = v1;
    v6 = v1 + 12;
    sub_F139E(&v6);
    v2 = (std::__shared_weak_count *)dword_2631B4;
    dword_2631B0 = v6;
    result = 0;
    dword_2631B4 = v7;
    v6 = 0;
    v7 = 0;
    if ( v2 )
    {
      result = (unsigned int *)((char *)v2 + 4);
      __dmb(0xBu);
      do
        v3 = __ldrex(result);
      while ( __strex(v3 - 1, result) );
      __dmb(0xBu);
      if ( !v3 )
      {
        (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v2 + 8))(v2);
        result = (unsigned int *)std::__shared_weak_count::__release_weak(v2);
      }
      v4 = (std::__shared_weak_count *)v7;
      if ( v7 )
      {
        result = (unsigned int *)(v7 + 4);
        __dmb(0xBu);
        do
          v5 = __ldrex(result);
        while ( __strex(v5 - 1, result) );
        __dmb(0xBu);
        if ( !v5 )
        {
          (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v4 + 8))(v4);
          return (unsigned int *)std::__shared_weak_count::__release_weak(v4);
        }
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0xf9364
// SYMBOL: sub_F9364
int __fastcall sub_F9364(int a1)
{
  _DWORD *v2; // r5

  *(_BYTE *)(a1 + 2) = 0;
  v2 = (_DWORD *)operator new(0x10u);
  sub_F85C4(v2);
  *(_BYTE *)(a1 + 84) = 1;
  *(_DWORD *)(a1 + 4) = v2;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_WORD *)a1 = 0;
  *(_BYTE *)(a1 + 12) = 0;
  sub_22178C((int)&byte_247288, 0xD2u);
  return a1;
}


// ======================================================================
// ADDR: 0x1005c8
// SYMBOL: sub_1005C8
int sub_1005C8()
{
  operator new(1u);
  sub_127168();
  sub_164196(dword_23DF24 + 6771620, sub_FB5AC, &off_2473F0);
  sub_164196(dword_23DF24 + 6769768, sub_FB7D8, &unk_2473F8);
  sub_164196(dword_23DF24 + 6746832, sub_FB94C, &off_2473FC);
  sub_164196(dword_23DF24 + 6772636, sub_FBB9C, &unk_247408);
  sub_164196(dword_23DF24 + 6774168, sub_FBCF4, &unk_247418);
  sub_164196(dword_23DF24 + 6759528, sub_FBD6C, &unk_24741C);
  sub_164196(dword_23DF24 + 6772052, (char *)&loc_FC564 + 1, &unk_2474B0);
  sub_164196(dword_23DF24 + 6747564, sub_FDD3C, &off_247568);
  sub_164196(dword_23DF24 + 6771456, (char *)&loc_FE13C + 1, &off_24758C);
  sub_164196(dword_23DF24 + 6778812, sub_FE324, &off_2475E4);
  sub_164196(dword_23DF24 + 6782624, sub_FE38A, &unk_2475E8);
  sub_164196(dword_23DF24 + 6763308, sub_FE398, &off_2475EC);
  sub_164196(dword_23DF24 + 6750824, sub_FE3B0, &unk_2475F0);
  sub_164196(dword_23DF24 + 6789908, sub_FF248, &unk_25B160);
  sub_164196(dword_23DF24 + 6780056, sub_FF274, &unk_25B164);
  sub_164196(dword_23DF24 + 6755492, (char *)&loc_FF400 + 1, &off_25B174);
  sub_164196(dword_23DF24 + 6748648, sub_FF538, &off_25B194);
  sub_164196(dword_23DF24 + 6756604, sub_FBBF8, &unk_24740C);
  sub_164196(dword_23DF24 + 6763336, sub_FBC70, &unk_247410);
  sub_164196(dword_23DF24 + 6781804, sub_FF1B8, &off_25B154);
  sub_164196(dword_23DF24 + 6755416, sub_FF5C4, &off_25B19C);
  sub_164196(dword_23DF24 + 6756668, sub_FF5FE, &unk_25B1A0);
  sub_164196(dword_23DF24 + 6764300, (char *)&loc_FBCE0 + 1, &off_247414);
  return sub_FFA98();
}


// ======================================================================
// ADDR: 0x1039c4
// SYMBOL: sub_1039C4
int sub_1039C4()
{
  int v0; // r3
  int v1; // r5
  int v2; // r0
  int v3; // r0
  int v4; // r0

  _android_log_print(4, "AXL", "Applying global patches..");
  dword_25C9C8 = operator new[](0x14B68u);
  sub_22178C(dword_25C9C8, 0x14B68u);
  sub_1641C4(dword_23DF24 + 6783944);
  *(_DWORD *)(dword_23DF24 + 6783944) = dword_25C9C8;
  _android_log_print(4, "AXL", "CWorld::Players new address: 0x%X", dword_25C9C8);
  sub_1641C4(dword_23DF24 + 6789980);
  *(_DWORD *)(dword_23DF24 + 6789980) = &unk_25C9D0;
  dword_2402E4 = (int)&unk_25C9D0;
  _android_log_print(4, "AXL", "CWorld::PlayerInFocus new address: 0x%X", &unk_25C9D0);
  v0 = operator new[](0x124F80u);
  v1 = 0;
  dword_25C9CC = v0;
  do
  {
    ((void (__fastcall *)(int))(dword_23DF24 + 3690377))(v0 + v1);
    v0 = dword_25C9CC;
    *(_DWORD *)(dword_25C9CC + v1) = dword_23DF24 + 6714452;
    v2 = v0 + v1;
    v1 += 60;
    *(_DWORD *)(v2 + 56) = 0;
    v2 += 4;
    *(_QWORD *)v2 = 0LL;
    *(_QWORD *)(v2 + 8) = 0LL;
    v2 += 16;
    *(_QWORD *)v2 = 0LL;
    *(_QWORD *)(v2 + 8) = 0LL;
    v2 += 16;
    *(_QWORD *)v2 = 0LL;
    *(_QWORD *)(v2 + 8) = 0LL;
    *(_DWORD *)(v2 + 16) = 0;
  }
  while ( v1 != 1200000 );
  _android_log_print(4, "AXL", "AtomicModelsPool new address: 0x%X", v0);
  v3 = dword_23DF24;
  *(_DWORD *)(dword_23DF24 + 7012652) = 1396790343;
  *(_DWORD *)(v3 + 7012656) = 5262657;
  sub_1641C4(dword_23DF24 + 6780500);
  *(_DWORD *)(dword_23DF24 + 6780500) = &unk_2379A0;
  sub_1641D4(dword_23DF24 + 9719488, &unk_8DD33, 1);
  v4 = dword_23DF24;
  *(_BYTE *)(dword_23DF24 + 7956541) = 1;
  return sub_1641D4(v4 + 11044761, &unk_B346E, 1);
}


// ======================================================================
// ADDR: 0x11c58c
// SYMBOL: sub_11C58C
int *sub_11C58C()
{
  int *result; // r0

  _android_log_print(4, "AXL", "Initializing RenderWare..");
  dword_2636B4 = dword_23DF24 + 10471676;
  off_2636BC = (int (__fastcall *)(_DWORD))(dword_23DF24 + 1923733);
  dword_2636E8 = (int)&loc_1DA938 + dword_23DF24;
  off_2636B8 = (int (__fastcall *)(_DWORD))(dword_23DF24 + 1923737);
  off_2636C0 = (int (__fastcall *)(_DWORD, _DWORD, _DWORD))(dword_23DF24 + 1924501);
  off_2636C4 = (int (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD))((char *)&loc_1DA938 + dword_23DF24 + 280);
  off_2636C8 = (_UNKNOWN *)((char *)&loc_1DA4D4 + dword_23DF24 + 892);
  dword_2636CC = (int)&loc_1DA4D4 + dword_23DF24 + 600;
  dword_2636D0 = (int)&loc_1DA938 + dword_23DF24 + 72;
  dword_2636D4 = (int)&loc_1DA938 + dword_23DF24 + 188;
  dword_2636D8 = (int)&loc_1DA4D4 + dword_23DF24 + 736;
  dword_2636DC = (int)&loc_1DA4D4 + dword_23DF24 + 812;
  dword_2636E0 = (int)&loc_1DA4D4 + dword_23DF24 + 568;
  dword_2636E4 = (int)&loc_1DA4D4 + dword_23DF24 + 964;
  dword_2636EC = (int)&loc_1DA4D4 + dword_23DF24 + 536;
  dword_2636F0 = (int)&loc_1DA4D4 + dword_23DF24 + 648;
  dword_2636F4 = (int)&loc_1DA4D4 + dword_23DF24 + 780;
  dword_2636FC = (int)&loc_1DA938 + dword_23DF24 + 444;
  dword_2636F8 = (int)&loc_1DA938 + dword_23DF24 + 132;
  dword_263700 = (int)&loc_1DA4D4 + dword_23DF24 + 612;
  dword_263704 = (int)&loc_1DA4D4 + dword_23DF24 + 1080;
  dword_263708 = (int)&loc_1DA4D4 + dword_23DF24 + 856;
  off_26370C = (_UNKNOWN *)(dword_23DF24 + 1937057);
  off_263710 = (_UNKNOWN *)(dword_23DF24 + 1937145);
  off_263714 = (_UNKNOWN *)(dword_23DF24 + 1937285);
  dword_263718 = dword_23DF24 + 1937241;
  dword_26371C = dword_23DF24 + 1938913;
  dword_263720 = dword_23DF24 + 1937441;
  dword_263724 = dword_23DF24 + 1938177;
  dword_263728 = dword_23DF24 + 1937737;
  dword_26372C = dword_23DF24 + 1941085;
  dword_263730 = (int)&loc_1D982C + dword_23DF24;
  dword_263734 = dword_23DF24 + 1940929;
  dword_263738 = (int)&loc_1DA4D4 + dword_23DF24;
  off_26373C = (_UNKNOWN *)((char *)&loc_1DA4D4 + dword_23DF24 + 36);
  dword_263740 = (int)&loc_1DA4D4 + dword_23DF24 + 288;
  dword_263744 = (int)&loc_1DA4D4 + dword_23DF24 + 448;
  off_263748 = (_UNKNOWN *)((char *)&loc_1DA4D4 + dword_23DF24 + 72);
  dword_26374C = (int)&off_1E28F4 + dword_23DF24 + 1;
  dword_263750 = (int)&off_1E28F4 + dword_23DF24 + 17;
  dword_263754 = (int)&off_1E28F4 + dword_23DF24 + 85;
  off_263758 = (int (__fastcall *)(_DWORD, _DWORD))((char *)&off_1E28F4 + dword_23DF24 + 33);
  dword_26375C = (int)&off_1E28F4 + dword_23DF24 + 101;
  dword_263760 = (int)&off_1E28F4 + dword_23DF24 + 125;
  dword_263764 = (int)&off_1E28F4 + dword_23DF24 + 149;
  off_263768 = (_UNKNOWN *)((char *)&off_1E28F4 + dword_23DF24 + 165);
  dword_26376C = (int)std::__codecvt_utf8_utf16<char32_t>::do_encoding + dword_23DF24;
  dword_263770 = (int)std::__codecvt_utf8_utf16<char32_t>::do_encoding + dword_23DF24 + 688;
  result = &dword_263778;
  dword_263774 = dword_23DF24 + 1948349;
  dword_263778 = dword_23DF24 + 1947493;
  return result;
}


// ======================================================================
// ADDR: 0x163ff8
// SYMBOL: sub_163FF8
unsigned int __fastcall sub_163FF8(const char *a1)
{
  FILE *v2; // r0
  FILE *v3; // r5
  unsigned int v4; // r4
  char v6[4096]; // [sp+0h] [bp-1110h] BYREF
  char v7[272]; // [sp+1000h] [bp-110h] BYREF

  sub_22178C((int)v7, 0xFFu);
  sub_22178C((int)v6, 0xFFFu);
  getpid();
  sub_16407C(v7);
  v2 = fopen(v7, "rt");
  if ( !v2 )
    return 0;
  v3 = v2;
  while ( fgets(v6, 4095, v3) )
  {
    if ( strstr(v6, a1) )
    {
      v4 = strtoul(v6, 0, 16);
      goto LABEL_8;
    }
  }
  v4 = 0;
LABEL_8:
  fclose(v3);
  return v4;
}


// ======================================================================
// ADDR: 0x16447c
// SYMBOL: sub_16447C
void sub_16447C()
{
  char *v0; // r4
  char *v1; // r0
  size_t v2; // r5
  char *v3; // r6
  unsigned int v4; // r8
  const char *v5; // r0
  void *v6; // r4
  int (__fastcall *v7)(int, _DWORD); // r2
  int v8; // r0
  const char *v9; // r0
  void *v10; // r4
  double v11; // [sp+0h] [bp-40h] BYREF
  void *v12; // [sp+8h] [bp-38h]
  double v13; // [sp+10h] [bp-30h] BYREF
  void *v14; // [sp+18h] [bp-28h]
  char *s; // [sp+20h] [bp-20h] BYREF

  dladdr(sub_16447C, &s);
  sub_DC6DC(&v13, "/data/data/com.arizona.game/lib/");
  v0 = s;
  if ( !s )
    goto LABEL_11;
  v1 = (char *)(strrchr(s, 47) - v0);
  v2 = (size_t)(v1 + 1);
  if ( (unsigned int)(v1 + 1) >= 0xFFFFFFF0 )
    std::__basic_string_common<true>::__throw_length_error(&v11);
  if ( v2 >= 0xB )
  {
    v4 = (unsigned int)(v1 + 17) & 0xFFFFFFF0;
    v3 = (char *)operator new(v4);
    HIDWORD(v11) = v2;
    LODWORD(v11) = v4 | 1;
    v12 = v3;
  }
  else
  {
    LOBYTE(v11) = 2 * v2;
    v3 = (char *)&v11 + 1;
    if ( v1 == (char *)-1 )
      goto LABEL_8;
  }
  j_memcpy(v3, v0, v2);
LABEL_8:
  v3[v2] = 0;
  if ( LOBYTE(v13) << 31 )
    operator delete(v14);
  v14 = v12;
  v13 = v11;
LABEL_11:
  sub_EE094((int *)&v11, (unsigned __int8 *)&v13, "libbass.so");
  v5 = (const char *)v12;
  if ( !(LOBYTE(v11) << 31) )
    v5 = (char *)&v11 + 1;
  v6 = dlopen(v5, 1);
  if ( LOBYTE(v11) << 31 )
    operator delete(v12);
  if ( v6 )
  {
    v7 = (int (__fastcall *)(int, _DWORD))dlsym(v6, "JNI_OnLoad");
    if ( v7 )
    {
      v8 = *(_DWORD *)(dword_23DF24 + 7182904);
      if ( !v8 || v7(v8, 0) != 65542 )
        _android_log_print(6, "AXL", "Invalid initialize JNI in libbass.so");
    }
    off_381AC4 = dlsym(v6, "BASS_SetConfig");
    dword_381AC8 = (int)dlsym(v6, "BASS_GetConfig");
    off_381ACC = dlsym(v6, "BASS_SetConfigPtr");
    off_381AD0 = dlsym(v6, "BASS_ErrorGetCode");
    off_381AD4 = dlsym(v6, "BASS_Init");
    off_381AD8 = dlsym(v6, "BASS_Free");
    off_381ADC = dlsym(v6, "BASS_IsStarted");
    off_381AE0 = dlsym(v6, "BASS_Set3DFactors");
    off_381AE4 = dlsym(v6, "BASS_Set3DPosition");
    off_381AE8 = dlsym(v6, "BASS_Apply3D");
    off_381AEC = dlsym(v6, "BASS_StreamCreate");
    off_381AF0 = dlsym(v6, "BASS_StreamCreateFile");
    off_381AF4 = dlsym(v6, "BASS_StreamCreateURL");
    off_381AF8 = dlsym(v6, "BASS_StreamFree");
    off_381AFC = dlsym(v6, "BASS_StreamGetFilePosition");
    off_381B00 = dlsym(v6, "BASS_StreamPutData");
    off_381B04 = dlsym(v6, "BASS_RecordGetDeviceInfo");
    off_381B08 = dlsym(v6, "BASS_RecordInit");
    off_381B0C = dlsym(v6, "BASS_RecordFree");
    off_381B10 = dlsym(v6, "BASS_RecordStart");
    off_381B14 = dlsym(v6, "BASS_ChannelBytes2Seconds");
    off_381B18 = dlsym(v6, "BASS_ChannelSeconds2Bytes");
    off_381B1C = dlsym(v6, "BASS_ChannelIsActive");
    dword_381B20 = (int)dlsym(v6, "BASS_ChannelFlags");
    off_381B24 = dlsym(v6, "BASS_ChannelPlay");
    off_381B28 = dlsym(v6, "BASS_ChannelStop");
    off_381B2C = dlsym(v6, "BASS_ChannelPause");
    off_381B30 = (int (__fastcall *)(_DWORD, _DWORD, _DWORD))dlsym(v6, "BASS_ChannelSetAttribute");
    off_381B34 = dlsym(v6, "BASS_ChannelSet3DAttributes");
    off_381B38 = dlsym(v6, "BASS_ChannelSet3DPosition");
    off_381B3C = dlsym(v6, "BASS_ChannelGetLength");
    off_381B40 = dlsym(v6, "BASS_ChannelSetPosition");
    off_381B44 = dlsym(v6, "BASS_ChannelGetPosition");
    off_381B48 = dlsym(v6, "BASS_ChannelSetFX");
    off_381B4C = dlsym(v6, "BASS_ChannelRemoveFX");
    off_381B50 = dlsym(v6, "BASS_FXSetParameters");
    sub_EE094((int *)&v11, (unsigned __int8 *)&v13, "libbass_fx.so");
    v9 = (const char *)v12;
    if ( !(LOBYTE(v11) << 31) )
      v9 = (char *)&v11 + 1;
    v10 = dlopen(v9, 1);
    if ( LOBYTE(v11) << 31 )
      operator delete(v12);
    if ( v10 )
      off_381B54 = dlsym(v10, "BASS_FX_GetVersion");
    else
      _android_log_print(6, "AXL", "Can't open libbass_fx.so");
  }
  else
  {
    _android_log_print(6, "AXL", "Can't open libbass.so");
  }
  if ( LOBYTE(v13) << 31 )
    operator delete(v14);
}


// ======================================================================
