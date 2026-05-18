
// Address: 0x198bb0
// Original: j__ZN9Telemetry13SendTelemetryEv
// Demangled: Telemetry::SendTelemetry(void)
// attributes: thunk
int __fastcall Telemetry::SendTelemetry(Telemetry *this)
{
  return _ZN9Telemetry13SendTelemetryEv(this);
}


// ============================================================

// Address: 0x2acd38
// Original: _ZN9Telemetry13SendTelemetryEv
// Demangled: Telemetry::SendTelemetry(void)
int __fastcall Telemetry::SendTelemetry(Telemetry *this)
{
  int v1; // r0
  int8x16_t v2; // q9
  int8x16_t v3; // q8
  int32x4_t v4; // q9
  int32x4_t v5; // q8
  unsigned __int32 v6; // r3
  unsigned __int32 v7; // r6
  unsigned int v8; // r8
  unsigned int v9; // r1
  int8x16_t v10; // q8
  int8x16_t v11; // q9
  unsigned int v12; // r3
  int32x4_t *v13; // r0
  int32x4_t *v14; // r2
  int32x4_t v15; // q10
  int32x4_t v16; // q11
  int32x4_t v17; // q9
  int32x4_t v18; // q8
  unsigned __int32 v19; // r5
  unsigned __int32 v20; // r0
  unsigned int v21; // r2
  int *v22; // r3
  int *v23; // r1
  int v24; // r6
  int v25; // t1
  int v26; // t1
  const char *Buildinfo; // r5
  const char *v28; // r6
  const char *v29; // r0
  struct timeval tv; // [sp+8h] [bp-18h] BYREF

  gettimeofday(&tv, 0);
  gettimeofday(&tv, 0);
  v1 = (1000 * tv.tv_sec - firstStartTime) / 86400000;
  if ( v1 < 30 )
  {
    v8 = v1 + 1;
    if ( v1 < 0 )
    {
      v19 = 0;
      v20 = 0;
    }
    else
    {
      if ( v8 > 3 && (v9 = v8 & 0xFFFFFFFC, (v8 & 0xFFFFFFFC) != 0) )
      {
        v10 = 0uLL;
        v11 = 0uLL;
        v12 = v8 & 0xFFFFFFFC;
        v13 = (int32x4_t *)&DailyUse;
        v14 = (int32x4_t *)&TimeInBackground;
        do
        {
          v15 = *v14++;
          v12 -= 4;
          v11 = vaddq_s32(v15, v11);
          v16 = *v13++;
          v10 = vaddq_s32(v16, v10);
        }
        while ( v12 );
        v17 = vaddq_s32(v11, vextq_s8(v11, v10, 8u));
        v18 = vaddq_s32(v10, vextq_s8(v10, v10, 8u));
        v19 = vaddq_s32(v17, vdupq_lane_s32((int32x2_t)v17.n128_u64[0], 1)).n128_u32[0];
        v20 = vaddq_s32(v18, vdupq_lane_s32((int32x2_t)v18.n128_u64[0], 1)).n128_u32[0];
        if ( v8 == v9 )
          goto LABEL_15;
      }
      else
      {
        v20 = 0;
        v19 = 0;
        v9 = 0;
      }
      v21 = v8 - v9;
      v22 = (int *)&TimeInBackground + v9;
      v23 = (int *)&DailyUse + v9;
      do
      {
        v25 = *v22++;
        v24 = v25;
        --v21;
        v26 = *v23++;
        v19 += v24;
        v20 += v26;
      }
      while ( v21 );
    }
LABEL_15:
    v7 = v20 / v8;
    v6 = v19 / v8;
    goto LABEL_16;
  }
  v2 = vaddq_s32(
         (int32x4_t)xmmword_6F235C,
         vaddq_s32(
           (int32x4_t)xmmword_6F234C,
           vaddq_s32(
             (int32x4_t)xmmword_6F233C,
             vaddq_s32(
               (int32x4_t)xmmword_6F232C,
               vaddq_s32((int32x4_t)xmmword_6F231C, vaddq_s32((int32x4_t)xmmword_6F230C, (int32x4_t)TimeInBackground))))));
  v3 = vaddq_s32(
         (int32x4_t)xmmword_6F22E4,
         vaddq_s32(
           (int32x4_t)xmmword_6F22D4,
           vaddq_s32(
             (int32x4_t)xmmword_6F22C4,
             vaddq_s32(
               (int32x4_t)xmmword_6F22B4,
               vaddq_s32((int32x4_t)xmmword_6F22A4, vaddq_s32((int32x4_t)xmmword_6F2294, (int32x4_t)DailyUse))))));
  v4 = vaddq_s32(v2, vextq_s8(v2, v3, 8u));
  v5 = vaddq_s32(v3, vextq_s8(v3, v3, 8u));
  v6 = (unk_6F2370 + vaddq_s32(v4, vdupq_lane_s32((int32x2_t)v4.n128_u64[0], 1)).n128_u32[0] + dword_6F236C) / 0x1E;
  v7 = (unk_6F22F8 + dword_6F22F4 + vaddq_s32(v5, vdupq_lane_s32((int32x2_t)v5.n128_u64[0], 1)).n128_u32[0]) / 0x1E;
LABEL_16:
  sub_5E6BC0(strforjson, "{\"u\":%d,\"i\":%d}", v7, v6);
  TelemetryDataSend("usage", strforjson);
  OS_SystemGetBuildinfo(0);
  Buildinfo = (const char *)OS_SystemGetBuildinfo(0);
  v28 = (const char *)OS_SystemGetBuildinfo(1);
  v29 = (const char *)OS_SystemGetBuildinfo(2);
  sub_5E6BC0(strforjson, "{\"and_%s_%s_%s\"}", Buildinfo, v28, v29);
  TelemetryDataSend("device", strforjson);
  return TelemetryDataFlush();
}


// ============================================================
