
// Address: 0x189e4c
// Original: j__ZN23CScriptedBrainTaskStore7SetTaskEP4CPedP5CTask
// Demangled: CScriptedBrainTaskStore::SetTask(CPed *,CTask *)
// attributes: thunk
int __fastcall CScriptedBrainTaskStore::SetTask(CScriptedBrainTaskStore *this, CPed *a2, CTask *a3)
{
  return _ZN23CScriptedBrainTaskStore7SetTaskEP4CPedP5CTask(this, a2, a3);
}


// ============================================================

// Address: 0x1988ec
// Original: j__ZN23CScriptedBrainTaskStore7GetTaskEPK4CPed
// Demangled: CScriptedBrainTaskStore::GetTask(CPed const*)
// attributes: thunk
int __fastcall CScriptedBrainTaskStore::GetTask(CScriptedBrainTaskStore *this, const CPed *a2)
{
  return _ZN23CScriptedBrainTaskStore7GetTaskEPK4CPed(this, a2);
}


// ============================================================

// Address: 0x4ee3b4
// Original: _ZN23CScriptedBrainTaskStore5ClearEP4CPed
// Demangled: CScriptedBrainTaskStore::Clear(CPed *)
CEntity *__fastcall CScriptedBrainTaskStore::Clear(CEntity *this, CPed *a2)
{
  int *v2; // r4
  int v3; // r1
  int v4; // r1

  v2 = &CScriptedBrainTaskStore::ms_entries;
  v3 = -1;
  while ( (CEntity *)*v2 != this )
  {
    ++v3;
    v2 += 4;
    if ( v3 >= 47 )
      return this;
  }
  v4 = v2[3];
  if ( v4 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v2[3]);
    this = (CEntity *)*v2;
  }
  v2[3] = 0;
  if ( this )
  {
    this = (CEntity *)CEntity::CleanUpOldReference(this, (CEntity **)v2);
    *v2 = 0;
  }
  return this;
}


// ============================================================

// Address: 0x4f190c
// Original: _ZN23CScriptedBrainTaskStore7SetTaskEP4CPedP5CTask
// Demangled: CScriptedBrainTaskStore::SetTask(CPed *,CTask *)
CPed *__fastcall CScriptedBrainTaskStore::SetTask(CScriptedBrainTaskStore *this, CPed *a2, CTask *a3)
{
  int v4; // r2
  int *v5; // r5
  int v6; // r1
  unsigned int v7; // r3
  int *v8; // r5
  int v9; // r0
  int v10; // t1
  CPed *result; // r0

  v4 = -1;
  v5 = &dword_9FEC60;
  v6 = -1;
  do
  {
    v7 = *(v5 - 3);
    if ( (CScriptedBrainTaskStore *)v7 == this )
    {
      v9 = *v5;
      goto LABEL_9;
    }
    ++v4;
    v5 += 4;
    if ( !(v7 | ~v6) )
      v6 = v4;
  }
  while ( v4 < 47 );
  if ( v6 != -1 )
  {
    v8 = &CScriptedBrainTaskStore::ms_entries[4 * v6];
    *v8 = (int)this;
    CEntity::RegisterReference(this, (CEntity **)v8);
    v10 = v8[3];
    v5 = v8 + 3;
    v9 = v10;
LABEL_9:
    if ( v9 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 4))(v9);
    result = a2;
    *v5 = (int)a2;
    return result;
  }
  if ( a2 )
    (*(void (__fastcall **)(CPed *))(*(_DWORD *)a2 + 4))(a2);
  return 0;
}


// ============================================================

// Address: 0x4f1988
// Original: _ZN23CScriptedBrainTaskStore7GetTaskEPK4CPed
// Demangled: CScriptedBrainTaskStore::GetTask(CPed const*)
int __fastcall CScriptedBrainTaskStore::GetTask(CScriptedBrainTaskStore *this, const CPed *a2)
{
  int v2; // r2
  int *v3; // r1

  v2 = -1;
  v3 = &dword_9FEC60;
  do
  {
    if ( (CScriptedBrainTaskStore *)*(v3 - 3) == this )
      return *v3;
    ++v2;
    v3 += 4;
  }
  while ( v2 < 47 );
  return 0;
}


// ============================================================

// Address: 0x4f19b4
// Original: _ZN23CScriptedBrainTaskStore5ClearEP5CTask
// Demangled: CScriptedBrainTaskStore::Clear(CTask *)
CEntity *__fastcall CScriptedBrainTaskStore::Clear(CEntity *this, CTask *a2)
{
  int *v2; // r4
  int v3; // r1

  v2 = CScriptedBrainTaskStore::ms_entries;
  v3 = -1;
  while ( (CEntity *)v2[3] != this )
  {
    ++v3;
    v2 += 4;
    if ( v3 >= 47 )
      return this;
  }
  if ( this )
    (*(void (__fastcall **)(CEntity *))(*(_DWORD *)this + 4))(this);
  this = (CEntity *)*v2;
  v2[3] = 0;
  if ( this )
  {
    this = (CEntity *)CEntity::CleanUpOldReference(this, (CEntity **)v2);
    *v2 = 0;
  }
  return this;
}


// ============================================================
