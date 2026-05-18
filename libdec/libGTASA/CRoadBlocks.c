
// Address: 0x18de2c
// Original: j__ZN11CRoadBlocks4InitEv
// Demangled: CRoadBlocks::Init(void)
// attributes: thunk
int __fastcall CRoadBlocks::Init(CRoadBlocks *this)
{
  return _ZN11CRoadBlocks4InitEv(this);
}


// ============================================================

// Address: 0x1908cc
// Original: j__ZN11CRoadBlocks27GenerateRoadBlockPedsForCarEP8CVehiclei8ePedType
// Demangled: CRoadBlocks::GenerateRoadBlockPedsForCar(CVehicle *,int,ePedType)
// attributes: thunk
int CRoadBlocks::GenerateRoadBlockPedsForCar()
{
  return _ZN11CRoadBlocks27GenerateRoadBlockPedsForCarEP8CVehiclei8ePedType();
}


// ============================================================

// Address: 0x1948d4
// Original: j__ZN11CRoadBlocks23RegisterScriptRoadBlockE7CVectorS0_b
// Demangled: CRoadBlocks::RegisterScriptRoadBlock(CVector,CVector,bool)
// attributes: thunk
int CRoadBlocks::RegisterScriptRoadBlock()
{
  return _ZN11CRoadBlocks23RegisterScriptRoadBlockE7CVectorS0_b();
}


// ============================================================

// Address: 0x198354
// Original: j__ZN11CRoadBlocks21ClearScriptRoadBlocksEv
// Demangled: CRoadBlocks::ClearScriptRoadBlocks(void)
// attributes: thunk
int __fastcall CRoadBlocks::ClearScriptRoadBlocks(CRoadBlocks *this)
{
  return _ZN11CRoadBlocks21ClearScriptRoadBlocksEv(this);
}


// ============================================================

// Address: 0x19cd40
// Original: j__ZN11CRoadBlocks18GenerateRoadBlocksEv
// Demangled: CRoadBlocks::GenerateRoadBlocks(void)
// attributes: thunk
int __fastcall CRoadBlocks::GenerateRoadBlocks(CRoadBlocks *this)
{
  return _ZN11CRoadBlocks18GenerateRoadBlocksEv(this);
}


// ============================================================

// Address: 0x19d1e4
// Original: j__ZN11CRoadBlocks29CreateRoadBlockBetween2PointsE7CVectorS0_j
// Demangled: CRoadBlocks::CreateRoadBlockBetween2Points(CVector,CVector,uint)
// attributes: thunk
int CRoadBlocks::CreateRoadBlockBetween2Points()
{
  return _ZN11CRoadBlocks29CreateRoadBlockBetween2PointsE7CVectorS0_j();
}


// ============================================================

// Address: 0x19ff38
// Original: j__ZN11CRoadBlocks20GetRoadBlockNodeInfoE12CNodeAddressRfR7CVector
// Demangled: CRoadBlocks::GetRoadBlockNodeInfo(CNodeAddress,float &,CVector &)
// attributes: thunk
int __fastcall CRoadBlocks::GetRoadBlockNodeInfo(int a1, int a2, CVector *this)
{
  return _ZN11CRoadBlocks20GetRoadBlockNodeInfoE12CNodeAddressRfR7CVector(a1, a2, this);
}


// ============================================================

// Address: 0x1a0b80
// Original: j__ZN11CRoadBlocks28ClearSpaceForRoadBlockObjectE7CVectorS0_
// Demangled: CRoadBlocks::ClearSpaceForRoadBlockObject(CVector,CVector)
// attributes: thunk
int CRoadBlocks::ClearSpaceForRoadBlockObject()
{
  return _ZN11CRoadBlocks28ClearSpaceForRoadBlockObjectE7CVectorS0_();
}


// ============================================================

// Address: 0x324f20
// Original: _ZN11CRoadBlocks4InitEv
// Demangled: CRoadBlocks::Init(void)
void *__fastcall CRoadBlocks::Init(CRoadBlocks *this)
{
  const char *v1; // r2
  AndroidFile *v2; // r4
  unsigned int v3; // r1
  void *result; // r0

  LOBYTE(CRoadBlocks::bGenerateDynamicRoadBlocks) = 0;
  memset(&CRoadBlocks::InOrOut, 1, 0x145u);
  v2 = (AndroidFile *)CFileMgr::OpenFile((CFileMgr *)"data\\paths\\roadblox.dat", "rb", v1);
  OS_FileRead(v2, &CRoadBlocks::NumRoadBlocks, 4u);
  OS_FileRead(v2, &CRoadBlocks::RoadBlockNodes, 0x514u);
  CFileMgr::CloseFile(v2, v3);
  result = &CRoadBlocks::aScriptRoadBlocks;
  byte_7B75E0 = 0;
  byte_7B75C4 = 0;
  byte_7B75FC = 0;
  byte_7B7618 = 0;
  byte_7B7634 = 0;
  byte_7B7650 = 0;
  byte_7B766C = 0;
  byte_7B7688 = 0;
  byte_7B76A4 = 0;
  byte_7B76C0 = 0;
  byte_7B76DC = 0;
  byte_7B76F8 = 0;
  byte_7B7714 = 0;
  byte_7B7730 = 0;
  byte_7B774C = 0;
  LOBYTE(dword_7B7768) = 0;
  return result;
}


// ============================================================

// Address: 0x324fe4
// Original: _ZN11CRoadBlocks21ClearScriptRoadBlocksEv
// Demangled: CRoadBlocks::ClearScriptRoadBlocks(void)
void *__fastcall CRoadBlocks::ClearScriptRoadBlocks(CRoadBlocks *this)
{
  void *result; // r0

  result = &CRoadBlocks::aScriptRoadBlocks;
  byte_7B75E0 = 0;
  byte_7B75C4 = 0;
  byte_7B75FC = 0;
  byte_7B7618 = 0;
  byte_7B7634 = 0;
  byte_7B7650 = 0;
  byte_7B766C = 0;
  byte_7B7688 = 0;
  byte_7B76A4 = 0;
  byte_7B76C0 = 0;
  byte_7B76DC = 0;
  byte_7B76F8 = 0;
  byte_7B7714 = 0;
  byte_7B7730 = 0;
  byte_7B774C = 0;
  LOBYTE(dword_7B7768) = 0;
  return result;
}


// ============================================================

// Address: 0x325030
// Original: _ZN11CRoadBlocks18GenerateRoadBlocksEv
// Demangled: CRoadBlocks::GenerateRoadBlocks(void)
void __fastcall CRoadBlocks::GenerateRoadBlocks(CRoadBlocks *this)
{
  int v1; // r1
  unsigned int v2; // r6
  unsigned int v3; // r0
  int v4; // r9
  signed int v5; // r5
  int v6; // r0
  int v7; // r11
  unsigned int v8; // r0
  int v9; // r1
  int v10; // r10
  __int16 *v11; // r10
  int v12; // t1
  float v13; // s0
  __int16 *v14; // r8
  float v15; // s0
  float v16; // s4
  float v17; // s2
  int v18; // s2
  float v19; // s4
  float v20; // s8
  float v21; // s2
  float v22; // s10
  unsigned int v23; // r10
  int v24; // r8
  int v25; // r6
  __int16 *v26; // r6
  int v27; // t1
  float v28; // s23
  float v29; // s0
  char v30; // r11
  int v31; // r0
  float *v32; // r5
  float v33; // s16
  char *v34; // r6
  float32x2_t v35; // d9
  float32x2_t v36; // d10
  float v37; // s22
  char *v38; // r8
  float32x2_t v39; // d16
  unsigned __int64 v40; // d1
  char v41; // r0
  __int16 *v42; // [sp+28h] [bp-1A8h]
  __int16 *v43; // [sp+58h] [bp-178h]
  float v44; // [sp+6Ch] [bp-164h] BYREF
  float32x2_t v45; // [sp+70h] [bp-160h]
  _BYTE v46[4]; // [sp+78h] [bp-158h] BYREF
  _BYTE v47[44]; // [sp+7Ch] [bp-154h] BYREF
  float v48[3]; // [sp+A8h] [bp-128h] BYREF
  float v49[3]; // [sp+B4h] [bp-11Ch] BYREF
  float v50[3]; // [sp+C0h] [bp-110h] BYREF
  float v51; // [sp+CCh] [bp-104h] BYREF
  float v52; // [sp+D0h] [bp-100h]
  float v53; // [sp+D4h] [bp-FCh]
  _BYTE v54[64]; // [sp+D8h] [bp-F8h] BYREF
  int v55; // [sp+118h] [bp-B8h]
  int v56; // [sp+11Ch] [bp-B4h]
  _BYTE v57[64]; // [sp+120h] [bp-B0h] BYREF
  int v58; // [sp+160h] [bp-70h]
  int v59; // [sp+164h] [bp-6Ch]
  float v60; // [sp+168h] [bp-68h] BYREF
  float v61[25]; // [sp+16Ch] [bp-64h] BYREF

  v58 = 0;
  v59 = 0;
  v55 = 0;
  v56 = 0;
  if ( *(_WORD *)(FindPlayerWanted(-1) + 28) && FindPlayerVehicle(-1, 0) )
  {
    if ( !(_BYTE)CRoadBlocks::bGenerateDynamicRoadBlocks )
      memset(CRoadBlocks::InOrOut, 1, 0x145u);
    v1 = CRoadBlocks::NumRoadBlocks;
    v2 = 325 * (CTimer::m_FrameCounter & 0xF) + 325;
    v3 = 325 * (CTimer::m_FrameCounter & 0xF);
    LOBYTE(CRoadBlocks::bGenerateDynamicRoadBlocks) = 1;
    v4 = v2 >> 4;
    if ( CRoadBlocks::NumRoadBlocks >= (int)(v2 >> 4) )
      v1 = v2 >> 4;
    v5 = v3 >> 4;
    if ( (int)(v3 >> 4) < v1 )
    {
      do
      {
        v23 = CRoadBlocks::RoadBlockNodes[v5];
        v24 = ThePaths[(unsigned __int16)v23 + 513];
        if ( v24 )
        {
          FindPlayerCoors((int)&v44);
          v25 = v24 + 28 * HIWORD(v23);
          v27 = *(__int16 *)(v25 + 8);
          v26 = (__int16 *)(v25 + 8);
          v28 = v44 + (float)((float)v27 * -0.125);
          if ( v28 <= -90.0
            || v28 >= 90.0
            || (FindPlayerCoors((int)&v44),
                v43 = v26 + 1,
                v29 = v45.n64_f32[0] + (float)((float)v26[1] * -0.125),
                v29 <= -90.0)
            || v29 >= 90.0
            || sqrtf((float)(v28 * v28) + (float)(v29 * v29)) >= 90.0 )
          {
            CRoadBlocks::InOrOut[v5] = 0;
          }
          else if ( !CRoadBlocks::InOrOut[v5] )
          {
            CRoadBlocks::InOrOut[v5] = 1;
            v30 = rand();
            if ( (v30 & 0x7Fu) < *(unsigned __int16 *)(FindPlayerWanted(-1) + 28)
              && CRoadBlocks::GetRoadBlockNodeInfo(v23, (int)v61, (CVector *)&v51) == 1 )
            {
              if ( *(_BYTE *)(v24 + 28 * HIWORD(v23) + 22) )
              {
                CRoadBlocks::CreateRoadBlockBetween2Points();
              }
              else
              {
                v42 = v26 + 2;
                v6 = CRoadBlocks::NumRoadBlocks;
                if ( CRoadBlocks::NumRoadBlocks < 1 )
                {
                  v7 = 0;
LABEL_27:
                  if ( v7 != v6 )
                    goto LABEL_41;
                }
                else
                {
                  v7 = 0;
                  while ( 1 )
                  {
                    if ( v5 != v7 && !CRoadBlocks::InOrOut[v7] )
                    {
                      v8 = CRoadBlocks::RoadBlockNodes[v7];
                      v9 = ThePaths[(unsigned __int16)v8 + 513];
                      if ( v9 )
                      {
                        v10 = v9 + 28 * HIWORD(v8);
                        v12 = *(__int16 *)(v10 + 8);
                        v11 = (__int16 *)(v10 + 8);
                        v13 = (float)((float)*v26 * 0.125) - (float)((float)v12 * 0.125);
                        if ( v13 > -30.0 && v13 < 30.0 )
                        {
                          v14 = v11 + 1;
                          v15 = (float)((float)*v43 * 0.125) - (float)((float)v11[1] * 0.125);
                          if ( v15 > -30.0
                            && v15 < 30.0
                            && CRoadBlocks::GetRoadBlockNodeInfo(v8, (int)&v60, (CVector *)v50) == 1
                            && fabsf((float)((float)(v51 * v50[0]) + (float)(v52 * v50[1])) + (float)(v53 * v50[2])) > 0.7 )
                          {
                            v16 = (float)*v42 * 0.125;
                            v17 = (float)((float)*v26 * 0.125) + 0.0;
                            v49[1] = (float)((float)*v43 * 0.125) + 0.0;
                            v49[0] = v17;
                            v49[2] = v16 + 1.0;
                            v18 = *v11;
                            v19 = (float)v11[2];
                            v48[1] = (float)((float)*v14 * 0.125) + 0.0;
                            v48[0] = (float)((float)v18 * 0.125) + 0.0;
                            v48[2] = (float)(v19 * 0.125) + 1.0;
                            if ( !CWorld::ProcessLineOfSight(
                                    (int)v49,
                                    (int)v48,
                                    (int)v47,
                                    (int)v46,
                                    1,
                                    0,
                                    0,
                                    0,
                                    0,
                                    0,
                                    0,
                                    0) )
                              break;
                          }
                        }
                      }
                    }
                    ++v7;
                    v6 = CRoadBlocks::NumRoadBlocks;
                    if ( v7 >= CRoadBlocks::NumRoadBlocks )
                      goto LABEL_27;
                  }
                  v20 = (float)*v42 * 0.125;
                  v21 = (float)((float)*v11 * 0.125) - (float)((float)*v26 * 0.125);
                  v22 = (float)v11[2] * 0.125;
                  v52 = (float)((float)*v14 * 0.125) - (float)((float)*v43 * 0.125);
                  v51 = v21;
                  v53 = v22 - v20;
                  CVector::Normalise((CVector *)&v51);
                  CRoadBlocks::CreateRoadBlockBetween2Points();
                  CRoadBlocks::InOrOut[v7] = 1;
                  if ( v7 != CRoadBlocks::NumRoadBlocks )
                    goto LABEL_41;
                }
              }
              CRoadBlocks::CreateRoadBlockBetween2Points();
            }
          }
        }
LABEL_41:
        ++v5;
        v31 = CRoadBlocks::NumRoadBlocks;
        if ( CRoadBlocks::NumRoadBlocks >= v4 )
          v31 = v4;
      }
      while ( v5 < v31 );
    }
  }
  else
  {
    LOBYTE(CRoadBlocks::bGenerateDynamicRoadBlocks) = 0;
  }
  v32 = (float *)((char *)&CRoadBlocks::aScriptRoadBlocks + 28 * (CTimer::m_FrameCounter & 0xF));
  if ( *((_BYTE *)v32 + 24) )
  {
    v33 = *v32;
    v34 = (char *)&CRoadBlocks::aScriptRoadBlocks + 28 * (CTimer::m_FrameCounter & 0xF);
    v35.n64_u64[0] = (unsigned __int64)*((float32x2_t *)v34 + 2);
    v36.n64_u64[0] = *(unsigned __int64 *)(v34 + 4);
    v37 = *((float *)v34 + 3);
    FindPlayerCoors((int)&v44);
    v38 = v34 + 25;
    v39.n64_u64[0] = vsub_f32(vmul_f32(vadd_f32(v36, v35), (float32x2_t)0x3F0000003F000000LL), v45).n64_u64[0];
    v40 = vmul_f32(v39, v39).n64_u64[0];
    if ( sqrtf(
           (float)((float)((float)((float)((float)(v33 + v37) * 0.5) - v44)
                         * (float)((float)((float)(v33 + v37) * 0.5) - v44))
                 + *(float *)&v40)
         + *((float *)&v40 + 1)) >= 90.0 )
    {
      v41 = 1;
      goto LABEL_49;
    }
    if ( *v38 )
    {
      CRoadBlocks::CreateRoadBlockBetween2Points();
      v41 = 0;
LABEL_49:
      *v38 = v41;
    }
  }
  CMatrix::~CMatrix((CMatrix *)v54);
  CMatrix::~CMatrix((CMatrix *)v57);
}


// ============================================================

// Address: 0x325934
// Original: _ZN11CRoadBlocks20GetRoadBlockNodeInfoE12CNodeAddressRfR7CVector
// Demangled: CRoadBlocks::GetRoadBlockNodeInfo(CNodeAddress,float &,CVector &)
int __fastcall CRoadBlocks::GetRoadBlockNodeInfo(unsigned int a1, float *a2, CVector *this)
{
  unsigned int v3; // r6
  unsigned int v4; // r0
  int v5; // r4
  int v6; // r0
  int v7; // r4
  unsigned int v8; // r3
  unsigned int v9; // r4
  int result; // r0
  int v11; // r8
  int v12; // r11
  int v13; // lr
  int v14; // r10
  int v15; // r12
  unsigned int v16; // r4
  int v17; // r6
  unsigned int v18; // r9
  int v19; // r4
  unsigned int v20; // r5
  int v21; // r3
  unsigned int v22; // r5
  int v23; // r3
  float v24; // s2
  float v25; // s4
  float v26; // s6
  float v27; // s8

  v3 = 7 * HIWORD(a1);
  v4 = (unsigned int)&stru_3FFF8.st_value & (4 * a1);
  v5 = *(_DWORD *)((char *)&ThePaths[513] + v4);
  v6 = *(_DWORD *)((char *)&ThePaths[873] + v4);
  v7 = *(__int16 *)(v5 + 4 * v3 + 16);
  v8 = *(unsigned __int16 *)(v6 + 2 * v7);
  if ( !ThePaths[(v8 >> 10) + 513] )
    return 0;
  v9 = *(unsigned __int16 *)(v6 + 2 * v7 + 2);
  result = 0;
  if ( ThePaths[(v9 >> 10) + 513] )
  {
    v11 = 7 * (v9 & 0x3FF);
    v12 = 7 * (v8 & 0x3FF);
    v13 = ThePaths[(v9 >> 10) + 585];
    v14 = ThePaths[(v8 >> 10) + 585];
    v15 = v13 + 14 * (v9 & 0x3FF);
    v16 = *(unsigned __int16 *)(v15 + 11);
    v17 = v16 & 7;
    v18 = ((v16 >> 3) & 7) + v17;
    v19 = v14 + 14 * (v8 & 0x3FF);
    v20 = *(unsigned __int16 *)(v19 + 11);
    v21 = v20 & 7;
    v22 = ((v20 >> 3) & 7) + v21;
    if ( v22 > v18 )
      v17 = v21;
    v23 = v15;
    if ( v22 > v18 )
      v23 = v19;
    *a2 = (float)((float)(((*(unsigned __int16 *)(v23 + 11) >> 3) & 7u) + v17) * 5.0) + 5.0;
    v24 = (float)*(__int16 *)(v14 + 2 * v12);
    v25 = (float)*(__int16 *)(v13 + 2 * v11);
    v26 = (float)*(__int16 *)(v19 + 2);
    v27 = (float)*(__int16 *)(v15 + 2);
    *((_DWORD *)this + 2) = 0;
    *(float *)this = (float)(v27 * 0.125) - (float)(v26 * 0.125);
    *((float *)this + 1) = -(float)((float)(v25 * 0.125) - (float)(v24 * 0.125));
    CVector::Normalise(this);
    return 1;
  }
  return result;
}


// ============================================================

// Address: 0x325a88
// Original: _ZN11CRoadBlocks29CreateRoadBlockBetween2PointsE7CVectorS0_j
// Demangled: CRoadBlocks::CreateRoadBlockBetween2Points(CVector,CVector,uint)
void __fastcall CRoadBlocks::CreateRoadBlockBetween2Points(
        float a1,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        int a7)
{
  float v11; // s26
  float v12; // s24
  float v13; // s28
  CPopulation *PlayerCoors; // r0
  int v15; // r11
  int DefaultCopCarModel; // r2
  CWanted *PlayerWanted; // r0
  CWanted *v18; // r0
  CWanted *v19; // r0
  unsigned int v20; // r1
  int v21; // r0
  double v22; // d16
  float v23; // s24
  float v24; // s19
  float v25; // s21
  _BOOL4 v26; // r1
  int v27; // r2
  int v28; // r5
  int v29; // r0
  int v30; // r4
  float v31; // s26
  int v32; // r0
  unsigned int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int *v37; // r6
  int *v38; // r2
  char v39; // r3
  int v40; // r1
  float v41; // s0
  unsigned __int8 *v42; // r3
  float v43; // s25
  float v44; // s28
  float v45; // s23
  _BOOL4 v46; // r9
  unsigned __int8 v47; // r0
  float v48; // s0
  float v49; // s0
  unsigned int v50; // s2
  float v51; // s4
  unsigned __int8 v52; // r0
  float v53; // s28
  float *v54; // r0
  unsigned int v55; // r1
  int v56; // r4
  float v57; // r1
  int v58; // r3
  float v59; // r0
  float *v60; // r1
  int v61; // r9
  int v62; // r0
  float v63; // r0
  CVehicle *v64; // r1
  int v65; // r0
  int v66; // r1
  unsigned int v67; // r0
  int v68; // r10
  CEntity *v69; // r1
  int v70; // r0
  int CarNodeIndexFromDoor; // r2
  int v72; // r2
  int v73; // r4
  int v74; // r0
  unsigned __int64 v75; // d1
  int v76; // r6
  double v77; // d16
  double v78; // d16
  int v79; // r6
  float v80; // s24
  float v81; // s26
  int v82; // r0
  int v83; // r9
  int v84; // r11
  unsigned __int8 v85; // r0
  int v86; // s0
  float v87; // s0
  float v88; // r0
  unsigned int v89; // r1
  int v90; // r6
  float v91; // r1
  int v92; // r3
  float v93; // r0
  float *v94; // r1
  CEntity **v95; // [sp+4h] [bp-13Ch]
  float v96; // [sp+20h] [bp-120h]
  char v97; // [sp+28h] [bp-118h]
  int v98; // [sp+3Ch] [bp-104h]
  float v99; // [sp+40h] [bp-100h]
  unsigned __int8 *v100; // [sp+44h] [bp-FCh]
  int v101; // [sp+48h] [bp-F8h]
  int v102; // [sp+48h] [bp-F8h]
  float v103; // [sp+4Ch] [bp-F4h] BYREF
  float32x2_t v104; // [sp+50h] [bp-F0h]
  double v105; // [sp+58h] [bp-E8h] BYREF
  int v106; // [sp+60h] [bp-E0h]
  double v107; // [sp+68h] [bp-D8h] BYREF
  float v108; // [sp+70h] [bp-D0h] BYREF
  char v109; // [sp+7Ah] [bp-C6h]
  char v110; // [sp+7Bh] [bp-C5h] BYREF
  char v111; // [sp+7Ch] [bp-C4h]
  char v112; // [sp+7Dh] [bp-C3h]
  char v113; // [sp+7Eh] [bp-C2h]
  char v114; // [sp+7Fh] [bp-C1h] BYREF
  float v115; // [sp+80h] [bp-C0h] BYREF
  float v116; // [sp+84h] [bp-BCh]
  float v117; // [sp+88h] [bp-B8h]
  float v118; // [sp+90h] [bp-B0h]
  float v119; // [sp+94h] [bp-ACh]
  float v120; // [sp+98h] [bp-A8h]
  unsigned int v121; // [sp+A0h] [bp-A0h]
  float v122; // [sp+A4h] [bp-9Ch]
  int v123; // [sp+A8h] [bp-98h]
  CWorld *v124; // [sp+B0h] [bp-90h]
  float v125; // [sp+B4h] [bp-8Ch]
  float v126; // [sp+B8h] [bp-88h]
  int v127; // [sp+C0h] [bp-80h]
  int v128; // [sp+C4h] [bp-7Ch]
  float v129; // [sp+C8h] [bp-78h] BYREF
  float v130; // [sp+CCh] [bp-74h]
  float v131; // [sp+D0h] [bp-70h]
  float v132; // [sp+D4h] [bp-6Ch] BYREF
  float v133; // [sp+D8h] [bp-68h]
  float v134; // [sp+DCh] [bp-64h]

  v11 = a4 - a1;
  v128 = 0;
  v12 = a5 - a2;
  v127 = 0;
  v13 = a6 - a3;
  v133 = a5 - a2;
  v132 = a4 - a1;
  v134 = a6 - a3;
  CVector::Normalise((CVector *)&v132);
  v129 = v133;
  v131 = 0.0;
  v130 = -v132;
  CVector::Normalise((CVector *)&v129);
  PlayerCoors = (CPopulation *)FindPlayerCoors((int)&v107);
  v15 = a7;
  if ( (float)((float)((float)((float)(*(float *)&v107 - (float)((float)(a1 + a4) * 0.5)) * v129)
                     + (float)((float)(*((float *)&v107 + 1) - (float)((float)(a2 + a5) * 0.5)) * v130))
             + (float)((float)(v108 - (float)((float)(a3 + a6) * 0.5)) * v131)) < 0.0 )
  {
    v130 = -v130;
    v129 = -v129;
    v131 = -v131;
  }
  if ( a7 )
  {
    DefaultCopCarModel = CPopulation::PickRiotRoadBlockCar(PlayerCoors);
    if ( DefaultCopCarModel == -1 )
      goto LABEL_126;
LABEL_16:
    v21 = *(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[DefaultCopCarModel]) + 44);
    v22 = *(double *)v21;
    v108 = *(float *)(v21 + 8);
    v107 = v22;
    v105 = *(double *)(v21 + 12);
    v23 = sqrtf((float)(v13 * v13) + (float)((float)(v11 * v11) + (float)(v12 * v12)));
    v106 = *(_DWORD *)(v21 + 20);
    v24 = (float)(*((float *)&v105 + 1) - *((float *)&v22 + 1)) + 0.2;
    v25 = (float)(*(float *)&v105 - *(float *)&v22) + 2.0;
    if ( a7 )
      v24 = v24 + 0.5;
    v98 = DefaultCopCarModel;
    v26 = DefaultCopCarModel == 433;
    v27 = a7;
    if ( a7 )
      v27 = 1;
    v96 = v23;
    v28 = v27 | v26;
    if ( v27 | v26 )
    {
      v109 = 0;
    }
    else
    {
      v29 = rand() & 1;
      v109 = v29;
      if ( v29 )
      {
        if ( v23 >= v25 )
        {
          v30 = 1;
          v31 = v23 - v25;
          goto LABEL_28;
        }
        goto LABEL_114;
      }
    }
    if ( v23 >= v24 )
    {
      v30 = 0;
      v31 = v23 - v24;
      if ( v28 == 1 )
      {
        v110 = 0;
        goto LABEL_31;
      }
LABEL_28:
      v32 = rand() & 1;
      v110 = v32;
      if ( v32 )
      {
        if ( v31 < v25 )
        {
LABEL_32:
          v33 = 1;
LABEL_56:
          v37 = dword_326704;
          v38 = dword_32670C;
          v39 = 2;
          v40 = v33 - 1;
          v41 = (float)(int)(v33 + 1);
          if ( a7 )
          {
            v37 = &dword_326704[1];
            v38 = &dword_32670C[1];
          }
          if ( v33 > 3 )
            v39 = 1;
          v97 = v39;
          v42 = (unsigned __int8 *)&v110;
          v43 = *(float *)v38;
          v44 = v31 / v41;
          v45 = (float)(v24 * 0.5) + (float)(v31 / v41);
          v99 = *(float *)v37;
          while ( 1 )
          {
            v100 = v42;
            v101 = v40;
            if ( v30 << 24 )
            {
              v46 = 0;
              v118 = v129;
              v119 = v130;
              v117 = 0.0;
              v120 = v131;
              v115 = v130;
              v121 = 0;
              v122 = 0.0;
              v123 = 1065353216;
              LODWORD(v116) = LODWORD(v129) ^ 0x80000000;
              v47 = rand();
              CMatrix::RotateZ((CMatrix *)&v115, v43 * (float)(v47 - 128));
              v48 = v25;
            }
            else
            {
              if ( v15 )
                v46 = (rand() & 0xC0u) < 0x40;
              else
                v46 = 0;
              v118 = v132;
              v49 = v132;
              v119 = v133;
              v120 = v134;
              if ( v46 )
              {
                v115 = 0.0;
                v116 = 0.0;
                v50 = LODWORD(v133) ^ 0x80000000;
                v117 = 1.0;
                v51 = 0.0;
              }
              else
              {
                v115 = v133;
                v51 = 1.0;
                v117 = 0.0;
                v116 = -v132;
                v49 = 0.0;
                v50 = 0;
              }
              v122 = v49;
              v121 = v50;
              v123 = LODWORD(v51);
              if ( (rand() & 1) != 0 )
              {
                if ( v46 )
                  CMatrix::RotateY((CMatrix *)&v115, 3.1416);
                else
                  CMatrix::RotateZ((CMatrix *)&v115, 3.1416);
              }
              v52 = rand();
              CMatrix::RotateZ((CMatrix *)&v115, v99 * (float)(v52 - 128));
              v48 = v24;
            }
            v53 = v44 + (float)(v48 * 0.5);
            CMatrix::SetTranslateOnly(
              (CMatrix *)&v115,
              (float)(v132 * v53) + a1,
              (float)(v133 * v53) + a2,
              (float)(v53 * v134) + a3);
            v54 = (float *)&v107;
            if ( !v46 )
              v54 = &v108;
            v126 = v126 + (float)(0.3 - *v54);
            Multiply3x3((const CVector *)&v103, (const CMatrix *)&v107);
            Multiply3x3((const CVector *)&v103, (const CMatrix *)&v105);
            *(float *)&v95 = v104.n64_f32[1] + v126;
            if ( CRoadBlocks::ClearSpaceForRoadBlockObject() != 1 )
              goto LABEL_113;
            if ( v15 && (v46 || (rand() & 0xC0u) <= 0x3F) )
            {
              v56 = CObject::operator new((CObject *)&elf_hash_bucket[34], v55);
              CObject::CObject((CObject *)v56, (unsigned __int16)MI_ROADBLOCKFUCKEDCAR1, 1);
              CMatrix::operator=();
              v57 = v125;
              v58 = *(_DWORD *)(v56 + 20);
              v59 = v126;
              if ( v58 )
              {
                *(float *)(v58 + 48) = *(float *)&v124;
                *(float *)(*(_DWORD *)(v56 + 20) + 52) = v57;
                v60 = (float *)(*(_DWORD *)(v56 + 20) + 56);
              }
              else
              {
                *(float *)(v56 + 4) = *(float *)&v124;
                *(float *)(v56 + 8) = v57;
                v60 = (float *)(v56 + 12);
              }
              *v60 = v59;
              (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v56 + 20))(v56, 0);
              ++CObject::nNoTempObjects;
              *(_BYTE *)(v56 + 320) = 3;
              *(_DWORD *)(v56 + 340) = &aZ16setandroidp[CTimer::m_snTimeInMilliseconds + 16];
              CWorld::Add((CWorld *)v56, (CEntity *)"usedi");
              CFireManager::StartFire((CFireManager *)gFireManager, (CEntity *)v56, 0, 2.8, 1u, 0xEA60u, 2);
              v65 = *(_DWORD *)(v56 + 360);
LABEL_111:
              if ( v65 )
                *(_BYTE *)(v65 + 33) = 92;
              goto LABEL_113;
            }
            v61 = CVehicle::operator new((CVehicle *)&elf_hash_bucket[552], v55);
            CAutomobile::CAutomobile((CAutomobile *)v61, v98, 1u, 1u);
            v62 = *(_DWORD *)v61;
            *(_BYTE *)(v61 + 58) = *(_BYTE *)(v61 + 58) & 7 | 0x20;
            v63 = (*(float (__fastcall **)(int))(v62 + 216))(v61);
            v126 = v126 + (float)(v63 + -0.6);
            CMatrix::operator=();
            CAutomobile::PlaceOnRoadProperly((CAutomobile *)v61);
            (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v61 + 20))(v61, 0);
            if ( *(_DWORD *)(v61 + 24) )
            {
              if ( *(_DWORD *)(v61 + 20) )
                CMatrix::UpdateRwMatrix();
              else
                CSimpleTransform::UpdateRwMatrix();
            }
            *(_DWORD *)(v61 + 1288) = 1;
            CCarCtrl::JoinCarWithRoadSystem((CCarCtrl *)v61, v64);
            v66 = *(_DWORD *)(v61 + 1072);
            v67 = *(_DWORD *)(v61 + 1068) & 0xFFFFFFE7;
            *(_WORD *)(v61 + 958) = 0;
            *(_WORD *)(v61 + 955) = 0;
            *(_DWORD *)(v61 + 972) = 0;
            *(_BYTE *)(v61 + 980) = 0;
            *(_DWORD *)(v61 + 1068) = v67;
            *(_DWORD *)(v61 + 1072) = v66 | 0x40;
            if ( a7 )
            {
              if ( (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 4.0) )
              {
                v68 = 1;
                (*(void (__fastcall **)(int, int, int, int, int, CEntity **))(*(_DWORD *)v61 + 172))(
                  v61,
                  1,
                  1,
                  1,
                  1,
                  v95);
                *(_DWORD *)(v61 + 1256) += 1000000;
                goto LABEL_98;
              }
              CAutomobile::SetTotalDamage((CAutomobile *)v61, 1);
            }
            else if ( CVehicle::UsesSiren((CVehicle *)v61) && (rand() & 1) != 0 )
            {
              *(_DWORD *)(v61 + 1072) |= 0x8000u;
            }
            v68 = 0;
LABEL_98:
            if ( *(float *)(*(_DWORD *)(v61 + 20) + 40) <= 0.94 )
            {
              (*(void (__fastcall **)(int))(*(_DWORD *)v61 + 4))(v61);
              v15 = a7;
              goto LABEL_113;
            }
            CVisibilityPlugins::SetClumpAlpha(*(_DWORD *)(v61 + 24), 0);
            CWorld::Add((CWorld *)v61, v69);
            *(_DWORD *)(v61 + 1068) |= 0x100000u;
            v70 = CTimer::m_snTimeInMilliseconds;
            *(_BYTE *)(v61 + 1208) = v97;
            *(_DWORD *)(v61 + 1248) = v70 + 7000;
            if ( v30 << 24 )
            {
              *(_BYTE *)(v61 + 1207) = 2;
              CarNodeIndexFromDoor = CDamageManager::GetCarNodeIndexFromDoor();
              if ( *(_DWORD *)(v61 + 1628 + 4 * CarNodeIndexFromDoor) )
              {
                v95 = (CEntity **)(&stderr + 1);
                (*(void (__fastcall **)(int, _DWORD, int, int, int))(*(_DWORD *)v61 + 112))(
                  v61,
                  0,
                  CarNodeIndexFromDoor,
                  2,
                  1065353216);
              }
              v15 = a7;
              if ( *(unsigned __int8 *)(v61 + 1208) >= 2u )
              {
                v72 = CDamageManager::GetCarNodeIndexFromDoor();
                if ( *(_DWORD *)(v61 + 1628 + 4 * v72) )
                {
                  v95 = (CEntity **)(&stderr + 1);
                  (*(void (__fastcall **)(int, _DWORD, int, int, int))(*(_DWORD *)v61 + 112))(
                    v61,
                    0,
                    v72,
                    3,
                    1065353216);
                }
              }
            }
            else
            {
              v73 = *(_DWORD *)(v61 + 20);
              FindPlayerCoors((int)&v103);
              v74 = v73 + 48;
              if ( !v73 )
                v74 = v61 + 4;
              v15 = a7;
              v75 = vmul_f32(vsub_f32(*(float32x2_t *)(v74 + 4), v104), *(float32x2_t *)(v73 + 4)).n64_u64[0];
              *(_BYTE *)(v61 + 1207) = (float)((float)((float)((float)(*(float *)v74 - v103) * *(float *)v73)
                                                     + *(float *)&v75)
                                             + *((float *)&v75 + 1)) >= 0.0;
            }
            if ( v68 == 1 )
            {
              CFireManager::StartFire(
                (CFireManager *)gFireManager,
                (CEntity *)v61,
                0,
                2.8,
                1u,
                (unsigned int)&elf_hash_bucket[14937],
                2);
              v65 = *(_DWORD *)(v61 + 1172);
              goto LABEL_111;
            }
LABEL_113:
            if ( !v101 )
              goto LABEL_114;
            v44 = v45 + v53;
            v40 = v101 - 1;
            v42 = v100 + 1;
            v30 = *v100;
          }
        }
        v31 = v31 - v25;
        goto LABEL_35;
      }
LABEL_31:
      if ( v31 < v24 )
        goto LABEL_32;
      v31 = v31 - v24;
      if ( v28 == 1 )
      {
        v111 = 0;
        goto LABEL_38;
      }
LABEL_35:
      v34 = rand() & 1;
      v111 = v34;
      if ( v34 )
      {
        if ( v31 < v25 )
        {
LABEL_39:
          v33 = 2;
          goto LABEL_56;
        }
        v31 = v31 - v25;
        goto LABEL_42;
      }
LABEL_38:
      if ( v31 < v24 )
        goto LABEL_39;
      v31 = v31 - v24;
      if ( v28 == 1 )
      {
        v112 = 0;
        goto LABEL_45;
      }
LABEL_42:
      v35 = rand() & 1;
      v112 = v35;
      if ( v35 )
      {
        if ( v31 < v25 )
        {
LABEL_46:
          v33 = 3;
          goto LABEL_56;
        }
        v31 = v31 - v25;
        goto LABEL_49;
      }
LABEL_45:
      if ( v31 < v24 )
        goto LABEL_46;
      v31 = v31 - v24;
      if ( v28 == 1 )
      {
        v113 = 0;
        goto LABEL_52;
      }
LABEL_49:
      v36 = rand() & 1;
      v113 = v36;
      if ( v36 )
      {
        if ( v31 < v25 )
        {
LABEL_53:
          v33 = 4;
          goto LABEL_56;
        }
        v31 = v31 - v25;
LABEL_55:
        v33 = 5;
        goto LABEL_56;
      }
LABEL_52:
      if ( v31 < v24 )
        goto LABEL_53;
      v31 = v31 - v24;
      goto LABEL_55;
    }
LABEL_114:
    if ( !v15 )
    {
      v102 = (unsigned __int16)MI_ROADWORKBARRIER1;
      v76 = *(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[(unsigned __int16)MI_ROADWORKBARRIER1]) + 44);
      v77 = *(double *)v76;
      v108 = *(float *)(v76 + 8);
      v107 = v77;
      v78 = *(double *)(v76 + 12);
      v79 = *(_DWORD *)(v76 + 20);
      v105 = v78;
      v80 = *(float *)&v107;
      v106 = v79;
      CObject::DeleteAllTempObjectsInArea();
      v81 = (float)(*(float *)&v78 - v80) + 0.5;
      v82 = (int)(float)(v96 / v81);
      v83 = v82;
      if ( v82 >= 8 )
        v83 = 8;
      if ( v82 >= 1 )
      {
        v84 = 0;
        do
        {
          CMatrix::SetUnity((CMatrix *)&v115);
          CMatrix::SetTranslate((CMatrix *)&v115, 0.0, 0.0, 0.0);
          v120 = 0.0;
          v121 = 0;
          v122 = 0.0;
          v123 = 1065353216;
          v118 = v133;
          v116 = v133;
          v117 = v134;
          v115 = v132;
          v119 = -v132;
          v85 = rand();
          CMatrix::RotateZ((CMatrix *)&v115, (float)(v85 - 128) * 0.003);
          v86 = v84++;
          v87 = (float)((float)((float)(v96 - (float)(v81 * (float)v83)) / (float)(v83 + 1)) * (float)v84)
              + (float)(v81 * (float)((float)v86 + 0.5));
          CMatrix::SetTranslateOnly(
            (CMatrix *)&v115,
            (float)((float)(v87 * v132) + a1) + (float)(v129 * 5.0),
            (float)((float)(v87 * v133) + a2) + (float)(v130 * 5.0),
            (float)((float)(v87 * v134) + a3) + (float)(v131 * 5.0));
          *(float *)&v124 = *(float *)&v124 + (float)((float)(rand() & 0xF) * 0.05);
          v125 = v125 + (float)((float)(rand() & 0xF) * 0.05);
          v88 = COERCE_FLOAT(CWorld::FindGroundZFor3DCoord(v124, v125, v126 + 2.0, COERCE_FLOAT(&v114), 0, v95));
          v126 = v88;
          if ( v114 )
          {
            v126 = v88 - v108;
            Multiply3x3((const CVector *)&v103, (const CMatrix *)&v107);
            Multiply3x3((const CVector *)&v103, (const CMatrix *)&v105);
            *(float *)&v95 = v104.n64_f32[1] + v126;
            if ( CRoadBlocks::ClearSpaceForRoadBlockObject() == 1 )
            {
              v90 = CObject::operator new((CObject *)&elf_hash_bucket[34], v89);
              CObject::CObject((CObject *)v90, v102, 1);
              CMatrix::operator=();
              v91 = v125;
              v92 = *(_DWORD *)(v90 + 20);
              v93 = v126;
              if ( v92 )
              {
                *(float *)(v92 + 48) = *(float *)&v124;
                *(float *)(*(_DWORD *)(v90 + 20) + 52) = v91;
                v94 = (float *)(*(_DWORD *)(v90 + 20) + 56);
              }
              else
              {
                *(float *)(v90 + 4) = *(float *)&v124;
                *(float *)(v90 + 8) = v91;
                v94 = (float *)(v90 + 12);
              }
              *v94 = v93;
              ++CObject::nNoTempObjects;
              *(_BYTE *)(v90 + 320) = 3;
              *(_DWORD *)(v90 + 340) = &aZ16setandroidp[CTimer::m_snTimeInMilliseconds + 16];
              CWorld::Add((CWorld *)v90, (CEntity *)"usedi");
            }
          }
        }
        while ( v84 < v83 );
      }
    }
    goto LABEL_126;
  }
  PlayerWanted = (CWanted *)FindPlayerWanted(-1);
  if ( CWanted::AreArmyRequired(PlayerWanted) )
  {
    DefaultCopCarModel = 433;
  }
  else
  {
    v18 = (CWanted *)FindPlayerWanted(-1);
    if ( CWanted::AreFbiRequired(v18) )
    {
      DefaultCopCarModel = 490;
    }
    else
    {
      v19 = (CWanted *)FindPlayerWanted(-1);
      if ( CWanted::AreSwatRequired(v19) )
        DefaultCopCarModel = 427;
      else
        DefaultCopCarModel = CStreaming::GetDefaultCopCarModel(0, v20);
    }
  }
  if ( LOBYTE(CStreaming::ms_aInfoForModel[10 * DefaultCopCarModel + 8]) != 1 )
    DefaultCopCarModel = CStreaming::GetDefaultCopCarModel(0, 5 * DefaultCopCarModel);
  if ( DefaultCopCarModel != 523 )
    goto LABEL_16;
LABEL_126:
  CMatrix::~CMatrix((CMatrix *)&v115);
}


// ============================================================

// Address: 0x326750
// Original: _ZN11CRoadBlocks27GenerateRoadBlockPedsForCarEP8CVehiclei8ePedType
// Demangled: CRoadBlocks::GenerateRoadBlockPedsForCar(CVehicle *,int,ePedType)
int __fastcall CRoadBlocks::GenerateRoadBlockPedsForCar(int a1, int a2, int a3)
{
  int v5; // r0
  _BYTE *v6; // r0
  int v7; // r1
  int v8; // r0
  int v9; // r1
  float v10; // s16
  unsigned int v11; // r1
  int DefaultCopCarModel; // r0
  int v13; // r4
  int v14; // r10
  float v15; // s16
  int v16; // r1
  char *v17; // r0
  CEntity *v18; // r9
  float *v19; // r11
  float *v20; // r2
  float v21; // s0
  float v22; // s2
  float v23; // s4
  unsigned int v24; // r1
  bool v25; // zf
  CVector *v26; // r1
  int v27; // r8
  int v28; // r1
  int v29; // r3
  int v30; // r0
  _DWORD *v31; // r1
  float *v32; // r0
  float v33; // s30
  float v34; // s17
  float v35; // s19
  float *v36; // r0
  float v37; // s2
  float v38; // s4
  int v39; // r6
  int v40; // r5
  int v41; // r4
  unsigned __int16 v42; // r0
  int v43; // r5
  CTaskSimpleStandStill *v44; // r4
  int v45; // r0
  int v46; // r1
  unsigned int v47; // r1
  int v48; // r0
  CEntity *v49; // r1
  int v50; // r0
  int WeaponInfo; // r0
  unsigned int v52; // r1
  CTaskComplexKillPedOnFoot *v53; // r4
  CPed *PlayerPed; // r0
  int v56; // r1
  CEntity *v57; // [sp+14h] [bp-19Ch]
  char *v58; // [sp+1Ch] [bp-194h]
  int v59; // [sp+20h] [bp-190h]
  CEntity *v60; // [sp+24h] [bp-18Ch]
  int v61; // [sp+28h] [bp-188h]
  int v62; // [sp+30h] [bp-180h]
  int v63; // [sp+34h] [bp-17Ch]
  float *v65; // [sp+3Ch] [bp-174h]
  double v66; // [sp+40h] [bp-170h] BYREF
  int v67; // [sp+48h] [bp-168h]
  float v68; // [sp+5Ch] [bp-154h]
  float v69; // [sp+60h] [bp-150h]
  float v70; // [sp+64h] [bp-14Ch]
  double v71; // [sp+68h] [bp-148h] BYREF
  int v72; // [sp+70h] [bp-140h]
  _QWORD v73[8]; // [sp+78h] [bp-138h] BYREF
  int v74; // [sp+B8h] [bp-F8h]
  int v75; // [sp+BCh] [bp-F4h]
  _QWORD v76[8]; // [sp+C0h] [bp-F0h] BYREF
  int v77; // [sp+100h] [bp-B0h]
  int v78; // [sp+104h] [bp-ACh]
  char v79[64]; // [sp+108h] [bp-A8h] BYREF
  int v80; // [sp+148h] [bp-68h]
  int v81; // [sp+14Ch] [bp-64h]

  v80 = 0;
  v81 = 0;
  v76[0] = 0x3FF33333BFC00000LL;
  v76[1] = 0xBFC0000000000000LL;
  v76[2] = 3223742054LL;
  v76[3] = 0x3FF333333FC00000LL;
  v76[4] = 0x3FC0000000000000LL;
  v76[5] = 3223742054LL;
  v76[6] = 3217031168LL;
  v76[7] = 0x3FC0000000000000LL;
  v77 = 0;
  v78 = 0;
  v73[0] = 0x404CCCCD00000000LL;
  v73[1] = 0x3FC0000000000000LL;
  v73[2] = 3219547750LL;
  v73[3] = 0x404CCCCD00000000LL;
  v73[4] = 0xBFC0000000000000LL;
  v73[5] = 3219547750LL;
  v73[6] = 3217031168LL;
  v73[7] = 0x3FC0000000000000LL;
  v74 = 0;
  v75 = 0;
  if ( FindPlayerVehicle(-1, 0) )
    FindPlayerVehicle(-1, 0);
  if ( a3 != 6 )
  {
    if ( (unsigned int)(a3 - 7) > 9 )
    {
      v59 = 0;
      goto LABEL_20;
    }
    v6 = (_BYTE *)CPopCycle::m_pCurrZoneInfo;
    if ( *(_BYTE *)CPopCycle::m_pCurrZoneInfo )
    {
      v63 = 0;
      v7 = CGangs::ChooseGangPedModel(0, *(unsigned __int8 *)CPopCycle::m_pCurrZoneInfo);
      v8 = v7 + 1;
      v59 = v7;
      if ( v7 != -1 )
        goto LABEL_46;
      v9 = -1;
      v6 = (_BYTE *)CPopCycle::m_pCurrZoneInfo;
    }
    else
    {
      v9 = 0;
    }
    if ( v6[1] )
    {
      v59 = CGangs::ChooseGangPedModel((CGangs *)((char *)&stderr + 1), v9);
      if ( v59 != -1 )
        goto LABEL_45;
      v9 = -1;
      v6 = (_BYTE *)CPopCycle::m_pCurrZoneInfo;
    }
    if ( v6[2] )
    {
      v59 = CGangs::ChooseGangPedModel((CGangs *)((char *)&stderr + 2), v9);
      if ( v59 != -1 )
        goto LABEL_45;
      v9 = -1;
      v6 = (_BYTE *)CPopCycle::m_pCurrZoneInfo;
    }
    if ( v6[3] )
    {
      v59 = CGangs::ChooseGangPedModel((CGangs *)((char *)&stderr + 3), v9);
      if ( v59 != -1 )
        goto LABEL_45;
      v9 = -1;
      v6 = (_BYTE *)CPopCycle::m_pCurrZoneInfo;
    }
    if ( v6[4] )
    {
      v59 = CGangs::ChooseGangPedModel((CGangs *)&byte_4, v9);
      if ( v59 != -1 )
        goto LABEL_45;
      v9 = -1;
      v6 = (_BYTE *)CPopCycle::m_pCurrZoneInfo;
    }
    if ( v6[5] )
    {
      v59 = CGangs::ChooseGangPedModel((CGangs *)&byte_5, v9);
      if ( v59 != -1 )
        goto LABEL_45;
      v9 = -1;
      v6 = (_BYTE *)CPopCycle::m_pCurrZoneInfo;
    }
    if ( v6[6] )
    {
      v59 = CGangs::ChooseGangPedModel((CGangs *)byte_6, v9);
      if ( v59 != -1 )
        goto LABEL_45;
      v9 = -1;
      v6 = (_BYTE *)CPopCycle::m_pCurrZoneInfo;
    }
    if ( !v6[7] )
      goto LABEL_43;
    v59 = CGangs::ChooseGangPedModel((CGangs *)&byte_7, v9);
    if ( v59 == -1 )
    {
      v9 = -1;
      v6 = (_BYTE *)CPopCycle::m_pCurrZoneInfo;
LABEL_43:
      if ( v6[8] )
      {
        v59 = CGangs::ChooseGangPedModel((CGangs *)byte_8, v9);
        if ( v59 != -1 )
          goto LABEL_45;
        v9 = -1;
        v6 = (_BYTE *)CPopCycle::m_pCurrZoneInfo;
      }
      if ( v6[9] )
      {
        v56 = CGangs::ChooseGangPedModel((CGangs *)byte_9, v9);
        v8 = 0;
        v59 = v56;
        v63 = 0;
        if ( v56 != -1 )
          goto LABEL_46;
      }
      else
      {
        v59 = 0;
        if ( v9 != -1 )
          goto LABEL_20;
      }
      v13 = 0;
      goto LABEL_82;
    }
LABEL_45:
    v8 = 0;
    v63 = 0;
    goto LABEL_46;
  }
  v5 = *(__int16 *)(a1 + 38);
  if ( v5 < 490 )
  {
    if ( v5 == 427 )
    {
      v63 = 1;
      v61 = 2;
      v59 = 285;
      goto LABEL_47;
    }
    if ( v5 == 433 )
    {
      v63 = 1;
      v61 = 5;
      v59 = 287;
      goto LABEL_47;
    }
    goto LABEL_19;
  }
  if ( v5 != 599 )
  {
    if ( v5 == 490 )
    {
      v63 = 1;
      v61 = 4;
      v59 = 286;
      goto LABEL_47;
    }
LABEL_19:
    v59 = 0;
LABEL_20:
    v61 = 0;
    v63 = 0;
    goto LABEL_47;
  }
  v63 = 1;
  v59 = 0;
  v8 = 0;
LABEL_46:
  v61 = v8;
LABEL_47:
  v10 = *(float *)(CEntity::GetColModel((CEntity *)a1) + 36);
  DefaultCopCarModel = CStreaming::GetDefaultCopCarModel(0, v11);
  v13 = 1;
  if ( *(_BYTE *)(a1 + 1208) )
  {
    v14 = 0;
    v15 = v10 / *(float *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[DefaultCopCarModel]) + 44) + 36);
    v62 = (a2 != 2) | v63 ^ 1;
    v16 = 3 * a2;
    v17 = &CGangs::Gang[16 * a3];
    v18 = (CEntity *)a1;
    v19 = (float *)&v73[v16] + 1;
    v60 = (CEntity *)(v17 - 108);
    v57 = (CEntity *)(v17 - 104);
    v20 = (float *)&v76[v16 + 1];
    v58 = v17 - 100;
    while ( 1 )
    {
      v65 = v20;
      if ( v63 == 1 )
      {
        v21 = *(v19 - 1);
        v22 = *v19;
        v23 = v19[1];
      }
      else
      {
        v21 = *(v20 - 2);
        v22 = *(v20 - 1);
        v23 = *v20;
      }
      v69 = v15 * v22;
      v68 = v15 * v21;
      v70 = v15 * v23;
      operator*();
      v72 = v67;
      v71 = v66;
      if ( a3 == 6 )
      {
        v25 = v61 == 0;
        if ( v61 )
          v25 = LOBYTE(CStreaming::ms_aInfoForModel[10 * v59 + 8]) == 1;
        if ( v25 )
        {
          v27 = CPed::operator new((CPed *)&elf_hash_bucket[436], v24);
          CCopPed::CCopPed();
          if ( v61 )
            goto LABEL_61;
        }
        else
        {
          v27 = CPed::operator new((CPed *)&elf_hash_bucket[436], v24);
          CCopPed::CCopPed();
        }
      }
      else
      {
        v27 = CPed::operator new((CPed *)&elf_hash_bucket[426], v24);
        CCivilianPed::CCivilianPed();
      }
      CPed::SetCurrentWeapon(v27, 22);
LABEL_61:
      CPedPlacement::FindZCoorForPed((CPedPlacement *)&v71, v26);
      v28 = HIDWORD(v71);
      v29 = *(_DWORD *)(v27 + 20);
      v30 = v72;
      if ( v29 )
      {
        *(_DWORD *)(v29 + 48) = LODWORD(v71);
        *(_DWORD *)(*(_DWORD *)(v27 + 20) + 52) = v28;
        v31 = (_DWORD *)(*(_DWORD *)(v27 + 20) + 56);
      }
      else
      {
        *(double *)(v27 + 4) = v71;
        v31 = (_DWORD *)(v27 + 12);
      }
      *v31 = v30;
      v32 = *(float **)(v27 + 20);
      if ( v32 )
      {
        v33 = v32[12];
        v34 = v32[13];
        v35 = v32[14];
        CMatrix::SetRotate((CMatrix *)v32, 0.0, 0.0, -1.5708);
        v36 = *(float **)(v27 + 20);
        v37 = v34 + v36[13];
        v38 = v35 + v36[14];
        v36[12] = v33 + v36[12];
        v36[13] = v37;
        v36[14] = v38;
      }
      else
      {
        *(_DWORD *)(v27 + 16) = -1077342245;
      }
      v39 = a3;
      if ( a3 == 6 )
      {
        v40 = *(_DWORD *)(v27 + 1088);
        *(_BYTE *)(v27 + 1956) = 1;
        v41 = CTask::operator new((CTask *)&dword_50, (unsigned int)v31);
        v42 = rand();
        CTaskComplexWander::CTaskComplexWander(
          (CTaskComplexWander *)v41,
          1,
          (int)(float)((float)((float)v42 * 0.000015259) * 8.0),
          1,
          0.5);
        *(_QWORD *)(v41 + 56) = 0LL;
        *(_QWORD *)(v41 + 64) = 0LL;
        *(_DWORD *)(v41 + 50) = 0;
        *(_DWORD *)(v41 + 46) = 0;
        *(_DWORD *)v41 = &off_66C5E8;
        *(_DWORD *)(v41 + 40) = 0;
        *(_DWORD *)(v41 + 44) = 0;
        *(_DWORD *)(v41 + 74) = 0;
        *(_DWORD *)(v41 + 70) = 0;
        CTaskManager::SetTask((CTaskManager *)(v40 + 4), (CTask *)v41, 3, 0);
      }
      v43 = *(_DWORD *)(v27 + 1088);
      v44 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, (unsigned int)v31);
      CTaskSimpleStandStill::CTaskSimpleStandStill(v44, 0, 1, 0, 8.0);
      CTaskManager::SetTask((CTaskManager *)(v43 + 4), v44, 4, 0);
      v45 = *(_DWORD *)(v27 + 1156);
      v46 = CTimer::m_snTimeInMilliseconds;
      *(_DWORD *)(v27 + 1424) = v18;
      *(_DWORD *)(v27 + 1360) = v46 + 10000;
      v47 = v45 & 0xFCDFFFFF | 0x1200000;
      if ( v62 )
        v47 = v45 | 0x3200000;
      *(_DWORD *)(v27 + 1156) = v47;
      CEntity::RegisterReference(v18, (CEntity **)(v27 + 1424));
      v48 = *(_DWORD *)(v27 + 24);
      *(_DWORD *)(v27 + 1160) |= 0x40u;
      CVisibilityPlugins::SetClumpAlpha(v48, 0);
      a3 = v39;
      if ( v39 == 6 )
        goto LABEL_80;
      v50 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0);
      if ( *(_DWORD *)v58 )
      {
        v49 = v60;
        if ( v50 >= 33 )
        {
          v49 = v57;
          if ( v50 >= 66 )
            goto LABEL_79;
        }
      }
      else
      {
        v49 = v60;
        if ( *(_DWORD *)v57 )
        {
          v49 = v60;
          if ( v50 > 49 )
          {
LABEL_79:
            CPed::GiveDelayedWeapon();
            WeaponInfo = CWeaponInfo::GetWeaponInfo();
            CPed::SetCurrentWeapon((CPed *)v27, *(_DWORD *)(WeaponInfo + 20));
            goto LABEL_80;
          }
        }
      }
      if ( *(_DWORD *)v49 )
        goto LABEL_79;
LABEL_80:
      CWorld::Add((CWorld *)v27, v49);
      v53 = (CTaskComplexKillPedOnFoot *)CTask::operator new((CTask *)&dword_38, v52);
      PlayerPed = (CPed *)FindPlayerPed(-1);
      CTaskComplexKillPedOnFoot::CTaskComplexKillPedOnFoot(v53, PlayerPed, -1, 0, 0, 0, 1);
      CEventScriptCommand::CEventScriptCommand((CEventScriptCommand *)&v66, 3, v53, 0);
      CEventGroup::Add((CEventGroup *)(*(_DWORD *)(v27 + 1088) + 104), (CEvent *)&v66, 0);
      CEventScriptCommand::~CEventScriptCommand((CEventScriptCommand *)&v66);
      v18 = (CEntity *)a1;
      v19 += 3;
      ++v14;
      v20 = v65 + 3;
      if ( v14 >= *(unsigned __int8 *)(a1 + 1208) )
      {
        v13 = 1;
        break;
      }
    }
  }
LABEL_82:
  CMatrix::~CMatrix((CMatrix *)v79);
  return v13;
}


// ============================================================

// Address: 0x326e90
// Original: _ZN11CRoadBlocks28ClearSpaceForRoadBlockObjectE7CVectorS0_
// Demangled: CRoadBlocks::ClearSpaceForRoadBlockObject(CVector,CVector)
int __fastcall CRoadBlocks::ClearSpaceForRoadBlockObject(int a1, int a2, int a3, int a4, __int64 a5)
{
  int v5; // r4
  int v6; // r6
  CPed *v7; // r4
  char v8; // r0
  CEntity *v9; // r1
  bool v11; // [sp+18h] [bp-38h]
  _DWORD v12[2]; // [sp+1Ch] [bp-34h] BYREF
  __int16 v13; // [sp+26h] [bp-2Ah] BYREF
  int v14; // [sp+28h] [bp-28h] BYREF
  __int64 v15; // [sp+2Ch] [bp-24h]
  _DWORD v16[7]; // [sp+34h] [bp-1Ch] BYREF

  v16[0] = a1;
  v16[1] = a2;
  v16[2] = a3;
  v5 = 0;
  v14 = a4;
  v15 = a5;
  CWorld::FindObjectsIntersectingCube(
    (CWorld *)v16,
    (const CVector *)&v14,
    (const CVector *)&v13,
    (__int16 *)&stderr + 1,
    (__int16)v12,
    0,
    1,
    1,
    1,
    0,
    v11);
  if ( v13 <= 2 )
  {
    if ( v13 >= 1 )
    {
      LOWORD(v6) = 0;
      while ( 1 )
      {
        v7 = (CPed *)v12[(__int16)v6];
        v8 = *((_BYTE *)v7 + 58);
        if ( (v8 & 7) == 2 )
        {
          if ( CVehicle::CanBeDeleted((CVehicle *)v12[(__int16)v6]) )
          {
            if ( (*((_BYTE *)v7 + 1070) & 0x10) != 0 )
              goto LABEL_16;
            goto LABEL_15;
          }
          v8 = *((_BYTE *)v7 + 58);
        }
        if ( (v8 & 7) != 3 )
          goto LABEL_12;
        if ( !CPed::CanBeDeleted(v7) )
          break;
LABEL_15:
        CWorld::Remove(v7, v9);
        (*(void (__fastcall **)(CPed *))(*(_DWORD *)v7 + 4))(v7);
LABEL_16:
        v6 = (__int16)(v6 + 1);
        if ( v6 >= v13 )
          return 1;
      }
      v8 = *((_BYTE *)v7 + 58);
LABEL_12:
      if ( (v8 & 7) != 4 || *((_BYTE *)v7 + 320) == 1 || !CObject::CanBeDeleted(v7) )
        return 0;
      goto LABEL_15;
    }
    return 1;
  }
  return v5;
}


// ============================================================

// Address: 0x326f58
// Original: _ZN11CRoadBlocks23RegisterScriptRoadBlockE7CVectorS0_b
// Demangled: CRoadBlocks::RegisterScriptRoadBlock(CVector,CVector,bool)
char *__fastcall CRoadBlocks::RegisterScriptRoadBlock(char *result, int a2, int a3, int a4, __int64 a5, char a6)
{
  char *v6; // r12
  int v7; // lr

  v6 = &byte_7B75C4;
  if ( byte_7B75C4 )
  {
    v6 = &byte_7B75E0;
    if ( byte_7B75E0 )
    {
      v6 = &byte_7B75FC;
      if ( byte_7B75FC )
      {
        v6 = &byte_7B7618;
        if ( byte_7B7618 )
        {
          v6 = &byte_7B7634;
          if ( byte_7B7634 )
          {
            v6 = &byte_7B7650;
            if ( byte_7B7650 )
            {
              v6 = &byte_7B766C;
              if ( byte_7B766C )
              {
                v6 = &byte_7B7688;
                if ( byte_7B7688 )
                {
                  v6 = &byte_7B76A4;
                  if ( byte_7B76A4 )
                  {
                    if ( byte_7B76C0 )
                    {
                      if ( byte_7B76DC )
                      {
                        if ( byte_7B76F8 )
                        {
                          if ( byte_7B7714 )
                          {
                            if ( byte_7B7730 )
                            {
                              if ( byte_7B774C )
                              {
                                if ( (_BYTE)dword_7B7768 )
                                  return result;
                                v6 = (char *)&dword_7B7768;
                                v7 = 15;
                              }
                              else
                              {
                                v6 = &byte_7B774C;
                                v7 = 14;
                              }
                            }
                            else
                            {
                              v6 = &byte_7B7730;
                              v7 = 13;
                            }
                          }
                          else
                          {
                            v6 = &byte_7B7714;
                            v7 = 12;
                          }
                        }
                        else
                        {
                          v6 = &byte_7B76F8;
                          v7 = 11;
                        }
                      }
                      else
                      {
                        v6 = &byte_7B76DC;
                        v7 = 10;
                      }
                    }
                    else
                    {
                      v6 = &byte_7B76C0;
                      v7 = 9;
                    }
                  }
                  else
                  {
                    v7 = 8;
                  }
                }
                else
                {
                  v7 = 7;
                }
              }
              else
              {
                v7 = 6;
              }
            }
            else
            {
              v7 = 5;
            }
          }
          else
          {
            v7 = 4;
          }
        }
        else
        {
          v7 = 3;
        }
      }
      else
      {
        v7 = 2;
      }
    }
    else
    {
      v7 = 1;
    }
  }
  else
  {
    v7 = 0;
  }
  *v6 = 1;
  *((_DWORD *)&CRoadBlocks::aScriptRoadBlocks + 7 * v7) = result;
  result = (char *)&CRoadBlocks::aScriptRoadBlocks + 28 * v7;
  result[25] = 1;
  *((_DWORD *)result + 1) = a2;
  *((_DWORD *)result + 2) = a3;
  *((_DWORD *)result + 3) = a4;
  *((_QWORD *)result + 2) = a5;
  result[26] = a6;
  return result;
}


// ============================================================
