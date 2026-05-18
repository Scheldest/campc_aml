
// Address: 0x1903bc
// Original: j__ZN10CAutoPilot11ModifySpeedEf
// Demangled: CAutoPilot::ModifySpeed(float)
// attributes: thunk
int __fastcall CAutoPilot::ModifySpeed(CAutoPilot *this, float a2)
{
  return _ZN10CAutoPilot11ModifySpeedEf(this, a2);
}


// ============================================================

// Address: 0x19624c
// Original: j__ZN10CAutoPilot17RemoveOnePathNodeEv
// Demangled: CAutoPilot::RemoveOnePathNode(void)
// attributes: thunk
int __fastcall CAutoPilot::RemoveOnePathNode(CAutoPilot *this)
{
  return _ZN10CAutoPilot17RemoveOnePathNodeEv(this);
}


// ============================================================

// Address: 0x2e3504
// Original: _ZN10CAutoPilot11ModifySpeedEf
// Demangled: CAutoPilot::ModifySpeed(float)
int *__fastcall CAutoPilot::ModifySpeed(CAutoPilot *this, float a2)
{
  float32x2_t v2; // d2
  float32x2_t v3; // d9
  float v5; // s0
  float v6; // s2
  int *result; // r0
  unsigned int v8; // r2
  float v9; // s16
  int v10; // r11
  int v11; // r9
  int v12; // r5
  int v13; // s22
  float v14; // r8
  int v15; // r6
  float v16; // r0
  float v17; // s20
  float v18; // s4
  float v19; // s0
  float v20; // s2
  float v21; // s6
  float v22; // s0
  float v23; // s4
  float v24; // s2
  int v25; // s2
  float v26; // [sp+8h] [bp-80h]
  int v27; // [sp+Ch] [bp-7Ch]
  int v28; // [sp+10h] [bp-78h]
  int v29; // [sp+14h] [bp-74h]
  int v30; // [sp+18h] [bp-70h]
  int v31; // [sp+1Ch] [bp-6Ch]
  int v32; // [sp+20h] [bp-68h]
  int v33; // [sp+24h] [bp-64h]
  int v34; // [sp+28h] [bp-60h]
  int v35; // [sp+2Ch] [bp-5Ch]
  float v36[3]; // [sp+30h] [bp-58h] BYREF
  float v37[19]; // [sp+3Ch] [bp-4Ch] BYREF

  v2.n64_f32[0] = a2;
  v3.n64_u32[0] = 1008981770;
  v5 = (float)*((int *)this + 4);
  v6 = (float)(unsigned int)(CTimer::m_snTimeInMilliseconds - *((_DWORD *)this + 3));
  result = (int *)*((unsigned __int16 *)this + 10);
  *((_DWORD *)this + 14) = vmax_f32(v2, v3).n64_u32[0];
  if ( ThePaths[((unsigned int)result >> 10) + 513] )
  {
    v8 = *((unsigned __int16 *)this + 11);
    if ( ThePaths[(v8 >> 10) + 513] )
    {
      v9 = v6 / v5;
      v35 = 7 * (v8 & 0x3FF);
      v10 = 7 * ((unsigned __int16)result & 0x3FF);
      v11 = ThePaths[((unsigned int)result >> 10) + 585];
      v34 = ThePaths[(v8 >> 10) + 585];
      v12 = v11 + 14 * ((unsigned __int16)result & 0x3FF);
      v33 = v34 + 14 * (v8 & 0x3FF);
      v13 = *(char *)(v33 + 8);
      v32 = *((char *)this + 38);
      v30 = *((char *)this + 39);
      v29 = *((char *)this + 37);
      v31 = *(char *)(v33 + 9);
      v28 = *(char *)(v12 + 9);
      v27 = *(char *)(v12 + 8);
      v14 = COERCE_FLOAT(CCarPathLink::OneWayLaneOffset((CCarPathLink *)v12));
      v15 = *((char *)this + 40);
      v16 = COERCE_FLOAT(CCarPathLink::OneWayLaneOffset((CCarPathLink *)(ThePaths[(*((_WORD *)this + 11) >> 10) + 585]
                                                                       + 14 * (*((_WORD *)this + 11) & 0x3FF))));
      v17 = *((float *)this + 14);
      v18 = (float)(v14 + (float)v30) * 5.4;
      v19 = (float)((float)((float)((float)v28 * 0.01) * (float)v29) * v18)
          + (float)((float)*(__int16 *)(v11 + 2 * v10) * 0.125);
      v20 = (float)((float)*(__int16 *)(v12 + 2) * 0.125)
          - (float)((float)((float)((float)v27 * 0.01) * (float)v29) * v18);
      v21 = (float)(v16 + (float)v15) * 5.4;
      v37[2] = 0.0;
      v37[1] = v20;
      v37[0] = v19;
      v22 = (float)*(__int16 *)(v33 + 2);
      v23 = (float)*(__int16 *)(v34 + 2 * v35);
      v36[2] = 0.0;
      v36[1] = (float)(v22 * 0.125) - (float)((float)((float)((float)v13 * 0.01) * (float)v32) * v21);
      v36[0] = (float)((float)((float)((float)v31 * 0.01) * (float)v32) * v21) + (float)(v23 * 0.125);
      v24 = COERCE_FLOAT(
              CCurves::CalcSpeedScaleFactor(
                (CCurves *)v37,
                (const CVector *)v36,
                COERCE_CONST_CVECTOR_((float)((float)*(char *)(v12 + 8) * 0.01) * (float)*((char *)this + 37)),
                (float)((float)*(char *)(v12 + 9) * 0.01) * (float)*((char *)this + 37),
                (float)((float)*(char *)(v33 + 8) * 0.01) * (float)*((char *)this + 38),
                (float)((float)*(char *)(v33 + 9) * 0.01) * (float)*((char *)this + 38),
                v26));
      result = &CTimer::m_snTimeInMilliseconds;
      v25 = (int)(float)((float)(1000.0 / v17) * v24);
      *((_DWORD *)this + 4) = v25;
      *((_DWORD *)this + 3) = (int)(float)((float)(unsigned int)CTimer::m_snTimeInMilliseconds - (float)(v9 * (float)v25));
    }
  }
  return result;
}


// ============================================================

// Address: 0x2e37f0
// Original: _ZN10CAutoPilot17RemoveOnePathNodeEv
// Demangled: CAutoPilot::RemoveOnePathNode(void)
int __fastcall CAutoPilot::RemoveOnePathNode(int this)
{
  __int16 v1; // r1
  int v2; // r1
  int v3; // r2

  v1 = *(_WORD *)(this + 136) - 1;
  *(_WORD *)(this + 136) = v1;
  if ( v1 >= 1 )
  {
    v2 = 0;
    do
    {
      v3 = this + 4 * v2;
      v2 = (__int16)(v2 + 1);
      *(_DWORD *)(v3 + 104) = *(_DWORD *)(v3 + 108);
    }
    while ( v2 < *(__int16 *)(this + 136) );
  }
  return this;
}


// ============================================================
