
// Address: 0x18c194
// Original: j__ZN14CCollisionData23CalculateTrianglePlanesEv
// Demangled: CCollisionData::CalculateTrianglePlanes(void)
// attributes: thunk
int __fastcall CCollisionData::CalculateTrianglePlanes(CCollisionData *this)
{
  return _ZN14CCollisionData23CalculateTrianglePlanesEv(this);
}


// ============================================================

// Address: 0x18d2c4
// Original: j__ZN14CCollisionData22RemoveCollisionVolumesEv
// Demangled: CCollisionData::RemoveCollisionVolumes(void)
// attributes: thunk
int __fastcall CCollisionData::RemoveCollisionVolumes(CCollisionData *this)
{
  return _ZN14CCollisionData22RemoveCollisionVolumesEv(this);
}


// ============================================================

// Address: 0x18d704
// Original: j__ZN14CCollisionData10GetLinkPtrEv
// Demangled: CCollisionData::GetLinkPtr(void)
// attributes: thunk
int __fastcall CCollisionData::GetLinkPtr(CCollisionData *this)
{
  return _ZN14CCollisionData10GetLinkPtrEv(this);
}


// ============================================================

// Address: 0x1914f8
// Original: j__ZN14CCollisionDataC2Ev
// Demangled: CCollisionData::CCollisionData(void)
// attributes: thunk
void __fastcall CCollisionData::CCollisionData(CCollisionData *this)
{
  _ZN14CCollisionDataC2Ev(this);
}


// ============================================================

// Address: 0x197c34
// Original: j__ZNK14CCollisionData16GetTrianglePointER7CVectori
// Demangled: CCollisionData::GetTrianglePoint(CVector &,int)
// attributes: thunk
int __fastcall CCollisionData::GetTrianglePoint(CCollisionData *this, CVector *a2, int a3)
{
  return _ZNK14CCollisionData16GetTrianglePointER7CVectori(this, a2, a3);
}


// ============================================================

// Address: 0x198d78
// Original: j__ZN14CCollisionData10SetLinkPtrEP5CLinkIPS_E
// Demangled: CCollisionData::SetLinkPtr(CLink<CCollisionData*> *)
// attributes: thunk
int CCollisionData::SetLinkPtr(void)
{
  return _ZN14CCollisionData10SetLinkPtrEP5CLinkIPS_E();
}


// ============================================================

// Address: 0x19a814
// Original: j__ZNK14CCollisionData16GetNoShadVectorsEv
// Demangled: CCollisionData::GetNoShadVectors(void)
// attributes: thunk
int __fastcall CCollisionData::GetNoShadVectors(CCollisionData *this)
{
  return _ZNK14CCollisionData16GetNoShadVectorsEv(this);
}


// ============================================================

// Address: 0x19a91c
// Original: j__ZN14CCollisionData4CopyERKS_
// Demangled: CCollisionData::Copy(CCollisionData const&)
// attributes: thunk
int __fastcall CCollisionData::Copy(CCollisionData *this, const CCollisionData *a2)
{
  return _ZN14CCollisionData4CopyERKS_(this, a2);
}


// ============================================================

// Address: 0x19bb04
// Original: j__ZNK14CCollisionData12GetNoVectorsEv
// Demangled: CCollisionData::GetNoVectors(void)
// attributes: thunk
int __fastcall CCollisionData::GetNoVectors(CCollisionData *this)
{
  return _ZNK14CCollisionData12GetNoVectorsEv(this);
}


// ============================================================

// Address: 0x1a073c
// Original: j__ZN14CCollisionData20RemoveTrianglePlanesEv
// Demangled: CCollisionData::RemoveTrianglePlanes(void)
// attributes: thunk
int __fastcall CCollisionData::RemoveTrianglePlanes(CCollisionData *this)
{
  return _ZN14CCollisionData20RemoveTrianglePlanesEv(this);
}


// ============================================================

// Address: 0x2e1140
// Original: _ZN14CCollisionDataC2Ev
// Demangled: CCollisionData::CCollisionData(void)
void __fastcall CCollisionData::CCollisionData(CCollisionData *this)
{
  char v1; // r2

  *((_BYTE *)this + 6) = 0;
  *((_WORD *)this + 2) = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 11) = 0;
  v1 = *((_BYTE *)this + 7);
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_BYTE *)this + 7) = v1 & 0xF8;
}


// ============================================================

// Address: 0x2e116a
// Original: _ZN14CCollisionData22RemoveCollisionVolumesEv
// Demangled: CCollisionData::RemoveCollisionVolumes(void)
int __fastcall CCollisionData::RemoveCollisionVolumes(CCollisionData *this, void *a2)
{
  void *v3; // r0
  char *v4; // r5
  void *v5; // r0
  void *v6; // r0
  void *v7; // r0
  void *v8; // r0
  void *v9; // r0
  void *v10; // r0
  int result; // r0

  v4 = (char *)this + 8;
  v3 = (void *)*((_DWORD *)this + 2);
  if ( v3 )
    CMemoryMgr::Free(v3, a2);
  v5 = (void *)*((_DWORD *)this + 4);
  if ( v5 )
    CMemoryMgr::Free(v5, a2);
  v6 = (void *)*((_DWORD *)this + 3);
  if ( v6 )
    CMemoryMgr::Free(v6, a2);
  v7 = (void *)*((_DWORD *)this + 5);
  if ( v7 )
    CMemoryMgr::Free(v7, a2);
  v8 = (void *)*((_DWORD *)this + 6);
  if ( v8 )
    CMemoryMgr::Free(v8, a2);
  v9 = (void *)*((_DWORD *)this + 11);
  if ( v9 )
    CMemoryMgr::Free(v9, a2);
  v10 = (void *)*((_DWORD *)this + 10);
  if ( v10 )
    CMemoryMgr::Free(v10, a2);
  CCollision::RemoveTrianglePlanes(this, (CCollisionData *)a2);
  result = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_BYTE *)this + 6) = 0;
  *((_WORD *)this + 2) = 0;
  *(_DWORD *)this = 0;
  *(_QWORD *)v4 = 0LL;
  *((_QWORD *)v4 + 1) = 0LL;
  *((_DWORD *)v4 + 4) = 0;
  return result;
}


// ============================================================

// Address: 0x2e11d8
// Original: _ZN14CCollisionData4CopyERKS_
// Demangled: CCollisionData::Copy(CCollisionData const&)
CCollisionData *__fastcall CCollisionData::Copy(CCollisionData *this, const CCollisionData *a2)
{
  unsigned int v4; // r1
  void *v5; // r0
  void *v6; // r0
  int v7; // r1
  int v8; // r0
  unsigned int v9; // r1
  __int64 *v10; // r6
  int v11; // r3
  __int64 v12; // d16
  __int64 v13; // d17
  __int16 v14; // r2
  void *v15; // r0
  unsigned int v16; // r1
  int v17; // r0
  _BYTE *v18; // r8
  bool v19; // zf
  void *v20; // r0
  void *v21; // r0
  int v22; // r1
  int v23; // r0
  unsigned int v24; // r1
  __int64 *v25; // r2
  __int64 v26; // d16
  __int64 v27; // d17
  __int64 v28; // d18
  __int64 v29; // d19
  _QWORD *v30; // r2
  void *v31; // r0
  void *v32; // r0
  void *v33; // r0
  int v34; // r1
  int v35; // r0
  unsigned int v36; // r1
  __int64 *v37; // r3
  int v38; // r2
  __int64 v39; // d16
  __int64 v40; // d17
  __int64 v41; // d18
  __int64 v42; // d19
  int v43; // r3
  char v44; // r0
  unsigned int v45; // r1
  void *v46; // r0
  void *v47; // r0
  int v48; // r6
  unsigned int v49; // r5
  void *v50; // r0
  int v51; // r6
  unsigned int v52; // r2
  _QWORD *v53; // r1
  int v54; // r3
  __int64 v55; // kr00_8
  void *v56; // r0
  unsigned __int16 v57; // r5
  _DWORD *v58; // r0
  __int64 *v59; // r1
  __int64 v60; // d16
  int v61; // r0
  int v62; // r1
  int v63; // r2
  int v64; // r3
  __int64 v65; // d16
  int v66; // r2
  void *v67; // r0
  void *v68; // r0
  int v69; // r0
  __int64 *v70; // r2
  __int64 v71; // d16
  __int64 v72; // d17
  _QWORD *v73; // r2
  void *v74; // r0
  void *v75; // r0
  unsigned int v76; // r12
  void *v77; // r0
  void *v78; // r0
  int v79; // r6
  unsigned int v80; // r2
  _QWORD *v81; // r1
  int v82; // r3
  __int64 v83; // kr08_8
  void *v84; // r0
  unsigned __int16 v85; // r5
  _DWORD *v86; // r0
  __int64 *v87; // r1
  __int64 v88; // d16
  int v89; // r0
  int v90; // r1
  int v91; // r2
  int v92; // r3
  __int64 v93; // d16
  unsigned int v94; // r1
  int v95; // r2
  void *v96; // r0
  void *v97; // r0
  int v98; // r0
  unsigned int v99; // r1
  __int64 *v100; // r2
  __int64 v101; // d16
  __int64 v102; // d17
  _QWORD *v103; // r2

  v4 = *(unsigned __int16 *)a2;
  if ( v4 )
  {
    if ( *(unsigned __int16 *)this == v4 )
      goto LABEL_6;
    v5 = (void *)*((_DWORD *)this + 2);
    *(_WORD *)this = v4;
    if ( v5 )
    {
      CMemoryMgr::Free(v5, (void *)v4);
      v4 = *(unsigned __int16 *)this;
    }
    v6 = CMemoryMgr::Malloc(20 * (__int16)v4, v4);
    v7 = *(unsigned __int16 *)this;
    *((_DWORD *)this + 2) = v6;
    if ( v7 )
    {
LABEL_6:
      v8 = 0;
      v9 = 0;
      do
      {
        ++v9;
        v10 = (__int64 *)(*((_DWORD *)a2 + 2) + v8);
        v11 = *((_DWORD *)this + 2) + v8;
        v8 += 20;
        v12 = *v10;
        v13 = v10[1];
        v14 = *((_WORD *)v10 + 8);
        *(_BYTE *)(v11 + 18) = *((_BYTE *)v10 + 18);
        *(_QWORD *)v11 = v12;
        *(_QWORD *)(v11 + 8) = v13;
        *(_WORD *)(v11 + 16) = v14;
      }
      while ( v9 < *(__int16 *)this );
    }
  }
  else
  {
    v15 = (void *)*((_DWORD *)this + 2);
    *(_WORD *)this = 0;
    if ( v15 )
      CMemoryMgr::Free(v15, 0);
    *((_DWORD *)this + 2) = 0;
  }
  v16 = *((unsigned __int8 *)a2 + 6);
  if ( *((_BYTE *)a2 + 6) )
  {
    v17 = *((unsigned __int8 *)this + 6);
    v18 = (char *)a2 + 7;
    if ( (*((_BYTE *)a2 + 7) & 1) != 0 )
    {
      if ( v17 == v16 && *((unsigned __int8 *)this + 7) << 31 )
        goto LABEL_31;
      v32 = (void *)*((_DWORD *)this + 4);
      *((_BYTE *)this + 6) = v16;
      if ( v32 )
      {
        CMemoryMgr::Free(v32, (void *)v16);
        v16 = *((unsigned __int8 *)this + 6);
      }
      v33 = CMemoryMgr::Malloc(36 * (char)v16, v16);
      v34 = *((unsigned __int8 *)this + 6);
      *((_DWORD *)this + 4) = v33;
      if ( v34 )
      {
LABEL_31:
        v35 = 0;
        v36 = 0;
        do
        {
          ++v36;
          v37 = (__int64 *)(*((_DWORD *)a2 + 4) + v35);
          v38 = *((_DWORD *)v37 + 8);
          v39 = *v37;
          v40 = v37[1];
          v37 += 2;
          v41 = *v37;
          v42 = v37[1];
          v43 = *((_DWORD *)this + 4) + v35;
          v35 += 36;
          *(_DWORD *)(v43 + 32) = v38;
          *(_QWORD *)v43 = v39;
          *(_QWORD *)(v43 + 8) = v40;
          v43 += 16;
          *(_QWORD *)v43 = v41;
          *(_QWORD *)(v43 + 8) = v42;
        }
        while ( v36 < *((char *)this + 6) );
      }
    }
    else
    {
      v19 = v17 == v16;
      if ( v17 == v16 )
        v19 = *((unsigned __int8 *)this + 7) << 31 == 0;
      if ( v19 )
        goto LABEL_20;
      v20 = (void *)*((_DWORD *)this + 4);
      *((_BYTE *)this + 6) = v16;
      if ( v20 )
      {
        CMemoryMgr::Free(v20, (void *)v16);
        v16 = *((unsigned __int8 *)this + 6);
      }
      v21 = CMemoryMgr::Malloc(32 * (char)v16, v16);
      v22 = *((unsigned __int8 *)this + 6);
      *((_DWORD *)this + 4) = v21;
      if ( v22 )
      {
LABEL_20:
        v23 = 0;
        v24 = 0;
        do
        {
          ++v24;
          v25 = (__int64 *)(*((_DWORD *)a2 + 4) + v23);
          v26 = *v25;
          v27 = v25[1];
          v25 += 2;
          v28 = *v25;
          v29 = v25[1];
          v30 = (_QWORD *)(*((_DWORD *)this + 4) + v23);
          v23 += 32;
          *v30 = v26;
          v30[1] = v27;
          v30 += 2;
          *v30 = v28;
          v30[1] = v29;
        }
        while ( v24 < *((char *)this + 6) );
      }
    }
  }
  else
  {
    v31 = (void *)*((_DWORD *)this + 4);
    *((_BYTE *)this + 6) = 0;
    if ( v31 )
      CMemoryMgr::Free(v31, (void *)v16);
    *((_DWORD *)this + 4) = 0;
    v18 = (char *)a2 + 7;
  }
  v44 = *((_BYTE *)this + 7) & 0xFE | *v18 & 1;
  *((_BYTE *)this + 7) = v44;
  *((_BYTE *)this + 7) = v44 & 0xFB | *v18 & 4;
  v45 = *((unsigned __int16 *)a2 + 1);
  if ( *((_WORD *)a2 + 1) )
  {
    if ( *((unsigned __int16 *)this + 1) == v45 )
      goto LABEL_38;
    v46 = (void *)*((_DWORD *)this + 3);
    *((_WORD *)this + 1) = v45;
    if ( v46 )
    {
      CMemoryMgr::Free(v46, (void *)v45);
      v45 = *((unsigned __int16 *)this + 1);
    }
    v47 = CMemoryMgr::Malloc(28 * (__int16)v45, v45);
    v45 = *((unsigned __int16 *)this + 1);
    *((_DWORD *)this + 3) = v47;
    if ( v45 )
    {
LABEL_38:
      v48 = 0;
      v49 = 0;
      do
      {
        CColBox::operator=();
        ++v49;
        v48 += 28;
      }
      while ( v49 < *((__int16 *)this + 1) );
    }
  }
  else
  {
    v50 = (void *)*((_DWORD *)this + 3);
    *((_WORD *)this + 1) = 0;
    if ( v50 )
      CMemoryMgr::Free(v50, (void *)v45);
    *((_DWORD *)this + 3) = 0;
  }
  if ( *((_WORD *)a2 + 2) )
  {
    v51 = 0;
    v52 = 0;
    v53 = (_QWORD *)(*((_DWORD *)a2 + 6) + 4);
    do
    {
      v54 = *((_DWORD *)v53 - 1);
      v55 = *v53;
      v53 += 2;
      ++v52;
      if ( v54 > (unsigned __int16)v51 )
        v51 = v54;
      if ( (int)v55 > (unsigned __int16)v51 )
        v51 = v55;
      if ( SHIDWORD(v55) > (unsigned __int16)v51 )
        v51 = HIDWORD(v55);
    }
    while ( v52 < *((__int16 *)a2 + 2) );
    v56 = (void *)*((_DWORD *)this + 5);
    v57 = v51 + 1;
    if ( v56 )
      CMemoryMgr::Free(v56, v53);
    if ( (_WORD)v51 != 0xFFFF )
    {
      v58 = CMemoryMgr::Malloc(12 * v57, (unsigned int)v53);
      *((_DWORD *)this + 5) = v58;
      v59 = (__int64 *)*((_DWORD *)a2 + 5);
      v60 = *v59;
      v58[2] = *((_DWORD *)v59 + 2);
      *(_QWORD *)v58 = v60;
      if ( v51 << 16 )
      {
        v61 = v57 - 1;
        v62 = 12;
        do
        {
          --v61;
          v63 = *((_DWORD *)a2 + 5) + v62;
          v64 = *((_DWORD *)this + 5) + v62;
          v62 += 12;
          v65 = *(_QWORD *)v63;
          *(_DWORD *)(v64 + 8) = *(_DWORD *)(v63 + 8);
          *(_QWORD *)v64 = v65;
        }
        while ( v61 );
      }
    }
    v45 = *((unsigned __int16 *)a2 + 2);
    v66 = *((unsigned __int16 *)this + 2);
    if ( v66 != v45 )
    {
      v67 = (void *)*((_DWORD *)this + 6);
      *((_WORD *)this + 2) = v45;
      if ( v67 )
      {
        CMemoryMgr::Free(v67, (void *)v45);
        v45 = *((unsigned __int16 *)this + 2);
      }
      v68 = CMemoryMgr::Malloc(16 * (__int16)v45, v45);
      v66 = *((unsigned __int16 *)this + 2);
      *((_DWORD *)this + 6) = v68;
    }
    if ( v66 )
    {
      v69 = 0;
      v45 = 0;
      do
      {
        ++v45;
        v70 = (__int64 *)(*((_DWORD *)a2 + 6) + v69);
        v71 = *v70;
        v72 = v70[1];
        v73 = (_QWORD *)(*((_DWORD *)this + 6) + v69);
        v69 += 16;
        *v73 = v71;
        v73[1] = v72;
      }
      while ( v45 < *((__int16 *)this + 2) );
    }
  }
  else
  {
    v74 = (void *)*((_DWORD *)this + 6);
    *((_WORD *)this + 2) = 0;
    if ( v74 )
      CMemoryMgr::Free(v74, (void *)v45);
    v75 = (void *)*((_DWORD *)this + 5);
    *((_DWORD *)this + 6) = 0;
    if ( v75 )
      CMemoryMgr::Free(v75, (void *)v45);
    *((_DWORD *)this + 5) = 0;
  }
  v76 = *((_DWORD *)a2 + 8);
  if ( v76 && (v45 = (unsigned __int8)*v18 << 29, (*v18 & 4) != 0) )
  {
    v79 = 0;
    v80 = 0;
    v81 = (_QWORD *)(*((_DWORD *)a2 + 11) + 4);
    do
    {
      v82 = *((_DWORD *)v81 - 1);
      v83 = *v81;
      v81 += 2;
      ++v80;
      if ( v82 > (unsigned __int16)v79 )
        v79 = v82;
      if ( (int)v83 > (unsigned __int16)v79 )
        v79 = v83;
      if ( SHIDWORD(v83) > (unsigned __int16)v79 )
        v79 = HIDWORD(v83);
    }
    while ( v80 < v76 );
    v84 = (void *)*((_DWORD *)this + 10);
    v85 = v79 + 1;
    if ( v84 )
      CMemoryMgr::Free(v84, v81);
    if ( (_WORD)v79 != 0xFFFF )
    {
      v86 = CMemoryMgr::Malloc(12 * v85, (unsigned int)v81);
      *((_DWORD *)this + 10) = v86;
      v87 = (__int64 *)*((_DWORD *)a2 + 10);
      v88 = *v87;
      v86[2] = *((_DWORD *)v87 + 2);
      *(_QWORD *)v86 = v88;
      if ( v79 << 16 )
      {
        v89 = v85 - 1;
        v90 = 12;
        do
        {
          --v89;
          v91 = *((_DWORD *)a2 + 10) + v90;
          v92 = *((_DWORD *)this + 10) + v90;
          v90 += 12;
          v93 = *(_QWORD *)v91;
          *(_DWORD *)(v92 + 8) = *(_DWORD *)(v91 + 8);
          *(_QWORD *)v92 = v93;
        }
        while ( v89 );
      }
    }
    v94 = *((_DWORD *)a2 + 8);
    v95 = *((_DWORD *)this + 8);
    if ( v95 != v94 )
    {
      v96 = (void *)*((_DWORD *)this + 11);
      *((_DWORD *)this + 8) = v94;
      if ( v96 )
      {
        CMemoryMgr::Free(v96, (void *)v94);
        v94 = *((_DWORD *)this + 8);
      }
      v97 = CMemoryMgr::Malloc(16 * v94, v94);
      v95 = *((_DWORD *)this + 8);
      *((_DWORD *)this + 11) = v97;
    }
    if ( v95 )
    {
      v98 = 0;
      v99 = 0;
      do
      {
        ++v99;
        v100 = (__int64 *)(*((_DWORD *)a2 + 11) + v98);
        v101 = *v100;
        v102 = v100[1];
        v103 = (_QWORD *)(*((_DWORD *)this + 11) + v98);
        v98 += 16;
        *v103 = v101;
        v103[1] = v102;
      }
      while ( v99 < *((_DWORD *)this + 8) );
    }
    *((_DWORD *)this + 9) = *((_DWORD *)a2 + 9);
  }
  else
  {
    v77 = (void *)*((_DWORD *)this + 11);
    *((_DWORD *)this + 8) = 0;
    *((_DWORD *)this + 9) = 0;
    if ( v77 )
      CMemoryMgr::Free(v77, (void *)v45);
    v78 = (void *)*((_DWORD *)this + 10);
    *((_DWORD *)this + 11) = 0;
    if ( v78 )
      CMemoryMgr::Free(v78, (void *)v45);
    *((_DWORD *)this + 10) = 0;
  }
  return this;
}


// ============================================================

// Address: 0x2e1628
// Original: _ZN14CCollisionData23CalculateTrianglePlanesEv
// Demangled: CCollisionData::CalculateTrianglePlanes(void)
int __fastcall CCollisionData::CalculateTrianglePlanes(CCollisionData *this)
{
  int result; // r0
  int v3; // r1
  int v4; // r5
  int v5; // r6
  int v6; // r4

  result = (int)CMemoryMgr::Malloc(20 * *((__int16 *)this + 2) + 20, 0x14u);
  v3 = *((__int16 *)this + 2);
  *((_DWORD *)this + 7) = result;
  if ( v3 >= 1 )
  {
    CColTrianglePlane::Set();
    result = *((__int16 *)this + 2);
    if ( result >= 2 )
    {
      v4 = 1;
      v5 = 16;
      v6 = 20;
      do
      {
        CColTrianglePlane::Set();
        result = *((__int16 *)this + 2);
        ++v4;
        v6 += 20;
        v5 += 16;
      }
      while ( v4 < result );
    }
  }
  return result;
}


// ============================================================

// Address: 0x2e168a
// Original: _ZNK14CCollisionData16GetTrianglePointER7CVectori
// Demangled: CCollisionData::GetTrianglePoint(CVector &,int)
int __fastcall CCollisionData::GetTrianglePoint(int a1, _DWORD *a2, int a3)
{
  int v3; // r2
  int result; // r0

  v3 = 3 * a3;
  *a2 = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 4 * v3);
  a2[1] = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 4 * v3 + 4);
  result = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 4 * v3 + 8);
  a2[2] = result;
  return result;
}


// ============================================================

// Address: 0x2e16ac
// Original: _ZNK14CCollisionData20GetShadTrianglePointER7CVectori
// Demangled: CCollisionData::GetShadTrianglePoint(CVector &,int)
int __fastcall CCollisionData::GetShadTrianglePoint(int a1, _DWORD *a2, int a3)
{
  int v3; // r2
  int result; // r0

  v3 = 3 * a3;
  *a2 = *(_DWORD *)(*(_DWORD *)(a1 + 40) + 4 * v3);
  a2[1] = *(_DWORD *)(*(_DWORD *)(a1 + 40) + 4 * v3 + 4);
  result = *(_DWORD *)(*(_DWORD *)(a1 + 40) + 4 * v3 + 8);
  a2[2] = result;
  return result;
}


// ============================================================

// Address: 0x2e16ce
// Original: _ZN14CCollisionData20RemoveTrianglePlanesEv
// Demangled: CCollisionData::RemoveTrianglePlanes(void)
int __fastcall CCollisionData::RemoveTrianglePlanes(CCollisionData *this, void *a2)
{
  void *v3; // r0
  int result; // r0

  v3 = (void *)*((_DWORD *)this + 7);
  if ( v3 )
    CMemoryMgr::Free(v3, a2);
  result = 0;
  *((_DWORD *)this + 7) = 0;
  return result;
}


// ============================================================

// Address: 0x2e16e4
// Original: _ZN14CCollisionData10SetLinkPtrEP5CLinkIPS_E
// Demangled: CCollisionData::SetLinkPtr(CLink<CCollisionData*> *)
_DWORD *__fastcall CCollisionData::SetLinkPtr(int a1, int a2)
{
  _DWORD *result; // r0

  result = (_DWORD *)((*(_DWORD *)(a1 + 28) + 20 * *(__int16 *)(a1 + 4) + 3) & 0xFFFFFFFC);
  *result = a2;
  return result;
}


// ============================================================

// Address: 0x2e16fc
// Original: _ZN14CCollisionData10GetLinkPtrEv
// Demangled: CCollisionData::GetLinkPtr(void)
int __fastcall CCollisionData::GetLinkPtr(CCollisionData *this)
{
  return *(_DWORD *)((*((_DWORD *)this + 7) + 20 * *((__int16 *)this + 2) + 3) & 0xFFFFFFFC);
}


// ============================================================

// Address: 0x2e1b86
// Original: _ZNK14CCollisionData12GetNoVectorsEv
// Demangled: CCollisionData::GetNoVectors(void)
int __fastcall CCollisionData::GetNoVectors(CCollisionData *this)
{
  int v1; // r12
  int v3; // r2
  int v4; // r3
  _QWORD *v5; // r0
  int v6; // r1
  __int64 v7; // kr00_8

  v1 = *((__int16 *)this + 2);
  if ( v1 < 1 )
    return 1;
  v3 = 0;
  v4 = 0;
  v5 = (_QWORD *)(*((_DWORD *)this + 6) + 4);
  do
  {
    v6 = *((_DWORD *)v5 - 1);
    ++v3;
    v7 = *v5;
    v5 += 2;
    if ( v6 > v4 )
      v4 = v6;
    if ( (int)v7 > v4 )
      v4 = v7;
    if ( SHIDWORD(v7) > v4 )
      v4 = HIDWORD(v7);
  }
  while ( v3 < v1 );
  return v4 + 1;
}


// ============================================================

// Address: 0x2e1bc6
// Original: _ZNK14CCollisionData16GetNoShadVectorsEv
// Demangled: CCollisionData::GetNoShadVectors(void)
int __fastcall CCollisionData::GetNoShadVectors(CCollisionData *this)
{
  int v1; // r12
  int v3; // r2
  int v4; // r3
  _QWORD *v5; // r0
  int v6; // r1
  __int64 v7; // kr00_8

  v1 = *((_DWORD *)this + 8);
  if ( v1 < 1 )
    return 1;
  v3 = 0;
  v4 = 0;
  v5 = (_QWORD *)(*((_DWORD *)this + 11) + 4);
  do
  {
    v6 = *((_DWORD *)v5 - 1);
    ++v3;
    v7 = *v5;
    v5 += 2;
    if ( v6 > v4 )
      v4 = v6;
    if ( (int)v7 > v4 )
      v4 = v7;
    if ( SHIDWORD(v7) > v4 )
      v4 = HIDWORD(v7);
  }
  while ( v3 < v1 );
  return v4 + 1;
}


// ============================================================
