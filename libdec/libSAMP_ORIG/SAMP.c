// ADDR: 0x69c1c
// SYMBOL: Java_com_sampmobilerp_game_SAMP_initializeSAMP
int __fastcall Java_com_sampmobilerp_game_SAMP_initializeSAMP(int a1, int a2, int a3, int a4, int64x2_t *a5)
{
  int v9; // r0
  int64x2_t *v10; // r4
  int64x2_t v11; // q8
  int *v12; // r6
  _QWORD v14[3]; // [sp+8h] [bp-50h] BYREF
  _QWORD v15[3]; // [sp+20h] [bp-38h]
  int v16; // [sp+38h] [bp-20h]

  v14[0] = unk_50DE8;
  v14[1] = unk_50DF0;
  v14[2] = unk_50DF8;
  v15[0] = unk_50E00;
  *(_QWORD *)((char *)v15 + 7) = unk_50E07;
  *(_QWORD *)((char *)&v15[1] + 7) = unk_50E0F;
  v9 = (unsigned __int8)byte_1A42F0;
  __dmb(0xBu);
  if ( !(v9 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A42F0) )
  {
    sub_6ACFE(&xmmword_1A42C0, v14);
    _cxa_atexit((void (*)(void *))sub_6ADF8, &xmmword_1A42C0, &off_110560);
    j___cxa_guard_release((__guard *)&byte_1A42F0);
  }
  v10 = a5;
  if ( byte_1A42EE )
  {
    v11.n128_u64[0] = 0x5A5A5A5A5A5A5A5ALL;
    v11.n128_u64[1] = 0x5A5A5A5A5A5A5A5ALL;
    byte_1A42E3 ^= 0x5Au;
    xmmword_1A42C0 = (__int128)veorq_s64((int64x2_t)xmmword_1A42C0, v11);
    byte_1A42E4 ^= 0x5Au;
    byte_1A42E5 ^= 0x5Au;
    byte_1A42E6 ^= 0x5Au;
    byte_1A42E2 ^= 0x5Au;
    xmmword_1A42D0 = (__int128)veorq_s64((int64x2_t)xmmword_1A42D0, v11);
    byte_1A42E1 ^= 0x5Au;
    byte_1A42E7 ^= 0x5Au;
    byte_1A42E8 ^= 0x5Au;
    byte_1A42E0 ^= 0x5Au;
    v10 = a5;
    byte_1A42E9 ^= 0x5Au;
    byte_1A42EA ^= 0x5Au;
    byte_1A42EB ^= 0x5Au;
    byte_1A42EC ^= 0x5Au;
    byte_1A42ED ^= 0x5Au;
    byte_1A42EE ^= 0x5Au;
  }
  _android_log_print(4, "SAMP_ORIG", (const char *)&xmmword_1A42C0);
  v12 = (int *)operator new(0x64u);
  sub_68984(v12, a1, a2, a3, v10);
  byte_1A41DC = a4 != 0;
  dword_1A41D8 = (int)v12;
  if ( a4 )
    _android_log_print(4, "SAMP_ORIG", "REMAKE GAY KAVN");
  return v16;
}


// ======================================================================
