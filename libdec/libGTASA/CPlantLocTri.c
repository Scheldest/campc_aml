
// Address: 0x19f088
// Original: j__ZN12CPlantLocTri7ReleaseEv
// Demangled: CPlantLocTri::Release(void)
// attributes: thunk
int __fastcall CPlantLocTri::Release(CPlantLocTri *this)
{
  return _ZN12CPlantLocTri7ReleaseEv(this);
}


// ============================================================

// Address: 0x19f9c8
// Original: j__ZN12CPlantLocTri3AddERK5RwV3dS2_S2_hhhh
// Demangled: CPlantLocTri::Add(RwV3d const&,RwV3d const&,RwV3d const&,uchar,uchar,uchar,uchar)
// attributes: thunk
int __fastcall CPlantLocTri::Add(int a1, int a2, int a3, int a4, CPlantSurfPropMgr *a5, int a6, int a7, int a8)
{
  return _ZN12CPlantLocTri3AddERK5RwV3dS2_S2_hhhh(a1, a2, a3, a4, a5, a6, a7, a8);
}


// ============================================================

// Address: 0x2cea90
// Original: _ZN12CPlantLocTri7ReleaseEv
// Demangled: CPlantLocTri::Release(void)
int __fastcall CPlantLocTri::Release(CPlantLocTri *this)
{
  unsigned __int16 v2; // r1
  char v3; // r0
  int v4; // r0
  int v5; // r1
  int v6; // r1
  unsigned __int16 *SurfProperties; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r0
  int v11; // r0
  char v12; // r0
  int v13; // r0
  int result; // r0

  v2 = 0;
  v3 = *((_BYTE *)this + 72);
  *((_WORD *)this + 34) = 0;
  *((_DWORD *)this + 16) = 0;
  if ( (v3 & 4) != 0 )
  {
    ProcObjectMan_c::ProcessTriangleRemoved((ProcObjectMan_c *)g_procObjMan, this);
    v3 = *((_BYTE *)this + 72);
  }
  if ( (v3 & 3) == 2 )
  {
    v4 = *((_DWORD *)this + 20);
    v5 = *((_DWORD *)this + 19);
    if ( v4 )
    {
      if ( v5 )
      {
        *(_DWORD *)(v5 + 80) = v4;
        v4 = *((_DWORD *)this + 20);
        v6 = *((_DWORD *)this + 19);
      }
      else
      {
        v6 = 0;
      }
      *(_DWORD *)(v4 + 76) = v6;
    }
    else
    {
      dword_70CB38 = *((_DWORD *)this + 19);
      if ( v5 )
        *(_DWORD *)(v5 + 80) = 0;
    }
    v11 = CPlantMgr::m_UnusedLocTriListHead;
    *((_DWORD *)this + 19) = CPlantMgr::m_UnusedLocTriListHead;
    *((_DWORD *)this + 20) = 0;
    CPlantMgr::m_UnusedLocTriListHead = (int)this;
    if ( v11 )
      *(_DWORD *)(v11 + 80) = this;
    v12 = -2;
  }
  else
  {
    SurfProperties = (unsigned __int16 *)CPlantSurfPropMgr::GetSurfProperties(
                                           (CPlantSurfPropMgr *)*((unsigned __int8 *)this + 70),
                                           v2);
    v9 = *((_DWORD *)this + 20);
    v8 = *((_DWORD *)this + 19);
    if ( v9 )
    {
      if ( v8 )
      {
        *(_DWORD *)(v8 + 80) = v9;
        v9 = *((_DWORD *)this + 20);
        v10 = *((_DWORD *)this + 19);
      }
      else
      {
        v10 = 0;
      }
      *(_DWORD *)(v9 + 76) = v10;
    }
    else
    {
      CPlantMgr::m_CloseLocTriListHead[*SurfProperties] = v8;
      if ( v8 )
        *(_DWORD *)(v8 + 80) = 0;
    }
    v13 = CPlantMgr::m_UnusedLocTriListHead;
    *((_DWORD *)this + 19) = CPlantMgr::m_UnusedLocTriListHead;
    *((_DWORD *)this + 20) = 0;
    CPlantMgr::m_UnusedLocTriListHead = (int)this;
    if ( v13 )
      *(_DWORD *)(v13 + 80) = this;
    v12 = -1;
  }
  *((_BYTE *)this + 70) = v12;
  result = *((_BYTE *)this + 72) & 0xF8;
  *((_BYTE *)this + 72) = result;
  return result;
}


// ============================================================

// Address: 0x2ceb70
// Original: _ZN12CPlantLocTri3AddERK5RwV3dS2_S2_hhhh
// Demangled: CPlantLocTri::Add(RwV3d const&,RwV3d const&,RwV3d const&,uchar,uchar,uchar,uchar)
int __fastcall CPlantLocTri::Add(
        int a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        CPlantSurfPropMgr *a5,
        char a6,
        char a7,
        char a8)
{
  __int64 v8; // d16
  int v9; // r4
  __int64 v10; // d16
  char v11; // lr
  __int64 v12; // d16
  int v13; // r5
  float v14; // s0
  float v15; // s2
  float v16; // s4
  int v17; // r0
  __int64 v18; // kr00_8
  int v19; // r1
  float *SurfProperties; // r5
  float v21; // s2
  float v22; // s6
  float v23; // s4
  float v24; // s8
  float v25; // s10
  float v26; // s0
  float v27; // s2
  float v28; // s6
  float v29; // s0
  unsigned int v30; // r8
  unsigned int v31; // r9
  unsigned int v32; // r6
  int v33; // r0
  int v34; // r1
  int v35; // r2
  int v36; // r0
  int v37; // r2
  int v38; // r0
  int v39; // r1
  int v40; // r1
  int v41; // r0
  float v43; // [sp+4h] [bp-4Ch] BYREF
  float v44; // [sp+8h] [bp-48h]
  float v45; // [sp+Ch] [bp-44h]
  float v46; // [sp+10h] [bp-40h]
  float v47; // [sp+14h] [bp-3Ch]
  float v48; // [sp+18h] [bp-38h]
  float v49[13]; // [sp+1Ch] [bp-34h] BYREF

  v8 = *a2;
  v9 = a1;
  *(_DWORD *)(a1 + 8) = *((_DWORD *)a2 + 2);
  *(_QWORD *)a1 = v8;
  v10 = *a3;
  *(_DWORD *)(a1 + 20) = *((_DWORD *)a3 + 2);
  *(_QWORD *)(a1 + 12) = v10;
  v11 = *(_BYTE *)(a1 + 72);
  v12 = *a4;
  *(_DWORD *)(a1 + 32) = *((_DWORD *)a4 + 2);
  v13 = a7 & 1 | (2 * (a8 & 1));
  *(_BYTE *)(a1 + 72) = v11 & 0xF8 | v13;
  *(_BYTE *)(a1 + 70) = (_BYTE)a5;
  *(_BYTE *)(a1 + 71) = a6;
  *(_QWORD *)(a1 + 24) = v12;
  v14 = (float)((float)(*(float *)a2 + *(float *)a3) + *(float *)a4) * 0.33333;
  v15 = (float)((float)(*((float *)a2 + 1) + *((float *)a3 + 1)) + *((float *)a4 + 1)) * 0.33333;
  v16 = (float)((float)(*((float *)a2 + 2) + *((float *)a3 + 2)) + *((float *)a4 + 2)) * 0.33333;
  *(float *)(a1 + 44) = v16;
  *(float *)(a1 + 40) = v15;
  *(float *)(a1 + 36) = v14;
  *(float *)(a1 + 48) = sqrtf(
                          (float)((float)((float)(v14 - *(float *)a1) * (float)(v14 - *(float *)a1))
                                + (float)((float)(v15 - *(float *)(a1 + 4)) * (float)(v15 - *(float *)(a1 + 4))))
                        + (float)((float)(v16 - *(float *)(a1 + 8)) * (float)(v16 - *(float *)(a1 + 8))))
                      * 1.75;
  if ( v13 == 2 )
  {
    v18 = *(_QWORD *)(a1 + 76);
    v17 = *(_DWORD *)(a1 + 80);
    if ( v17 )
    {
      if ( (_DWORD)v18 )
      {
        *(_DWORD *)(v18 + 80) = v17;
        v17 = *(_DWORD *)(v9 + 80);
        v19 = *(_DWORD *)(v9 + 76);
      }
      else
      {
        v19 = 0;
      }
      *(_DWORD *)(v17 + 76) = v19;
    }
    else
    {
      CPlantMgr::m_UnusedLocTriListHead = v18;
      if ( (_DWORD)v18 )
        *(_DWORD *)(v18 + 80) = 0;
    }
  }
  else
  {
    SurfProperties = (float *)CPlantSurfPropMgr::GetSurfProperties(a5, (unsigned __int16)a2);
    if ( !SurfProperties )
      return 0;
    v21 = *(float *)(v9 + 4);
    v22 = *(float *)(v9 + 12) - *(float *)v9;
    v23 = *(float *)(v9 + 8);
    v24 = *(float *)(v9 + 16) - v21;
    v25 = *(float *)(v9 + 20) - v23;
    v26 = *(float *)(v9 + 24) - *(float *)v9;
    v27 = *(float *)(v9 + 28) - v21;
    v49[1] = v24;
    v49[0] = v22;
    v49[2] = v25;
    v28 = *(float *)(v9 + 32);
    v47 = v27;
    v46 = v26;
    v48 = v28 - v23;
    CrossProduct((const CVector *)&v43, (const CVector *)v49);
    v29 = sqrtf((float)((float)(v43 * v43) + (float)(v44 * v44)) + (float)(v45 * v45)) * 0.5;
    v30 = (unsigned int)(float)(v29 * SurfProperties[8]);
    v31 = (unsigned int)(float)(v29 * SurfProperties[18]);
    v32 = (unsigned int)(float)(v29 * SurfProperties[28]);
    if ( v31 + v30 + v32 )
    {
      *(float *)(v9 + 52) = (float)((float)rand() * 4.6566e-10) + 0.0;
      *(float *)(v9 + 56) = (float)((float)rand() * 4.6566e-10) + 0.0;
      v33 = rand();
      v34 = *(_DWORD *)(v9 + 80);
      v35 = *(_DWORD *)(v9 + 76);
      *(_WORD *)(v9 + 68) = v32;
      *(_WORD *)(v9 + 66) = v31;
      *(_WORD *)(v9 + 64) = v30;
      *(float *)(v9 + 60) = (float)((float)v33 * 4.6566e-10) + 0.0;
      v36 = *(unsigned __int16 *)SurfProperties;
      if ( v34 )
      {
        if ( v35 )
        {
          *(_DWORD *)(v35 + 80) = v34;
          v34 = *(_DWORD *)(v9 + 80);
          v37 = *(_DWORD *)(v9 + 76);
        }
        else
        {
          v37 = 0;
        }
        *(_DWORD *)(v34 + 76) = v37;
      }
      else
      {
        CPlantMgr::m_UnusedLocTriListHead = v35;
        if ( v35 )
          *(_DWORD *)(v35 + 80) = 0;
      }
      *(_DWORD *)(v9 + 76) = CPlantMgr::m_CloseLocTriListHead[v36];
      *(_DWORD *)(v9 + 80) = 0;
      CPlantMgr::m_CloseLocTriListHead[v36] = v9;
      v41 = *(_DWORD *)(v9 + 76);
      goto LABEL_30;
    }
    if ( (*(_BYTE *)(v9 + 72) & 2) == 0 )
      return 0;
    v38 = *(_DWORD *)(v9 + 80);
    v39 = *(_DWORD *)(v9 + 76);
    *(_BYTE *)(v9 + 72) &= ~1u;
    if ( v38 )
    {
      if ( v39 )
      {
        *(_DWORD *)(v39 + 80) = v38;
        v38 = *(_DWORD *)(v9 + 80);
        v40 = *(_DWORD *)(v9 + 76);
      }
      else
      {
        v40 = 0;
      }
      *(_DWORD *)(v38 + 76) = v40;
    }
    else
    {
      CPlantMgr::m_UnusedLocTriListHead = v39;
      if ( v39 )
        *(_DWORD *)(v39 + 80) = 0;
    }
  }
  v41 = dword_70CB38;
  *(_DWORD *)(v9 + 76) = dword_70CB38;
  *(_DWORD *)(v9 + 80) = 0;
  dword_70CB38 = v9;
LABEL_30:
  if ( v41 )
    *(_DWORD *)(v41 + 80) = v9;
  return v9;
}


// ============================================================
