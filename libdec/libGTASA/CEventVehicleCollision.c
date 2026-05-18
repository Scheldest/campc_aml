
// Address: 0x18b160
// Original: j__ZN22CEventVehicleCollisionD2Ev
// Demangled: CEventVehicleCollision::~CEventVehicleCollision()
// attributes: thunk
void __fastcall CEventVehicleCollision::~CEventVehicleCollision(CEventVehicleCollision *this)
{
  _ZN22CEventVehicleCollisionD2Ev(this);
}


// ============================================================

// Address: 0x18ef68
// Original: j__ZN22CEventVehicleCollisionC2EtfPK8CVehicleRK7CVectorS5_it
// Demangled: CEventVehicleCollision::CEventVehicleCollision(ushort,float,CVehicle const*,CVector const&,CVector const&,int,ushort)
// attributes: thunk
void __fastcall CEventVehicleCollision::CEventVehicleCollision(
        CEventVehicleCollision *this,
        unsigned __int16 a2,
        float a3,
        const CVehicle *a4,
        const CVector *a5,
        const CVector *a6,
        int a7,
        unsigned __int16 a8)
{
  _ZN22CEventVehicleCollisionC2EtfPK8CVehicleRK7CVectorS5_it(this, a2, a3, a4, a5, a6, a7, a8);
}


// ============================================================

// Address: 0x370e98
// Original: _ZN22CEventVehicleCollisionC2EtfPK8CVehicleRK7CVectorS5_it
// Demangled: CEventVehicleCollision::CEventVehicleCollision(ushort,float,CVehicle const*,CVector const&,CVector const&,int,ushort)
void __fastcall CEventVehicleCollision::CEventVehicleCollision(
        CEventVehicleCollision *this,
        unsigned __int16 a2,
        float a3,
        const CVehicle *a4,
        const CVector *a5,
        const CVector *a6,
        unsigned __int8 a7,
        unsigned __int16 a8)
{
  __int64 v8; // d16
  __int64 v9; // d16

  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_WORD *)this + 5) = a2;
  *((_WORD *)this + 6) = a8;
  *((float *)this + 4) = a3;
  *(_DWORD *)this = &off_665E70;
  *((_DWORD *)this + 5) = a4;
  v8 = *(_QWORD *)a5;
  *((_DWORD *)this + 8) = *((_DWORD *)a5 + 2);
  *((_QWORD *)this + 3) = v8;
  v9 = *(_QWORD *)a6;
  *((_DWORD *)this + 11) = *((_DWORD *)a6 + 2);
  *((_WORD *)this + 24) = a7;
  *(_QWORD *)((char *)this + 36) = v9;
  if ( a4 )
    CEntity::RegisterReference(a4, (CEntity **)this + 5);
}


// ============================================================

// Address: 0x370f04
// Original: _ZN22CEventVehicleCollisionD2Ev
// Demangled: CEventVehicleCollision::~CEventVehicleCollision()
void __fastcall CEventVehicleCollision::~CEventVehicleCollision(CEventVehicleCollision *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 20);
  v2 = (CEntity *)*((_DWORD *)this + 5);
  *(_DWORD *)this = &off_665E70;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
}


// ============================================================

// Address: 0x370f2c
// Original: _ZN22CEventVehicleCollisionD0Ev
// Demangled: CEventVehicleCollision::~CEventVehicleCollision()
void __fastcall CEventVehicleCollision::~CEventVehicleCollision(CEventVehicleCollision *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 20);
  v2 = (CEntity *)*((_DWORD *)this + 5);
  *(_DWORD *)this = &off_665E70;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = CPools::ms_pEventPool;
  v5 = -252645135 * (((int)this - *(_DWORD *)CPools::ms_pEventPool) >> 2);
  *(_BYTE *)(*(_DWORD *)(CPools::ms_pEventPool + 4) + v5) = *(_BYTE *)(*(_DWORD *)(CPools::ms_pEventPool + 4)
                                                                     - 252645135
                                                                     * (((int)this - *(_DWORD *)CPools::ms_pEventPool) >> 2)) | 0x80;
  if ( v5 < *(_DWORD *)(v4 + 12) )
    *(_DWORD *)(v4 + 12) = v5;
}


// ============================================================

// Address: 0x370f80
// Original: _ZNK22CEventVehicleCollision17TakesPriorityOverERK6CEvent
// Demangled: CEventVehicleCollision::TakesPriorityOver(CEvent const&)
int __fastcall CEventVehicleCollision::TakesPriorityOver(CEventVehicleCollision *this, const CEvent *a2)
{
  return 1;
}


// ============================================================

// Address: 0x370f84
// Original: _ZNK22CEventVehicleCollision10AffectsPedEP4CPed
// Demangled: CEventVehicleCollision::AffectsPed(CPed *)
int __fastcall CEventVehicleCollision::AffectsPed(CEventVehicleCollision *this, CPed *a2)
{
  int result; // r0
  int v5; // r0
  CTask *SimplestActiveTask; // r0
  const CTask *v7; // r1
  CTask *v8; // r6
  CEntity *v9; // r2
  float *v10; // r9
  int v11; // r8
  CEntity *v12; // r2
  float v13; // r1
  int v14; // r0
  bool v15; // zf
  int v16; // r0
  float *v17; // r6
  CPedGeometryAnalyser **v18; // r2
  int v19; // r0
  int v20; // r1
  int v21; // r2
  float v22; // s4
  float v23; // s12
  float v24; // s6
  float v25; // s14
  bool v26; // zf
  int ActiveTask; // r0
  int v28; // r5
  CVehicle *v29; // r1
  CVehicle *v30; // r0
  CVehicle *v31; // r2
  CVehicle *v32; // r2
  float *v33; // [sp+0h] [bp-90h] BYREF
  float v34; // [sp+4h] [bp-8Ch]
  float v35; // [sp+8h] [bp-88h]
  float v36; // [sp+Ch] [bp-84h]
  float v37; // [sp+10h] [bp-80h] BYREF
  float v38; // [sp+14h] [bp-7Ch]
  float v39; // [sp+18h] [bp-78h]
  float v40; // [sp+1Ch] [bp-74h]
  float v41; // [sp+20h] [bp-70h]
  float v42; // [sp+24h] [bp-6Ch]
  float v43; // [sp+28h] [bp-68h]
  float v44; // [sp+2Ch] [bp-64h]
  float v45; // [sp+30h] [bp-60h]
  float v46; // [sp+34h] [bp-5Ch]
  float v47; // [sp+38h] [bp-58h]
  float v48; // [sp+3Ch] [bp-54h]

  if ( CPed::IsAlive(a2) != 1 )
    return 0;
  if ( *((_WORD *)this + 6) )
    return 1;
  v5 = *((_DWORD *)this + 5);
  if ( !v5
    || *((unsigned __int8 *)a2 + 1157) << 31
    || *(_DWORD *)(v5 + 1440) == 5
    || (float)((float)((float)(*((float *)this + 6) * *(float *)(*((_DWORD *)a2 + 5) + 16))
                     + (float)(*((float *)this + 7) * *(float *)(*((_DWORD *)a2 + 5) + 20)))
             + (float)(*((float *)this + 8) * *(float *)(*((_DWORD *)a2 + 5) + 24))) > -0.35 )
  {
    return 0;
  }
  SimplestActiveTask = (CTask *)CTaskManager::GetSimplestActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4));
  v8 = SimplestActiveTask;
  if ( !SimplestActiveTask )
    goto LABEL_40;
  if ( !CTask::IsGoToTask(SimplestActiveTask, v7) )
    goto LABEL_40;
  v10 = (float *)((char *)v8 + 12);
  v11 = CPedGeometryAnalyser::ComputeEntityHitSide(a2, *((const CPed **)this + 5), v9);
  if ( v11 != CPedGeometryAnalyser::ComputeEntityHitSide((CTask *)((char *)v8 + 12), *((const CVector **)this + 5), v12) )
    goto LABEL_40;
  v13 = *((float *)this + 5);
  v14 = *(_DWORD *)(LODWORD(v13) + 1232);
  v15 = v14 == 0;
  if ( !v14 )
    v15 = *(_DWORD *)(LODWORD(v13) + 1236) == 0;
  if ( v15 )
    return 0;
  v16 = *((_DWORD *)a2 + 5);
  v17 = (float *)((char *)a2 + 4);
  v18 = (CPedGeometryAnalyser **)((char *)a2 + 4);
  if ( v16 )
    v18 = (CPedGeometryAnalyser **)(v16 + 48);
  CPedGeometryAnalyser::ComputeEntityBoundingBoxPlanes(v18[2], v13, (CEntity *)&v37, (CVector *)&v33, v33);
  v19 = *((_DWORD *)a2 + 5);
  v20 = 0;
  v21 = 0;
  if ( v19 )
    v17 = (float *)(v19 + 48);
  result = 0;
  v22 = v17[1];
  v23 = v10[1];
  v24 = v17[2];
  v25 = v10[2];
  if ( (float)(v34 + (float)((float)((float)(v40 * *v17) + (float)(v41 * v22)) + (float)(v42 * v24))) < 0.0 )
    v20 = 1;
  if ( (float)(*(float *)&v33 + (float)((float)((float)(v37 * *v17) + (float)(v38 * v22)) + (float)(v39 * v24))) < 0.0 )
    ++v20;
  if ( (float)(v35 + (float)((float)((float)(v43 * *v17) + (float)(v44 * v22)) + (float)(v45 * v24))) < 0.0 )
    ++v20;
  if ( (float)(v36 + (float)((float)((float)(v46 * *v17) + (float)(v47 * v22)) + (float)(v48 * v24))) < 0.0 )
    ++v20;
  if ( (float)(v34 + (float)((float)((float)(*v10 * v40) + (float)(v23 * v41)) + (float)(v25 * v42))) < 0.0 )
    v21 = 1;
  if ( (float)(*(float *)&v33 + (float)((float)((float)(*v10 * v37) + (float)(v23 * v38)) + (float)(v25 * v39))) < 0.0 )
    ++v21;
  if ( (float)(v35 + (float)((float)((float)(*v10 * v43) + (float)(v23 * v44)) + (float)(v25 * v45))) < 0.0 )
    ++v21;
  if ( (float)(v36 + (float)((float)((float)(*v10 * v46) + (float)(v23 * v47)) + (float)(v25 * v48))) < 0.0 )
    ++v21;
  v26 = v20 == 4;
  if ( v20 != 4 )
    v26 = v21 == 4;
  if ( v26 )
  {
LABEL_40:
    ActiveTask = CTaskManager::GetActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4));
    v28 = ActiveTask;
    if ( !ActiveTask )
      return 1;
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)ActiveTask + 20))(ActiveTask) == 508 )
    {
      v29 = (CVehicle *)*((_DWORD *)this + 5);
      v30 = *(CVehicle **)(v28 + 28);
      if ( v30 != v29 )
      {
        v31 = (CVehicle *)*((_DWORD *)v29 + 309);
        if ( v31 && v31 == v30 || (v32 = (CVehicle *)*((_DWORD *)v29 + 308)) != 0 && v32 == v30 )
          CTaskComplexWalkRoundCar::SetNewVehicle((CEntity **)v28, v29, (char)(4 * *(_BYTE *)(v28 + 13)) >> 4);
        return 1;
      }
    }
    else if ( (*(int (__fastcall **)(int))(*(_DWORD *)v28 + 20))(v28) != 505
           || *(_DWORD *)(v28 + 12) != *((_DWORD *)this + 5) )
    {
      return 1;
    }
    return 0;
  }
  return result;
}


// ============================================================

// Address: 0x37953c
// Original: _ZNK22CEventVehicleCollision12GetEventTypeEv
// Demangled: CEventVehicleCollision::GetEventType(void)
int __fastcall CEventVehicleCollision::GetEventType(CEventVehicleCollision *this)
{
  return 1;
}


// ============================================================

// Address: 0x379540
// Original: _ZNK22CEventVehicleCollision16GetEventPriorityEv
// Demangled: CEventVehicleCollision::GetEventPriority(void)
int __fastcall CEventVehicleCollision::GetEventPriority(CEventVehicleCollision *this)
{
  return 58;
}


// ============================================================

// Address: 0x379544
// Original: _ZNK22CEventVehicleCollision11GetLifeTimeEv
// Demangled: CEventVehicleCollision::GetLifeTime(void)
int __fastcall CEventVehicleCollision::GetLifeTime(CEventVehicleCollision *this)
{
  return 0;
}


// ============================================================

// Address: 0x379548
// Original: _ZNK22CEventVehicleCollision5CloneEv
// Demangled: CEventVehicleCollision::Clone(void)
int __fastcall CEventVehicleCollision::Clone(CEventVehicleCollision *this)
{
  int v1; // lr
  _DWORD *v2; // r1
  int v3; // r4
  int v4; // r12
  int v5; // r2
  int v6; // r3
  __int64 v7; // kr08_8
  __int16 v8; // r1
  char v9; // r12
  __int64 v10; // d16
  __int64 v11; // d16

  v1 = 0;
  v2 = (_DWORD *)CPools::ms_pEventPool;
  v3 = *(_DWORD *)(CPools::ms_pEventPool + 12);
  v4 = *(_DWORD *)(CPools::ms_pEventPool + 8);
  do
  {
    v2[3] = ++v3;
    if ( v3 == v4 )
    {
      v3 = 0;
      v2[3] = 0;
      if ( v1 << 31 )
        goto LABEL_7;
      v1 = 1;
    }
    v5 = v2[1];
    v6 = *(char *)(v5 + v3);
  }
  while ( v6 > -1 );
  *(_BYTE *)(v5 + v3) = v6 & 0x7F;
  *(_BYTE *)(v2[1] + v2[3]) = (*(_BYTE *)(v2[1] + v2[3]) + 1) & 0x7F | *(_BYTE *)(v2[1] + v2[3]) & 0x80;
  v3 = *v2 + 68 * v2[3];
LABEL_7:
  v7 = *((_QWORD *)this + 2);
  v8 = *((_WORD *)this + 5);
  v9 = *((_BYTE *)this + 48);
  *(_BYTE *)(v3 + 8) = 0;
  *(_WORD *)(v3 + 10) = v8;
  *(_WORD *)(v3 + 12) = 0;
  *(_DWORD *)(v3 + 16) = v7;
  *(_DWORD *)v3 = &off_665E70;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 20) = HIDWORD(v7);
  v10 = *((_QWORD *)this + 3);
  *(_DWORD *)(v3 + 32) = *((_DWORD *)this + 8);
  *(_QWORD *)(v3 + 24) = v10;
  v11 = *(_QWORD *)((char *)this + 36);
  *(_DWORD *)(v3 + 44) = *((_DWORD *)this + 11);
  *(_BYTE *)(v3 + 48) = v9;
  *(_BYTE *)(v3 + 49) = 0;
  *(_QWORD *)(v3 + 36) = v11;
  if ( HIDWORD(v7) )
    CEntity::RegisterReference((CEntity *)HIDWORD(v7), (CEntity **)(v3 + 20));
  return v3;
}


// ============================================================
