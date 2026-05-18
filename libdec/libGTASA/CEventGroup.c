
// Address: 0x18a4fc
// Original: j__ZN11CEventGroup3AddER6CEventb
// Demangled: CEventGroup::Add(CEvent &,bool)
// attributes: thunk
int __fastcall CEventGroup::Add(CEventGroup *this, CEvent *a2, bool a3)
{
  return _ZN11CEventGroup3AddER6CEventb(this, a2, a3);
}


// ============================================================

// Address: 0x18e88c
// Original: j__ZNK11CEventGroup8HasEventEPK6CEvent
// Demangled: CEventGroup::HasEvent(CEvent const*)
// attributes: thunk
int __fastcall CEventGroup::HasEvent(CEventGroup *this, const CEvent *a2)
{
  return _ZNK11CEventGroup8HasEventEPK6CEvent(this, a2);
}


// ============================================================

// Address: 0x18fa48
// Original: j__ZN11CEventGroup6RemoveEP6CEvent
// Demangled: CEventGroup::Remove(CEvent *)
// attributes: thunk
int __fastcall CEventGroup::Remove(CEventGroup *this, CEvent *a2)
{
  return _ZN11CEventGroup6RemoveEP6CEvent(this, a2);
}


// ============================================================

// Address: 0x1914a8
// Original: j__ZNK11CEventGroup14GetEventOfTypeEi
// Demangled: CEventGroup::GetEventOfType(int)
// attributes: thunk
int __fastcall CEventGroup::GetEventOfType(CEventGroup *this, int a2)
{
  return _ZNK11CEventGroup14GetEventOfTypeEi(this, a2);
}


// ============================================================

// Address: 0x195f2c
// Original: j__ZNK11CEventGroup14HasEventOfTypeEPK6CEvent
// Demangled: CEventGroup::HasEventOfType(CEvent const*)
// attributes: thunk
int __fastcall CEventGroup::HasEventOfType(CEventGroup *this, const CEvent *a2)
{
  return _ZNK11CEventGroup14HasEventOfTypeEPK6CEvent(this, a2);
}


// ============================================================

// Address: 0x198390
// Original: j__ZN11CEventGroupC2EP4CPed
// Demangled: CEventGroup::CEventGroup(CPed *)
// attributes: thunk
void __fastcall CEventGroup::CEventGroup(CEventGroup *this, CPed *a2)
{
  _ZN11CEventGroupC2EP4CPed(this, a2);
}


// ============================================================

// Address: 0x19b014
// Original: j__ZNK11CEventGroup26HasScriptCommandOfTaskTypeEi
// Demangled: CEventGroup::HasScriptCommandOfTaskType(int)
// attributes: thunk
int __fastcall CEventGroup::HasScriptCommandOfTaskType(CEventGroup *this, int a2)
{
  return _ZNK11CEventGroup26HasScriptCommandOfTaskTypeEi(this, a2);
}


// ============================================================

// Address: 0x19be44
// Original: j__ZN11CEventGroup10TickEventsEv
// Demangled: CEventGroup::TickEvents(void)
// attributes: thunk
int __fastcall CEventGroup::TickEvents(CEventGroup *this)
{
  return _ZN11CEventGroup10TickEventsEv(this);
}


// ============================================================

// Address: 0x19e8e8
// Original: j__ZN11CEventGroup5FlushEb
// Demangled: CEventGroup::Flush(bool)
// attributes: thunk
int __fastcall CEventGroup::Flush(CEventGroup *this, bool a2)
{
  return _ZN11CEventGroup5FlushEb(this, a2);
}


// ============================================================

// Address: 0x19ec04
// Original: j__ZN11CEventGroup19RemoveInvalidEventsEb
// Demangled: CEventGroup::RemoveInvalidEvents(bool)
// attributes: thunk
int __fastcall CEventGroup::RemoveInvalidEvents(CEventGroup *this, bool a2)
{
  return _ZN11CEventGroup19RemoveInvalidEventsEb(this, a2);
}


// ============================================================

// Address: 0x19ed70
// Original: j__ZNK11CEventGroup23GetHighestPriorityEventEv
// Demangled: CEventGroup::GetHighestPriorityEvent(void)
// attributes: thunk
int __fastcall CEventGroup::GetHighestPriorityEvent(CEventGroup *this)
{
  return _ZNK11CEventGroup23GetHighestPriorityEventEv(this);
}


// ============================================================

// Address: 0x19f478
// Original: j__ZN11CEventGroup10ReorganiseEv
// Demangled: CEventGroup::Reorganise(void)
// attributes: thunk
int __fastcall CEventGroup::Reorganise(CEventGroup *this)
{
  return _ZN11CEventGroup10ReorganiseEv(this);
}


// ============================================================

// Address: 0x36f390
// Original: _ZN11CEventGroupC2EP4CPed
// Demangled: CEventGroup::CEventGroup(CPed *)
void __fastcall CEventGroup::CEventGroup(CEventGroup *this, CPed *a2)
{
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 1) = a2;
  *((_DWORD *)this + 18) = 0;
  *(_DWORD *)this = &off_665D64;
}


// ============================================================

// Address: 0x36f41c
// Original: _ZN11CEventGroup5FlushEb
// Demangled: CEventGroup::Flush(bool)
int __fastcall CEventGroup::Flush(CEventGroup *this, int a2)
{
  char *v3; // r8
  int i; // r6
  _DWORD *v5; // r5
  int v6; // r0
  int v7; // r1
  int v8; // r8
  char *v9; // r6
  int j; // r5
  int v11; // r0
  int result; // r0
  char *v13; // r0

  if ( a2 == 1 )
  {
    if ( *((int *)this + 2) < 1 )
    {
      result = 0;
      goto LABEL_19;
    }
    v3 = (char *)this + 12;
    for ( i = 0; i < v7; ++i )
    {
      v5 = *(_DWORD **)&v3[4 * i];
      if ( (*(int (__fastcall **)(_DWORD *))(*v5 + 8))(v5) == 32 )
      {
        v6 = v5[4];
        if ( v6 )
        {
          if ( (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 20))(v6) == 243 )
          {
            v13 = (char *)this + 4 * i;
            v8 = *((_DWORD *)v13 + 3);
            *((_DWORD *)v13 + 3) = 0;
            goto LABEL_11;
          }
        }
      }
      v7 = *((_DWORD *)this + 2);
    }
    v8 = 0;
    if ( v7 >= 1 )
      goto LABEL_12;
  }
  else
  {
    v8 = 0;
LABEL_11:
    v7 = *((_DWORD *)this + 2);
    if ( v7 >= 1 )
    {
LABEL_12:
      v9 = (char *)this + 12;
      for ( j = 0; j < v7; ++j )
      {
        v11 = *(_DWORD *)&v9[4 * j];
        if ( v11 )
        {
          (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 4))(v11);
          *(_DWORD *)&v9[4 * j] = 0;
          v7 = *((_DWORD *)this + 2);
        }
      }
    }
  }
  result = 0;
  *((_DWORD *)this + 2) = 0;
  if ( !v8 )
    return result;
  result = 1;
  *((_DWORD *)this + 3) = v8;
LABEL_19:
  *((_DWORD *)this + 2) = result;
  return result;
}


// ============================================================

// Address: 0x36f4bc
// Original: _ZN11CEventGroupD0Ev
// Demangled: CEventGroup::~CEventGroup()
void __fastcall CEventGroup::~CEventGroup(CEventGroup *this)
{
  int v2; // r1
  char *v3; // r5
  int i; // r6
  int v5; // r0

  v2 = *((_DWORD *)this + 2);
  *(_DWORD *)this = &off_665D64;
  if ( v2 >= 1 )
  {
    v3 = (char *)this + 12;
    for ( i = 0; i < v2; ++i )
    {
      v5 = *(_DWORD *)&v3[4 * i];
      if ( v5 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(v5);
        *(_DWORD *)&v3[4 * i] = 0;
        v2 = *((_DWORD *)this + 2);
      }
    }
  }
  operator delete(this);
}


// ============================================================

// Address: 0x36f50c
// Original: _ZN11CEventGroup3AddER6CEventb
// Demangled: CEventGroup::Add(CEvent &,bool)
CPed *__fastcall CEventGroup::Add(CPed **this, CEvent *a2, bool a3)
{
  int v6; // r10
  int v7; // r8
  _BOOL4 v8; // r5
  int v9; // r0
  int v10; // r11
  CPedIntelligence *v11; // r8
  int v12; // r5
  int v13; // r0
  CPed *v14; // r0
  CPed *v15; // r5
  int v17; // [sp+0h] [bp-20h]

  if ( this[1] )
  {
    if ( (*(int (__fastcall **)(CEvent *))(*(_DWORD *)a2 + 40))(a2) == 1 )
    {
      v6 = CEventEditableResponse::ComputeResponseTaskOfType(a2, this[1], 1200);
      v7 = CEventEditableResponse::ComputeResponseTaskOfType(a2, this[1], 1700);
      v17 = CEventEditableResponse::ComputeResponseTaskOfType(a2, this[1], 300);
      CEventEditableResponse::ComputeResponseTaskType(a2, this[1], 0);
      v8 = CEventEditableResponse::WillRespond(a2)
        || (*(int (__fastcall **)(CEvent *))(*(_DWORD *)a2 + 8))(a2) == 9 && *((_BYTE *)a2 + 9);
    }
    else
    {
      v8 = 1;
      v6 = 0;
      v7 = 0;
      v17 = 0;
    }
    v9 = (*(int (__fastcall **)(CEvent *, CPed *))(*(_DWORD *)a2 + 24))(a2, this[1]);
    v10 = v8 & v9;
    if ( v9 == 1 )
    {
      if ( (*(int (__fastcall **)(CEvent *))(*(_DWORD *)a2 + 40))(a2) == 1 )
      {
        if ( v6 == 1 )
          CEventEditableResponse::InformGroup(a2, this[1]);
        if ( v7 == 1
          && ((*(int (__fastcall **)(CEvent *))(*(_DWORD *)a2 + 8))(a2) != 9 || (*((_BYTE *)a2 + 33) & 0x10) == 0) )
        {
          CEventEditableResponse::InformRespectedFriends(a2, this[1]);
        }
        if ( v17 == 1 )
          CEventEditableResponse::TriggerLookAt(a2, this[1]);
        CEventEditableResponse::InformVehicleOccupants(a2, this[1]);
      }
      v11 = (CPedIntelligence *)*((_DWORD *)this[1] + 272);
      v12 = (*(int (__fastcall **)(CEvent *))(*(_DWORD *)a2 + 8))(a2);
      v13 = (*(int (__fastcall **)(CEvent *))(*(_DWORD *)a2 + 12))(a2);
      CPedIntelligence::RecordEventForScript(v11, v12, v13);
    }
    if ( v10 != 1 )
      return 0;
  }
  if ( (int)this[2] > 15 )
    return 0;
  v14 = (CPed *)(*(int (__fastcall **)(CEvent *))(*(_DWORD *)a2 + 20))(a2);
  v15 = v14;
  *((_BYTE *)v14 + 8) = a3;
  if ( this[1] )
    (*(void (__fastcall **)(CPed *))(*(_DWORD *)v14 + 36))(v14);
  this[(_DWORD)this[2] + 3] = v15;
  this[2] = (CPed *)((char *)this[2] + 1);
  return v15;
}


// ============================================================

// Address: 0x36f658
// Original: _ZN11CEventGroup6RemoveEP6CEvent
// Demangled: CEventGroup::Remove(CEvent *)
int __fastcall CEventGroup::Remove(int this, CEvent *a2)
{
  int v2; // r12
  int v3; // r3

  if ( a2 )
  {
    v2 = *(_DWORD *)(this + 8);
    if ( v2 >= 1 )
    {
      v3 = 0;
      while ( *(CEvent **)(this + 12 + 4 * v3) != a2 )
      {
        if ( ++v3 >= v2 )
          return this;
      }
      *(_DWORD *)(this + 4 * v3 + 12) = 0;
      return (*(int (__fastcall **)(CEvent *))(*(_DWORD *)a2 + 4))(a2);
    }
  }
  return this;
}


// ============================================================

// Address: 0x36f696
// Original: _ZNK11CEventGroup14HasEventOfTypeEPK6CEvent
// Demangled: CEventGroup::HasEventOfType(CEvent const*)
int __fastcall CEventGroup::HasEventOfType(CEventGroup *this, const CEvent *a2)
{
  int v4; // r5
  int v5; // r6

  if ( a2 )
  {
    if ( *((int *)this + 2) < 1 )
      return 0;
    v4 = 0;
    while ( 1 )
    {
      v5 = (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a2 + 8))(a2);
      if ( v5 == (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + v4 + 3) + 8))(*((_DWORD *)this + v4 + 3)) )
        break;
      if ( ++v4 >= *((_DWORD *)this + 2) )
        return 0;
    }
  }
  return 1;
}


// ============================================================

// Address: 0x36f6e4
// Original: _ZNK11CEventGroup14GetEventOfTypeEi
// Demangled: CEventGroup::GetEventOfType(int)
int __fastcall CEventGroup::GetEventOfType(CEventGroup *this, int a2)
{
  int v4; // r6

  if ( *((int *)this + 2) < 1 )
    return 0;
  v4 = 0;
  while ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + v4 + 3) + 8))(*((_DWORD *)this + v4 + 3)) != a2 )
  {
    if ( ++v4 >= *((_DWORD *)this + 2) )
      return 0;
  }
  return *((_DWORD *)this + v4 + 3);
}


// ============================================================

// Address: 0x36f726
// Original: _ZNK11CEventGroup8HasEventEPK6CEvent
// Demangled: CEventGroup::HasEvent(CEvent const*)
int __fastcall CEventGroup::HasEvent(CEventGroup *this, const CEvent *a2)
{
  int v2; // r2
  int i; // r3

  v2 = *((_DWORD *)this + 2);
  if ( v2 < 1 )
    return 0;
  for ( i = 0; i < v2; ++i )
  {
    if ( *((const CEvent **)this + i + 3) == a2 )
      return 1;
  }
  return 0;
}


// ============================================================

// Address: 0x36f74e
// Original: _ZN11CEventGroup10TickEventsEv
// Demangled: CEventGroup::TickEvents(void)
int __fastcall CEventGroup::TickEvents(int this)
{
  int v1; // r2
  int v2; // r3

  if ( *(int *)(this + 8) >= 1 )
  {
    v1 = 0;
    do
    {
      v2 = *(_DWORD *)(this + 12 + 4 * v1++);
      ++*(_DWORD *)(v2 + 4);
    }
    while ( v1 < *(_DWORD *)(this + 8) );
  }
  return this;
}


// ============================================================

// Address: 0x36f770
// Original: _ZN11CEventGroup10ReorganiseEv
// Demangled: CEventGroup::Reorganise(void)
int __fastcall CEventGroup::Reorganise(int this)
{
  int v1; // r3
  int v2; // r1
  int v3; // r2
  int i; // r4
  int v5; // r5
  int v6; // r2
  _DWORD v7[18]; // [sp+0h] [bp-48h]

  v1 = *(_DWORD *)(this + 8);
  if ( v1 < 1 )
  {
    *(_DWORD *)(this + 8) = 0;
  }
  else
  {
    v2 = this + 12;
    v3 = 0;
    for ( i = 0; i < v1; ++i )
    {
      v5 = *(_DWORD *)(v2 + 4 * i);
      if ( v5 )
      {
        v7[v3] = v5;
        *(_DWORD *)(v2 + 4 * i) = 0;
        v1 = *(_DWORD *)(this + 8);
        ++v3;
      }
    }
    *(_DWORD *)(this + 8) = v3;
    if ( v3 >= 1 )
    {
      v6 = 0;
      do
      {
        *(_DWORD *)(v2 + 4 * v6) = v7[v6];
        ++v6;
      }
      while ( v6 < *(_DWORD *)(this + 8) );
    }
  }
  return this;
}


// ============================================================

// Address: 0x36f7c8
// Original: _ZN11CEventGroup19RemoveInvalidEventsEb
// Demangled: CEventGroup::RemoveInvalidEvents(bool)
int __fastcall CEventGroup::RemoveInvalidEvents(CEventGroup *this, int a2)
{
  int result; // r0
  char *v5; // r10
  int i; // r4
  int v7; // r6

  result = *((_DWORD *)this + 2);
  if ( result >= 1 )
  {
    v5 = (char *)this + 12;
    for ( i = 0; i < result; ++i )
    {
      v7 = *(_DWORD *)&v5[4 * i];
      if ( v7
        && ((*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v7 + 60))(*(_DWORD *)&v5[4 * i], *((_DWORD *)this + 1)) != 1
         || a2 == 1 && (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7) != 32) )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 4))(v7);
        *(_DWORD *)&v5[4 * i] = 0;
      }
      result = *((_DWORD *)this + 2);
    }
  }
  return result;
}


// ============================================================

// Address: 0x36f824
// Original: _ZNK11CEventGroup23GetHighestPriorityEventEv
// Demangled: CEventGroup::GetHighestPriorityEvent(void)
int __fastcall CEventGroup::GetHighestPriorityEvent(CEventGroup *this)
{
  char *v2; // r9
  int v3; // r8
  int v4; // r11
  int v5; // r4
  int v6; // r6
  int v7; // r5

  if ( *((int *)this + 2) >= 1 )
  {
    v2 = (char *)this + 12;
    v3 = 0;
    v4 = -1;
    v5 = 0;
    while ( 1 )
    {
      v6 = *(_DWORD *)&v2[4 * v5];
      v7 = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6) == 32 )
      {
        if ( v7 > v4 )
          goto LABEL_7;
      }
      else if ( v7 >= v4 )
      {
LABEL_7:
        if ( (*(int (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)&v2[4 * v5] + 24))(
               *(_DWORD *)&v2[4 * v5],
               *((_DWORD *)this + 1)) )
        {
          v3 = v6;
          v4 = v7;
        }
      }
      if ( ++v5 >= *((_DWORD *)this + 2) )
        return v3;
    }
  }
  return 0;
}


// ============================================================

// Address: 0x36f89a
// Original: _ZNK11CEventGroup26HasScriptCommandOfTaskTypeEi
// Demangled: CEventGroup::HasScriptCommandOfTaskType(int)
int __fastcall CEventGroup::HasScriptCommandOfTaskType(CEventGroup *this, int a2)
{
  char *v4; // r6
  int v5; // r4
  int v6; // r0
  int v7; // r0

  if ( *((int *)this + 2) < 1 )
    return 0;
  v4 = (char *)this + 12;
  v5 = 0;
  while ( 1 )
  {
    v6 = *(_DWORD *)&v4[4 * v5];
    if ( v6 )
    {
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6) == 32 )
      {
        v7 = *(_DWORD *)(*(_DWORD *)&v4[4 * v5] + 16);
        if ( v7 )
        {
          if ( (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 20))(v7) == a2 )
            break;
        }
      }
    }
    if ( ++v5 >= *((_DWORD *)this + 2) )
      return 0;
  }
  return 1;
}


// ============================================================
