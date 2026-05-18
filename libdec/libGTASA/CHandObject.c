
// Address: 0x1a1610
// Original: j__ZN11CHandObjectC2EiP4CPedb
// Demangled: CHandObject::CHandObject(int,CPed *,bool)
// attributes: thunk
void __fastcall CHandObject::CHandObject(CHandObject *this, int a2, CPed *a3, bool a4)
{
  _ZN11CHandObjectC2EiP4CPedb(this, a2, a3, a4);
}


// ============================================================

// Address: 0x452918
// Original: _ZN11CHandObjectC2EiP4CPedb
// Demangled: CHandObject::CHandObject(int,CPed *,bool)
void __fastcall CHandObject::CHandObject(CHandObject *this, int a2, CPed *a3, bool a4)
{
  int v7; // r0
  int v8; // r1
  const char *v9; // r2
  int v10; // r0
  char v11; // r3
  int v12; // r0
  int v13; // r1
  char v14[64]; // [sp+4h] [bp-5Ch] BYREF

  CObject::CObject(this);
  *(_DWORD *)this = &off_667E40;
  GetAnimHierarchyFromSkinClump();
  *((_DWORD *)this + 97) = a3;
  CEntity::UpdateRpHAnim(a3);
  v7 = RpHAnimIDGetIndex();
  v8 = *(_DWORD *)this;
  *((_DWORD *)this + 98) = v7;
  (*(void (__fastcall **)(CHandObject *, int))(v8 + 24))(this, a2);
  RpAnimBlendClumpInit();
  CTxdStore::SetCurrentTxd(
    (CTxdStore *)*(__int16 *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*((__int16 *)a3 + 19)]) + 32),
    0,
    v9);
  strcpy(v14, (const char *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*((__int16 *)a3 + 19)]) + 8));
  v10 = RwTextureRead(v14, 0);
  *((_DWORD *)this + 99) = v10;
  if ( !v10 )
  {
    (*((void (__fastcall **)(char *))RwEngineInstance + 72))(v14);
    *((_DWORD *)this + 99) = RwTextureRead(v14, 0);
  }
  v11 = *((_BYTE *)this + 58);
  v12 = *(_DWORD *)this;
  v13 = *((_DWORD *)this + 7);
  *((_BYTE *)this + 320) = 5;
  *((_BYTE *)this + 58) = v11 & 7 | 0x10;
  *((_DWORD *)this + 7) = v13 & 0xEFFFFBFE | 0x10000400;
  (*(void (__fastcall **)(CHandObject *, _DWORD))(v12 + 20))(this, 0);
  *(_BYTE *)(LODWORD(CModelInfo::ms_modelInfoPtrs[a2]) + 34) = -1;
  *((_BYTE *)this + 400) = 1;
}


// ============================================================

// Address: 0x452a54
// Original: _ZN11CHandObject14ProcessControlEv
// Demangled: CHandObject::ProcessControl(void)
int __fastcall CHandObject::ProcessControl(CHandObject *this)
{
  int v3; // [sp+0h] [bp-50h] BYREF

  GetAnimHierarchyFromSkinClump();
  RpHAnimHierarchyGetMatrixArray();
  CMatrix::CMatrix();
  CMatrix::operator=();
  CMatrix::~CMatrix((CMatrix *)&v3);
  *((_DWORD *)this + 7) |= 0x20u;
  return CPhysical::RemoveAndAdd(this);
}


// ============================================================

// Address: 0x452a9c
// Original: _ZN11CHandObject9PreRenderEv
// Demangled: CHandObject::PreRender(void)
int __fastcall CHandObject::PreRender(CEntity **this)
{
  int AnimHierarchyFromSkinClump; // r11
  CEntity *v3; // r0
  __int64 v4; // kr00_8
  _DWORD *v5; // r10
  CEntity *v6; // lr
  int i; // r1
  CEntity *v8; // r2
  int v9; // r6
  int v10; // r0
  _DWORD *v11; // r3
  int v12; // r0
  CEntity *v13; // r0
  char v15[100]; // [sp+4h] [bp-64h] BYREF

  AnimHierarchyFromSkinClump = GetAnimHierarchyFromSkinClump();
  CEntity::UpdateRpHAnim(this[97]);
  v3 = this[97];
  v4 = *(_QWORD *)((char *)v3 + 28);
  *((_DWORD *)v3 + 7) = v4 | 0x800000;
  *((_DWORD *)v3 + 8) = HIDWORD(v4);
  v5 = (_DWORD *)(RpHAnimHierarchyGetMatrixArray() + ((_DWORD)this[98] << 6));
  CMatrix::CMatrix();
  CMatrix::operator=();
  CMatrix::~CMatrix((CMatrix *)v15);
  if ( *((_BYTE *)this + 400) )
  {
    *((_BYTE *)this + 400) = 0;
  }
  else
  {
    v6 = this[98];
    for ( i = 0; i > -1; i += v12 )
    {
      v8 = (CEntity *)((char *)v6 + 1);
      v5[16] = 0;
      v5[24] = 0;
      v5[25] = 0;
      v5[26] = 0;
      v5[20] = 0;
      v5[21] = 0;
      v5[22] = 0;
      v5[17] = 0;
      v5[18] = 0;
      v9 = *(_DWORD *)(*(_DWORD *)(AnimHierarchyFromSkinClump + 16) + 16 * ((_DWORD)v6 + 1) + 8);
      if ( (v9 & 2) != 0 )
      {
        v12 = 1;
        v6 = (CEntity *)((char *)v6 + 1);
        v5 += 16;
      }
      else
      {
        v10 = 16 * (_DWORD)v6 + 40;
        v11 = v5 + 40;
        while ( !(v9 << 31) )
        {
          *v11 = 0;
          v11[1] = 0;
          v11[2] = 0;
          v8 = (CEntity *)((char *)v8 + 1);
          *(v11 - 8) = 0;
          *(v11 - 7) = 0;
          *(v11 - 6) = 0;
          *(v11 - 4) = 0;
          *(v11 - 3) = 0;
          *(v11 - 2) = 0;
          v11 += 16;
          v9 = *(_DWORD *)(*(_DWORD *)(AnimHierarchyFromSkinClump + 16) + v10);
          v10 += 16;
          if ( (v9 & 2) != 0 )
          {
            v5 = v11 - 24;
            v12 = 1;
            goto LABEL_11;
          }
        }
        v5 = v11 - 24;
        v12 = -1;
LABEL_11:
        v6 = v8;
      }
    }
  }
  v13 = this[6];
  this[76] = (CEntity *)*((_DWORD *)this[97] + 76);
  if ( v13 )
  {
    if ( this[5] )
      CMatrix::UpdateRwMatrix();
    else
      CSimpleTransform::UpdateRwMatrix();
  }
  CEntity::UpdateRwFrame((CEntity *)this);
  return CEntity::UpdateRpHAnim((CEntity *)this);
}


// ============================================================

// Address: 0x452bd4
// Original: _ZN11CHandObject6RenderEv
// Demangled: CHandObject::Render(void)
int __fastcall CHandObject::Render(CHandObject *this)
{
  int result; // r0
  int FirstAtomic; // r0

  result = CMirrors::TypeOfMirror;
  if ( CMirrors::TypeOfMirror != 3 )
  {
    FirstAtomic = GetFirstAtomic();
    RpMaterialSetTexture(**(_DWORD **)(*(_DWORD *)(FirstAtomic + 24) + 32), *((_DWORD *)this + 99));
    return j_CObject::Render(this);
  }
  return result;
}


// ============================================================

// Address: 0x452c0c
// Original: _ZN11CHandObjectD0Ev
// Demangled: CHandObject::~CHandObject()
void __fastcall CHandObject::~CHandObject(CHandObject *this)
{
  void *v1; // r0

  CObject::~CObject(this);
  j_CObject::operator delete(v1);
}


// ============================================================
