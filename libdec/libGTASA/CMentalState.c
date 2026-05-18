
// Address: 0x18e440
// Original: j__ZN12CMentalState7ProcessERK4CPed
// Demangled: CMentalState::Process(CPed const&)
// attributes: thunk
int __fastcall CMentalState::Process(CMentalState *this, const CPed *a2)
{
  return _ZN12CMentalState7ProcessERK4CPed(this, a2);
}


// ============================================================

// Address: 0x4bed60
// Original: _ZN12CMentalState7ProcessERK4CPed
// Demangled: CMentalState::Process(CPed const&)
int __fastcall CMentalState::Process(CMentalState *this, const CPed *a2, int a3)
{
  unsigned int v5; // r0
  int v6; // r1
  bool v7; // zf
  unsigned int v8; // r1
  unsigned int v9; // r0
  unsigned int v10; // r0
  _DWORD *v11; // r0
  unsigned int v12; // r0
  unsigned int v13; // r0
  _DWORD *v14; // r0
  int result; // r0
  __int16 v16; // r1
  char v17; // r2
  _DWORD v18[8]; // [sp+0h] [bp-20h] BYREF

  v5 = (unsigned int)*((float *)a2 + 337);
  *((_WORD *)this + 8) = v5;
  v6 = *((_DWORD *)a2 + 289);
  v7 = (v6 & 0x100) == 0;
  if ( (v6 & 0x100) != 0 )
  {
    a3 = *((_DWORD *)a2 + 356);
    v7 = a3 == 0;
  }
  if ( v7 )
  {
    if ( (v6 & 0x100) != 0 )
    {
LABEL_10:
      v9 = *((unsigned __int16 *)this + 11);
      if ( v9 >= 0x258 )
      {
        v10 = *((unsigned __int16 *)this + 10);
        if ( v10 >> 2 <= 0x4A )
          goto LABEL_18;
        if ( v10 >> 3 > 0x4A )
          goto LABEL_24;
        goto LABEL_22;
      }
      if ( v9 >= 0x12C && *((unsigned __int16 *)this + 10) >> 2 <= 0x4Au )
        goto LABEL_18;
      goto LABEL_24;
    }
  }
  else
  {
    *((_WORD *)this + 10) = (unsigned int)*(float *)(a3 + 1228);
    if ( (*((_DWORD *)a2 + 289) & 0x100) != 0 )
      goto LABEL_10;
  }
  v8 = *((unsigned __int16 *)this + 9);
  if ( v8 >= 0x32 )
  {
    if ( v5 <= 9 )
    {
LABEL_18:
      CEventEditableResponse::CEventEditableResponse((CEventEditableResponse *)v18);
      v11 = &`vtable for'CEventHealthReallyLow;
LABEL_23:
      v18[0] = *v11 + 8;
      CEventGroup::Add((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), (CEvent *)v18, 0);
      CEvent::~CEvent((CEvent *)v18);
      goto LABEL_24;
    }
    if ( v5 > 0x31 )
      goto LABEL_24;
LABEL_22:
    CEventEditableResponse::CEventEditableResponse((CEventEditableResponse *)v18);
    v11 = &`vtable for'CEventHealthLow;
    goto LABEL_23;
  }
  if ( v8 >= 0xA && v5 <= 9 )
    goto LABEL_18;
LABEL_24:
  v12 = *((unsigned __int8 *)this + 1);
  if ( v12 > 3 )
  {
    if ( v12 <= 6 && *(unsigned __int8 *)this >= 7u )
      goto LABEL_26;
  }
  else
  {
    v13 = *(unsigned __int8 *)this;
    if ( v13 >= 7 )
    {
LABEL_26:
      CEventEditableResponse::CEventEditableResponse((CEventEditableResponse *)v18);
      v14 = &`vtable for'CEventHighAngerAtPlayer;
LABEL_32:
      v18[0] = *v14 + 8;
      CEventGroup::Add((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), (CEvent *)v18, 0);
      CEvent::~CEvent((CEvent *)v18);
      goto LABEL_33;
    }
    if ( v13 >= 4 )
    {
      CEventEditableResponse::CEventEditableResponse((CEventEditableResponse *)v18);
      v14 = &`vtable for'CEventLowAngerAtPlayer;
      goto LABEL_32;
    }
  }
LABEL_33:
  result = *((unsigned __int16 *)this + 8);
  v16 = *((_WORD *)this + 10);
  v17 = *(_BYTE *)this;
  *((_WORD *)this + 9) = result;
  *((_WORD *)this + 11) = v16;
  *((_BYTE *)this + 1) = v17;
  return result;
}


// ============================================================
