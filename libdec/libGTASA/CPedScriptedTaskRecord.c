
// Address: 0x18a60c
// Original: j__ZN22CPedScriptedTaskRecord13GetVacantSlotEv
// Demangled: CPedScriptedTaskRecord::GetVacantSlot(void)
// attributes: thunk
int __fastcall CPedScriptedTaskRecord::GetVacantSlot(CPedScriptedTaskRecord *this)
{
  return _ZN22CPedScriptedTaskRecord13GetVacantSlotEv(this);
}


// ============================================================

// Address: 0x18d188
// Original: j__ZN22CPedScriptedTaskRecord4SaveEv
// Demangled: CPedScriptedTaskRecord::Save(void)
// attributes: thunk
int __fastcall CPedScriptedTaskRecord::Save(CPedScriptedTaskRecord *this)
{
  return _ZN22CPedScriptedTaskRecord4SaveEv(this);
}


// ============================================================

// Address: 0x191734
// Original: j__ZN22CPedScriptedTaskRecord9GetStatusEPK4CPed
// Demangled: CPedScriptedTaskRecord::GetStatus(CPed const*)
// attributes: thunk
int __fastcall CPedScriptedTaskRecord::GetStatus(CPedScriptedTaskRecord *this, const CPed *a2)
{
  return _ZN22CPedScriptedTaskRecord9GetStatusEPK4CPed(this, a2);
}


// ============================================================

// Address: 0x191bd8
// Original: j__ZN22CPedScriptedTaskRecord4LoadEv
// Demangled: CPedScriptedTaskRecord::Load(void)
// attributes: thunk
int __fastcall CPedScriptedTaskRecord::Load(CPedScriptedTaskRecord *this)
{
  return _ZN22CPedScriptedTaskRecord4LoadEv(this);
}


// ============================================================

// Address: 0x1971f4
// Original: j__ZN22CPedScriptedTaskRecord7ProcessEv
// Demangled: CPedScriptedTaskRecord::Process(void)
// attributes: thunk
int __fastcall CPedScriptedTaskRecord::Process(CPedScriptedTaskRecord *this)
{
  return _ZN22CPedScriptedTaskRecord7ProcessEv(this);
}


// ============================================================

// Address: 0x19e7bc
// Original: j__ZN22CPedScriptedTaskRecord9GetStatusEPK4CPedi
// Demangled: CPedScriptedTaskRecord::GetStatus(CPed const*,int)
// attributes: thunk
int __fastcall CPedScriptedTaskRecord::GetStatus(CPedScriptedTaskRecord *this, const CPed *a2, int a3)
{
  return _ZN22CPedScriptedTaskRecord9GetStatusEPK4CPedi(this, a2, a3);
}


// ============================================================

// Address: 0x19e8cc
// Original: j__ZN22CPedScriptedTaskRecord28GetRecordAssociatedWithEventEP19CEventScriptCommand
// Demangled: CPedScriptedTaskRecord::GetRecordAssociatedWithEvent(CEventScriptCommand *)
// attributes: thunk
int __fastcall CPedScriptedTaskRecord::GetRecordAssociatedWithEvent(
        CPedScriptedTaskRecord *this,
        CEventScriptCommand *a2)
{
  return _ZN22CPedScriptedTaskRecord28GetRecordAssociatedWithEventEP19CEventScriptCommand(this, a2);
}


// ============================================================

// Address: 0x489744
// Original: _ZN22CPedScriptedTaskRecord4SaveEv
// Demangled: CPedScriptedTaskRecord::Save(void)
void __fastcall CPedScriptedTaskRecord::Save(CPedScriptedTaskRecord *this)
{
  int i; // r11
  char v2; // r5
  int *v3; // r8
  char v4; // r5
  __int16 v5; // r10
  CGenericGameStorage *v6; // r4
  int v7; // r2
  CGenericGameStorage *v8; // r4
  int v9; // r2
  char v10; // r5
  __int16 v11; // r10
  CGenericGameStorage *v12; // r4
  int v13; // r2
  CGenericGameStorage *v14; // r4
  int v15; // r2
  CPed *v16; // r1
  CPools *v17; // r0
  int PedRef; // r10
  char v19; // r6
  __int16 v20; // r9
  CGenericGameStorage *v21; // r5
  int v22; // r2
  CGenericGameStorage *v23; // r5
  int v24; // r2
  _DWORD **v25; // r4
  int v26; // r5
  char v27; // r8
  __int16 v28; // r9
  CGenericGameStorage *v29; // r6
  int v30; // r2
  CGenericGameStorage *v31; // r6
  int v32; // r2
  __int16 v33; // r0
  __int16 v34; // r8
  CGenericGameStorage *v35; // r4
  int v36; // r2
  CGenericGameStorage *v37; // r4
  int v38; // r2

  for ( i = 0; i != 640; i += 5 )
  {
    v3 = &CPedScriptedTaskRecord::ms_scriptedTasks[i];
    if ( !CPedScriptedTaskRecord::ms_scriptedTasks[i + 1]
      && !CPedScriptedTaskRecord::ms_scriptedTasks[i + 2]
      && !CPedScriptedTaskRecord::ms_scriptedTasks[i + 3] )
    {
      v2 = UseDataFence;
      if ( UseDataFence )
        goto LABEL_22;
      goto LABEL_23;
    }
    v4 = UseDataFence;
    if ( UseDataFence )
    {
      UseDataFence = 0;
      v5 = currentSaveFenceCount++ + DataFence;
      v6 = (CGenericGameStorage *)malloc(2u);
      *(_WORD *)v6 = v5;
      CGenericGameStorage::_SaveDataToWorkBuffer(v6, (char *)&stderr + 2, v7);
      free(v6);
      UseDataFence = v4;
    }
    v8 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v8 = CPedScriptedTaskRecord::ms_scriptedTasks[i];
    CGenericGameStorage::_SaveDataToWorkBuffer(v8, byte_4, v9);
    free(v8);
    v10 = UseDataFence;
    if ( UseDataFence )
    {
      UseDataFence = 0;
      v11 = currentSaveFenceCount++ + DataFence;
      v12 = (CGenericGameStorage *)malloc(2u);
      *(_WORD *)v12 = v11;
      CGenericGameStorage::_SaveDataToWorkBuffer(v12, (char *)&stderr + 2, v13);
      free(v12);
      UseDataFence = v10;
    }
    v14 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v14 = CPedScriptedTaskRecord::ms_scriptedTasks[i + 4];
    CGenericGameStorage::_SaveDataToWorkBuffer(v14, byte_4, v15);
    free(v14);
    v17 = (CPools *)CPedScriptedTaskRecord::ms_scriptedTasks[i + 3];
    if ( v17 )
      PedRef = CPools::GetPedRef(v17, v16);
    else
      PedRef = -1;
    v19 = UseDataFence;
    if ( UseDataFence )
    {
      UseDataFence = 0;
      v20 = currentSaveFenceCount++ + DataFence;
      v21 = (CGenericGameStorage *)malloc(2u);
      *(_WORD *)v21 = v20;
      CGenericGameStorage::_SaveDataToWorkBuffer(v21, (char *)&stderr + 2, v22);
      free(v21);
      UseDataFence = v19;
    }
    v23 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v23 = PedRef;
    CGenericGameStorage::_SaveDataToWorkBuffer(v23, byte_4, v24);
    free(v23);
    v25 = (_DWORD **)v3[1];
    if ( !v25 )
    {
      v2 = UseDataFence;
      if ( UseDataFence )
      {
LABEL_22:
        v33 = currentSaveFenceCount;
        UseDataFence = 0;
        ++currentSaveFenceCount;
        v34 = v33 + DataFence;
        v35 = (CGenericGameStorage *)malloc(2u);
        *(_WORD *)v35 = v34;
        CGenericGameStorage::_SaveDataToWorkBuffer(v35, (char *)&stderr + 2, v36);
        free(v35);
        UseDataFence = v2;
      }
LABEL_23:
      v37 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v37 = -1;
      CGenericGameStorage::_SaveDataToWorkBuffer(v37, byte_4, v38);
      free(v37);
      continue;
    }
    v26 = ((int (__fastcall *)(int))(*v25)[2])(v3[1]);
    v27 = UseDataFence;
    if ( UseDataFence )
    {
      UseDataFence = 0;
      v28 = currentSaveFenceCount++ + DataFence;
      v29 = (CGenericGameStorage *)malloc(2u);
      *(_WORD *)v29 = v28;
      CGenericGameStorage::_SaveDataToWorkBuffer(v29, (char *)&stderr + 2, v30);
      free(v29);
      UseDataFence = v27;
    }
    v31 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v31 = v26;
    CGenericGameStorage::_SaveDataToWorkBuffer(v31, byte_4, v32);
    free(v31);
    if ( v26 == 32 )
      (*(void (__fastcall **)(_DWORD *))(*v25[4] + 32))(v25[4]);
  }
}


// ============================================================

// Address: 0x48a71c
// Original: _ZN22CPedScriptedTaskRecord4LoadEv
// Demangled: CPedScriptedTaskRecord::Load(void)
void __fastcall CPedScriptedTaskRecord::Load(CPedScriptedTaskRecord *this)
{
  int i; // r6
  int v2; // r2
  char v3; // r8
  int v4; // r2
  char v5; // r5
  int v6; // r2
  char v7; // r5
  int v8; // r2
  int Ped; // r0
  char v10; // r5
  CTask *Task; // r0
  CEventScriptCommand *v12; // r0
  _BYTE v13[24]; // [sp+34h] [bp-44h] BYREF
  CTask *v14; // [sp+4Ch] [bp-2Ch] BYREF
  CPools *v15; // [sp+50h] [bp-28h] BYREF
  int v16; // [sp+54h] [bp-24h] BYREF
  _DWORD v17[8]; // [sp+58h] [bp-20h] BYREF

  for ( i = 0; i != 640; i += 5 )
  {
    CPedScriptedTaskRecordData::Flush((CPedScriptedTaskRecordData *)&CPedScriptedTaskRecord::ms_scriptedTasks[i]);
    v3 = UseDataFence;
    if ( UseDataFence )
    {
      UseDataFence = 0;
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v17, (char *)&stderr + 2, v2);
      UseDataFence = v3;
    }
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v17, byte_4, v2);
    if ( v17[0] != -1 )
    {
      CPedScriptedTaskRecord::ms_scriptedTasks[i] = v17[0];
      v5 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, (char *)&stderr + 2, v4);
        UseDataFence = v5;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, byte_4, v4);
      CPedScriptedTaskRecord::ms_scriptedTasks[i + 4] = v16;
      v7 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v15, (char *)&stderr + 2, v6);
        UseDataFence = v7;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v15, byte_4, v6);
      if ( v15 == (CPools *)-1 )
        Ped = 0;
      else
        Ped = CPools::GetPed(v15, (int)v15 + 1);
      CPedScriptedTaskRecord::ms_scriptedTasks[i + 3] = Ped;
      v10 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v14, (char *)&stderr + 2, v8);
        UseDataFence = v10;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v14, byte_4, v8);
      if ( v14 == (CTask *)&dword_20 )
      {
        Task = (CTask *)CTask::CreateTask((CTask *)&dword_20);
        CEventScriptCommand::CEventScriptCommand((CEventScriptCommand *)v13, 3, Task, 0);
        CEventScriptCommand::~CEventScriptCommand(v12);
      }
    }
  }
}


// ============================================================

// Address: 0x4c2b94
// Original: _ZN22CPedScriptedTaskRecord13GetVacantSlotEv
// Demangled: CPedScriptedTaskRecord::GetVacantSlot(void)
int __fastcall CPedScriptedTaskRecord::GetVacantSlot(CPedScriptedTaskRecord *this)
{
  int *v1; // r1
  int v2; // r0
  int v4; // r2
  bool v5; // zf

  v1 = &dword_9F0114;
  v2 = -1;
  while ( 1 )
  {
    v4 = *(v1 - 1);
    v5 = v4 == 0;
    if ( !v4 )
      v5 = *v1 == 0;
    if ( v5 && !v1[1] )
      break;
    ++v2;
    v1 += 5;
    if ( v2 >= 127 )
      return -1;
  }
  return v2 + 1;
}


// ============================================================

// Address: 0x4c2bd0
// Original: _ZN22CPedScriptedTaskRecord28GetRecordAssociatedWithEventEP19CEventScriptCommand
// Demangled: CPedScriptedTaskRecord::GetRecordAssociatedWithEvent(CEventScriptCommand *)
int *__fastcall CPedScriptedTaskRecord::GetRecordAssociatedWithEvent(
        CPedScriptedTaskRecord *this,
        CEventScriptCommand *a2)
{
  int v3; // r2
  int *result; // r0

  v3 = -1;
  for ( result = CPedScriptedTaskRecord::ms_scriptedTasks; (CPedScriptedTaskRecord *)result[1] != this; result += 5 )
  {
    if ( ++v3 >= 127 )
      return 0;
  }
  return result;
}


// ============================================================

// Address: 0x4c2bf4
// Original: _ZN22CPedScriptedTaskRecord27GetRecordAssociatedWithTaskEP5CTask
// Demangled: CPedScriptedTaskRecord::GetRecordAssociatedWithTask(CTask *)
int *__fastcall CPedScriptedTaskRecord::GetRecordAssociatedWithTask(CPedScriptedTaskRecord *this, CTask *a2)
{
  int v3; // r2
  int *result; // r0

  v3 = -1;
  for ( result = CPedScriptedTaskRecord::ms_scriptedTasks; (CPedScriptedTaskRecord *)result[2] != this; result += 5 )
  {
    if ( ++v3 >= 127 )
      return 0;
  }
  return result;
}


// ============================================================

// Address: 0x4c2c18
// Original: _ZN22CPedScriptedTaskRecord7ProcessEv
// Demangled: CPedScriptedTaskRecord::Process(void)
int __fastcall CPedScriptedTaskRecord::Process(CPedScriptedTaskRecord *this)
{
  int i; // r9
  int *v2; // r11
  int v3; // r1
  int result; // r0
  CEntity *v5; // r0
  int PedsGroup; // r0
  CEntity *v7; // r0
  _DWORD *v8; // r4
  int ActiveTask; // r0
  const CTask *v10; // r1
  const CTask *v11; // r0
  _DWORD *v12; // r2
  bool v13; // zf
  int *v14; // r4
  CEntity *v15; // r0
  int *v16; // r8
  const CEvent *v17; // r1
  int *v18; // r10
  CEventGroup *v19; // r0
  CEntity *v20; // r0
  CTaskManager *v21; // [sp+Ch] [bp-54h]
  int *v22; // [sp+1Ch] [bp-44h]

  for ( i = 0; i != 640; i += 5 )
  {
    v16 = &CPedScriptedTaskRecord::ms_scriptedTasks[i];
    v17 = (const CEvent *)CPedScriptedTaskRecord::ms_scriptedTasks[i + 1];
    if ( !v17 && !CPedScriptedTaskRecord::ms_scriptedTasks[i + 2] )
    {
      result = CPedScriptedTaskRecord::ms_scriptedTasks[i + 3];
      if ( !result )
        continue;
    }
    v18 = &CPedScriptedTaskRecord::ms_scriptedTasks[i];
    result = CPedScriptedTaskRecord::ms_scriptedTasks[i + 3];
    if ( result )
    {
      if ( v17 )
      {
        v19 = (CEventGroup *)(*(_DWORD *)(result + 1088) + 104);
        v14 = &CPedScriptedTaskRecord::ms_scriptedTasks[i];
        CPedScriptedTaskRecord::ms_scriptedTasks[i + 4] = 0;
        result = CEventGroup::HasEvent(v19, v17);
        if ( result )
          continue;
        v20 = (CEntity *)v18[3];
        if ( v20 )
          CEntity::CleanUpOldReference(v20, (CEntity **)&CPedScriptedTaskRecord::ms_scriptedTasks[i + 3]);
        v18[3] = 0;
        v16[1] = 0;
        CPedScriptedTaskRecord::ms_scriptedTasks[i + 2] = 0;
        goto LABEL_38;
      }
      v2 = &CPedScriptedTaskRecord::ms_scriptedTasks[i];
      if ( !CPedScriptedTaskRecord::ms_scriptedTasks[i + 2] )
        continue;
      v3 = CPedScriptedTaskRecord::ms_scriptedTasks[i + 4];
      if ( v3 != 4 )
      {
        if ( v3 == 5 )
        {
          result = CScriptedBrainTaskStore::GetTask((CScriptedBrainTaskStore *)result, (const CPed *)&byte_5);
          if ( result == v2[2] )
            continue;
          v5 = (CEntity *)v18[3];
          if ( v5 )
            CEntity::CleanUpOldReference(v5, (CEntity **)&CPedScriptedTaskRecord::ms_scriptedTasks[i + 3]);
LABEL_8:
          v18[3] = 0;
          v16[1] = 0;
          v2[2] = 0;
          CPedScriptedTaskRecord::ms_scriptedTasks[i + 4] = 3;
          result = -1;
LABEL_39:
          CPedScriptedTaskRecord::ms_scriptedTasks[i] = -1;
          continue;
        }
        v22 = &CPedScriptedTaskRecord::ms_scriptedTasks[i];
        v8 = *(_DWORD **)(result + 1088);
        v21 = (CTaskManager *)(v8 + 1);
        ActiveTask = CTaskManager::GetActiveTask((CTaskManager *)(v8 + 1));
        v10 = (const CTask *)v2[2];
        if ( (const CTask *)ActiveTask == v10 )
        {
          result = 1;
          v22[4] = 1;
          continue;
        }
        v11 = (const CTask *)v8[1];
        v12 = v8;
        if ( !v11 )
        {
          v11 = (const CTask *)v8[2];
          if ( !v11 )
            v11 = (const CTask *)v8[3];
        }
        v13 = v11 == v10;
        v14 = &CPedScriptedTaskRecord::ms_scriptedTasks[i];
        if ( v11 != v10 )
          v13 = v12[4] == (_DWORD)v10;
        if ( v13 || (const CTask *)v12[5] == v10 )
        {
          result = 2;
          v22[4] = 2;
          continue;
        }
        if ( CTaskManager::HasTaskSecondary(v21, v10) == 1 )
        {
          result = 6;
          v22[4] = 6;
          continue;
        }
        v15 = (CEntity *)v18[3];
        if ( v15 )
          CEntity::CleanUpOldReference(v15, (CEntity **)&CPedScriptedTaskRecord::ms_scriptedTasks[i + 3]);
        v18[3] = 0;
        v16[1] = 0;
        v2[2] = 0;
LABEL_38:
        v14[4] = 3;
        result = -1;
        goto LABEL_39;
      }
      PedsGroup = CPedGroups::GetPedsGroup((CPedGroups *)result, (const CPed *)byte_4);
      if ( !PedsGroup
        || (result = CPedGroupIntelligence::GetTaskScriptCommand(
                       (CPedGroupIntelligence *)(PedsGroup + 48),
                       (CPed *)v18[3]),
            result != v2[2]) )
      {
        v7 = (CEntity *)v18[3];
        if ( v7 )
          CEntity::CleanUpOldReference(v7, (CEntity **)&CPedScriptedTaskRecord::ms_scriptedTasks[i + 3]);
        goto LABEL_8;
      }
    }
    else
    {
      v18[3] = 0;
      v16[1] = 0;
      CPedScriptedTaskRecord::ms_scriptedTasks[i] = -1;
      result = (int)&CPedScriptedTaskRecord::ms_scriptedTasks[i];
      *(_DWORD *)(result + 16) = 3;
      *(_DWORD *)(result + 8) = 0;
    }
  }
  return result;
}


// ============================================================

// Address: 0x4c2e90
// Original: _ZN22CPedScriptedTaskRecord9GetStatusEPK4CPedi
// Demangled: CPedScriptedTaskRecord::GetStatus(CPed const*,int)
int __fastcall CPedScriptedTaskRecord::GetStatus(CPedScriptedTaskRecord *this, const CPed *a2, int a3)
{
  int v3; // r12
  int *i; // r2
  bool v6; // zf

  v3 = -1;
  for ( i = &dword_9F011C; ; i += 5 )
  {
    v6 = (const CPed *)((char *)a2 + 1) == 0;
    if ( a2 != (const CPed *)-1 )
      v6 = *(i - 4) == (_DWORD)a2;
    if ( v6 && (CPedScriptedTaskRecord *)*(i - 1) == this )
      break;
    if ( ++v3 >= 127 )
      return -1;
  }
  return *i;
}


// ============================================================

// Address: 0x4c2ed0
// Original: _ZN22CPedScriptedTaskRecord9GetStatusEPK4CPed
// Demangled: CPedScriptedTaskRecord::GetStatus(CPed const*)
int __fastcall CPedScriptedTaskRecord::GetStatus(CPedScriptedTaskRecord *this, const CPed *a2)
{
  char v2; // r12
  int v3; // r3
  int *v4; // r2

  v2 = 0;
  v3 = -1;
  v4 = &dword_9F0118;
  do
  {
    v2 |= *v4 == (_DWORD)this;
    if ( (CPedScriptedTaskRecord *)*v4 == this )
      break;
    ++v3;
    v4 += 5;
  }
  while ( v3 <= 126 );
  return v2 & 1;
}


// ============================================================
