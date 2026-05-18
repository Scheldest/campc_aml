
// Address: 0x18d848
// Original: j__ZN26CPedScriptedTaskRecordData18AssociateWithEventEP19CEventScriptCommand
// Demangled: CPedScriptedTaskRecordData::AssociateWithEvent(CEventScriptCommand *)
// attributes: thunk
int __fastcall CPedScriptedTaskRecordData::AssociateWithEvent(
        CPedScriptedTaskRecordData *this,
        CEventScriptCommand *a2)
{
  return _ZN26CPedScriptedTaskRecordData18AssociateWithEventEP19CEventScriptCommand(this, a2);
}


// ============================================================

// Address: 0x18eff4
// Original: j__ZN26CPedScriptedTaskRecordData3SetEP4CPediPK5CTask
// Demangled: CPedScriptedTaskRecordData::Set(CPed *,int,CTask const*)
// attributes: thunk
int __fastcall CPedScriptedTaskRecordData::Set(CEntity **this, CPed *a2, int a3, const CTask *a4)
{
  return _ZN26CPedScriptedTaskRecordData3SetEP4CPediPK5CTask(this, a2, a3, a4);
}


// ============================================================

// Address: 0x18f9b8
// Original: j__ZN26CPedScriptedTaskRecordData17AssociateWithTaskEP5CTask
// Demangled: CPedScriptedTaskRecordData::AssociateWithTask(CTask *)
// attributes: thunk
int __fastcall CPedScriptedTaskRecordData::AssociateWithTask(CPedScriptedTaskRecordData *this, CTask *a2)
{
  return _ZN26CPedScriptedTaskRecordData17AssociateWithTaskEP5CTask(this, a2);
}


// ============================================================

// Address: 0x1913ec
// Original: j__ZN26CPedScriptedTaskRecordData14SetAsGroupTaskEP4CPediPK5CTask
// Demangled: CPedScriptedTaskRecordData::SetAsGroupTask(CPed *,int,CTask const*)
// attributes: thunk
int __fastcall CPedScriptedTaskRecordData::SetAsGroupTask(CEntity **this, CPed *a2, int a3, const CTask *a4)
{
  return _ZN26CPedScriptedTaskRecordData14SetAsGroupTaskEP4CPediPK5CTask(this, a2, a3, a4);
}


// ============================================================

// Address: 0x193840
// Original: j__ZN26CPedScriptedTaskRecordData24SetAsAttractorScriptTaskEP4CPediPK5CTask
// Demangled: CPedScriptedTaskRecordData::SetAsAttractorScriptTask(CPed *,int,CTask const*)
// attributes: thunk
int __fastcall CPedScriptedTaskRecordData::SetAsAttractorScriptTask(CEntity **this, CPed *a2, int a3, const CTask *a4)
{
  return _ZN26CPedScriptedTaskRecordData24SetAsAttractorScriptTaskEP4CPediPK5CTask(this, a2, a3, a4);
}


// ============================================================

// Address: 0x1a0694
// Original: j__ZN26CPedScriptedTaskRecordData5FlushEv
// Demangled: CPedScriptedTaskRecordData::Flush(void)
// attributes: thunk
int __fastcall CPedScriptedTaskRecordData::Flush(CPedScriptedTaskRecordData *this)
{
  return _ZN26CPedScriptedTaskRecordData5FlushEv(this);
}


// ============================================================

// Address: 0x1a1364
// Original: j__ZN26CPedScriptedTaskRecordData3SetEP4CPediPK19CEventScriptCommand
// Demangled: CPedScriptedTaskRecordData::Set(CPed *,int,CEventScriptCommand const*)
// attributes: thunk
int __fastcall CPedScriptedTaskRecordData::Set(CEntity **this, CPed *a2, int a3, const CEventScriptCommand *a4)
{
  return _ZN26CPedScriptedTaskRecordData3SetEP4CPediPK19CEventScriptCommand(this, a2, a3, a4);
}


// ============================================================

// Address: 0x4c2a10
// Original: _ZN26CPedScriptedTaskRecordDataC2Ev
// Demangled: CPedScriptedTaskRecordData::CPedScriptedTaskRecordData(void)
void __fastcall CPedScriptedTaskRecordData::CPedScriptedTaskRecordData(CPedScriptedTaskRecordData *this)
{
  *(_DWORD *)this = -1;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 3;
}


// ============================================================

// Address: 0x4c2a24
// Original: _ZN26CPedScriptedTaskRecordData5FlushEv
// Demangled: CPedScriptedTaskRecordData::Flush(void)
int __fastcall CPedScriptedTaskRecordData::Flush(CPedScriptedTaskRecordData *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int result; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  result = 0;
  *(_DWORD *)this = -1;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 3;
  return result;
}


// ============================================================

// Address: 0x4c2a4c
// Original: _ZN26CPedScriptedTaskRecordData3SetEP4CPediPK19CEventScriptCommand
// Demangled: CPedScriptedTaskRecordData::Set(CPed *,int,CEventScriptCommand const*)
int __fastcall CPedScriptedTaskRecordData::Set(CEntity **this, CPed *a2, CEntity *a3, const CEventScriptCommand *a4)
{
  CEntity *v7; // r0
  CEntity **v8; // r6
  int result; // r0

  v8 = this + 3;
  v7 = this[3];
  if ( v7 )
    CEntity::CleanUpOldReference(v7, v8);
  *this = (CEntity *)-1;
  this[1] = 0;
  this[2] = 0;
  this[3] = a2;
  this[4] = (CEntity *)(&stderr + 3);
  result = CEntity::RegisterReference(a2, v8);
  *this = a3;
  this[1] = a4;
  this[2] = 0;
  this[4] = 0;
  return result;
}


// ============================================================

// Address: 0x4c2a94
// Original: _ZN26CPedScriptedTaskRecordData3SetEP4CPediPK5CTask
// Demangled: CPedScriptedTaskRecordData::Set(CPed *,int,CTask const*)
int __fastcall CPedScriptedTaskRecordData::Set(CEntity **this, CPed *a2, CEntity *a3, const CTask *a4)
{
  CEntity *v7; // r0
  CEntity **v8; // r6
  int result; // r0

  v8 = this + 3;
  v7 = this[3];
  if ( v7 )
    CEntity::CleanUpOldReference(v7, v8);
  *this = (CEntity *)-1;
  this[1] = 0;
  this[2] = 0;
  this[3] = a2;
  this[4] = (CEntity *)(&stderr + 3);
  CEntity::RegisterReference(a2, v8);
  result = 1;
  *this = a3;
  this[1] = 0;
  this[2] = a4;
  this[4] = (CEntity *)(&stderr + 1);
  return result;
}


// ============================================================

// Address: 0x4c2ae2
// Original: _ZN26CPedScriptedTaskRecordData24SetAsAttractorScriptTaskEP4CPediPK5CTask
// Demangled: CPedScriptedTaskRecordData::SetAsAttractorScriptTask(CPed *,int,CTask const*)
int __fastcall CPedScriptedTaskRecordData::SetAsAttractorScriptTask(
        CEntity **this,
        CPed *a2,
        CEntity *a3,
        const CTask *a4)
{
  CEntity *v7; // r0
  CEntity **v8; // r6
  int result; // r0

  v8 = this + 3;
  v7 = this[3];
  if ( v7 )
    CEntity::CleanUpOldReference(v7, v8);
  *this = (CEntity *)-1;
  this[1] = 0;
  this[2] = 0;
  this[3] = a2;
  this[4] = (CEntity *)(&stderr + 3);
  CEntity::RegisterReference(a2, v8);
  result = 5;
  *this = a3;
  this[1] = 0;
  this[2] = a4;
  this[4] = (CEntity *)&byte_5;
  return result;
}


// ============================================================

// Address: 0x4c2b30
// Original: _ZN26CPedScriptedTaskRecordData14SetAsGroupTaskEP4CPediPK5CTask
// Demangled: CPedScriptedTaskRecordData::SetAsGroupTask(CPed *,int,CTask const*)
int __fastcall CPedScriptedTaskRecordData::SetAsGroupTask(CEntity **this, CPed *a2, CEntity *a3, const CTask *a4)
{
  CEntity *v7; // r0
  CEntity **v8; // r6
  int result; // r0

  v8 = this + 3;
  v7 = this[3];
  if ( v7 )
    CEntity::CleanUpOldReference(v7, v8);
  *this = (CEntity *)-1;
  this[1] = 0;
  this[2] = 0;
  this[3] = a2;
  this[4] = (CEntity *)(&stderr + 3);
  CEntity::RegisterReference(a2, v8);
  result = 4;
  *this = a3;
  this[1] = 0;
  this[2] = a4;
  this[4] = (CEntity *)byte_4;
  return result;
}


// ============================================================

// Address: 0x4c2b7e
// Original: _ZN26CPedScriptedTaskRecordData18AssociateWithEventEP19CEventScriptCommand
// Demangled: CPedScriptedTaskRecordData::AssociateWithEvent(CEventScriptCommand *)
int __fastcall CPedScriptedTaskRecordData::AssociateWithEvent(int this, CEventScriptCommand *a2)
{
  *(_DWORD *)(this + 16) = 0;
  *(_DWORD *)(this + 4) = a2;
  return this;
}


// ============================================================

// Address: 0x4c2b86
// Original: _ZN26CPedScriptedTaskRecordData17AssociateWithTaskEP5CTask
// Demangled: CPedScriptedTaskRecordData::AssociateWithTask(CTask *)
_DWORD *__fastcall CPedScriptedTaskRecordData::AssociateWithTask(_DWORD *this, CTask *a2)
{
  this[1] = 0;
  this[2] = a2;
  this[4] = 1;
  return this;
}


// ============================================================
