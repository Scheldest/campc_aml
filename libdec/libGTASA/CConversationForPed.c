
// Address: 0x1957dc
// Original: j__ZN19CConversationForPed33IsPlayerInPositionForConversationEb
// Demangled: CConversationForPed::IsPlayerInPositionForConversation(bool)
// attributes: thunk
int __fastcall CConversationForPed::IsPlayerInPositionForConversation(CConversationForPed *this, bool a2)
{
  return _ZN19CConversationForPed33IsPlayerInPositionForConversationEb(this, a2);
}


// ============================================================

// Address: 0x19b368
// Original: j__ZN19CConversationForPed6UpdateEv
// Demangled: CConversationForPed::Update(void)
// attributes: thunk
int __fastcall CConversationForPed::Update(CConversationForPed *this)
{
  return _ZN19CConversationForPed6UpdateEv(this);
}


// ============================================================

// Address: 0x3005b0
// Original: _ZN19CConversationForPed5ClearEb
// Demangled: CConversationForPed::Clear(bool)
int __fastcall CConversationForPed::Clear(CConversationForPed *this, int a2)
{
  int result; // r0

  if ( !a2 )
    CConversationNode::ClearRecursively((CConversationNode *)&CConversations::m_aNodes[12 * *(_DWORD *)this]);
  result = -1;
  *(_DWORD *)this = -1;
  *((_DWORD *)this + 1) = -1;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  return result;
}


// ============================================================

// Address: 0x300740
// Original: _ZN19CConversationForPed6UpdateEv
// Demangled: CConversationForPed::Update(void)
unsigned int __fastcall CConversationForPed::Update(CConversationForPed *this)
{
  int v2; // r0
  bool v3; // zf
  unsigned int result; // r0
  unsigned int v5; // r0
  _DWORD *v6; // r6
  unsigned int v7; // r1
  CPad *v8; // r0
  int v9; // r1
  CPad *v10; // r0
  _DWORD *v11; // r6
  CKeyGen *v12; // r5
  const char *v13; // r0
  int v14; // r1
  CPed *v15; // r5
  int v16; // r0
  int v17; // r1
  CPad *Pad; // r0
  const char *v19; // r0
  int v20; // r0
  int v21; // r5
  CPed *PlayerPed; // r0
  CPed *v23; // r8
  int v24; // r1
  int v25; // r0
  CPad *v26; // r0
  const char *v27; // r0
  int v28; // r0
  int v29; // r5
  CPed *v30; // r0
  CPed *v31; // r8
  int v32; // r1
  CKeyGen *v33; // r5
  const char *v34; // r0
  int v35; // r1
  bool v36; // [sp+4h] [bp-1Ch]

  v2 = *((_DWORD *)this + 2);
  v3 = v2 == 0;
  if ( v2 )
    v3 = *((_BYTE *)this + 24) == 0;
  if ( v3 )
  {
    result = 0;
    *((_DWORD *)this + 5) = 0;
    return result;
  }
  result = CConversationForPed::IsPlayerInPositionForConversation(this, 0);
  if ( result != 1 )
  {
    *((_DWORD *)this + 5) = 0;
    return result;
  }
  v5 = CTimer::m_snTimeInMilliseconds;
  if ( CTimer::m_snTimeInMilliseconds > (unsigned int)(*((_DWORD *)this + 4) + 10000) )
    goto LABEL_10;
  v6 = (_DWORD *)((char *)this + 20);
  if ( *((_DWORD *)this + 5) != 1 )
  {
LABEL_24:
    if ( v5 > *((_DWORD *)this + 3) + 400 )
    {
      if ( *v6 > 3u || *v6 == 1 )
        goto LABEL_49;
      v16 = *((_DWORD *)this + 1);
      v17 = *(__int16 *)&CConversations::m_aNodes[24 * v16 + 10];
      if ( v17 >= 0 )
      {
        Pad = (CPad *)CPad::GetPad(0, v17);
        if ( CPad::ConversationNoJustDown(Pad) )
        {
          if ( !*((_BYTE *)this + 25) )
          {
            CMessages::ClearSmallMessagesOnly((CMessages *)*((unsigned __int8 *)this + 25));
            strcpy((char *)&gString, &CConversations::m_aNodes[24 * *((_DWORD *)this + 1)]);
            *(_WORD *)((char *)&gString + strlen((const char *)&gString)) = 78;
            v19 = (const char *)CText::Get((CText *)TheText, (CKeyGen *)&gString);
            CMessages::AddMessageJumpQ(
              (CMessages *)&gString,
              v19,
              (unsigned __int16 *)&elf_hash_bucket[937],
              3u,
              1u,
              v36);
          }
          v20 = *((_DWORD *)this + 1);
          v21 = *(_DWORD *)&CConversations::m_aNodes[24 * v20 + 20];
          if ( v21 >= 1 )
          {
            PlayerPed = (CPed *)FindPlayerPed(-1);
            CPed::Say(PlayerPed, *(_WORD *)&CConversations::m_aNodes[24 * *((_DWORD *)this + 1) + 20], 0, 1.0, 0, 0, 0);
            v20 = *((_DWORD *)this + 1);
            v21 = *(_DWORD *)&CConversations::m_aNodes[24 * v20 + 20];
          }
          if ( v21 <= -1 )
          {
            v23 = (CPed *)FindPlayerPed(-1);
            CAudioEngine::PreloadMissionAudio((CAudioEngine *)&AudioEngine, 0, -v21);
            CAudioEngine::AttachMissionAudioToPed((CAudioEngine *)&AudioEngine, 0, v23);
            CConversations::m_AwkwardSayStatus = 1;
            v20 = *((_DWORD *)this + 1);
          }
          v24 = *((unsigned __int8 *)this + 25);
          v25 = *(__int16 *)&CConversations::m_aNodes[24 * v20 + 10];
          *((_DWORD *)this + 1) = v25;
          *((_DWORD *)this + 3) = CTimer::m_snTimeInMilliseconds;
          if ( v24 )
            goto LABEL_48;
          goto LABEL_47;
        }
        v16 = *((_DWORD *)this + 1);
      }
      if ( *(__int16 *)&CConversations::m_aNodes[24 * v16 + 8] > -1 )
      {
        v26 = (CPad *)CPad::GetPad(0, -1);
        if ( CPad::ConversationYesJustDown(v26) == 1 )
        {
          if ( !*((_BYTE *)this + 25) )
          {
            CMessages::ClearSmallMessagesOnly((CMessages *)*((unsigned __int8 *)this + 25));
            strcpy((char *)&gString, &CConversations::m_aNodes[24 * *((_DWORD *)this + 1)]);
            *(_WORD *)((char *)&gString + strlen((const char *)&gString)) = 89;
            v27 = (const char *)CText::Get((CText *)TheText, (CKeyGen *)&gString);
            CMessages::AddMessageJumpQ(
              (CMessages *)&gString,
              v27,
              (unsigned __int16 *)&elf_hash_bucket[937],
              3u,
              1u,
              v36);
          }
          v28 = *((_DWORD *)this + 1);
          v29 = *(_DWORD *)&CConversations::m_aNodes[24 * v28 + 16];
          if ( v29 >= 1 )
          {
            v30 = (CPed *)FindPlayerPed(-1);
            CPed::Say(v30, *(_WORD *)&CConversations::m_aNodes[24 * *((_DWORD *)this + 1) + 16], 0, 1.0, 0, 0, 0);
            v28 = *((_DWORD *)this + 1);
            v29 = *(_DWORD *)&CConversations::m_aNodes[24 * v28 + 16];
          }
          if ( v29 <= -1 )
          {
            v31 = (CPed *)FindPlayerPed(-1);
            CAudioEngine::PreloadMissionAudio((CAudioEngine *)&AudioEngine, 0, -v29);
            CAudioEngine::AttachMissionAudioToPed((CAudioEngine *)&AudioEngine, 0, v31);
            CConversations::m_AwkwardSayStatus = 1;
            v28 = *((_DWORD *)this + 1);
          }
          v32 = *((unsigned __int8 *)this + 25);
          v25 = *(__int16 *)&CConversations::m_aNodes[24 * v28 + 8];
          *((_DWORD *)this + 1) = v25;
          *((_DWORD *)this + 3) = CTimer::m_snTimeInMilliseconds;
          if ( v32 )
            goto LABEL_48;
LABEL_47:
          v33 = (CKeyGen *)&CConversations::m_aNodes[24 * v25];
          v34 = (const char *)CText::Get((CText *)TheText, v33);
          CMessages::AddMessage(v33, v34, (unsigned __int16 *)&elf_hash_bucket[937], 1u, 1u, v36);
LABEL_48:
          *v6 = 1;
LABEL_49:
          result = CTimer::m_snTimeInMilliseconds;
          *((_DWORD *)this + 4) = CTimer::m_snTimeInMilliseconds;
          return result;
        }
      }
    }
    v35 = *((_DWORD *)this + 5);
    result = CTimer::m_snTimeInMilliseconds;
    *((_DWORD *)this + 4) = CTimer::m_snTimeInMilliseconds;
    if ( v35 != 2 )
      return result;
    goto LABEL_20;
  }
  v7 = *((_DWORD *)this + 3) + 4000;
  if ( CTimer::m_snTimeInMilliseconds <= v7 )
  {
    v8 = (CPad *)CPad::GetPad(0, v7);
    if ( !CPad::ConversationNoJustDown(v8) )
    {
      v10 = (CPad *)CPad::GetPad(0, v9);
      if ( !CPad::ConversationYesJustDown(v10) )
      {
        v5 = CTimer::m_snTimeInMilliseconds;
        goto LABEL_24;
      }
    }
  }
LABEL_10:
  if ( *((_BYTE *)this + 25) )
  {
    v11 = (_DWORD *)((char *)this + 4);
  }
  else
  {
    CMessages::ClearSmallMessagesOnly((CMessages *)*((unsigned __int8 *)this + 25));
    v11 = (_DWORD *)((char *)this + 4);
    v12 = (CKeyGen *)&CConversations::m_aNodes[24 * *((_DWORD *)this + 1)];
    v13 = (const char *)CText::Get((CText *)TheText, v12);
    CMessages::AddMessageJumpQ(v12, v13, (unsigned __int16 *)&elf_hash_bucket[937], 1u, 1u, v36);
  }
  v14 = *(_DWORD *)&CConversations::m_aNodes[24 * *v11 + 12];
  if ( v14 >= 1 )
  {
    CPed::Say(*((CPed **)this + 2), v14, 0, 1.0, 0, 0, 0);
    v14 = *(_DWORD *)&CConversations::m_aNodes[24 * *((_DWORD *)this + 1) + 12];
  }
  if ( v14 <= -1 )
  {
    v15 = (CPed *)*((_DWORD *)this + 2);
    CAudioEngine::PreloadMissionAudio((CAudioEngine *)&AudioEngine, 0, -v14);
    CAudioEngine::AttachMissionAudioToPed((CAudioEngine *)&AudioEngine, 0, v15);
    CConversations::m_AwkwardSayStatus = 1;
  }
  *((_DWORD *)this + 5) = 2;
  v6 = (_DWORD *)((char *)this + 20);
  result = CTimer::m_snTimeInMilliseconds;
  *((_DWORD *)this + 3) = CTimer::m_snTimeInMilliseconds;
  *((_DWORD *)this + 4) = result;
LABEL_20:
  if ( result > *((_DWORD *)this + 3) + 4000 )
  {
    result = 3;
    *v6 = 3;
  }
  return result;
}


// ============================================================

// Address: 0x300be0
// Original: _ZN19CConversationForPed33IsPlayerInPositionForConversationEb
// Demangled: CConversationForPed::IsPlayerInPositionForConversation(bool)
int __fastcall CConversationForPed::IsPlayerInPositionForConversation(CConversationForPed *this, _BOOL4 a2)
{
  int v4; // r0
  int v5; // r1
  int v6; // r2
  float32x2_t v7; // d16
  unsigned __int64 v8; // d1
  int PlayerPed; // r0
  int v10; // r0
  int v11; // r6
  int v12; // r0
  CPed *v13; // r0
  float v15; // [sp+4h] [bp-1Ch] BYREF
  float32x2_t v16; // [sp+8h] [bp-18h]

  FindPlayerCoors((int)&v15);
  v4 = *((_DWORD *)this + 2);
  v5 = *(_DWORD *)(v4 + 20);
  v6 = v5 + 48;
  if ( !v5 )
    v6 = v4 + 4;
  v7.n64_u64[0] = vsub_f32(v16, *(float32x2_t *)(v6 + 4)).n64_u64[0];
  v8 = vmul_f32(v7, v7).n64_u64[0];
  if ( sqrtf(
         (float)((float)((float)(v15 - *(float *)v6) * (float)(v15 - *(float *)v6)) + *(float *)&v8)
       + *((float *)&v8 + 1)) > 4.0 )
    return 0;
  PlayerPed = FindPlayerPed(-1);
  if ( (float)((float)((float)(*(float *)(*(_DWORD *)(PlayerPed + 20) + 16)
                             * *(float *)(*(_DWORD *)(*((_DWORD *)this + 2) + 20) + 16))
                     + (float)(*(float *)(*(_DWORD *)(PlayerPed + 20) + 20)
                             * *(float *)(*(_DWORD *)(*((_DWORD *)this + 2) + 20) + 20)))
             + (float)(*(float *)(*(_DWORD *)(PlayerPed + 20) + 24)
                     * *(float *)(*(_DWORD *)(*((_DWORD *)this + 2) + 20) + 24))) > 0.0 )
    return 0;
  v10 = FindPlayerPed(-1);
  if ( sqrtf((float)(*(float *)(v10 + 72) * *(float *)(v10 + 72)) + (float)(*(float *)(v10 + 76) * *(float *)(v10 + 76))) > 0.01 )
    return 0;
  v11 = *(_DWORD *)(*((_DWORD *)this + 2) + 1900);
  if ( v11 == FindPlayerPed(-1)
    && CTimer::m_snTimeInMilliseconds < (unsigned int)(*(_DWORD *)(*((_DWORD *)this + 2) + 1904) + 6000) )
  {
    return 0;
  }
  if ( a2 )
  {
    v12 = FindPlayerPed(-1);
    if ( CPedGroupMembership::CountMembersExcludingLeader((CPedGroupMembership *)&CPedGroups::ms_groups[181 * *(_DWORD *)(*(_DWORD *)(v12 + 1092) + 56) + 2]) > 0 )
      return 0;
  }
  v13 = (CPed *)FindPlayerPed(-1);
  if ( CPed::PedIsReadyForConversation(v13, a2) != 1 )
    return 0;
  else
    return CPed::PedIsReadyForConversation(*((CPed **)this + 2), a2);
}


// ============================================================
