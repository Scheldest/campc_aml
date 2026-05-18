
// Address: 0x191ef0
// Original: j__ZN20CTaskComplexEnterCar21GetCameraAvoidVehicleEv
// Demangled: CTaskComplexEnterCar::GetCameraAvoidVehicle(void)
// attributes: thunk
int __fastcall CTaskComplexEnterCar::GetCameraAvoidVehicle(CTaskComplexEnterCar *this)
{
  return _ZN20CTaskComplexEnterCar21GetCameraAvoidVehicleEv(this);
}


// ============================================================

// Address: 0x194d9c
// Original: j__ZN20CTaskComplexEnterCar22GetCameraStickModifierEP4CPedfRfS2_S2_S2_
// Demangled: CTaskComplexEnterCar::GetCameraStickModifier(CPed *,float,float &,float &,float &,float &)
// attributes: thunk
int __fastcall CTaskComplexEnterCar::GetCameraStickModifier(
        CTaskComplexEnterCar *this,
        CPed *a2,
        float a3,
        float *a4,
        float *a5,
        float *a6,
        float *a7)
{
  return _ZN20CTaskComplexEnterCar22GetCameraStickModifierEP4CPedfRfS2_S2_S2_(this, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x19a43c
// Original: j__ZN20CTaskComplexEnterCar15SetVehicleFlagsEP4CPed
// Demangled: CTaskComplexEnterCar::SetVehicleFlags(CPed *)
// attributes: thunk
int __fastcall CTaskComplexEnterCar::SetVehicleFlags(CTaskComplexEnterCar *this, CPed *a2)
{
  return _ZN20CTaskComplexEnterCar15SetVehicleFlagsEP4CPed(this, a2);
}


// ============================================================

// Address: 0x19b26c
// Original: j__ZN20CTaskComplexEnterCar13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexEnterCar::CreateSubTask(int,CPed *)
// attributes: thunk
int __fastcall CTaskComplexEnterCar::CreateSubTask(CTaskComplexEnterCar *this, int a2, CPed *a3)
{
  return _ZN20CTaskComplexEnterCar13CreateSubTaskEiP4CPed(this, a2, a3);
}


// ============================================================

// Address: 0x19e8b4
// Original: j__ZN20CTaskComplexEnterCar12GetTargetPosEv
// Demangled: CTaskComplexEnterCar::GetTargetPos(void)
// attributes: thunk
int __fastcall CTaskComplexEnterCar::GetTargetPos(CTaskComplexEnterCar *this)
{
  return _ZN20CTaskComplexEnterCar12GetTargetPosEv(this);
}


// ============================================================

// Address: 0x4f466c
// Original: _ZN20CTaskComplexEnterCarC2EP8CVehiclebbbb
// Demangled: CTaskComplexEnterCar::CTaskComplexEnterCar(CVehicle *,bool,bool,bool,bool)
void __fastcall CTaskComplexEnterCar::CTaskComplexEnterCar(
        CTaskComplexEnterCar *this,
        CVehicle *a2,
        bool a3,
        bool a4,
        bool a5,
        bool a6)
{
  char v10; // r3

  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 9) = 6;
  *((_WORD *)this + 20) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_BYTE *)this + 60) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_BYTE *)this + 68) = 0;
  *((_DWORD *)this + 18) = -1082130432;
  v10 = *((_BYTE *)this + 16);
  *(_QWORD *)((char *)this + 20) = 0LL;
  *(_QWORD *)((char *)this + 28) = 0LL;
  *((_BYTE *)this + 16) = a3 | (2 * a4) | (4 * a5) | (8 * a6) | v10 & 0xF0;
  *(_DWORD *)this = &off_66A904;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x4f474c
// Original: _ZN20CTaskComplexEnterCarD0Ev
// Demangled: CTaskComplexEnterCar::~CTaskComplexEnterCar()
void __fastcall __noreturn CTaskComplexEnterCar::~CTaskComplexEnterCar(CTaskComplexEnterCar *this)
{
  __debugbreak();
}


// ============================================================

// Address: 0x4f474e
// Original: _ZN20CTaskComplexEnterCar12GetTargetPosEv
// Demangled: CTaskComplexEnterCar::GetTargetPos(void)
int __fastcall CTaskComplexEnterCar::GetTargetPos(CTaskComplexEnterCar *this, int a2)
{
  int result; // r0
  __int64 v5; // d16
  int v6; // r0
  int v7; // r0

  if ( *(_DWORD *)(a2 + 20) )
  {
    result = *(_DWORD *)(a2 + 52);
    v5 = *(_QWORD *)(a2 + 44);
LABEL_3:
    *((_DWORD *)this + 2) = result;
    *(_QWORD *)this = v5;
    return result;
  }
  v6 = *(_DWORD *)(a2 + 8);
  if ( v6 && (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 20))(v6) == 800 )
  {
    v7 = *(_DWORD *)(a2 + 8);
    v5 = *(_QWORD *)(v7 + 56);
    result = *(_DWORD *)(v7 + 64);
    goto LABEL_3;
  }
  result = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  return result;
}


// ============================================================

// Address: 0x4f478c
// Original: _ZN20CTaskComplexEnterCar22GetCameraStickModifierEP4CPedfRfS2_S2_S2_
// Demangled: CTaskComplexEnterCar::GetCameraStickModifier(CPed *,float,float &,float &,float &,float &)
int __fastcall CTaskComplexEnterCar::GetCameraStickModifier(
        CTaskComplexEnterCar *this,
        CPed *a2,
        float a3,
        float *a4,
        float *a5,
        float *a6,
        float *a7)
{
  int result; // r0
  bool v12; // zf
  int Pad; // r0
  int v14; // r1
  CPad *v15; // r10
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  unsigned __int8 *v22; // r11
  int v23; // r4
  int v24; // r5
  float v25; // s20
  int v26; // r0
  int v27; // r1
  int v28; // r0
  char *v29; // r2
  int v30; // r1
  unsigned __int64 v31; // d1
  float v32; // s18
  float v33; // s22
  float v34; // s0
  int *v35; // r0
  float v36; // s0
  float v37; // s4
  float v38; // s0
  int v39; // r0
  float v40; // s8
  float v41; // s4
  float v42; // s8
  float v43; // s6
  float v44; // s0
  float v45; // s2
  float v46; // s4

  result = *((_DWORD *)this + 3);
  v12 = result == 0;
  if ( result )
  {
    result = *(_DWORD *)(result + 1444);
    v12 = result == 3;
  }
  if ( !v12 )
  {
    Pad = CPad::GetPad(0, (int)a2);
    v15 = (CPad *)Pad;
    if ( *((_DWORD *)a2 + 359) == 1 )
      v15 = (CPad *)CPad::GetPad((CPad *)((char *)&stderr + 1), v14);
    if ( (*(int (__fastcall **)(CTaskComplexEnterCar *))(*(_DWORD *)this + 12))(this) )
    {
      v16 = (*(int (__fastcall **)(CTaskComplexEnterCar *))(*(_DWORD *)this + 12))(this);
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 20))(v16) == 802
        || (v17 = (*(int (__fastcall **)(CTaskComplexEnterCar *))(*(_DWORD *)this + 12))(this),
            (*(int (__fastcall **)(int))(*(_DWORD *)v17 + 20))(v17) == 802)
        || (v18 = (*(int (__fastcall **)(CTaskComplexEnterCar *))(*(_DWORD *)this + 12))(this),
            (*(int (__fastcall **)(int))(*(_DWORD *)v18 + 20))(v18) == 804)
        || (v19 = (*(int (__fastcall **)(CTaskComplexEnterCar *))(*(_DWORD *)this + 12))(this),
            (*(int (__fastcall **)(int))(*(_DWORD *)v19 + 20))(v19) == 820)
        || (v20 = (*(int (__fastcall **)(CTaskComplexEnterCar *))(*(_DWORD *)this + 12))(this),
            (*(int (__fastcall **)(int))(*(_DWORD *)v20 + 20))(v20) == 807)
        || (v21 = (*(int (__fastcall **)(CTaskComplexEnterCar *))(*(_DWORD *)this + 12))(this),
            (*(int (__fastcall **)(int))(*(_DWORD *)v21 + 20))(v21) == 808) )
      {
        if ( COERCE_FLOAT(CPad::AimWeaponLeftRight(v15, a2, 0) & 0x7FFFFFFF) <= 20.0
          && fabsf((float)CPad::AimWeaponUpDown(v15, a2, 0)) <= 20.0 )
        {
          if ( CPad::GetAccelerate(v15) )
          {
            result = 2;
          }
          else
          {
            if ( !CPad::GetBrake(v15) )
            {
              v22 = (unsigned __int8 *)this + 41;
              result = *((unsigned __int8 *)this + 41);
              if ( result == 3 )
                return result;
              goto LABEL_19;
            }
            result = 1;
          }
        }
        else
        {
          result = 3;
        }
        *((_BYTE *)this + 41) = result;
        v22 = (unsigned __int8 *)this + 41;
        if ( result == 3 )
          return result;
LABEL_19:
        v23 = *((_DWORD *)this + 3);
        v24 = *(_DWORD *)(v23 + 20);
        if ( v24 )
          v25 = atan2f(COERCE_FLOAT(*(_DWORD *)(v24 + 16) ^ 0x80000000), *(float *)(v24 + 20));
        else
          v25 = *(float *)(v23 + 16);
        v27 = *((_DWORD *)a2 + 5);
        v28 = v24 + 48;
        if ( !v24 )
          v28 = v23 + 4;
        v29 = (char *)(v27 + 48);
        if ( !v27 )
          v29 = (char *)a2 + 4;
        v30 = *(_DWORD *)(v23 + 20);
        v31 = vmul_f32(vsub_f32(*(float32x2_t *)(v29 + 4), *(float32x2_t *)(v28 + 4)), *(float32x2_t *)(v30 + 4)).n64_u64[0];
        v32 = (float)((float)((float)(*(float *)v29 - *(float *)v28) * *(float *)v30) + *(float *)&v31)
            + *((float *)&v31 + 1);
        v33 = atan2f(v32, a3) * 0.7;
        v34 = *(float *)(CEntity::GetColModel((CEntity *)v23) + 4);
        v35 = dword_4F4AC0;
        v36 = -v34;
        v37 = v25 + -1.5708;
        if ( v33 > 0.0 )
          v35 = &dword_4F4AC0[1];
        if ( v36 > a3 )
          v33 = *(float *)v35;
        v38 = v37 - v33;
        v39 = *v22;
        v40 = v37 + 3.1416;
        v41 = *a5;
        v42 = v40 + v33;
        if ( v39 == 1 )
          v38 = v42;
        if ( v38 <= (float)(*a5 + 3.1416) )
        {
          if ( v38 >= (float)(v41 + -3.1416) )
            goto LABEL_42;
          v43 = 6.2832;
        }
        else
        {
          v43 = -6.2832;
        }
        v38 = v38 + v43;
LABEL_42:
        v44 = v38 - v41;
        if ( v32 <= 0.0 )
        {
          if ( v39 == 1 )
          {
LABEL_44:
            if ( v44 >= 1.5708 )
              v44 = -v44;
LABEL_50:
            result = (int)&dword_4F4ADC[v39];
            v45 = *(float *)result;
            v46 = *(float *)result;
            if ( v44 <= *(float *)result )
            {
              v46 = v44;
              if ( v44 < (float)-v45 )
                v46 = -v45;
            }
            *a7 = *a7 + (float)(v46 * v45);
            if ( *a4 > -0.17453 )
            {
              result = (int)a6;
              *a6 = *a6 - (float)(*(float *)&dword_4F4ADC[*v22] * *(float *)&dword_4F4ADC[*v22]);
            }
            return result;
          }
        }
        else if ( v39 != 1 )
        {
          goto LABEL_44;
        }
        if ( v44 <= -1.5708 )
          v44 = -v44;
        goto LABEL_50;
      }
    }
    result = (*(int (__fastcall **)(CTaskComplexEnterCar *))(*(_DWORD *)this + 12))(this);
    if ( result )
    {
      v26 = (*(int (__fastcall **)(CTaskComplexEnterCar *))(*(_DWORD *)this + 12))(this);
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v26 + 20))(v26);
      if ( result == 805 )
      {
        CPad::GetAccelerate(v15);
        return CPad::GetBrake(v15);
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x4f4aec
// Original: _ZN20CTaskComplexEnterCar21GetCameraAvoidVehicleEv
// Demangled: CTaskComplexEnterCar::GetCameraAvoidVehicle(void)
int __fastcall CTaskComplexEnterCar::GetCameraAvoidVehicle(CTaskComplexEnterCar *this)
{
  int v2; // r0
  int v3; // r1
  int result; // r0

  if ( !*((_DWORD *)this + 3) || !(*(int (__fastcall **)(CTaskComplexEnterCar *))(*(_DWORD *)this + 12))(this) )
    return 0;
  v2 = (*(int (__fastcall **)(CTaskComplexEnterCar *))(*(_DWORD *)this + 12))(this);
  v3 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 20))(v2);
  result = 0;
  switch ( v3 )
  {
    case 704:
    case 715:
    case 719:
    case 801:
    case 802:
    case 803:
    case 804:
    case 805:
    case 807:
    case 808:
    case 811:
    case 812:
    case 816:
    case 817:
    case 820:
      result = *((_DWORD *)this + 3);
      break;
    case 705:
    case 706:
    case 707:
    case 708:
    case 709:
    case 710:
    case 711:
    case 712:
    case 713:
    case 714:
    case 716:
    case 717:
    case 718:
    case 720:
    case 721:
    case 722:
    case 723:
    case 724:
    case 725:
    case 726:
    case 727:
    case 728:
    case 729:
    case 730:
    case 731:
    case 732:
    case 733:
    case 734:
    case 735:
    case 736:
    case 737:
    case 738:
    case 739:
    case 740:
    case 741:
    case 742:
    case 743:
    case 744:
    case 745:
    case 746:
    case 747:
    case 748:
    case 749:
    case 750:
    case 751:
    case 752:
    case 753:
    case 754:
    case 755:
    case 756:
    case 757:
    case 758:
    case 759:
    case 760:
    case 761:
    case 762:
    case 763:
    case 764:
    case 765:
    case 766:
    case 767:
    case 768:
    case 769:
    case 770:
    case 771:
    case 772:
    case 773:
    case 774:
    case 775:
    case 776:
    case 777:
    case 778:
    case 779:
    case 780:
    case 781:
    case 782:
    case 783:
    case 784:
    case 785:
    case 786:
    case 787:
    case 788:
    case 789:
    case 790:
    case 791:
    case 792:
    case 793:
    case 794:
    case 795:
    case 796:
    case 797:
    case 798:
    case 799:
    case 800:
    case 806:
    case 809:
    case 810:
    case 813:
    case 814:
    case 815:
    case 818:
    case 819:
      return result;
    default:
      if ( v3 == 203 )
        result = *((_DWORD *)this + 3);
      break;
  }
  return result;
}


// ============================================================

// Address: 0x4f4bae
// Original: _ZN20CTaskComplexEnterCar13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexEnterCar::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexEnterCar::MakeAbortable(CTaskComplexEnterCar *this, CPed *a2, int a3, const CEvent *a4)
{
  int v8; // r0
  CTaskSimpleStandStill *v9; // r0
  int v10; // r2
  CTaskSimpleCarSetPedOut *v11; // r0
  int v12; // r2
  const CVehicle *v13; // r1
  CTaskSimpleCarCloseDoorFromOutside *v14; // r0
  _BYTE v16[28]; // [sp+4h] [bp-4Ch] BYREF
  _BYTE v17[48]; // [sp+20h] [bp-30h] BYREF

  if ( !*((_DWORD *)this + 3) )
    return 1;
  v8 = *((_DWORD *)this + 2);
  if ( a3 == 2 )
  {
    (*(void (__fastcall **)(int, CPed *, int, const CEvent *))(*(_DWORD *)v8 + 28))(v8, a2, 2, a4);
    CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v17, -1, 0, 0, 8.0);
    CTaskSimpleStandStill::ProcessPed(v9, a2);
    v10 = *((_DWORD *)this + 5);
    if ( v10 )
    {
      CTaskSimpleCarSetPedOut::CTaskSimpleCarSetPedOut((CTaskSimpleCarSetPedOut *)v16, *((CVehicle **)this + 3), v10, 0);
      CTaskSimpleCarSetPedOut::ProcessPed(v11, a2);
      CTaskSimpleCarSetPedOut::~CTaskSimpleCarSetPedOut((CTaskSimpleCarSetPedOut *)v16);
      v13 = (const CVehicle *)*((_DWORD *)this + 5);
      if ( v13 )
      {
        if ( CCarEnterExit::CarHasDoorToClose(*((CCarEnterExit **)this + 3), v13, v12) == 1 )
        {
          CTaskSimpleCarCloseDoorFromOutside::CTaskSimpleCarCloseDoorFromOutside(
            (CTaskSimpleCarCloseDoorFromOutside *)v16,
            *((CVehicle **)this + 3),
            *((_DWORD *)this + 5),
            0);
          CTaskSimpleCarCloseDoorFromOutside::MakeAbortable(v14, a2, 2, a4);
          CTaskSimpleCarCloseDoorFromOutside::~CTaskSimpleCarCloseDoorFromOutside((CTaskSimpleCarCloseDoorFromOutside *)v16);
        }
      }
    }
    CTaskSimpleStandStill::~CTaskSimpleStandStill((CTaskSimpleStandStill *)v17);
    return 1;
  }
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 20))(v8) == 800 )
    return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
             *((_DWORD *)this + 2),
             a2,
             a3,
             a4);
  else
    return 0;
}


// ============================================================

// Address: 0x4f4c74
// Original: _ZN20CTaskComplexEnterCar18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexEnterCar::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexEnterCar::CreateFirstSubTask(CTaskComplexEnterCar *this, CPed *a2)
{
  CCarEnterExit *v4; // r0
  const CPed *v5; // r1
  int v6; // r0
  bool v7; // zf
  const CPed *v8; // r1
  int PedsGroup; // r6
  unsigned int v10; // r1
  CEntity **v11; // r8
  CEntity *v12; // r9
  int v13; // r6
  CEntity *v14; // r4
  CEntity **v15; // r1
  unsigned int v17; // r1
  __int16 *v18; // r1
  int v19; // r0
  CEntity *v20; // r4
  char v21; // r0
  char v22; // r0
  bool v23; // zf
  const CVehicle *v24; // r8
  CVector *v25; // r5
  __int64 v26; // d16
  int *v27; // [sp+0h] [bp-40h]
  _BYTE v28[44]; // [sp+14h] [bp-2Ch] BYREF

  v4 = (CCarEnterExit *)*((_DWORD *)this + 3);
  *((_DWORD *)this + 19) = CTimer::m_snTimeInMilliseconds;
  if ( !v4
    || *((_DWORD *)v4 + 293)
    || CCarEnterExit::IsVehicleHealthy(v4, 0) != 1
    || !CCarEnterExit::IsPedHealthy(a2, v5) )
  {
    return CTaskComplexEnterCar::CreateSubTask(this, 1302, a2);
  }
  v6 = *((_DWORD *)this + 3);
  v7 = *((unsigned __int8 *)this + 16) << 31 == 0;
  if ( !(*((unsigned __int8 *)this + 16) << 31) )
    v7 = *(_BYTE *)(v6 + 1164) == 0;
  if ( v7 )
    return CTaskComplexEnterCar::CreateSubTask(this, 1302, a2);
  v8 = *(const CPed **)(v6 + 1440);
  if ( v8 == (const CPed *)byte_6 )
  {
    if ( *(unsigned __int8 *)(v6 + 1485) << 31 )
      return CTaskComplexEnterCar::CreateSubTask(this, 1302, a2);
  }
  PedsGroup = CPedGroups::GetPedsGroup(a2, v8);
  v10 = *((_BYTE *)this + 16) & 3;
  if ( v10 == 1
    && PedsGroup
    && (*((_BYTE *)this + 16) & 4) == 0
    && CPedGroupMembership::IsLeader((CPedGroupMembership *)(PedsGroup + 8), a2) == 1 )
  {
    v11 = (CEntity **)CEvent::operator new((CEvent *)&dword_14, v10);
    v12 = (CEntity *)*((_DWORD *)this + 3);
    CEventEditableResponse::CEventEditableResponse((CEventEditableResponse *)v11);
    *v11 = (CEntity *)&off_666E58;
    v11[4] = v12;
    if ( v12 )
      CEntity::RegisterReference(v12, v11 + 4);
    CEventGroupEvent::CEventGroupEvent((CEventGroupEvent *)v28, a2, (CEvent *)v11);
    CPedGroupIntelligence::AddEvent((CPedGroupIntelligence *)(PedsGroup + 48), (CEvent *)v28);
    CEventGroupEvent::~CEventGroupEvent((CEventGroupEvent *)v28);
  }
  if ( *((unsigned __int8 *)a2 + 1157) << 31 )
  {
    v17 = *((_DWORD *)a2 + 356);
    if ( v17 == *((_DWORD *)this + 3) )
    {
      v13 = CTask::operator new((CTask *)&dword_70, v17);
      v20 = (CEntity *)*((_DWORD *)this + 3);
      CTaskSimple::CTaskSimple((CTaskSimple *)v13);
      *(_QWORD *)(v13 + 12) = 0LL;
      *(_QWORD *)(v13 + 20) = 0LL;
      *(_WORD *)(v13 + 28) = 0;
      *(_DWORD *)(v13 + 86) = 0;
      *(_DWORD *)(v13 + 82) = 0;
      *(_DWORD *)(v13 + 76) = 0;
      *(_DWORD *)(v13 + 80) = 0;
      v21 = *(_BYTE *)(v13 + 92);
      *(_DWORD *)v13 = &off_66AD18;
      v22 = v21 & 0xC3 | 8;
      *(_BYTE *)(v13 + 92) = v22;
      *(_DWORD *)(v13 + 8) = v20;
      if ( v20 )
      {
        CEntity::RegisterReference(v20, (CEntity **)(v13 + 8));
        v22 = *(_BYTE *)(v13 + 92);
      }
      *(_DWORD *)(v13 + 32) = -1;
      *(_BYTE *)(v13 + 92) = v22 & 0xFC;
      *(_DWORD *)(v13 + 60) = 0;
      *(_DWORD *)(v13 + 64) = 0;
      *(_DWORD *)(v13 + 68) = 0;
      *(_DWORD *)(v13 + 96) = -1;
      *(_WORD *)(v13 + 108) = 0;
      *(_DWORD *)(v13 + 100) = 0;
      *(_DWORD *)(v13 + 104) = 0;
      *(_DWORD *)v13 = &off_66572C;
      return v13;
    }
    v13 = CTask::operator new((CTask *)&dword_34, v17);
    v14 = (CEntity *)*((_DWORD *)a2 + 356);
    CTaskComplex::CTaskComplex((CTaskComplex *)v13);
    *(_DWORD *)(v13 + 16) = 0;
    *(_DWORD *)(v13 + 20) = 0;
    *(_WORD *)(v13 + 24) = 1;
    *(_BYTE *)(v13 + 26) = 0;
    *(_DWORD *)(v13 + 28) = 0;
    *(_BYTE *)(v13 + 32) = 0;
    *(_BYTE *)(v13 + 33) = 0;
    *(_DWORD *)(v13 + 36) = 15;
    *(_DWORD *)(v13 + 40) = 1082130432;
    *(_DWORD *)(v13 + 44) = 1065353216;
    *(_BYTE *)(v13 + 48) = 0;
    *(_DWORD *)v13 = &off_66ABEC;
    *(_DWORD *)(v13 + 12) = v14;
    v15 = (CEntity **)(v13 + 12);
    if ( v14 )
LABEL_24:
      CEntity::RegisterReference(v14, v15);
  }
  else
  {
    if ( *(_DWORD *)(*((_DWORD *)this + 3) + 1440) == 5 )
    {
      v13 = CTask::operator new((CTask *)&word_10, v10);
      v14 = (CEntity *)*((_DWORD *)this + 3);
      CTaskComplex::CTaskComplex((CTaskComplex *)v13);
      *(_DWORD *)v13 = &off_66AB74;
      v15 = (CEntity **)(v13 + 12);
      *(_DWORD *)(v13 + 12) = v14;
      if ( !v14 )
        return v13;
      goto LABEL_24;
    }
    v13 = CTask::operator new((CTask *)&dword_50, v10);
    CTaskComplexGoToCarDoorAndStandStill::CTaskComplexGoToCarDoorAndStandStill(
      (CTaskComplexGoToCarDoorAndStandStill *)v13,
      *((CVehicle **)this + 3),
      *((_DWORD *)this + 9),
      *((_BYTE *)this + 16) & 1,
      *((_DWORD *)this + 7),
      0.5,
      4.0,
      50.0,
      30000);
    if ( v13 )
    {
      if ( !(*((unsigned __int8 *)a2 + 69) << 31) || *((unsigned __int8 *)a2 + 1156) << 31 )
        return v13;
      v18 = (__int16 *)*((_DWORD *)this + 3);
      v19 = v18[19];
      if ( v19 >= 460 )
      {
        v23 = v19 == 539;
        if ( v19 != 539 )
          v23 = v19 == 460;
        if ( !v23 )
          return v13;
      }
      else if ( v19 != 417 && v19 != 447 )
      {
        return v13;
      }
      v24 = (CTaskComplexEnterCar *)((char *)this + 44);
      v25 = (CTaskComplexEnterCar *)((char *)this + 20);
      if ( CCarEnterExit::GetNearestCarDoor(a2, (const CPed *)v18, v24, v25, v27) == 1 )
      {
        *(_DWORD *)(v13 + 52) = *(_DWORD *)v25;
        v26 = *(_QWORD *)v24;
        *(_DWORD *)(v13 + 64) = *((_DWORD *)v24 + 2);
        *(_BYTE *)(v13 + 72) = 1;
        *(_QWORD *)(v13 + 56) = v26;
      }
    }
    else
    {
      return 0;
    }
  }
  return v13;
}


// ============================================================

// Address: 0x4f4f74
// Original: _ZN20CTaskComplexEnterCar13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexEnterCar::CreateSubTask(int,CPed *)
int __fastcall CTaskComplexEnterCar::CreateSubTask(CTaskComplexEnterCar *this, int a2, CPed *a3, int a4)
{
  int v6; // r4
  CEntity *v7; // r5
  CEntity **v8; // r1
  int v9; // r3
  CPed *v10; // r1
  int v11; // r0
  CVehicle *v12; // r0
  unsigned __int8 v13; // r1
  int v14; // r0
  int v15; // r1
  int v16; // r0
  int DoorStatus; // r0
  int *v18; // r0
  int v19; // r1
  int v20; // r2
  CPed *v21; // r1
  CVehicle *v22; // r2
  const CPed *v23; // r1
  CVehicle *v24; // r0
  CEventGroup *EventGlobalGroup; // r0
  int PedsGroup; // r0
  int v27; // r10
  unsigned int v28; // r1
  CEvent *v29; // r8
  int IsPlayer; // r0
  bool v31; // zf
  int v32; // r0
  CEntity *v33; // r5
  char v34; // r0
  char v35; // r0
  char *v36; // r0
  const char *v37; // r0
  int v38; // r0
  double v39; // d16
  bool v40; // zf
  float v41; // s0
  unsigned int v43; // [sp+8h] [bp-40h]
  double v44; // [sp+18h] [bp-30h] BYREF
  float v45; // [sp+20h] [bp-28h]

  v6 = 0;
  if ( a2 < 704 )
  {
    switch ( a2 )
    {
      case 200:
        v6 = CTask::operator new((CTask *)byte_8, 0xC8u);
        CTaskSimple::CTaskSimple((CTaskSimple *)v6);
        v36 = (char *)&`vtable for'CTaskSimpleNone;
LABEL_72:
        *(_DWORD *)v6 = v36 + 8;
        break;
      case 203:
        v6 = CTask::operator new((CTask *)&dword_20, 0xCBu);
        CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v6, 0, 0, 0, 8.0);
        break;
      case 208:
        v6 = CTask::operator new((CTask *)&off_18, 0xD0u);
        CTaskComplexFallAndGetUp::CTaskComplexFallAndGetUp();
        if ( (CPed *)FindPlayerPed(-1) == a3 )
          CPlayerInfo::SetLastTargetVehicle(
            (CEntity **)&CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus],
            *((CVehicle **)this + 3));
        if ( a3 && !(*((unsigned __int8 *)a3 + 1157) << 31) )
          *((_DWORD *)a3 + 7) |= 1u;
        v10 = (CPed *)*((_DWORD *)this + 3);
        if ( v10 )
        {
          CTaskSimpleCarSetPedOut::PositionPedOutOfCollision(a3, v10, *((CVehicle **)this + 5), v9);
          v11 = *((_DWORD *)this + 3);
          if ( v11 )
          {
            *(_BYTE *)(v11 + 1161) -= *((_BYTE *)this + 40);
            v12 = (CVehicle *)*((_DWORD *)this + 3);
            v13 = *((_BYTE *)this + 68);
            *((_BYTE *)this + 40) = 0;
            CVehicle::ClearGettingInFlags(v12, v13);
            v14 = *((_DWORD *)this + 3);
            v15 = *((_DWORD *)this + 5);
            *((_BYTE *)this + 68) = 0;
            if ( !(*(int (__fastcall **)(int, int))(*(_DWORD *)v14 + 156))(v14, v15) )
            {
              v16 = *((_DWORD *)this + 3);
              if ( !*(_DWORD *)(v16 + 1440)
                && (!CDamageManager::GetDoorStatus((CDamageManager *)(v16 + 1460), *((_DWORD *)this + 5))
                 || CDamageManager::GetDoorStatus(
                      (CDamageManager *)(*((_DWORD *)this + 3) + 1460),
                      *((_DWORD *)this + 5)) == 2) )
              {
                DoorStatus = CDamageManager::GetDoorStatus(
                               (CDamageManager *)(*((_DWORD *)this + 3) + 1460),
                               *((_DWORD *)this + 5));
                CDamageManager::SetDoorStatus(
                  (CDamageManager *)(*((_DWORD *)this + 3) + 1460),
                  *((_DWORD *)this + 5),
                  DoorStatus + 1);
              }
            }
          }
        }
        break;
    }
  }
  else
  {
    switch ( a2 )
    {
      case 704:
        v6 = CTask::operator new((CTask *)&dword_34, a2);
        v7 = (CEntity *)*((_DWORD *)a3 + 356);
        CTaskComplex::CTaskComplex((CTaskComplex *)v6);
        *(_DWORD *)(v6 + 16) = 0;
        *(_DWORD *)(v6 + 20) = 0;
        *(_WORD *)(v6 + 24) = 1;
        *(_BYTE *)(v6 + 26) = 0;
        *(_DWORD *)(v6 + 28) = 0;
        *(_BYTE *)(v6 + 32) = 0;
        *(_BYTE *)(v6 + 33) = 0;
        *(_DWORD *)(v6 + 36) = 15;
        *(_DWORD *)(v6 + 40) = 1082130432;
        *(_DWORD *)(v6 + 44) = 1065353216;
        *(_BYTE *)(v6 + 48) = 0;
        *(_DWORD *)v6 = &off_66ABEC;
        *(_DWORD *)(v6 + 12) = v7;
        v8 = (CEntity **)(v6 + 12);
        if ( !v7 )
          return v6;
        goto LABEL_46;
      case 705:
      case 706:
      case 707:
      case 708:
      case 709:
      case 710:
      case 711:
      case 712:
      case 713:
      case 714:
      case 716:
      case 717:
      case 718:
      case 720:
      case 721:
      case 722:
      case 723:
      case 724:
      case 725:
      case 726:
      case 727:
      case 728:
      case 729:
      case 730:
      case 731:
      case 732:
      case 733:
      case 734:
      case 735:
      case 736:
      case 737:
      case 738:
      case 739:
      case 740:
      case 741:
      case 742:
      case 743:
      case 744:
      case 745:
      case 746:
      case 747:
      case 748:
      case 749:
      case 750:
      case 751:
      case 752:
      case 753:
      case 754:
      case 755:
      case 756:
      case 757:
      case 758:
      case 759:
      case 760:
      case 761:
      case 762:
      case 763:
      case 764:
      case 765:
      case 766:
      case 767:
      case 768:
      case 769:
      case 770:
      case 771:
      case 772:
      case 773:
      case 774:
      case 775:
      case 776:
      case 777:
      case 778:
      case 779:
      case 780:
      case 781:
      case 782:
      case 783:
      case 784:
      case 785:
      case 786:
      case 787:
      case 788:
      case 789:
      case 790:
      case 791:
      case 792:
      case 793:
      case 794:
      case 795:
      case 796:
      case 797:
      case 798:
      case 799:
      case 809:
      case 813:
      case 814:
      case 815:
      case 817:
      case 818:
      case 819:
      case 821:
      case 822:
      case 823:
      case 824:
      case 825:
      case 826:
      case 827:
      case 828:
        return v6;
      case 715:
        v6 = CTask::operator new((CTask *)&word_10, a2);
        v7 = (CEntity *)*((_DWORD *)this + 3);
        CTaskComplex::CTaskComplex((CTaskComplex *)v6);
        *(_DWORD *)v6 = &off_66AB74;
        v8 = (CEntity **)(v6 + 12);
        *(_DWORD *)(v6 + 12) = v7;
        if ( v7 )
LABEL_46:
          CEntity::RegisterReference(v7, v8);
        break;
      case 719:
        v6 = CTask::operator new((CTask *)&dword_70, a2);
        v33 = (CEntity *)*((_DWORD *)this + 3);
        CTaskSimple::CTaskSimple((CTaskSimple *)v6);
        *(_QWORD *)(v6 + 12) = 0LL;
        *(_QWORD *)(v6 + 20) = 0LL;
        *(_WORD *)(v6 + 28) = 0;
        *(_DWORD *)(v6 + 86) = 0;
        *(_DWORD *)(v6 + 82) = 0;
        *(_DWORD *)(v6 + 76) = 0;
        *(_DWORD *)(v6 + 80) = 0;
        v34 = *(_BYTE *)(v6 + 92);
        *(_DWORD *)v6 = &off_66AD18;
        v35 = v34 & 0xC3 | 8;
        *(_BYTE *)(v6 + 92) = v35;
        *(_DWORD *)(v6 + 8) = v33;
        if ( v33 )
        {
          CEntity::RegisterReference(v33, (CEntity **)(v6 + 8));
          v35 = *(_BYTE *)(v6 + 92);
        }
        *(_DWORD *)(v6 + 32) = -1;
        *(_BYTE *)(v6 + 92) = v35 & 0xFC;
        *(_DWORD *)(v6 + 60) = 0;
        *(_DWORD *)(v6 + 64) = 0;
        *(_DWORD *)(v6 + 68) = 0;
        *(_DWORD *)(v6 + 96) = -1;
        *(_WORD *)(v6 + 108) = 0;
        v36 = (char *)&`vtable for'CTaskSimpleCarDriveTimed;
        *(_DWORD *)(v6 + 100) = 0;
        *(_DWORD *)(v6 + 104) = 0;
        goto LABEL_72;
      case 800:
        v6 = CTask::operator new((CTask *)&dword_50, a2);
        CTaskComplexGoToCarDoorAndStandStill::CTaskComplexGoToCarDoorAndStandStill(
          (CTaskComplexGoToCarDoorAndStandStill *)v6,
          *((CVehicle **)this + 3),
          *((_DWORD *)this + 9),
          *((_BYTE *)this + 16) & 1,
          *((_DWORD *)this + 7),
          0.5,
          4.0,
          50.0,
          30000);
        break;
      case 801:
        v6 = CTask::operator new((CTask *)&word_28, a2);
        CTaskSimpleCarAlign::CTaskSimpleCarAlign(
          (CTaskSimpleCarAlign *)v6,
          *((CVehicle **)this + 3),
          (CTaskComplexEnterCar *)((char *)this + 44),
          *((_DWORD *)this + 5),
          *((CTaskUtilityLineUpPedWithCar **)this + 14));
        break;
      case 802:
        v6 = CTask::operator new((CTask *)&dword_24, a2);
        CTaskSimpleCarOpenDoorFromOutside::CTaskSimpleCarOpenDoorFromOutside(
          (CTaskSimpleCarOpenDoorFromOutside *)v6,
          *((CVehicle **)this + 3),
          *((_DWORD *)this + 5),
          *((CTaskUtilityLineUpPedWithCar **)this + 14),
          (*((_BYTE *)this + 16) & 2) != 0);
        break;
      case 803:
        v6 = CTask::operator new((CTask *)&dword_1C, a2);
        CTaskSimpleCarOpenLockedDoorFromOutside::CTaskSimpleCarOpenLockedDoorFromOutside(
          (CTaskSimpleCarOpenLockedDoorFromOutside *)v6,
          *((CVehicle **)this + 3),
          *((_DWORD *)this + 5),
          *((CTaskUtilityLineUpPedWithCar **)this + 14));
        break;
      case 804:
        v6 = CTask::operator new((CTask *)&dword_1C, a2);
        CTaskSimplePickUpBike::CTaskSimplePickUpBike(
          (CTaskSimplePickUpBike *)v6,
          *((CVehicle **)this + 3),
          *((_DWORD *)this + 5),
          *((CTaskUtilityLineUpPedWithCar **)this + 14));
        break;
      case 805:
        v6 = CTask::operator new((CTask *)&dword_1C, a2);
        CTaskSimpleCarCloseDoorFromInside::CTaskSimpleCarCloseDoorFromInside(
          (CTaskSimpleCarCloseDoorFromInside *)v6,
          *((CVehicle **)this + 3),
          *((_DWORD *)this + 5),
          *((CTaskUtilityLineUpPedWithCar **)this + 14));
        break;
      case 806:
        v6 = CTask::operator new((CTask *)&dword_1C, a2);
        CTaskSimpleCarCloseDoorFromOutside::CTaskSimpleCarCloseDoorFromOutside(
          (CTaskSimpleCarCloseDoorFromOutside *)v6,
          *((CVehicle **)this + 3),
          *((_DWORD *)this + 5),
          *((CTaskUtilityLineUpPedWithCar **)this + 14));
        break;
      case 807:
        v6 = CTask::operator new((CTask *)&dword_24, a2);
        CTaskSimpleCarGetIn::CTaskSimpleCarGetIn(
          (CTaskSimpleCarGetIn *)v6,
          *((CVehicle **)this + 3),
          *((_DWORD *)this + 5),
          *((CTaskUtilityLineUpPedWithCar **)this + 14));
        break;
      case 808:
        v6 = CTask::operator new((CTask *)&dword_1C, a2);
        CTaskSimpleCarShuffle::CTaskSimpleCarShuffle(
          (CTaskSimpleCarShuffle *)v6,
          *((CVehicle **)this + 3),
          *((_DWORD *)this + 5),
          *((CTaskUtilityLineUpPedWithCar **)this + 14));
        break;
      case 810:
        v6 = CTask::operator new((CTask *)&dword_14, a2);
        CTaskSimpleCarWaitForDoorNotToBeInUse::CTaskSimpleCarWaitForDoorNotToBeInUse(
          (CTaskSimpleCarWaitForDoorNotToBeInUse *)v6,
          *((CVehicle **)this + 3),
          *((_DWORD *)this + 5),
          *((_DWORD *)this + 6));
        break;
      case 811:
        v6 = CTask::operator new((CTask *)&dword_20, a2);
        CTaskSimpleCarSetPedInAsPassenger::CTaskSimpleCarSetPedInAsPassenger(
          (CTaskSimpleCarSetPedInAsPassenger *)v6,
          *((CVehicle **)this + 3),
          *((_DWORD *)this + 5),
          *((CTaskUtilityLineUpPedWithCar **)this + 14));
        break;
      case 812:
        v6 = CTask::operator new((CTask *)&dword_1C, a2);
        CTaskSimpleCarSetPedInAsDriver::CTaskSimpleCarSetPedInAsDriver(
          (CTaskSimpleCarSetPedInAsDriver *)v6,
          *((CVehicle **)this + 3),
          *((CTaskUtilityLineUpPedWithCar **)this + 14));
        break;
      case 816:
        v6 = CTask::operator new((CTask *)&off_18, a2);
        CTaskSimpleCarSetPedOut::CTaskSimpleCarSetPedOut(
          (CTaskSimpleCarSetPedOut *)v6,
          *((CVehicle **)this + 3),
          *((_DWORD *)this + 5),
          1);
        break;
      case 820:
        if ( a3 && CPed::IsPlayer(a3) == 1 && !CPlayerPed::bHasDisplayedPlayerQuitEnterCarHelpText )
        {
          CPlayerPed::bHasDisplayedPlayerQuitEnterCarHelpText = 1;
          v37 = (const char *)CText::Get((CText *)TheText, (CKeyGen *)"JCK_HLP");
          CHud::SetHelpMessage((CHud *)"JCK_HLP", v37, 0, 0, 0, 0, v43);
        }
        v6 = CTask::operator new((CTask *)&dword_20, a2);
        CTaskSimpleCarSlowDragPedOut::CTaskSimpleCarSlowDragPedOut(
          (CTaskSimpleCarSlowDragPedOut *)v6,
          *((CVehicle **)this + 3),
          *((_DWORD *)this + 5),
          *((CTaskUtilityLineUpPedWithCar **)this + 14),
          (*((_BYTE *)this + 16) & 4) != 0);
        break;
      case 829:
        v38 = *(_DWORD *)(*((_DWORD *)this + 3) + 20);
        v39 = *(double *)v38;
        v45 = *(float *)(v38 + 8);
        v44 = v39;
        if ( (*((_DWORD *)this + 5) & 0xFFFFFFFE) == 0xA )
        {
          *(float *)&v44 = -*(float *)&v44;
          *((float *)&v44 + 1) = -*((float *)&v44 + 1);
          v45 = -v45;
        }
        v6 = CTask::operator new((CTask *)&dword_1C, a2);
        CTaskSimpleWaitUntilPedIsOutCar::CTaskSimpleWaitUntilPedIsOutCar(
          (CTaskSimpleWaitUntilPedIsOutCar *)v6,
          *((CPed **)this + 16),
          (const CVector *)&v44);
        break;
      default:
        if ( a2 == 1302 )
        {
          if ( !a3 )
            goto LABEL_79;
          if ( !(*((unsigned __int8 *)a3 + 1157) << 31) )
          {
            v18 = (int *)((char *)a3 + 28);
            v19 = *((_DWORD *)a3 + 7);
            if ( (v19 & 1) == 0 )
            {
              v20 = *((_DWORD *)a3 + 8);
              *v18 = v19 | 1;
              *((_DWORD *)a3 + 8) = v20;
              v21 = (CPed *)*((_DWORD *)this + 3);
              if ( v21 )
              {
                v22 = (CVehicle *)*((_DWORD *)this + 5);
                if ( v22 )
                  CTaskSimpleCarSetPedOut::PositionPedOutOfCollision(a3, v21, v22, a4);
              }
            }
          }
          if ( CPed::IsPlayer(a3) == 1 )
          {
            v24 = (CVehicle *)*((_DWORD *)this + 3);
            if ( v24 )
            {
              if ( CVehicle::IsLawEnforcementVehicle(v24) && (*((_BYTE *)this + 16) & 7) == 1 && *((_BYTE *)this + 68) )
              {
                CEventCopCarBeingStolen::CEventCopCarBeingStolen(
                  (CEventCopCarBeingStolen *)&v44,
                  a3,
                  *((CVehicle **)this + 3));
                EventGlobalGroup = (CEventGroup *)GetEventGlobalGroup();
                CEventGroup::Add(EventGlobalGroup, (CEvent *)&v44, 0);
                CEventCopCarBeingStolen::~CEventCopCarBeingStolen((CEventCopCarBeingStolen *)&v44);
              }
            }
          }
          if ( !(*((unsigned __int8 *)a3 + 1157) << 31) && (*((_BYTE *)this + 16) & 7) == 1 )
          {
            PedsGroup = CPedGroups::GetPedsGroup(a3, v23);
            v27 = PedsGroup;
            if ( PedsGroup )
            {
              if ( CPedGroupMembership::IsLeader((CPedGroupMembership *)(PedsGroup + 8), a3) == 1 )
              {
                v29 = (CEvent *)CEvent::operator new((CEvent *)&byte_9[3], v28);
                CEvent::CEvent(v29);
                *(_DWORD *)v29 = &off_666EF8;
                CEventGroupEvent::CEventGroupEvent((CEventGroupEvent *)&v44, a3, v29);
                CPedGroupIntelligence::AddEvent((CPedGroupIntelligence *)(v27 + 48), (CEvent *)&v44);
                CEventGroupEvent::~CEventGroupEvent((CEventGroupEvent *)&v44);
              }
            }
          }
          IsPlayer = CPed::IsPlayer(a3);
          v31 = IsPlayer == 1;
          if ( IsPlayer == 1 )
            v31 = *((unsigned __int8 *)a3 + 1157) << 31 == 0;
          if ( !v31 )
            goto LABEL_84;
          v32 = *((_DWORD *)this + 3);
          v40 = v32 == 0;
          if ( v32 )
            v40 = *(_DWORD *)(v32 + 1124) == 0;
          if ( v40 || (*((_BYTE *)this + 16) & 2) != 0 )
          {
LABEL_84:
            if ( CPed::IsPlayer(a3) )
              goto LABEL_79;
            if ( !(*((unsigned __int8 *)a3 + 1157) << 31) )
              goto LABEL_79;
            v32 = *((_DWORD *)this + 3);
            if ( !v32 )
              goto LABEL_79;
          }
          v41 = *((float *)this + 18);
          if ( v41 >= 0.0 )
          {
            v6 = 0;
            *(_BYTE *)(v32 + 980) = (unsigned int)v41;
          }
          else
          {
LABEL_79:
            v6 = 0;
          }
        }
        break;
    }
  }
  return v6;
}


// ============================================================

// Address: 0x4f5674
// Original: _ZN20CTaskComplexEnterCar17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexEnterCar::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexEnterCar::CreateNextSubTask(
        CTaskComplexEnterCar *this,
        CPedIntelligence **a2,
        int a3,
        const CPed *a4)
{
  int v6; // r0
  CEntity **SubTask; // r6
  CCarEnterExit *v9; // r0
  int v10; // r0
  const CVehicle *v11; // r1
  int v12; // r2
  int v13; // r2
  CTaskComplexEnterCar *v14; // r0
  int v15; // r1
  unsigned int v16; // r0
  bool v17; // zf
  char v18; // r8
  int *v19; // r9
  CEntity *v20; // r4
  int v21; // r2
  const CVehicle *v22; // r1
  char v23; // r3
  __int64 v24; // d16
  int v25; // r3
  CCarEnterExit *v26; // r0
  int v27; // r2
  int v28; // r2
  int v29; // r2
  unsigned int v30; // r1
  int v31; // r0
  float v32; // s0
  CCarEnterExit *v33; // r0
  const CPed *v34; // r1
  int v35; // r2
  int v36; // r0
  int v37; // r6
  int HasDoorToClose; // r0
  int v39; // r1
  CPed *v40; // r1
  int v41; // r2
  int v42; // r2
  const CPed *v43; // r3
  char v44; // r0
  CPedIntelligence *v45; // r0
  int v46; // r0
  CPedIntelligence *v47; // r0
  float *v48; // r1
  float v49; // s8
  float v50; // s10
  CTaskUtilityLineUpPedWithCar *v51; // r0
  int v52; // r0
  int v53; // r0
  unsigned int v54; // r1
  bool v55; // zf
  unsigned int v56; // r1
  int v57; // r0
  double v58; // d16
  CPed *v59; // r1
  int v60; // r2
  int v61; // r2
  const CPed *v62; // r3
  char v63; // r0
  CEntity *v64; // r0
  const CPed *v65; // r2
  CPed **v66; // r8
  CPed *v67; // r6
  int v68; // r0
  int v69; // r2
  const CPed *v70; // r1
  int PedsGroup; // r0
  int v72; // r4
  unsigned int v73; // r1
  CEvent *v74; // r5
  const CVehicle *v75; // r1
  int v76; // r9
  CPedIntelligence *v77; // r8
  unsigned int v78; // r1
  int v79; // r0
  const CVehicle **v80; // r10
  int v81; // r6
  const CPed *v82; // r2
  int v83; // r11
  CPedIntelligence *v84; // r0
  int TaskDuck; // r0
  CPedIntelligence *v86; // r0
  float *v87; // r1
  float v88; // s8
  float v89; // s10
  CTaskUtilityLineUpPedWithCar *v90; // r0
  int v91; // r0
  int v92; // r0
  bool v93; // zf
  CCarEnterExit *v94; // r8
  unsigned int v95; // r1
  const CVehicle *v96; // r1
  int IsAlive; // r0
  unsigned int v98; // r1
  CPedIntelligence *v99; // r8
  int v100; // r0
  const CVehicle **v101; // r5
  int v102; // r6
  const CPed *v103; // r2
  int v104; // r9
  CPedIntelligence *v105; // r9
  unsigned int v106; // r1
  CTaskComplexCarSlowBeDraggedOutAndStandUp *v107; // r10
  const CPed *v108; // r1
  CPedGroups *v109; // r0
  int v110; // r0
  int DoorStatus; // r0
  int v112; // r0
  int v113; // r0
  const CVehicle **v114; // r5
  const CPed *v115; // r2
  int v116; // r9
  int v117; // r5
  CTaskSimpleCarShuffle *v118; // r0
  int v119; // r0
  int v120; // r4
  unsigned int v121; // r1
  CEventEditableResponse *v122; // r5
  float v123; // [sp+14h] [bp-4Ch] BYREF
  float v124; // [sp+18h] [bp-48h]
  float v125; // [sp+1Ch] [bp-44h]
  double v126; // [sp+28h] [bp-38h] BYREF
  float v127; // [sp+30h] [bp-30h]

  if ( *((_BYTE *)this + 60) )
  {
    v6 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
    SubTask = 0;
    switch ( v6 )
    {
      case 704:
      case 715:
      case 719:
      case 800:
      case 801:
      case 802:
      case 803:
      case 804:
      case 805:
      case 806:
      case 807:
      case 808:
      case 810:
      case 816:
      case 817:
      case 820:
      case 829:
        goto LABEL_17;
      case 705:
      case 706:
      case 707:
      case 708:
      case 709:
      case 710:
      case 711:
      case 712:
      case 713:
      case 714:
      case 716:
      case 717:
      case 718:
      case 720:
      case 721:
      case 722:
      case 723:
      case 724:
      case 725:
      case 726:
      case 727:
      case 728:
      case 729:
      case 730:
      case 731:
      case 732:
      case 733:
      case 734:
      case 735:
      case 736:
      case 737:
      case 738:
      case 739:
      case 740:
      case 741:
      case 742:
      case 743:
      case 744:
      case 745:
      case 746:
      case 747:
      case 748:
      case 749:
      case 750:
      case 751:
      case 752:
      case 753:
      case 754:
      case 755:
      case 756:
      case 757:
      case 758:
      case 759:
      case 760:
      case 761:
      case 762:
      case 763:
      case 764:
      case 765:
      case 766:
      case 767:
      case 768:
      case 769:
      case 770:
      case 771:
      case 772:
      case 773:
      case 774:
      case 775:
      case 776:
      case 777:
      case 778:
      case 779:
      case 780:
      case 781:
      case 782:
      case 783:
      case 784:
      case 785:
      case 786:
      case 787:
      case 788:
      case 789:
      case 790:
      case 791:
      case 792:
      case 793:
      case 794:
      case 795:
      case 796:
      case 797:
      case 798:
      case 799:
      case 809:
      case 813:
      case 814:
      case 815:
      case 818:
      case 819:
      case 821:
      case 822:
      case 823:
      case 824:
      case 825:
      case 826:
      case 827:
      case 828:
        return (int)SubTask;
      case 811:
      case 812:
        SubTask = (CEntity **)CTask::operator new((CTask *)&off_18, v6 - 704);
        CTaskSimpleCarSetPedOut::CTaskSimpleCarSetPedOut(
          (CTaskSimpleCarSetPedOut *)SubTask,
          *((CVehicle **)this + 3),
          *((_DWORD *)this + 5),
          1);
        return (int)SubTask;
      default:
        v16 = v6 - 200;
        if ( v16 <= 8 && ((1 << v16) & 0x109) != 0 )
          goto LABEL_17;
        return (int)SubTask;
    }
  }
  v9 = (CCarEnterExit *)*((_DWORD *)this + 3);
  if ( !v9 || !CCarEnterExit::IsVehicleHealthy(v9, (const CVehicle *)a2) )
    goto LABEL_17;
  v10 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  SubTask = 0;
  if ( v10 >= 704 )
  {
    switch ( v10 )
    {
      case 704:
        if ( *((unsigned __int8 *)a2 + 1157) << 31 )
          goto LABEL_17;
        if ( *((unsigned __int8 *)this + 16) << 31 && *(_DWORD *)(*((_DWORD *)this + 3) + 1440) == 5 )
        {
          SubTask = (CEntity **)CTask::operator new((CTask *)&word_10, (unsigned int)v11);
          v20 = (CEntity *)*((_DWORD *)this + 3);
          CTaskComplex::CTaskComplex((CTaskComplex *)SubTask);
          *SubTask = (CEntity *)&off_66AB74;
          SubTask[3] = v20;
          if ( v20 )
            CEntity::RegisterReference(v20, SubTask + 3);
        }
        else
        {
          SubTask = (CEntity **)CTask::operator new((CTask *)&dword_50, (unsigned int)v11);
          CTaskComplexGoToCarDoorAndStandStill::CTaskComplexGoToCarDoorAndStandStill(
            (CTaskComplexGoToCarDoorAndStandStill *)SubTask,
            *((CVehicle **)this + 3),
            *((_DWORD *)this + 9),
            *((_BYTE *)this + 16) & 1,
            *((_DWORD *)this + 7),
            0.5,
            4.0,
            50.0,
            30000);
        }
        return (int)SubTask;
      case 715:
      case 719:
      case 806:
      case 811:
      case 812:
      case 829:
        goto LABEL_17;
      case 800:
        v21 = *((_DWORD *)this + 2);
        if ( !*(_BYTE *)(v21 + 73) )
          goto LABEL_17;
        v22 = *(const CVehicle **)(v21 + 52);
        v23 = *((_BYTE *)this + 16);
        *((_DWORD *)this + 5) = v22;
        v24 = *(_QWORD *)(v21 + 56);
        v25 = -(v23 & 1);
        v26 = (CCarEnterExit *)*((_DWORD *)this + 3);
        *((_DWORD *)this + 13) = *(_DWORD *)(v21 + 64);
        v27 = 0;
        if ( v22 == (const CVehicle *)byte_8 )
          v27 = 10;
        v28 = v27 & v25;
        *((_DWORD *)this + 6) = v28;
        *(_QWORD *)((char *)this + 44) = v24;
        if ( CCarEnterExit::IsCarDoorInUse(v26, v22, v28, v25) == 1 )
        {
          if ( CPed::IsPlayer((CPed *)a2) == 1 )
          {
            *((_DWORD *)a2[273] + 5) = 0;
            CPed::SetMoveState(a2, 1);
            CPlayerPed::SetRealMoveAnim((CPlayerPed *)a2);
          }
          else
          {
            CPed::SetMoveState(a2, 1);
            (*((void (__fastcall **)(CPedIntelligence **))*a2 + 24))(a2);
          }
          SubTask = (CEntity **)CTask::operator new((CTask *)&dword_14, v30);
          CTaskSimpleCarWaitForDoorNotToBeInUse::CTaskSimpleCarWaitForDoorNotToBeInUse(
            (CTaskSimpleCarWaitForDoorNotToBeInUse *)SubTask,
            *((CVehicle **)this + 3),
            *((_DWORD *)this + 5),
            *((_DWORD *)this + 6));
          return (int)SubTask;
        }
        if ( !CCarEnterExit::IsCarDoorReady(*((CCarEnterExit **)this + 3), *((const CVehicle **)this + 5), v29)
          && CCarEnterExit::CarHasPartiallyOpenDoor(*((CCarEnterExit **)this + 3), *((const CVehicle **)this + 5), v60) != 1 )
        {
          goto LABEL_17;
        }
        CTaskComplexEnterCar::SetVehicleFlags(this, v59);
        if ( *(_BYTE *)(*((_DWORD *)this + 3) + 980) )
          *((float *)this + 18) = (float)*(unsigned __int8 *)(*((_DWORD *)this + 3) + 980);
        if ( CPed::IsPlayer((CPed *)a2) == 1
          && CCarEnterExit::CarHasDoorToOpen(*((CCarEnterExit **)this + 3), *((const CVehicle **)this + 5), v61) == 1 )
        {
          if ( CCarEnterExit::CarHasOpenableDoor(
                 *((CCarEnterExit **)this + 3),
                 *((const CVehicle **)this + 5),
                 (CPed *)a2,
                 v62) )
          {
            v63 = 0;
          }
          else
          {
            v63 = *(_BYTE *)(*((_DWORD *)this + 3) + 980);
          }
        }
        else
        {
          v63 = 0;
        }
        *(_BYTE *)(*((_DWORD *)this + 3) + 980) = v63;
        v84 = a2[272];
        a2[7] = (CPedIntelligence *)((unsigned int)a2[7] & 0xFFFFFFFE);
        if ( CPedIntelligence::GetTaskDuck(v84, 1) )
        {
          TaskDuck = CPedIntelligence::GetTaskDuck(a2[272], 1);
          (*(void (__fastcall **)(int, CPedIntelligence **, int, _DWORD))(*(_DWORD *)TaskDuck + 28))(TaskDuck, a2, 1, 0);
        }
        CCarEnterExit::GetPositionToOpenCarDoor(
          (CCarEnterExit *)&v123,
          *((const CVehicle **)this + 3),
          *((_DWORD *)this + 5));
        v86 = a2[5];
        v87 = (float *)((char *)v86 + 48);
        if ( !v86 )
          v87 = (float *)(a2 + 1);
        v88 = v87[1];
        v89 = v87[2];
        *(float *)&v126 = v123 - *v87;
        *((float *)&v126 + 1) = v124 - v88;
        v127 = v125 - v89;
        v90 = (CTaskUtilityLineUpPedWithCar *)operator new(0x1Cu);
        CTaskUtilityLineUpPedWithCar::CTaskUtilityLineUpPedWithCar(
          v90,
          (const CVector *)&v126,
          600,
          0,
          *((_DWORD *)this + 5));
        *((_DWORD *)this + 14) = v91;
        v92 = *((_DWORD *)this + 3);
        v54 = *(_DWORD *)(v92 + 1440);
        v93 = v54 == 9;
        if ( v54 != 9 )
          v93 = *(_DWORD *)(v92 + 1444) == 2;
        if ( !v93 )
          goto LABEL_82;
        return (*(int (__fastcall **)(CTaskComplexEnterCar *, CPedIntelligence **))(*(_DWORD *)this + 52))(this, a2);
      case 801:
        return (*(int (__fastcall **)(CTaskComplexEnterCar *, CPedIntelligence **))(*(_DWORD *)this + 52))(this, a2);
      case 802:
      case 804:
        if ( !CPed::IsPlayer((CPed *)a2)
          && sqrtf(
               (float)(*(float *)(*((_DWORD *)this + 3) + 72) * *(float *)(*((_DWORD *)this + 3) + 72))
             + (float)(*(float *)(*((_DWORD *)this + 3) + 76) * *(float *)(*((_DWORD *)this + 3) + 76))) > 0.1
          || CPed::IsPlayer((CPed *)a2) == 1
          && sqrtf(
               (float)(*(float *)(*((_DWORD *)this + 3) + 72) * *(float *)(*((_DWORD *)this + 3) + 72))
             + (float)(*(float *)(*((_DWORD *)this + 3) + 76) * *(float *)(*((_DWORD *)this + 3) + 76))) > 0.2 )
        {
          a2[7] = (CPedIntelligence *)((unsigned int)a2[7] | 1);
          if ( CPed::IsPlayer((CPed *)a2) == 1 )
            goto LABEL_17;
          v14 = this;
          v15 = 208;
          return CTaskComplexEnterCar::CreateSubTask(v14, v15, (CPed *)a2, (int)a4);
        }
        if ( (*((_BYTE *)this + 16) & 2) != 0 )
        {
          *((_BYTE *)this + 16) &= ~2u;
          goto LABEL_17;
        }
        if ( (*((_BYTE *)this + 16) & 4) != 0 )
        {
          v19 = (int *)((char *)this + 20);
        }
        else
        {
          v19 = (int *)((char *)this + 20);
          if ( CCarEnterExit::IsCarSlowJackRequired(
                 *((CCarEnterExit **)this + 3),
                 *((const CVehicle **)this + 5),
                 (int)a2,
                 a4) != 1 )
            goto LABEL_72;
        }
        v64 = (CEntity *)CCarEnterExit::ComputeSlowJackedPed(
                           *((CCarEnterExit **)this + 3),
                           *((const CVehicle **)this + 5),
                           v13);
        v66 = (CPed **)((char *)this + 64);
        *((_DWORD *)this + 16) = v64;
        if ( v64 )
          CEntity::RegisterReference(v64, (CEntity **)this + 16);
        v67 = (CPed *)*((_DWORD *)this + 16);
        if ( (*((_BYTE *)this + 16) & 4) != 0 )
          goto LABEL_106;
        if ( !v67 )
          goto LABEL_72;
        v68 = CPedGroups::AreInSameGroup(*((CPedGroups **)this + 16), (const CPed *)a2, v65);
        v67 = *v66;
        if ( !v68 && (*((_BYTE *)v67 + 1159) & 0x20) == 0 )
        {
LABEL_106:
          if ( v67 )
          {
            if ( CPed::IsPlayer(v67) == 1 && CGameLogic::SkipState == 2 )
            {
              SubTask = (CEntity **)CTaskComplexEnterCar::CreateSubTask(this, 1302, (CPed *)a2);
              PedsGroup = CPedGroups::GetPedsGroup(*((CPedGroups **)this + 16), v70);
              v72 = PedsGroup;
              if ( PedsGroup && CPedGroupMembership::IsLeader((CPedGroupMembership *)(PedsGroup + 8), *v66) == 1 )
              {
                v74 = (CEvent *)CEvent::operator new((CEvent *)&byte_9[3], v73);
                CEvent::CEvent(v74);
                *(_DWORD *)v74 = &off_666EF8;
                CEventGroupEvent::CEventGroupEvent((CEventGroupEvent *)&v126, *v66, v74);
                CPedGroupIntelligence::AddEvent((CPedGroupIntelligence *)(v72 + 48), (CEvent *)&v126);
                CEventGroupEvent::~CEventGroupEvent((CEventGroupEvent *)&v126);
              }
              return (int)SubTask;
            }
            if ( *v66 )
            {
              SubTask = (CEntity **)CTaskComplexEnterCar::CreateSubTask(this, 820, (CPed *)a2);
              v105 = *(CPedIntelligence **)(*((_DWORD *)this + 16) + 1088);
              v107 = (CTaskComplexCarSlowBeDraggedOutAndStandUp *)CTask::operator new((CTask *)&dword_14, v106);
              CTaskComplexCarSlowBeDraggedOutAndStandUp::CTaskComplexCarSlowBeDraggedOutAndStandUp(
                v107,
                *((CVehicle **)this + 3),
                *((_DWORD *)this + 5));
              CPedIntelligence::AddTaskPrimaryMaybeInGroup(v105, v107, 1);
              CEventDraggedOutCar::CEventDraggedOutCar(
                (CEventDraggedOutCar *)&v126,
                *((const CVehicle **)this + 3),
                (const CPed *)a2,
                *(_DWORD *)(*((_DWORD *)this + 3) + 1124) == *((_DWORD *)this + 16));
              CEventGroup::Add((CEventGroup *)(*(_DWORD *)(*((_DWORD *)this + 16) + 1088) + 104), (CEvent *)&v126, 1);
              v108 = (const CPed *)*((_DWORD *)this + 16);
              v109 = *(CPedGroups **)(*((_DWORD *)this + 3) + 1124);
              if ( v109 == v108 )
              {
                v119 = CPedGroups::GetPedsGroup(v109, v108);
                v120 = v119;
                if ( v119 )
                {
                  if ( CPedGroupMembership::IsLeader((CPedGroupMembership *)(v119 + 8), *v66) == 1 )
                  {
                    v122 = (CEventEditableResponse *)CEvent::operator new((CEvent *)&word_10, v121);
                    CEventEditableResponse::CEventEditableResponse(v122);
                    *(_DWORD *)v122 = &off_666EA8;
                    CEventGroupEvent::CEventGroupEvent((CEventGroupEvent *)&v123, *v66, v122);
                    CPedGroupIntelligence::AddEvent((CPedGroupIntelligence *)(v120 + 48), (CEvent *)&v123);
                    CEventGroupEvent::~CEventGroupEvent((CEventGroupEvent *)&v123);
                  }
                }
              }
              CEventDraggedOutCar::~CEventDraggedOutCar((CEventDraggedOutCar *)&v126);
              return (int)SubTask;
            }
          }
          if ( (*((_BYTE *)this + 16) & 4) != 0 )
          {
            v110 = *((_DWORD *)this + 3);
            if ( !*(_DWORD *)(v110 + 1440)
              && (!CDamageManager::GetDoorStatus((CDamageManager *)(v110 + 1460), *v19)
               || CDamageManager::GetDoorStatus((CDamageManager *)(*((_DWORD *)this + 3) + 1460), *((_DWORD *)this + 5)) == 2) )
            {
              DoorStatus = CDamageManager::GetDoorStatus(
                             (CDamageManager *)(*((_DWORD *)this + 3) + 1460),
                             *((_DWORD *)this + 5));
              CDamageManager::SetDoorStatus(
                (CDamageManager *)(*((_DWORD *)this + 3) + 1460),
                *((_DWORD *)this + 5),
                DoorStatus + 1);
            }
            goto LABEL_17;
          }
LABEL_72:
          SubTask = (CEntity **)CTask::operator new((CTask *)&dword_24, (unsigned int)v11);
          CTaskSimpleCarGetIn::CTaskSimpleCarGetIn(
            (CTaskSimpleCarGetIn *)SubTask,
            *((CVehicle **)this + 3),
            *((_DWORD *)this + 5),
            *((CTaskUtilityLineUpPedWithCar **)this + 14));
          return (int)SubTask;
        }
        if ( !v67 )
          goto LABEL_72;
        if ( !(*((unsigned __int8 *)this + 16) << 31) )
          goto LABEL_139;
        if ( CVehicle::IsDriver(*((CVehicle **)this + 3), *v66) != 1 )
        {
          v67 = *v66;
          if ( !*v66 )
            goto LABEL_72;
LABEL_139:
          if ( *((unsigned __int8 *)this + 16) << 31 )
            goto LABEL_72;
          v94 = (CCarEnterExit *)*((_DWORD *)this + 3);
          if ( v67 != *((CPed **)v94
                      + CCarEnterExit::ComputePassengerIndexFromCarDoor(v94, *((const CVehicle **)this + 5), v69)
                      + 282) )
            goto LABEL_72;
        }
        if ( CCarEnterExit::CarHasDoorToClose(*((CCarEnterExit **)this + 3), *((const CVehicle **)this + 5), v69) == 1 )
        {
          SubTask = (CEntity **)CTask::operator new((CTask *)&dword_1C, v95);
          CTaskSimpleCarCloseDoorFromOutside::CTaskSimpleCarCloseDoorFromOutside(
            (CTaskSimpleCarCloseDoorFromOutside *)SubTask,
            *((CVehicle **)this + 3),
            *((_DWORD *)this + 5),
            *((CTaskUtilityLineUpPedWithCar **)this + 14));
          return (int)SubTask;
        }
LABEL_17:
        v14 = this;
        v15 = 1302;
        return CTaskComplexEnterCar::CreateSubTask(v14, v15, (CPed *)a2, (int)a4);
      case 803:
        v31 = *((_DWORD *)this + 3);
        if ( v31 )
        {
          v32 = *((float *)this + 18);
          if ( v32 >= 0.0 )
          {
            v11 = (const CVehicle *)v32;
            *(_BYTE *)(v31 + 980) = (unsigned int)v32;
          }
        }
        SubTask = (CEntity **)CTask::operator new((CTask *)&dword_20, (unsigned int)v11);
        CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)SubTask, 0, 0, 0, 8.0);
        return (int)SubTask;
      case 805:
        v33 = (CCarEnterExit *)*((_DWORD *)this + 3);
        if ( !v33
          || CCarEnterExit::IsVehicleHealthy(v33, v11) != 1
          || CCarEnterExit::IsPedHealthy((CCarEnterExit *)a2, v34) != 1 )
        {
          goto LABEL_17;
        }
        if ( !(*((unsigned __int8 *)this + 16) << 31) )
        {
          SubTask = (CEntity **)CTask::operator new((CTask *)&dword_20, (unsigned int)v11);
          CTaskSimpleCarSetPedInAsPassenger::CTaskSimpleCarSetPedInAsPassenger(
            (CTaskSimpleCarSetPedInAsPassenger *)SubTask,
            *((CVehicle **)this + 3),
            *((_DWORD *)this + 5),
            *((CTaskUtilityLineUpPedWithCar **)this + 14));
          return (int)SubTask;
        }
        if ( *((_DWORD *)this + 5) == 8 )
        {
          v96 = (const CVehicle *)*((_DWORD *)this + 3);
          if ( *((_DWORD *)v96 + 281) )
          {
            CEventDraggedOutCar::CEventDraggedOutCar((CEventDraggedOutCar *)&v126, v96, (const CPed *)a2, 1);
            CEventGroup::Add(
              (CEventGroup *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 3) + 1124) + 1088) + 104),
              (CEvent *)&v126,
              1);
            IsAlive = CPed::IsAlive(*(CPed **)(*((_DWORD *)this + 3) + 1124));
            v98 = *(_DWORD *)(*((_DWORD *)this + 3) + 1124);
            if ( IsAlive == 1 && *(float *)(v98 + 1348) > 0.0 )
            {
              v99 = *(CPedIntelligence **)(v98 + 1088);
              v100 = CTask::operator new((CTask *)&dword_34, v98);
              v101 = (const CVehicle **)*((_DWORD *)this + 3);
              v102 = v100;
              v104 = CCarEnterExit::ComputeTargetDoorToExit((CCarEnterExit *)v101, v101[281], v103);
              CTaskComplex::CTaskComplex((CTaskComplex *)v102);
              *(_DWORD *)v102 = &off_66ABEC;
              *(_DWORD *)(v102 + 16) = v104;
              *(_DWORD *)(v102 + 20) = 0;
              *(_WORD *)(v102 + 24) = 256;
              *(_BYTE *)(v102 + 26) = 0;
              *(_DWORD *)(v102 + 28) = 0;
              *(_BYTE *)(v102 + 32) = 0;
              *(_BYTE *)(v102 + 33) = 0;
              *(_DWORD *)(v102 + 36) = 15;
              *(_DWORD *)(v102 + 40) = 1082130432;
              *(_DWORD *)(v102 + 44) = 1065353216;
              *(_BYTE *)(v102 + 48) = 0;
              *(_DWORD *)(v102 + 12) = v101;
              CEntity::RegisterReference((CEntity *)v101, (CEntity **)(v102 + 12));
            }
            else
            {
              v99 = *(CPedIntelligence **)(v98 + 1088);
              v113 = CTask::operator new((CTask *)&dword_34, v98);
              v114 = (const CVehicle **)*((_DWORD *)this + 3);
              v102 = v113;
              v116 = CCarEnterExit::ComputeTargetDoorToExit((CCarEnterExit *)v114, v114[281], v115);
              CTaskComplex::CTaskComplex((CTaskComplex *)v102);
              *(_DWORD *)v102 = &off_66ABEC;
              *(_DWORD *)(v102 + 16) = v116;
              *(_DWORD *)(v102 + 20) = 0;
              *(_WORD *)(v102 + 24) = 256;
              *(_BYTE *)(v102 + 26) = 0;
              *(_DWORD *)(v102 + 28) = 0;
              *(_BYTE *)(v102 + 32) = 0;
              *(_BYTE *)(v102 + 33) = 0;
              *(_DWORD *)(v102 + 36) = 15;
              *(_DWORD *)(v102 + 40) = 1082130432;
              *(_DWORD *)(v102 + 44) = 1065353216;
              *(_BYTE *)(v102 + 48) = 0;
              *(_DWORD *)(v102 + 12) = v114;
              CEntity::RegisterReference((CEntity *)v114, (CEntity **)(v102 + 12));
              *(_BYTE *)(v102 + 26) = 1;
              *(_DWORD *)v102 = &off_66AF54;
            }
            CPedIntelligence::AddTaskPrimaryMaybeInGroup(v99, (CTask *)v102, 1);
            CEventDraggedOutCar::~CEventDraggedOutCar((CEventDraggedOutCar *)&v126);
            v96 = (const CVehicle *)*((_DWORD *)this + 3);
          }
          v117 = *(_DWORD *)(*((_DWORD *)v96 + 226) + 204);
          v118 = (CTaskSimpleCarShuffle *)CTask::operator new((CTask *)&dword_1C, (unsigned int)v96);
          SubTask = (CEntity **)v118;
          if ( (v117 & 0x200) == 0 )
          {
            CTaskSimpleCarShuffle::CTaskSimpleCarShuffle(
              v118,
              *((CVehicle **)this + 3),
              *((_DWORD *)this + 5),
              *((CTaskUtilityLineUpPedWithCar **)this + 14));
            return (int)SubTask;
          }
        }
        else
        {
LABEL_69:
          SubTask = (CEntity **)CTask::operator new((CTask *)&dword_1C, (unsigned int)v11);
        }
        CTaskSimpleCarSetPedInAsDriver::CTaskSimpleCarSetPedInAsDriver(
          (CTaskSimpleCarSetPedInAsDriver *)SubTask,
          *((CVehicle **)this + 3),
          *((CTaskUtilityLineUpPedWithCar **)this + 14));
        return (int)SubTask;
      case 807:
        CCarEnterExit::MakeUndraggedPassengerPedsLeaveCar(
          *((CCarEnterExit **)this + 3),
          *((const CVehicle **)this + 16),
          (const CPed *)a2,
          a4);
        if ( *((unsigned __int8 *)this + 16) << 31
          && CPed::IsPlayer((CPed *)a2) == 1
          && (v36 = *((_DWORD *)this + 3), !*(_DWORD *)(v36 + 1440))
          && (unsigned int)(*(_DWORD *)(v36 + 1444) - 3) >= 2
          && (CPad::GetAccelerate((CPad *)&Pads) > 254 || CPad::GetBrake((CPad *)&Pads) >= 255) )
        {
          if ( (!CDamageManager::GetDoorStatus((CDamageManager *)(*((_DWORD *)this + 3) + 1460), *((_DWORD *)this + 5))
             || CDamageManager::GetDoorStatus((CDamageManager *)(*((_DWORD *)this + 3) + 1460), *((_DWORD *)this + 5)) == 2)
            && CCarEnterExit::CarHasDoorToClose(*((CCarEnterExit **)this + 3), *((const CVehicle **)this + 5), v35) == 1 )
          {
            v112 = CDamageManager::GetDoorStatus(
                     (CDamageManager *)(*((_DWORD *)this + 3) + 1460),
                     *((_DWORD *)this + 5));
            CDamageManager::SetDoorStatus(
              (CDamageManager *)(*((_DWORD *)this + 3) + 1460),
              *((_DWORD *)this + 5),
              v112 + 1);
          }
          v37 = 1;
        }
        else
        {
          v37 = 0;
        }
        HasDoorToClose = CCarEnterExit::CarHasDoorToClose(
                           *((CCarEnterExit **)this + 3),
                           *((const CVehicle **)this + 5),
                           v35);
        if ( v37 || !HasDoorToClose )
        {
          if ( *((unsigned __int8 *)this + 16) << 31 )
          {
            if ( *((_DWORD *)this + 5) != 8
              || (v75 = (const CVehicle *)*((_DWORD *)this + 3), *((_DWORD *)v75 + 360))
              || (*(_BYTE *)(*((_DWORD *)v75 + 226) + 205) & 2) != 0 )
            {
              v39 = 812;
            }
            else
            {
              if ( *((_DWORD *)v75 + 281) )
              {
                CEventDraggedOutCar::CEventDraggedOutCar((CEventDraggedOutCar *)&v126, v75, (const CPed *)a2, 1);
                CEventGroup::Add(
                  (CEventGroup *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 3) + 1124) + 1088) + 104),
                  (CEvent *)&v126,
                  1);
                v76 = CPed::IsAlive(*(CPed **)(*((_DWORD *)this + 3) + 1124));
                v77 = *(CPedIntelligence **)(*(_DWORD *)(*((_DWORD *)this + 3) + 1124) + 1088);
                v79 = CTask::operator new((CTask *)&dword_34, v78);
                v80 = (const CVehicle **)*((_DWORD *)this + 3);
                v81 = v79;
                v83 = CCarEnterExit::ComputeTargetDoorToExit((CCarEnterExit *)v80, v80[281], v82);
                CTaskComplex::CTaskComplex((CTaskComplex *)v81);
                *(_DWORD *)v81 = &off_66ABEC;
                *(_DWORD *)(v81 + 16) = v83;
                *(_DWORD *)(v81 + 20) = 0;
                *(_WORD *)(v81 + 24) = 256;
                *(_BYTE *)(v81 + 26) = 0;
                *(_DWORD *)(v81 + 28) = 0;
                *(_BYTE *)(v81 + 32) = 0;
                *(_BYTE *)(v81 + 33) = 0;
                *(_DWORD *)(v81 + 36) = 15;
                *(_DWORD *)(v81 + 40) = 1082130432;
                *(_DWORD *)(v81 + 44) = 1065353216;
                *(_BYTE *)(v81 + 48) = 0;
                *(_DWORD *)(v81 + 12) = v80;
                CEntity::RegisterReference((CEntity *)v80, (CEntity **)(v81 + 12));
                if ( v76 == 1 )
                {
                  *(_BYTE *)(v81 + 26) = 1;
                  *(_DWORD *)v81 = &off_66AF54;
                }
                CPedIntelligence::AddTaskPrimaryMaybeInGroup(v77, (CTask *)v81, 1);
                CEventDraggedOutCar::~CEventDraggedOutCar((CEventDraggedOutCar *)&v126);
              }
              v39 = 808;
            }
          }
          else
          {
            v39 = 811;
          }
        }
        else
        {
          v39 = 805;
        }
        return CTaskComplexEnterCar::CreateSubTask(this, v39, (CPed *)a2);
      case 808:
        goto LABEL_69;
      case 810:
        if ( !CCarEnterExit::IsCarDoorReady(*((CCarEnterExit **)this + 3), *((const CVehicle **)this + 5), v12)
          && CCarEnterExit::CarHasPartiallyOpenDoor(*((CCarEnterExit **)this + 3), *((const CVehicle **)this + 5), v41) != 1 )
        {
          return 0;
        }
        CTaskComplexEnterCar::SetVehicleFlags(this, v40);
        if ( *(_BYTE *)(*((_DWORD *)this + 3) + 980) )
          *((float *)this + 18) = (float)*(unsigned __int8 *)(*((_DWORD *)this + 3) + 980);
        if ( CPed::IsPlayer((CPed *)a2) == 1
          && CCarEnterExit::CarHasDoorToOpen(*((CCarEnterExit **)this + 3), *((const CVehicle **)this + 5), v42) == 1 )
        {
          if ( CCarEnterExit::CarHasOpenableDoor(
                 *((CCarEnterExit **)this + 3),
                 *((const CVehicle **)this + 5),
                 (CPed *)a2,
                 v43) )
          {
            v44 = 0;
          }
          else
          {
            v44 = *(_BYTE *)(*((_DWORD *)this + 3) + 980);
          }
        }
        else
        {
          v44 = 0;
        }
        *(_BYTE *)(*((_DWORD *)this + 3) + 980) = v44;
        v45 = a2[272];
        a2[7] = (CPedIntelligence *)((unsigned int)a2[7] & 0xFFFFFFFE);
        if ( CPedIntelligence::GetTaskDuck(v45, 1) )
        {
          v46 = CPedIntelligence::GetTaskDuck(a2[272], 1);
          (*(void (__fastcall **)(int, CPedIntelligence **, int, _DWORD))(*(_DWORD *)v46 + 28))(v46, a2, 1, 0);
        }
        CCarEnterExit::GetPositionToOpenCarDoor(
          (CCarEnterExit *)&v123,
          *((const CVehicle **)this + 3),
          *((_DWORD *)this + 5));
        v47 = a2[5];
        v48 = (float *)((char *)v47 + 48);
        if ( !v47 )
          v48 = (float *)(a2 + 1);
        v49 = v48[1];
        v50 = v48[2];
        *(float *)&v126 = v123 - *v48;
        *((float *)&v126 + 1) = v124 - v49;
        v127 = v125 - v50;
        v51 = (CTaskUtilityLineUpPedWithCar *)operator new(0x1Cu);
        CTaskUtilityLineUpPedWithCar::CTaskUtilityLineUpPedWithCar(
          v51,
          (const CVector *)&v126,
          600,
          0,
          *((_DWORD *)this + 5));
        *((_DWORD *)this + 14) = v52;
        v53 = *((_DWORD *)this + 3);
        v54 = *(_DWORD *)(v53 + 1440);
        v55 = v54 == 9;
        if ( v54 != 9 )
          v55 = *(_DWORD *)(v53 + 1444) == 2;
        if ( v55 )
          return (*(int (__fastcall **)(CTaskComplexEnterCar *, CPedIntelligence **))(*(_DWORD *)this + 52))(this, a2);
LABEL_82:
        SubTask = (CEntity **)CTask::operator new((CTask *)&word_28, v54);
        CTaskSimpleCarAlign::CTaskSimpleCarAlign(
          (CTaskSimpleCarAlign *)SubTask,
          *((CVehicle **)this + 3),
          (CTaskComplexEnterCar *)((char *)this + 44),
          *((_DWORD *)this + 5),
          *((CTaskUtilityLineUpPedWithCar **)this + 14));
        return (int)SubTask;
      case 817:
        CCarEnterExit::MakeUndraggedPassengerPedsLeaveCar(
          *((CCarEnterExit **)this + 3),
          *((const CVehicle **)this + 16),
          (const CPed *)a2,
          a4);
        goto LABEL_69;
      case 820:
        if ( (*((_BYTE *)this + 16) & 4) == 0 )
          goto LABEL_72;
        v56 = *((_DWORD *)this + 16);
        *((_BYTE *)this + 16) &= ~4u;
        if ( !v56 )
          goto LABEL_17;
        v57 = *(_DWORD *)(*((_DWORD *)this + 3) + 20);
        v58 = *(double *)v57;
        v127 = *(float *)(v57 + 8);
        v126 = v58;
        if ( (*((_DWORD *)this + 5) & 0xFFFFFFFE) == 0xA )
        {
          *(float *)&v126 = -*(float *)&v126;
          *((float *)&v126 + 1) = -*((float *)&v126 + 1);
          v127 = -v127;
        }
        SubTask = (CEntity **)CTask::operator new((CTask *)&dword_1C, v56);
        CTaskSimpleWaitUntilPedIsOutCar::CTaskSimpleWaitUntilPedIsOutCar(
          (CTaskSimpleWaitUntilPedIsOutCar *)SubTask,
          *((CPed **)this + 16),
          (const CVector *)&v126);
        return (int)SubTask;
      default:
        return (int)SubTask;
    }
  }
  v17 = v10 == 200;
  if ( v10 != 200 )
    v17 = v10 == 203;
  if ( v17 )
    goto LABEL_17;
  if ( v10 != 208 )
    return (int)SubTask;
  if ( (CPedIntelligence **)FindPlayerPed(-1) == a2 )
    CPlayerInfo::SetLastTargetVehicle((CEntity **)&CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus], 0);
  v18 = *((_BYTE *)this + 16);
  SubTask = (CEntity **)CTaskComplexEnterCar::CreateSubTask(this, 1302, (CPed *)a2);
  if ( (v18 & 8) == 0 )
    return (int)SubTask;
  return (*(int (__fastcall **)(CTaskComplexEnterCar *, CPedIntelligence **))(*(_DWORD *)this + 44))(this, a2);
}


// ============================================================

// Address: 0x4f64ac
// Original: _ZN20CTaskComplexEnterCar31ComputeTargetDoorOppositeToFlagEv
// Demangled: CTaskComplexEnterCar::ComputeTargetDoorOppositeToFlag(void)
int __fastcall CTaskComplexEnterCar::ComputeTargetDoorOppositeToFlag(CTaskComplexEnterCar *this)
{
  int result; // r0
  int v2; // r1

  if ( !(*((unsigned __int8 *)this + 16) << 31) )
    return 0;
  v2 = *((_DWORD *)this + 5);
  result = 0;
  if ( v2 == 8 )
    return 10;
  return result;
}


// ============================================================

// Address: 0x4f64c2
// Original: _ZN20CTaskComplexEnterCar15SetVehicleFlagsEP4CPed
// Demangled: CTaskComplexEnterCar::SetVehicleFlags(CPed *)
int __fastcall CTaskComplexEnterCar::SetVehicleFlags(CCarEnterExit **this, CPed *a2, int a3, bool a4)
{
  int v5; // r5
  bool v6; // r3
  int result; // r0
  const CVehicle *v8; // r1
  int v9; // r6

  v5 = CCarEnterExit::ComputeDoorFlag(this[3], this[5], 1, a4);
  CVehicle::SetGettingInFlags(this[3], v5);
  result = (int)this[3];
  *((_BYTE *)this + 40) = 1;
  *((_BYTE *)this + 68) = v5;
  ++*(_BYTE *)(result + 1161);
  v8 = this[6];
  if ( v8 )
  {
    result = CCarEnterExit::ComputeDoorFlag(this[3], v8, 1, v6);
    v9 = result;
    if ( (unsigned __int8)result != v5 )
    {
      CVehicle::SetGettingInFlags(this[3], result);
      result = *((unsigned __int8 *)this + 68) | v9;
      *((_BYTE *)this + 68) = result;
    }
  }
  return result;
}


// ============================================================

// Address: 0x4f6520
// Original: _ZN20CTaskComplexEnterCar25PrepareVehicleForPedEnterEP4CPed
// Demangled: CTaskComplexEnterCar::PrepareVehicleForPedEnter(CPed *)
int __fastcall CTaskComplexEnterCar::PrepareVehicleForPedEnter(CTaskComplexEnterCar *this, CPed *a2)
{
  unsigned int v4; // r0
  int v5; // r2
  const CPed *v6; // r3
  int result; // r0

  v4 = *(unsigned __int8 *)(*((_DWORD *)this + 3) + 980);
  if ( v4 )
    *((float *)this + 18) = (float)v4;
  if ( CPed::IsPlayer(a2) == 1
    && CCarEnterExit::CarHasDoorToOpen(*((CCarEnterExit **)this + 3), *((const CVehicle **)this + 5), v5) == 1 )
  {
    if ( CCarEnterExit::CarHasOpenableDoor(*((CCarEnterExit **)this + 3), *((const CVehicle **)this + 5), a2, v6) )
      result = 0;
    else
      result = *(unsigned __int8 *)(*((_DWORD *)this + 3) + 980);
  }
  else
  {
    result = 0;
  }
  *(_BYTE *)(*((_DWORD *)this + 3) + 980) = result;
  return result;
}


// ============================================================

// Address: 0x4f6576
// Original: _ZN20CTaskComplexEnterCar25PreparePedForVehicleEnterEP4CPed
// Demangled: CTaskComplexEnterCar::PreparePedForVehicleEnter(CPed *)
int __fastcall CTaskComplexEnterCar::PreparePedForVehicleEnter(CTaskComplexEnterCar *this, CPed *a2)
{
  CPedIntelligence *v3; // r0
  int result; // r0
  int TaskDuck; // r0

  v3 = (CPedIntelligence *)*((_DWORD *)a2 + 272);
  *((_DWORD *)a2 + 7) &= ~1u;
  result = CPedIntelligence::GetTaskDuck(v3, 1);
  if ( result )
  {
    TaskDuck = CPedIntelligence::GetTaskDuck(*((CPedIntelligence **)a2 + 272), 1);
    return (*(int (__fastcall **)(int, CPed *, int, _DWORD))(*(_DWORD *)TaskDuck + 28))(TaskDuck, a2, 1, 0);
  }
  return result;
}


// ============================================================

// Address: 0x4f65ae
// Original: _ZN20CTaskComplexEnterCar33CreateTaskUtilityLineUpPedWithCarEP4CPed
// Demangled: CTaskComplexEnterCar::CreateTaskUtilityLineUpPedWithCar(CPed *)
void __fastcall CTaskComplexEnterCar::CreateTaskUtilityLineUpPedWithCar(CTaskComplexEnterCar *this, CPed *a2)
{
  int v4; // r0
  float *v5; // r1
  float v6; // s8
  float v7; // s10
  CTaskUtilityLineUpPedWithCar *v8; // r0
  int v9; // r0
  float v10[3]; // [sp+8h] [bp-20h] BYREF
  float v11[5]; // [sp+14h] [bp-14h] BYREF

  CCarEnterExit::GetPositionToOpenCarDoor((CCarEnterExit *)v10, *((const CVehicle **)this + 3), *((_DWORD *)this + 5));
  v4 = *((_DWORD *)a2 + 5);
  v5 = (float *)(v4 + 48);
  if ( !v4 )
    v5 = (float *)((char *)a2 + 4);
  v6 = v5[1];
  v7 = v5[2];
  v11[0] = v10[0] - *v5;
  v11[1] = v10[1] - v6;
  v11[2] = v10[2] - v7;
  v8 = (CTaskUtilityLineUpPedWithCar *)operator new(0x1Cu);
  CTaskUtilityLineUpPedWithCar::CTaskUtilityLineUpPedWithCar(v8, (const CVector *)v11, 600, 0, *((_DWORD *)this + 5));
  *((_DWORD *)this + 14) = v9;
}


// ============================================================

// Address: 0x4f661c
// Original: _ZN20CTaskComplexEnterCar14ControlSubTaskEP4CPed
// Demangled: CTaskComplexEnterCar::ControlSubTask(CPed *)
int __fastcall CTaskComplexEnterCar::ControlSubTask(CTaskComplexEnterCar *this, CPed *a2)
{
  int v4; // r11
  int v5; // r1
  int v6; // r2
  int PedsGroup; // r0
  int v8; // r8
  unsigned int v9; // r1
  CEvent *v10; // r9
  const CVehicle *v11; // r1
  int v12; // r0
  char v13; // r0
  CCarEnterExit *v14; // r0
  const CPed *v15; // r1
  int v16; // r0
  int v17; // r0
  int v18; // r0
  __int64 v19; // d16
  bool v21; // zf
  CPed *v22; // r1
  const CPed *v23; // r1
  int v24; // r0
  int v25; // r5
  unsigned int v26; // r1
  CEvent *v27; // r8
  CTask *v28[12]; // [sp+0h] [bp-30h] BYREF

  v4 = *((_DWORD *)this + 2);
  if ( CPed::IsPlayer(a2) == 1 && (*((_BYTE *)this + 16) & 4) == 0 )
  {
    v5 = *((_DWORD *)this + 3);
    if ( v5 )
    {
      if ( CCarEnterExit::IsPlayerToQuitCarEnter(
             a2,
             (const CPed *)v5,
             *((const CVehicle **)this + 19),
             *((_DWORD *)this + 2),
             v28[0]) == 1 )
      {
        if ( (*((_BYTE *)this + 16) & 7) == 1
          && CPedGroups::IsGroupLeader(a2, (CPed *)v5) == 1
          && (int *)(*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != (int *)((char *)&elf_hash_bucket[138] + 3) )
        {
          PedsGroup = CPedGroups::GetPedsGroup(a2, (const CPed *)((char *)&elf_hash_bucket[138] + 3));
          v8 = PedsGroup;
          if ( PedsGroup )
          {
            if ( CPedGroupMembership::IsLeader((CPedGroupMembership *)(PedsGroup + 8), a2) == 1 )
            {
              v10 = (CEvent *)CEvent::operator new((CEvent *)&byte_9[3], v9);
              CEvent::CEvent(v10);
              *(_DWORD *)v10 = &off_666EF8;
              CEventGroupEvent::CEventGroupEvent((CEventGroupEvent *)v28, a2, v10);
              CPedGroupIntelligence::AddEvent((CPedGroupIntelligence *)(v8 + 48), (CEvent *)v28);
              CEventGroupEvent::~CEventGroupEvent((CEventGroupEvent *)v28);
            }
          }
        }
        v11 = (const CVehicle *)*((_DWORD *)this + 5);
        if ( (int)v11 < 1 )
        {
          v5 = (int)byte_4;
        }
        else
        {
          v12 = CCarEnterExit::ComputeSlowJackedPed(*((CCarEnterExit **)this + 3), v11, v6);
          v5 = 4;
          if ( v12 )
          {
            v21 = (*(_BYTE *)(v12 + 1159) & 0x20) == 0;
            v13 = -5;
            if ( !v21 )
            {
              v5 = 2;
              v13 = -3;
            }
            goto LABEL_18;
          }
        }
        v13 = -5;
LABEL_18:
        *((_BYTE *)this + 16) = v13 & *((_BYTE *)this + 16) | v5;
      }
    }
  }
  v14 = (CCarEnterExit *)*((_DWORD *)this + 3);
  if ( !v14 || CCarEnterExit::IsVehicleHealthy(v14, (const CVehicle *)v5) != 1 || !CCarEnterExit::IsPedHealthy(a2, v15) )
  {
    v17 = *((_DWORD *)this + 2);
    *((_BYTE *)this + 60) = 1;
    (*(void (__fastcall **)(int, CPed *, _DWORD, _DWORD))(*(_DWORD *)v17 + 28))(v17, a2, 0, 0);
    goto LABEL_29;
  }
  if ( *((unsigned __int8 *)this + 16) << 31 || CPed::IsPlayer(a2) == 1 )
  {
    v16 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
    if ( v16 < 800 )
    {
      if ( v16 != 200 && v16 != 715 )
        goto LABEL_29;
      goto LABEL_37;
    }
    v21 = v16 == 810;
    if ( v16 != 810 )
      v21 = v16 == 800;
    if ( v21 )
    {
LABEL_37:
      if ( CPed::IsPlayer(a2) == 1
        && CCarEnterExit::IsPlayerToQuitCarEnter(
             a2,
             *((const CPed **)this + 3),
             *((const CVehicle **)this + 19),
             *((_DWORD *)this + 2),
             v28[0]) == 1 )
      {
        if ( (*((_BYTE *)this + 16) & 7) == 1 && CPedGroups::IsGroupLeader(a2, v22) == 1 )
        {
          v24 = CPedGroups::GetPedsGroup(a2, v23);
          v25 = v24;
          if ( v24 )
          {
            if ( CPedGroupMembership::IsLeader((CPedGroupMembership *)(v24 + 8), a2) == 1 )
            {
              v27 = (CEvent *)CEvent::operator new((CEvent *)&byte_9[3], v26);
              CEvent::CEvent(v27);
              *(_DWORD *)v27 = &off_666EF8;
              CEventGroupEvent::CEventGroupEvent((CEventGroupEvent *)v28, a2, v27);
              CPedGroupIntelligence::AddEvent((CPedGroupIntelligence *)(v25 + 48), (CEvent *)v28);
              CEventGroupEvent::~CEventGroupEvent((CEventGroupEvent *)v28);
            }
          }
        }
        v4 = 0;
      }
    }
  }
LABEL_29:
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 800 )
  {
    v18 = *((_DWORD *)this + 2);
    if ( *(_DWORD *)(v18 + 52) )
    {
      v19 = *(_QWORD *)(v18 + 56);
      *((_DWORD *)this + 13) = *(_DWORD *)(v18 + 64);
      *(_QWORD *)((char *)this + 44) = v19;
    }
  }
  return v4;
}


// ============================================================

// Address: 0x4f6810
// Original: _ZN20CTaskComplexEnterCar37CreateNextSubTask_AfterSimpleCarAlignEP4CPed
// Demangled: CTaskComplexEnterCar::CreateNextSubTask_AfterSimpleCarAlign(CPed *)
CTaskSimpleCarOpenDoorFromOutside *__fastcall CTaskComplexEnterCar::CreateNextSubTask_AfterSimpleCarAlign(
        CTaskComplexEnterCar *this,
        CPed *a2)
{
  CPed *v2; // r10
  int v4; // r2
  const CPed *v5; // r3
  CTaskComplexEnterCar *v6; // r0
  int v7; // r1
  CTaskSimpleCarOpenDoorFromOutside *SubTask; // r6
  const CPed *v9; // r3
  unsigned int v10; // r1
  CCarEnterExit *v11; // r0
  int v12; // r1
  bool v13; // zf
  int v14; // r2
  CEntity *v15; // r0
  CPed **v16; // r8
  const CPed *v17; // r1
  int v18; // r0
  int v19; // r4
  unsigned int v20; // r1
  CEvent *v21; // r5
  int v22; // r0
  bool v23; // zf
  int v24; // r1
  unsigned int v25; // r1
  int v26; // r9
  int v27; // r11
  CPedIntelligence *v28; // r6
  CTaskSimpleBikeJacked *v29; // r4
  int v30; // r0
  unsigned int v31; // r1
  int HasDoorToOpen; // r0
  const CPed *v33; // r3
  int v34; // r2
  CCarEnterExit *v35; // r0
  const CVehicle *v36; // r1
  int v37; // r0
  bool v38; // zf
  int v39; // r2
  CEntity *v40; // r0
  const CPed *v41; // r2
  const CPed *v42; // r1
  int PedsGroup; // r0
  int v44; // r4
  unsigned int v45; // r1
  CEvent *v46; // r9
  _DWORD *v47; // r0
  int v48; // r0
  CPedIntelligence *v49; // r9
  CTaskSimpleBikeJacked *v50; // r4
  const CPed *v51; // r1
  CPedGroups *v52; // r0
  int v53; // r0
  unsigned int v54; // r1
  float v55; // s0
  int v56; // r0
  CTaskComplexEnterCar *v57; // r11
  int v58; // r5
  int v59; // r8
  const CPed *v60; // r1
  const CPed *v61; // r2
  float v62; // s22
  int v63; // r10
  int v64; // r0
  const CPed *v65; // r1
  const CPed *v66; // r2
  float v67; // s18
  int v68; // r4
  unsigned __int16 v69; // r0
  char v71; // r0
  int v72; // r0
  int v73; // r2
  CPed *v74; // r4
  CPedIntelligence *v75; // r9
  unsigned int v76; // r1
  CTaskComplexCarSlowBeDraggedOutAndStandUp *v77; // r4
  const CPed *v78; // r1
  CPedGroups *v79; // r0
  CCarEnterExit *v80; // r6
  unsigned int v81; // r1
  int v82; // r0
  int v83; // r4
  unsigned int v84; // r1
  CEventEditableResponse *v85; // r9
  _BYTE v86[20]; // [sp+28h] [bp-70h] BYREF
  _BYTE v87[92]; // [sp+3Ch] [bp-5Ch] BYREF

  v2 = a2;
  if ( !CPed::IsPlayer(a2)
    && sqrtf(
         (float)(*(float *)(*((_DWORD *)this + 3) + 72) * *(float *)(*((_DWORD *)this + 3) + 72))
       + (float)(*(float *)(*((_DWORD *)this + 3) + 76) * *(float *)(*((_DWORD *)this + 3) + 76))) > 0.1
    || CPed::IsPlayer(v2) == 1
    && sqrtf(
         (float)(*(float *)(*((_DWORD *)this + 3) + 72) * *(float *)(*((_DWORD *)this + 3) + 72))
       + (float)(*(float *)(*((_DWORD *)this + 3) + 76) * *(float *)(*((_DWORD *)this + 3) + 76))) > 0.2 )
  {
    *((_DWORD *)v2 + 7) |= 1u;
    if ( CPed::IsPlayer(v2) != 1 )
    {
      v6 = this;
      v7 = 208;
LABEL_70:
      SubTask = (CTaskSimpleCarOpenDoorFromOutside *)CTaskComplexEnterCar::CreateSubTask(v6, v7, v2);
      goto LABEL_71;
    }
LABEL_69:
    v6 = this;
    v7 = 1302;
    goto LABEL_70;
  }
  if ( (*((_BYTE *)this + 16) & 2) != 0 )
  {
    if ( CCarEnterExit::CarHasDoorToOpen(*((CCarEnterExit **)this + 3), *((const CVehicle **)this + 5), v4) != 1 )
    {
      *((_BYTE *)this + 16) &= ~2u;
      goto LABEL_69;
    }
    if ( CCarEnterExit::CarHasOpenableDoor(*((CCarEnterExit **)this + 3), *((const CVehicle **)this + 5), v2, v9) == 1 )
      goto LABEL_13;
    goto LABEL_49;
  }
  if ( (*((_BYTE *)this + 16) & 4) == 0
    && CCarEnterExit::IsCarQuickJackPossible(*((CCarEnterExit **)this + 3), *((const CVehicle **)this + 5), (int)v2, v5) )
  {
    SubTask = 0;
    goto LABEL_71;
  }
  v11 = (CCarEnterExit *)*((_DWORD *)this + 3);
  v12 = *((_DWORD *)v11 + 360);
  v13 = v12 == 9;
  if ( v12 != 9 )
    v13 = *((_DWORD *)v11 + 361) == 2;
  if ( !v13 )
  {
    HasDoorToOpen = CCarEnterExit::CarHasDoorToOpen(v11, *((const CVehicle **)this + 5), v4);
    v34 = HasDoorToOpen;
    v35 = (CCarEnterExit *)*((_DWORD *)this + 3);
    v36 = (const CVehicle *)*((_DWORD *)this + 5);
    if ( v34 == 1 )
    {
      if ( CCarEnterExit::CarHasOpenableDoor(v35, v36, v2, v33) == 1 )
      {
        if ( (*((_BYTE *)this + 16) & 6) == 0 )
        {
          v37 = *((_DWORD *)this + 3);
          v10 = *(unsigned __int8 *)(*(_DWORD *)(v37 + 904) + 222);
          v38 = v10 == 19;
          if ( v10 == 19 )
          {
            v10 = *((_DWORD *)this + 5);
            v38 = v10 == 10;
          }
          if ( v38 && !*(_DWORD *)(v37 + 1124) )
            goto LABEL_31;
        }
LABEL_13:
        SubTask = (CTaskSimpleCarOpenDoorFromOutside *)CTask::operator new((CTask *)&dword_24, v10);
        CTaskSimpleCarOpenDoorFromOutside::CTaskSimpleCarOpenDoorFromOutside(
          SubTask,
          *((CVehicle **)this + 3),
          *((_DWORD *)this + 5),
          *((CTaskUtilityLineUpPedWithCar **)this + 14),
          (*((_BYTE *)this + 16) & 2) != 0);
        goto LABEL_71;
      }
LABEL_49:
      SubTask = (CTaskSimpleCarOpenDoorFromOutside *)CTask::operator new((CTask *)&dword_1C, v10);
      CTaskSimpleCarOpenLockedDoorFromOutside::CTaskSimpleCarOpenLockedDoorFromOutside(
        SubTask,
        *((CVehicle **)this + 3),
        *((_DWORD *)this + 5),
        *((CTaskUtilityLineUpPedWithCar **)this + 14));
      goto LABEL_71;
    }
    if ( CCarEnterExit::IsCarSlowJackRequired(v35, v36, (int)v2, v33) == 1 )
    {
      v40 = (CEntity *)CCarEnterExit::ComputeSlowJackedPed(
                         *((CCarEnterExit **)this + 3),
                         *((const CVehicle **)this + 5),
                         v39);
      v16 = (CPed **)((char *)this + 64);
      *((_DWORD *)this + 16) = v40;
      if ( v40 )
      {
        CEntity::RegisterReference(v40, (CEntity **)this + 16);
        if ( *v16 )
        {
          if ( CPed::IsPlayer(*v16) == 1 && CGameLogic::SkipState == 2 )
          {
            SubTask = (CTaskSimpleCarOpenDoorFromOutside *)CTaskComplexEnterCar::CreateSubTask(this, 1302, v2);
            PedsGroup = CPedGroups::GetPedsGroup(*((CPedGroups **)this + 16), v42);
            v44 = PedsGroup;
            if ( PedsGroup && CPedGroupMembership::IsLeader((CPedGroupMembership *)(PedsGroup + 8), *v16) == 1 )
            {
              v46 = (CEvent *)CEvent::operator new((CEvent *)&byte_9[3], v45);
              CEvent::CEvent(v46);
              v47 = &`vtable for'CEventLeaderQuitEnteringCarAsDriver;
LABEL_63:
              *(_DWORD *)v46 = *v47 + 8;
              CEventGroupEvent::CEventGroupEvent((CEventGroupEvent *)v87, *v16, v46);
              CPedGroupIntelligence::AddEvent((CPedGroupIntelligence *)(v44 + 48), (CEvent *)v87);
              CEventGroupEvent::~CEventGroupEvent((CEventGroupEvent *)v87);
              goto LABEL_71;
            }
            goto LABEL_71;
          }
        }
      }
      v71 = *((_BYTE *)this + 16);
      if ( (v71 & 4) != 0 )
      {
LABEL_94:
        if ( (v71 & 4) == 0 || *v16 )
        {
          SubTask = (CTaskSimpleCarOpenDoorFromOutside *)CTaskComplexEnterCar::CreateSubTask(this, 820, v2);
          v75 = *(CPedIntelligence **)(*((_DWORD *)this + 16) + 1088);
          v77 = (CTaskComplexCarSlowBeDraggedOutAndStandUp *)CTask::operator new((CTask *)&dword_14, v76);
          CTaskComplexCarSlowBeDraggedOutAndStandUp::CTaskComplexCarSlowBeDraggedOutAndStandUp(
            v77,
            *((CVehicle **)this + 3),
            *((_DWORD *)this + 5));
          CPedIntelligence::AddTaskPrimaryMaybeInGroup(v75, v77, 1);
          CEventDraggedOutCar::CEventDraggedOutCar(
            (CEventDraggedOutCar *)v87,
            *((const CVehicle **)this + 3),
            v2,
            *(_DWORD *)(*((_DWORD *)this + 3) + 1124) == *((_DWORD *)this + 16));
          CEventGroup::Add((CEventGroup *)(*(_DWORD *)(*((_DWORD *)this + 16) + 1088) + 104), (CEvent *)v87, 1);
          v78 = (const CPed *)*((_DWORD *)this + 16);
          v79 = *(CPedGroups **)(*((_DWORD *)this + 3) + 1124);
          if ( v79 == v78 )
          {
            v82 = CPedGroups::GetPedsGroup(v79, v78);
            v83 = v82;
            if ( v82 )
            {
              if ( CPedGroupMembership::IsLeader((CPedGroupMembership *)(v82 + 8), *v16) == 1 )
              {
                v85 = (CEventEditableResponse *)CEvent::operator new((CEvent *)&word_10, v84);
                CEventEditableResponse::CEventEditableResponse(v85);
                *(_DWORD *)v85 = &off_666EA8;
                CEventGroupEvent::CEventGroupEvent((CEventGroupEvent *)v86, *v16, v85);
                CPedGroupIntelligence::AddEvent((CPedGroupIntelligence *)(v83 + 48), (CEvent *)v86);
                CEventGroupEvent::~CEventGroupEvent((CEventGroupEvent *)v86);
              }
            }
          }
          CEventDraggedOutCar::~CEventDraggedOutCar((CEventDraggedOutCar *)v87);
          goto LABEL_71;
        }
        goto LABEL_69;
      }
      if ( *v16 )
      {
        v72 = CPedGroups::AreInSameGroup(*v16, v2, v41);
        v74 = *v16;
        if ( !v72 && (*((_BYTE *)v74 + 1159) & 0x20) == 0 )
        {
          v71 = *((_BYTE *)this + 16);
          goto LABEL_94;
        }
        if ( v74 )
        {
          if ( !(*((unsigned __int8 *)this + 16) << 31) )
            goto LABEL_111;
          if ( CVehicle::IsDriver(*((CVehicle **)this + 3), *v16) == 1 )
          {
LABEL_104:
            if ( CCarEnterExit::CarHasDoorToClose(*((CCarEnterExit **)this + 3), *((const CVehicle **)this + 5), v73) != 1 )
              goto LABEL_69;
            SubTask = (CTaskSimpleCarOpenDoorFromOutside *)CTask::operator new((CTask *)&dword_1C, v81);
            CTaskSimpleCarCloseDoorFromOutside::CTaskSimpleCarCloseDoorFromOutside(
              SubTask,
              *((CVehicle **)this + 3),
              *((_DWORD *)this + 5),
              *((CTaskUtilityLineUpPedWithCar **)this + 14));
            goto LABEL_71;
          }
          v74 = *v16;
          if ( *v16 )
          {
LABEL_111:
            if ( !(*((unsigned __int8 *)this + 16) << 31) )
            {
              v80 = (CCarEnterExit *)*((_DWORD *)this + 3);
              if ( v74 == *((CPed **)v80
                          + CCarEnterExit::ComputePassengerIndexFromCarDoor(v80, *((const CVehicle **)this + 5), v73)
                          + 282) )
                goto LABEL_104;
            }
          }
        }
      }
    }
    else if ( (*((_BYTE *)this + 16) & 4) != 0 )
    {
      goto LABEL_69;
    }
LABEL_31:
    SubTask = (CTaskSimpleCarOpenDoorFromOutside *)CTask::operator new((CTask *)&dword_24, v10);
    CTaskSimpleCarGetIn::CTaskSimpleCarGetIn(
      SubTask,
      *((CVehicle **)this + 3),
      *((_DWORD *)this + 5),
      *((CTaskUtilityLineUpPedWithCar **)this + 14));
    goto LABEL_71;
  }
  if ( CCarEnterExit::IsCarSlowJackRequired(v11, *((const CVehicle **)this + 5), (int)v2, v5) != 1 )
  {
    if ( (*((_BYTE *)this + 16) & 4) != 0 )
      goto LABEL_69;
    v22 = *((_DWORD *)this + 3);
    v10 = *(_BYTE *)(v22 + 58) & 0xF8;
    v23 = v10 == 32;
    if ( v10 == 32 )
    {
      v10 = *(_DWORD *)(v22 + 1440);
      v23 = v10 == 9;
    }
    if ( v23 )
    {
      v55 = *(float *)(*(_DWORD *)(v22 + 20) + 8);
      if ( v55 >= 0.5 || v55 <= -0.5 )
      {
        SubTask = (CTaskSimpleCarOpenDoorFromOutside *)CTask::operator new((CTask *)&dword_1C, v10);
        CTaskSimplePickUpBike::CTaskSimplePickUpBike(
          SubTask,
          *((CVehicle **)this + 3),
          *((_DWORD *)this + 5),
          *((CTaskUtilityLineUpPedWithCar **)this + 14));
      }
      else
      {
        SubTask = (CTaskSimpleCarOpenDoorFromOutside *)CTask::operator new((CTask *)&dword_24, v10);
        CTaskSimpleCarGetIn::CTaskSimpleCarGetIn(
          SubTask,
          *((CVehicle **)this + 3),
          *((_DWORD *)this + 5),
          *((CTaskUtilityLineUpPedWithCar **)this + 14));
        *(_BYTE *)(*((_DWORD *)this + 3) + 1576) |= 8u;
      }
      goto LABEL_71;
    }
    goto LABEL_31;
  }
  v15 = (CEntity *)CCarEnterExit::ComputeSlowJackedPed(
                     *((CCarEnterExit **)this + 3),
                     *((const CVehicle **)this + 5),
                     v14);
  v16 = (CPed **)((char *)this + 64);
  *((_DWORD *)this + 16) = v15;
  if ( !v15
    || (CEntity::RegisterReference(v15, (CEntity **)this + 16), !*v16)
    || CPed::IsPlayer(*v16) != 1
    || CGameLogic::SkipState != 2 )
  {
    v24 = 820;
    if ( (*((_BYTE *)this + 16) & 4) == 0 && *((_DWORD *)this + 5) == 18 )
      v24 = 807;
    v26 = CTaskComplexEnterCar::CreateSubTask(this, v24, v2);
    if ( *((_DWORD *)this + 5) == 18 && !*(_DWORD *)(*((_DWORD *)this + 3) + 1128) )
      v27 = 11;
    else
      v27 = 10;
    v28 = *(CPedIntelligence **)(*((_DWORD *)this + 16) + 1088);
    v29 = (CTaskSimpleBikeJacked *)CTask::operator new((CTask *)&word_2C, v25);
    CTaskSimpleBikeJacked::CTaskSimpleBikeJacked(v29, *((CVehicle **)this + 3), v27, *((_DWORD *)this + 8), v2, 1);
    CPedIntelligence::AddTaskPrimaryMaybeInGroup(v28, v29, 1);
    v30 = *((_DWORD *)this + 3);
    v31 = *((_DWORD *)this + 16);
    if ( v31 != *(_DWORD *)(v30 + 1124) )
    {
      SubTask = (CTaskSimpleCarOpenDoorFromOutside *)v26;
      goto LABEL_71;
    }
    v48 = *(_DWORD *)(v30 + 1128);
    SubTask = (CTaskSimpleCarOpenDoorFromOutside *)v26;
    if ( v48 )
    {
      v49 = *(CPedIntelligence **)(v48 + 1088);
      v50 = (CTaskSimpleBikeJacked *)CTask::operator new((CTask *)&word_2C, v31);
      CTaskSimpleBikeJacked::CTaskSimpleBikeJacked(
        v50,
        *((CVehicle **)this + 3),
        11,
        *((_DWORD *)this + 8) + 200,
        v2,
        0);
      CPedIntelligence::AddTaskPrimaryMaybeInGroup(v49, v50, 1);
      v51 = (const CPed *)*((_DWORD *)this + 16);
      v52 = *(CPedGroups **)(*((_DWORD *)this + 3) + 1124);
      if ( v52 == v51 )
      {
        v53 = CPedGroups::GetPedsGroup(v52, v51);
        v44 = v53;
        if ( v53 )
        {
          if ( CPedGroupMembership::IsLeader((CPedGroupMembership *)(v53 + 8), *v16) == 1 )
          {
            v46 = (CEvent *)CEvent::operator new((CEvent *)&word_10, v54);
            CEventEditableResponse::CEventEditableResponse(v46);
            v47 = &`vtable for'CEventLeaderExitedCarAsDriver;
            goto LABEL_63;
          }
        }
      }
    }
LABEL_71:
    v56 = *((_DWORD *)this + 3);
    if ( (*(_BYTE *)(v56 + 1069) & 2) == 0 )
    {
      v57 = this;
      v58 = 282;
      v59 = (int)v2;
      do
      {
        v60 = *(const CPed **)(v56 + 4 * v58);
        if ( v60 )
        {
          if ( CPedIntelligence::IsFriendlyWith(*((CPedIntelligence **)v2 + 272), v60)
            || CPedGroups::AreInSameGroup(v2, *(const CPed **)(*((_DWORD *)v57 + 3) + 4 * v58), v61) == 1 )
          {
            v62 = 1000.0;
            v63 = 2000;
          }
          else
          {
            v63 = 6000;
            v62 = 2000.0;
          }
          v64 = (int)(float)(v62 * (float)((float)(unsigned __int16)rand() * 0.000015259)) + v63;
          v2 = (CPed *)v59;
          IKChainManager_c::LookAt(
            (int)&g_ikChainMan,
            (int)"TaskEnterCar",
            *(CPed **)(*((_DWORD *)v57 + 3) + 4 * v58),
            v59,
            v64,
            5,
            0,
            0,
            0.5,
            350,
            3,
            0);
          v56 = *((_DWORD *)v57 + 3);
        }
        ++v58;
      }
      while ( v58 != 290 );
      v65 = *(const CPed **)(v56 + 1124);
      if ( v65 )
      {
        if ( CPedIntelligence::IsFriendlyWith(*((CPedIntelligence **)v2 + 272), v65)
          || CPedGroups::AreInSameGroup(v2, *(const CPed **)(*((_DWORD *)v57 + 3) + 1124), v66) == 1 )
        {
          v67 = 1000.0;
          v68 = 2000;
        }
        else
        {
          v67 = 2000.0;
          v68 = 6000;
        }
        v69 = rand();
        IKChainManager_c::LookAt(
          (int)&g_ikChainMan,
          (int)"TaskEnterCar",
          *(CPed **)(*((_DWORD *)v57 + 3) + 1124),
          (int)v2,
          v68 + (int)(float)(v67 * (float)((float)v69 * 0.000015259)),
          5,
          0,
          0,
          0.5,
          350,
          3,
          0);
      }
    }
    return SubTask;
  }
  SubTask = (CTaskSimpleCarOpenDoorFromOutside *)CTaskComplexEnterCar::CreateSubTask(this, 1302, v2);
  v18 = CPedGroups::GetPedsGroup(*((CPedGroups **)this + 16), v17);
  v19 = v18;
  if ( v18 && CPedGroupMembership::IsLeader((CPedGroupMembership *)(v18 + 8), *v16) == 1 )
  {
    v21 = (CEvent *)CEvent::operator new((CEvent *)&byte_9[3], v20);
    CEvent::CEvent(v21);
    *(_DWORD *)v21 = &off_666EF8;
    CEventGroupEvent::CEventGroupEvent((CEventGroupEvent *)v87, *v16, v21);
    CPedGroupIntelligence::AddEvent((CPedGroupIntelligence *)(v19 + 48), (CEvent *)v87);
    CEventGroupEvent::~CEventGroupEvent((CEventGroupEvent *)v87);
  }
  return SubTask;
}


// ============================================================
