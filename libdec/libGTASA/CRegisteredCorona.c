
// Address: 0x19ec1c
// Original: j__ZN17CRegisteredCorona6UpdateEv
// Demangled: CRegisteredCorona::Update(void)
// attributes: thunk
int __fastcall CRegisteredCorona::Update(CRegisteredCorona *this)
{
  return _ZN17CRegisteredCorona6UpdateEv(this);
}


// ============================================================

// Address: 0x5a202c
// Original: _ZN17CRegisteredCorona6UpdateEv
// Demangled: CRegisteredCorona::Update(void)
int *__fastcall CRegisteredCorona::Update(CRegisteredCorona *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d1
  float32x2_t v3; // d2
  char v5; // r0
  int v6; // r2
  double v7; // d16
  __int64 *v8; // r2
  unsigned int v9; // r0
  bool v10; // zf
  int *result; // r0
  unsigned int v12; // r1
  unsigned int v13; // s0
  bool v14; // [sp+14h] [bp-1Ch]
  double v15; // [sp+18h] [bp-18h] BYREF
  int v16; // [sp+20h] [bp-10h]

  if ( !*((_BYTE *)this + 49) )
    *((_BYTE *)this + 47) = 0;
  if ( (*((_BYTE *)this + 54) & 0x10) != 0 && !*((_DWORD *)this + 14) )
  {
    *((_DWORD *)this + 3) = 0;
    result = &CCoronas::NumCoronas;
    --CCoronas::NumCoronas;
    return result;
  }
  v5 = *((_BYTE *)this + 52);
  if ( (v5 & 1) != 0 )
  {
    if ( CCoronas::SunBlockedByClouds && *((_DWORD *)this + 3) == 2 )
      goto LABEL_17;
    v6 = dword_951FBC + 48;
    if ( !dword_951FBC )
      v6 = (int)&qword_951FAC;
    v7 = *(double *)v6;
    v16 = *(_DWORD *)&byte_8[v6];
    v15 = v7;
    if ( CWorld::GetIsLineOfSightClear(
           this,
           (const CVector *)&v15,
           (const CVector *)((char *)&stderr + 1),
           0,
           0,
           0,
           0,
           0,
           0,
           v14) != 1 )
      goto LABEL_17;
    v5 = *((_BYTE *)this + 52);
  }
  if ( (v5 & 2) == 0 )
  {
    if ( (*((_BYTE *)this + 54) & 2) == 0 )
      goto LABEL_23;
    v8 = (__int64 *)(dword_951FBC + 48);
    if ( !dword_951FBC )
      v8 = &qword_951FAC;
    if ( *((float *)v8 + 2) <= *((float *)this + 2) )
    {
LABEL_23:
      v9 = *((unsigned __int8 *)this + 47);
      v12 = *((unsigned __int8 *)this + 48);
      if ( v9 <= v12 )
      {
        if ( v9 >= v12 )
        {
          v9 = *((unsigned __int8 *)this + 48);
LABEL_32:
          if ( *((_DWORD *)this + 3) == 2 )
          {
            v3.n64_u32[0] = 1058642330;
            v1.n64_f32[0] = CCoronas::ScreenMult + (float)(*(float *)&CTimer::ms_fTimeStep * -0.06);
            LODWORD(CCoronas::ScreenMult) = vmax_f32(v1, v3).n64_u32[0];
          }
          goto LABEL_18;
        }
        v2.n64_f32[0] = (float)v9;
        v1.n64_f32[0] = (float)*((unsigned __int8 *)this + 48)
                      - (float)(*(float *)&CTimer::ms_fTimeStep * *((float *)this + 10));
        v1.n64_u64[0] = vmax_f32(v1, v2).n64_u64[0];
      }
      else
      {
        v2.n64_f32[0] = (float)v9;
        v1.n64_f32[0] = (float)(*(float *)&CTimer::ms_fTimeStep * *((float *)this + 10))
                      + (float)*((unsigned __int8 *)this + 48);
        v1.n64_u64[0] = vmin_f32(v1, v2).n64_u64[0];
      }
      v13 = (unsigned int)v1.n64_f32[0];
      *((_BYTE *)this + 48) = v13;
      if ( !CCoronas::bChangeBrightnessImmediately )
        v9 = v13;
      *((_BYTE *)this + 48) = v9;
      goto LABEL_32;
    }
  }
LABEL_17:
  v2.n64_u32[0] = 0;
  v1.n64_f32[0] = (float)*((unsigned __int8 *)this + 48)
                - (float)(*(float *)&CTimer::ms_fTimeStep * *((float *)this + 10));
  v9 = (unsigned int)vmax_f32(v1, v2).n64_f32[0];
  *((_BYTE *)this + 48) = v9;
LABEL_18:
  v10 = v9 == 0;
  if ( !v9 )
    v10 = *((_BYTE *)this + 53) == 0;
  if ( v10 )
  {
    *((_DWORD *)this + 3) = 0;
    --CCoronas::NumCoronas;
  }
  result = 0;
  *((_BYTE *)this + 49) = 0;
  *((_BYTE *)this + 53) = 0;
  return result;
}


// ============================================================
