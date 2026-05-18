// ADDR: 0xe2db8
// SYMBOL: sub_E2DB8
int __fastcall sub_E2DB8(_DWORD **a1, unsigned int a2)
{
  bool v2; // cf
  int v3; // r2
  int32x4_t v4; // q10
  int32x4_t v5; // q8
  int16x8_t v6; // q8
  int32x4_t v7; // q9
  uint32x4_t v8; // q9
  uint32x4_t v9; // q11

  if ( a2 < 0x1100 )
  {
    v3 = 1;
  }
  else
  {
    v2 = a2 >= 0x1160;
    v3 = 2;
    if ( a2 >= 0x1160 )
      v2 = a2 - 9001 >= 2;
    if ( v2 )
    {
      v4 = vdupq_n_s32(a2);
      v5.n128_u64[0] = 0xFFFF01D0FFFF0100LL;
      v5.n128_u64[1] = 0xFFFF0700FFFF01F0LL;
      v6 = vaddq_s32(v4, v5);
      v7.n128_u64[0] = 0xFFFD0000FFFE0D00LL;
      v7.n128_u64[1] = 0xFFFF0020FFFE0000LL;
      v8 = vaddq_s32(v4, v7);
      v4.n128_u64[0] = 0x4000000061LL;
      v4.n128_u64[1] = 0x2000000000ALL;
      v9.n128_u64[0] = 0xFFFE00000350LL;
      v9.n128_u64[1] = 0x70000FFFELL;
      *(int16x4_t *)&v6.n128_i8[8] = vmovn_s32(vcgtq_u32(v4, v6));
      v6.n128_u64[0] = vmovn_s32(vcgtq_u32(v9, v8)).n64_u64[0];
      v6.n128_u64[0] = vmovn_s16(v6).n64_u64[0];
      v3 = 2;
      if ( !((v6.n128_u8[0] & 1 | (2 * (v6.n128_u8[1] & 1)) | (4 * (v6.n128_u8[2] & 1)) | (8 * (v6.n128_u8[3] & 1)) | (16 * (v6.n128_u8[4] & 1)) | (32 * (v6.n128_u8[5] & 1)) | ((v6.n128_u8[6] & 1) << 6) | (v6.n128_u8[7] << 7)) << 24)
        && a2 - 44032 >= 0x2BA4
        && (a2 == 12351 || a2 - 11904 >= 0x7650) )
      {
        v3 = 1;
        if ( a2 >> 8 == 505 )
          v3 = 2;
      }
    }
  }
  **a1 += v3;
  return 1;
}


// ======================================================================
