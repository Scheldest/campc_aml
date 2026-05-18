
// Address: 0x4b8c88
// Original: _ZN23CEventCreatePartnerTaskD2Ev
// Demangled: CEventCreatePartnerTask::~CEventCreatePartnerTask()
void __fastcall CEventCreatePartnerTask::~CEventCreatePartnerTask(CEventCreatePartnerTask *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_669034;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  j_CEvent::~CEvent(this);
}


// ============================================================

// Address: 0x4b8d00
// Original: _ZN23CEventCreatePartnerTaskD0Ev
// Demangled: CEventCreatePartnerTask::~CEventCreatePartnerTask()
void __fastcall CEventCreatePartnerTask::~CEventCreatePartnerTask(CEventCreatePartnerTask *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_669034;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CEvent::~CEvent(this);
  sub_197900(v4);
}


// ============================================================

// Address: 0x4b8d30
// Original: _ZNK23CEventCreatePartnerTask12GetEventTypeEv
// Demangled: CEventCreatePartnerTask::GetEventType(void)
int __fastcall CEventCreatePartnerTask::GetEventType(CEventCreatePartnerTask *this)
{
  return 70;
}


// ============================================================

// Address: 0x4b8d34
// Original: _ZNK23CEventCreatePartnerTask16GetEventPriorityEv
// Demangled: CEventCreatePartnerTask::GetEventPriority(void)
int __fastcall CEventCreatePartnerTask::GetEventPriority(CEventCreatePartnerTask *this)
{
  return 6;
}


// ============================================================

// Address: 0x4b8d38
// Original: _ZNK23CEventCreatePartnerTask11GetLifeTimeEv
// Demangled: CEventCreatePartnerTask::GetLifeTime(void)
int __fastcall CEventCreatePartnerTask::GetLifeTime(CEventCreatePartnerTask *this)
{
  return 0;
}


// ============================================================

// Address: 0x4b8d3c
// Original: _ZNK23CEventCreatePartnerTask5CloneEv
// Demangled: CEventCreatePartnerTask::Clone(void)
CEvent *__fastcall CEventCreatePartnerTask::Clone(CEventCreatePartnerTask *this, unsigned int a2)
{
  CEvent *v3; // r0
  __int64 v4; // kr00_8
  CEvent *v5; // r4
  int v6; // r9

  v3 = (CEvent *)CEvent::operator new((CEvent *)&dword_1C, a2);
  v4 = *(_QWORD *)((char *)this + 12);
  v5 = v3;
  v6 = *((_DWORD *)this + 6);
  LOBYTE(this) = *((_BYTE *)this + 20);
  CEvent::CEvent(v3);
  *((_DWORD *)v5 + 3) = v4;
  *((_BYTE *)v5 + 20) = (_BYTE)this;
  *((_DWORD *)v5 + 6) = v6;
  *(_DWORD *)v5 = &off_669034;
  *((_DWORD *)v5 + 4) = HIDWORD(v4);
  if ( HIDWORD(v4) )
    CEntity::RegisterReference((CEntity *)HIDWORD(v4), (CEntity **)v5 + 4);
  return v5;
}


// ============================================================

// Address: 0x4b8d90
// Original: _ZNK23CEventCreatePartnerTask10AffectsPedEP4CPed
// Demangled: CEventCreatePartnerTask::AffectsPed(CPed *)
int __fastcall CEventCreatePartnerTask::AffectsPed(CEventCreatePartnerTask *this, CPed *a2)
{
  return 1;
}


// ============================================================
