
// Address: 0x192324
// Original: j__ZN15CTaskCategories15IsFollowPedTaskEPK5CTaskRbS3_
// Demangled: CTaskCategories::IsFollowPedTask(CTask const*,bool &,bool &)
// attributes: thunk
int __fastcall CTaskCategories::IsFollowPedTask(CTaskCategories *this, const CTask *a2, bool *a3, bool *a4)
{
  return _ZN15CTaskCategories15IsFollowPedTaskEPK5CTaskRbS3_(this, a2, a3, a4);
}


// ============================================================

// Address: 0x1943a8
// Original: j__ZN15CTaskCategories13IsKillPedTaskEPK5CTaskRbS3_
// Demangled: CTaskCategories::IsKillPedTask(CTask const*,bool &,bool &)
// attributes: thunk
int __fastcall CTaskCategories::IsKillPedTask(CTaskCategories *this, const CTask *a2, bool *a3, bool *a4)
{
  return _ZN15CTaskCategories13IsKillPedTaskEPK5CTaskRbS3_(this, a2, a3, a4);
}


// ============================================================

// Address: 0x199ab8
// Original: j__ZN15CTaskCategories19ComputeTaskCategoryEPK5CTask
// Demangled: CTaskCategories::ComputeTaskCategory(CTask const*)
// attributes: thunk
int __fastcall CTaskCategories::ComputeTaskCategory(CTaskCategories *this, const CTask *a2)
{
  return _ZN15CTaskCategories19ComputeTaskCategoryEPK5CTask(this, a2);
}


// ============================================================

// Address: 0x5481d4
// Original: _ZN15CTaskCategories19ComputeTaskCategoryEPK5CTask
// Demangled: CTaskCategories::ComputeTaskCategory(CTask const*)
int __fastcall CTaskCategories::ComputeTaskCategory(CTaskCategories *this, const CTask *a2)
{
  int v3; // r5
  int v4; // r0
  unsigned int v5; // r2
  int v6; // r5

  v3 = (*(int (__fastcall **)(CTaskCategories *))(*(_DWORD *)this + 20))(this);
  v4 = (*(int (__fastcall **)(CTaskCategories *))(*(_DWORD *)this + 20))(this);
  v5 = v3 - 1019;
  v6 = 1;
  if ( v5 < 3 )
    v6 = 4;
  if ( (unsigned int)(v4 - 1019) < 3 )
    v6 = 2;
  if ( (unsigned int)((*(int (__fastcall **)(CTaskCategories *))(*(_DWORD *)this + 20))(this) - 1019) < 3 )
    return 4;
  return v6;
}


// ============================================================

// Address: 0x548218
// Original: _ZN15CTaskCategories13IsKillPedTaskEPK5CTaskRbS3_
// Demangled: CTaskCategories::IsKillPedTask(CTask const*,bool &,bool &)
unsigned int __fastcall CTaskCategories::IsKillPedTask(CTaskCategories *this, const CTask *a2, bool *a3, bool *a4)
{
  unsigned int result; // r0

  *(_BYTE *)a2 = 0;
  *a3 = 0;
  result = (*(int (__fastcall **)(CTaskCategories *))(*(_DWORD *)this + 20))(this) - 1019;
  if ( result <= 2 )
  {
    result = 1;
    *(_BYTE *)a2 = 1;
  }
  return result;
}


// ============================================================

// Address: 0x548238
// Original: _ZN15CTaskCategories15IsFollowPedTaskEPK5CTaskRbS3_
// Demangled: CTaskCategories::IsFollowPedTask(CTask const*,bool &,bool &)
int __fastcall CTaskCategories::IsFollowPedTask(CTaskCategories *this, const CTask *a2, bool *a3, bool *a4)
{
  int result; // r0

  result = 0;
  *(_BYTE *)a2 = 0;
  *a3 = 0;
  return result;
}


// ============================================================

// Address: 0x548240
// Original: _ZN15CTaskCategories13IsFleePedTaskEPK5CTaskRbS3_
// Demangled: CTaskCategories::IsFleePedTask(CTask const*,bool &,bool &)
CPed *__fastcall CTaskCategories::IsFleePedTask(CPed **this, const CTask *a2, bool *a3, bool *a4)
{
  CPed *result; // r0
  bool v8; // zf

  *(_BYTE *)a2 = 0;
  *a3 = 0;
  result = (CPed *)(*((int (__fastcall **)(CPed **))*this + 5))(this);
  v8 = result == (CPed *)((char *)&elf_hash_bucket[164] + 3);
  if ( result != (CPed *)((char *)&elf_hash_bucket[164] + 3) )
    v8 = result == (CPed *)((char *)&elf_hash_bucket[164] + 1);
  if ( v8 )
  {
    result = this[3];
    if ( result )
    {
      if ( (*((_BYTE *)result + 58) & 7) == 3 )
      {
        *(_BYTE *)a2 = 1;
        result = (CPed *)CPed::IsPlayer(result);
        if ( result == (CPed *)((char *)&stderr + 1) )
          *a3 = 1;
      }
    }
  }
  return result;
}


// ============================================================
