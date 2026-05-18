
// Address: 0x197a30
// Original: j__ZN16CPedStuckChecker12TestPedStuckEP4CPedP11CEventGroup
// Demangled: CPedStuckChecker::TestPedStuck(CPed *,CEventGroup *)
// attributes: thunk
int __fastcall CPedStuckChecker::TestPedStuck(CPedStuckChecker *this, CPed *a2, CEventGroup *a3)
{
  return _ZN16CPedStuckChecker12TestPedStuckEP4CPedP11CEventGroup(this, a2, a3);
}


// ============================================================

// Address: 0x4b9df0
// Original: _ZN16CPedStuckCheckerC2Ev
// Demangled: CPedStuckChecker::CPedStuckChecker(void)
void __fastcall CPedStuckChecker::CPedStuckChecker(CPedStuckChecker *this)
{
  *((_DWORD *)this + 3) = 0;
}


// ============================================================

// Address: 0x4b9df8
// Original: _ZN16CPedStuckChecker12TestPedStuckEP4CPedP11CEventGroup
// Demangled: CPedStuckChecker::TestPedStuck(CPed *,CEventGroup *)
int __fastcall CPedStuckChecker::TestPedStuck(CPedStuckChecker *this, CPed *a2, CEventGroup *a3)
{
  float32x2_t v3; // d3
  float32x2_t v4; // d6
  _BYTE *v8; // r5
  int result; // r0
  int SimplestActiveTask; // r0
  CPed **v11; // r5
  int v12; // r0
  int v13; // r0
  int *v14; // r8
  __int16 v15; // r0
  unsigned __int16 v16; // r0
  float v17; // s0
  int v18; // r1
  float v19; // s4
  float v20; // s2
  char *v21; // r2
  __int64 v22; // d16
  int v23; // r1
  float *v24; // r2
  float v25; // s2
  float v26; // s10
  float v27; // s8
  float v28; // s6
  unsigned int v29; // r0
  __int16 v30; // r0
  int v31; // r0
  int v32; // r0
  float *v33; // r9
  float *v34; // r1
  float v35; // s10
  float v36; // s2
  int v37; // r1
  float *v38; // r0
  float v39; // s2
  float v40; // s4
  float v41; // s18
  int v42; // r0
  float *v43; // r9
  float *v44; // r1
  int v45; // r0
  int v46; // r1
  int v47; // r2
  int v48; // r3
  int v49; // r5
  int v50; // r5
  int v51; // r0
  float v52; // s0
  int v53; // r2
  float *v54; // r0
  int v55; // r0
  float *v56; // r1
  float v57; // s10
  float v58; // s2
  int v59; // r1
  float *v60; // r0
  float v61; // s2
  float v62; // s4
  float v63; // s0
  int v64; // r10
  float v65; // s2
  float v66; // s0
  double v67; // kr00_8
  int v68; // r1
  float v69; // s4
  float v70; // s6
  float v71; // s8
  float *v72; // r2
  int v73; // r1
  float *v74; // r2
  float v75; // s2
  int v76; // r2
  float v77; // r3
  float v78; // r5
  float v79; // r2
  CGeneral *RadianAngleBetweenPoints; // r0
  float v81; // r1
  int v82; // r3
  float *v83; // r0
  float v84; // s16
  float v85; // s18
  float v86; // s20
  float *v87; // r0
  float v88; // s2
  float v89; // s4
  float *v90; // r0
  int v91; // r0
  float *v92; // r1
  float v93; // [sp+0h] [bp-D8h]
  bool v94; // [sp+14h] [bp-C4h]
  bool v95; // [sp+14h] [bp-C4h]
  float v96[3]; // [sp+1Ch] [bp-BCh] BYREF
  float v97; // [sp+28h] [bp-B0h] BYREF
  float v98; // [sp+2Ch] [bp-ACh]
  float v99; // [sp+30h] [bp-A8h]
  int v100; // [sp+34h] [bp-A4h] BYREF
  double v101; // [sp+38h] [bp-A0h] BYREF
  float v102; // [sp+40h] [bp-98h]
  float v103; // [sp+48h] [bp-90h] BYREF
  float v104; // [sp+4Ch] [bp-8Ch]
  float v105; // [sp+50h] [bp-88h]
  _DWORD v106[2]; // [sp+74h] [bp-64h] BYREF
  float v107; // [sp+7Ch] [bp-5Ch]

  v8 = (char *)a2 + 28;
  if ( (*((_BYTE *)a2 + 28) & 1) == 0
    || *((_DWORD *)a2 + 64)
    || (*((_DWORD *)a2 + 275) & 0xFFFFFFFE) == 0x36
    || *((unsigned __int8 *)a2 + 1156) << 30
    || (!*((_DWORD *)a2 + 56) || *((float *)a2 + 55) <= 0.0) && (CPed::IsPlayer(a2) != 1 || (*v8 & 0x10) == 0)
    || (SimplestActiveTask = CTaskManager::GetSimplestActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4))) != 0
    && (*(int (__fastcall **)(int))(*(_DWORD *)SimplestActiveTask + 20))(SimplestActiveTask) == 1304
    || (v11 = (CPed **)*((_DWORD *)a2 + 272), CPed::IsPlayer(*v11) == 1)
    && (v12 = CTaskManager::GetSimplestActiveTask((CTaskManager *)(v11 + 1))) != 0
    && (*(int (__fastcall **)(int))(*(_DWORD *)v12 + 20))(v12) == 1303
    || (v13 = CTaskManager::GetSimplestActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4))) != 0
    && (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 20))(v13) == 254 )
  {
    result = 0;
    *((_DWORD *)this + 3) = 0;
    return result;
  }
  v14 = (int *)((char *)a2 + 1156);
  v100 = 0;
  v15 = *((_WORD *)this + 6);
  if ( (unsigned __int16)(v15 - 1) < 0x2710u )
  {
    v23 = *((_DWORD *)a2 + 5);
    v16 = v15 + 1;
    v24 = (float *)(v23 + 48);
    v25 = *((float *)this + 2);
    if ( !v23 )
      v24 = (float *)((char *)a2 + 4);
    v26 = v24[2];
    v17 = *v24 - *(float *)this;
    v19 = v24[1] - *((float *)this + 1);
    *((_WORD *)this + 6) = v16;
    v20 = v26 - v25;
  }
  else
  {
    v16 = 1;
    v17 = 0.0;
    *((_DWORD *)this + 3) = 1;
    v18 = *((_DWORD *)a2 + 5);
    v19 = 0.0;
    v20 = 0.0;
    v21 = (char *)(v18 + 48);
    if ( !v18 )
      v21 = (char *)a2 + 4;
    v22 = *(_QWORD *)v21;
    *((_DWORD *)this + 2) = *((_DWORD *)v21 + 2);
    *(_QWORD *)this = v22;
  }
  v4.n64_u32[0] = 1008981770;
  v3.n64_u32[0] = CTimer::ms_fTimeStep;
  v27 = vmax_f32(v3, v4).n64_f32[0];
  v28 = (float)v16;
  if ( (float)(50.0 / (float)(v27 * 4.0)) < v28
    && (float)((float)((float)(v17 * v17) + (float)(v19 * v19)) + (float)(v20 * v20)) < (float)(v28 * 0.01) )
  {
    goto LABEL_29;
  }
  v29 = *((unsigned __int8 *)a2 + 189);
  if ( v29 < 2 )
  {
    if ( v29 != 1 )
      goto LABEL_62;
    v31 = *((_DWORD *)a2 + 48);
    if ( !v31
      || (*(_BYTE *)(v31 + 58) & 7) != 1
      || (float)(50.0 / (float)(v27 + v27)) >= v28
      || fabsf(v20) >= (float)(v28 * 0.004) )
    {
      goto LABEL_62;
    }
    *((float *)&v101 + 1) = v17;
    v102 = 1.0;
    *(float *)&v101 = -v19;
    CVector::Normalise((CVector *)&v101);
    v32 = *((_DWORD *)a2 + 5);
    v33 = (float *)((char *)a2 + 4);
    v34 = (float *)((char *)a2 + 4);
    if ( v32 )
      v34 = (float *)(v32 + 48);
    v35 = v34[2];
    v36 = v34[1] + *((float *)&v101 + 1);
    v103 = *v34 + *(float *)&v101;
    v104 = v36;
    v105 = v35 + v102;
    if ( CWorld::ProcessVerticalLine((CVector *)&v103, -1046478848, (int)v106, (int)&v100, 1, 0, 0, 0, 0, 0, 0) )
    {
      v37 = *((_DWORD *)a2 + 5);
      v38 = (float *)((char *)a2 + 4);
      if ( v37 )
        v38 = (float *)(v37 + 48);
      v39 = v38[1] + *((float *)&v101 + 1);
      v40 = v38[2] + v102;
      v97 = *v38 + *(float *)&v101;
      v98 = v39;
      v99 = v40;
      if ( CWorld::GetIsLineOfSightClear(
             (CWorld *)v38,
             (const CVector *)&v97,
             (const CVector *)((char *)&stderr + 1),
             1,
             0,
             1,
             0,
             0,
             0,
             v94) == 1 )
        v41 = v107;
      else
        v41 = 5001.0;
    }
    else
    {
      v41 = 5001.0;
    }
    v55 = *((_DWORD *)a2 + 5);
    v56 = (float *)((char *)a2 + 4);
    if ( v55 )
      v56 = (float *)(v55 + 48);
    v57 = v56[2];
    v58 = v56[1] - *((float *)&v101 + 1);
    v97 = *v56 - *(float *)&v101;
    v98 = v58;
    v99 = v57 - v102;
    if ( CWorld::ProcessVerticalLine((CVector *)&v97, -1046478848, (int)&v103, (int)&v100, 1, 0, 0, 0, 0, 0, 0) )
    {
      v59 = *((_DWORD *)a2 + 5);
      v60 = (float *)((char *)a2 + 4);
      if ( v59 )
        v60 = (float *)(v59 + 48);
      v61 = v60[1] - *((float *)&v101 + 1);
      v62 = v60[2] - v102;
      v96[0] = *v60 - *(float *)&v101;
      v96[1] = v61;
      v96[2] = v62;
      if ( CWorld::GetIsLineOfSightClear(
             (CWorld *)v60,
             (const CVector *)v96,
             (const CVector *)((char *)&stderr + 1),
             1,
             0,
             1,
             0,
             0,
             0,
             v95) == 1 )
        v63 = v105;
      else
        v63 = 5002.0;
    }
    else
    {
      v63 = 5002.0;
    }
    if ( v41 > 5000.0 )
    {
      v64 = -1;
      goto LABEL_81;
    }
    v73 = *((_DWORD *)a2 + 5);
    v74 = (float *)(v73 + 48);
    if ( !v73 )
      v74 = (float *)((char *)a2 + 4);
    v75 = v74[2] + -1.0;
    if ( v41 >= 5000.0 || v41 <= v75 || (v64 = 1, v63 >= 5001.0) )
    {
      v64 = 0;
      if ( v63 >= 5001.0 || v63 <= v75 )
        goto LABEL_81;
      v64 = 2;
    }
    if ( (*((_BYTE *)a2 + 1162) & 0x20) != 0
      || *((float *)a2 + 55) > 0.0
      && (v76 = *((_DWORD *)a2 + 56)) != 0
      && (*(_BYTE *)(v76 + 58) & 7) == 3
      && *((float *)a2 + 59) > 0.3 )
    {
LABEL_81:
      v65 = *(float *)&v101;
      if ( v41 >= v63 )
      {
        v66 = *((float *)&v101 + 1);
      }
      else
      {
        v65 = -*(float *)&v101;
        v66 = -*((float *)&v101 + 1);
        *(float *)&v101 = -*(float *)&v101;
        *((float *)&v101 + 1) = -*((float *)&v101 + 1);
        v102 = -v102;
      }
      v102 = 1.0;
      CPhysical::ApplyMoveForce(a2, v65 * 4.0, v66 * 4.0, 1082130432);
      if ( v64 >= 0 )
      {
        v67 = v101;
        v68 = *((_DWORD *)a2 + 5);
        if ( v68 )
          v33 = (float *)(v68 + 48);
        v69 = (float)(v102 * 0.25) + v33[2];
        v70 = (float)(*((float *)&v101 + 1) * 0.25) + v33[1];
        v71 = (float)(*(float *)&v101 * 0.25) + *v33;
        if ( v68 )
        {
          *(float *)(v68 + 48) = v71;
          *(float *)(*((_DWORD *)a2 + 5) + 52) = v70;
          v72 = (float *)(*((_DWORD *)a2 + 5) + 56);
        }
        else
        {
          v72 = (float *)((char *)a2 + 12);
          *((float *)a2 + 1) = v71;
          *((float *)a2 + 2) = v70;
        }
        *v72 = v69;
        RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                                 (CGeneral *)LODWORD(v67),
                                                 *((float *)&v67 + 1),
                                                 0.0,
                                                 0.0,
                                                 v93);
        *((_DWORD *)a2 + 343) = RadianAngleBetweenPoints;
        v82 = CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v81);
        v83 = (float *)*((_DWORD *)a2 + 5);
        *((_DWORD *)a2 + 343) = v82;
        *((_DWORD *)a2 + 344) = v82;
        if ( v83 )
        {
          v84 = v83[12];
          v85 = v83[13];
          v86 = v83[14];
          CMatrix::SetRotate((CMatrix *)v83, 0.0, 0.0, *(float *)&v82);
          v87 = (float *)*((_DWORD *)a2 + 5);
          v88 = v85 + v87[13];
          v89 = v86 + v87[14];
          v87[12] = v84 + v87[12];
          v87[13] = v88;
          v87[14] = v89;
          v30 = 2;
LABEL_31:
          *((_WORD *)this + 7) = v30;
          goto LABEL_62;
        }
        *((_DWORD *)a2 + 4) = v82;
      }
      v30 = 2;
      goto LABEL_31;
    }
    if ( v64 == 2 )
    {
      v78 = v103;
      v77 = v104;
      v79 = v105;
      if ( !v73 )
        goto LABEL_112;
    }
    else
    {
      v78 = *(float *)v106;
      v77 = *(float *)&v106[1];
      v79 = v107;
      if ( !v73 )
      {
LABEL_112:
        v90 = (float *)((char *)a2 + 12);
        *((float *)a2 + 1) = v78;
        *((float *)a2 + 2) = v77;
        goto LABEL_113;
      }
    }
    *(float *)(v73 + 48) = v78;
    *(float *)(*((_DWORD *)a2 + 5) + 52) = v77;
    v90 = (float *)(*((_DWORD *)a2 + 5) + 56);
LABEL_113:
    *v90 = v79;
    v91 = *((_DWORD *)a2 + 5);
    v92 = (float *)((char *)a2 + 4);
    if ( v91 )
      v92 = (float *)(v91 + 48);
    v92[2] = v92[2] + 1.0;
    goto LABEL_81;
  }
  if ( (float)(50.0 / (float)(v27 + v27)) < v28 && fabsf(v20) < (float)(v28 * 0.004) )
  {
LABEL_29:
    if ( !((CTimer::m_FrameCounter + *((unsigned __int16 *)a2 + 18) + 3) << 29) )
    {
      v42 = *((_DWORD *)a2 + 5);
      v43 = (float *)((char *)a2 + 4);
      v44 = (float *)((char *)a2 + 4);
      if ( v42 )
        v44 = (float *)(v42 + 48);
      v102 = v44[2];
      v101 = *(double *)v44;
      v102 = v102 + 1.0;
      if ( CWorld::ProcessVerticalLine(
             (CVector *)&v101,
             COERCE_INT(v44[2] + -1.0),
             (int)v106,
             (int)&v100,
             1,
             1,
             0,
             1,
             0,
             0,
             0) == 1 )
      {
        v45 = *v14;
        v46 = *((_DWORD *)a2 + 290);
        v47 = *((_DWORD *)a2 + 291);
        v48 = *((_DWORD *)a2 + 292);
        if ( (v46 & 0x200000) == 0 )
          goto LABEL_118;
        v49 = *((_DWORD *)a2 + 5);
        if ( v49 )
          v43 = (float *)(v49 + 48);
        if ( (float)(v107 + 1.0) < v43[2] )
        {
LABEL_118:
          if ( *((float *)a2 + 55) <= 0.0
            || (v50 = *((_DWORD *)a2 + 56)) == 0
            || (*(_BYTE *)(v50 + 58) & 7) != 3
            || *((float *)a2 + 59) <= 0.3 )
          {
            v51 = HIDWORD(v101);
            v52 = v107 + 1.0;
            v102 = v107 + 1.0;
            v53 = *((_DWORD *)a2 + 5);
            if ( v53 )
            {
              *(_DWORD *)(v53 + 48) = LODWORD(v101);
              *(_DWORD *)(*((_DWORD *)a2 + 5) + 52) = v51;
              v54 = (float *)(*((_DWORD *)a2 + 5) + 56);
            }
            else
            {
              *(double *)((char *)a2 + 4) = v101;
              v54 = (float *)((char *)a2 + 12);
            }
            *v54 = v52;
            v45 = *v14;
            v46 = *((_DWORD *)a2 + 290);
            v47 = *((_DWORD *)a2 + 291);
            v48 = *((_DWORD *)a2 + 292);
            if ( (v46 & 0x200000) != 0 )
            {
              v46 &= ~0x200000u;
              *v14 = v45;
              *((_DWORD *)a2 + 290) = v46;
              *((_DWORD *)a2 + 291) = v47;
              *((_DWORD *)a2 + 292) = v48;
            }
          }
        }
        *v14 = v45 | 1;
        *((_DWORD *)a2 + 290) = v46;
        *((_DWORD *)a2 + 291) = v47;
        *((_DWORD *)a2 + 292) = v48;
        *((_DWORD *)this + 3) = 0;
      }
      goto LABEL_62;
    }
    v30 = 1;
    goto LABEL_31;
  }
LABEL_62:
  if ( !*((_WORD *)this + 7) )
    return 0;
  if ( CEventGroup::GetEventOfType(a3, 66) && *(float *)(CEventGroup::GetEventOfType(a3, 66) + 12) > 1.0 )
  {
    *v14 &= ~1u;
    return 0;
  }
  else
  {
    CEventStuckInAir::CEventStuckInAir((CEventStuckInAir *)v106, a2);
    CEventGroup::Add(a3, (CEvent *)v106, 0);
    CEventStuckInAir::~CEventStuckInAir((CEventStuckInAir *)v106);
    return 1;
  }
}


// ============================================================
