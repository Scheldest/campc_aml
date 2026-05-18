
// Address: 0x40d5c0
// Original: _ZN8CProfile10InitialiseEv
// Demangled: CProfile::Initialise(void)
int __fastcall CProfile::Initialise(CProfile *this, const char *a2)
{
  __int64 v2; // d17
  __int64 v3; // d16

  CDebug::DebugLog((CDebug *)"Initialising CProfile...\n", a2);
  LODWORD(v2) = "Collision";
  LODWORD(v3) = "Frame rate";
  HIDWORD(v2) = "Ped AI";
  HIDWORD(v3) = "Physics";
  CProfile::ms_afMaxEndTime = 0LL;
  *(_QWORD *)&dword_95AD10 = 0LL;
  CProfile::ms_afMaxCumulativeTime = 0LL;
  *(_QWORD *)&dword_95AD2C = 0LL;
  dword_95AD00 = (int)"Rendering time";
  unk_95AD04 = "Total";
  dword_95ACE4 = -65536;
  unk_95ACE8 = -1;
  CProfile::ms_pProfileString = v3;
  unk_95ACF4 = v2;
  unk_95ACD4 = 0xFFFFFF00FFFF7F00LL;
  unk_95ACDC = 0xFF00FF00FF0000FFLL;
  *(_QWORD *)&dword_95AD14 = 0LL;
  *(_QWORD *)&dword_95AD1C = 0LL;
  *(_QWORD *)&dword_95AD30 = 0LL;
  *(_QWORD *)&dword_95AD38 = 0LL;
  dword_95ACFC = (int)"Processing time";
  return j_CDebug::DebugLog((CDebug *)"CProfile ready\n", "Processing time");
}


// ============================================================

// Address: 0x40d6e4
// Original: _ZN8CProfile14SuspendProfileE8eProfile
// Demangled: CProfile::SuspendProfile(eProfile)
float *__fastcall CProfile::SuspendProfile(int a1)
{
  float v1; // s0
  float *v2; // r1
  float *result; // r0
  float v4; // s2

  v1 = 0.0 - CProfile::ms_afStartTime[a1];
  v2 = (float *)((char *)&CProfile::ms_afEndTime + 4 * a1);
  result = (float *)((char *)&CProfile::ms_afCumulativeTime + 4 * a1);
  v4 = *result;
  *v2 = v1;
  *result = v1 + v4;
  return result;
}


// ============================================================

// Address: 0x40d730
// Original: _ZN8CProfile11ShowResultsEv
// Demangled: CProfile::ShowResults(void)
_DWORD *__fastcall CProfile::ShowResults(CProfile *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d3
  float32x2_t v3; // d6
  float32x2_t v4; // d8
  _DWORD *v5; // r3
  _DWORD *result; // r0
  void *v7; // r2
  _DWORD *v8; // r1
  void *v9; // r2
  void *v10; // r2
  void *v11; // r2
  void *v12; // r2
  void *v13; // r2
  _DWORD *v14; // r2
  _DWORD *v15; // r2
  _DWORD *v16; // r2
  _DWORD *v17; // r2

  v5 = &CProfile::ms_afEndTime;
  result = &CProfile::ms_afMaxCumulativeTime;
  v7 = &CProfile::ms_afMaxEndTime;
  v8 = &CProfile::ms_afCumulativeTime;
  v1.n64_u32[0] = CProfile::ms_afMaxEndTime;
  v2.n64_u32[0] = CProfile::ms_afEndTime;
  v3.n64_u32[0] = CProfile::ms_afMaxCumulativeTime;
  v4.n64_u32[0] = CProfile::ms_afCumulativeTime;
  CProfile::ms_afMaxEndTime = vmax_f32(v2, v1).n64_u32[0];
  CProfile::ms_afMaxCumulativeTime = vmax_f32(v4, v3).n64_u32[0];
  if ( *(float *)&dword_95AC9C > *(float *)&dword_95AD0C )
    v7 = &CProfile::ms_afEndTime;
  dword_95AD0C = *(_DWORD *)&byte_4[(_DWORD)v7];
  v9 = &CProfile::ms_afMaxCumulativeTime;
  if ( *(float *)&dword_95ACB8 > *(float *)&dword_95AD28 )
    v9 = &CProfile::ms_afCumulativeTime;
  dword_95AD28 = *(_DWORD *)&byte_4[(_DWORD)v9];
  v10 = &CProfile::ms_afMaxEndTime;
  if ( *(float *)&dword_95ACA0 > *(float *)&dword_95AD10 )
    v10 = &CProfile::ms_afEndTime;
  dword_95AD10 = *(_DWORD *)&byte_8[(_DWORD)v10];
  v11 = &CProfile::ms_afMaxCumulativeTime;
  if ( *(float *)&dword_95ACBC > *(float *)&dword_95AD2C )
    v11 = &CProfile::ms_afCumulativeTime;
  dword_95AD2C = *(_DWORD *)&byte_8[(_DWORD)v11];
  v12 = &CProfile::ms_afMaxEndTime;
  if ( *(float *)&dword_95ACA4 > *(float *)&dword_95AD14 )
    v12 = &CProfile::ms_afEndTime;
  dword_95AD14 = *(_DWORD *)&byte_9[(_DWORD)v12 + 3];
  v13 = &CProfile::ms_afMaxCumulativeTime;
  if ( *(float *)&dword_95ACC0 > *(float *)&dword_95AD30 )
    v13 = &CProfile::ms_afCumulativeTime;
  dword_95AD30 = *(_DWORD *)&byte_9[(_DWORD)v13 + 3];
  v14 = &CProfile::ms_afMaxEndTime;
  if ( *(float *)&dword_95ACA8 > *(float *)&dword_95AD18 )
    v14 = &CProfile::ms_afEndTime;
  dword_95AD18 = *(_DWORD *)((char *)&word_10 + (_DWORD)v14);
  v15 = &CProfile::ms_afMaxCumulativeTime;
  if ( *(float *)&dword_95ACC4 > *(float *)&dword_95AD34 )
    v15 = &CProfile::ms_afCumulativeTime;
  dword_95AD34 = *(_DWORD *)((char *)&word_10 + (_DWORD)v15);
  v16 = &CProfile::ms_afMaxEndTime;
  if ( *(float *)&dword_95ACAC > *(float *)&dword_95AD1C )
    v16 = &CProfile::ms_afEndTime;
  dword_95AD1C = *(int *)((char *)&dword_14 + (_DWORD)v16);
  v17 = &CProfile::ms_afMaxCumulativeTime;
  if ( *(float *)&dword_95ACC8 > *(float *)&dword_95AD38 )
    v17 = &CProfile::ms_afCumulativeTime;
  dword_95AD38 = *(int *)((char *)&dword_14 + (_DWORD)v17);
  if ( unk_95ACB0 <= *(float *)&dword_95AD20 )
    v5 = &CProfile::ms_afMaxEndTime;
  dword_95AD20 = *(int *)((char *)&off_18 + (_DWORD)v5);
  if ( *(float *)algn_95ACCC <= *(float *)&dword_95AD3C )
    v8 = &CProfile::ms_afMaxCumulativeTime;
  dword_95AD3C = *(int *)((char *)&off_18 + (_DWORD)v8);
  return result;
}


// ============================================================
