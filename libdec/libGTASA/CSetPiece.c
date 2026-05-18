
// Address: 0x18ca04
// Original: j__ZN9CSetPiece19TryToGenerateCopPedE9CVector2D
// Demangled: CSetPiece::TryToGenerateCopPed(CVector2D)
// attributes: thunk
int CSetPiece::TryToGenerateCopPed()
{
  return _ZN9CSetPiece19TryToGenerateCopPedE9CVector2D();
}


// ============================================================

// Address: 0x19b374
// Original: j__ZN9CSetPiece6UpdateEv
// Demangled: CSetPiece::Update(void)
// attributes: thunk
int __fastcall CSetPiece::Update(CSetPiece *this)
{
  return _ZN9CSetPiece6UpdateEv(this);
}


// ============================================================

// Address: 0x19fcc4
// Original: j__ZN9CSetPiece19TryToGenerateCopCarE9CVector2DS0_
// Demangled: CSetPiece::TryToGenerateCopCar(CVector2D,CVector2D)
// attributes: thunk
int __fastcall CSetPiece::TryToGenerateCopCar(int a1, int a2, int a3, int a4, int a5)
{
  return _ZN9CSetPiece19TryToGenerateCopCarE9CVector2DS0_(a1, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x35e4d8
// Original: _ZN9CSetPiece6UpdateEv
// Demangled: CSetPiece::Update(void)
int __fastcall CSetPiece::Update(CSetPiece *this)
{
  int v2; // r0
  int result; // r0
  int v4; // r5
  CEntity *v5; // r1
  bool v6; // r2
  int CopCar; // r6
  char v8; // r0
  unsigned int v9; // r8
  unsigned int v10; // r0
  float v11; // s0
  float v12; // s2
  bool v13; // r2
  char v14; // r0
  float v15; // s0
  float v16; // s2
  int v17; // r5
  float v18; // s18
  float v19; // s20
  float v20; // s22
  int v21; // r5
  float v22; // s18
  float v23; // s20
  float v24; // s22
  float v25; // r2
  _DWORD *v26; // r5
  int GroundZForCoord; // r8
  int v28; // r2
  int v29; // r3
  unsigned int v30; // r1
  int v31; // r6
  CTaskComplexGoToPointAndStandStill *v32; // r10
  float v33; // s0
  float v34; // s2
  int v35; // r8
  unsigned int v36; // r1
  int v37; // r5
  float v38; // r2
  int v39; // r9
  int v40; // r3
  int v41; // r2
  int v42; // r6
  int v43; // r0
  CTaskComplexGoToPointAndStandStill *v44; // r10
  float v45; // s0
  float v46; // s2
  int v47; // r9
  unsigned int v48; // r1
  int v49; // r6
  float v50; // r2
  _DWORD *CopPed; // r6
  int v52; // r9
  int v53; // r2
  int v54; // r3
  unsigned int v55; // r1
  int v56; // r5
  CTaskComplexGoToPointAndStandStill *v57; // r5
  float v58; // s0
  float v59; // s2
  int v60; // r8
  unsigned int v61; // r1
  int v62; // r6
  int v63; // r5
  float v64; // s18
  float v65; // s20
  float v66; // s22
  int v67; // r0
  char v68; // r2
  int v69; // r1
  float *v70; // r3
  char v71; // r2
  float v72; // s6
  float v73; // s0
  int v74; // r5
  float v75; // s18
  float v76; // s20
  float v77; // s22
  __int16 v78; // r2
  int v79; // r5
  float v80; // s18
  float v81; // s20
  float v82; // s22
  int v83; // r0
  char v84; // r2
  int v85; // r1
  float *v86; // r3
  char v87; // r2
  float v88; // s6
  float v89; // s0
  int v90; // r5
  float v91; // s18
  float v92; // s20
  float v93; // s22
  char v94; // r2
  int v95; // r1
  float *v96; // r3
  char v97; // r2
  float v98; // s6
  float v99; // s0
  _BYTE v100[4]; // [sp+Ch] [bp-74h] BYREF
  float v101; // [sp+10h] [bp-70h]
  float v102; // [sp+18h] [bp-68h] BYREF
  float v103; // [sp+1Ch] [bp-64h]
  int v104; // [sp+20h] [bp-60h]
  float v105; // [sp+24h] [bp-5Ch] BYREF
  float v106; // [sp+28h] [bp-58h]

  v2 = *(_DWORD *)this;
  if ( !v2 || (result = v2 + 40000, CTimer::m_snTimeInMilliseconds > (unsigned int)result) )
  {
    FindPlayerCoors((int)&v105);
    result = *((__int16 *)this + 2);
    if ( v105 >= (float)((float)result * 0.25) )
    {
      result = *((__int16 *)this + 4);
      if ( v105 <= (float)((float)result * 0.25) )
      {
        result = *((__int16 *)this + 3);
        if ( v106 >= (float)((float)result * 0.25) )
        {
          result = *((__int16 *)this + 5);
          if ( v106 <= (float)((float)result * 0.25) )
          {
            result = *((unsigned __int8 *)this + 28) - 1;
            switch ( *((_BYTE *)this + 28) )
            {
              case 1:
              case 8:
                result = *(_DWORD *)(**(_DWORD **)(FindPlayerPed(-1) + 1092) + 44);
                if ( result >= 1 )
                {
                  result = FindPlayerVehicle(-1, 0);
                  if ( !result )
                  {
                    result = CSetPiece::TryToGenerateCopCar(
                               *((__int16 *)this + 6),
                               COERCE_INT((float)*((__int16 *)this + 6) * 0.25),
                               COERCE_INT((float)*((__int16 *)this + 7) * 0.25),
                               COERCE_INT((float)*((__int16 *)this + 10) * 0.25),
                               COERCE_INT((float)*((__int16 *)this + 11) * 0.25));
                    v4 = result;
                    if ( result )
                    {
                      CopCar = CSetPiece::TryToGenerateCopCar(
                                 *((__int16 *)this + 8),
                                 COERCE_INT((float)*((__int16 *)this + 8) * 0.25),
                                 COERCE_INT((float)*((__int16 *)this + 9) * 0.25),
                                 COERCE_INT((float)*((__int16 *)this + 12) * 0.25),
                                 COERCE_INT((float)*((__int16 *)this + 13) * 0.25));
                      if ( !CopCar )
                        goto LABEL_55;
                      v8 = *(_BYTE *)(v4 + 58);
                      v9 = 4;
                      *(_BYTE *)(v4 + 980) = 4;
                      *(_BYTE *)(v4 + 58) = v8 & 7 | 0x18;
                      v10 = 4;
                      if ( *((_BYTE *)this + 28) == 8 )
                        v10 = 24;
                      *(_WORD *)(v4 + 957) = 6145;
                      *(_BYTE *)(v4 + 980) = v10;
                      *(float *)(v4 + 972) = (float)v10;
                      v11 = (float)*((__int16 *)this + 11);
                      v12 = (float)*((__int16 *)this + 10);
                      *(_DWORD *)(v4 + 1016) = 0;
                      *(float *)(v4 + 1008) = v12 * 0.25;
                      *(float *)(v4 + 1012) = v11 * 0.25;
                      *(_DWORD *)(v4 + 1248) = CTimer::m_snTimeInMilliseconds + 25000;
                      CCarAI::AddPoliceCarOccupants((CCarAI *)v4, 0, v6);
                      v14 = *(_BYTE *)(CopCar + 58);
                      *(_BYTE *)(CopCar + 980) = 4;
                      *(_BYTE *)(CopCar + 58) = v14 & 7 | 0x18;
                      if ( *((_BYTE *)this + 28) == 8 )
                        v9 = 24;
                      *(_WORD *)(CopCar + 957) = 6145;
                      *(_BYTE *)(CopCar + 980) = v9;
                      *(float *)(CopCar + 972) = (float)v9;
                      v15 = (float)*((__int16 *)this + 13);
                      v16 = (float)*((__int16 *)this + 12);
                      *(_DWORD *)(CopCar + 1016) = 0;
                      *(float *)(CopCar + 1008) = v16 * 0.25;
                      *(float *)(CopCar + 1012) = v15 * 0.25;
                      *(_DWORD *)(CopCar + 1248) = CTimer::m_snTimeInMilliseconds + 25000;
                      CCarAI::AddPoliceCarOccupants((CCarAI *)CopCar, 0, v13);
                      result = CTimer::m_snTimeInMilliseconds;
                      goto LABEL_54;
                    }
                  }
                }
                break;
              case 2:
                result = *(_DWORD *)(**(_DWORD **)(FindPlayerPed(-1) + 1092) + 44);
                if ( result >= 2 )
                {
                  result = FindPlayerVehicle(-1, 0);
                  if ( result )
                  {
                    FindPlayerCoors((int)&v102);
                    v17 = *((__int16 *)this + 6);
                    v18 = v102;
                    v19 = *(float *)FindPlayerSpeed(-1);
                    FindPlayerCoors((int)v100);
                    v20 = v101 - (float)((float)*((__int16 *)this + 7) * 0.25);
                    result = FindPlayerSpeed(-1);
                    if ( (float)((float)(v19 * (float)(v18 - (float)((float)v17 * 0.25)))
                               + (float)(*(float *)(result + 4) * v20)) < 0.0 )
                    {
                      result = CSetPiece::TryToGenerateCopCar(
                                 *((__int16 *)this + 6),
                                 COERCE_INT((float)*((__int16 *)this + 6) * 0.25),
                                 COERCE_INT((float)*((__int16 *)this + 7) * 0.25),
                                 COERCE_INT((float)*((__int16 *)this + 10) * 0.25),
                                 COERCE_INT((float)*((__int16 *)this + 11) * 0.25));
                      if ( result )
                        goto LABEL_44;
                    }
                  }
                }
                break;
              case 3:
                result = *(_DWORD *)(**(_DWORD **)(FindPlayerPed(-1) + 1092) + 44);
                if ( result >= 2 )
                {
                  result = FindPlayerVehicle(-1, 0);
                  if ( result )
                  {
                    FindPlayerCoors((int)&v102);
                    v21 = *((__int16 *)this + 6);
                    v22 = v102;
                    v23 = *(float *)FindPlayerSpeed(-1);
                    FindPlayerCoors((int)v100);
                    v24 = v101 - (float)((float)*((__int16 *)this + 7) * 0.25);
                    result = FindPlayerSpeed(-1);
                    if ( (float)((float)(v23 * (float)(v22 - (float)((float)v21 * 0.25)))
                               + (float)(*(float *)(result + 4) * v24)) < 0.0 )
                    {
                      result = CSetPiece::TryToGenerateCopCar(
                                 *((__int16 *)this + 6),
                                 COERCE_INT((float)*((__int16 *)this + 6) * 0.25),
                                 COERCE_INT((float)*((__int16 *)this + 7) * 0.25),
                                 COERCE_INT((float)*((__int16 *)this + 10) * 0.25),
                                 COERCE_INT((float)*((__int16 *)this + 11) * 0.25));
                      if ( result )
                        goto LABEL_52;
                    }
                  }
                }
                break;
              case 4:
                result = *(_DWORD *)(**(_DWORD **)(FindPlayerPed(-1) + 1092) + 44);
                if ( result >= 1 )
                {
                  result = FindPlayerVehicle(-1, 0);
                  if ( !result )
                  {
                    result = CSetPiece::TryToGenerateCopPed();
                    v26 = (_DWORD *)result;
                    if ( result )
                    {
                      GroundZForCoord = CWorld::FindGroundZForCoord(
                                          COERCE_CWORLD_((float)*((__int16 *)this + 10) * 0.25),
                                          (float)*((__int16 *)this + 11) * 0.25,
                                          v25);
                      v28 = v26[291];
                      v29 = v26[292];
                      v30 = v26[290] | 0x40;
                      v31 = CTimer::m_snTimeInMilliseconds;
                      v26[289] = v26[289];
                      v26[290] = v30;
                      v26[291] = v28;
                      v26[292] = v29;
                      v26[340] = v31 + 10000;
                      v32 = (CTaskComplexGoToPointAndStandStill *)CTask::operator new((CTask *)&word_28, v30);
                      v33 = (float)*((__int16 *)this + 11);
                      v34 = (float)*((__int16 *)this + 10);
                      v104 = GroundZForCoord;
                      v103 = v33 * 0.25;
                      v102 = v34 * 0.25;
                      CTaskComplexGoToPointAndStandStill::CTaskComplexGoToPointAndStandStill(
                        v32,
                        6,
                        (const CVector *)&v102,
                        0.5,
                        2.0,
                        0,
                        0);
                      v35 = v26[272];
                      v37 = CTask::operator new((CTask *)&dword_50, v36);
                      CTaskComplexWander::CTaskComplexWander((CTaskComplexWander *)v37, 4, 0, 1, 0.5);
                      *(_QWORD *)(v37 + 56) = 0LL;
                      *(_QWORD *)(v37 + 64) = 0LL;
                      *(_DWORD *)(v37 + 70) = 0;
                      *(_DWORD *)(v37 + 44) = 0;
                      *(_DWORD *)(v37 + 48) = 0;
                      *(_WORD *)(v37 + 52) = 0;
                      *(_DWORD *)(v37 + 74) = 0;
                      *(_DWORD *)v37 = &off_66591C;
                      *(_DWORD *)(v37 + 40) = v32;
                      CTaskManager::SetTask((CTaskManager *)(v35 + 4), (CTask *)v37, 3, 0);
                      result = CTimer::m_snTimeInMilliseconds;
                      goto LABEL_54;
                    }
                  }
                }
                break;
              case 5:
                result = *(_DWORD *)(**(_DWORD **)(FindPlayerPed(-1) + 1092) + 44);
                if ( result >= 1 )
                {
                  result = FindPlayerVehicle(-1, 0);
                  if ( !result )
                  {
                    result = CSetPiece::TryToGenerateCopPed();
                    v4 = result;
                    if ( result )
                    {
                      v39 = CWorld::FindGroundZForCoord(
                              COERCE_CWORLD_((float)*((__int16 *)this + 10) * 0.25),
                              (float)*((__int16 *)this + 11) * 0.25,
                              v38);
                      v40 = *(_DWORD *)(v4 + 1164);
                      v41 = *(_DWORD *)(v4 + 1160) | 0x40;
                      v42 = *(_DWORD *)(v4 + 1168);
                      v43 = CTimer::m_snTimeInMilliseconds;
                      *(_DWORD *)(v4 + 1156) = *(_DWORD *)(v4 + 1156);
                      *(_DWORD *)(v4 + 1160) = v41;
                      *(_DWORD *)(v4 + 1164) = v40;
                      *(_DWORD *)(v4 + 1168) = v42;
                      *(_DWORD *)(v4 + 1360) = v43 + 10000;
                      v44 = (CTaskComplexGoToPointAndStandStill *)CTask::operator new((CTask *)&word_28, 0x2710u);
                      v45 = (float)*((__int16 *)this + 11);
                      v46 = (float)*((__int16 *)this + 10);
                      v104 = v39;
                      v103 = v45 * 0.25;
                      v102 = v46 * 0.25;
                      CTaskComplexGoToPointAndStandStill::CTaskComplexGoToPointAndStandStill(
                        v44,
                        6,
                        (const CVector *)&v102,
                        0.5,
                        2.0,
                        0,
                        0);
                      v47 = *(_DWORD *)(v4 + 1088);
                      v49 = CTask::operator new((CTask *)&dword_50, v48);
                      CTaskComplexWander::CTaskComplexWander((CTaskComplexWander *)v49, 4, 0, 1, 0.5);
                      *(_QWORD *)(v49 + 56) = 0LL;
                      *(_QWORD *)(v49 + 64) = 0LL;
                      *(_DWORD *)(v49 + 70) = 0;
                      *(_DWORD *)(v49 + 44) = 0;
                      *(_DWORD *)(v49 + 48) = 0;
                      *(_WORD *)(v49 + 52) = 0;
                      *(_DWORD *)(v49 + 74) = 0;
                      *(_DWORD *)v49 = &off_66591C;
                      *(_DWORD *)(v49 + 40) = v44;
                      CTaskManager::SetTask((CTaskManager *)(v47 + 4), (CTask *)v49, 3, 0);
                      CopPed = (_DWORD *)CSetPiece::TryToGenerateCopPed();
                      if ( CopPed )
                      {
                        v52 = CWorld::FindGroundZForCoord(
                                COERCE_CWORLD_((float)*((__int16 *)this + 12) * 0.25),
                                (float)*((__int16 *)this + 13) * 0.25,
                                v50);
                        v53 = CopPed[291];
                        v54 = CopPed[292];
                        v55 = CopPed[290] | 0x40;
                        v56 = CTimer::m_snTimeInMilliseconds;
                        CopPed[289] = CopPed[289];
                        CopPed[290] = v55;
                        CopPed[291] = v53;
                        CopPed[292] = v54;
                        CopPed[340] = v56 + 10000;
                        v57 = (CTaskComplexGoToPointAndStandStill *)CTask::operator new((CTask *)&word_28, v55);
                        v58 = (float)*((__int16 *)this + 11);
                        v59 = (float)*((__int16 *)this + 10);
                        v104 = v52;
                        v103 = v58 * 0.25;
                        v102 = v59 * 0.25;
                        CTaskComplexGoToPointAndStandStill::CTaskComplexGoToPointAndStandStill(
                          v57,
                          6,
                          (const CVector *)&v102,
                          0.5,
                          2.0,
                          0,
                          0);
                        v60 = CopPed[272];
                        v62 = CTask::operator new((CTask *)&dword_50, v61);
                        CTaskComplexWander::CTaskComplexWander((CTaskComplexWander *)v62, 4, 0, 1, 0.5);
                        *(_QWORD *)(v62 + 56) = 0LL;
                        *(_QWORD *)(v62 + 64) = 0LL;
                        *(_DWORD *)(v62 + 70) = 0;
                        *(_DWORD *)(v62 + 44) = 0;
                        *(_DWORD *)(v62 + 48) = 0;
                        *(_WORD *)(v62 + 52) = 0;
                        *(_DWORD *)(v62 + 74) = 0;
                        *(_DWORD *)v62 = &off_66591C;
                        *(_DWORD *)(v62 + 40) = v57;
                        CTaskManager::SetTask((CTaskManager *)(v60 + 4), (CTask *)v62, 3, 0);
                        result = CTimer::m_snTimeInMilliseconds;
                        goto LABEL_54;
                      }
LABEL_55:
                      CWorld::Remove((CWorld *)v4, v5);
                      result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
                    }
                  }
                }
                break;
              case 6:
                result = *(_DWORD *)(**(_DWORD **)(FindPlayerPed(-1) + 1092) + 44);
                if ( result >= 2 )
                {
                  result = FindPlayerVehicle(-1, 0);
                  if ( result )
                  {
                    FindPlayerCoors((int)&v102);
                    v63 = *((__int16 *)this + 6);
                    v64 = v102;
                    v65 = *(float *)FindPlayerSpeed(-1);
                    FindPlayerCoors((int)v100);
                    v66 = v101 - (float)((float)*((__int16 *)this + 7) * 0.25);
                    if ( (float)((float)(v65 * (float)(v64 - (float)((float)v63 * 0.25)))
                               + (float)(*(float *)(FindPlayerSpeed(-1) + 4) * v66)) < 0.0 )
                    {
                      v67 = CSetPiece::TryToGenerateCopCar(
                              *((__int16 *)this + 6),
                              COERCE_INT((float)*((__int16 *)this + 6) * 0.25),
                              COERCE_INT((float)*((__int16 *)this + 7) * 0.25),
                              COERCE_INT((float)*((__int16 *)this + 10) * 0.25),
                              COERCE_INT((float)*((__int16 *)this + 11) * 0.25));
                      if ( v67 )
                      {
                        *(_BYTE *)(v67 + 980) = 16;
                        *(_WORD *)(v67 + 957) = 6659;
                        v68 = *(_BYTE *)(v67 + 58);
                        *(_BYTE *)(v67 + 959) = 9;
                        *(_BYTE *)(v67 + 58) = v68 & 7 | 0x18;
                        v69 = CTimer::m_snTimeInMilliseconds;
                        v70 = *(float **)(v67 + 20);
                        v71 = CTimer::m_snTimeInMilliseconds + 16;
                        *(_DWORD *)(v67 + 1248) = CTimer::m_snTimeInMilliseconds + 10000;
                        *(_DWORD *)(v67 + 960) = v69 + 100;
                        v72 = v70[6] * 0.66667;
                        v73 = v70[5] * 0.66667;
                        *(float *)(v67 + 72) = v70[4] * 0.66667;
                        *(float *)(v67 + 76) = v73;
                        *(float *)(v67 + 80) = v72;
                        CCarAI::AddPoliceCarOccupants((CCarAI *)v67, 0, v71);
                        *(_DWORD *)this = CTimer::m_snTimeInMilliseconds;
                      }
                    }
                    FindPlayerCoors((int)&v102);
                    v74 = *((__int16 *)this + 8);
                    v75 = v102;
                    v76 = *(float *)FindPlayerSpeed(-1);
                    FindPlayerCoors((int)v100);
                    v77 = v101 - (float)((float)*((__int16 *)this + 9) * 0.25);
                    result = FindPlayerSpeed(-1);
                    if ( (float)((float)(v76 * (float)(v75 - (float)((float)v74 * 0.25)))
                               + (float)(*(float *)(result + 4) * v77)) < 0.0 )
                    {
                      result = CSetPiece::TryToGenerateCopCar(
                                 *((__int16 *)this + 8),
                                 COERCE_INT((float)*((__int16 *)this + 8) * 0.25),
                                 COERCE_INT((float)*((__int16 *)this + 9) * 0.25),
                                 COERCE_INT((float)*((__int16 *)this + 12) * 0.25),
                                 COERCE_INT((float)*((__int16 *)this + 13) * 0.25));
                      if ( result )
                      {
LABEL_44:
                        *(_BYTE *)(result + 980) = 16;
                        v78 = 6659;
                        goto LABEL_53;
                      }
                    }
                  }
                }
                break;
              case 7:
                result = *(_DWORD *)(**(_DWORD **)(FindPlayerPed(-1) + 1092) + 44);
                if ( result >= 2 )
                {
                  result = FindPlayerVehicle(-1, 0);
                  if ( result )
                  {
                    FindPlayerCoors((int)&v102);
                    v79 = *((__int16 *)this + 6);
                    v80 = v102;
                    v81 = *(float *)FindPlayerSpeed(-1);
                    FindPlayerCoors((int)v100);
                    v82 = v101 - (float)((float)*((__int16 *)this + 7) * 0.25);
                    if ( (float)((float)(v81 * (float)(v80 - (float)((float)v79 * 0.25)))
                               + (float)(*(float *)(FindPlayerSpeed(-1) + 4) * v82)) < 0.0 )
                    {
                      v83 = CSetPiece::TryToGenerateCopCar(
                              *((__int16 *)this + 6),
                              COERCE_INT((float)*((__int16 *)this + 6) * 0.25),
                              COERCE_INT((float)*((__int16 *)this + 7) * 0.25),
                              COERCE_INT((float)*((__int16 *)this + 10) * 0.25),
                              COERCE_INT((float)*((__int16 *)this + 11) * 0.25));
                      if ( v83 )
                      {
                        *(_BYTE *)(v83 + 980) = 16;
                        *(_WORD *)(v83 + 957) = 770;
                        v84 = *(_BYTE *)(v83 + 58);
                        *(_BYTE *)(v83 + 959) = 9;
                        *(_BYTE *)(v83 + 58) = v84 & 7 | 0x18;
                        v85 = CTimer::m_snTimeInMilliseconds;
                        v86 = *(float **)(v83 + 20);
                        v87 = CTimer::m_snTimeInMilliseconds + 16;
                        *(_DWORD *)(v83 + 1248) = CTimer::m_snTimeInMilliseconds + 10000;
                        *(_DWORD *)(v83 + 960) = v85 + 100;
                        v88 = v86[6] * 0.66667;
                        v89 = v86[5] * 0.66667;
                        *(float *)(v83 + 72) = v86[4] * 0.66667;
                        *(float *)(v83 + 76) = v89;
                        *(float *)(v83 + 80) = v88;
                        CCarAI::AddPoliceCarOccupants((CCarAI *)v83, 0, v87);
                        *(_DWORD *)this = CTimer::m_snTimeInMilliseconds;
                      }
                    }
                    FindPlayerCoors((int)&v102);
                    v90 = *((__int16 *)this + 8);
                    v91 = v102;
                    v92 = *(float *)FindPlayerSpeed(-1);
                    FindPlayerCoors((int)v100);
                    v93 = v101 - (float)((float)*((__int16 *)this + 9) * 0.25);
                    result = FindPlayerSpeed(-1);
                    if ( (float)((float)(v92 * (float)(v91 - (float)((float)v90 * 0.25)))
                               + (float)(*(float *)(result + 4) * v93)) < 0.0 )
                    {
                      result = CSetPiece::TryToGenerateCopCar(
                                 *((__int16 *)this + 8),
                                 COERCE_INT((float)*((__int16 *)this + 8) * 0.25),
                                 COERCE_INT((float)*((__int16 *)this + 9) * 0.25),
                                 COERCE_INT((float)*((__int16 *)this + 12) * 0.25),
                                 COERCE_INT((float)*((__int16 *)this + 13) * 0.25));
                      if ( result )
                      {
LABEL_52:
                        *(_BYTE *)(result + 980) = 16;
                        v78 = 770;
LABEL_53:
                        *(_WORD *)(result + 957) = v78;
                        v94 = *(_BYTE *)(result + 58);
                        *(_BYTE *)(result + 959) = 9;
                        *(_BYTE *)(result + 58) = v94 & 7 | 0x18;
                        v95 = CTimer::m_snTimeInMilliseconds;
                        v96 = *(float **)(result + 20);
                        v97 = CTimer::m_snTimeInMilliseconds + 16;
                        *(_DWORD *)(result + 1248) = CTimer::m_snTimeInMilliseconds + 10000;
                        *(_DWORD *)(result + 960) = v95 + 100;
                        v98 = v96[6] * 0.66667;
                        v99 = v96[5] * 0.66667;
                        *(float *)(result + 72) = v96[4] * 0.66667;
                        *(float *)(result + 76) = v99;
                        *(float *)(result + 80) = v98;
                        CCarAI::AddPoliceCarOccupants((CCarAI *)result, 0, v97);
                        result = CTimer::m_snTimeInMilliseconds;
LABEL_54:
                        *(_DWORD *)this = result;
                      }
                    }
                  }
                }
                break;
              default:
                return result;
            }
          }
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x35f310
// Original: _ZN9CSetPiece19TryToGenerateCopCarE9CVector2DS0_
// Demangled: CSetPiece::TryToGenerateCopCar(CVector2D,CVector2D)
int __fastcall CSetPiece::TryToGenerateCopCar(int a1, float a2, float a3, float a4, float a5)
{
  unsigned int v8; // r1
  int DefaultCopCarModel; // r5
  int v10; // r6
  int v11; // r4
  float v12; // s20
  float v13; // r1
  CEntity *v14; // r1
  bool v16; // [sp+1Ch] [bp-84h]
  __int16 v17; // [sp+1Eh] [bp-82h] BYREF
  _BYTE v18[4]; // [sp+20h] [bp-80h] BYREF
  _BYTE v19[8]; // [sp+24h] [bp-7Ch] BYREF
  float v20; // [sp+2Ch] [bp-74h]
  float v21; // [sp+50h] [bp-50h] BYREF
  float v22; // [sp+54h] [bp-4Ch]
  int v23; // [sp+58h] [bp-48h]
  float v24; // [sp+5Ch] [bp-44h] BYREF
  float v25; // [sp+60h] [bp-40h]
  float v26; // [sp+64h] [bp-3Ch]

  DefaultCopCarModel = CStreaming::GetDefaultCopCarModel((CStreaming *)((char *)&stderr + 1), LODWORD(a2));
  v10 = 0;
  if ( DefaultCopCarModel >= 0 )
  {
    v11 = CVehicle::operator new((CVehicle *)&elf_hash_bucket[552], v8);
    CAutomobile::CAutomobile((CAutomobile *)v11, DefaultCopCarModel, 1u, 1u);
    v24 = a2;
    v25 = a3;
    v26 = 1000.0;
    if ( CWorld::ProcessVerticalLine((CVector *)&v24, -998637568, (int)v19, (int)v18, 1, 0, 0, 0, 1, 0, 0) == 1 )
    {
      v12 = v20;
      v26 = v12 + (*(float (__fastcall **)(int))(*(_DWORD *)v11 + 216))(v11);
    }
    v23 = 0;
    v22 = a5 - a3;
    v21 = a4 - a2;
    CVector::Normalise((CVector *)&v21);
    *(float *)(*(_DWORD *)(v11 + 20) + 16) = v21;
    v13 = v22;
    *(float *)(*(_DWORD *)(v11 + 20) + 20) = v22;
    *(_DWORD *)(*(_DWORD *)(v11 + 20) + 24) = 0;
    **(float **)(v11 + 20) = v13;
    *(float *)(*(_DWORD *)(v11 + 20) + 4) = -v21;
    *(_DWORD *)(*(_DWORD *)(v11 + 20) + 8) = 0;
    *(_DWORD *)(*(_DWORD *)(v11 + 20) + 32) = 0;
    *(_DWORD *)(*(_DWORD *)(v11 + 20) + 36) = 0;
    *(_DWORD *)(*(_DWORD *)(v11 + 20) + 40) = 1065353216;
    *(float *)(*(_DWORD *)(v11 + 20) + 48) = v24;
    *(float *)(*(_DWORD *)(v11 + 20) + 52) = v25;
    *(float *)(*(_DWORD *)(v11 + 20) + 56) = v26;
    CWorld::FindObjectsKindaColliding(
      (CWorld *)&v24,
      *(const CVector **)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v11 + 38)]) + 44) + 36),
      0.0,
      (bool)&v17,
      &word_10,
      0,
      0,
      1,
      1,
      0,
      0,
      v16);
    if ( v17 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 4))(v11);
      return 0;
    }
    else
    {
      CVehicle::ChangeLawEnforcerState((CVehicle *)v11, 1u);
      CWorld::Add((CWorld *)v11, v14);
      return v11;
    }
  }
  return v10;
}


// ============================================================

// Address: 0x35f470
// Original: _ZN9CSetPiece19TryToGenerateCopPedE9CVector2D
// Demangled: CSetPiece::TryToGenerateCopPed(CVector2D)
CWorld *__fastcall CSetPiece::TryToGenerateCopPed(int a1, int a2, int a3)
{
  CWorld *v3; // r4
  unsigned int v4; // r1
  CEntity *v5; // r1
  bool v7; // [sp+1Ch] [bp-4Ch]
  __int16 v8; // [sp+22h] [bp-46h] BYREF
  _BYTE v9[4]; // [sp+24h] [bp-44h] BYREF
  _BYTE v10[8]; // [sp+28h] [bp-40h] BYREF
  float v11; // [sp+30h] [bp-38h]
  int v12; // [sp+54h] [bp-14h] BYREF
  int v13; // [sp+58h] [bp-10h]
  CEntity *v14; // [sp+5Ch] [bp-Ch]

  v12 = a2;
  v13 = a3;
  *(float *)&v14 = 1000.0;
  v3 = 0;
  if ( CWorld::ProcessVerticalLine((CVector *)&v12, -998637568, (int)v10, (int)v9, 1, 0, 0, 0, 1, 0, 0) == 1 )
    *(float *)&v14 = v11 + 0.9;
  CWorld::FindObjectsKindaColliding(
    (CWorld *)&v12,
    (const CVector *)0x3F19999A,
    0.0,
    (bool)&v8,
    &word_10,
    0,
    0,
    1,
    1,
    0,
    0,
    v7);
  if ( !v8 )
  {
    v3 = (CWorld *)CPed::operator new((CPed *)&elf_hash_bucket[436], v4);
    CCopPed::CCopPed();
    *(_DWORD *)(*((_DWORD *)v3 + 5) + 48) = v12;
    *(_DWORD *)(*((_DWORD *)v3 + 5) + 52) = v13;
    v5 = v14;
    *(float *)(*((_DWORD *)v3 + 5) + 56) = *(float *)&v14;
    CWorld::Add(v3, v5);
  }
  return v3;
}


// ============================================================
