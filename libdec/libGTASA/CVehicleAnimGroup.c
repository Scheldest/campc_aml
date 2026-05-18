
// Address: 0x19190c
// Original: j__ZN17CVehicleAnimGroup24ComputeCriticalBlendTimeEi
// Demangled: CVehicleAnimGroup::ComputeCriticalBlendTime(int)
// attributes: thunk
int __fastcall CVehicleAnimGroup::ComputeCriticalBlendTime(CVehicleAnimGroup *this, int a2)
{
  return _ZN17CVehicleAnimGroup24ComputeCriticalBlendTimeEi(this, a2);
}


// ============================================================

// Address: 0x1970bc
// Original: j__ZN17CVehicleAnimGroup22ComputeAnimDoorOffsetsEi
// Demangled: CVehicleAnimGroup::ComputeAnimDoorOffsets(int)
// attributes: thunk
int __fastcall CVehicleAnimGroup::ComputeAnimDoorOffsets(CVehicleAnimGroup *this, int a2)
{
  return _ZN17CVehicleAnimGroup22ComputeAnimDoorOffsetsEi(this, a2);
}


// ============================================================

// Address: 0x19f7b4
// Original: j__ZN17CVehicleAnimGroup8GetGroupEi
// Demangled: CVehicleAnimGroup::GetGroup(int)
// attributes: thunk
int __fastcall CVehicleAnimGroup::GetGroup(CVehicleAnimGroup *this, int a2)
{
  return _ZN17CVehicleAnimGroup8GetGroupEi(this, a2);
}


// ============================================================

// Address: 0x591d78
// Original: _ZN17CVehicleAnimGroup8GetGroupEi
// Demangled: CVehicleAnimGroup::GetGroup(int)
int __fastcall CVehicleAnimGroup::GetGroup(CVehicleAnimGroup *this, int a2)
{
  CVehicleAnimGroup *v2; // r4

  v2 = this;
  if ( (*((_DWORD *)this + 1) & (int)COERCE_FLOAT(exp2f())) != 0 )
    v2 = (CVehicleAnimGroup *)((char *)v2 + 1);
  return *(char *)v2;
}


// ============================================================

// Address: 0x591dc4
// Original: _ZN17CVehicleAnimGroup24ComputeCriticalBlendTimeEi
// Demangled: CVehicleAnimGroup::ComputeCriticalBlendTime(int)
int __fastcall CVehicleAnimGroup::ComputeCriticalBlendTime(CVehicleAnimGroup *this, int a2)
{
  int v2; // r2
  int v3; // s0
  int v4; // r1

  v2 = a2 - 351;
  v3 = 0;
  v4 = 0;
  switch ( v2 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
      goto LABEL_6;
    case 22:
    case 23:
    case 24:
    case 25:
      v4 = 2;
      goto LABEL_6;
    case 27:
    case 28:
      v4 = 3;
      goto LABEL_6;
    case 33:
    case 34:
      v4 = 1;
      goto LABEL_6;
    case 36:
    case 37:
      v4 = 4;
LABEL_6:
      v3 = *((_DWORD *)this + v4 + 3);
      break;
    default:
      return v3;
  }
  return v3;
}


// ============================================================

// Address: 0x591e1c
// Original: _ZN17CVehicleAnimGroup22ComputeAnimDoorOffsetsEi
// Demangled: CVehicleAnimGroup::ComputeAnimDoorOffsets(int)
CAnimManager *__fastcall CVehicleAnimGroup::ComputeAnimDoorOffsets(CVehicleAnimGroup *this, int a2, int a3)
{
  int v3; // r5
  float *v5; // r0
  float *v6; // r6
  int AnimAssociation; // r0
  CAnimBlendHierarchy *v8; // r1
  int v9; // r0
  int v10; // r0
  int v11; // r1
  int v12; // r3
  __int64 v13; // d16
  __int64 v14; // d16
  CAnimManager *result; // r0

  v5 = (float *)(a2 + 12 * a3);
  v6 = v5 + 16;
  if ( (float)((float)((float)(v5[16] * v5[16]) + (float)(v5[17] * v5[17])) + (float)(v5[18] * v5[18])) != 0.0 )
  {
LABEL_7:
    v14 = *(_QWORD *)v6;
    result = (CAnimManager *)*((_DWORD *)v6 + 2);
    *((_DWORD *)this + 2) = result;
    *(_QWORD *)this = v14;
    return result;
  }
  exp2f();
  AnimAssociation = CAnimManager::GetAnimAssociation();
  result = *(CAnimManager **)(AnimAssociation + 16);
  if ( result )
  {
    v3 = *((_DWORD *)result + 1);
    CAnimManager::UncompressAnimation(result, v8);
    v9 = *(__int16 *)(v3 + 6);
    if ( v9 >= 1 )
    {
      v10 = v9 - 1;
      v11 = *(_DWORD *)(v3 + 8);
      v12 = 20 * v10;
      if ( (*(_WORD *)(v3 + 4) & 2) != 0 )
        v12 = 32 * v10;
      v13 = *(_QWORD *)(v11 + v12 + 20);
      v6[2] = *(float *)(v11 + v12 + 28);
      *(_QWORD *)v6 = v13;
    }
    goto LABEL_7;
  }
  return result;
}


// ============================================================
