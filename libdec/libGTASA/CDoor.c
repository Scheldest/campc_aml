
// Address: 0x18cef0
// Original: j__ZN5CDoor13ProcessImpactEP8CVehicleR7CVectorS3_S3_
// Demangled: CDoor::ProcessImpact(CVehicle *,CVector &,CVector &,CVector &)
// attributes: thunk
int __fastcall CDoor::ProcessImpact(CDoor *this, CVehicle *a2, CVector *a3, CVector *a4, CVector *a5)
{
  return _ZN5CDoor13ProcessImpactEP8CVehicleR7CVectorS3_S3_(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x18d82c
// Original: j__ZNK5CDoor11IsFullyOpenEv
// Demangled: CDoor::IsFullyOpen(void)
// attributes: thunk
int __fastcall CDoor::IsFullyOpen(CDoor *this)
{
  return _ZNK5CDoor11IsFullyOpenEv(this);
}


// ============================================================

// Address: 0x18e7c0
// Original: j__ZNK5CDoor8IsClosedEv
// Demangled: CDoor::IsClosed(void)
// attributes: thunk
int __fastcall CDoor::IsClosed(CDoor *this)
{
  return _ZNK5CDoor8IsClosedEv(this);
}


// ============================================================

// Address: 0x199998
// Original: j__ZN5CDoor7ProcessEP8CVehicleR7CVectorS3_S3_
// Demangled: CDoor::Process(CVehicle *,CVector &,CVector &,CVector &)
// attributes: thunk
int __fastcall CDoor::Process(CDoor *this, CVehicle *a2, CVector *a3, CVector *a4, CVector *a5)
{
  return _ZN5CDoor7ProcessEP8CVehicleR7CVectorS3_S3_(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x19bfcc
// Original: j__ZNK5CDoor17GetAngleOpenRatioEv
// Demangled: CDoor::GetAngleOpenRatio(void)
// attributes: thunk
int __fastcall CDoor::GetAngleOpenRatio(CDoor *this)
{
  return _ZNK5CDoor17GetAngleOpenRatioEv(this);
}


// ============================================================

// Address: 0x19e430
// Original: j__ZN5CDoor4OpenEf
// Demangled: CDoor::Open(float)
// attributes: thunk
int __fastcall CDoor::Open(CDoor *this, float a2)
{
  return _ZN5CDoor4OpenEf(this, a2);
}


// ============================================================

// Address: 0x56ec28
// Original: _ZN5CDoor7ProcessEP8CVehicleR7CVectorS3_S3_
// Demangled: CDoor::Process(CVehicle *,CVector &,CVector &,CVector &)
int __fastcall CDoor::Process(CDoor *this, const CMatrix **a2, CVector *a3, CVector *a4, CVector *a5)
{
  int *v9; // r2
  float v10; // s4
  float v11; // s2
  float v12; // s4
  float v13; // s0
  int v14; // r6
  float v15; // s16
  float v16; // s18
  int v17; // r0
  float v18; // s20
  int v19; // r0
  float v20; // r4
  float v21; // r5
  float v22; // s2
  __int16 v23; // r4
  float v24; // s2
  float v25; // s0
  float v26; // s2
  float v27; // s0
  const CMatrix *v28; // r0
  bool v29; // zf
  float v30; // s16
  float v31; // s0
  const CMatrix *v32; // r0
  bool v33; // zf
  float v34; // s18
  float v35; // s2
  float v36; // s2
  float v37; // s6
  float v38; // s4
  char v39; // r0
  int v40; // r4
  int *v41; // r1
  float v43[3]; // [sp+4h] [bp-ACh] BYREF
  double v44; // [sp+10h] [bp-A0h] BYREF
  float v45; // [sp+18h] [bp-98h]
  float v46[18]; // [sp+20h] [bp-90h] BYREF
  double v47; // [sp+68h] [bp-48h] BYREF
  float v48; // [sp+70h] [bp-40h]
  float v49; // [sp+74h] [bp-3Ch]
  float v50; // [sp+78h] [bp-38h]
  float v51; // [sp+7Ch] [bp-34h]

  CPhysical::GetSpeed();
  CrossProduct((const CVector *)v46, a4);
  v9 = dword_56F020;
  v10 = v46[2] + *((float *)a3 + 2);
  v11 = v50 - (float)(v46[1] + *((float *)a3 + 1));
  *(float *)&v47 = v49 - (float)(v46[0] + *(float *)a3);
  v12 = v51 - v10;
  *((float *)&v47 + 1) = v11;
  if ( (*((_WORD *)this + 4) & 0x20) != 0 )
    v9 = &dword_56F020[1];
  v13 = v12 + (float)(*(float *)&CTimer::ms_fTimeStep * *(float *)v9);
  v48 = v13;
  CMatrix::CMatrix((CMatrix *)v46, a2[5]);
  Multiply3x3((const CVector *)&v44, (const CMatrix *)&v47);
  *(float *)&v14 = 0.0;
  v48 = v45;
  v47 = v44;
  v44 = 0.0;
  v45 = 0.0;
  v15 = 0.0;
  switch ( *((_WORD *)this + 4) & 0xF )
  {
    case 0:
      v16 = 1.0;
      v17 = 1065353216;
      goto LABEL_9;
    case 1:
      v13 = 1.0;
      v19 = 1065353216;
      goto LABEL_11;
    case 2:
      v18 = 1.0;
      *(float *)&v14 = 1.0;
      goto LABEL_13;
    case 3:
      v17 = -1082130432;
      v16 = -1.0;
LABEL_9:
      LODWORD(v44) = v17;
      *(float *)&v14 = 0.0;
      v18 = 0.0;
      break;
    case 4:
      v19 = -1082130432;
      v13 = -1.0;
LABEL_11:
      HIDWORD(v44) = v19;
      *(float *)&v14 = 0.0;
      v16 = 0.0;
      v18 = 0.0;
      v15 = v13;
      break;
    case 5:
      v18 = -1.0;
      *(float *)&v14 = -1.0;
LABEL_13:
      v16 = 0.0;
      v45 = *(float *)&v14;
      break;
    default:
      v16 = 0.0;
      v18 = 0.0;
      break;
  }
  v20 = *((float *)this + 3);
  v21 = sinf(v20);
  v22 = cosf(v20);
  if ( *((_BYTE *)this + 10) )
  {
    if ( *((_BYTE *)this + 10) == 2 )
    {
      v45 = *(float *)&v14;
      *((float *)&v44 + 1) = (float)(v21 * v16) + (float)(v22 * v15);
      *(float *)&v44 = (float)(v22 * v16) - (float)(v21 * v15);
      CrossProduct((const CVector *)v43, (const CVector *)&v47);
      v13 = v43[2];
    }
  }
  else
  {
    v45 = (float)(v21 * v15) + (float)(v22 * v18);
    *((float *)&v44 + 1) = (float)(v22 * v15) - (float)(v21 * v18);
    CrossProduct((const CVector *)v43, (const CVector *)&v47);
    v13 = v43[0];
  }
  v23 = *((_WORD *)this + 4);
  if ( (v23 & 0x40) != 0 )
  {
    if ( byte_951FE3 )
      goto LABEL_25;
    v28 = a2[360];
    v26 = 0.025;
    v29 = v28 == 0;
    if ( !v28 )
      v29 = *((_BYTE *)a2 + 2420) == 0;
    if ( v29 )
LABEL_25:
      v26 = 0.0;
    v30 = (float)(v13 * v26) + *((float *)this + 5);
    *((float *)this + 5) = v30;
    if ( byte_951FE3 )
      goto LABEL_32;
    v32 = a2[360];
    v31 = 0.98;
    v33 = v32 == 0;
    if ( !v32 )
      v33 = *((_BYTE *)a2 + 2420) == 0;
    if ( v33 )
LABEL_32:
      v31 = 0.95;
    v34 = *(float *)&CTimer::ms_fTimeStep;
    v27 = (float)(powf(v31, *(float *)&CTimer::ms_fTimeStep) * v30)
        + (float)((float)(*((float *)this + 3) * -0.06) * v34);
  }
  else
  {
    if ( fabsf(v13) > 0.001 || (v24 = *((float *)this + 5), fabsf(v24) > 0.001) )
    {
      v24 = v13 + *((float *)this + 5);
      *((float *)this + 5) = v24;
    }
    if ( a2[360] == (const CMatrix *)&byte_5 )
    {
      v25 = 0.98;
    }
    else
    {
      if ( *((_WORD *)a2 + 19) == 544 )
      {
        v27 = (float)(v24 * 0.92) + (float)((float)(*((float *)this + 3) * -0.01) * *(float *)&CTimer::ms_fTimeStep);
        goto LABEL_39;
      }
      v25 = 0.97;
    }
    v27 = v24 * v25;
  }
LABEL_39:
  *((float *)this + 5) = v27;
  if ( (v23 & 0x40) != 0 )
  {
    v35 = 0.02;
  }
  else
  {
    v35 = 0.05;
    if ( (v23 & 0x100) == 0 )
      v35 = CDoor::DOOR_SPEED_MAX_CAPPED;
  }
  if ( v27 > v35 || (v35 = -v35, v27 < v35) )
  {
    v27 = v35;
    *((float *)this + 5) = v35;
  }
  v36 = v27 + *((float *)this + 3);
  *((float *)this + 3) = v36;
  if ( (v23 & 0x80) == 0 )
    *((_BYTE *)this + 11) = 0;
  v37 = *(float *)this;
  v38 = *((float *)this + 1);
  if ( *(float *)this < v38 )
  {
    if ( v36 >= v37 )
    {
      if ( v36 > v38 )
        goto LABEL_57;
LABEL_65:
      v40 = 0;
      goto LABEL_66;
    }
LABEL_54:
    *((float *)this + 3) = v37;
    *((float *)this + 5) = v27 * -0.8;
    if ( (v23 & 0x80) == 0 )
    {
      v39 = 1;
LABEL_64:
      *((_BYTE *)this + 11) = v39;
      goto LABEL_65;
    }
    goto LABEL_65;
  }
  if ( v36 > v37 )
    goto LABEL_54;
  if ( v36 >= v38 )
    goto LABEL_65;
LABEL_57:
  *((float *)this + 3) = v38;
  if ( (v23 & 0x90) != 0x10 || fabsf(v27) <= 0.1 )
  {
    v41 = dword_56F06C;
    if ( (v23 & 0x20) != 0 )
      v41 = &dword_56F06C[1];
    *((float *)this + 5) = v27 * *(float *)v41;
    if ( (v23 & 0x80) != 0 )
      goto LABEL_65;
    v39 = 2;
    goto LABEL_64;
  }
  v40 = 1;
  *((_BYTE *)this + 11) = 4;
  *((_DWORD *)this + 5) = 0;
LABEL_66:
  CMatrix::~CMatrix((CMatrix *)v46);
  return v40;
}


// ============================================================

// Address: 0x56f078
// Original: _ZN5CDoor13ProcessImpactEP8CVehicleR7CVectorS3_S3_
// Demangled: CDoor::ProcessImpact(CVehicle *,CVector &,CVector &,CVector &)
bool __fastcall CDoor::ProcessImpact(CDoor *this, const CMatrix **a2, CVector *a3, CVector *a4, CVector *a5)
{
  float v5; // s16
  float v10; // s2
  float v11; // s4
  const CMatrix *v12; // r0
  double v13; // d16
  float v14; // r0
  const CMatrix *v15; // r0
  const CMatrix *v16; // r0
  float *v17; // r0
  float v18; // s0
  float v19; // s2
  float v20; // s4
  float *v21; // r0
  float *v22; // r0
  int v23; // r0
  float v24; // s4
  float v25; // s2
  bool v26; // cc
  _BOOL4 v27; // r4
  float v29[3]; // [sp+4h] [bp-9Ch] BYREF
  double v30; // [sp+10h] [bp-90h]
  float v31; // [sp+18h] [bp-88h]
  float v32[18]; // [sp+20h] [bp-80h] BYREF
  float v33[14]; // [sp+68h] [bp-38h] BYREF

  CPhysical::GetSpeed();
  CrossProduct((const CVector *)v32, a4);
  v10 = v33[4] - (float)(v32[1] + *((float *)a3 + 1));
  v11 = v33[5] - (float)(v32[2] + *((float *)a3 + 2));
  v33[0] = v33[3] - (float)(v32[0] + *(float *)a3);
  v33[1] = v10;
  v33[2] = v11;
  CMatrix::CMatrix((CMatrix *)v32, a2[5]);
  switch ( *((_WORD *)this + 4) & 0xF )
  {
    case 0:
      v12 = a2[5];
      v13 = *(double *)v12;
      v14 = *((float *)v12 + 2);
      goto LABEL_5;
    case 1:
      v15 = a2[5];
      v13 = *((double *)v15 + 2);
      v14 = *((float *)v15 + 6);
      goto LABEL_5;
    case 2:
      v16 = a2[5];
      v13 = *((double *)v16 + 4);
      v14 = *((float *)v16 + 10);
LABEL_5:
      v31 = v14;
      v30 = v13;
      break;
    case 3:
      v17 = (float *)a2[5];
      v18 = *v17;
      v19 = v17[1];
      v20 = v17[2];
      goto LABEL_9;
    case 4:
      v21 = (float *)a2[5];
      v18 = v21[4];
      v19 = v21[5];
      v20 = v21[6];
      goto LABEL_9;
    case 5:
      v22 = (float *)a2[5];
      v18 = v22[8];
      v19 = v22[9];
      v20 = v22[10];
LABEL_9:
      *((float *)&v30 + 1) = -v19;
      *(float *)&v30 = -v18;
      v31 = -v20;
      break;
    default:
      break;
  }
  if ( *((_BYTE *)this + 10) )
  {
    if ( *((_BYTE *)this + 10) == 2 )
    {
      CrossProduct((const CVector *)v29, (const CVector *)v33);
      v5 = v29[2];
    }
  }
  else
  {
    CrossProduct((const CVector *)v29, (const CVector *)v33);
    v5 = v29[0];
  }
  v23 = rand();
  v24 = *((float *)this + 1);
  v25 = (float)((float)((float)((float)v23 * 4.6566e-10) * 0.75) + 0.75) * 0.1;
  v26 = *(float *)this <= v24;
  if ( *(float *)this >= v24 )
    v26 = v5 <= v25;
  v27 = !v26 || v5 < (float)-v25 && *(float *)this < v24;
  CMatrix::~CMatrix((CMatrix *)v32);
  return v27;
}


// ============================================================

// Address: 0x56f22c
// Original: _ZN5CDoor4OpenEf
// Demangled: CDoor::Open(float)
int __fastcall CDoor::Open(int this, float a2)
{
  float v2; // s0
  float v3; // s0
  unsigned int v4; // r1

  v2 = *(float *)this;
  *(_DWORD *)(this + 16) = *(_DWORD *)(this + 12);
  if ( a2 >= 1.0 )
  {
    v4 = *(unsigned __int8 *)(this + 8);
    *(float *)(this + 12) = v2;
    if ( !(v4 >> 7) )
      *(_BYTE *)(this + 11) = 1;
  }
  else
  {
    v3 = v2 * a2;
    *(float *)(this + 12) = v3;
    if ( v3 == 0.0 )
      *(_DWORD *)(this + 20) = 0;
  }
  return this;
}


// ============================================================

// Address: 0x56f274
// Original: _ZNK5CDoor17GetAngleOpenRatioEv
// Demangled: CDoor::GetAngleOpenRatio(void)
float __fastcall CDoor::GetAngleOpenRatio(CDoor *this)
{
  if ( *(float *)this == 0.0 )
    return 0.0;
  else
    return *((float *)this + 3) / *(float *)this;
}


// ============================================================

// Address: 0x56f2a0
// Original: _ZNK5CDoor8IsClosedEv
// Demangled: CDoor::IsClosed(void)
bool __fastcall CDoor::IsClosed(CDoor *this)
{
  return *((float *)this + 3) == *((float *)this + 1);
}


// ============================================================

// Address: 0x56f2b8
// Original: _ZNK5CDoor11IsFullyOpenEv
// Demangled: CDoor::IsFullyOpen(void)
bool __fastcall CDoor::IsFullyOpen(CDoor *this)
{
  return fabsf(*(float *)this) + -0.5 <= fabsf(*((float *)this + 3));
}


// ============================================================
