
// Address: 0x18f0f4
// Original: j__ZN12CPlaneTrails6UpdateEv
// Demangled: CPlaneTrails::Update(void)
// attributes: thunk
int __fastcall CPlaneTrails::Update(CPlaneTrails *this)
{
  return _ZN12CPlaneTrails6UpdateEv(this);
}


// ============================================================

// Address: 0x5a6288
// Original: _ZN12CPlaneTrails4InitEv
// Demangled: CPlaneTrails::Init(void)
_QWORD *__fastcall CPlaneTrails::Init(CPlaneTrails *this)
{
  _QWORD *result; // r0

  unk_A2959C = 0LL;
  unk_A295A4 = 0LL;
  unk_A2958C = 0LL;
  unk_A29594 = 0LL;
  unk_A2957C = 0LL;
  unk_A29584 = 0LL;
  unk_A2969C = 0LL;
  unk_A296A4 = 0LL;
  unk_A2968C = 0LL;
  unk_A29694 = 0LL;
  unk_A2967C = 0LL;
  unk_A29684 = 0LL;
  unk_A2966C = 0LL;
  unk_A29674 = 0LL;
  unk_A2956C = 0LL;
  unk_A29574 = 0LL;
  qword_A2976C[6] = 0LL;
  qword_A2976C[7] = 0LL;
  qword_A2976C[4] = 0LL;
  qword_A2976C[5] = 0LL;
  result = qword_A2976C;
  qword_A2976C[2] = 0LL;
  qword_A2976C[3] = 0LL;
  qword_A2976C[0] = 0LL;
  qword_A2976C[1] = 0LL;
  return result;
}


// ============================================================

// Address: 0x5a66f4
// Original: _ZN12CPlaneTrails6UpdateEv
// Demangled: CPlaneTrails::Update(void)
unsigned int __fastcall CPlaneTrails::Update(CPlaneTrails *this)
{
  __int64 v1; // d8
  unsigned int result; // r0
  float v3; // r4
  float v4; // r5
  float v5; // r6
  float v6; // r0
  float v7; // r5
  float v8; // r6
  float v9; // r0
  float v10; // [sp+0h] [bp-70h]
  float v11; // [sp+44h] [bp-2Ch] BYREF
  float v12; // [sp+48h] [bp-28h]
  int v13; // [sp+4Ch] [bp-24h]
  __int64 v14; // [sp+50h] [bp-20h]

  result = dword_6E03FC;
  if ( dword_6E03FC >= 2 )
  {
    v14 = v1;
    v3 = (float)(CTimer::m_snTimeInMilliseconds & 0x1FFFF) * 0.000047937;
    v13 = 1141473280;
    v11 = sinf(v3) * 2590.0;
    v12 = cosf(v3) * 2200.0;
    CPlaneTrail::RegisterPoint();
    if ( (unsigned __int8)(CClock::ms_nGameClockHours - 7) >= 0x10u )
    {
      if ( (CTimer::m_snTimeInMilliseconds & 0x200) != 0 )
        CCoronas::RegisterCorona(
          (CCoronas *)((char *)&dword_64 + 1),
          0,
          (CEntity *)((char *)elf_hash_bucket + 3),
          0,
          0,
          0xFFu,
          (unsigned __int8)&v11,
          (const CVector *)0x40A00000,
          2000.0,
          COERCE_FLOAT(1),
          0,
          0,
          0,
          0,
          0.0,
          0.0,
          1.5,
          0.0,
          15.0,
          0.0,
          0,
          SLOBYTE(v11));
      else
        CCoronas::UpdateCoronaCoors(
          (CCoronas *)((char *)&dword_64 + 1),
          (unsigned int)&v11,
          (const CVector *)0x44FA0000,
          0.0,
          v10);
    }
    v4 = (float)(CTimer::m_snTimeInMilliseconds & 0x1FFFF) * 0.000047937;
    v5 = sinf(v4);
    v6 = cosf(v4);
    v13 = 1140457472;
    v11 = v5 * 2000.0;
    v12 = v6 * -2600.0;
    CPlaneTrail::RegisterPoint();
    if ( (unsigned __int8)(CClock::ms_nGameClockHours - 7) >= 0xFu )
    {
      if ( ((CTimer::m_snTimeInMilliseconds + 350) & 0x200) != 0 )
        CCoronas::RegisterCorona(
          (CCoronas *)((char *)&dword_64 + 2),
          0,
          (CEntity *)((char *)elf_hash_bucket + 3),
          0xFFu,
          0x80u,
          0xFFu,
          (unsigned __int8)&v11,
          (const CVector *)0x40A00000,
          2000.0,
          COERCE_FLOAT(1),
          0,
          0,
          0,
          0,
          0.0,
          0.0,
          1.5,
          0.0,
          15.0,
          0.0,
          0,
          SLOBYTE(v11));
      else
        CCoronas::UpdateCoronaCoors(
          (CCoronas *)((char *)&dword_64 + 2),
          (unsigned int)&v11,
          (const CVector *)0x44FA0000,
          0.0,
          v10);
    }
    v7 = (float)(CTimer::m_snTimeInMilliseconds & 0x1FFFF) * 0.000047937;
    v8 = cosf(v7);
    v9 = sinf(v7);
    v13 = 1142292480;
    v11 = v8 * 2100.0;
    v12 = v9 * 1300.0;
    CPlaneTrail::RegisterPoint();
    result = (unsigned __int8)(CClock::ms_nGameClockHours - 6);
    if ( result >= 0xF )
    {
      if ( ((CTimer::m_snTimeInMilliseconds + 200) & 0x200) != 0 )
        return CCoronas::RegisterCorona(
                 (CCoronas *)((char *)&dword_64 + 3),
                 0,
                 (CEntity *)((char *)elf_hash_bucket + 3),
                 0xFFu,
                 0xFFu,
                 0xFFu,
                 (unsigned __int8)&v11,
                 (const CVector *)0x40A00000,
                 2000.0,
                 COERCE_FLOAT(1),
                 0,
                 0,
                 0,
                 0,
                 0.0,
                 0.0,
                 1.5,
                 0.0,
                 15.0,
                 0.0,
                 0,
                 SLOBYTE(v11));
      else
        return CCoronas::UpdateCoronaCoors(
                 (CCoronas *)((char *)&dword_64 + 3),
                 (unsigned int)&v11,
                 (const CVector *)0x44FA0000,
                 0.0,
                 v10);
    }
  }
  return result;
}


// ============================================================

// Address: 0x5a6a74
// Original: _ZN12CPlaneTrails6RenderEv
// Demangled: CPlaneTrails::Render(void)
unsigned int __fastcall CPlaneTrails::Render(CPlaneTrails *this)
{
  float32x2_t v1; // d1
  float32x2_t v2; // d4
  float v3; // s4
  unsigned int result; // r0
  unsigned int v5; // r1
  unsigned int v6; // r2

  v3 = CWeather::Foggyness;
  result = WORD2(qword_966574);
  v5 = HIWORD(qword_966574);
  if ( WORD1(qword_966574) > (unsigned int)WORD2(qword_966574) )
    result = WORD1(qword_966574);
  v6 = HIWORD(qword_966574);
  if ( result > HIWORD(qword_966574) )
    v6 = result;
  if ( (float)(1.0 - CWeather::CloudCoverage) < (float)(1.0 - CWeather::Foggyness) )
    v3 = CWeather::CloudCoverage;
  v2.n64_f32[0] = 1.0 - *(float *)&CWeather::Rain;
  v1.n64_f32[0] = 1.0 - v3;
  v1.n64_f32[0] = vmin_f32(v1, v2).n64_f32[0];
  if ( v1.n64_f32[0] >= (float)((float)v6 * 0.0039062) )
  {
    if ( result > HIWORD(qword_966574) )
      v5 = result;
    v1.n64_f32[0] = (float)v5 * 0.0039062;
  }
  if ( v1.n64_f32[0] > 0.0001 )
  {
    CPlaneTrail::Render((CPlaneTrail *)&CPlaneTrails::aArray, v1.n64_f32[0]);
    CPlaneTrail::Render((CPlaneTrail *)&unk_A295AC, v1.n64_f32[0]);
    return CPlaneTrail::Render((CPlaneTrail *)&unk_A296AC, v1.n64_f32[0]);
  }
  return result;
}


// ============================================================

// Address: 0x5a6e4c
// Original: _ZN12CPlaneTrails13RegisterPointE7CVectorj
// Demangled: CPlaneTrails::RegisterPoint(CVector,uint)
__int64 *__fastcall CPlaneTrails::RegisterPoint(int a1, int a2, int a3, int a4)
{
  return CPlaneTrail::RegisterPoint((__int64 *)&CPlaneTrails::aArray + 32 * a4, a1, a2, a3);
}


// ============================================================
