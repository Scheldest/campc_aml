
// Address: 0x189df4
// Original: j__ZNK33CEntitySeekPosCalculatorVehicleId20ComputeEntitySeekPosERK4CPedRK7CEntityR7CVector
// Demangled: CEntitySeekPosCalculatorVehicleId::ComputeEntitySeekPos(CPed const&,CEntity const&,CVector &)
// attributes: thunk
int __fastcall CEntitySeekPosCalculatorVehicleId::ComputeEntitySeekPos(
        CEntitySeekPosCalculatorVehicleId *this,
        const CPed *a2,
        const CEntity *a3,
        CVector *a4)
{
  return _ZNK33CEntitySeekPosCalculatorVehicleId20ComputeEntitySeekPosERK4CPedRK7CEntityR7CVector(this, a2, a3, a4);
}


// ============================================================

// Address: 0x54458c
// Original: _ZNK33CEntitySeekPosCalculatorVehicleId20ComputeEntitySeekPosERK4CPedRK7CEntityR7CVector
// Demangled: CEntitySeekPosCalculatorVehicleId::ComputeEntitySeekPos(CPed const&,CEntity const&,CVector &)
int __fastcall CEntitySeekPosCalculatorVehicleId::ComputeEntitySeekPos(
        CEntitySeekPosCalculatorVehicleId *this,
        const CPed *a2,
        const CEntity *a3,
        CVector *a4)
{
  float *v6; // r0
  float *v8; // r1
  float v9; // s18
  float v10; // s20
  float v11; // s22
  float v12; // s0
  float v13; // s24
  float v14; // s4
  float v15; // s16
  float v16; // s2
  float v17; // s6
  float v18; // r4
  float *v19; // r1
  int result; // r0
  float v21; // s12
  float v22; // s10
  float v23; // s8
  float v24; // s4
  float v25; // s14
  float v26; // s8
  float v27; // s0
  float v28; // s4
  float v29; // s8
  float v30; // s10
  float v31; // s8
  float v32; // s4
  float v33; // s1
  float v34; // s8

  v6 = (float *)*((_DWORD *)a3 + 5);
  v8 = v6 + 12;
  if ( !v6 )
    v8 = (float *)((char *)a3 + 4);
  v9 = *v8;
  v10 = v8[1];
  v11 = v8[2];
  if ( v6 )
  {
    v12 = *v6;
    v13 = v6[1];
    v14 = v6[2];
    v15 = v6[4];
    v16 = v6[5];
    v17 = v6[6];
  }
  else
  {
    v18 = *((float *)a3 + 4);
    v13 = sinf(v18);
    v15 = -v13;
    v17 = 0.0;
    v16 = cosf(v18);
    v12 = v16;
    v14 = 0.0;
  }
  v19 = *(float **)(LODWORD(CModelInfo::ms_modelInfoPtrs[*((__int16 *)a3 + 19)]) + 44);
  result = *((_DWORD *)this + 1);
  v21 = v19[1];
  v22 = v19[4];
  if ( result > 2 )
  {
    v31 = v19[3] + 0.5;
    v32 = v14 * v31;
    v33 = v13 * v31;
    v34 = v12 * v31;
    v27 = v11 + v32;
    v28 = v10 + v33;
    v29 = v9 + v34;
    if ( result == 5 )
    {
      v30 = v21 * 0.5;
      goto LABEL_15;
    }
    if ( result == 3 )
    {
      v30 = v22 * 0.5;
      goto LABEL_15;
    }
  }
  else
  {
    v23 = *v19 + -0.5;
    v24 = v14 * v23;
    v25 = v13 * v23;
    v26 = v12 * v23;
    v27 = v11 + v24;
    v28 = v10 + v25;
    v29 = v9 + v26;
    if ( result == 2 )
    {
      v30 = v21 * 0.5;
      goto LABEL_15;
    }
    if ( !result )
    {
      v30 = v22 * 0.5;
LABEL_15:
      v27 = (float)(v17 * v30) + v27;
      v28 = (float)(v16 * v30) + v28;
      v29 = (float)(v15 * v30) + v29;
    }
  }
  *(float *)a4 = v29;
  *((float *)a4 + 1) = v28;
  *((float *)a4 + 2) = v27;
  return result;
}


// ============================================================
