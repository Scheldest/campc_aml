
// Address: 0x18da28
// Original: j__ZN29CTaskComplexFollowPatrolRoute10CreateTaskEv
// Demangled: CTaskComplexFollowPatrolRoute::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexFollowPatrolRoute::CreateTask(CTaskComplexFollowPatrolRoute *this)
{
  return _ZN29CTaskComplexFollowPatrolRoute10CreateTaskEv(this);
}


// ============================================================

// Address: 0x18f784
// Original: j__ZN29CTaskComplexFollowPatrolRoute13CreateSubTaskEi
// Demangled: CTaskComplexFollowPatrolRoute::CreateSubTask(int)
// attributes: thunk
int __fastcall CTaskComplexFollowPatrolRoute::CreateSubTask(CTaskComplexFollowPatrolRoute *this, int a2)
{
  return _ZN29CTaskComplexFollowPatrolRoute13CreateSubTaskEi(this, a2);
}


// ============================================================

// Address: 0x1991e8
// Original: j__ZN29CTaskComplexFollowPatrolRouteC2EiRK12CPatrolRouteiff
// Demangled: CTaskComplexFollowPatrolRoute::CTaskComplexFollowPatrolRoute(int,CPatrolRoute const&,int,float,float)
// attributes: thunk
void __fastcall CTaskComplexFollowPatrolRoute::CTaskComplexFollowPatrolRoute(
        CTaskComplexFollowPatrolRoute *this,
        int a2,
        const CPatrolRoute *a3,
        int a4,
        float a5,
        float a6)
{
  _ZN29CTaskComplexFollowPatrolRouteC2EiRK12CPatrolRouteiff(this, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x1a11d0
// Original: j__ZN29CTaskComplexFollowPatrolRouteC2EiRK12CPatrolRouteiff_0
// Demangled: CTaskComplexFollowPatrolRoute::CTaskComplexFollowPatrolRoute(int,CPatrolRoute const&,int,float,float)
// attributes: thunk
void __fastcall CTaskComplexFollowPatrolRoute::CTaskComplexFollowPatrolRoute(
        CTaskComplexFollowPatrolRoute *this,
        int a2,
        const CPatrolRoute *a3,
        int a4,
        float a5,
        float a6)
{
  _ZN29CTaskComplexFollowPatrolRouteC2EiRK12CPatrolRouteiff(this, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x496170
// Original: _ZN29CTaskComplexFollowPatrolRoute10CreateTaskEv
// Demangled: CTaskComplexFollowPatrolRoute::CreateTask(void)
void __fastcall CTaskComplexFollowPatrolRoute::CreateTask(CTaskComplexFollowPatrolRoute *this, int a2, int a3)
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
  unsigned int v12; // r1
  CTaskComplexFollowPatrolRoute *v13; // r0
  float v14; // [sp+Ch] [bp-1C4h] BYREF
  float v15; // [sp+10h] [bp-1C0h] BYREF
  _WORD v16[3]; // [sp+16h] [bp-1BAh] BYREF
  char v17; // [sp+1Ch] [bp-1B4h]
  char v18; // [sp+34h] [bp-19Ch]
  char v19; // [sp+44h] [bp-18Ch]
  char v20; // [sp+5Ch] [bp-174h]
  char v21; // [sp+6Ch] [bp-164h]
  char v22; // [sp+84h] [bp-14Ch]
  char v23; // [sp+94h] [bp-13Ch]
  char v24; // [sp+ACh] [bp-124h]
  char v25; // [sp+BCh] [bp-114h]
  char v26; // [sp+D4h] [bp-FCh]
  char v27; // [sp+E4h] [bp-ECh]
  char v28; // [sp+FCh] [bp-D4h]
  char v29; // [sp+10Ch] [bp-C4h]
  char v30; // [sp+124h] [bp-ACh]
  char v31; // [sp+134h] [bp-9Ch]
  char v32; // [sp+14Ch] [bp-84h]
  int v33[4]; // [sp+1BEh] [bp-12h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16[1], (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v33, (char *)&stderr + 2, a3);
  v5 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16[1], (char *)&stderr + 2, v4);
    UseDataFence = v5;
  }
  v17 = 0;
  *(_DWORD *)&v16[1] = 0;
  v19 = 0;
  v18 = 0;
  v20 = 0;
  v22 = 0;
  v21 = 0;
  v24 = 0;
  v23 = 0;
  v26 = 0;
  v25 = 0;
  v28 = 0;
  v27 = 0;
  v30 = 0;
  v29 = 0;
  v32 = 0;
  v31 = 0;
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16[1], &elf_hash_bucket[42], v4);
  v7 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v15, (char *)&stderr + 2, v6);
    UseDataFence = v7;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v16, (char *)&stderr + 2, v6);
  v9 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v15, (char *)&stderr + 2, v8);
    UseDataFence = v9;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v15, byte_4, v8);
  v11 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v14, (char *)&stderr + 2, v10);
    UseDataFence = v11;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v14, byte_4, v10);
  v13 = (CTaskComplexFollowPatrolRoute *)CTask::operator new((CTask *)&word_30, v12);
  CTaskComplexFollowPatrolRoute::CTaskComplexFollowPatrolRoute(
    v13,
    SLOWORD(v33[0]),
    (const CPatrolRoute *)&v16[1],
    v16[0],
    v15,
    v14);
}


// ============================================================

// Address: 0x524fdc
// Original: _ZN29CTaskComplexFollowPatrolRouteC2EiRK12CPatrolRouteiff
// Demangled: CTaskComplexFollowPatrolRoute::CTaskComplexFollowPatrolRoute(int,CPatrolRoute const&,int,float,float)
void __fastcall CTaskComplexFollowPatrolRoute::CTaskComplexFollowPatrolRoute(
        CTaskComplexFollowPatrolRoute *this,
        __int16 a2,
        const CPatrolRoute *a3,
        __int16 a4,
        float a5,
        float a6)
{
  char v10; // r1
  unsigned int v11; // r1
  int v12; // r11
  bool v13; // cc
  int v14; // r4
  int v15; // r5
  int v16; // r6
  int v17; // r1
  __int64 v18; // d16
  char v19; // r1
  CTaskComplexFollowPatrolRoute *v20; // [sp+4h] [bp-34h]

  CTaskComplex::CTaskComplex(this);
  *((_WORD *)this + 6) = a4;
  v10 = *((_BYTE *)this + 32);
  *((_WORD *)this + 8) = a2;
  v11 = v10 & 0xFD;
  *((_BYTE *)this + 32) = v11;
  *(_DWORD *)this = &off_66C478;
  v12 = CPatrolRoute::operator new((CPatrolRoute *)&elf_hash_bucket[42], v11);
  *(_DWORD *)v12 = 0;
  *(_BYTE *)(v12 + 4) = 0;
  *(_BYTE *)(v12 + 28) = 0;
  *(_BYTE *)(v12 + 44) = 0;
  *(_BYTE *)(v12 + 68) = 0;
  *(_BYTE *)(v12 + 84) = 0;
  *(_BYTE *)(v12 + 108) = 0;
  *(_BYTE *)(v12 + 124) = 0;
  *(_BYTE *)(v12 + 148) = 0;
  *(_BYTE *)(v12 + 164) = 0;
  *(_BYTE *)(v12 + 188) = 0;
  *(_BYTE *)(v12 + 204) = 0;
  *(_BYTE *)(v12 + 228) = 0;
  *(_BYTE *)(v12 + 244) = 0;
  *(_BYTE *)(v12 + 268) = 0;
  *(_BYTE *)(v12 + 284) = 0;
  *(_BYTE *)(v12 + 308) = 0;
  v20 = this;
  *((_DWORD *)this + 7) = v12;
  v13 = *(_DWORD *)a3 < 1;
  *(_DWORD *)v12 = *(_DWORD *)a3;
  if ( !v13 )
  {
    v14 = 0;
    v15 = 324;
    v16 = 0;
    do
    {
      v17 = v12 + v15;
      v18 = *(_QWORD *)((char *)a3 + v15);
      *(_DWORD *)(v17 + 8) = *(_DWORD *)((char *)a3 + v15 + 8);
      *(_QWORD *)v17 = v18;
      strcpy((char *)(v12 + v14 + 4), (const char *)a3 + v14 + 4);
      strcpy((char *)(v12 + v14 + 28), (const char *)a3 + v14 + 28);
      ++v16;
      v15 += 12;
      v14 += 40;
    }
    while ( v16 < *(_DWORD *)v12 );
  }
  *((float *)v20 + 5) = a5;
  *((float *)v20 + 6) = a6;
  v19 = *((_BYTE *)v20 + 32);
  *((_WORD *)v20 + 9) = 0;
  *((_WORD *)v20 + 7) = 0;
  *((_BYTE *)v20 + 32) = v19 | 1;
}


// ============================================================

// Address: 0x5250f8
// Original: _ZN29CTaskComplexFollowPatrolRoute8SetRouteERK12CPatrolRouteffb
// Demangled: CTaskComplexFollowPatrolRoute::SetRoute(CPatrolRoute const&,float,float,bool)
int __fastcall CTaskComplexFollowPatrolRoute::SetRoute(
        CTaskComplexFollowPatrolRoute *this,
        const CPatrolRoute *a2,
        float a3,
        float a4,
        int a5)
{
  int *v7; // r9
  int result; // r0
  int v10; // r2
  int v11; // r10
  int v12; // r4
  int v13; // r11
  float *v14; // r0
  float *v15; // r1
  int v16; // r4
  int v17; // r5
  int v18; // r6
  int *v19; // r1
  __int64 v20; // d16
  int v21; // r0
  int v22; // [sp+0h] [bp-38h]

  v7 = (int *)*((_DWORD *)this + 7);
  if ( a5 == 1 )
  {
    result = *(_DWORD *)a2;
  }
  else
  {
    result = *(_DWORD *)a2;
    v10 = *v7;
    if ( *v7 == *(_DWORD *)a2 )
    {
      if ( v10 < 1 )
      {
LABEL_12:
        if ( *((float *)this + 5) == a3 )
        {
          result = v10;
          if ( *((float *)this + 6) == a4 )
            return result;
          goto LABEL_16;
        }
      }
      else
      {
        v11 = 0;
        v12 = 0;
        v13 = 0;
        v22 = *v7;
        while ( 1 )
        {
          v14 = (float *)((char *)a2 + v11 * 4);
          v15 = (float *)&v7[v11];
          if ( *(float *)&v7[v11 + 81] != *(float *)((char *)a2 + v11 * 4 + 324)
            || v15[82] != v14[82]
            || v15[83] != v14[83] )
          {
            break;
          }
          if ( strcmp((const char *)&v7[v12 + 1], (const char *)a2 + v12 * 4 + 4)
            || strcmp((const char *)&v7[v12 + 7], (const char *)a2 + v12 * 4 + 28) )
          {
            result = v22;
            goto LABEL_16;
          }
          v10 = v22;
          ++v13;
          v11 += 3;
          v12 += 10;
          if ( v13 >= v22 )
            goto LABEL_12;
        }
      }
      result = v10;
    }
  }
LABEL_16:
  *v7 = result;
  if ( result >= 1 )
  {
    v16 = 0;
    v17 = 81;
    v18 = 0;
    do
    {
      v19 = &v7[v17];
      v20 = *(_QWORD *)((char *)a2 + v17 * 4);
      v19[2] = *(_DWORD *)((char *)a2 + v17 * 4 + 8);
      *(_QWORD *)v19 = v20;
      strcpy((char *)&v7[v16 + 1], (const char *)a2 + v16 * 4 + 4);
      strcpy((char *)&v7[v16 + 7], (const char *)a2 + v16 * 4 + 28);
      ++v18;
      v17 += 3;
      v16 += 10;
    }
    while ( v18 < *v7 );
  }
  *((float *)this + 5) = a3;
  *((float *)this + 6) = a4;
  v21 = *((unsigned __int8 *)this + 32);
  *((_WORD *)this + 9) = 0;
  *((_WORD *)this + 7) = 0;
  result = v21 | 1;
  *((_BYTE *)this + 32) = result;
  return result;
}


// ============================================================

// Address: 0x525254
// Original: _ZN29CTaskComplexFollowPatrolRouteD2Ev
// Demangled: CTaskComplexFollowPatrolRoute::~CTaskComplexFollowPatrolRoute()
void __fastcall CTaskComplexFollowPatrolRoute::~CTaskComplexFollowPatrolRoute(CTaskComplexFollowPatrolRoute *this)
{
  void *v2; // r0

  v2 = (void *)*((_DWORD *)this + 7);
  *(_DWORD *)this = &off_66C478;
  if ( v2 )
    CPatrolRoute::operator delete(v2);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x52527c
// Original: _ZN29CTaskComplexFollowPatrolRouteD0Ev
// Demangled: CTaskComplexFollowPatrolRoute::~CTaskComplexFollowPatrolRoute()
void __fastcall CTaskComplexFollowPatrolRoute::~CTaskComplexFollowPatrolRoute(CTaskComplexFollowPatrolRoute *this)
{
  void *v2; // r0
  void *v3; // r0

  v2 = (void *)*((_DWORD *)this + 7);
  *(_DWORD *)this = &off_66C478;
  if ( v2 )
    CPatrolRoute::operator delete(v2);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v3);
}


// ============================================================

// Address: 0x5252a8
// Original: _ZN29CTaskComplexFollowPatrolRoute13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexFollowPatrolRoute::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexFollowPatrolRoute::MakeAbortable(
        CTaskComplexFollowPatrolRoute *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  int v5; // r12
  int v6; // r0
  char *v7; // r4
  __int64 v8; // d16
  int result; // r0

  if ( !a3 )
    **((_DWORD **)this + 7) = 0;
  v5 = *((_DWORD *)a2 + 5);
  v6 = *((_DWORD *)this + 2);
  v7 = (char *)(v5 + 48);
  if ( !v5 )
    v7 = (char *)a2 + 4;
  v8 = *(_QWORD *)v7;
  *((_DWORD *)this + 11) = *((_DWORD *)v7 + 2);
  *(_QWORD *)((char *)this + 36) = v8;
  result = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 28))(v6);
  *((_BYTE *)this + 32) = *((_BYTE *)this + 32) & 0xFD | (2 * result);
  return result;
}


// ============================================================

// Address: 0x5252f4
// Original: _ZN29CTaskComplexFollowPatrolRoute14GetSubTaskTypeEv
// Demangled: CTaskComplexFollowPatrolRoute::GetSubTaskType(void)
int __fastcall CTaskComplexFollowPatrolRoute::GetSubTaskType(CTaskComplexFollowPatrolRoute *this)
{
  CPatrolRoute *v2; // r0
  int v3; // r1
  __int16 v4; // r2
  int v5; // r3
  int v6; // r1
  int v7; // r2

  v2 = (CPatrolRoute *)*((_DWORD *)this + 7);
  v3 = *(_DWORD *)v2;
  if ( !*(_DWORD *)v2 )
    return 1302;
  v4 = *((_WORD *)this + 9);
  while ( 1 )
  {
    v5 = v4 + 1;
    if ( v5 < v3 )
      return 900;
    if ( v5 == v3 )
      return 903;
    if ( v3 != v4 )
      return 200;
    v6 = *((unsigned __int16 *)this + 7);
    v7 = *((__int16 *)this + 6);
    *((_WORD *)this + 7) = v6 + 1;
    switch ( v7 )
    {
      case 0:
        return 1302;
      case 1:
        if ( v6 )
          return 1302;
        goto LABEL_8;
      case 2:
LABEL_8:
        CPatrolRoute::Reverse(v2);
        break;
      case 3:
        break;
      default:
        return 200;
    }
    v2 = (CPatrolRoute *)*((_DWORD *)this + 7);
    v4 = 0;
    *((_WORD *)this + 9) = 0;
    v3 = *(_DWORD *)v2;
    if ( !*(_DWORD *)v2 )
      return 1302;
  }
}


// ============================================================

// Address: 0x525350
// Original: _ZN29CTaskComplexFollowPatrolRoute13CreateSubTaskEi
// Demangled: CTaskComplexFollowPatrolRoute::CreateSubTask(int)
int __fastcall CTaskComplexFollowPatrolRoute::CreateSubTask(CTaskComplexFollowPatrolRoute *this, int a2)
{
  int v3; // r4
  _DWORD *v4; // r0
  int v5; // r3
  __int16 v6; // r1
  unsigned int v7; // r1
  _DWORD *v8; // r0
  int v9; // r8
  unsigned int v10; // r1
  _DWORD *v11; // r0
  unsigned int v12; // r1
  int v13; // r0
  int v14; // r6
  int v15; // r5
  int v16; // r6
  int v17; // r8
  int v18; // r9
  int v19; // r5
  char v20; // r3
  int v21; // r0
  int v22; // r2
  __int64 v23; // d16
  int v24; // r0
  bool v25; // zf
  float v26; // s16
  int v27; // r6
  int v28; // r9
  int v29; // r8
  int v30; // r5
  char v31; // r1
  float v32; // s0
  char v33; // r0
  float *v34; // r1
  float *v35; // r1
  __int64 v36; // d16
  __int64 v38; // [sp+18h] [bp-30h]
  int v39; // [sp+20h] [bp-28h]

  v3 = 0;
  if ( a2 < 900 )
  {
    if ( a2 == 200 )
    {
      v3 = CTask::operator new((CTask *)byte_8, 0xC8u);
      CTaskSimple::CTaskSimple((CTaskSimple *)v3);
      *(_DWORD *)v3 = &off_669000;
    }
    else if ( a2 == 401 )
    {
      v14 = *((_DWORD *)this + 7);
      v15 = *((__int16 *)this + 9);
      v3 = CTask::operator new((CTask *)&dword_64, 0x191u);
      CTaskSimpleRunNamedAnim::CTaskSimpleRunNamedAnim(
        (CTaskSimpleRunNamedAnim *)v3,
        (const char *)(v14 + 40 * v15 + 4),
        (const char *)(v14 + 40 * v15 + 28),
        88,
        4.0,
        -1,
        0,
        0,
        0,
        0);
    }
  }
  else
  {
    switch ( a2 )
    {
      case 900:
        v3 = CTask::operator new((CTask *)&word_2C, 0x384u);
        v16 = *((__int16 *)this + 8);
        v17 = *((__int16 *)this + 9);
        v18 = *((_DWORD *)this + 5);
        v19 = *((_DWORD *)this + 7);
        CTaskSimple::CTaskSimple((CTaskSimple *)v3);
        *(_DWORD *)(v3 + 8) = v16;
        *(_DWORD *)v3 = &off_66C0B0;
        v20 = *(_BYTE *)(v3 + 29);
        v21 = v19 + 12 * v17;
        v22 = *(_DWORD *)(v21 + 332);
        v23 = *(_QWORD *)(v21 + 324);
        LOBYTE(v21) = *(_BYTE *)(v3 + 28);
        *(_DWORD *)(v3 + 20) = v22;
        *(_DWORD *)v3 = &off_66C0E4;
        *(_DWORD *)(v3 + 24) = v18;
        *(_BYTE *)(v3 + 29) = v20 & 0xE0;
        *(_BYTE *)(v3 + 28) = v21 & 0xC0;
        *(_QWORD *)(v3 + 12) = v23;
        break;
      case 903:
        v24 = *((__int16 *)this + 6);
        v25 = v24 == 3;
        if ( v24 != 3 )
          v25 = v24 == 2;
        if ( v25 )
        {
          v26 = 0.0;
        }
        else
        {
          v26 = *((float *)this + 6);
          if ( v24 == 1 && !*((_WORD *)this + 7) )
            v26 = 0.0;
        }
        v3 = CTask::operator new((CTask *)&word_28, 0x387u);
        v27 = *((__int16 *)this + 8);
        v28 = *((__int16 *)this + 9);
        v29 = *((_DWORD *)this + 5);
        v30 = *((_DWORD *)this + 7);
        CTaskComplex::CTaskComplex((CTaskComplex *)v3);
        *(_DWORD *)(v3 + 12) = v27;
        v31 = *(_BYTE *)(v3 + 36);
        v32 = *(float *)(v3 + 16);
        *(_DWORD *)v3 = &off_66C14C;
        v33 = v31 & 0xE4;
        *(_BYTE *)(v3 + 36) = v31 & 0xE4;
        v34 = (float *)(v30 + 12 * v28);
        if ( v32 != v34[81]
          || *(float *)(v3 + 20) != v34[82]
          || *(float *)(v3 + 24) != v34[83]
          || *(float *)(v3 + 32) != v26 )
        {
          v35 = v34 + 81;
          v36 = *(_QWORD *)v35;
          *(float *)(v3 + 24) = v35[2];
          *(_QWORD *)(v3 + 16) = v36;
          *(float *)(v3 + 32) = v26;
          *(_DWORD *)(v3 + 28) = v29;
          *(_BYTE *)(v3 + 36) = v33 | 4;
        }
        break;
      case 906:
        v4 = (_DWORD *)*((_DWORD *)this + 7);
        if ( *v4 )
        {
          v5 = *((__int16 *)this + 9);
          v6 = *((_WORD *)this + 9);
          if ( *v4 == v5 )
          {
            v6 = v5 - 1;
            *((_WORD *)this + 9) = v5 - 1;
          }
          v7 = 3 * v6;
          v8 = &v4[v7];
          v39 = v8[83];
          v38 = *(_QWORD *)(v8 + 81);
          v3 = CTask::operator new((CTask *)&dword_60, v7);
          v9 = *((__int16 *)this + 8);
          CTaskComplex::CTaskComplex((CTaskComplex *)v3);
          v10 = *(unsigned __int8 *)(v3 + 76);
          *(_DWORD *)v3 = &off_66C278;
          *(_DWORD *)(v3 + 56) = 0;
          *(_DWORD *)(v3 + 60) = -1;
          *(_DWORD *)(v3 + 20) = v39;
          *(_DWORD *)(v3 + 24) = v9;
          *(_DWORD *)(v3 + 28) = 1056964608;
          *(_DWORD *)(v3 + 32) = 1077936128;
          *(_DWORD *)(v3 + 36) = 0x40000000;
          *(_WORD *)(v3 + 40) = -1;
          *(_WORD *)(v3 + 52) = -1;
          *(_WORD *)(v3 + 72) = 0;
          *(_QWORD *)(v3 + 80) = 0LL;
          *(_QWORD *)(v3 + 88) = 0LL;
          *(_DWORD *)(v3 + 64) = 0;
          *(_DWORD *)(v3 + 68) = 0;
          *(_QWORD *)(v3 + 12) = v38;
          *(_BYTE *)(v3 + 76) = v10 & 0x96 | 8;
          v11 = (_DWORD *)CPointRoute::operator new((CPointRoute *)&dword_64, v10);
          *v11 = 0;
          *(_DWORD *)(v3 + 48) = v11;
          v13 = CNodeRoute::operator new((CNodeRoute *)&dword_24, v12);
          *(_DWORD *)v13 = 0;
          *(_WORD *)(v13 + 4) = -1;
          *(_WORD *)(v13 + 8) = -1;
          *(_WORD *)(v13 + 12) = -1;
          *(_WORD *)(v13 + 16) = -1;
          *(_WORD *)(v13 + 20) = -1;
          *(_WORD *)(v13 + 24) = -1;
          *(_WORD *)(v13 + 28) = -1;
          *(_WORD *)(v13 + 32) = -1;
          *(_WORD *)(v3 + 52) = -1;
          *(_DWORD *)(v3 + 44) = v13;
          *(_DWORD *)(v3 + 40) = EmptyNodeAddress;
        }
        else
        {
          return 0;
        }
        break;
    }
  }
  return v3;
}


// ============================================================

// Address: 0x52560c
// Original: _ZN29CTaskComplexFollowPatrolRoute17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexFollowPatrolRoute::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexFollowPatrolRoute::CreateNextSubTask(CTaskComplexFollowPatrolRoute *this, CPed *a2)
{
  CPatrolRoute *v3; // r0
  int v4; // r1
  __int16 v5; // r2
  int v6; // r3
  int v7; // r1
  int v8; // r2
  int v9; // r1
  _WORD *v10; // r6
  CPatrolRoute *v11; // r0
  CPatrolRoute **v12; // r5
  int v13; // r1
  __int16 v14; // r3
  int v15; // r2
  int v16; // r1
  int v17; // r3
  int v18; // r1
  int v19; // r2

  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 906 )
  {
    v3 = (CPatrolRoute *)*((_DWORD *)this + 7);
    v4 = *(_DWORD *)v3;
    if ( *(_DWORD *)v3 )
    {
      v5 = *((_WORD *)this + 9);
      while ( 1 )
      {
        v6 = v5 + 1;
        if ( v6 < v4 )
          break;
        if ( v6 == v4 )
          goto LABEL_30;
        if ( v4 != v5 )
          goto LABEL_28;
        v7 = *((unsigned __int16 *)this + 7);
        v8 = *((__int16 *)this + 6);
        *((_WORD *)this + 7) = v7 + 1;
        switch ( v8 )
        {
          case 0:
            goto LABEL_26;
          case 1:
            if ( v7 )
              goto LABEL_26;
            goto LABEL_9;
          case 2:
LABEL_9:
            CPatrolRoute::Reverse(v3);
            break;
          case 3:
            break;
          default:
            goto LABEL_28;
        }
        v3 = (CPatrolRoute *)*((_DWORD *)this + 7);
        v5 = 0;
        *((_WORD *)this + 9) = 0;
        v4 = *(_DWORD *)v3;
        if ( !*(_DWORD *)v3 )
          goto LABEL_26;
      }
LABEL_29:
      v13 = 900;
      return CTaskComplexFollowPatrolRoute::CreateSubTask(this, v13);
    }
    goto LABEL_26;
  }
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 200 )
  {
LABEL_26:
    v13 = 1302;
    return CTaskComplexFollowPatrolRoute::CreateSubTask(this, v13);
  }
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 401 )
  {
    v10 = (_WORD *)((char *)this + 18);
    LOWORD(v9) = *((_WORD *)this + 9);
    v12 = (CPatrolRoute **)((char *)this + 28);
    v11 = (CPatrolRoute *)*((_DWORD *)this + 7);
    goto LABEL_17;
  }
  v12 = (CPatrolRoute **)((char *)this + 28);
  v11 = (CPatrolRoute *)*((_DWORD *)this + 7);
  v10 = (_WORD *)((char *)this + 18);
  v9 = *((__int16 *)this + 9);
  if ( !*((_BYTE *)v11 + 40 * v9 + 4) )
  {
LABEL_17:
    v14 = v9 + 1;
    *v10 = v9 + 1;
    v15 = *(_DWORD *)v11;
    if ( *(_DWORD *)v11 )
    {
      while ( 1 )
      {
        v16 = v14;
        v17 = v14 + 1;
        if ( v17 < v15 )
          goto LABEL_29;
        if ( v17 == v15 )
        {
LABEL_30:
          v13 = 903;
          return CTaskComplexFollowPatrolRoute::CreateSubTask(this, v13);
        }
        if ( v15 != v16 )
        {
LABEL_28:
          v13 = 200;
          return CTaskComplexFollowPatrolRoute::CreateSubTask(this, v13);
        }
        v18 = *((unsigned __int16 *)this + 7);
        v19 = *((__int16 *)this + 6);
        *((_WORD *)this + 7) = v18 + 1;
        switch ( v19 )
        {
          case 0:
            goto LABEL_26;
          case 1:
            if ( v18 )
              goto LABEL_26;
            goto LABEL_23;
          case 2:
LABEL_23:
            CPatrolRoute::Reverse(v11);
            break;
          case 3:
            break;
          default:
            goto LABEL_28;
        }
        v14 = 0;
        v13 = 1302;
        *v10 = 0;
        v11 = *v12;
        v15 = *(_DWORD *)*v12;
        if ( !v15 )
          return CTaskComplexFollowPatrolRoute::CreateSubTask(this, v13);
      }
    }
    goto LABEL_26;
  }
  v13 = 401;
  return CTaskComplexFollowPatrolRoute::CreateSubTask(this, v13);
}


// ============================================================

// Address: 0x525720
// Original: _ZN29CTaskComplexFollowPatrolRoute18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexFollowPatrolRoute::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexFollowPatrolRoute::CreateFirstSubTask(int **this, CPed *a2)
{
  CTaskComplexFollowPatrolRoute *v2; // r4
  char v3; // r2
  int *v4; // r0
  int v5; // r10
  int v6; // r2
  char *v7; // r11
  float v8; // s16
  int v9; // r6
  int v10; // r5
  int v11; // r8
  int v12; // r4
  float *v13; // r9
  float v14; // s0
  float *v15; // r0
  float v16; // s4
  float v17; // s18
  float v18; // s6
  float v19; // s20
  float v20; // s22
  float v21; // s2
  float v22; // s10
  float v23; // s8
  float v24; // s4
  float v25; // s3
  int v26; // r1
  float v27; // s0
  int v28; // r0
  float v29; // s4
  float32x2_t v30; // d17
  float32x2_t v31; // d17
  unsigned __int64 v32; // d3
  float v33; // s4
  char v34; // r0
  CPatrolRoute *v35; // r0
  int v36; // r1
  int v37; // r3
  int v38; // r1
  int v39; // r2
  int v40; // r1
  CTaskComplexFollowPatrolRoute *v42; // [sp+0h] [bp-50h]
  float v43; // [sp+4h] [bp-4Ch] BYREF
  float v44; // [sp+8h] [bp-48h]
  float v45; // [sp+Ch] [bp-44h]

  v2 = (CTaskComplexFollowPatrolRoute *)this;
  v3 = *((_BYTE *)this + 32);
  v4 = this[7];
  *((_BYTE *)v2 + 32) = v3 & 0xFE;
  v5 = *v4;
  if ( *v4 )
  {
    v6 = *((_DWORD *)a2 + 5);
    v7 = (char *)(v6 + 48);
    if ( !v6 )
      v7 = (char *)a2 + 4;
    if ( v5 < 1 )
    {
      LOWORD(v9) = -1;
    }
    else
    {
      v8 = 3.4028e38;
      v9 = -1;
      v10 = 83;
      v11 = 1;
      v42 = v2;
      while ( 1 )
      {
        v12 = v11;
        if ( v5 == v11 )
          v12 = 0;
        v13 = (float *)&v4[v10];
        v14 = *(float *)&v4[v10 - 2];
        v15 = (float *)&v4[3 * v12];
        v16 = v15[82];
        v17 = v15[81] - v14;
        v18 = v15[83];
        v43 = v17;
        v19 = v16 - *(v13 - 1);
        v44 = v19;
        v20 = v18 - *v13;
        v45 = v20;
        CVector::Normalise((CVector *)&v43);
        v21 = *(v13 - 2);
        v22 = *(v13 - 1);
        v23 = *((float *)v7 + 1);
        v24 = *((float *)v7 + 2);
        v25 = (float)((float)((float)(*(float *)v7 - v21) * v43) + (float)((float)(v23 - v22) * v44))
            + (float)((float)(v24 - *v13) * v45);
        if ( v25 > 0.0
          && v25 < sqrtf((float)(v20 * v20) + (float)((float)(v17 * v17) + (float)(v19 * v19)))
          && (float)((float)((float)(v24 - (float)(*v13 + (float)(v45 * v25)))
                           * (float)(v24 - (float)(*v13 + (float)(v45 * v25))))
                   + (float)((float)((float)(*(float *)v7 - (float)(v21 + (float)(v43 * v25)))
                                   * (float)(*(float *)v7 - (float)(v21 + (float)(v43 * v25))))
                           + (float)((float)(v23 - (float)(v22 + (float)(v44 * v25)))
                                   * (float)(v23 - (float)(v22 + (float)(v44 * v25)))))) < (float)(v8 * v8) )
        {
          v8 = (float)((float)(v24 - (float)(*v13 + (float)(v45 * v25)))
                     * (float)(v24 - (float)(*v13 + (float)(v45 * v25))))
             + (float)((float)((float)(*(float *)v7 - (float)(v21 + (float)(v43 * v25)))
                             * (float)(*(float *)v7 - (float)(v21 + (float)(v43 * v25))))
                     + (float)((float)(v23 - (float)(v22 + (float)(v44 * v25)))
                             * (float)(v23 - (float)(v22 + (float)(v44 * v25)))));
          v9 = v12;
        }
        v2 = v42;
        if ( v5 == v11 )
          break;
        ++v11;
        v4 = (int *)*((_DWORD *)v42 + 7);
        v10 += 3;
      }
      if ( v9 == -1 )
      {
        v26 = 0;
        v27 = 3.4028e38;
        LOWORD(v9) = -1;
        v28 = *((_DWORD *)v42 + 7) + 324;
        do
        {
          v29 = *(float *)v28;
          v30.n64_u64[0] = *(unsigned __int64 *)(v28 + 4);
          v28 += 12;
          v31.n64_u64[0] = vsub_f32(*(float32x2_t *)(v7 + 4), v30).n64_u64[0];
          v32 = vmul_f32(v31, v31).n64_u64[0];
          v33 = (float)((float)((float)(*(float *)v7 - v29) * (float)(*(float *)v7 - v29)) + *(float *)&v32)
              + *((float *)&v32 + 1);
          if ( v33 < (float)(v27 * v27) )
          {
            v27 = v33;
            LOWORD(v9) = v26;
          }
          ++v26;
        }
        while ( v5 != v26 );
      }
    }
    v34 = *((_BYTE *)v2 + 32);
    *((_WORD *)v2 + 9) = v9;
    *((_BYTE *)v2 + 32) = v34 & 0xFD;
    if ( (v34 & 2) != 0 )
    {
      v40 = 906;
    }
    else
    {
      v35 = (CPatrolRoute *)*((_DWORD *)v2 + 7);
      while ( 1 )
      {
        v36 = *(_DWORD *)v35;
        if ( !*(_DWORD *)v35 )
        {
LABEL_33:
          v40 = 1302;
          return CTaskComplexFollowPatrolRoute::CreateSubTask(v2, v40);
        }
        v37 = (__int16)v9 + 1;
        if ( v37 < v36 )
        {
          v40 = 900;
          return CTaskComplexFollowPatrolRoute::CreateSubTask(v2, v40);
        }
        if ( v37 == v36 )
          break;
        if ( v36 != (__int16)v9 )
          goto LABEL_31;
        v38 = *((unsigned __int16 *)v2 + 7);
        v39 = *((__int16 *)v2 + 6);
        *((_WORD *)v2 + 7) = v38 + 1;
        switch ( v39 )
        {
          case 0:
            goto LABEL_33;
          case 1:
            if ( v38 )
              goto LABEL_33;
            goto LABEL_30;
          case 2:
LABEL_30:
            CPatrolRoute::Reverse(v35);
            break;
          case 3:
            break;
          default:
            goto LABEL_31;
        }
        LOWORD(v9) = 0;
        v35 = (CPatrolRoute *)*((_DWORD *)v2 + 7);
        *((_WORD *)v2 + 9) = 0;
      }
      v40 = 903;
    }
  }
  else
  {
LABEL_31:
    v40 = 200;
  }
  return CTaskComplexFollowPatrolRoute::CreateSubTask(v2, v40);
}


// ============================================================

// Address: 0x525970
// Original: _ZN29CTaskComplexFollowPatrolRoute14ControlSubTaskEP4CPed
// Demangled: CTaskComplexFollowPatrolRoute::ControlSubTask(CPed *)
int __fastcall CTaskComplexFollowPatrolRoute::ControlSubTask(CTaskComplexFollowPatrolRoute *this, CPed *a2)
{
  int v3; // r2

  if ( !(*((unsigned __int8 *)this + 32) << 30) )
    return *((_DWORD *)this + 2);
  v3 = *(_DWORD *)this;
  *((_WORD *)this + 9) = 0;
  return (*(int (__fastcall **)(CTaskComplexFollowPatrolRoute *, CPed *))(v3 + 44))(this, a2);
}


// ============================================================

// Address: 0x528570
// Original: _ZNK29CTaskComplexFollowPatrolRoute5CloneEv
// Demangled: CTaskComplexFollowPatrolRoute::Clone(void)
void __fastcall CTaskComplexFollowPatrolRoute::Clone(CTaskComplexFollowPatrolRoute *this, unsigned int a2)
{
  CTaskComplexFollowPatrolRoute *v3; // r0

  v3 = (CTaskComplexFollowPatrolRoute *)CTask::operator new((CTask *)&word_30, a2);
  CTaskComplexFollowPatrolRoute::CTaskComplexFollowPatrolRoute(
    v3,
    *((__int16 *)this + 8),
    *((const CPatrolRoute **)this + 7),
    *((__int16 *)this + 6),
    *((float *)this + 5),
    *((float *)this + 6));
}


// ============================================================

// Address: 0x5285a0
// Original: _ZNK29CTaskComplexFollowPatrolRoute11GetTaskTypeEv
// Demangled: CTaskComplexFollowPatrolRoute::GetTaskType(void)
int __fastcall CTaskComplexFollowPatrolRoute::GetTaskType(CTaskComplexFollowPatrolRoute *this)
{
  return 931;
}


// ============================================================

// Address: 0x5285a8
// Original: _ZN29CTaskComplexFollowPatrolRoute9SerializeEv
// Demangled: CTaskComplexFollowPatrolRoute::Serialize(void)
void __fastcall CTaskComplexFollowPatrolRoute::Serialize(CTaskComplexFollowPatrolRoute *this)
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
  int v16; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexFollowPatrolRoute *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexFollowPatrolRoute *))(*(_DWORD *)this + 20))(this) == 931 )
  {
    if ( UseDataFence )
      AddDataFence();
    v5 = (CGenericGameStorage *)malloc(2u);
    *(_WORD *)v5 = *((_WORD *)this + 8);
    CGenericGameStorage::_SaveDataToWorkBuffer(v5, (char *)&stderr + 2, v6);
    free(v5);
    if ( UseDataFence )
      AddDataFence();
    v7 = (const void *)*((_DWORD *)this + 7);
    v8 = malloc(0x1A4u);
    memcpy_1(v8, v7, 0x1A4u);
    CGenericGameStorage::_SaveDataToWorkBuffer((CGenericGameStorage *)v8, &elf_hash_bucket[42], v9);
    free(v8);
    if ( UseDataFence )
      AddDataFence();
    v10 = (CGenericGameStorage *)malloc(2u);
    *(_WORD *)v10 = *((_WORD *)this + 6);
    CGenericGameStorage::_SaveDataToWorkBuffer(v10, (char *)&stderr + 2, v11);
    free(v10);
    if ( UseDataFence )
      AddDataFence();
    v12 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v12 = *((_DWORD *)this + 5);
    CGenericGameStorage::_SaveDataToWorkBuffer(v12, byte_4, v13);
    free(v12);
    if ( UseDataFence )
      AddDataFence();
    v14 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v14 = *((_DWORD *)this + 6);
    CGenericGameStorage::_SaveDataToWorkBuffer(v14, byte_4, v15);
    j_free(v14);
  }
  else
  {
    v16 = (*(int (__fastcall **)(CTaskComplexFollowPatrolRoute *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(931, v16);
  }
}


// ============================================================
