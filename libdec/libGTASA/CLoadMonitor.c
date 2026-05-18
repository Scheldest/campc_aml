
// Address: 0x18d9e4
// Original: j__ZN12CLoadMonitor8EndTimerE9ELoadType
// Demangled: CLoadMonitor::EndTimer(ELoadType)
// attributes: thunk
int CLoadMonitor::EndTimer(void)
{
  return _ZN12CLoadMonitor8EndTimerE9ELoadType();
}


// ============================================================

// Address: 0x1960c8
// Original: j__ZN12CLoadMonitor10StartTimerE9ELoadType
// Demangled: CLoadMonitor::StartTimer(ELoadType)
// attributes: thunk
int CLoadMonitor::StartTimer()
{
  return _ZN12CLoadMonitor10StartTimerE9ELoadType();
}


// ============================================================

// Address: 0x196cb0
// Original: j__ZN12CLoadMonitor10BeginFrameEv
// Demangled: CLoadMonitor::BeginFrame(void)
// attributes: thunk
int __fastcall CLoadMonitor::BeginFrame(CLoadMonitor *this)
{
  return _ZN12CLoadMonitor10BeginFrameEv(this);
}


// ============================================================

// Address: 0x19d4ac
// Original: j__ZN12CLoadMonitor8EndFrameEv
// Demangled: CLoadMonitor::EndFrame(void)
// attributes: thunk
int __fastcall CLoadMonitor::EndFrame(CLoadMonitor *this)
{
  return _ZN12CLoadMonitor8EndFrameEv(this);
}


// ============================================================

// Address: 0x3f4f00
// Original: _ZN12CLoadMonitorC2Ev
// Demangled: CLoadMonitor::CLoadMonitor(void)
void __fastcall CLoadMonitor::CLoadMonitor(CLoadMonitor *this)
{
  int v2; // r0

  *((_DWORD *)this + 1) = 1;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 5) = 0;
  *((_BYTE *)this + 28) = 1;
  v2 = CTimer::m_snTimeInMilliseconds;
  *(_QWORD *)((char *)this + 76) = 0LL;
  *(_QWORD *)((char *)this + 84) = 0LL;
  *((_DWORD *)this + 8) = v2;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  memset((char *)this + 140, 0, 0x90u);
  *(_QWORD *)((char *)this + 108) = 0x41A0000041700000LL;
  *(_QWORD *)((char *)this + 116) = 0x4248000041200000LL;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
}


// ============================================================

// Address: 0x3f4f64
// Original: _ZN12CLoadMonitorD2Ev
// Demangled: CLoadMonitor::~CLoadMonitor()
void __fastcall CLoadMonitor::~CLoadMonitor(CLoadMonitor *this)
{
  ;
}


// ============================================================

// Address: 0x3f4f66
// Original: _ZN12CLoadMonitor10BeginFrameEv
// Demangled: CLoadMonitor::BeginFrame(void)
_QWORD *__fastcall CLoadMonitor::BeginFrame(CLoadMonitor *this)
{
  _QWORD *result; // r0

  *(_DWORD *)this = 1;
  result = (_QWORD *)((char *)this + 60);
  *result = 0LL;
  result[1] = 0LL;
  return result;
}


// ============================================================

// Address: 0x3f4f76
// Original: _ZN12CLoadMonitor10StartTimerE9ELoadType
// Demangled: CLoadMonitor::StartTimer(ELoadType)
int __fastcall CLoadMonitor::StartTimer(CTimer *a1, int a2)
{
  char *v2; // r4
  int result; // r0

  v2 = (char *)a1 + 4 * a2;
  result = CTimer::GetCurrentTimeInCycles(a1);
  *((_DWORD *)v2 + 11) = result;
  return result;
}


// ============================================================

// Address: 0x3f4f86
// Original: _ZN12CLoadMonitor8EndTimerE9ELoadType
// Demangled: CLoadMonitor::EndTimer(ELoadType)
int __fastcall CLoadMonitor::EndTimer(CTimer *a1, int a2)
{
  char *v2; // r4
  int result; // r0

  v2 = (char *)a1 + 4 * a2;
  result = CTimer::GetCurrentTimeInCycles(a1) - *((_DWORD *)v2 + 11) + *((_DWORD *)v2 + 15);
  *((_DWORD *)v2 + 15) = result;
  return result;
}


// ============================================================

// Address: 0x3f4fa0
// Original: _ZN12CLoadMonitor8EndFrameEv
// Demangled: CLoadMonitor::EndFrame(void)
int __fastcall CLoadMonitor::EndFrame(CLoadMonitor *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d1
  int PlayerPed; // r0
  float *v5; // r3
  bool v6; // zf
  float *v7; // r1
  float *v8; // r2
  float *v9; // r0
  unsigned int v10; // r0
  unsigned int v11; // s0
  unsigned int v12; // r0
  unsigned int v13; // r1
  float v14; // s0
  unsigned int v15; // s2
  unsigned int v16; // r0
  unsigned int v17; // r1
  float v18; // s4
  unsigned int v19; // s2
  unsigned int v20; // r0
  unsigned int v21; // r1
  float v22; // s2
  int v23; // r2
  float v24; // s6
  unsigned int v25; // r2
  int result; // r0
  unsigned int v27; // r0
  float v28; // s10
  __int64 v29; // d16
  __int64 v30; // d17
  __int64 v31; // d18
  __int64 v32; // d19
  int v33; // r4
  __int64 v34; // r0
  int v35; // lr
  int v36; // r3
  int v37; // r12
  __int64 v38; // d20
  __int64 v39; // d21
  float v40; // s6
  __int64 v41; // d22
  __int64 v42; // d23
  int v43; // r2
  int v44; // r5
  int v45; // r6
  float *v46; // r4
  float v47; // s24
  unsigned int v48; // r0
  unsigned int *v49; // r1
  float v50; // s0

  PlayerPed = FindPlayerPed(-1);
  if ( PlayerPed )
  {
    v6 = *(unsigned __int8 *)(PlayerPed + 1157) << 31 == 0;
    if ( *(unsigned __int8 *)(PlayerPed + 1157) << 31 )
    {
      v5 = *(float **)(PlayerPed + 1424);
      v6 = v5 == 0;
    }
    if ( v6 )
    {
      v7 = (float *)(PlayerPed + 80);
      v8 = (float *)(PlayerPed + 76);
      v9 = (float *)(PlayerPed + 72);
    }
    else
    {
      v7 = v5 + 20;
      v8 = v5 + 19;
      v9 = v5 + 18;
    }
    *((_DWORD *)this + 18) = (unsigned int)sqrtf(
                                             (float)((float)((float)(*v8 * 50.0) * (float)(*v8 * 50.0))
                                                   + (float)((float)(*v9 * 50.0) * (float)(*v9 * 50.0)))
                                           + (float)((float)(*v7 * 50.0) * (float)(*v7 * 50.0)));
  }
  v10 = *((_DWORD *)this + 15);
  v11 = v10;
  if ( v10 > *((_DWORD *)this + 19) )
    *((_DWORD *)this + 19) = v10;
  v12 = *((_DWORD *)this + 16);
  v13 = *((_DWORD *)this + 20);
  v14 = *((float *)this + 35) + (float)v11;
  v15 = v12;
  *((float *)this + 35) = v14;
  if ( v12 > v13 )
    *((_DWORD *)this + 20) = v12;
  v16 = *((_DWORD *)this + 17);
  v17 = *((_DWORD *)this + 21);
  v18 = *((float *)this + 36) + (float)v15;
  v19 = v16;
  *((float *)this + 36) = v18;
  if ( v16 > v17 )
    *((_DWORD *)this + 21) = v16;
  v20 = *((_DWORD *)this + 18);
  v21 = *((_DWORD *)this + 22);
  v22 = *((float *)this + 37) + (float)v19;
  *((float *)this + 37) = v22;
  if ( v20 > v21 )
    *((_DWORD *)this + 22) = v20;
  v23 = *((_DWORD *)this + 8);
  v24 = *((float *)this + 38) + (float)v20;
  *((float *)this + 38) = v24;
  v25 = CTimer::m_snTimeInMilliseconds - v23;
  if ( v25 <= 0x7D0 )
  {
    v27 = *((_DWORD *)this + 9);
    if ( v25 >> 3 > 0x7C )
    {
      *((_DWORD *)this + 8) = CTimer::m_snTimeInMilliseconds;
      *((_DWORD *)this + 10) = v27;
      if ( !v27 )
      {
        v27 = 1;
        *((_DWORD *)this + 9) = 1;
      }
      v28 = (float)v27;
      v29 = *(_QWORD *)((char *)this + 156);
      v30 = *(_QWORD *)((char *)this + 164);
      v31 = *(_QWORD *)((char *)this + 196);
      v32 = *(_QWORD *)((char *)this + 204);
      v33 = *((_DWORD *)this + 45);
      v34 = *(_QWORD *)((char *)this + 188);
      v35 = *((_DWORD *)this + 59);
      v36 = *((_DWORD *)this + 60);
      v37 = *((_DWORD *)this + 67);
      v38 = *(_QWORD *)((char *)this + 220);
      v39 = *(_QWORD *)((char *)this + 228);
      v40 = (float)(1.0 / v28) * v24;
      v41 = *(_QWORD *)((char *)this + 252);
      v42 = *(_QWORD *)((char *)this + 260);
      v43 = *((_DWORD *)this + 69);
      *((_QWORD *)this + 22) = *(_QWORD *)((char *)this + 172);
      v44 = 0;
      *((_DWORD *)this + 46) = v33;
      v45 = 0;
      *((_QWORD *)this + 20) = v29;
      *((_QWORD *)this + 21) = v30;
      *((_DWORD *)this + 54) = *((_DWORD *)this + 53);
      *((_DWORD *)this + 9) = 0;
      *((_DWORD *)this + 49) = HIDWORD(v34);
      *((float *)this + 38) = v40;
      *((_QWORD *)this + 25) = v31;
      *((_QWORD *)this + 26) = v32;
      HIDWORD(v34) = *((_DWORD *)this + 61);
      *((_DWORD *)this + 48) = v34;
      LODWORD(v34) = *((_DWORD *)this + 68);
      *((_DWORD *)this + 35) = 0;
      *((_DWORD *)this + 39) = (unsigned int)(float)((float)(1.0 / v28) * v14);
      *((_DWORD *)this + 47) = (unsigned int)(float)((float)(1.0 / v28) * v18);
      *((_DWORD *)this + 36) = 0;
      *((_DWORD *)this + 62) = HIDWORD(v34);
      *((_QWORD *)this + 28) = v38;
      *((_QWORD *)this + 29) = v39;
      *((_DWORD *)this + 60) = v35;
      *((_DWORD *)this + 61) = v36;
      *((_DWORD *)this + 37) = 0;
      *((_DWORD *)this + 5) = 0;
      *((_DWORD *)this + 55) = (unsigned int)(float)((float)(1.0 / v28) * v22);
      *((_DWORD *)this + 70) = v43;
      *((_DWORD *)this + 38) = 0;
      *((_QWORD *)this + 32) = v41;
      *((_QWORD *)this + 33) = v42;
      *((_DWORD *)this + 68) = v37;
      *((_DWORD *)this + 69) = v34;
      *((_DWORD *)this + 63) = (unsigned int)v40;
      do
      {
        v46 = (float *)((char *)this + v44);
        v47 = 0.0;
        v48 = *(_DWORD *)((char *)this + v44 + 76);
        if ( v48 )
        {
          v49 = (unsigned int *)((char *)this + 8 * v44);
          v2.n64_f32[0] = (float)v48;
          v1.n64_f32[0] = (float)((float)((float)((float)((float)((float)((float)((float)v49[39] + (float)v49[40])
                                                                        + (float)v49[41])
                                                                + (float)v49[42])
                                                        + (float)v49[43])
                                                + (float)v49[44])
                                        + (float)v49[45])
                                + (float)v49[46])
                        * 0.125;
          LODWORD(v47) = vmin_f32(v1, v2).n64_u32[0];
        }
        v46[23] = v47;
        if ( (v45 & 0xFFFFFFFE) != 2 )
          v47 = v47 / (float)(unsigned int)CTimer::GetCyclesPerMillisecond((CTimer *)(v45 & 0xFFFFFFFE));
        v50 = v47 / v46[27];
        if ( v50 <= 0.66666 || *((int *)this + 5) > 1 )
        {
          if ( v50 > 0.33333 && *((int *)this + 5) <= 0 )
            *((_DWORD *)this + 5) = 1;
        }
        else
        {
          *((_DWORD *)this + 5) = 2;
        }
        v46[31] = v50;
        v44 += 4;
        ++v45;
        v46[23] = v46[23] / (float)*((unsigned int *)v46 + 19);
      }
      while ( v44 != 16 );
    }
    else
    {
      *((_DWORD *)this + 9) = v27 + 1;
    }
    result = *((_DWORD *)this + 2);
    if ( result )
    {
      result = *((_DWORD *)this + 6);
      *((_DWORD *)this + 5) = result;
    }
  }
  else
  {
    result = 0;
    *((_DWORD *)this + 8) = CTimer::m_snTimeInMilliseconds;
    *((_DWORD *)this + 9) = 0;
  }
  return result;
}


// ============================================================

// Address: 0x3f530c
// Original: _ZN12CLoadMonitor6RenderEv
// Demangled: CLoadMonitor::Render(void)
void __fastcall CLoadMonitor::Render(CLoadMonitor *this)
{
  ;
}


// ============================================================
