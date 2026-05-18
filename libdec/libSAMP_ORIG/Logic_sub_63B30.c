// ADDR: 0x63a74
// SYMBOL: sub_63A74
int __fastcall sub_63A74(float *a1, char *s)
{
  float v4; // s2
  int result; // r0
  float v6; // s0
  const char *v7; // r6
  size_t v8; // r5
  unsigned int v9; // r0
  int v10; // r2
  int v11; // r1

  if ( s && strlen(s) > 5 )
  {
    v7 = s + 1;
    if ( *s != 35 )
      v7 = s;
    v8 = strlen(v7);
    v9 = strtoul(v7, 0, 16);
    if ( v8 == 8 )
    {
      v6 = (float)HIBYTE(v9) * 0.0039216;
    }
    else
    {
      v6 = 1.0;
      if ( v8 != 6 )
      {
        result = 255;
        v10 = 255;
        v11 = 255;
LABEL_11:
        v4 = (float)v11 * 0.0039216;
        *a1 = (float)result * 0.0039216;
        a1[1] = (float)v10 * 0.0039216;
        goto LABEL_12;
      }
    }
    v11 = (unsigned __int8)v9;
    v10 = BYTE1(v9);
    result = BYTE2(v9);
    goto LABEL_11;
  }
  v4 = 1.0;
  result = 1065353216;
  *a1 = 1.0;
  a1[1] = 1.0;
  v6 = 1.0;
LABEL_12:
  a1[2] = v4;
  a1[3] = v6;
  return result;
}


// ======================================================================
// ADDR: 0x65618
// SYMBOL: sub_65618
int sub_65618()
{
  int v0; // r0
  _QWORD v2[3]; // [sp+0h] [bp-38h] BYREF
  _BYTE v3[11]; // [sp+18h] [bp-20h] BYREF
  __int64 v4; // [sp+23h] [bp-15h]
  int v5; // [sp+2Ch] [bp-Ch]

  v2[0] = unk_50CB0;
  v2[1] = unk_50CB8;
  v2[2] = unk_50CC0;
  qmemcpy(v3, "54z/*>;.?>z", sizeof(v3));
  v4 = unk_50CD3;
  v0 = (unsigned __int8)byte_1A3F9C;
  __dmb(0xBu);
  if ( !(v0 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A3F9C) )
  {
    sub_66C94(&xmmword_1A3F70, v2);
    _cxa_atexit((void (*)(void *))sub_66D6E, &xmmword_1A3F70, &off_110560);
    j___cxa_guard_release((__guard *)&byte_1A3F9C);
  }
  return v5;
}


// ======================================================================
// ADDR: 0x656d4
// SYMBOL: sub_656D4
int sub_656D4()
{
  int v0; // r0
  _QWORD v2[3]; // [sp+0h] [bp-38h] BYREF
  _BYTE v3[11]; // [sp+18h] [bp-20h] BYREF
  __int64 v4; // [sp+23h] [bp-15h]
  int v5; // [sp+2Ch] [bp-Ch]

  v2[0] = unk_50CE0;
  v2[1] = unk_50CE8;
  v2[2] = unk_50CF0;
  qmemcpy(v3, "54z/*>;.?>z", sizeof(v3));
  v4 = unk_50D03;
  v0 = (unsigned __int8)byte_1A3FCC;
  __dmb(0xBu);
  if ( !(v0 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A3FCC) )
  {
    sub_66C94(&xmmword_1A3FA0, v2);
    _cxa_atexit((void (*)(void *))sub_66D6E, &xmmword_1A3FA0, &off_110560);
    j___cxa_guard_release((__guard *)&byte_1A3FCC);
  }
  return v5;
}


// ======================================================================
// ADDR: 0x65790
// SYMBOL: sub_65790
int sub_65790()
{
  int v0; // r0
  _QWORD v2[5]; // [sp+0h] [bp-38h] BYREF
  int v3; // [sp+2Ch] [bp-Ch]

  v2[0] = unk_50D10;
  v2[1] = unk_50D18;
  v2[2] = unk_50D20;
  v2[3] = unk_50D28;
  v2[4] = unk_50D30;
  v0 = (unsigned __int8)byte_1A3FF8;
  __dmb(0xBu);
  if ( !(v0 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A3FF8) )
  {
    sub_6706A(&xmmword_1A3FD0, v2);
    _cxa_atexit((void (*)(void *))sub_6712C, &xmmword_1A3FD0, &off_110560);
    j___cxa_guard_release((__guard *)&byte_1A3FF8);
  }
  return v3;
}


// ======================================================================
// ADDR: 0x6584c
// SYMBOL: sub_6584C
int sub_6584C()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_1A4040;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_1A4040);
    if ( result )
    {
      xmmword_1A4000 = xmmword_50D38;
      xmmword_1A4010 = xmmword_50D48;
      xmmword_1A4020 = xmmword_50D58;
      *(_QWORD *)((char *)&xmmword_1A4020 + 13) = 0x28357A762E35287ALL;
      *(_QWORD *)&byte_1A4035 = unk_50D6D;
      _cxa_atexit((void (*)(void *))sub_6717E, &xmmword_1A4000, &off_110560);
      return sub_10C14C(&byte_1A4040);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x658d0
// SYMBOL: sub_658D0
pthread_t *__fastcall sub_658D0(pthread_t *a1, std::__thread_struct **a2)
{
  std::__thread_struct *v4; // r6
  std::__thread_struct **v5; // r3
  std::__thread_struct *v6; // r0
  std::__ndk1 *v7; // r0
  const char *v8; // r2

  v4 = (std::__thread_struct *)operator new(4u);
  std::__thread_struct::__thread_struct(v4);
  v5 = (std::__thread_struct **)operator new(8u);
  v6 = *a2;
  *v5 = v4;
  v5[1] = v6;
  v7 = (std::__ndk1 *)pthread_create(a1, 0, (void *(*)(void *))sub_678FC, v5);
  if ( v7 )
    std::__throw_system_error(v7, (int)"thread constructor failed", v8);
  return a1;
}


// ======================================================================
// ADDR: 0x66e98
// SYMBOL: sub_66E98
_BYTE *__fastcall sub_66E98(_BYTE *result, _BYTE *a2)
{
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  result[3] = a2[3];
  result[4] = a2[4];
  result[5] = a2[5];
  result[6] = a2[6];
  result[7] = a2[7];
  result[8] = a2[8];
  result[9] = a2[9];
  result[10] = a2[10];
  result[11] = a2[11];
  result[12] = a2[12];
  result[13] = a2[13];
  result[14] = a2[14];
  result[15] = a2[15];
  result[16] = a2[16];
  result[17] = a2[17];
  result[18] = a2[18];
  result[19] = a2[19];
  result[20] = a2[20];
  result[21] = a2[21];
  result[22] = a2[22];
  result[23] = a2[23];
  result[24] = a2[24];
  result[25] = a2[25];
  result[26] = a2[26];
  result[27] = a2[27];
  return result;
}


// ======================================================================
// ADDR: 0x66f68
// SYMBOL: sub_66F68
_BYTE *__fastcall sub_66F68(_BYTE *result, _BYTE *a2)
{
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  result[3] = a2[3];
  result[4] = a2[4];
  result[5] = a2[5];
  result[6] = a2[6];
  result[7] = a2[7];
  result[8] = a2[8];
  result[9] = a2[9];
  result[10] = a2[10];
  result[11] = a2[11];
  result[12] = a2[12];
  result[13] = a2[13];
  result[14] = a2[14];
  result[15] = a2[15];
  result[16] = a2[16];
  result[17] = a2[17];
  result[18] = a2[18];
  result[19] = a2[19];
  result[20] = a2[20];
  result[21] = a2[21];
  result[22] = a2[22];
  result[23] = a2[23];
  result[24] = a2[24];
  result[25] = a2[25];
  result[26] = a2[26];
  result[27] = a2[27];
  result[28] = a2[28];
  result[29] = a2[29];
  result[30] = a2[30];
  result[31] = a2[31];
  result[32] = a2[32];
  result[33] = a2[33];
  result[34] = a2[34];
  result[35] = a2[35];
  result[36] = a2[36];
  result[37] = a2[37];
  result[38] = a2[38];
  result[39] = a2[39];
  result[40] = a2[40];
  result[41] = a2[41];
  return result;
}


// ======================================================================
// ADDR: 0x6706a
// SYMBOL: sub_6706A
_BYTE *__fastcall sub_6706A(_BYTE *result, _BYTE *a2)
{
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  result[3] = a2[3];
  result[4] = a2[4];
  result[5] = a2[5];
  result[6] = a2[6];
  result[7] = a2[7];
  result[8] = a2[8];
  result[9] = a2[9];
  result[10] = a2[10];
  result[11] = a2[11];
  result[12] = a2[12];
  result[13] = a2[13];
  result[14] = a2[14];
  result[15] = a2[15];
  result[16] = a2[16];
  result[17] = a2[17];
  result[18] = a2[18];
  result[19] = a2[19];
  result[20] = a2[20];
  result[21] = a2[21];
  result[22] = a2[22];
  result[23] = a2[23];
  result[24] = a2[24];
  result[25] = a2[25];
  result[26] = a2[26];
  result[27] = a2[27];
  result[28] = a2[28];
  result[29] = a2[29];
  result[30] = a2[30];
  result[31] = a2[31];
  result[32] = a2[32];
  result[33] = a2[33];
  result[34] = a2[34];
  result[35] = a2[35];
  result[36] = a2[36];
  result[37] = a2[37];
  result[38] = a2[38];
  result[39] = a2[39];
  return result;
}


// ======================================================================
// ADDR: 0x67874
// SYMBOL: sub_67874
int64x2_t *__fastcall sub_67874(int64x2_t *result)
{
  unsigned __int8 v1; // r2
  unsigned __int8 v2; // r3
  unsigned __int8 v3; // r12
  int64x2_t v4; // q9
  unsigned __int8 v5; // r2
  int64x2_t v6; // q8
  unsigned __int8 v7; // r5
  unsigned __int8 v8; // lr
  unsigned __int8 v9; // r1

  if ( result[1].n128_u8[11] )
  {
    v1 = result[1].n128_u8[3];
    v2 = result[1].n128_u8[4];
    result[1].n128_u8[2] ^= 0x5Au;
    v3 = result[1].n128_u8[5];
    v4.n128_u64[0] = 0x5A5A5A5A5A5A5A5ALL;
    v4.n128_u64[1] = 0x5A5A5A5A5A5A5A5ALL;
    result[1].n128_u8[3] = v1 ^ 0x5A;
    v5 = result[1].n128_u8[6];
    v6 = veorq_s64(*result, v4);
    result[1].n128_u8[4] = v2 ^ 0x5A;
    result[1].n128_u8[5] = v3 ^ 0x5A;
    result[1].n128_u8[6] = v5 ^ 0x5A;
    v7 = result[1].n128_u8[7];
    result[1].n128_u8[1] ^= 0x5Au;
    *result = v6;
    result[1].n128_u8[7] = v7 ^ 0x5A;
    v8 = result[1].n128_u8[8];
    result[1].n128_u8[0] ^= 0x5Au;
    v9 = result[1].n128_u8[9];
    result[1].n128_u8[8] = v8 ^ 0x5A;
    result[1].n128_u8[9] = v9 ^ 0x5A;
    result[1].n128_u8[10] ^= 0x5Au;
    result[1].n128_u8[11] ^= 0x5Au;
  }
  return result;
}


// ======================================================================
// ADDR: 0x69aac
// SYMBOL: sub_69AAC
int __fastcall sub_69AAC(int a1, const char *a2)
{
  int v3; // r0
  int v4; // r5
  int v5; // r0
  size_t v6; // r0
  int v7; // r4
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
    v10 = (unsigned __int8)byte_1A42B8;
    __dmb(0xBu);
    if ( !(v10 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A42B8) )
    {
      byte_1A42B6 = 90;
      word_1A42B4 = 11316;
      dword_1A42B0 = 1064973588;
      _cxa_atexit((void (*)(void *))sub_66E8E, &dword_1A42B0, &off_110560);
      j___cxa_guard_release((__guard *)&byte_1A42B8);
    }
    if ( byte_1A42B6 )
    {
      byte_1A42B6 ^= 0x5Au;
      LOBYTE(dword_1A42B0) = dword_1A42B0 ^ 0x5A;
      BYTE1(dword_1A42B0) ^= 0x5Au;
      BYTE2(dword_1A42B0) ^= 0x5Au;
      LOBYTE(word_1A42B4) = word_1A42B4 ^ 0x5A;
      HIBYTE(dword_1A42B0) ^= 0x5Au;
      HIBYTE(word_1A42B4) ^= 0x5Au;
    }
    return sub_10C158(4, "SAMP_ORIG", &dword_1A42B0);
  }
}


// ======================================================================
// ADDR: 0x76564
// SYMBOL: sub_76564
int __fastcall sub_76564(int a1, int a2, int a3)
{
  int v3; // r1
  int v4; // r2
  FILE *v5; // r0
  FILE *v6; // r4
  char filename[256]; // [sp+4h] [bp-20Ch] BYREF
  char path[256]; // [sp+104h] [bp-10Ch] BYREF

  if ( dword_1A4404 == -7170172 )
  {
    _android_log_print(6, "SAMP_ORIG", "Failed to initialize settings. (game storage null)");
    std::terminate();
  }
  sub_767B0((int)path, 7170172, a3, "%s/SAMP");
  sub_767B0((int)filename, v3, v4, "%s/SAMP/menu_settings.ini");
  if ( access(path, 0) )
    mkdir(path, 0x1FFu);
  v5 = fopen(filename, "w");
  if ( !v5 )
    return sub_10C158(6, "SAMP_ORIG", "Failed to open menu_settings.ini for writing.");
  v6 = v5;
  fprintf(v5, "[ui]\nsensitivity=%.3f\n", *(float *)&dword_1A44FC);
  fprintf(v6, "draw_distance=%.1f\n", *(float *)&dword_1A44F8);
  fprintf(v6, "voice_x=%d\n", dword_1A4500);
  fprintf(v6, "voice_y=%d\n", dword_1A4504);
  fprintf(v6, "speaker_list=%d\n", dword_1A4510);
  fprintf(v6, "voice_w=%d\n", dword_1A4508);
  fprintf(v6, "voice_h=%d\n", dword_1A450C);
  fprintf(v6, "new_menu=%d\n", dword_1A4514);
  fprintf(v6, "buttoncol=%s\n", byte_1A452C);
  fprintf(v6, "passenger_btn_x=%d\n", dword_1A451C);
  fprintf(v6, "passenger_btn_y=%d\n", dword_1A4520);
  fprintf(v6, "fontsize=%.1f\n", *(float *)&dword_1A4524);
  fprintf(v6, "pagesize=%d\n", dword_1A4528);
  fflush(v6);
  return sub_10C17C(v6, _stack_chk_guard);
}


// ======================================================================
