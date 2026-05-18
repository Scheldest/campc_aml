
// Address: 0x1900e4
// Original: j__ZN17BoneNodeManager_c4InitEv
// Demangled: BoneNodeManager_c::Init(void)
// attributes: thunk
int __fastcall BoneNodeManager_c::Init(BoneNodeManager_c *this)
{
  return _ZN17BoneNodeManager_c4InitEv(this);
}


// ============================================================

// Address: 0x19026c
// Original: j__ZN17BoneNodeManager_c4ExitEv
// Demangled: BoneNodeManager_c::Exit(void)
// attributes: thunk
int __fastcall BoneNodeManager_c::Exit(BoneNodeManager_c *this)
{
  return _ZN17BoneNodeManager_c4ExitEv(this);
}


// ============================================================

// Address: 0x192318
// Original: j__ZN17BoneNodeManager_c11GetBoneNodeEv
// Demangled: BoneNodeManager_c::GetBoneNode(void)
// attributes: thunk
int __fastcall BoneNodeManager_c::GetBoneNode(BoneNodeManager_c *this)
{
  return _ZN17BoneNodeManager_c11GetBoneNodeEv(this);
}


// ============================================================

// Address: 0x19ce30
// Original: j__ZN17BoneNodeManager_c5ResetEv
// Demangled: BoneNodeManager_c::Reset(void)
// attributes: thunk
int __fastcall BoneNodeManager_c::Reset(BoneNodeManager_c *this)
{
  return _ZN17BoneNodeManager_c5ResetEv(this);
}


// ============================================================

// Address: 0x19f484
// Original: j__ZN17BoneNodeManager_c14ReturnBoneNodeEP10BoneNode_c
// Demangled: BoneNodeManager_c::ReturnBoneNode(BoneNode_c *)
// attributes: thunk
int __fastcall BoneNodeManager_c::ReturnBoneNode(BoneNodeManager_c *this, BoneNode_c *a2)
{
  return _ZN17BoneNodeManager_c14ReturnBoneNodeEP10BoneNode_c(this, a2);
}


// ============================================================

// Address: 0x4d25d8
// Original: _ZN17BoneNodeManager_cC2Ev
// Demangled: BoneNodeManager_c::BoneNodeManager_c(void)
void __fastcall BoneNodeManager_c::BoneNodeManager_c(BoneNodeManager_c *this)
{
  int i; // r5
  int v3; // r0

  for ( i = 0; i != 19456; i += 152 )
  {
    ListItem_c::ListItem_c((BoneNodeManager_c *)((char *)this + i));
    List_c::List_c((List_c *)(v3 + 48));
  }
  List_c::List_c((BoneNodeManager_c *)((char *)this + 19456));
}


// ============================================================

// Address: 0x4d2600
// Original: _ZN17BoneNodeManager_cD2Ev
// Demangled: BoneNodeManager_c::~BoneNodeManager_c()
void __fastcall BoneNodeManager_c::~BoneNodeManager_c(BoneNodeManager_c *this)
{
  int v2; // r5

  List_c::~List_c((BoneNodeManager_c *)((char *)this + 19456));
  v2 = 19456;
  do
  {
    List_c::~List_c((BoneNodeManager_c *)((char *)this + v2 - 104));
    ListItem_c::~ListItem_c((BoneNodeManager_c *)((char *)this + v2 - 152));
    v2 -= 152;
  }
  while ( v2 );
}


// ============================================================

// Address: 0x4d2634
// Original: _ZN17BoneNodeManager_c4InitEv
// Demangled: BoneNodeManager_c::Init(void)
int __fastcall BoneNodeManager_c::Init(BoneNodeManager_c *this)
{
  List_c *v2; // r5
  int i; // r6

  v2 = (BoneNodeManager_c *)((char *)this + 19456);
  for ( i = 0; i != 19456; i += 152 )
    List_c::AddItem(v2, (BoneNodeManager_c *)((char *)this + i));
  return 1;
}


// ============================================================

// Address: 0x4d265c
// Original: _ZN17BoneNodeManager_c4ExitEv
// Demangled: BoneNodeManager_c::Exit(void)
int __fastcall BoneNodeManager_c::Exit(BoneNodeManager_c *this)
{
  return sub_19CBF8((BoneNodeManager_c *)((char *)this + 19456));
}


// ============================================================

// Address: 0x4d2664
// Original: _ZN17BoneNodeManager_c5ResetEv
// Demangled: BoneNodeManager_c::Reset(void)
int __fastcall BoneNodeManager_c::Reset(BoneNodeManager_c *this)
{
  List_c *v2; // r5
  int i; // r6
  int result; // r0

  v2 = (BoneNodeManager_c *)((char *)this + 19456);
  List_c::RemoveAll((BoneNodeManager_c *)((char *)this + 19456));
  for ( i = 0; i != 19456; i += 152 )
    result = List_c::AddItem(v2, (BoneNodeManager_c *)((char *)this + i));
  return result;
}


// ============================================================

// Address: 0x4d2690
// Original: _ZN17BoneNodeManager_c11GetBoneNodeEv
// Demangled: BoneNodeManager_c::GetBoneNode(void)
int __fastcall BoneNodeManager_c::GetBoneNode(BoneNodeManager_c *this)
{
  return j_List_c::RemoveHead((BoneNodeManager_c *)((char *)this + 19456));
}


// ============================================================

// Address: 0x4d2698
// Original: _ZN17BoneNodeManager_c14ReturnBoneNodeEP10BoneNode_c
// Demangled: BoneNodeManager_c::ReturnBoneNode(BoneNode_c *)
int __fastcall BoneNodeManager_c::ReturnBoneNode(BoneNodeManager_c *this, BoneNode_c *a2)
{
  return j_List_c::AddItem((BoneNodeManager_c *)((char *)this + 19456), a2);
}


// ============================================================

// Address: 0x4d26a0
// Original: _ZN17BoneNodeManager_c19GetNumBoneNodesLeftEv
// Demangled: BoneNodeManager_c::GetNumBoneNodesLeft(void)
int __fastcall BoneNodeManager_c::GetNumBoneNodesLeft(BoneNodeManager_c *this)
{
  return sub_18A6C0((BoneNodeManager_c *)((char *)this + 19456));
}


// ============================================================
