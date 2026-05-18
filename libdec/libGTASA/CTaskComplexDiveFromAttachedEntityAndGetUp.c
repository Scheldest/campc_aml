
// Address: 0x50e810
// Original: _ZN42CTaskComplexDiveFromAttachedEntityAndGetUp17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexDiveFromAttachedEntityAndGetUp::CreateNextSubTask(CPed *)
void __fastcall CTaskComplexDiveFromAttachedEntityAndGetUp::CreateNextSubTask(
        CTaskComplexDiveFromAttachedEntityAndGetUp *this,
        CGeneral **a2)
{
  int v4; // r0
  float v5; // r1
  int v6; // r1
  float v7; // r0

  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 902 )
    CPed::DettachPedFromEntity((CPed *)a2);
  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( v4 > 502 )
  {
    if ( v4 == 503 )
    {
      v6 = 202;
      goto LABEL_13;
    }
    if ( v4 == 902 )
    {
      v6 = 503;
      goto LABEL_13;
    }
  }
  else
  {
    if ( v4 == 202 )
    {
      v7 = COERCE_FLOAT(CGeneral::LimitRadianAngle(a2[343], v5));
      v6 = 205;
      *((float *)a2 + 343) = v7 + -1.5708;
      *((float *)a2 + 344) = v7 + -1.5708;
      goto LABEL_13;
    }
    if ( v4 == 205 )
    {
      v6 = 1302;
LABEL_13:
      CTaskComplexEvasiveDiveAndGetUp::CreateSubTask(this, v6);
    }
  }
}


// ============================================================

// Address: 0x50e89c
// Original: _ZN42CTaskComplexDiveFromAttachedEntityAndGetUp18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexDiveFromAttachedEntityAndGetUp::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexDiveFromAttachedEntityAndGetUp::CreateFirstSubTask(
        CTaskComplexDiveFromAttachedEntityAndGetUp *this,
        CPed *a2,
        CEntity *a3)
{
  const CPed *v5; // r1
  int v6; // r6
  CVector *v7; // r2
  float v8; // r1
  _DWORD *v9; // r0
  __int64 v10; // d16
  bool v11; // zf
  int v12; // r0
  float *v13; // r6
  CPedGeometryAnalyser **v14; // r2
  int v15; // r0
  double v16; // d16
  int v17; // r0
  int v18; // r0
  __int64 v19; // d16
  int v20; // r1
  float *v22[4]; // [sp+0h] [bp-80h] BYREF
  _BYTE v23[12]; // [sp+10h] [bp-70h] BYREF
  float v24; // [sp+1Ch] [bp-64h]
  float v25; // [sp+20h] [bp-60h]
  float v26; // [sp+24h] [bp-5Ch]
  float v27; // [sp+34h] [bp-4Ch]
  float v28; // [sp+38h] [bp-48h]
  float v29; // [sp+3Ch] [bp-44h]
  _DWORD v30[3]; // [sp+40h] [bp-40h] BYREF
  double v31; // [sp+4Ch] [bp-34h]
  int v32; // [sp+54h] [bp-2Ch]
  double v33; // [sp+64h] [bp-1Ch]
  int v34; // [sp+6Ch] [bp-14h]

  v5 = (const CPed *)*((_DWORD *)a2 + 64);
  if ( v5 )
  {
    v6 = CPedGeometryAnalyser::ComputeEntityHitSide(a2, v5, a3);
    CPedGeometryAnalyser::ComputeEntityDirs(*((CPedGeometryAnalyser **)a2 + 64), (const CEntity *)v30, v7);
    v9 = &v30[3 * v6];
    v10 = *(_QWORD *)v9;
    *((_DWORD *)this + 7) = v9[2];
    *(_QWORD *)((char *)this + 20) = v10;
    v11 = (v6 | 2) == 2;
    if ( (v6 | 2) == 2 )
    {
      v8 = *((float *)a2 + 64);
      v11 = (*(_BYTE *)(LODWORD(v8) + 58) & 7) == 2;
    }
    if ( v11
      && (float)((float)((float)(*(float *)(LODWORD(v8) + 72) * *((float *)this + 5))
                       + (float)(*(float *)(LODWORD(v8) + 76) * *((float *)this + 6)))
               + (float)(*(float *)(LODWORD(v8) + 80) * *((float *)this + 7))) > 0.0 )
    {
      v12 = *((_DWORD *)a2 + 5);
      v13 = (float *)((char *)a2 + 4);
      v14 = (CPedGeometryAnalyser **)((char *)a2 + 4);
      if ( v12 )
        v14 = (CPedGeometryAnalyser **)(v12 + 48);
      CPedGeometryAnalyser::ComputeEntityBoundingBoxPlanes(v14[2], v8, (CEntity *)v23, (CVector *)v22, v22[0]);
      v15 = *((_DWORD *)a2 + 5);
      if ( v15 )
        v13 = (float *)(v15 + 48);
      if ( fabsf(*(float *)&v22[1] + (float)((float)((float)(v24 * *v13) + (float)(v25 * v13[1])) + (float)(v26 * v13[2]))) >= fabsf(*(float *)&v22[3] + (float)((float)((float)(*v13 * v27) + (float)(v13[1] * v28)) + (float)(v13[2] * v29))) )
      {
        v17 = v34;
        v16 = v33;
      }
      else
      {
        v16 = v31;
        v17 = v32;
      }
      *((_DWORD *)this + 7) = v17;
      *(double *)((char *)this + 20) = v16;
    }
  }
  else
  {
    v18 = *((_DWORD *)a2 + 5);
    v19 = *(_QWORD *)(v18 + 16);
    *((_DWORD *)this + 7) = *(_DWORD *)(v18 + 24);
    *(_QWORD *)((char *)this + 20) = v19;
  }
  v20 = 902;
  if ( *((_DWORD *)a2 + 64) )
    *((_DWORD *)a2 + 481) = 1086918619;
  if ( !*((_BYTE *)this + 32) )
    v20 = 503;
  return CTaskComplexEvasiveDiveAndGetUp::CreateSubTask(this, v20);
}


// ============================================================

// Address: 0x50ea18
// Original: _ZN42CTaskComplexDiveFromAttachedEntityAndGetUp14ControlSubTaskEP4CPed
// Demangled: CTaskComplexDiveFromAttachedEntityAndGetUp::ControlSubTask(CPed *)
int __fastcall CTaskComplexDiveFromAttachedEntityAndGetUp::ControlSubTask(
        CTaskComplexDiveFromAttachedEntityAndGetUp *this,
        CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x50ec24
// Original: _ZN42CTaskComplexDiveFromAttachedEntityAndGetUpD0Ev
// Demangled: CTaskComplexDiveFromAttachedEntityAndGetUp::~CTaskComplexDiveFromAttachedEntityAndGetUp()
void __fastcall CTaskComplexDiveFromAttachedEntityAndGetUp::~CTaskComplexDiveFromAttachedEntityAndGetUp(
        CTaskComplexDiveFromAttachedEntityAndGetUp *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66B718;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x50ec54
// Original: _ZNK42CTaskComplexDiveFromAttachedEntityAndGetUp5CloneEv
// Demangled: CTaskComplexDiveFromAttachedEntityAndGetUp::Clone(void)
int __fastcall CTaskComplexDiveFromAttachedEntityAndGetUp::Clone(
        CTaskComplexDiveFromAttachedEntityAndGetUp *this,
        unsigned int a2)
{
  CTaskComplex *v3; // r0
  int v4; // r4
  int result; // r0

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_24, a2);
  v4 = *((_DWORD *)this + 4);
  CTaskComplex::CTaskComplex(v3);
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = v4;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_BYTE *)(result + 32) = 1;
  *(_DWORD *)result = &off_66B960;
  return result;
}


// ============================================================

// Address: 0x50ec88
// Original: _ZNK42CTaskComplexDiveFromAttachedEntityAndGetUp11GetTaskTypeEv
// Demangled: CTaskComplexDiveFromAttachedEntityAndGetUp::GetTaskType(void)
int __fastcall CTaskComplexDiveFromAttachedEntityAndGetUp::GetTaskType(
        CTaskComplexDiveFromAttachedEntityAndGetUp *this)
{
  return 513;
}


// ============================================================

// Address: 0x50ec90
// Original: _ZN42CTaskComplexDiveFromAttachedEntityAndGetUp9SerializeEv
// Demangled: CTaskComplexDiveFromAttachedEntityAndGetUp::Serialize(void)
void __fastcall CTaskComplexDiveFromAttachedEntityAndGetUp::Serialize(CTaskComplexDiveFromAttachedEntityAndGetUp *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CGenericGameStorage *v5; // r5
  int v6; // r2
  int v7; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexDiveFromAttachedEntityAndGetUp *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexDiveFromAttachedEntityAndGetUp *))(*(_DWORD *)this + 20))(this) == 513 )
  {
    if ( UseDataFence )
      AddDataFence();
    v5 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v5 = *((_DWORD *)this + 4);
    CGenericGameStorage::_SaveDataToWorkBuffer(v5, byte_4, v6);
    j_free(v5);
  }
  else
  {
    v7 = (*(int (__fastcall **)(CTaskComplexDiveFromAttachedEntityAndGetUp *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(513, v7);
  }
}


// ============================================================
