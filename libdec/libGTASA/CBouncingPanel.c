
// Address: 0x18c0d8
// Original: j__ZN14CBouncingPanel12ProcessPanelEP8CVehicleP7RwFrame7CVectorS4_ff
// Demangled: CBouncingPanel::ProcessPanel(CVehicle *,RwFrame *,CVector,CVector,float,float)
// attributes: thunk
int __fastcall CBouncingPanel::ProcessPanel(
        int a1,
        int a2,
        int a3,
        int a4,
        float a5,
        float a6,
        int a7,
        int a8,
        int a9,
        float a10,
        float a11)
{
  return _ZN14CBouncingPanel12ProcessPanelEP8CVehicleP7RwFrame7CVectorS4_ff(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}


// ============================================================

// Address: 0x1935a4
// Original: j__ZN14CBouncingPanel8SetPanelEssf
// Demangled: CBouncingPanel::SetPanel(short,short,float)
// attributes: thunk
int __fastcall CBouncingPanel::SetPanel(CBouncingPanel *this, __int16 a2, __int16 a3, float a4)
{
  return _ZN14CBouncingPanel8SetPanelEssf(this, a2, a3, a4);
}


// ============================================================

// Address: 0x56f41a
// Original: _ZN14CBouncingPanel10ResetPanelEv
// Demangled: CBouncingPanel::ResetPanel(void)
_WORD *__fastcall CBouncingPanel::ResetPanel(_WORD *this)
{
  *this = -1;
  return this;
}


// ============================================================

// Address: 0x56f422
// Original: _ZN14CBouncingPanel8SetPanelEssf
// Demangled: CBouncingPanel::SetPanel(short,short,float)
_QWORD *__fastcall CBouncingPanel::SetPanel(CBouncingPanel *this, __int16 a2, __int16 a3, float a4)
{
  _QWORD *result; // r0

  *((_WORD *)this + 1) = a3;
  *(_WORD *)this = a2;
  *((float *)this + 1) = a4;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  result = (_QWORD *)((char *)this + 8);
  *result = 0LL;
  result[1] = 0LL;
  return result;
}


// ============================================================

// Address: 0x56f43c
// Original: _ZN14CBouncingPanel12ProcessPanelEP8CVehicleP7RwFrame7CVectorS4_ff
// Demangled: CBouncingPanel::ProcessPanel(CVehicle *,RwFrame *,CVector,CVector,float,float)
void __fastcall CBouncingPanel::ProcessPanel(
        int a1,
        int a2,
        int a3,
        float a4,
        float a5,
        float a6,
        __int64 a7,
        int a8,
        float a9,
        float a10)
{
  float32x2_t v10; // d1
  float32x2_t v11; // d2
  float32x2_t v12; // d3
  int v16; // r4
  float v17; // s8
  float32x2_t v18; // d2
  float *v19; // r0
  float v21; // s18
  float v22; // s20
  float v23; // s16
  float v24; // s22
  float v25; // s24
  float v26; // s28
  float v27; // s26
  float v28; // s8
  float v29; // s2
  float v30; // s10
  float v31; // s4
  float v32; // s6
  float **v33; // r0
  float *v34; // r0
  float *v35; // r6
  float v36; // r0
  float v37; // s2
  float *v38; // r0
  double v39; // [sp+8h] [bp-D8h] BYREF
  float v40; // [sp+10h] [bp-D0h]
  double v41; // [sp+18h] [bp-C8h] BYREF
  float v42; // [sp+20h] [bp-C0h]
  float v43; // [sp+24h] [bp-BCh]
  float v44; // [sp+28h] [bp-B8h]
  float v45; // [sp+2Ch] [bp-B4h]
  int v46; // [sp+30h] [bp-B0h] BYREF
  _BYTE v47[4]; // [sp+3Ch] [bp-A4h] BYREF
  float v48; // [sp+40h] [bp-A0h]
  float v49[4]; // [sp+44h] [bp-9Ch] BYREF
  int v50; // [sp+54h] [bp-8Ch] BYREF
  _DWORD v51[10]; // [sp+5Ch] [bp-84h] BYREF
  __int64 v52; // [sp+84h] [bp-5Ch] BYREF
  int v53; // [sp+8Ch] [bp-54h]

  v52 = a7;
  v53 = a8;
  CMatrix::CMatrix();
  Multiply3x3((const CMatrix *)&v46, *(const CVector **)(a2 + 20));
  CPhysical::GetSpeed();
  CrossProduct((const CVector *)&v41, (const CVector *)&v52);
  *(float *)&v41 = v43 - (float)(*(float *)&v41 + a4);
  *((float *)&v41 + 1) = v44 - (float)(*((float *)&v41 + 1) + a5);
  v42 = v45 - (float)(v42 + a6);
  Multiply3x3((const CVector *)&v39, (const CMatrix *)&v41);
  v42 = v40;
  v41 = v39;
  v16 = *(unsigned __int16 *)(a1 + 2);
  if ( v16 == 2 )
  {
    v11.n64_u32[0] = HIDWORD(v41);
    v17 = *(float *)(a1 + 4);
    v10.n64_f32[0] = CBouncingPanel::BOUNCE_VEL_CHANGE_LIMIT;
    v19 = (float *)(a1 + 24);
    v12.n64_f32[0] = -CBouncingPanel::BOUNCE_VEL_CHANGE_LIMIT;
    v18.n64_u64[0] = vmin_f32(v10, vmax_f32(v11, v12)).n64_u64[0];
    *(float *)(a1 + 20) = *(float *)(a1 + 20) + (float)(v17 * v18.n64_f32[0]);
    v18.n64_u32[0] = LODWORD(v41);
  }
  else
  {
    if ( v16 == 1 )
    {
      v11.n64_f32[0] = v42;
      v17 = *(float *)(a1 + 4);
      v10.n64_f32[0] = CBouncingPanel::BOUNCE_VEL_CHANGE_LIMIT;
      v12.n64_f32[0] = -CBouncingPanel::BOUNCE_VEL_CHANGE_LIMIT;
      v18.n64_u64[0] = vmin_f32(v10, vmax_f32(v11, v12)).n64_u64[0];
      *(float *)(a1 + 20) = *(float *)(a1 + 20) + (float)(v17 * v18.n64_f32[0]);
    }
    else
    {
      if ( *(_WORD *)(a1 + 2) )
        goto LABEL_9;
      v11.n64_f32[0] = v42;
      v17 = *(float *)(a1 + 4);
      v10.n64_f32[0] = CBouncingPanel::BOUNCE_VEL_CHANGE_LIMIT;
      v12.n64_f32[0] = -CBouncingPanel::BOUNCE_VEL_CHANGE_LIMIT;
      v18.n64_u64[0] = vmin_f32(v10, vmax_f32(v11, v12)).n64_u64[0];
      *(float *)(a1 + 24) = *(float *)(a1 + 24) + (float)(v17 * v18.n64_f32[0]);
    }
    v18.n64_u32[0] = HIDWORD(v41);
    v19 = (float *)(a1 + 28);
  }
  *v19 = (float)(v17 * vmin_f32(v10, vmax_f32(v18, v12)).n64_f32[0]) + *v19;
LABEL_9:
  if ( a9 <= -1.0 )
  {
    v23 = *(float *)(a1 + 8);
    v21 = *(float *)(a1 + 12);
    v22 = *(float *)(a1 + 16);
    if ( v16 == 2 )
    {
      v28 = CBouncingPanel::BOUNCE_HANGING_RETURN_MULT * v23;
      v29 = *(float *)(a1 + 24);
      v30 = CBouncingPanel::BOUNCE_HANGING_RETURN_MULT * v21;
      v31 = *(float *)(a1 + 28);
      v24 = *(float *)&CTimer::ms_fTimeStep;
      v32 = CBouncingPanel::BOUNCE_HANGING_RETURN_MULT * v22;
      v33 = (float **)&CBouncingPanel::BOUNCE_HANGING_DAMP_MULT;
    }
    else
    {
      v28 = CBouncingPanel::BOUNCE_SPRING_RETURN_MULT * v23;
      v29 = *(float *)(a1 + 24);
      v30 = CBouncingPanel::BOUNCE_SPRING_RETURN_MULT * v21;
      v31 = *(float *)(a1 + 28);
      v24 = *(float *)&CTimer::ms_fTimeStep;
      v32 = CBouncingPanel::BOUNCE_SPRING_RETURN_MULT * v22;
      v33 = (float **)&CBouncingPanel::BOUNCE_SPRING_DAMP_MULT;
    }
    v27 = *(float *)(a1 + 20) - (float)(v28 * v24);
    v25 = v29 - (float)(v30 * v24);
    v26 = v31 - (float)(v32 * v24);
    v34 = *v33;
    *(float *)(a1 + 20) = v27;
    *(float *)(a1 + 24) = v25;
    *(float *)(a1 + 28) = v26;
    a10 = *v34;
  }
  else
  {
    v21 = *(float *)(a1 + 12);
    v22 = *(float *)(a1 + 16);
    v23 = *(float *)(a1 + 8);
    v24 = *(float *)&CTimer::ms_fTimeStep;
    v25 = *(float *)(a1 + 24) - (float)((float)(v21 * a9) * *(float *)&CTimer::ms_fTimeStep);
    v26 = *(float *)(a1 + 28) - (float)((float)(v22 * a9) * *(float *)&CTimer::ms_fTimeStep);
    v27 = *(float *)(a1 + 20) - (float)((float)(v23 * a9) * *(float *)&CTimer::ms_fTimeStep);
    *(float *)(a1 + 20) = v27;
    *(float *)(a1 + 24) = v25;
    *(float *)(a1 + 28) = v26;
  }
  v35 = (float *)(a1 + 12);
  v36 = powf(a10, v24);
  v37 = (float)(v24 * (float)(v36 * v27)) + v23;
  *(float *)(a1 + 8) = v37;
  *(float *)(a1 + 12) = (float)(v24 * (float)(v36 * v25)) + v21;
  *(float *)(a1 + 16) = (float)(v24 * (float)(v36 * v26)) + v22;
  *(float *)(a1 + 20) = v36 * v27;
  *(float *)(a1 + 24) = v36 * v25;
  *(float *)(a1 + 28) = v36 * v26;
  switch ( v16 )
  {
    case 2:
      v38 = (float *)v51;
      *(float *)&v51[1] = v37;
      goto LABEL_21;
    case 1:
      v35 = (float *)(a1 + 8);
      v49[2] = (float)(v24 * (float)(v36 * v26)) + v22;
      v38 = (float *)&v50;
      goto LABEL_21;
    case 0:
      v48 = (float)(v24 * (float)(v36 * v26)) + v22;
      v38 = v49;
LABEL_21:
      *v38 = *v35;
      break;
  }
  CMatrix::UpdateRW((CMatrix *)v47);
  CMatrix::~CMatrix((CMatrix *)v47);
}


// ============================================================
