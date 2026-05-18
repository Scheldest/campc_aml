
// Address: 0x1912b0
// Original: j__ZN9C3dMarker17UpdateZCoordinateE7CVectorf
// Demangled: C3dMarker::UpdateZCoordinate(CVector,float)
// attributes: thunk
int C3dMarker::UpdateZCoordinate()
{
  return _ZN9C3dMarker17UpdateZCoordinateE7CVectorf();
}


// ============================================================

// Address: 0x19a744
// Original: j__ZN9C3dMarker6RenderEv
// Demangled: C3dMarker::Render(void)
// attributes: thunk
int __fastcall C3dMarker::Render(C3dMarker *this)
{
  return _ZN9C3dMarker6RenderEv(this);
}


// ============================================================

// Address: 0x19e210
// Original: j__ZN9C3dMarker9AddMarkerEjtfhhhhtfs
// Demangled: C3dMarker::AddMarker(uint,ushort,float,uchar,uchar,uchar,uchar,ushort,float,short)
// attributes: thunk
int __fastcall C3dMarker::AddMarker(
        C3dMarker *this,
        unsigned int a2,
        unsigned __int16 a3,
        float a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        unsigned __int16 a9,
        float a10,
        __int16 a11)
{
  return _ZN9C3dMarker9AddMarkerEjtfhhhhtfs(this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}


// ============================================================

// Address: 0x5c2ffc
// Original: _ZN9C3dMarker9AddMarkerEjtfhhhhtfs
// Demangled: C3dMarker::AddMarker(uint,ushort,float,uchar,uchar,uchar,uchar,ushort,float,short)
bool __fastcall C3dMarker::AddMarker(
        C3dMarker *this,
        unsigned int a2,
        int a3,
        float a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        unsigned __int16 a9,
        float a10,
        __int16 a11)
{
  float v14; // s18
  int v15; // r0
  int v16; // r6
  int v17; // r11
  int v18; // r0
  int v19; // r1
  int v20; // r1
  _DWORD v22[13]; // [sp+4h] [bp-34h] BYREF

  *((_DWORD *)this + 21) = a2;
  CMatrix::SetUnity(this);
  v14 = a4;
  v22[0] = 0;
  if ( a3 == 3 )
  {
    v15 = C3dMarkers::m_pRpClumpArray[0];
  }
  else if ( a3 == 2 )
  {
    v15 = dword_A5795C;
  }
  else
  {
    v15 = C3dMarkers::m_pRpClumpArray[a3];
  }
  RpClumpForAllAtomics(v15, MarkerAtomicCB, v22);
  v16 = RpAtomicClone();
  RwFrameCreate();
  RpAtomicSetFrame();
  CVisibilityPlugins::SetAtomicRenderCallback();
  v17 = *(_DWORD *)(v16 + 24);
  *(_DWORD *)(v17 + 8) |= 0x40u;
  *((_DWORD *)this + 18) = v16;
  CMatrix::Attach();
  v18 = *((_DWORD *)this + 18);
  v19 = **(_DWORD **)(v17 + 32);
  *((_WORD *)this + 46) = a9;
  *((_WORD *)this + 47) = a11;
  *((_BYTE *)this + 90) = a7;
  *((_BYTE *)this + 91) = a8;
  *((_DWORD *)this + 19) = v19;
  *((float *)this + 25) = a10;
  *((float *)this + 26) = v14;
  *((float *)this + 27) = v14;
  *((_BYTE *)this + 88) = a5;
  *((_BYTE *)this + 89) = a6;
  v20 = CTimer::m_snTimeInMilliseconds;
  *((_WORD *)this + 40) = a3;
  *((_DWORD *)this + 24) = v20;
  *((_DWORD *)this + 35) = 1199570688;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = v20;
  return v18 != 0;
}


// ============================================================

// Address: 0x5c3134
// Original: _ZN9C3dMarker18DeleteMarkerObjectEv
// Demangled: C3dMarker::DeleteMarkerObject(void)
int __fastcall C3dMarker::DeleteMarkerObject(C3dMarker *this)
{
  int result; // r0

  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 20) = 257;
  *((_DWORD *)this + 21) = 0;
  RpAtomicDestroy();
  result = RwFrameDestroy();
  *((_DWORD *)this + 18) = 0;
  return result;
}


// ============================================================

// Address: 0x5c3160
// Original: _ZN9C3dMarker6RenderEv
// Demangled: C3dMarker::Render(void)
void __fastcall C3dMarker::Render(C3dMarker *this)
{
  int v2; // r1
  int v3; // r0
  int v4; // r3
  int v5; // r6
  float v6; // s8
  float v7; // s0
  float v8; // s2
  float v9; // s4
  unsigned int v10; // r0
  float v11; // s0
  double v12; // [sp+0h] [bp-110h] BYREF
  int v13; // [sp+8h] [bp-108h]
  _DWORD v14[3]; // [sp+Ch] [bp-104h] BYREF
  double v15; // [sp+18h] [bp-F8h] BYREF
  int v16; // [sp+20h] [bp-F0h]
  double v17; // [sp+28h] [bp-E8h] BYREF
  int v18; // [sp+30h] [bp-E0h]
  double v19; // [sp+38h] [bp-D8h]
  int v20; // [sp+40h] [bp-D0h]
  int v21; // [sp+48h] [bp-C8h]
  int v22; // [sp+4Ch] [bp-C4h]
  int v23; // [sp+50h] [bp-C0h]
  int v24; // [sp+68h] [bp-A8h]
  int v25; // [sp+6Ch] [bp-A4h]
  float v26; // [sp+70h] [bp-A0h] BYREF
  float v27; // [sp+74h] [bp-9Ch]
  float v28; // [sp+78h] [bp-98h]
  float v29; // [sp+80h] [bp-90h]
  float v30; // [sp+84h] [bp-8Ch]
  float v31; // [sp+88h] [bp-88h]
  float v32; // [sp+90h] [bp-80h]
  float v33; // [sp+94h] [bp-7Ch]
  float v34; // [sp+98h] [bp-78h]
  int v35; // [sp+B0h] [bp-60h]
  int v36; // [sp+B4h] [bp-5Ch]
  double v37; // [sp+B8h] [bp-58h] BYREF
  int v38; // [sp+C0h] [bp-50h]

  if ( *((_DWORD *)this + 18) )
  {
    if ( *((_WORD *)this + 40) == 1 )
      v2 = 1;
    else
      v2 = 2;
    RwRenderStateSet(20, v2);
    CMatrix::UpdateRW(this);
    v35 = 0;
    v36 = 0;
    CMatrix::Attach();
    v3 = *((unsigned __int16 *)this + 40);
    if ( (unsigned __int16)(v3 - 3) <= 1u )
    {
      v24 = 0;
      v25 = 0;
      CMatrix::SetUnity((CMatrix *)&v17);
      if ( *((float *)this + 30) != 0.0 || *((float *)this + 32) != 1.0 )
      {
        v14[0] = 0;
        v14[1] = 0;
        v14[2] = 1065353216;
        CrossProduct((const CVector *)&v15, (const CVector *)v14);
        v38 = v16;
        v37 = v15;
        CVector::Normalise((CVector *)&v37);
        CrossProduct((const CVector *)&v12, (C3dMarker *)((char *)this + 120));
        v16 = v13;
        v15 = v12;
        CVector::Normalise((CVector *)&v15);
        v17 = v37;
        v19 = v15;
        v4 = *((_DWORD *)this + 31);
        v5 = *((_DWORD *)this + 32);
        v21 = *((_DWORD *)this + 30);
        v22 = v4;
        v18 = v38;
        v20 = v16;
        v23 = v5;
      }
      operator*();
      CMatrix::operator=();
      CMatrix::~CMatrix((CMatrix *)&v37);
      CMatrix::~CMatrix((CMatrix *)&v17);
      v3 = *((unsigned __int16 *)this + 40);
    }
    v6 = *((float *)this + 27);
    v7 = v6 * v31;
    v8 = v6 * v28;
    v9 = v6 * v34;
    v26 = v6 * v26;
    v27 = v6 * v27;
    v28 = v6 * v28;
    v29 = v6 * v29;
    v30 = v6 * v30;
    v31 = v6 * v31;
    v32 = v6 * v32;
    v33 = v6 * v33;
    v34 = v6 * v34;
    if ( v3 == 2 )
    {
      v31 = v7 * 20.0;
      v28 = v8 * 20.0;
      v34 = v9 * 20.0;
    }
    CMatrix::UpdateRW((CMatrix *)&v26);
    RwFrameUpdateObjects(*(_DWORD *)(*((_DWORD *)this + 18) + 4));
    v10 = *((unsigned __int16 *)this + 40);
    if ( v10 <= 6 && ((1 << v10) & 0x61) != 0 )
    {
      v11 = 255.0;
      *((_BYTE *)this + 91) = -1;
    }
    else
    {
      v11 = (float)*((unsigned __int8 *)this + 91);
    }
    emu_EnableAlphaModulate(v11 / 255.0);
    *(_DWORD *)(*((_DWORD *)this + 19) + 4) = *((_DWORD *)this + 22);
    SetBrightMarkerColours(*((float *)this + 28));
    RwRenderStateSet(8, 0);
    if ( *((_WORD *)this + 40) == 3 )
      RwRenderStateSet(20, 1);
    (*(void (**)(void))(*((_DWORD *)this + 18) + 72))();
    RwRenderStateSet(8, 1);
    emu_DisableAlphaModulate();
    ReSetAmbientAndDirectionalColours();
    CMatrix::~CMatrix((CMatrix *)&v26);
  }
}


// ============================================================

// Address: 0x5c33a0
// Original: _ZN9C3dMarker17UpdateZCoordinateE7CVectorf
// Demangled: C3dMarker::UpdateZCoordinate(CVector,float)
int __fastcall C3dMarker::UpdateZCoordinate(int a1, float a2, int a3, int a4, float a5)
{
  float v6; // s0
  int result; // r0
  float v8; // s2
  float v9; // r0
  int v10; // s2
  CEntity **v11; // [sp+4h] [bp-Ch] BYREF

  v6 = *(float *)(a1 + 48);
  result = *(unsigned __int16 *)(a1 + 132);
  if ( result == (unsigned __int16)(int)v6 )
  {
    v8 = *(float *)(a1 + 52);
    result = *(unsigned __int16 *)(a1 + 134);
    if ( result == (unsigned __int16)(int)v8 )
      return result;
  }
  else
  {
    v8 = *(float *)(a1 + 52);
  }
  if ( (float)((float)((float)(a2 - v6) * (float)(a2 - v6))
             + (float)((float)(*(float *)&a3 - v8) * (float)(*(float *)&a3 - v8))) < 10000.0 )
  {
    result = CColStore::HasCollisionLoaded((CColStore *)(a1 + 48), 0, a3);
    if ( result == 1 )
    {
      v9 = COERCE_FLOAT(
             CWorld::FindGroundZFor3DCoord(
               *(CWorld **)(a1 + 48),
               *(float *)(a1 + 52),
               *(float *)(a1 + 56) + 1.0,
               COERCE_FLOAT((CEntity ***)((char *)&v11 + 3)),
               0,
               v11));
      if ( HIBYTE(v11) )
        *(float *)(a1 + 56) = v9 + (float)(a5 * -0.05);
      v10 = (int)*(float *)(a1 + 52);
      *(_WORD *)(a1 + 132) = (int)*(float *)(a1 + 48);
      result = v10;
      *(_WORD *)(a1 + 134) = v10;
    }
  }
  return result;
}


// ============================================================

// Address: 0x5c3480
// Original: _ZN9C3dMarker21IsZCoordinateUpToDateEv
// Demangled: C3dMarker::IsZCoordinateUpToDate(void)
bool __fastcall C3dMarker::IsZCoordinateUpToDate(C3dMarker *this)
{
  return *((unsigned __int16 *)this + 66) == (unsigned __int16)(int)*((float *)this + 12)
      && *((unsigned __int16 *)this + 67) == (unsigned __int16)(int)*((float *)this + 13);
}


// ============================================================

// Address: 0x5c34b4
// Original: _ZN9C3dMarker27SetZCoordinateIfNotUpToDateEf
// Demangled: C3dMarker::SetZCoordinateIfNotUpToDate(float)
int __fastcall C3dMarker::SetZCoordinateIfNotUpToDate(int this, float a2)
{
  if ( *(unsigned __int16 *)(this + 132) != (unsigned __int16)(int)*(float *)(this + 48)
    || *(unsigned __int16 *)(this + 134) != (unsigned __int16)(int)*(float *)(this + 52) )
  {
    *(float *)(this + 56) = a2;
  }
  return this;
}


// ============================================================
