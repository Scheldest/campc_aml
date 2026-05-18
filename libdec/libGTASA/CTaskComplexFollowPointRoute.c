
// Address: 0x18f220
// Original: j__ZN28CTaskComplexFollowPointRouteC2EiRK11CPointRouteiffbbb
// Demangled: CTaskComplexFollowPointRoute::CTaskComplexFollowPointRoute(int,CPointRoute const&,int,float,float,bool,bool,bool)
// attributes: thunk
void __fastcall CTaskComplexFollowPointRoute::CTaskComplexFollowPointRoute(
        CTaskComplexFollowPointRoute *this,
        int a2,
        const CPointRoute *a3,
        int a4,
        float a5,
        float a6,
        bool a7,
        bool a8,
        bool a9)
{
  _ZN28CTaskComplexFollowPointRouteC2EiRK11CPointRouteiffbbb(this, a2, a3, a4, a5, a6, a7, a8, a9);
}


// ============================================================

// Address: 0x1940c0
// Original: j__ZN28CTaskComplexFollowPointRoute14CalcBlendRatioEP4CPedb
// Demangled: CTaskComplexFollowPointRoute::CalcBlendRatio(CPed *,bool)
// attributes: thunk
int __fastcall CTaskComplexFollowPointRoute::CalcBlendRatio(CTaskComplexFollowPointRoute *this, CPed *a2, bool a3)
{
  return _ZN28CTaskComplexFollowPointRoute14CalcBlendRatioEP4CPedb(this, a2, a3);
}


// ============================================================

// Address: 0x19810c
// Original: j__ZN28CTaskComplexFollowPointRoute10CreateTaskEv
// Demangled: CTaskComplexFollowPointRoute::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexFollowPointRoute::CreateTask(CTaskComplexFollowPointRoute *this)
{
  return _ZN28CTaskComplexFollowPointRoute10CreateTaskEv(this);
}


// ============================================================

// Address: 0x19cc48
// Original: j__ZN28CTaskComplexFollowPointRoute16CalcGoToTaskTypeEP4CPedi
// Demangled: CTaskComplexFollowPointRoute::CalcGoToTaskType(CPed *,int)
// attributes: thunk
int __fastcall CTaskComplexFollowPointRoute::CalcGoToTaskType(CTaskComplexFollowPointRoute *this, CPed *a2, int a3)
{
  return _ZN28CTaskComplexFollowPointRoute16CalcGoToTaskTypeEP4CPedi(this, a2, a3);
}


// ============================================================

// Address: 0x19d428
// Original: j__ZN28CTaskComplexFollowPointRoute14GetSubTaskTypeEv
// Demangled: CTaskComplexFollowPointRoute::GetSubTaskType(void)
// attributes: thunk
int __fastcall CTaskComplexFollowPointRoute::GetSubTaskType(CTaskComplexFollowPointRoute *this)
{
  return _ZN28CTaskComplexFollowPointRoute14GetSubTaskTypeEv(this);
}


// ============================================================

// Address: 0x19fec0
// Original: j__ZN28CTaskComplexFollowPointRoute13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexFollowPointRoute::CreateSubTask(int,CPed *)
// attributes: thunk
int __fastcall CTaskComplexFollowPointRoute::CreateSubTask(CTaskComplexFollowPointRoute *this, int a2, CPed *a3)
{
  return _ZN28CTaskComplexFollowPointRoute13CreateSubTaskEiP4CPed(this, a2, a3);
}


// ============================================================

// Address: 0x4947f4
// Original: _ZN28CTaskComplexFollowPointRoute10CreateTaskEv
// Demangled: CTaskComplexFollowPointRoute::CreateTask(void)
void __fastcall CTaskComplexFollowPointRoute::CreateTask(CTaskComplexFollowPointRoute *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  int v6; // r2
  char v7; // r5
  int v8; // r2
  char v9; // r4
  int v10; // r2
  char v11; // r4
  int v12; // r2
  char v13; // r4
  int v14; // r2
  char v15; // r4
  int v16; // r2
  char v17; // r4
  unsigned int v18; // r1
  CTaskComplexFollowPointRoute *v19; // r0
  bool v20; // [sp+16h] [bp-8Ah] BYREF
  bool v21; // [sp+17h] [bp-89h] BYREF
  float v22; // [sp+18h] [bp-88h] BYREF
  float v23; // [sp+1Ch] [bp-84h] BYREF
  int v24; // [sp+20h] [bp-80h] BYREF
  _DWORD v25[25]; // [sp+24h] [bp-7Ch] BYREF
  int v26; // [sp+88h] [bp-18h] BYREF
  bool v27[18]; // [sp+8Eh] [bp-12h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v25, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v26, byte_4, a3);
  v5 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v25, (char *)&stderr + 2, v4);
    UseDataFence = v5;
  }
  v25[0] = 0;
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v25, &dword_64, v4);
  v7 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v24, (char *)&stderr + 2, v6);
    UseDataFence = v7;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v24, byte_4, v6);
  v9 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v23, (char *)&stderr + 2, v8);
    UseDataFence = v9;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v23, byte_4, v8);
  v11 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v22, (char *)&stderr + 2, v10);
    UseDataFence = v11;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v22, byte_4, v10);
  v13 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v27, (char *)&stderr + 2, v12);
    UseDataFence = v13;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v21, (char *)&stderr + 1, v12);
  v15 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v27, (char *)&stderr + 2, v14);
    UseDataFence = v15;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v20, (char *)&stderr + 1, v14);
  v17 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v27, (char *)&stderr + 2, v16);
    UseDataFence = v17;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v27, (char *)&stderr + 1, v16);
  v19 = (CTaskComplexFollowPointRoute *)CTask::operator new((CTask *)&off_3C, v18);
  CTaskComplexFollowPointRoute::CTaskComplexFollowPointRoute(
    v19,
    v26,
    (const CPointRoute *)v25,
    v24,
    v23,
    v22,
    v21,
    v20,
    v27[0]);
}


// ============================================================

// Address: 0x51e2cc
// Original: _ZN28CTaskComplexFollowPointRouteC2EiRK11CPointRouteiffbbb
// Demangled: CTaskComplexFollowPointRoute::CTaskComplexFollowPointRoute(int,CPointRoute const&,int,float,float,bool,bool,bool)
void __fastcall CTaskComplexFollowPointRoute::CTaskComplexFollowPointRoute(
        CTaskComplexFollowPointRoute *this,
        int a2,
        const CPointRoute *a3,
        int a4,
        float a5,
        float a6,
        bool a7,
        unsigned int a8,
        bool a9)
{
  char v13; // r0
  _DWORD *v14; // r0
  int v15; // r2
  char *v16; // r2
  _DWORD *v17; // r3
  int v18; // r6
  __int64 v19; // d16
  int v20; // r5
  char v21; // r2

  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 3) = a4;
  *((_DWORD *)this + 5) = a2;
  v13 = *((_BYTE *)this + 40) & 0xF2 | a7 | (8 * a8) | (4 * a9);
  *((_BYTE *)this + 40) = v13;
  *(_DWORD *)this = &off_66C23C;
  if ( a8 )
  {
    *((_BYTE *)this + 40) = v13 & 0x9F;
    *(_QWORD *)((char *)this + 44) = 0LL;
    *(_QWORD *)((char *)this + 52) = 0LL;
  }
  v14 = (_DWORD *)CPointRoute::operator new((CPointRoute *)&dword_64, a8);
  *v14 = 0;
  *((_DWORD *)this + 8) = v14;
  v15 = *(_DWORD *)a3;
  *v14 = *(_DWORD *)a3;
  if ( v15 >= 1 )
  {
    v16 = (char *)a3 + 4;
    v17 = v14 + 1;
    v18 = 0;
    do
    {
      v19 = *(_QWORD *)v16;
      ++v18;
      v20 = *((_DWORD *)v16 + 2);
      v16 += 12;
      v17[2] = v20;
      *(_QWORD *)v17 = v19;
      v17 += 3;
    }
    while ( v18 < *v14 );
  }
  *((float *)this + 6) = a5;
  *((float *)this + 7) = a6;
  v21 = *((_BYTE *)this + 40);
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_BYTE *)this + 40) = v21 | 2;
  if ( (v21 & 8) != 0 )
  {
    *((_BYTE *)this + 40) = v21 & 0x9D | 0x42;
    *(_QWORD *)((char *)this + 44) = 0LL;
    *(_QWORD *)((char *)this + 52) = 0LL;
  }
}


// ============================================================

// Address: 0x51e3b0
// Original: _ZN28CTaskComplexFollowPointRoute8SetRouteERK11CPointRouteffb
// Demangled: CTaskComplexFollowPointRoute::SetRoute(CPointRoute const&,float,float,bool)
int __fastcall CTaskComplexFollowPointRoute::SetRoute(int this, const CPointRoute *a2, float a3, float a4, int a5)
{
  int *v6; // lr
  int v8; // r2
  int v9; // r12
  float *v10; // r2
  float *v11; // r3
  int v12; // r4
  char *v13; // r1
  _DWORD *v14; // r2
  int v15; // r3
  __int64 v16; // d16
  int v17; // r4
  char v18; // r2

  v6 = *(int **)(this + 32);
  if ( a5 == 1 )
  {
    v8 = *(_DWORD *)a2;
  }
  else
  {
    v8 = *(_DWORD *)a2;
    v9 = *v6;
    if ( *v6 == *(_DWORD *)a2 )
    {
      if ( v9 < 1 )
      {
LABEL_10:
        if ( *(float *)(this + 24) == a3 )
        {
          v8 = *v6;
          if ( *(float *)(this + 28) == a4 )
            return this;
          goto LABEL_12;
        }
      }
      else
      {
        v10 = (float *)(v6 + 2);
        v11 = (float *)((char *)a2 + 8);
        v12 = 0;
        while ( *(v10 - 1) == *(v11 - 1) && *v10 == *v11 && v10[1] == v11[1] )
        {
          ++v12;
          v10 += 3;
          v11 += 3;
          if ( v12 >= v9 )
            goto LABEL_10;
        }
      }
      v8 = *v6;
    }
  }
LABEL_12:
  *v6 = v8;
  if ( v8 >= 1 )
  {
    v13 = (char *)a2 + 4;
    v14 = v6 + 1;
    v15 = 0;
    do
    {
      v16 = *(_QWORD *)v13;
      ++v15;
      v17 = *((_DWORD *)v13 + 2);
      v13 += 12;
      v14[2] = v17;
      *(_QWORD *)v14 = v16;
      v14 += 3;
    }
    while ( v15 < *v6 );
  }
  *(float *)(this + 24) = a3;
  *(float *)(this + 28) = a4;
  v18 = *(_BYTE *)(this + 40);
  *(_DWORD *)(this + 36) = 0;
  *(_DWORD *)(this + 16) = 0;
  *(_BYTE *)(this + 40) = v18 | 2;
  if ( (v18 & 8) != 0 )
  {
    *(_BYTE *)(this + 40) = v18 & 0x9D | 0x42;
    this += 44;
    *(_QWORD *)this = 0LL;
    *(_QWORD *)(this + 8) = 0LL;
  }
  return this;
}


// ============================================================

// Address: 0x51e4ac
// Original: _ZN28CTaskComplexFollowPointRouteD2Ev
// Demangled: CTaskComplexFollowPointRoute::~CTaskComplexFollowPointRoute()
void __fastcall CTaskComplexFollowPointRoute::~CTaskComplexFollowPointRoute(CTaskComplexFollowPointRoute *this)
{
  void *v2; // r0

  v2 = (void *)*((_DWORD *)this + 8);
  *(_DWORD *)this = &off_66C23C;
  if ( v2 )
    CPointRoute::operator delete(v2);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x51e4d4
// Original: _ZN28CTaskComplexFollowPointRouteD0Ev
// Demangled: CTaskComplexFollowPointRoute::~CTaskComplexFollowPointRoute()
void __fastcall CTaskComplexFollowPointRoute::~CTaskComplexFollowPointRoute(CTaskComplexFollowPointRoute *this)
{
  void *v2; // r0
  void *v3; // r0

  v2 = (void *)*((_DWORD *)this + 8);
  *(_DWORD *)this = &off_66C23C;
  if ( v2 )
    CPointRoute::operator delete(v2);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v3);
}


// ============================================================

// Address: 0x51e500
// Original: _ZN28CTaskComplexFollowPointRoute13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexFollowPointRoute::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexFollowPointRoute::MakeAbortable(
        CTaskComplexFollowPointRoute *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  int v4; // r10
  int v9; // r0
  char *v10; // r0
  int v11; // r9
  int v12; // r0
  float v13; // r3
  bool v14; // zf
  bool v15; // zf
  int v16; // r0
  int v17; // r1
  float *v18; // r2
  float *v19; // r0

  if ( !a4 || *((_DWORD *)this + 9) + 1 >= **((_DWORD **)this + 8) )
    goto LABEL_23;
  v9 = (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4);
  if ( v9 == 1 )
  {
    v10 = (char *)a4 + 20;
  }
  else
  {
    if ( v9 != 56 )
    {
      v11 = 0;
      goto LABEL_9;
    }
    v10 = (char *)a4 + 16;
  }
  v11 = *(_DWORD *)v10;
LABEL_9:
  v12 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v14 = v12 == 926;
  if ( v12 != 926 )
    v14 = v12 == 900;
  if ( v14 )
  {
    v15 = v11 == 0;
    if ( v11 )
    {
      v4 = *((_DWORD *)this + 2);
      v15 = v4 == 0;
    }
    if ( !v15
      && (float)((float)((float)(*(float *)(v11 + 72) * *(float *)(v11 + 72))
                       + (float)(*(float *)(v11 + 76) * *(float *)(v11 + 76)))
               + (float)(*(float *)(v11 + 80) * *(float *)(v11 + 80))) < 0.015625
      && CPedGeometryAnalyser::IsEntityBlockingTarget(
           (CPedGeometryAnalyser *)v11,
           (CEntity *)(v4 + 12),
           *(const CVector **)(v4 + 24),
           v13) == 1 )
    {
      v16 = *(_DWORD *)(v11 + 20);
      v17 = *((_DWORD *)a2 + 5);
      v18 = (float *)(v16 + 48);
      if ( !v16 )
        v18 = (float *)(v11 + 4);
      v19 = (float *)(v17 + 48);
      if ( !v17 )
        v19 = (float *)((char *)a2 + 4);
      *(float *)(v4 + 24) = sqrtf(
                              (float)((float)(*v19 - *v18) * (float)(*v19 - *v18))
                            + (float)((float)(v19[1] - v18[1]) * (float)(v19[1] - v18[1])));
    }
  }
LABEL_23:
  if ( !a3 )
    **((_DWORD **)this + 8) = 0;
  return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
           *((_DWORD *)this + 2),
           a2,
           a3,
           a4);
}


// ============================================================

// Address: 0x51e61c
// Original: _ZN28CTaskComplexFollowPointRoute14GetSubTaskTypeEv
// Demangled: CTaskComplexFollowPointRoute::GetSubTaskType(void)
int *__fastcall CTaskComplexFollowPointRoute::GetSubTaskType(CTaskComplexFollowPointRoute *this)
{
  int *v1; // r12
  int v2; // r2
  int v3; // r3
  int *result; // r0
  bool v5; // nf
  __int64 v6; // kr00_8
  int v7; // r3
  int v8; // lr
  int v9; // r2
  _DWORD *v10; // r1
  int v11; // r12
  bool v12; // cc
  __int64 v13; // d16
  int v14; // r3
  int v15; // lr
  int v16; // r2
  _DWORD *v17; // r1
  int v18; // r12
  __int64 v19; // d16
  __int64 v20; // [sp+0h] [bp-18h]
  __int64 v21; // [sp+0h] [bp-18h]
  int v22; // [sp+8h] [bp-10h]
  int v23; // [sp+8h] [bp-10h]

  while ( 1 )
  {
    v1 = (int *)*((_DWORD *)this + 8);
    v2 = *v1;
    if ( !*v1 )
      return elf_hash_bucket + 1050;
    v3 = *((_DWORD *)this + 9);
    if ( v3 + 1 < v2 )
      return &elf_hash_bucket[162];
    if ( v3 + 1 == v2 )
      break;
    if ( v3 != v2 )
      return &dword_C8;
    v6 = *(_QWORD *)&byte_9[(_DWORD)this + 3];
    *(_DWORD *)((char *)&word_10 + (_DWORD)this) = HIDWORD(v6) + 1;
    switch ( (int)v6 )
    {
      case 0:
        if ( (*((_BYTE *)&word_28 + (_DWORD)this) & 8) != 0 )
          *((_BYTE *)&word_28 + (_DWORD)this) &= 0x8Fu;
        return elf_hash_bucket + 1050;
      case 1:
        if ( HIDWORD(v6) )
          return elf_hash_bucket + 1050;
        v14 = *v1;
        if ( *v1 >= 2 )
        {
          v15 = v14 - 1;
          v16 = (int)&v1[3 * v14 - 2];
          v17 = v1 + 1;
          v18 = 1;
          do
          {
            v12 = v18 < --v15;
            v23 = v17[2];
            v21 = *(_QWORD *)v17;
            v19 = *(_QWORD *)v16;
            v17[2] = *(_DWORD *)(v16 + 8);
            *(_QWORD *)v17 = v19;
            v17 += 3;
            *(_DWORD *)(v16 + 8) = v23;
            *(_QWORD *)v16 = v21;
            v16 -= 12;
            ++v18;
          }
          while ( v12 );
        }
        break;
      case 2:
        v7 = *v1;
        if ( *v1 >= 2 )
        {
          v8 = v7 - 1;
          v9 = (int)&v1[3 * v7 - 2];
          v10 = v1 + 1;
          v11 = 1;
          do
          {
            v12 = v11 < --v8;
            v22 = v10[2];
            v20 = *(_QWORD *)v10;
            v13 = *(_QWORD *)v9;
            v10[2] = *(_DWORD *)(v9 + 8);
            *(_QWORD *)v10 = v13;
            v10 += 3;
            *(_DWORD *)(v9 + 8) = v22;
            *(_QWORD *)v9 = v20;
            v9 -= 12;
            ++v11;
          }
          while ( v12 );
        }
        break;
      case 3:
        break;
      default:
        return &dword_C8;
    }
    *(int *)((char *)&dword_24 + (_DWORD)this) = 0;
  }
  v5 = (*((_BYTE *)&word_28 + (_DWORD)this) & 4) != 0;
  result = elf_hash_bucket + 651;
  if ( !v5 )
    return elf_hash_bucket + 648;
  return result;
}


// ============================================================

// Address: 0x51e750
// Original: _ZN28CTaskComplexFollowPointRoute13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexFollowPointRoute::CreateSubTask(int,CPed *)
int __fastcall CTaskComplexFollowPointRoute::CreateSubTask(CTaskComplexFollowPointRoute *this, int a2, CVehicle **a3)
{
  int v5; // r4
  int v6; // r0
  CTaskSimple *v7; // r0
  int v8; // r6
  __int64 v9; // r8
  char v10; // r5
  char v11; // r2
  char v12; // r3
  int v13; // r0
  __int64 v14; // d16
  int v15; // r0
  bool v16; // zf
  float v17; // s16
  int v18; // r0
  int v19; // r10
  CTaskComplex *v20; // r0
  __int64 v21; // kr00_8
  __int64 v22; // kr08_8
  char v23; // r1
  float v24; // s0
  char v25; // r0
  float *v26; // r1
  float *v27; // r1
  __int64 v28; // d16
  float v29; // s0
  float v30; // s2

  v5 = 0;
  if ( a2 >= 900 )
  {
    switch ( a2 )
    {
      case 900:
        v7 = (CTaskSimple *)CTask::operator new((CTask *)&word_2C, 0x384u);
        v8 = *((_DWORD *)this + 5);
        v5 = (int)v7;
        v9 = *((_QWORD *)this + 4);
        v10 = *((_BYTE *)this + 40);
        CTaskSimple::CTaskSimple(v7);
        *(_DWORD *)(v5 + 8) = v8;
        *(_DWORD *)v5 = &off_66C0B0;
        v11 = *(_BYTE *)(v5 + 28);
        v12 = *(_BYTE *)(v5 + 29);
        v13 = v9 + 12 * HIDWORD(v9);
        v14 = *(_QWORD *)(v13 + 4);
        *(_DWORD *)(v5 + 20) = *(_DWORD *)(v13 + 12);
        *(_DWORD *)v5 = &off_66C0E4;
        *(_DWORD *)(v5 + 24) = 1056964608;
        *(_BYTE *)(v5 + 29) = (8 * v10) & 8 | v12 & 0xE0;
        *(_BYTE *)(v5 + 28) = v11 & 0xC0;
        *(_QWORD *)(v5 + 12) = v14;
        break;
      case 903:
        v15 = *((_DWORD *)this + 3);
        v16 = v15 == 3;
        if ( v15 != 3 )
          v16 = v15 == 2;
        if ( v16 )
        {
          v17 = 0.0;
        }
        else
        {
          v17 = *((float *)this + 7);
          if ( v15 == 1 && !*((_DWORD *)this + 4) )
            v17 = 0.0;
        }
        v18 = *((_DWORD *)this + 1);
        if ( v18 && (*(int (__fastcall **)(int))(*(_DWORD *)v18 + 20))(v18) == 508 )
          v19 = 2 * CTaskComplexWalkRoundCar::GoingForDoor(*((CTaskComplexWalkRoundCar **)this + 1));
        else
          LOBYTE(v19) = 0;
        v20 = (CTaskComplex *)CTask::operator new((CTask *)&word_28, a2);
        v21 = *(_QWORD *)((char *)this + 20);
        v5 = (int)v20;
        v22 = *((_QWORD *)this + 4);
        CTaskComplex::CTaskComplex(v20);
        *(_DWORD *)(v5 + 12) = v21;
        v23 = *(_BYTE *)(v5 + 36);
        v24 = *(float *)(v5 + 16);
        *(_DWORD *)v5 = &off_66C14C;
        v25 = v23 & 0xE4 | v19;
        *(_BYTE *)(v5 + 36) = v25;
        v26 = (float *)(v22 + 12 * HIDWORD(v22));
        if ( v24 != v26[1]
          || *(float *)(v5 + 20) != v26[2]
          || *(float *)(v5 + 24) != v26[3]
          || *(float *)(v5 + 32) != v17 )
        {
          v27 = v26 + 1;
          v25 |= 4u;
          v28 = *(_QWORD *)v27;
          *(float *)(v5 + 24) = v27[2];
          *(_QWORD *)(v5 + 16) = v28;
          *(float *)(v5 + 32) = v17;
          *(_DWORD *)(v5 + 28) = HIDWORD(v21);
          *(_BYTE *)(v5 + 36) = v25;
        }
        if ( (v25 & 2) != 0 )
        {
          v29 = *(float *)(v5 + 28);
          *(_BYTE *)(v5 + 36) = v25 & 0xFE;
          if ( (int)v21 >= 5 )
            v30 = 1.0;
          else
            v30 = 0.5;
          if ( v29 >= v30 )
            v30 = v29;
          *(_DWORD *)(v5 + 32) = 0;
          *(float *)(v5 + 28) = v30;
        }
        break;
      case 926:
        v5 = CTask::operator new((CTask *)&dword_24, 0x39Eu);
        CTaskSimpleGoToPointFine::BaseRatio();
        CTaskSimpleGoToPointFine::CTaskSimpleGoToPointFine();
        if ( (*((_BYTE *)this + 40) & 0x20) != 0 )
        {
          v6 = *((_DWORD *)this + 2);
          if ( v6 )
          {
            if ( (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 20))(v6) == 900 )
              *(_BYTE *)(v5 + 28) = *(_BYTE *)(*((_DWORD *)this + 2) + 28) & 0xF | *(_BYTE *)(v5 + 28) & 0xF0;
          }
        }
        break;
    }
  }
  else
  {
    switch ( a2 )
    {
      case 200:
        v5 = CTask::operator new((CTask *)byte_8, 0xC8u);
        CTaskSimple::CTaskSimple((CTaskSimple *)v5);
        *(_DWORD *)v5 = &off_669000;
        break;
      case 203:
        v5 = CTask::operator new((CTask *)&dword_20, 0xCBu);
        CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v5, 20000, 0, 0, 8.0);
        break;
      case 704:
        v5 = CTask::operator new((CTask *)&dword_34, 0x2C0u);
        CTaskComplexLeaveCar::CTaskComplexLeaveCar((CTaskComplexLeaveCar *)v5, a3[356], 0, 0, 1, 0);
        break;
    }
  }
  return v5;
}


// ============================================================

// Address: 0x51e9f4
// Original: _ZN28CTaskComplexFollowPointRoute17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexFollowPointRoute::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexFollowPointRoute::CreateNextSubTask(CTaskComplexFollowPointRoute *this, CPed *a2)
{
  int v5; // r0
  int v6; // r1
  int SubTaskType; // r2

  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 1302 )
    return 0;
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 704 )
  {
    if ( !(*((unsigned __int8 *)a2 + 1157) << 31) )
      return (*(int (__fastcall **)(CTaskComplexFollowPointRoute *, CPed *))(*(_DWORD *)this + 44))(this, a2);
    return 0;
  }
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 200 )
    return 0;
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 203 )
    return 0;
  v5 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v6 = *((_DWORD *)this + 9);
  if ( v5 == 900 && v6 + 1 == **((_DWORD **)this + 8) && (*((_BYTE *)this + 40) & 4) == 0 )
    return 0;
  *((_DWORD *)this + 9) = v6 + 1;
  SubTaskType = CTaskComplexFollowPointRoute::GetSubTaskType(this);
  if ( (*((_BYTE *)this + 40) & 8) != 0 )
    SubTaskType = CTaskComplexFollowPointRoute::CalcGoToTaskType(this, a2, SubTaskType);
  return CTaskComplexFollowPointRoute::CreateSubTask(this, SubTaskType, (CVehicle **)a2);
}


// ============================================================

// Address: 0x51ea98
// Original: _ZN28CTaskComplexFollowPointRoute16CalcGoToTaskTypeEP4CPedi
// Demangled: CTaskComplexFollowPointRoute::CalcGoToTaskType(CPed *,int)
int __fastcall CTaskComplexFollowPointRoute::CalcGoToTaskType(CTaskComplexFollowPointRoute *this, CPed *a2, int a3)
{
  int v5; // r2
  char v6; // r0
  __int64 v7; // kr00_8
  int v8; // r2
  float *v9; // r1
  float *v10; // r3
  int v11; // r3
  float v12; // s0
  float v13; // s2
  int v14; // r3
  int v15; // r6
  int v16; // r6
  int v17; // r4
  int v18; // r0
  float v19; // s4
  float v20; // s6
  int *v21; // r0
  int v22; // r1
  unsigned int v23; // r2
  int v24; // r2
  float *v25; // r1
  float *v26; // r0
  float v27; // s6
  float v28; // s2
  float v29; // s0
  float v30; // s0
  int v31; // r0
  float v32; // s2
  float v33; // s4
  float v34; // s0
  char v35; // r0
  bool v36; // zf
  char v37; // r0
  float v39; // s0
  float v40; // s2
  float v41; // [sp+0h] [bp-28h] BYREF
  float v42; // [sp+4h] [bp-24h]
  float v43; // [sp+8h] [bp-20h]
  float v44; // [sp+Ch] [bp-1Ch] BYREF
  float v45; // [sp+10h] [bp-18h]
  float v46; // [sp+14h] [bp-14h]

  v5 = *((_DWORD *)this + 5);
  v6 = *((_BYTE *)this + 40) & 0xEF;
  *((_DWORD *)this + 14) = *((_DWORD *)this + 13);
  *((_BYTE *)this + 40) = v6;
  if ( v5 < 5 )
  {
    if ( (v6 & 0x20) == 0 )
      goto LABEL_45;
LABEL_39:
    v36 = a3 == 903;
    if ( a3 != 903 )
      v36 = a3 == 900;
    if ( v36 )
    {
      a3 = 926;
      v37 = v6 & 0x9F | 0x40;
    }
    else
    {
LABEL_45:
      v37 = v6 & 0x9F;
    }
    *((_BYTE *)this + 40) = v37;
    return a3;
  }
  v7 = *((_QWORD *)this + 4);
  v8 = *(_DWORD *)v7 - 1;
  if ( SHIDWORD(v7) < *(_DWORD *)v7 )
    v8 = *((_DWORD *)this + 9);
  if ( v8 >= 0 )
  {
    if ( *(_DWORD *)v7 == 1 )
    {
      v9 = (float *)(v7 + 8);
      v10 = (float *)(v7 + 4);
    }
    else
    {
      if ( *((_DWORD *)this + 3) > 3u )
      {
        v12 = 0.0;
        v13 = 0.0;
        goto LABEL_17;
      }
      if ( HIDWORD(v7) )
      {
        v11 = v7 + 12 * HIDWORD(v7);
        v9 = (float *)(v11 - 4);
        v10 = (float *)(v11 - 8);
      }
      else if ( *((int *)this + 4) < 1 )
      {
        v15 = *((_DWORD *)a2 + 5);
        v10 = (float *)(v15 + 48);
        if ( !v15 )
          v10 = (float *)((char *)a2 + 4);
        v9 = v10 + 1;
      }
      else
      {
        v14 = v7 + 12 * (*(_DWORD *)v7 - 1);
        v9 = (float *)(v14 + 8);
        v10 = (float *)(v14 + 4);
      }
    }
    v12 = *v9;
    v13 = *v10;
LABEL_17:
    v16 = 3 * v8;
    v17 = 0;
    v18 = v7 + 12 * v8;
    v19 = *(float *)(v18 + 4);
    v20 = *(float *)(v18 + 8);
    v46 = 0.0;
    v45 = v20 - v12;
    v44 = v19 - v13;
    CVector::Normalise((CVector *)&v44);
    v21 = (int *)*((_DWORD *)this + 8);
    v22 = *v21;
    if ( *v21 != 1 )
    {
      v23 = *((_DWORD *)this + 3);
      if ( v23 >= 3 )
      {
        if ( v23 != 3 )
        {
          v39 = 0.0;
          v40 = 0.0;
LABEL_27:
          v26 = (float *)&v21[v16];
          v27 = v26[2];
          v28 = v40 - v26[1];
          v43 = 0.0;
          v42 = v39 - v27;
          v41 = v28;
          CVector::Normalise((CVector *)&v41);
          v29 = (float)((float)(v44 * v41) + (float)(v45 * v42)) + (float)(v46 * v43);
          if ( v29 >= 0.707 )
          {
            v6 = *((_BYTE *)this + 40) & 0xEF;
          }
          else
          {
            v30 = (float)((float)(v29 + 1.0) / -1.707) + 1.0;
            if ( v30 >= 0.0 )
            {
              if ( v30 > 1.0 )
                v30 = 1.0;
            }
            else
            {
              v30 = 0.0;
            }
            v31 = *((_DWORD *)this + 5);
            v32 = 1.5;
            v33 = 4.0;
            if ( v31 == 7 )
              v32 = 3.0;
            v34 = v30 * v32;
            if ( v31 == 7 )
              v33 = 5.0;
            v35 = *((_BYTE *)this + 40);
            *((float *)this + 11) = v33;
            *((float *)this + 12) = v33;
            v6 = v35 | 0x10;
            *((float *)this + 13) = v34;
          }
          *((_BYTE *)this + 40) = v6;
          goto LABEL_39;
        }
        v17 = *((_DWORD *)this + 9) + 1;
        if ( v17 == v22 )
          v17 = 0;
      }
      else
      {
        v24 = *((_DWORD *)this + 9);
        v17 = v24 + 1;
        if ( v24 + 1 >= v22 )
          v17 = v24 - 1;
      }
    }
    v25 = (float *)&v21[3 * v17];
    v40 = v25[1];
    v39 = v25[2];
    goto LABEL_27;
  }
  return a3;
}


// ============================================================

// Address: 0x51ecac
// Original: _ZN28CTaskComplexFollowPointRoute15GetLastWaypointEP4CPed
// Demangled: CTaskComplexFollowPointRoute::GetLastWaypoint(CPed *)
int __fastcall CTaskComplexFollowPointRoute::GetLastWaypoint(int this, CPed *a2, int a3)
{
  int v3; // r4
  int v4; // r1
  __int64 v5; // d16
  int v6; // lr
  int v7; // r1
  __int64 v8; // d16
  int v9; // r1
  __int64 *v10; // r3

  v3 = *((_DWORD *)a2 + 8);
  if ( *(_DWORD *)v3 == 1 )
  {
    v4 = *(_DWORD *)(v3 + 12);
    v5 = *(_QWORD *)(v3 + 4);
LABEL_3:
    *(_DWORD *)(this + 8) = v4;
    *(_QWORD *)this = v5;
    return this;
  }
  if ( *((_DWORD *)a2 + 3) > 3u )
  {
    *(_DWORD *)this = 0;
    *(_DWORD *)(this + 4) = 0;
    *(_DWORD *)(this + 8) = 0;
  }
  else
  {
    v6 = *((_DWORD *)a2 + 9);
    if ( v6 )
    {
      v7 = 3 * v6;
    }
    else
    {
      if ( *((int *)a2 + 4) < 1 )
      {
        v9 = *(_DWORD *)(a3 + 20);
        v10 = (__int64 *)(v9 + 48);
        if ( !v9 )
          v10 = (__int64 *)(a3 + 4);
        v5 = *v10;
        v4 = *((_DWORD *)v10 + 2);
        goto LABEL_3;
      }
      v7 = 3 * *(_DWORD *)v3;
    }
    v8 = *(_QWORD *)(v3 + 4 * v7 - 8);
    *(_DWORD *)(this + 8) = *(_DWORD *)(v3 + 4 * v7);
    *(_QWORD *)this = v8;
  }
  return this;
}


// ============================================================

// Address: 0x51ed1c
// Original: _ZN28CTaskComplexFollowPointRoute15GetNextWaypointEP4CPed
// Demangled: CTaskComplexFollowPointRoute::GetNextWaypoint(CPed *)
_DWORD *__fastcall CTaskComplexFollowPointRoute::GetNextWaypoint(_DWORD *this, CPed *a2)
{
  int *v2; // r2
  int v3; // lr
  int v4; // r1
  __int64 v5; // d16
  unsigned int v6; // r3
  int v7; // r12
  int v8; // r1
  __int64 v9; // d16
  int *v10; // r1

  v2 = (int *)*((_DWORD *)a2 + 8);
  v3 = *v2;
  if ( *v2 != 1 )
  {
    v6 = *((_DWORD *)a2 + 3);
    if ( v6 >= 3 )
    {
      if ( v6 != 3 )
      {
        *this = 0;
        this[1] = 0;
        this[2] = 0;
        return this;
      }
      v8 = *((_DWORD *)a2 + 9) + 1;
      if ( v8 == v3 )
        goto LABEL_2;
    }
    else
    {
      v7 = *((_DWORD *)a2 + 9);
      v8 = v7 + 1;
      if ( v7 + 1 >= v3 )
      {
        v9 = *(_QWORD *)&v2[3 * v7 - 2];
        this[2] = v2[3 * v7];
        *(_QWORD *)this = v9;
        return this;
      }
    }
    v10 = &v2[3 * v8];
    v5 = *(_QWORD *)(v10 + 1);
    v4 = v10[3];
    goto LABEL_10;
  }
LABEL_2:
  v4 = v2[3];
  v5 = *(_QWORD *)(v2 + 1);
LABEL_10:
  this[2] = v4;
  *(_QWORD *)this = v5;
  return this;
}


// ============================================================

// Address: 0x51ed88
// Original: _ZN28CTaskComplexFollowPointRoute18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexFollowPointRoute::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexFollowPointRoute::CreateFirstSubTask(CTaskComplexFollowPointRoute *this, CPed *a2)
{
  CTaskComplexFollowPointRoute *v2; // r5
  CPed *v3; // r4
  char v4; // r0
  int *v5; // r0
  int v6; // r2
  int v7; // r1
  char *v8; // r11
  float v9; // s16
  int v10; // r6
  int v11; // r4
  int v12; // r9
  int v13; // r8
  float *v14; // r10
  float v15; // s0
  float *v16; // r0
  float v17; // s18
  float v18; // s20
  float v19; // s22
  float v20; // s2
  float v21; // s8
  float v22; // s6
  float v23; // s4
  float v24; // s3
  int v25; // r1
  float v26; // s0
  int v27; // r0
  float v28; // s4
  float32x2_t v29; // d17
  float32x2_t v30; // d17
  unsigned __int64 v31; // d3
  float v32; // s4
  int SubTaskType; // r2
  CPed *v35; // [sp+0h] [bp-58h]
  int v36; // [sp+4h] [bp-54h]
  CTaskComplexFollowPointRoute *v37; // [sp+8h] [bp-50h]
  float v38; // [sp+Ch] [bp-4Ch] BYREF
  float v39; // [sp+10h] [bp-48h]
  float v40; // [sp+14h] [bp-44h]

  v2 = this;
  v3 = a2;
  v4 = *((_BYTE *)this + 40);
  *((_BYTE *)v2 + 40) = v4 & 0xFD;
  if ( (v4 & 8) != 0 )
  {
    *(_QWORD *)((char *)v2 + 44) = 0LL;
    *(_QWORD *)((char *)v2 + 52) = 0LL;
  }
  v5 = (int *)*((_DWORD *)v2 + 8);
  v6 = *v5;
  if ( *v5 )
  {
    if ( *((unsigned __int8 *)a2 + 1157) << 31 )
    {
      SubTaskType = 704;
    }
    else
    {
      if ( *((_DWORD *)v2 + 3) )
      {
        v7 = *((_DWORD *)a2 + 5);
        v8 = (char *)(v7 + 48);
        if ( !v7 )
          v8 = (char *)v3 + 4;
        if ( v6 < 1 )
        {
          v10 = -1;
        }
        else
        {
          v9 = 3.4028e38;
          v10 = -1;
          v35 = v3;
          v11 = 2;
          v12 = 1;
          v37 = v2;
          v36 = *v5;
          while ( 1 )
          {
            v13 = v12;
            if ( v6 == v12 )
              v13 = 0;
            v14 = (float *)&v5[v11];
            v15 = *(float *)&v5[v11 - 1];
            v16 = (float *)&v5[3 * v13];
            v17 = v16[1] - v15;
            v38 = v17;
            v18 = v16[2] - *v14;
            v39 = v18;
            v19 = v16[3] - v14[1];
            v40 = v19;
            CVector::Normalise((CVector *)&v38);
            v20 = *(v14 - 1);
            v21 = *((float *)v8 + 1);
            v22 = v14[1];
            v23 = *((float *)v8 + 2);
            v24 = (float)((float)((float)(*(float *)v8 - v20) * v38) + (float)((float)(v21 - *v14) * v39))
                + (float)((float)(v23 - v22) * v40);
            if ( v24 > 0.0
              && v24 < sqrtf((float)(v19 * v19) + (float)((float)(v17 * v17) + (float)(v18 * v18)))
              && (float)((float)((float)(v23 - (float)(v22 + (float)(v40 * v24)))
                               * (float)(v23 - (float)(v22 + (float)(v40 * v24))))
                       + (float)((float)((float)(*(float *)v8 - (float)(v20 + (float)(v38 * v24)))
                                       * (float)(*(float *)v8 - (float)(v20 + (float)(v38 * v24))))
                               + (float)((float)(v21 - (float)(*v14 + (float)(v39 * v24)))
                                       * (float)(v21 - (float)(*v14 + (float)(v39 * v24)))))) < (float)(v9 * v9) )
            {
              v9 = (float)((float)(v23 - (float)(v22 + (float)(v40 * v24)))
                         * (float)(v23 - (float)(v22 + (float)(v40 * v24))))
                 + (float)((float)((float)(*(float *)v8 - (float)(v20 + (float)(v38 * v24)))
                                 * (float)(*(float *)v8 - (float)(v20 + (float)(v38 * v24))))
                         + (float)((float)(v21 - (float)(*v14 + (float)(v39 * v24)))
                                 * (float)(v21 - (float)(*v14 + (float)(v39 * v24)))));
              v10 = v13;
            }
            v6 = v36;
            v2 = v37;
            if ( v36 == v12 )
              break;
            ++v12;
            v5 = (int *)*((_DWORD *)v37 + 8);
            v11 += 3;
          }
          if ( v10 == -1 )
          {
            v3 = v35;
            v25 = 0;
            v26 = 3.4028e38;
            v10 = -1;
            v27 = *((_DWORD *)v37 + 8) + 4;
            do
            {
              v28 = *(float *)v27;
              v29.n64_u64[0] = *(unsigned __int64 *)(v27 + 4);
              v27 += 12;
              v30.n64_u64[0] = vsub_f32(*(float32x2_t *)(v8 + 4), v29).n64_u64[0];
              v31 = vmul_f32(v30, v30).n64_u64[0];
              v32 = (float)((float)((float)(*(float *)v8 - v28) * (float)(*(float *)v8 - v28)) + *(float *)&v31)
                  + *((float *)&v31 + 1);
              if ( v32 < (float)(v26 * v26) )
              {
                v26 = v32;
                v10 = v25;
              }
              ++v25;
            }
            while ( v36 != v25 );
          }
          else
          {
            v3 = v35;
          }
        }
        *((_DWORD *)v2 + 9) = v10;
      }
      SubTaskType = CTaskComplexFollowPointRoute::GetSubTaskType(v2);
      if ( (*((_BYTE *)v2 + 40) & 8) != 0 )
        SubTaskType = CTaskComplexFollowPointRoute::CalcGoToTaskType(v2, v3, SubTaskType);
    }
  }
  else
  {
    SubTaskType = 200;
  }
  return CTaskComplexFollowPointRoute::CreateSubTask(v2, SubTaskType, v3);
}


// ============================================================

// Address: 0x51efc4
// Original: _ZN28CTaskComplexFollowPointRoute14CalcBlendRatioEP4CPedb
// Demangled: CTaskComplexFollowPointRoute::CalcBlendRatio(CPed *,bool)
unsigned __int32 __fastcall CTaskComplexFollowPointRoute::CalcBlendRatio(
        CTaskComplexFollowPointRoute *this,
        CPed *a2,
        int a3)
{
  float32x2_t v3; // d0
  float32x2_t v4; // d1
  int v7; // r0
  float *v8; // r5
  float *v9; // r0
  float v10; // s0
  float v11; // s2
  float *v12; // r3
  int v13; // r5
  int v14; // r2
  float *v15; // r0
  float *v16; // r1
  float *v17; // r2
  float *v18; // r3
  int v19; // r1
  int v20; // r1
  float v21; // s0
  float v22; // s2
  float v23; // s4
  float v24; // s6
  float v25; // s0
  char *v26; // r0

  if ( a3 != 1 )
  {
    v12 = (float *)*((_DWORD *)this + 8);
    v13 = *((_DWORD *)a2 + 5);
    v14 = *(_DWORD *)v12;
    v15 = (float *)(v13 + 48);
    if ( !v13 )
      v15 = (float *)((char *)a2 + 4);
    if ( v14 == 1 )
    {
      v16 = v12 + 3;
      v17 = v12 + 2;
      v18 = v12 + 1;
    }
    else
    {
      if ( *((_DWORD *)this + 3) > 3u )
      {
        v21 = 0.0;
        v22 = 0.0;
        v23 = 0.0;
LABEL_17:
        v24 = (float)(v15[2] - v21) * (float)(v15[2] - v21);
        v10 = *((float *)this + 12) * *((float *)this + 12);
        v11 = (float)((float)((float)(*v15 - v23) * (float)(*v15 - v23))
                    + (float)((float)(v15[1] - v22) * (float)(v15[1] - v22)))
            + v24;
        goto LABEL_18;
      }
      v19 = *((_DWORD *)this + 9);
      if ( v19 )
      {
        v20 = 3 * v19;
      }
      else
      {
        if ( *((int *)this + 4) < 1 )
        {
          v16 = v15 + 2;
          v17 = v15 + 1;
          v18 = v15;
          goto LABEL_16;
        }
        v20 = 3 * v14;
      }
      v16 = &v12[v20];
      v17 = v16 - 1;
      v18 = v16 - 2;
    }
LABEL_16:
    v21 = *v16;
    v22 = *v17;
    v23 = *v18;
    goto LABEL_17;
  }
  v7 = *((_DWORD *)a2 + 5);
  v8 = (float *)(v7 + 48);
  if ( !v7 )
    v8 = (float *)((char *)a2 + 4);
  v9 = (float *)(*((_DWORD *)this + 8) + 12 * *((_DWORD *)this + 9));
  v10 = *((float *)this + 11) * *((float *)this + 11);
  v11 = (float)((float)((float)(v9[1] - *v8) * (float)(v9[1] - *v8))
              + (float)((float)(v9[2] - v8[1]) * (float)(v9[2] - v8[1])))
      + (float)((float)(v9[3] - v8[2]) * (float)(v9[3] - v8[2]));
LABEL_18:
  if ( v11 >= v10 )
    return -1.0;
  v25 = v11 / v10;
  if ( v25 >= 0.0 )
  {
    if ( v25 > 1.0 )
      v25 = 1.0;
  }
  else
  {
    v25 = 0.0;
  }
  v4.n64_u32[0] = cosf(v25 * 3.1416);
  v26 = (char *)this + 56;
  if ( a3 )
    v26 = (char *)this + 52;
  v3.n64_f32[0] = (float)(v4.n64_f32[0] * 0.5) + 0.5;
  v4.n64_u32[0] = *(_DWORD *)v26;
  v4.n64_f32[0] = COERCE_FLOAT(CTaskSimpleGoToPointFine::BaseRatio()) - (float)(v4.n64_f32[0] * v3.n64_f32[0]);
  v3.n64_u32[0] = CTaskSimpleGoToPointFine::BaseRatio();
  v3.n64_u32[0] = vmax_f32(v3, v4).n64_u32[0];
  return v3.n64_u32[0];
}


// ============================================================

// Address: 0x51f16c
// Original: _ZN28CTaskComplexFollowPointRoute14ControlSubTaskEP4CPed
// Demangled: CTaskComplexFollowPointRoute::ControlSubTask(CPed *)
int __fastcall CTaskComplexFollowPointRoute::ControlSubTask(CTaskComplexFollowPointRoute *this, CPed *a2)
{
  int SubTask; // r5
  char v5; // r1
  int v6; // r0
  float v8; // r1
  CTaskSimpleGoToPointFine *v9; // r5
  int v10; // r0
  unsigned int v11; // r1
  CTaskSimple *v12; // r0
  int v13; // r6
  __int64 v14; // r8
  char v15; // r4
  char v16; // r2
  char v17; // r3
  int v18; // r0
  __int64 v19; // d16
  float v20; // r6
  int v21; // r0

  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 704 )
    return *((_DWORD *)this + 2);
  if ( *(int *)(*((_DWORD *)a2 + 272) + 632) > 30 || **((int **)this + 8) < 1 )
    return 0;
  v5 = *((_BYTE *)this + 40);
  if ( (v5 & 2) == 0 )
  {
    if ( (*((_BYTE *)this + 40) & 8) != 0 )
    {
      v6 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
      v5 = *((_BYTE *)this + 40);
      if ( v6 == 200 )
      {
        SubTask = *((_DWORD *)this + 2);
        *((_BYTE *)this + 40) = v5 & 0x8F;
        return SubTask;
      }
    }
    if ( (v5 & 8) == 0 )
      return *((_DWORD *)this + 2);
    if ( (v5 & 0x20) != 0 )
    {
      if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 926 )
      {
        v8 = COERCE_FLOAT(CTaskComplexFollowPointRoute::CalcBlendRatio(this, a2, 1));
        if ( v8 < 0.0 )
          v8 = COERCE_FLOAT(CTaskSimpleGoToPointFine::BaseRatio());
        goto LABEL_22;
      }
      v5 = *((_BYTE *)this + 40);
    }
    if ( (v5 & 0x40) == 0
      || (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 926 )
    {
LABEL_23:
      if ( (*((_BYTE *)this + 40) & 0x30) == 0x10 )
      {
        v20 = COERCE_FLOAT(CTaskComplexFollowPointRoute::CalcBlendRatio(this, a2, 1));
        if ( v20 >= 0.0 )
        {
          v21 = *((_DWORD *)this + 2);
          *((_BYTE *)this + 40) = *((_BYTE *)this + 40) & 0x8F | 0x20;
          if ( (*(int (__fastcall **)(int))(*(_DWORD *)v21 + 20))(v21) != 926 )
          {
            SubTask = CTaskComplexFollowPointRoute::CreateSubTask(this, 926, a2);
            CTaskSimpleGoToPointFine::SetMoveRatio((CTaskSimpleGoToPointFine *)SubTask, v20);
            return SubTask;
          }
          CTaskSimpleGoToPointFine::SetMoveRatio(*((CTaskSimpleGoToPointFine **)this + 2), v20);
        }
      }
      return *((_DWORD *)this + 2);
    }
    v8 = COERCE_FLOAT(CTaskComplexFollowPointRoute::CalcBlendRatio(this, a2, 0));
    if ( v8 < 0.0 )
    {
      v9 = (CTaskSimpleGoToPointFine *)*((_DWORD *)this + 2);
      *((_BYTE *)this + 40) &= ~0x40u;
      v10 = CTaskSimpleGoToPointFine::BaseRatio();
      CTaskSimpleGoToPointFine::SetMoveRatio(v9, *(float *)&v10);
      v12 = (CTaskSimple *)CTask::operator new((CTask *)&word_2C, v11);
      v13 = *((_DWORD *)this + 5);
      SubTask = (int)v12;
      v14 = *((_QWORD *)this + 4);
      v15 = *((_BYTE *)this + 40);
      CTaskSimple::CTaskSimple(v12);
      *(_DWORD *)(SubTask + 8) = v13;
      *(_DWORD *)SubTask = &off_66C0B0;
      v16 = *(_BYTE *)(SubTask + 28);
      v17 = *(_BYTE *)(SubTask + 29);
      v18 = v14 + 12 * HIDWORD(v14);
      v19 = *(_QWORD *)(v18 + 4);
      *(_DWORD *)(SubTask + 20) = *(_DWORD *)(v18 + 12);
      *(_DWORD *)SubTask = &off_66C0E4;
      *(_DWORD *)(SubTask + 24) = 1056964608;
      *(_BYTE *)(SubTask + 29) = (8 * v15) & 8 | v17 & 0xE0;
      *(_BYTE *)(SubTask + 28) = v16 & 0xC0;
      *(_QWORD *)(SubTask + 12) = v19;
      return SubTask;
    }
LABEL_22:
    CTaskSimpleGoToPointFine::SetMoveRatio(*((CTaskSimpleGoToPointFine **)this + 2), v8);
    goto LABEL_23;
  }
  return (*(int (__fastcall **)(CTaskComplexFollowPointRoute *, CPed *))(*(_DWORD *)this + 44))(this, a2);
}


// ============================================================

// Address: 0x527b64
// Original: _ZNK28CTaskComplexFollowPointRoute5CloneEv
// Demangled: CTaskComplexFollowPointRoute::Clone(void)
CTaskComplex *__fastcall CTaskComplexFollowPointRoute::Clone(CTaskComplexFollowPointRoute *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  int v4; // r6
  CTaskComplex *v5; // r4
  __int64 v6; // kr00_8
  __int64 v7; // kr08_8
  char v8; // r5
  unsigned int v9; // r1
  _DWORD *v10; // r0
  int v11; // r2
  int v12; // r2
  _DWORD *v13; // r3
  int v14; // r6
  __int64 v15; // d16
  int v16; // r5
  char v17; // r2

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&off_3C, a2);
  v4 = *((_DWORD *)this + 3);
  v5 = v3;
  v6 = *(_QWORD *)((char *)this + 20);
  v7 = *(_QWORD *)((char *)this + 28);
  v8 = *((_BYTE *)this + 40);
  CTaskComplex::CTaskComplex(v3);
  *((_DWORD *)v5 + 3) = v4;
  *((_DWORD *)v5 + 5) = v6;
  v9 = *((_BYTE *)v5 + 40) & 0xF2;
  *(_DWORD *)v5 = &off_66C23C;
  *((_BYTE *)v5 + 40) = v8 & 0xD | v9;
  if ( (v8 & 8) != 0 )
  {
    *((_BYTE *)v5 + 40) = v8 & 0xD | v9 & 0x9F;
    *(_QWORD *)((char *)v5 + 44) = 0LL;
    *(_QWORD *)((char *)v5 + 52) = 0LL;
  }
  v10 = (_DWORD *)CPointRoute::operator new((CPointRoute *)&dword_64, v9);
  *v10 = 0;
  *((_DWORD *)v5 + 8) = v10;
  v11 = *(_DWORD *)HIDWORD(v7);
  *v10 = *(_DWORD *)HIDWORD(v7);
  if ( v11 >= 1 )
  {
    v12 = HIDWORD(v7) + 4;
    v13 = v10 + 1;
    v14 = 0;
    do
    {
      v15 = *(_QWORD *)v12;
      ++v14;
      v16 = *(_DWORD *)(v12 + 8);
      v12 += 12;
      v13[2] = v16;
      *(_QWORD *)v13 = v15;
      v13 += 3;
    }
    while ( v14 < *v10 );
  }
  *((_DWORD *)v5 + 6) = HIDWORD(v6);
  *((_DWORD *)v5 + 7) = v7;
  v17 = *((_BYTE *)v5 + 40);
  *((_DWORD *)v5 + 9) = 0;
  *((_DWORD *)v5 + 4) = 0;
  *((_BYTE *)v5 + 40) = v17 | 2;
  if ( (v17 & 8) != 0 )
  {
    *((_BYTE *)v5 + 40) = v17 & 0x9D | 0x42;
    *(_QWORD *)((char *)v5 + 44) = 0LL;
    *(_QWORD *)((char *)v5 + 52) = 0LL;
  }
  return v5;
}


// ============================================================

// Address: 0x527c40
// Original: _ZNK28CTaskComplexFollowPointRoute11GetTaskTypeEv
// Demangled: CTaskComplexFollowPointRoute::GetTaskType(void)
int __fastcall CTaskComplexFollowPointRoute::GetTaskType(CTaskComplexFollowPointRoute *this)
{
  return 905;
}


// ============================================================

// Address: 0x527c48
// Original: _ZN28CTaskComplexFollowPointRoute9SerializeEv
// Demangled: CTaskComplexFollowPointRoute::Serialize(void)
int __fastcall CTaskComplexFollowPointRoute::Serialize(CTaskComplexFollowPointRoute *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CGenericGameStorage *v5; // r5
  int v6; // r2
  const void *v7; // r5
  void *v8; // r6
  int v9; // r2
  CGenericGameStorage *v10; // r5
  int v11; // r2
  CGenericGameStorage *v12; // r5
  int v13; // r2
  CGenericGameStorage *v14; // r5
  int v15; // r2
  int v16; // r2
  int v17; // r2
  int v18; // r2
  int v20; // r0
  bool v21; // [sp+5h] [bp-13h] BYREF
  bool v22; // [sp+6h] [bp-12h] BYREF
  _BYTE v23[17]; // [sp+7h] [bp-11h] BYREF

  v2 = (*(int (__fastcall **)(CTaskComplexFollowPointRoute *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexFollowPointRoute *))(*(_DWORD *)this + 20))(this) == 905 )
  {
    if ( UseDataFence )
      AddDataFence();
    v5 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v5 = *((_DWORD *)this + 5);
    CGenericGameStorage::_SaveDataToWorkBuffer(v5, byte_4, v6);
    free(v5);
    if ( UseDataFence )
      AddDataFence();
    v7 = (const void *)*((_DWORD *)this + 8);
    v8 = malloc(0x64u);
    memcpy_1(v8, v7, 0x64u);
    CGenericGameStorage::_SaveDataToWorkBuffer((CGenericGameStorage *)v8, &dword_64, v9);
    free(v8);
    if ( UseDataFence )
      AddDataFence();
    v10 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v10 = *((_DWORD *)this + 3);
    CGenericGameStorage::_SaveDataToWorkBuffer(v10, byte_4, v11);
    free(v10);
    if ( UseDataFence )
      AddDataFence();
    v12 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v12 = *((_DWORD *)this + 6);
    CGenericGameStorage::_SaveDataToWorkBuffer(v12, byte_4, v13);
    free(v12);
    if ( UseDataFence )
      AddDataFence();
    v14 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v14 = *((_DWORD *)this + 7);
    CGenericGameStorage::_SaveDataToWorkBuffer(v14, byte_4, v15);
    free(v14);
    v23[0] = *((_BYTE *)this + 40) & 1;
    if ( UseDataFence )
      AddDataFence();
    CGenericGameStorage::_SaveDataToWorkBuffer((CGenericGameStorage *)v23, (char *)&stderr + 1, v16);
    v22 = (*((_BYTE *)this + 40) & 8) != 0;
    if ( UseDataFence )
      AddDataFence();
    CGenericGameStorage::_SaveDataToWorkBuffer((CGenericGameStorage *)&v22, (char *)&stderr + 1, v17);
    v21 = (*((_BYTE *)this + 40) & 4) != 0;
    if ( UseDataFence )
      AddDataFence();
    return CGenericGameStorage::_SaveDataToWorkBuffer((CGenericGameStorage *)&v21, (char *)&stderr + 1, v18);
  }
  else
  {
    v20 = (*(int (__fastcall **)(CTaskComplexFollowPointRoute *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(905, v20);
  }
}


// ============================================================
