
// Address: 0x18c614
// Original: j__ZN15ProcObjectMan_c4InitEv
// Demangled: ProcObjectMan_c::Init(void)
// attributes: thunk
int __fastcall ProcObjectMan_c::Init(ProcObjectMan_c *this)
{
  return _ZN15ProcObjectMan_c4InitEv(this);
}


// ============================================================

// Address: 0x18f00c
// Original: j__ZN15ProcObjectMan_c20ProcessTriangleAddedEP12CPlantLocTri
// Demangled: ProcObjectMan_c::ProcessTriangleAdded(CPlantLocTri *)
// attributes: thunk
int __fastcall ProcObjectMan_c::ProcessTriangleAdded(ProcObjectMan_c *this, CPlantLocTri *a2)
{
  return _ZN15ProcObjectMan_c20ProcessTriangleAddedEP12CPlantLocTri(this, a2);
}


// ============================================================

// Address: 0x191398
// Original: j__ZN15ProcObjectMan_c22ProcessTriangleRemovedEP12CPlantLocTri
// Demangled: ProcObjectMan_c::ProcessTriangleRemoved(CPlantLocTri *)
// attributes: thunk
int __fastcall ProcObjectMan_c::ProcessTriangleRemoved(ProcObjectMan_c *a1, CPlantLocTri *a2)
{
  return _ZN15ProcObjectMan_c22ProcessTriangleRemovedEP12CPlantLocTri(a1, a2);
}


// ============================================================

// Address: 0x192060
// Original: j__ZN15ProcObjectMan_c4ExitEv
// Demangled: ProcObjectMan_c::Exit(void)
// attributes: thunk
int __fastcall ProcObjectMan_c::Exit(ProcObjectMan_c *this)
{
  return _ZN15ProcObjectMan_c4ExitEv(this);
}


// ============================================================

// Address: 0x19c3f8
// Original: j__ZN15ProcObjectMan_c12LoadDataFileEv
// Demangled: ProcObjectMan_c::LoadDataFile(void)
// attributes: thunk
int __fastcall ProcObjectMan_c::LoadDataFile(ProcObjectMan_c *this)
{
  return _ZN15ProcObjectMan_c12LoadDataFileEv(this);
}


// ============================================================

// Address: 0x19d950
// Original: j__ZN15ProcObjectMan_c6UpdateEv
// Demangled: ProcObjectMan_c::Update(void)
// attributes: thunk
int __fastcall ProcObjectMan_c::Update(ProcObjectMan_c *this)
{
  return _ZN15ProcObjectMan_c6UpdateEv(this);
}


// ============================================================

// Address: 0x4562d4
// Original: _ZN15ProcObjectMan_c18ReturnEntityToPoolEP12EntityItem_c
// Demangled: ProcObjectMan_c::ReturnEntityToPool(EntityItem_c *)
int __fastcall ProcObjectMan_c::ReturnEntityToPool(int a1, ListItem_c *a2)
{
  return j_List_c::AddItem((List_c *)(a1 + 19464), a2);
}


// ============================================================

// Address: 0x4567e8
// Original: _ZN15ProcObjectMan_c17GetEntityFromPoolEv
// Demangled: ProcObjectMan_c::GetEntityFromPool(void)
int __fastcall ProcObjectMan_c::GetEntityFromPool(ProcObjectMan_c *this)
{
  return j_List_c::RemoveHead((ProcObjectMan_c *)((char *)this + 19464));
}


// ============================================================

// Address: 0x456ddc
// Original: _ZN15ProcObjectMan_cC2Ev
// Demangled: ProcObjectMan_c::ProcObjectMan_c(void)
void __fastcall ProcObjectMan_c::ProcObjectMan_c(ProcObjectMan_c *this)
{
  int i; // r5
  int j; // r6

  for ( i = 0; i != 9216; i += 72 )
    List_c::List_c((ProcObjectMan_c *)((char *)this + i + 68));
  for ( j = 0; j != 10240; j += 20 )
    ListItem_c::ListItem_c((ProcObjectMan_c *)((char *)this + j + 9224));
  List_c::List_c((ProcObjectMan_c *)((char *)this + 19464));
}


// ============================================================

// Address: 0x456e20
// Original: _ZN15ProcObjectMan_cD2Ev
// Demangled: ProcObjectMan_c::~ProcObjectMan_c()
void __fastcall ProcObjectMan_c::~ProcObjectMan_c(ProcObjectMan_c *this)
{
  int i; // r6
  int j; // r5

  List_c::~List_c((ProcObjectMan_c *)((char *)this + 19464));
  for ( i = 0; i != -10240; i -= 20 )
    ListItem_c::~ListItem_c((ProcObjectMan_c *)((char *)this + i + 19444));
  for ( j = 9212; j != -4; j -= 72 )
    List_c::~List_c((ProcObjectMan_c *)((char *)this + j));
}


// ============================================================

// Address: 0x456e62
// Original: _ZN15ProcObjectMan_c4InitEv
// Demangled: ProcObjectMan_c::Init(void)
int __fastcall ProcObjectMan_c::Init(ProcObjectMan_c *this)
{
  char *v2; // r6
  int i; // r4

  v2 = (char *)this + 9224;
  for ( i = 0; i != 10240; i += 20 )
    List_c::AddItem((ProcObjectMan_c *)((char *)this + 19464), (ListItem_c *)&v2[i]);
  *((_DWORD *)this + 1) = 0;
  ProcObjectMan_c::LoadDataFile(this);
  *(_DWORD *)this = 0;
  return 1;
}


// ============================================================

// Address: 0x456ea8
// Original: _ZN15ProcObjectMan_c12LoadDataFileEv
// Demangled: ProcObjectMan_c::LoadDataFile(void)
int __fastcall ProcObjectMan_c::LoadDataFile(ProcObjectMan_c *this, int a2, const char *a3)
{
  float32x2_t v3; // d10
  float32x2_t v4; // d13
  CFileLoader *v6; // r4
  unsigned int v7; // r1
  const char *Line; // r0
  unsigned int v9; // r1
  unsigned int v10; // r1
  bool v11; // zf
  int v12; // r10
  int v13; // r11
  float v14; // s24
  char *v15; // r8
  int *v16; // r2
  float v17; // s6
  CFileLoader *v19; // [sp+38h] [bp-128h]
  unsigned __int8 v20; // [sp+3Ch] [bp-124h]
  int v21; // [sp+40h] [bp-120h]
  int v22; // [sp+44h] [bp-11Ch]
  int v23; // [sp+48h] [bp-118h]
  int v24; // [sp+4Ch] [bp-114h]
  int v25; // [sp+50h] [bp-110h]
  int v26; // [sp+54h] [bp-10Ch]
  char v27; // [sp+58h] [bp-108h]
  int v28; // [sp+5Ch] [bp-104h] BYREF
  int v29; // [sp+60h] [bp-100h] BYREF
  int v30; // [sp+64h] [bp-FCh] BYREF
  int v31; // [sp+68h] [bp-F8h] BYREF
  int v32; // [sp+6Ch] [bp-F4h] BYREF
  int v33; // [sp+70h] [bp-F0h] BYREF
  int v34; // [sp+74h] [bp-ECh] BYREF
  int v35; // [sp+78h] [bp-E8h] BYREF
  int v36; // [sp+7Ch] [bp-E4h] BYREF
  int v37; // [sp+80h] [bp-E0h] BYREF
  float v38; // [sp+84h] [bp-DCh] BYREF
  float v39; // [sp+88h] [bp-D8h] BYREF
  _BYTE v40[64]; // [sp+8Ch] [bp-D4h] BYREF
  char v41[64]; // [sp+CCh] [bp-94h] BYREF
  int v42; // [sp+10Ch] [bp-54h]

  v6 = (CFileLoader *)CFileMgr::OpenFile((CFileMgr *)"data\\procobj.dat", "r", a3);
  Line = (const char *)CFileLoader::LoadLine(v6, v7);
  if ( Line )
  {
    v3.n64_u32[0] = 1117782016;
    v19 = v6;
    do
    {
      v10 = *(unsigned __int8 *)Line;
      v11 = v10 == 0;
      if ( *Line )
        v11 = v10 == 35;
      if ( !v11 )
      {
        sscanf(
          Line,
          "%s %s %f %f %d %d %f %f %f %f %f %f %d %d",
          v41,
          v40,
          &v39,
          &v38,
          &v37,
          &v36,
          &v35,
          &v34,
          &v33,
          &v32,
          &v31,
          &v30,
          &v29,
          &v28);
        v20 = v28;
        v27 = v29;
        v26 = v30;
        v25 = v31;
        v24 = v32;
        v23 = v33;
        v22 = v34;
        v21 = v35;
        v12 = v36;
        v13 = v37;
        v4.n64_f32[0] = v38;
        v14 = v39;
        v15 = (char *)this + 72 * *((_DWORD *)this + 1);
        v15[8] = SurfaceInfos_c::GetSurfaceIdFromName((SurfaceInfos_c *)&g_surfaceInfos, v41);
        if ( CModelInfo::GetModelInfo((CModelInfo *)v40, v15 + 12, v16) )
        {
          v17 = vmin_f32(v4, v3).n64_f32[0];
          *((float *)v15 + 4) = v14;
          *((_DWORD *)v15 + 9) = v21;
          *((_DWORD *)v15 + 10) = v22;
          *((_DWORD *)v15 + 11) = v23;
          *((_DWORD *)v15 + 12) = v24;
          *((_DWORD *)v15 + 13) = v25;
          *((_DWORD *)v15 + 14) = v26;
          v15[60] = v27;
          *((float *)v15 + 6) = v17 * v17;
          *((float *)v15 + 16) = (float)v20;
          *((float *)v15 + 5) = 1.0 / (float)(v14 * v14);
          *((float *)v15 + 7) = (float)((float)v13 / 180.0) * 3.1416;
          *((float *)v15 + 8) = (float)((float)v12 / 180.0) * 3.1416;
        }
        ++*((_DWORD *)this + 1);
        v6 = v19;
      }
      Line = (const char *)CFileLoader::LoadLine(v6, v10);
    }
    while ( Line );
  }
  CFileMgr::CloseFile(v6, v9);
  return _stack_chk_guard - v42;
}


// ============================================================

// Address: 0x4570a8
// Original: _ZN15ProcObjectMan_c4ExitEv
// Demangled: ProcObjectMan_c::Exit(void)
int __fastcall ProcObjectMan_c::Exit(ProcObjectMan_c *this)
{
  int v2; // r0
  int i; // r10
  char *v4; // r6
  int v5; // r4
  List_c *v6; // r6
  int v7; // t1
  int v8; // r5
  CEntity *v9; // r1
  int v10; // r0

  v2 = *((_DWORD *)this + 1);
  if ( v2 >= 1 )
  {
    for ( i = 0; i < v2; ++i )
    {
      v4 = (char *)this + 72 * i;
      v7 = *((_DWORD *)v4 + 17);
      v6 = (List_c *)(v4 + 68);
      v5 = v7;
      if ( v7 )
      {
        do
        {
          v8 = *(_DWORD *)(v5 + 4);
          List_c::RemoveItem(v6, (ListItem_c *)v5);
          List_c::AddItem((List_c *)&unk_9A6B44, (ListItem_c *)v5);
          (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(v5 + 8) + 36))(*(_DWORD *)(v5 + 8));
          CWorld::Remove(*(CWorld **)(v5 + 8), v9);
          v10 = *(_DWORD *)(v5 + 8);
          if ( v10 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 4))(v10);
          *(_DWORD *)(v5 + 8) = 0;
          v5 = v8;
        }
        while ( v8 );
        v2 = *((_DWORD *)this + 1);
      }
    }
  }
  return sub_19CBF8((ProcObjectMan_c *)((char *)this + 19464));
}


// ============================================================

// Address: 0x45713c
// Original: _ZN15ProcObjectMan_c6UpdateEv
// Demangled: ProcObjectMan_c::Update(void)
void __fastcall ProcObjectMan_c::Update(ProcObjectMan_c *this)
{
  ;
}


// ============================================================

// Address: 0x45713e
// Original: _ZN15ProcObjectMan_c20ProcessTriangleAddedEP12CPlantLocTri
// Demangled: ProcObjectMan_c::ProcessTriangleAdded(CPlantLocTri *)
int __fastcall ProcObjectMan_c::ProcessTriangleAdded(ProcObjectMan_c *this, CPlantLocTri *a2)
{
  int v4; // r1
  ProcSurfaceInfo_c *v5; // r6
  int v6; // r5
  unsigned __int8 v7; // r9
  char v8; // r0

  v4 = *((_DWORD *)this + 1);
  if ( v4 < 1 )
  {
    return 0;
  }
  else
  {
    v5 = (ProcObjectMan_c *)((char *)this + 8);
    v6 = 0;
    v7 = 0;
    do
    {
      if ( *(unsigned __int8 *)v5 == *((unsigned __int8 *)a2 + 70) )
      {
        v8 = ProcSurfaceInfo_c::AddObjects(v5, a2);
        v4 = *((_DWORD *)this + 1);
        v7 += v8;
      }
      ++v6;
      v5 = (ProcSurfaceInfo_c *)((char *)v5 + 72);
    }
    while ( v6 < v4 );
  }
  return v7;
}


// ============================================================

// Address: 0x45718c
// Original: _ZN15ProcObjectMan_c22ProcessTriangleRemovedEP12CPlantLocTri
// Demangled: ProcObjectMan_c::ProcessTriangleRemoved(CPlantLocTri *)
int __fastcall ProcObjectMan_c::ProcessTriangleRemoved(_DWORD *a1, int a2)
{
  int result; // r0
  int i; // r10
  _DWORD *v6; // r6
  List_c *v7; // r6
  int v8; // r11
  int v9; // t1
  int v10; // r5
  int v11; // r0
  CEntity *v12; // r1
  int v13; // r0
  int v14; // r0

  result = a1[1];
  if ( result >= 1 )
  {
    for ( i = 0; i < result; ++i )
    {
      v6 = &a1[18 * i];
      if ( *((unsigned __int8 *)v6 + 8) == *(unsigned __int8 *)(a2 + 70) )
      {
        v9 = v6[17];
        v7 = (List_c *)(v6 + 17);
        v8 = v9;
        if ( v9 )
        {
          do
          {
            while ( 1 )
            {
              v10 = v8;
              v11 = *(_DWORD *)(v8 + 12);
              v8 = *(_DWORD *)(v8 + 4);
              if ( v11 == a2 )
                break;
              if ( !v8 )
                goto LABEL_15;
            }
            if ( (*(_BYTE *)(*(_DWORD *)(v10 + 8) + 58) & 7) == 4 )
              --CObject::nNoTempObjects;
            List_c::RemoveItem(v7, (ListItem_c *)v10);
            List_c::AddItem((List_c *)&unk_9A6B44, (ListItem_c *)v10);
            (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(v10 + 8) + 36))(*(_DWORD *)(v10 + 8));
            CWorld::Remove(*(CWorld **)(v10 + 8), v12);
            v13 = *(_DWORD *)(v10 + 8);
            if ( v13 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 4))(v13);
            v14 = *(unsigned __int8 *)(v10 + 16);
            *(_DWORD *)(v10 + 8) = 0;
            if ( v14 )
            {
              --*a1;
              *(_BYTE *)(v10 + 16) = 0;
            }
          }
          while ( v8 );
LABEL_15:
          result = a1[1];
        }
      }
    }
  }
  return result;
}


// ============================================================
