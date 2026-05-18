
// Address: 0x192c70
// Original: j__ZN22CScriptResourceManager24HasResourceBeenRequestedEij
// Demangled: CScriptResourceManager::HasResourceBeenRequested(int,uint)
// attributes: thunk
int __fastcall CScriptResourceManager::HasResourceBeenRequested(CScriptResourceManager *this, int a2, unsigned int a3)
{
  return _ZN22CScriptResourceManager24HasResourceBeenRequestedEij(this, a2, a3);
}


// ============================================================

// Address: 0x193120
// Original: j__ZN22CScriptResourceManager4SaveEv
// Demangled: CScriptResourceManager::Save(void)
// attributes: thunk
int __fastcall CScriptResourceManager::Save(CScriptResourceManager *this)
{
  return _ZN22CScriptResourceManager4SaveEv(this);
}


// ============================================================

// Address: 0x1993f0
// Original: j__ZN22CScriptResourceManager10InitialiseEv
// Demangled: CScriptResourceManager::Initialise(void)
// attributes: thunk
int __fastcall CScriptResourceManager::Initialise(CScriptResourceManager *this)
{
  return _ZN22CScriptResourceManager10InitialiseEv(this);
}


// ============================================================

// Address: 0x19beb0
// Original: j__ZN22CScriptResourceManager20AddToResourceManagerEijP14CRunningScript
// Demangled: CScriptResourceManager::AddToResourceManager(int,uint,CRunningScript *)
// attributes: thunk
int __fastcall CScriptResourceManager::AddToResourceManager(
        CScriptResourceManager *this,
        int a2,
        unsigned int a3,
        CRunningScript *a4)
{
  return _ZN22CScriptResourceManager20AddToResourceManagerEijP14CRunningScript(this, a2, a3, a4);
}


// ============================================================

// Address: 0x19cb54
// Original: j__ZN22CScriptResourceManager25RemoveFromResourceManagerEijP14CRunningScript
// Demangled: CScriptResourceManager::RemoveFromResourceManager(int,uint,CRunningScript *)
// attributes: thunk
int __fastcall CScriptResourceManager::RemoveFromResourceManager(
        CScriptResourceManager *this,
        int a2,
        unsigned int a3,
        CRunningScript *a4)
{
  return _ZN22CScriptResourceManager25RemoveFromResourceManagerEijP14CRunningScript(this, a2, a3, a4);
}


// ============================================================

// Address: 0x19f1bc
// Original: j__ZN22CScriptResourceManager4LoadEv
// Demangled: CScriptResourceManager::Load(void)
// attributes: thunk
int __fastcall CScriptResourceManager::Load(CScriptResourceManager *this)
{
  return _ZN22CScriptResourceManager4LoadEv(this);
}


// ============================================================

// Address: 0x335134
// Original: _ZN22CScriptResourceManager10InitialiseEv
// Demangled: CScriptResourceManager::Initialise(void)
__int64 __fastcall CScriptResourceManager::Initialise(__int64 this)
{
  int i; // r3
  int v2; // r2

  HIDWORD(this) = 0;
  for ( i = 0; i != 900; i += 12 )
  {
    *(_DWORD *)(this + i) = -1;
    v2 = this + i;
    *(_WORD *)(v2 + 8) = 0;
    *(_DWORD *)(v2 + 4) = 0;
  }
  return this;
}


// ============================================================

// Address: 0x335150
// Original: _ZN22CScriptResourceManager20AddToResourceManagerEijP14CRunningScript
// Demangled: CScriptResourceManager::AddToResourceManager(int,uint,CRunningScript *)
int __fastcall CScriptResourceManager::AddToResourceManager(int this, int a2, unsigned int a3, CRunningScript *a4)
{
  int v4; // r12
  int v5; // r4
  int v6; // lr
  int v7; // r6
  int v8; // r5
  bool v9; // zf

  v4 = this + 4;
  v5 = -1;
  v6 = -1;
  while ( 1 )
  {
    v7 = *(_DWORD *)(v4 - 4);
    v8 = *(unsigned __int16 *)(v4 + 4);
    v9 = v7 == a2;
    if ( v7 == a2 )
      v9 = v8 == a3;
    if ( v9 && *(CRunningScript **)v4 == a4 )
      break;
    ++v5;
    v4 += 12;
    if ( !v8 )
      v6 = v5;
    if ( v5 >= 74 )
    {
      if ( v6 != -1 )
      {
        *(_DWORD *)(this + 12 * v6) = a2;
        this += 12 * v6;
        *(_WORD *)(this + 8) = a3;
        *(_DWORD *)(this + 4) = a4;
      }
      return this;
    }
  }
  return this;
}


// ============================================================

// Address: 0x3351aa
// Original: _ZN22CScriptResourceManager25RemoveFromResourceManagerEijP14CRunningScript
// Demangled: CScriptResourceManager::RemoveFromResourceManager(int,uint,CRunningScript *)
bool __fastcall CScriptResourceManager::RemoveFromResourceManager(
        CScriptResourceManager *this,
        int a2,
        unsigned int a3,
        CRunningScript *a4)
{
  char *v4; // r4
  int v5; // lr
  int v6; // r12
  int i; // r5
  int v8; // r6
  bool v9; // zf
  int v10; // r6
  char *v11; // r0

  v4 = (char *)this + 4;
  v5 = -1;
  v6 = 0;
  for ( i = 0; i != 75; ++i )
  {
    v8 = *((_DWORD *)v4 - 1);
    v9 = v8 == a2;
    if ( v8 == a2 )
      v9 = *((unsigned __int16 *)v4 + 2) == a3;
    if ( v9 )
    {
      v10 = 0;
      if ( *(CRunningScript **)v4 == a4 )
        v5 = i;
      else
        v10 = 1;
      v6 += v10;
    }
    v4 += 12;
  }
  if ( v5 != -1 )
  {
    *((_DWORD *)this + 3 * v5) = -1;
    v11 = (char *)this + 12 * v5;
    *((_WORD *)v11 + 4) = 0;
    *((_DWORD *)v11 + 1) = 0;
  }
  return v6 == 0;
}


// ============================================================

// Address: 0x335212
// Original: _ZN22CScriptResourceManager24HasResourceBeenRequestedEij
// Demangled: CScriptResourceManager::HasResourceBeenRequested(int,uint)
int __fastcall CScriptResourceManager::HasResourceBeenRequested(CScriptResourceManager *this, int a2, unsigned int a3)
{
  unsigned __int16 *v3; // r0
  unsigned int i; // r12
  int v5; // r3
  bool v6; // zf

  v3 = (unsigned __int16 *)((char *)this + 8);
  for ( i = 0; i < 0x4B; ++i )
  {
    v5 = *((_DWORD *)v3 - 2);
    v6 = v5 == a2;
    if ( v5 == a2 )
      v6 = *v3 == a3;
    if ( v6 )
      return 1;
    v3 += 6;
  }
  return 0;
}


// ============================================================

// Address: 0x48b630
// Original: _ZN22CScriptResourceManager4SaveEv
// Demangled: CScriptResourceManager::Save(void)
int __fastcall CScriptResourceManager::Save(CScriptResourceManager *this)
{
  int v2; // r1
  int v3; // r6
  int v4; // r2
  bool v5; // zf
  CGenericGameStorage *v6; // r5
  int v7; // r2
  int result; // r0
  char *v9; // r6
  int i; // r9
  CGenericGameStorage *v11; // r4
  int v12; // r2
  CRunningScript *v13; // r1
  CGenericGameStorage *v14; // r5
  int v15; // r2
  CGenericGameStorage *v16; // r4
  int v17; // r2
  CGenericGameStorage *v18; // r4
  int v19; // r2
  char *v20; // r8
  void *v21; // r5
  CGenericGameStorage *v22; // r4
  int v23; // r2
  int v24; // r2

  v2 = 0;
  v3 = 0;
  do
  {
    if ( *(_WORD *)((char *)this + v2 + 8) )
    {
      v4 = *(_DWORD *)((char *)this + v2 + 4);
      v5 = *(_BYTE *)(v4 + 231) == 0;
      if ( !*(_BYTE *)(v4 + 231) )
        v5 = *(unsigned __int8 *)(v4 + 233) == 255;
      if ( v5 )
      {
        ++v3;
      }
      else if ( SaveStreamedScripts )
      {
        ++v3;
      }
    }
    v2 += 12;
  }
  while ( v2 != 900 );
  v6 = (CGenericGameStorage *)malloc(2u);
  *(_WORD *)v6 = v3;
  CGenericGameStorage::_SaveDataToWorkBuffer(v6, (char *)&stderr + 2, v7);
  free(v6);
  result = 0xFFFF;
  if ( (_WORD)v3 )
  {
    v9 = (char *)this + 4;
    for ( i = 0; i != 75; ++i )
    {
      result = *((unsigned __int16 *)v9 + 2);
      if ( *((_WORD *)v9 + 2) )
      {
        if ( *(_BYTE *)(*(_DWORD *)v9 + 231) )
        {
          result = (unsigned __int8)SaveStreamedScripts;
          if ( SaveStreamedScripts )
            goto LABEL_18;
        }
        else if ( *(unsigned __int8 *)(*(_DWORD *)v9 + 233) == 255
               || (result = (unsigned __int8)SaveStreamedScripts, SaveStreamedScripts) )
        {
LABEL_18:
          v11 = (CGenericGameStorage *)malloc(2u);
          *(_WORD *)v11 = i;
          CGenericGameStorage::_SaveDataToWorkBuffer(v11, (char *)&stderr + 2, v12);
          free(v11);
          LOWORD(v11) = CTheScripts::GetScriptIndexFromPointer(*(CTheScripts **)v9, v13);
          v14 = (CGenericGameStorage *)malloc(2u);
          *(_WORD *)v14 = (_WORD)v11;
          CGenericGameStorage::_SaveDataToWorkBuffer(v14, (char *)&stderr + 2, v15);
          free(v14);
          v16 = (CGenericGameStorage *)malloc(4u);
          *(_DWORD *)v16 = *((_DWORD *)v9 - 1);
          CGenericGameStorage::_SaveDataToWorkBuffer(v16, byte_4, v17);
          free(v16);
          v18 = (CGenericGameStorage *)malloc(2u);
          *(_WORD *)v18 = *((_WORD *)v9 + 2);
          CGenericGameStorage::_SaveDataToWorkBuffer(v18, (char *)&stderr + 2, v19);
          free(v18);
          result = *((unsigned __int16 *)v9 + 2);
          if ( result == 2 )
          {
            result = *((_DWORD *)v9 - 1);
            if ( (unsigned int)(result - 290) <= 9 )
            {
              v20 = (char *)(LODWORD(CModelInfo::ms_modelInfoPtrs[result]) + 8);
              v21 = (void *)(strlen(v20) + 1);
              v22 = (CGenericGameStorage *)malloc(4u);
              *(_DWORD *)v22 = v21;
              CGenericGameStorage::_SaveDataToWorkBuffer(v22, byte_4, v23);
              free(v22);
              result = CGenericGameStorage::_SaveDataToWorkBuffer((CGenericGameStorage *)v20, v21, v24);
            }
          }
        }
      }
      v9 += 12;
    }
  }
  return result;
}


// ============================================================

// Address: 0x48b7a8
// Original: _ZN22CScriptResourceManager4LoadEv
// Demangled: CScriptResourceManager::Load(void)
int __fastcall CScriptResourceManager::Load(CScriptResourceManager *this, int a2, int a3)
{
  char v4; // r1
  int v5; // r2
  int v6; // r5
  int v7; // r2
  CGenericGameStorage *v8; // r0
  int v9; // r2
  int v10; // r2
  char *v11; // r0
  int v12; // r1
  int v13; // r1
  CStreaming *v14; // r0
  int v15; // r2
  int v16; // r3
  void *v18; // [sp+4h] [bp-84h] BYREF
  unsigned __int16 v19; // [sp+Ah] [bp-7Eh] BYREF
  unsigned __int16 v20; // [sp+Ch] [bp-7Ch] BYREF
  unsigned __int16 v21; // [sp+Eh] [bp-7Ah] BYREF
  _BYTE v22[68]; // [sp+10h] [bp-78h] BYREF
  int v23; // [sp+54h] [bp-34h]

  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v21, (char *)&stderr + 2, a3);
  if ( v21 )
  {
    v6 = 0;
    do
    {
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v20, (char *)&stderr + 2, v5);
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v19, (char *)&stderr + 2, v7);
      v8 = (CScriptResourceManager *)((char *)this + 12 * v20);
      *((_DWORD *)v8 + 1) = (char *)&CTheScripts::ScriptsArray + 256 * v19;
      CGenericGameStorage::_LoadDataFromWorkBuffer(v8, byte_4, v9);
      CGenericGameStorage::_LoadDataFromWorkBuffer(
        (CScriptResourceManager *)((char *)this + 12 * v20 + 8),
        (char *)&stderr + 2,
        v10);
      v11 = (char *)this + 12 * v20;
      v12 = *((unsigned __int16 *)v11 + 4);
      if ( v12 == 2 )
      {
        v14 = *(CStreaming **)v11;
        if ( (unsigned int)v14 - 290 > 9 )
        {
          v13 = 12;
          goto LABEL_9;
        }
        memset(v22, 0, 64);
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v18, byte_4, v5);
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v22, v18, v15);
        CStreaming::RequestSpecialChar((CStreaming *)(*((_DWORD *)this + 3 * v20) - 290), (int)v22, &byte_9[3], v16);
      }
      else if ( v12 == 1 )
      {
        v13 = 4;
        v14 = (CStreaming *)(*(_DWORD *)v11 + 25575);
LABEL_9:
        CStreaming::RequestModel(v14, v13, v5);
      }
      v4 = ++v6;
    }
    while ( (unsigned __int16)v6 < (unsigned int)v21 );
  }
  CStreaming::LoadAllRequestedModels(0, v4);
  return _stack_chk_guard - v23;
}


// ============================================================
