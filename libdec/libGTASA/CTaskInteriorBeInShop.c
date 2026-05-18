
// Address: 0x1a14d0
// Original: j__ZN21CTaskInteriorBeInShopC2EP15InteriorGroup_c
// Demangled: CTaskInteriorBeInShop::CTaskInteriorBeInShop(InteriorGroup_c *)
// attributes: thunk
void __fastcall CTaskInteriorBeInShop::CTaskInteriorBeInShop(CTaskInteriorBeInShop *this, InteriorGroup_c *a2)
{
  _ZN21CTaskInteriorBeInShopC2EP15InteriorGroup_c(this, a2);
}


// ============================================================

// Address: 0x529088
// Original: _ZN21CTaskInteriorBeInShopC2EP15InteriorGroup_c
// Demangled: CTaskInteriorBeInShop::CTaskInteriorBeInShop(InteriorGroup_c *)
void __fastcall CTaskInteriorBeInShop::CTaskInteriorBeInShop(CTaskInteriorBeInShop *this, InteriorGroup_c *a2)
{
  int v4; // s0

  v4 = (unsigned __int16)rand();
  CTaskComplexWander::CTaskComplexWander(this, 4, (int)(float)((float)((float)v4 * 0.000015259) * 8.0), 1, 0.2);
  *(_DWORD *)this = &off_66C7F8;
  *((_DWORD *)this + 10) = a2;
  *((_DWORD *)this + 11) = 0;
  *((_BYTE *)this + 48) = 1;
}


// ============================================================

// Address: 0x5290fc
// Original: _ZN21CTaskInteriorBeInShopD2Ev
// Demangled: CTaskInteriorBeInShop::~CTaskInteriorBeInShop()
// attributes: thunk
void __fastcall CTaskInteriorBeInShop::~CTaskInteriorBeInShop(CTaskInteriorBeInShop *this)
{
  j_CTaskComplexWander::~CTaskComplexWander(this);
}


// ============================================================

// Address: 0x529100
// Original: _ZN21CTaskInteriorBeInShopD0Ev
// Demangled: CTaskInteriorBeInShop::~CTaskInteriorBeInShop()
void __fastcall CTaskInteriorBeInShop::~CTaskInteriorBeInShop(CTaskInteriorBeInShop *this)
{
  void *v1; // r0

  CTaskComplexWander::~CTaskComplexWander(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x529110
// Original: _ZNK21CTaskInteriorBeInShop5CloneEv
// Demangled: CTaskInteriorBeInShop::Clone(void)
int __fastcall CTaskInteriorBeInShop::Clone(CTaskInteriorBeInShop *this, unsigned int a2)
{
  int v3; // r4
  int v4; // r5
  int v5; // s0
  int result; // r0

  v3 = CTask::operator new((CTask *)&dword_34, a2);
  v4 = *((_DWORD *)this + 10);
  v5 = (unsigned __int16)rand();
  CTaskComplexWander::CTaskComplexWander(
    (CTaskComplexWander *)v3,
    4,
    (int)(float)((float)((float)v5 * 0.000015259) * 8.0),
    1,
    0.2);
  *(_DWORD *)v3 = &off_66C7F8;
  *(_DWORD *)(v3 + 40) = v4;
  *(_DWORD *)(v3 + 44) = 0;
  result = v3;
  *(_BYTE *)(v3 + 48) = 1;
  return result;
}


// ============================================================

// Address: 0x52918c
// Original: _ZN21CTaskInteriorBeInShop12ScanForStuffEP4CPed
// Demangled: CTaskInteriorBeInShop::ScanForStuff(CPed *)
int __fastcall CTaskInteriorBeInShop::ScanForStuff(CTaskInteriorBeInShop *this, CPed *a2)
{
  int result; // r0
  int v5; // r1
  int *v6; // r6
  bool v7; // zf
  int v8; // r0
  int v9; // r4
  int v10; // r5
  int v11; // r5
  int v12; // r6
  _DWORD v13[3]; // [sp+20h] [bp-40h] BYREF
  int v14; // [sp+2Ch] [bp-34h]
  int v15; // [sp+30h] [bp-30h]
  int v16; // [sp+34h] [bp-2Ch]
  char v17; // [sp+38h] [bp-28h]
  char v18[4]; // [sp+3Ch] [bp-24h] BYREF
  int v19; // [sp+40h] [bp-20h] BYREF
  int v20[7]; // [sp+44h] [bp-1Ch] BYREF

  v19 = 0;
  v20[0] = 0;
  result = *((unsigned __int8 *)this + 48);
  if ( result )
  {
    v5 = *((_DWORD *)a2 + 5);
    v6 = (int *)(v5 + 48);
    if ( !v5 )
      v6 = (int *)((char *)a2 + 4);
    result = InteriorGroup_c::FindClosestInteriorInfo(
               *((_DWORD *)this + 10),
               -1,
               *v6,
               v6[1],
               v6[2],
               2.0,
               (int)v20,
               (int)&v19,
               (int)v18);
    v7 = result == 0;
    if ( result )
    {
      result = v20[0];
      v7 = *((_DWORD *)this + 11) == v20[0];
    }
    if ( !v7 )
    {
      v8 = *(unsigned __int8 *)result;
      if ( v8 == 9 )
      {
        if ( (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0) >= 81 )
        {
          *((_BYTE *)this + 48) = 0;
          v11 = v19;
          v12 = v20[0];
          CEvent::CEvent((CEvent *)v13);
          v14 = v12;
          v13[0] = &off_666FDC;
          v15 = v11;
          v16 = 0;
          v17 = 0;
          CEventGroup::Add((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), (CEvent *)v13, 0);
LABEL_13:
          CEvent::~CEvent((CEvent *)v13);
        }
      }
      else if ( v8 == 8 )
      {
        if ( (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0) < 51 )
        {
          IKChainManager_c::LookAt(
            (int)&g_ikChainMan,
            (int)"TaskBeInShop",
            a2,
            0,
            3000,
            -1,
            v20[0] + 4,
            1,
            0.25,
            500,
            3,
            0);
          goto LABEL_15;
        }
        v9 = v19;
        v10 = v20[0];
        CEvent::CEvent((CEvent *)v13);
        v14 = v10;
        v15 = v9;
        v16 = 0;
        v17 = 0;
        v13[0] = &off_666FDC;
        CEventGroup::Add((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), (CEvent *)v13, 0);
        goto LABEL_13;
      }
LABEL_15:
      result = v20[0];
      *((_DWORD *)this + 11) = v20[0];
    }
  }
  return result;
}


// ============================================================

// Address: 0x52afb8
// Original: _ZNK21CTaskInteriorBeInShop11GetTaskTypeEv
// Demangled: CTaskInteriorBeInShop::GetTaskType(void)
int __fastcall CTaskInteriorBeInShop::GetTaskType(CTaskInteriorBeInShop *this)
{
  return 1404;
}


// ============================================================

// Address: 0x52afbe
// Original: _ZNK21CTaskInteriorBeInShop13GetWanderTypeEv
// Demangled: CTaskInteriorBeInShop::GetWanderType(void)
int __fastcall CTaskInteriorBeInShop::GetWanderType(CTaskInteriorBeInShop *this)
{
  return 5;
}


// ============================================================
