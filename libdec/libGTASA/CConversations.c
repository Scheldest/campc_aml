
// Address: 0x18bda8
// Original: j__ZN14CConversations33IsPlayerInPositionForConversationEP4CPedb
// Demangled: CConversations::IsPlayerInPositionForConversation(CPed *,bool)
// attributes: thunk
int __fastcall CConversations::IsPlayerInPositionForConversation(CConversations *this, CPed *a2, bool a3)
{
  return _ZN14CConversations33IsPlayerInPositionForConversationEP4CPedb(this, a2, a3);
}


// ============================================================

// Address: 0x18f83c
// Original: j__ZN14CConversations26StartSettingUpConversationEP4CPed
// Demangled: CConversations::StartSettingUpConversation(CPed *)
// attributes: thunk
int __fastcall CConversations::StartSettingUpConversation(CConversations *this, CPed *a2)
{
  return _ZN14CConversations26StartSettingUpConversationEP4CPed(this, a2);
}


// ============================================================

// Address: 0x191044
// Original: j__ZN14CConversations24RemoveConversationForPedEP4CPed
// Demangled: CConversations::RemoveConversationForPed(CPed *)
// attributes: thunk
int __fastcall CConversations::RemoveConversationForPed(CConversations *this, CPed *a2)
{
  return _ZN14CConversations24RemoveConversationForPedEP4CPed(this, a2);
}


// ============================================================

// Address: 0x193e10
// Original: j__ZN14CConversations21SetUpConversationNodeEPcS0_S0_iii
// Demangled: CConversations::SetUpConversationNode(char *,char *,char *,int,int,int)
// attributes: thunk
int __fastcall CConversations::SetUpConversationNode(
        CConversations *this,
        char *a2,
        char *a3,
        char *a4,
        int a5,
        int a6,
        int a7)
{
  return _ZN14CConversations21SetUpConversationNodeEPcS0_S0_iii(this, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x194ea8
// Original: j__ZN14CConversations18EnableConversationEP4CPedb
// Demangled: CConversations::EnableConversation(CPed *,bool)
// attributes: thunk
int __fastcall CConversations::EnableConversation(CConversations *this, CPed *a2, bool a3)
{
  return _ZN14CConversations18EnableConversationEP4CPedb(this, a2, a3);
}


// ============================================================

// Address: 0x19a898
// Original: j__ZN14CConversations20IsConversationAtNodeEPcP4CPed
// Demangled: CConversations::IsConversationAtNode(char *,CPed *)
// attributes: thunk
int __fastcall CConversations::IsConversationAtNode(CConversations *this, char *a2, CPed *a3)
{
  return _ZN14CConversations20IsConversationAtNodeEPcP4CPed(this, a2, a3);
}


// ============================================================

// Address: 0x19b2a8
// Original: j__ZN14CConversations6UpdateEv
// Demangled: CConversations::Update(void)
// attributes: thunk
int __fastcall CConversations::Update(CConversations *this)
{
  return _ZN14CConversations6UpdateEv(this);
}


// ============================================================

// Address: 0x19b2d8
// Original: j__ZN14CConversations5ClearEv
// Demangled: CConversations::Clear(void)
// attributes: thunk
int __fastcall CConversations::Clear(CConversations *this)
{
  return _ZN14CConversations5ClearEv(this);
}


// ============================================================

// Address: 0x1a01e4
// Original: j__ZN14CConversations25DoneSettingUpConversationEb
// Demangled: CConversations::DoneSettingUpConversation(bool)
// attributes: thunk
int __fastcall CConversations::DoneSettingUpConversation(CConversations *this, bool a2)
{
  return _ZN14CConversations25DoneSettingUpConversationEb(this, a2);
}


// ============================================================

// Address: 0x3005e4
// Original: _ZN14CConversations5ClearEv
// Demangled: CConversations::Clear(void)
int *__fastcall CConversations::Clear(CConversations *this)
{
  int v1; // r3
  _DWORD *v2; // r2
  int v3; // r3
  __int16 *v4; // r1
  int *result; // r0

  v1 = 0;
  do
  {
    *(_DWORD *)((char *)&CConversations::m_aConversations + v1) = -1;
    v2 = (_DWORD *)((char *)&CConversations::m_aConversations + v1);
    v1 += 28;
    v2[1] = -1;
    v2[2] = 0;
    v2[3] = 0;
    v2[4] = 0;
  }
  while ( v1 != 392 );
  v3 = 0;
  do
  {
    CConversations::m_aNodes[v3] = 0;
    v4 = (__int16 *)&CConversations::m_aNodes[v3];
    v3 += 24;
    v4[5] = -1;
    v4[4] = -1;
    *((_DWORD *)v4 + 3) = 0;
    *((_DWORD *)v4 + 4) = 0;
    *((_DWORD *)v4 + 5) = 0;
  }
  while ( v3 != 1200 );
  result = &CConversations::m_AwkwardSayStatus;
  CConversations::m_AwkwardSayStatus = 0;
  LOBYTE(CConversations::m_bSettingUpConversation) = 0;
  return result;
}


// ============================================================

// Address: 0x300654
// Original: _ZN14CConversations6UpdateEv
// Demangled: CConversations::Update(void)
int *__fastcall CConversations::Update(CConversations *this)
{
  int *result; // r0

  if ( CConversations::m_AwkwardSayStatus == 2 )
  {
    result = (int *)CAudioEngine::IsMissionAudioSampleFinished((CAudioEngine *)&AudioEngine, 0);
    if ( !result )
      return result;
    CConversations::m_AwkwardSayStatus = 0;
    goto LABEL_8;
  }
  if ( CConversations::m_AwkwardSayStatus != 1 )
  {
LABEL_8:
    CConversationForPed::Update((CConversationForPed *)&CConversations::m_aConversations);
    CConversationForPed::Update((CConversationForPed *)&unk_7A0F9C);
    CConversationForPed::Update((CConversationForPed *)&algn_7A0FB4[4]);
    CConversationForPed::Update((CConversationForPed *)&unk_7A0FD4);
    CConversationForPed::Update((CConversationForPed *)&unk_7A0FF0);
    CConversationForPed::Update((CConversationForPed *)&unk_7A100C);
    CConversationForPed::Update((CConversationForPed *)&algn_7A1024[4]);
    CConversationForPed::Update((CConversationForPed *)&unk_7A1044);
    CConversationForPed::Update((CConversationForPed *)&unk_7A1060);
    CConversationForPed::Update((CConversationForPed *)&unk_7A107C);
    CConversationForPed::Update((CConversationForPed *)&algn_7A1094[4]);
    CConversationForPed::Update((CConversationForPed *)&unk_7A10B4);
    CConversationForPed::Update((CConversationForPed *)&unk_7A10D0);
    return (int *)CConversationForPed::Update((CConversationForPed *)&dword_7A10EC);
  }
  result = (int *)CAudioEngine::GetMissionAudioLoadingStatus((CAudioEngine *)&AudioEngine, 0);
  if ( result == (int *)((char *)&stderr + 1) )
  {
    CAudioEngine::PlayLoadedMissionAudio((CAudioEngine *)&AudioEngine, 0);
    result = &CConversations::m_AwkwardSayStatus;
    CConversations::m_AwkwardSayStatus = 2;
  }
  return result;
}


// ============================================================

// Address: 0x300d38
// Original: _ZN14CConversations10AwkwardSayEiP4CPed
// Demangled: CConversations::AwkwardSay(int,CPed *)
int *__fastcall CConversations::AwkwardSay(CConversations *this, CPed *a2, CPed *a3)
{
  int *result; // r0

  CAudioEngine::PreloadMissionAudio((CAudioEngine *)&AudioEngine, 0, (int)this);
  CAudioEngine::AttachMissionAudioToPed((CAudioEngine *)&AudioEngine, 0, a2);
  result = &CConversations::m_AwkwardSayStatus;
  CConversations::m_AwkwardSayStatus = 1;
  return result;
}


// ============================================================

// Address: 0x300ddc
// Original: _ZN14CConversations26StartSettingUpConversationEP4CPed
// Demangled: CConversations::StartSettingUpConversation(CPed *)
int __fastcall CConversations::StartSettingUpConversation(CConversations *this, CPed *a2)
{
  int result; // r0

  CConversations::m_pSettingUpConversationPed = (int)this;
  CEntity::RegisterReference(this, (CEntity **)&CConversations::m_pSettingUpConversationPed);
  LOBYTE(CConversations::m_bSettingUpConversation) = 1;
  result = 0;
  CConversations::m_SettingUpConversationNumNodes = 0;
  return result;
}


// ============================================================

// Address: 0x300e10
// Original: _ZN14CConversations25DoneSettingUpConversationEb
// Demangled: CConversations::DoneSettingUpConversation(bool)
int __fastcall CConversations::DoneSettingUpConversation(CConversations *this, bool a2)
{
  int v2; // r10
  int v3; // r2
  const char *v4; // r4
  char *v5; // r11
  int v6; // r8
  char *v7; // r11
  bool v8; // zf
  const char *v9; // r1
  char *v10; // r0
  int v11; // r0
  int i; // r0
  _BYTE *v13; // r4
  int v14; // r5
  char *v16; // r2
  int v17; // r6
  int *v18; // r5
  int v19; // r0
  int v20; // r1
  _BYTE *v21; // r0
  int v22; // r2
  int v23; // r1
  int v24; // r2
  CEntity *v25; // r0
  int result; // r0
  char v27; // [sp+0h] [bp-28h]
  char *v28; // [sp+4h] [bp-24h]
  int v29; // [sp+8h] [bp-20h]

  v27 = (char)this;
  v2 = CConversations::m_SettingUpConversationNumNodes;
  if ( CConversations::m_SettingUpConversationNumNodes >= 1 )
  {
    v3 = 0;
    do
    {
      v4 = (const char *)&CConversations::m_aTempNodes;
      v5 = (char *)&CConversations::m_aTempNodes + 44 * v3;
      v6 = 0;
      v29 = v3;
      *((_WORD *)v5 + 15) = -1;
      v7 = v5 + 30;
      *((_WORD *)v7 - 1) = -1;
      do
      {
        v8 = strcmp(v7 - 22, v4) == 0;
        v9 = v4;
        if ( v8 )
          *((_WORD *)v7 - 1) = v6;
        v4 += 44;
        if ( !strcmp(v7 - 14, v9) )
          *(_WORD *)v7 = v6;
        ++v6;
      }
      while ( v6 < v2 );
      v3 = v29 + 1;
    }
    while ( v29 + 1 < v2 );
  }
  if ( dword_7A0F88 )
  {
    if ( dword_7A0FA4 )
    {
      if ( dword_7A0FC0 )
      {
        if ( dword_7A0FDC )
        {
          if ( dword_7A0FF8 )
          {
            if ( dword_7A1014 )
            {
              if ( dword_7A1030 )
              {
                if ( dword_7A104C )
                {
                  if ( dword_7A1068 )
                  {
                    if ( dword_7A1084 )
                    {
                      if ( dword_7A10A0 )
                      {
                        if ( dword_7A10BC )
                        {
                          if ( dword_7A10D8 )
                          {
                            if ( dword_7A10F4 )
                            {
                              v10 = 0;
                              goto LABEL_40;
                            }
                            v11 = 13;
                          }
                          else
                          {
                            v11 = 12;
                          }
                        }
                        else
                        {
                          v11 = 11;
                        }
                      }
                      else
                      {
                        v11 = 10;
                      }
                    }
                    else
                    {
                      v11 = 9;
                    }
                  }
                  else
                  {
                    v11 = 8;
                  }
                }
                else
                {
                  v11 = 7;
                }
              }
              else
              {
                v11 = 6;
              }
            }
            else
            {
              v11 = 5;
            }
          }
          else
          {
            v11 = 4;
          }
        }
        else
        {
          v11 = 3;
        }
      }
      else
      {
        v11 = 2;
      }
    }
    else
    {
      v11 = 1;
    }
  }
  else
  {
    v11 = 0;
  }
  v10 = (char *)&CConversations::m_aConversations + 28 * v11;
LABEL_40:
  v28 = v10;
  if ( v2 >= 1 )
  {
    for ( i = 0; i < v2; ++i )
    {
      v13 = &CConversations::m_aNodes[1];
      v14 = 0;
      while ( *(v13 - 1) )
      {
        v13 += 24;
        if ( v14++ >= 49 )
        {
          v14 = 0;
          goto LABEL_47;
        }
      }
      *(_WORD *)(v13 - 1) = 88;
LABEL_47:
      v16 = (char *)&CConversations::m_aTempNodes + 44 * i;
      *((_DWORD *)v16 + 6) = v14;
    }
    v17 = 0;
    v18 = &dword_7A0D88;
    do
    {
      strcpy(&CConversations::m_aNodes[24 * *v18], (const char *)v18 - 24);
      v19 = *((__int16 *)v18 + 2);
      LOWORD(v20) = -1;
      ++v17;
      if ( v19 > -1 )
        v20 = *((_DWORD *)&CConversations::m_aTempNodes + 11 * (__int16)v19 + 6);
      v21 = &CConversations::m_aNodes[24 * *v18];
      *((_WORD *)v21 + 4) = v20;
      LOWORD(v20) = -1;
      v22 = *((__int16 *)v18 + 3);
      if ( v22 > -1 )
        v20 = *((_DWORD *)&CConversations::m_aTempNodes + 11 * (__int16)v22 + 6);
      *((_WORD *)v21 + 5) = v20;
      *((_DWORD *)v21 + 3) = v18[2];
      *((_DWORD *)v21 + 4) = v18[3];
      v23 = v18[4];
      v18 += 11;
      *((_DWORD *)v21 + 5) = v23;
    }
    while ( v17 < CConversations::m_SettingUpConversationNumNodes );
  }
  v24 = dword_7A0D88;
  v25 = (CEntity *)CConversations::m_pSettingUpConversationPed;
  *(_DWORD *)v28 = dword_7A0D88;
  *((_DWORD *)v28 + 1) = v24;
  *((_DWORD *)v28 + 2) = v25;
  CEntity::RegisterReference(v25, (CEntity **)v28 + 2);
  result = CTimer::m_snTimeInMilliseconds;
  v28[24] = 1;
  v28[25] = v27;
  *((_DWORD *)v28 + 3) = result;
  *((_DWORD *)v28 + 4) = 0;
  *((_DWORD *)v28 + 5) = 0;
  LOBYTE(CConversations::m_bSettingUpConversation) = 0;
  CConversations::m_SettingUpConversationNumNodes = 0;
  return result;
}


// ============================================================

// Address: 0x301140
// Original: _ZN14CConversations24FindFreeConversationSlotEv
// Demangled: CConversations::FindFreeConversationSlot(void)
char *__fastcall CConversations::FindFreeConversationSlot(CConversations *this)
{
  int v2; // r0

  if ( dword_7A0F88 )
  {
    if ( dword_7A0FA4 )
    {
      if ( dword_7A0FC0 )
      {
        if ( dword_7A0FDC )
        {
          if ( dword_7A0FF8 )
          {
            if ( dword_7A1014 )
            {
              if ( dword_7A1030 )
              {
                if ( dword_7A104C )
                {
                  if ( dword_7A1068 )
                  {
                    if ( dword_7A1084 )
                    {
                      if ( dword_7A10A0 )
                      {
                        if ( dword_7A10BC )
                        {
                          if ( dword_7A10D8 )
                          {
                            if ( dword_7A10F4 )
                              return 0;
                            v2 = 13;
                          }
                          else
                          {
                            v2 = 12;
                          }
                        }
                        else
                        {
                          v2 = 11;
                        }
                      }
                      else
                      {
                        v2 = 10;
                      }
                    }
                    else
                    {
                      v2 = 9;
                    }
                  }
                  else
                  {
                    v2 = 8;
                  }
                }
                else
                {
                  v2 = 7;
                }
              }
              else
              {
                v2 = 6;
              }
            }
            else
            {
              v2 = 5;
            }
          }
          else
          {
            v2 = 4;
          }
        }
        else
        {
          v2 = 3;
        }
      }
      else
      {
        v2 = 2;
      }
    }
    else
    {
      v2 = 1;
    }
  }
  else
  {
    v2 = 0;
  }
  return (char *)&CConversations::m_aConversations + 28 * v2;
}


// ============================================================

// Address: 0x301270
// Original: _ZN14CConversations16FindFreeNodeSlotEv
// Demangled: CConversations::FindFreeNodeSlot(void)
int __fastcall CConversations::FindFreeNodeSlot(CConversations *this)
{
  _BYTE *v1; // r1
  int result; // r0
  bool v3; // cc

  v1 = &CConversations::m_aNodes[1];
  result = 0;
  while ( *(v1 - 1) )
  {
    v3 = result < 49;
    v1 += 24;
    ++result;
    if ( !v3 )
      return 0;
  }
  *(_WORD *)(v1 - 1) = 88;
  return result;
}


// ============================================================

// Address: 0x3012a0
// Original: _ZN14CConversations21SetUpConversationNodeEPcS0_S0_iii
// Demangled: CConversations::SetUpConversationNode(char *,char *,char *,int,int,int)
int *__fastcall CConversations::SetUpConversationNode(
        CConversations *this,
        char *a2,
        char *a3,
        char *a4,
        __int64 a5,
        int a6)
{
  char *v9; // r0
  char *v10; // r0
  int v11; // r1
  char *v12; // r0
  int *result; // r0

  strncpy(
    (char *)&CConversations::m_aTempNodes + 44 * CConversations::m_SettingUpConversationNumNodes,
    (const char *)this,
    6u);
  MakeUpperCase((char *)&CConversations::m_aTempNodes + 44 * CConversations::m_SettingUpConversationNumNodes);
  v9 = (char *)&CConversations::m_aTempNodes + 44 * CConversations::m_SettingUpConversationNumNodes;
  *((_DWORD *)v9 + 8) = a4;
  *(_QWORD *)(v9 + 36) = a5;
  v10 = v9 + 8;
  if ( a2 )
  {
    strncpy(v10, a2, 6u);
  }
  else
  {
    *v10 = 0;
    MakeUpperCase(v10);
  }
  v11 = CConversations::m_SettingUpConversationNumNodes;
  v12 = (char *)&CConversations::m_aTempNodes + 44 * CConversations::m_SettingUpConversationNumNodes + 16;
  if ( a3 )
  {
    strncpy(v12, a3, 6u);
    MakeUpperCase((char *)&CConversations::m_aTempNodes + 44 * CConversations::m_SettingUpConversationNumNodes + 16);
    v11 = CConversations::m_SettingUpConversationNumNodes;
  }
  else
  {
    *v12 = 0;
  }
  result = &CConversations::m_SettingUpConversationNumNodes;
  CConversations::m_SettingUpConversationNumNodes = v11 + 1;
  return result;
}


// ============================================================

// Address: 0x301374
// Original: _ZN14CConversations20IsConversationAtNodeEPcP4CPed
// Demangled: CConversations::IsConversationAtNode(char *,CPed *)
bool __fastcall CConversations::IsConversationAtNode(CConversations *this, char *a2, CPed *a3)
{
  int *v4; // r6
  int v5; // r0
  int v6; // r5

  if ( (char *)dword_7A0F88 == a2 )
  {
    v5 = 0;
  }
  else if ( (char *)dword_7A0FA4 == a2 )
  {
    v5 = 1;
  }
  else if ( (char *)dword_7A0FC0 == a2 )
  {
    v5 = 2;
  }
  else if ( (char *)dword_7A0FDC == a2 )
  {
    v5 = 3;
  }
  else if ( (char *)dword_7A0FF8 == a2 )
  {
    v5 = 4;
  }
  else if ( (char *)dword_7A1014 == a2 )
  {
    v5 = 5;
  }
  else if ( (char *)dword_7A1030 == a2 )
  {
    v5 = 6;
  }
  else if ( (char *)dword_7A104C == a2 )
  {
    v5 = 7;
  }
  else if ( (char *)dword_7A1068 == a2 )
  {
    v5 = 8;
  }
  else if ( (char *)dword_7A1084 == a2 )
  {
    v5 = 9;
  }
  else if ( (char *)dword_7A10A0 == a2 )
  {
    v5 = 10;
  }
  else if ( (char *)dword_7A10BC == a2 )
  {
    v5 = 11;
  }
  else if ( (char *)dword_7A10D8 == a2 )
  {
    v5 = 12;
  }
  else
  {
    if ( (char *)dword_7A10F4 != a2 )
    {
      v4 = 0;
      goto LABEL_31;
    }
    v5 = 13;
  }
  v4 = (int *)((char *)&CConversations::m_aConversations + 28 * v5);
LABEL_31:
  if ( v4[1] < 0 )
    return 0;
  v6 = 0;
  if ( v4[5] != 1 )
  {
    MakeUpperCase((char *)this);
    return strcmp((const char *)this, &CConversations::m_aNodes[24 * v4[1]]) == 0;
  }
  return v6;
}


// ============================================================

// Address: 0x3014fc
// Original: _ZN14CConversations22FindConversationForPedEP4CPed
// Demangled: CConversations::FindConversationForPed(CPed *)
char *__fastcall CConversations::FindConversationForPed(CConversations *this, CPed *a2)
{
  int v3; // r0

  if ( (CConversations *)dword_7A0F88 == this )
  {
    v3 = 0;
  }
  else if ( (CConversations *)dword_7A0FA4 == this )
  {
    v3 = 1;
  }
  else if ( (CConversations *)dword_7A0FC0 == this )
  {
    v3 = 2;
  }
  else if ( (CConversations *)dword_7A0FDC == this )
  {
    v3 = 3;
  }
  else if ( (CConversations *)dword_7A0FF8 == this )
  {
    v3 = 4;
  }
  else if ( (CConversations *)dword_7A1014 == this )
  {
    v3 = 5;
  }
  else if ( (CConversations *)dword_7A1030 == this )
  {
    v3 = 6;
  }
  else if ( (CConversations *)dword_7A104C == this )
  {
    v3 = 7;
  }
  else if ( (CConversations *)dword_7A1068 == this )
  {
    v3 = 8;
  }
  else if ( (CConversations *)dword_7A1084 == this )
  {
    v3 = 9;
  }
  else if ( (CConversations *)dword_7A10A0 == this )
  {
    v3 = 10;
  }
  else if ( (CConversations *)dword_7A10BC == this )
  {
    v3 = 11;
  }
  else if ( (CConversations *)dword_7A10D8 == this )
  {
    v3 = 12;
  }
  else
  {
    if ( (CConversations *)dword_7A10F4 != this )
      return 0;
    v3 = 13;
  }
  return (char *)&CConversations::m_aConversations + 28 * v3;
}


// ============================================================

// Address: 0x30163c
// Original: _ZN14CConversations24RemoveConversationForPedEP4CPed
// Demangled: CConversations::RemoveConversationForPed(CPed *)
CConversations *__fastcall CConversations::RemoveConversationForPed(CConversations *this, CPed *a2)
{
  int i; // r4
  CConversations *result; // r0

  for ( i = 0; i != 392; i += 28 )
  {
    result = *(CConversations **)((char *)&CConversations::m_aConversations + i + 8);
    if ( result == this )
    {
      CConversationNode::ClearRecursively((CConversationNode *)&CConversations::m_aNodes[24
                                                                                       * *(_DWORD *)((char *)&CConversations::m_aConversations + i)]);
      result = (CConversations *)((char *)&CConversations::m_aConversations + i);
      *(_DWORD *)((char *)&CConversations::m_aConversations + i) = -1;
      *((_DWORD *)result + 1) = -1;
      *(_DWORD *)((char *)&CConversations::m_aConversations + i + 8) = 0;
      *((_DWORD *)result + 3) = 0;
      *((_DWORD *)result + 4) = 0;
    }
  }
  return result;
}


// ============================================================

// Address: 0x3016ac
// Original: _ZN14CConversations33IsPlayerInPositionForConversationEP4CPedb
// Demangled: CConversations::IsPlayerInPositionForConversation(CPed *,bool)
int __fastcall CConversations::IsPlayerInPositionForConversation(CConversations *this, CPed *a2, bool a3)
{
  CConversationForPed *v3; // r0
  int v4; // r0

  if ( (CConversations *)dword_7A0F88 == this )
  {
    v4 = 0;
    goto LABEL_31;
  }
  if ( (CConversations *)dword_7A0FA4 == this )
  {
    v4 = 1;
    goto LABEL_31;
  }
  if ( (CConversations *)dword_7A0FC0 == this )
  {
    v4 = 2;
    goto LABEL_31;
  }
  if ( (CConversations *)dword_7A0FDC == this )
  {
    v4 = 3;
    goto LABEL_31;
  }
  if ( (CConversations *)dword_7A0FF8 == this )
  {
    v4 = 4;
    goto LABEL_31;
  }
  if ( (CConversations *)dword_7A1014 == this )
  {
    v4 = 5;
    goto LABEL_31;
  }
  if ( (CConversations *)dword_7A1030 == this )
  {
    v4 = 6;
    goto LABEL_31;
  }
  if ( (CConversations *)dword_7A104C == this )
  {
    v4 = 7;
    goto LABEL_31;
  }
  if ( (CConversations *)dword_7A1068 == this )
  {
    v4 = 8;
    goto LABEL_31;
  }
  if ( (CConversations *)dword_7A1084 == this )
  {
    v4 = 9;
    goto LABEL_31;
  }
  if ( (CConversations *)dword_7A10A0 == this )
  {
    v4 = 10;
    goto LABEL_31;
  }
  if ( (CConversations *)dword_7A10BC == this )
  {
    v4 = 11;
    goto LABEL_31;
  }
  if ( (CConversations *)dword_7A10D8 == this )
  {
    v4 = 12;
    goto LABEL_31;
  }
  if ( (CConversations *)dword_7A10F4 == this )
  {
    v4 = 13;
LABEL_31:
    v3 = (CConversationForPed *)((char *)&CConversations::m_aConversations + 28 * v4);
    return CConversationForPed::IsPlayerInPositionForConversation(v3, (_BOOL4)a2);
  }
  v3 = 0;
  return CConversationForPed::IsPlayerInPositionForConversation(v3, (_BOOL4)a2);
}


// ============================================================

// Address: 0x3017f0
// Original: _ZN14CConversations18EnableConversationEP4CPedb
// Demangled: CConversations::EnableConversation(CPed *,bool)
char *__fastcall CConversations::EnableConversation(CConversations *this, CPed *a2, bool a3)
{
  int v3; // r2
  char *result; // r0

  if ( (CConversations *)dword_7A0F88 == this )
  {
    v3 = 0;
  }
  else if ( (CConversations *)dword_7A0FA4 == this )
  {
    v3 = 1;
  }
  else if ( (CConversations *)dword_7A0FC0 == this )
  {
    v3 = 2;
  }
  else if ( (CConversations *)dword_7A0FDC == this )
  {
    v3 = 3;
  }
  else if ( (CConversations *)dword_7A0FF8 == this )
  {
    v3 = 4;
  }
  else if ( (CConversations *)dword_7A1014 == this )
  {
    v3 = 5;
  }
  else if ( (CConversations *)dword_7A1030 == this )
  {
    v3 = 6;
  }
  else if ( (CConversations *)dword_7A104C == this )
  {
    v3 = 7;
  }
  else if ( (CConversations *)dword_7A1068 == this )
  {
    v3 = 8;
  }
  else if ( (CConversations *)dword_7A1084 == this )
  {
    v3 = 9;
  }
  else if ( (CConversations *)dword_7A10A0 == this )
  {
    v3 = 10;
  }
  else if ( (CConversations *)dword_7A10BC == this )
  {
    v3 = 11;
  }
  else
  {
    v3 = 13;
    if ( (CConversations *)dword_7A10D8 == this )
      v3 = 12;
  }
  result = (char *)&CConversations::m_aConversations + 28 * v3;
  result[24] = (char)a2;
  return result;
}


// ============================================================

// Address: 0x30191c
// Original: _ZN14CConversations21GetConversationStatusEP4CPed
// Demangled: CConversations::GetConversationStatus(CPed *)
int __fastcall CConversations::GetConversationStatus(CConversations *this, CPed *a2)
{
  int v2; // r1

  if ( (CConversations *)dword_7A0F88 == this )
  {
    v2 = 0;
  }
  else if ( (CConversations *)dword_7A0FA4 == this )
  {
    v2 = 1;
  }
  else if ( (CConversations *)dword_7A0FC0 == this )
  {
    v2 = 2;
  }
  else if ( (CConversations *)dword_7A0FDC == this )
  {
    v2 = 3;
  }
  else if ( (CConversations *)dword_7A0FF8 == this )
  {
    v2 = 4;
  }
  else if ( (CConversations *)dword_7A1014 == this )
  {
    v2 = 5;
  }
  else if ( (CConversations *)dword_7A1030 == this )
  {
    v2 = 6;
  }
  else if ( (CConversations *)dword_7A104C == this )
  {
    v2 = 7;
  }
  else if ( (CConversations *)dword_7A1068 == this )
  {
    v2 = 8;
  }
  else if ( (CConversations *)dword_7A1084 == this )
  {
    v2 = 9;
  }
  else if ( (CConversations *)dword_7A10A0 == this )
  {
    v2 = 10;
  }
  else if ( (CConversations *)dword_7A10BC == this )
  {
    v2 = 11;
  }
  else
  {
    v2 = 13;
    if ( (CConversations *)dword_7A10D8 == this )
      v2 = 12;
  }
  return *((_DWORD *)&CConversations::m_aConversations + 7 * v2 + 5);
}


// ============================================================

// Address: 0x301a48
// Original: _ZN14CConversations21IsConversationGoingOnEv
// Demangled: CConversations::IsConversationGoingOn(void)
bool __fastcall CConversations::IsConversationGoingOn(CConversations *this)
{
  return (dword_7A1058 | dword_7A0F94 | dword_7A0FB0 | dword_7A0FCC | dword_7A0FE8 | dword_7A1004 | dword_7A1020 | dword_7A103C | dword_7A1074 | dword_7A1090 | dword_7A10AC | dword_7A10C8 | dword_7A10E4 | dword_7A1100) != 0;
}


// ============================================================
