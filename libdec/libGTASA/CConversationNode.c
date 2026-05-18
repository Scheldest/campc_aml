
// Address: 0x1a13c8
// Original: j__ZN17CConversationNode16ClearRecursivelyEv
// Demangled: CConversationNode::ClearRecursively(void)
// attributes: thunk
int __fastcall CConversationNode::ClearRecursively(CConversationNode *this)
{
  return _ZN17CConversationNode16ClearRecursivelyEv(this);
}


// ============================================================

// Address: 0x300544
// Original: _ZN17CConversationNode5ClearEv
// Demangled: CConversationNode::Clear(void)
int __fastcall CConversationNode::Clear(int this)
{
  *(_BYTE *)this = 0;
  *(_DWORD *)(this + 8) = -1;
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 16) = 0;
  *(_DWORD *)(this + 20) = 0;
  return this;
}


// ============================================================

// Address: 0x300558
// Original: _ZN17CConversationNode16ClearRecursivelyEv
// Demangled: CConversationNode::ClearRecursively(void)
int __fastcall CConversationNode::ClearRecursively(CConversationNode *this)
{
  int v2; // r0
  int v3; // r0
  int result; // r0

  v2 = *((__int16 *)this + 4);
  if ( v2 >= 0 )
    CConversationNode::ClearRecursively((CConversationNode *)&CConversations::m_aNodes[12 * v2]);
  v3 = *((__int16 *)this + 5);
  if ( v3 > -1 )
    CConversationNode::ClearRecursively((CConversationNode *)&CConversations::m_aNodes[12 * v3]);
  result = 0;
  *((_WORD *)this + 5) = -1;
  *(_BYTE *)this = 0;
  *((_WORD *)this + 4) = -1;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  return result;
}


// ============================================================
