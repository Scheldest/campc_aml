
// Address: 0x18b744
// Original: j__ZN14CStuckCarCheck20AttemptToWarpVehicleEP8CVehicleR7CVectorf
// Demangled: CStuckCarCheck::AttemptToWarpVehicle(CVehicle *,CVector &,float)
// attributes: thunk
int __fastcall CStuckCarCheck::AttemptToWarpVehicle(CStuckCarCheck *this, CVehicle *a2, CVector *a3, float a4)
{
  return _ZN14CStuckCarCheck20AttemptToWarpVehicleEP8CVehicleR7CVectorf(this, a2, a3, a4);
}


// ============================================================

// Address: 0x18d540
// Original: j__ZN14CStuckCarCheck18RemoveCarFromCheckEi
// Demangled: CStuckCarCheck::RemoveCarFromCheck(int)
// attributes: thunk
int __fastcall CStuckCarCheck::RemoveCarFromCheck(CStuckCarCheck *this, int a2)
{
  return _ZN14CStuckCarCheck18RemoveCarFromCheckEi(this, a2);
}


// ============================================================

// Address: 0x192cac
// Original: j__ZN14CStuckCarCheck20IsCarInStuckCarArrayEi
// Demangled: CStuckCarCheck::IsCarInStuckCarArray(int)
// attributes: thunk
int __fastcall CStuckCarCheck::IsCarInStuckCarArray(CStuckCarCheck *this, int a2)
{
  return _ZN14CStuckCarCheck20IsCarInStuckCarArrayEi(this, a2);
}


// ============================================================

// Address: 0x196b88
// Original: j__ZN14CStuckCarCheck7ProcessEv
// Demangled: CStuckCarCheck::Process(void)
// attributes: thunk
int __fastcall CStuckCarCheck::Process(CStuckCarCheck *this)
{
  return _ZN14CStuckCarCheck7ProcessEv(this);
}


// ============================================================

// Address: 0x197c88
// Original: j__ZN14CStuckCarCheck13AddCarToCheckEifjhhhha
// Demangled: CStuckCarCheck::AddCarToCheck(int,float,uint,uchar,uchar,uchar,uchar,signed char)
// attributes: thunk
int __fastcall CStuckCarCheck::AddCarToCheck(
        CStuckCarCheck *this,
        int a2,
        float a3,
        unsigned int a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        signed __int8 a9)
{
  return _ZN14CStuckCarCheck13AddCarToCheckEifjhhhha(this, a2, a3, a4, a5, a6, a7, a8, a9);
}


// ============================================================

// Address: 0x19b798
// Original: j__ZN14CStuckCarCheck24HasCarBeenStuckForAWhileEi
// Demangled: CStuckCarCheck::HasCarBeenStuckForAWhile(int)
// attributes: thunk
int __fastcall CStuckCarCheck::HasCarBeenStuckForAWhile(CStuckCarCheck *this, int a2)
{
  return _ZN14CStuckCarCheck24HasCarBeenStuckForAWhileEi(this, a2);
}


// ============================================================

// Address: 0x19ef14
// Original: j__ZN14CStuckCarCheck20ClearStuckFlagForCarEi
// Demangled: CStuckCarCheck::ClearStuckFlagForCar(int)
// attributes: thunk
int __fastcall CStuckCarCheck::ClearStuckFlagForCar(CStuckCarCheck *this, int a2)
{
  return _ZN14CStuckCarCheck20ClearStuckFlagForCarEi(this, a2);
}


// ============================================================

// Address: 0x32824a
// Original: _ZN14CStuckCarCheck4InitEv
// Demangled: CStuckCarCheck::Init(void)
__int64 __fastcall CStuckCarCheck::Init(__int64 this)
{
  int v1; // r2
  _DWORD *v2; // r3

  HIDWORD(this) = 0;
  v1 = 0;
  do
  {
    *(_DWORD *)(this + v1) = -1;
    v2 = (_DWORD *)(this + v1);
    v1 += 36;
    v2[1] = -979615744;
    v2[2] = -979615744;
    v2[3] = -979615744;
    v2[4] = -1;
    *(_DWORD *)((char *)v2 + 30) = 0;
    *(_DWORD *)((char *)v2 + 26) = 0;
    v2[5] = 0;
    v2[6] = 0;
  }
  while ( v1 != 576 );
  return this;
}


// ============================================================

// Address: 0x328660
// Original: _ZN14CStuckCarCheck17ResetArrayElementEt
// Demangled: CStuckCarCheck::ResetArrayElement(ushort)
_DWORD *__fastcall CStuckCarCheck::ResetArrayElement(CStuckCarCheck *this, int a2)
{
  int v2; // r1
  _DWORD *result; // r0

  v2 = 9 * a2;
  *((_DWORD *)this + v2) = -1;
  result = (_DWORD *)((char *)this + 4 * v2);
  result[1] = -979615744;
  result[2] = -979615744;
  result[3] = -979615744;
  *(_DWORD *)((char *)result + 30) = 0;
  *(_DWORD *)((char *)result + 26) = 0;
  result[6] = 0;
  result[4] = -1;
  result[5] = 0;
  return result;
}


// ============================================================

// Address: 0x328690
// Original: _ZN14CStuckCarCheck20AttemptToWarpVehicleEP8CVehicleR7CVectorf
// Demangled: CStuckCarCheck::AttemptToWarpVehicle(CVehicle *,CVector &,float)
int __fastcall CStuckCarCheck::AttemptToWarpVehicle(CStuckCarCheck *this, CMatrix **a2, CVector *a3, float a4)
{
  int v7; // r4
  float v8; // s6
  float v9; // s8
  float v10; // s12
  float v11; // s4
  CMatrix *v12; // r0
  unsigned __int8 v14; // [sp+8h] [bp-48h]
  bool v15; // [sp+10h] [bp-40h]
  float v16[3]; // [sp+14h] [bp-3Ch] BYREF
  float v17[3]; // [sp+20h] [bp-30h] BYREF
  _WORD v18[17]; // [sp+2Eh] [bp-22h] BYREF

  v7 = 0;
  if ( !CCamera::IsSphereVisible((CCamera *)&TheCamera, a3, 4.0) )
  {
    v8 = *((float *)a3 + 1);
    v9 = *((float *)a3 + 2);
    v10 = *(float *)a3 + -4.0;
    v11 = *(float *)a3 + 4.0;
    v17[1] = v8 + -4.0;
    v17[0] = v10;
    v16[1] = v8 + 4.0;
    v16[0] = v11;
    v17[2] = v9 + -4.0;
    v16[2] = v9 + 4.0;
    CWorld::FindMissionEntitiesIntersectingCube(
      (CWorld *)v17,
      (const CVector *)v16,
      (const CVector *)v18,
      (__int16 *)&stderr + 1,
      0,
      (CEntity **)((char *)&stderr + 1),
      1,
      1,
      v15);
    if ( !v18[0] )
    {
      CCarCtrl::SetCoordsOfScriptCar(
        (CCarCtrl *)a2,
        *(CVehicle **)a3,
        *((float *)a3 + 1),
        *((float *)a3 + 2),
        COERCE_FLOAT(1),
        1u,
        v14);
      v12 = a2[5];
      if ( v12 )
        CMatrix::SetRotateZOnly(v12, (float)(a4 * 3.1416) / 180.0);
      else
        *((float *)a2 + 4) = (float)(a4 * 3.1416) / 180.0;
      return 1;
    }
  }
  return v7;
}


// ============================================================

// Address: 0x328770
// Original: _ZN14CStuckCarCheck7ProcessEv
// Demangled: CStuckCarCheck::Process(void)
int __fastcall CStuckCarCheck::Process(CStuckCarCheck *this)
{
  int v2; // r6
  int v3; // r0
  char *v4; // r1
  __int64 v5; // d16
  int result; // r0
  int v7; // r10
  int v8; // r0
  int v9; // r0
  bool v10; // r0
  float v11; // s0
  char *v12; // r9
  int v13; // t1
  bool v14; // zf
  int v15; // r11
  int *v16; // r3
  char *v17; // r9
  CVehicle *v18; // r8
  int v19; // r1
  char *v20; // r2
  float32x2_t v21; // d16
  unsigned __int64 v22; // d1
  __int64 v23; // d16
  _DWORD *v24; // [sp+30h] [bp-60h]
  CStuckCarCheck *v25; // [sp+34h] [bp-5Ch]
  unsigned int v26; // [sp+38h] [bp-58h]
  _BYTE v27[9]; // [sp+47h] [bp-49h] BYREF
  int v28; // [sp+50h] [bp-40h]
  CStuckCarCheck *NodeOrientationForCarPlacement; // [sp+54h] [bp-3Ch] BYREF
  double v30; // [sp+58h] [bp-38h] BYREF
  int v31; // [sp+60h] [bp-30h]

  v2 = 0;
  v26 = CTimer::m_snTimeInMilliseconds;
  do
  {
    result = *((_DWORD *)this + 9 * v2);
    if ( result < 0 )
      goto LABEL_50;
    v17 = (char *)this + 36 * v2;
    if ( *(unsigned __int8 *)(*(_DWORD *)(CPools::ms_pVehiclePool + 4) + ((unsigned int)result >> 8)) != (unsigned __int8)result
      || (v18 = (CVehicle *)(*(_DWORD *)CPools::ms_pVehiclePool + 2604 * ((unsigned int)result >> 8))) == 0 )
    {
      result = -1;
      *(_DWORD *)v17 = -1;
      *((_DWORD *)v17 + 1) = -979615744;
      *((_DWORD *)v17 + 2) = -979615744;
      *(_DWORD *)(v17 + 30) = 0;
      *(_DWORD *)(v17 + 26) = 0;
      *((_DWORD *)v17 + 5) = 0;
      *((_DWORD *)v17 + 6) = 0;
      *((_DWORD *)v17 + 3) = -979615744;
      *((_DWORD *)v17 + 4) = -1;
      goto LABEL_50;
    }
    if ( !*((_DWORD *)v18 + 281) )
    {
      v3 = *((_DWORD *)v18 + 5);
      v4 = (char *)(v3 + 48);
      if ( !v3 )
        v4 = (char *)v18 + 4;
      v5 = *(_QWORD *)v4;
      *((_DWORD *)v17 + 3) = *((_DWORD *)v4 + 2);
      result = v26;
      *((_DWORD *)v17 + 4) = v26;
      *(_QWORD *)(v17 + 4) = v5;
      goto LABEL_50;
    }
    if ( v26 > *((_DWORD *)v17 + 4) + *((_DWORD *)v17 + 6) )
    {
      v19 = *((_DWORD *)v18 + 5);
      v20 = (char *)(v19 + 48);
      if ( !v19 )
        v20 = (char *)v18 + 4;
      v21.n64_u64[0] = vsub_f32(*(float32x2_t *)(v20 + 4), *((float32x2_t *)v17 + 1)).n64_u64[0];
      v22 = vmul_f32(v21, v21).n64_u64[0];
      v17[28] = sqrtf(
                  (float)((float)((float)(*(float *)v20 - *((float *)v17 + 1))
                                * (float)(*(float *)v20 - *((float *)v17 + 1)))
                        + *(float *)&v22)
                + *((float *)&v22 + 1)) < *((float *)v17 + 5);
      v23 = *(_QWORD *)v20;
      *((_DWORD *)v17 + 3) = *((_DWORD *)v20 + 2);
      *(_QWORD *)(v17 + 4) = v23;
      *((_DWORD *)v17 + 4) = v26;
    }
    result = (unsigned __int8)v17[29];
    if ( !v17[29] )
      goto LABEL_50;
    if ( v17[30] )
    {
      v7 = (unsigned __int8)v17[28];
      if ( v17[28] )
        v7 = 1;
    }
    else
    {
      v7 = 0;
    }
    if ( v17[31] )
    {
      v8 = *((_DWORD *)v18 + 360);
      if ( v8 == 9 )
      {
        v9 = 2072;
      }
      else
      {
        if ( v8 )
        {
          v10 = 1;
LABEL_13:
          v11 = *(float *)(*((_DWORD *)v18 + 5) + 40);
          if ( (v11 < 0.0 || v10 && v11 < 0.3)
            && (*(int (__fastcall **)(CVehicle *, _DWORD))(*(_DWORD *)v18 + 232))(v18, 0) )
          {
            v7 = 1;
          }
          goto LABEL_17;
        }
        v9 = 2420;
      }
      v10 = *((unsigned __int8 *)v18 + v9) < 4u;
      goto LABEL_13;
    }
LABEL_17:
    result = (unsigned __int8)v17[32];
    if ( v17[32] )
    {
      if ( !v7 )
      {
        result = *((_DWORD *)v18 + 17) & 0x100;
        if ( !result )
          goto LABEL_50;
      }
    }
    else if ( !v7 )
    {
      goto LABEL_50;
    }
    CEntity::GetBoundCentre((CEntity *)&v27[1]);
    result = CCamera::IsSphereVisible(
               (CCamera *)&TheCamera,
               (const CVector *)&v27[1],
               *(float *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*((__int16 *)v18 + 19)]) + 44) + 36));
    if ( !result )
    {
      v13 = v17[33];
      v12 = v17 + 33;
      result = v13;
      v14 = v13 == 0;
      if ( v13 < 0 )
      {
        CPathFind::FindNodeCoorsForScript(
          (int)&v27[1],
          (int)ThePaths,
          *((_DWORD *)v18 + 229),
          *((_DWORD *)v18 + 230),
          (int)&NodeOrientationForCarPlacement,
          (int)v27);
        v31 = v28;
        result = v27[0];
        v30 = *(double *)&v27[1];
        if ( v27[0] )
          result = CStuckCarCheck::AttemptToWarpVehicle(
                     (CStuckCarCheck *)v27[0],
                     v18,
                     (CVector *)&v30,
                     *(float *)&NodeOrientationForCarPlacement);
      }
      else if ( !v14 )
      {
        v24 = (_DWORD *)((char *)v18 + 20);
        result = 0;
        v15 = 0;
        v25 = this;
        do
        {
          v16 = (int *)(*v24 + 48);
          if ( !*v24 )
            v16 = (int *)((char *)v18 + 4);
          CPathFind::FindNthNodeClosestToCoors((int)ThePaths, *v16, v16[1], v16[2], 0, 1000000.0, 0, 1, result, 0, 0, 0);
          CPathFind::FindNodeCoorsForScript();
          v31 = v28;
          v30 = *(double *)&v27[1];
          if ( v27[0] )
          {
            NodeOrientationForCarPlacement = (CStuckCarCheck *)CPathFind::FindNodeOrientationForCarPlacement();
            result = CStuckCarCheck::AttemptToWarpVehicle(
                       NodeOrientationForCarPlacement,
                       v18,
                       (CVector *)&v30,
                       *(float *)&NodeOrientationForCarPlacement);
            v15 += result ^ 1;
          }
          else
          {
            ++v15;
            result = 0;
          }
          this = v25;
          if ( result )
            break;
          result = (unsigned __int8)v15;
        }
        while ( (unsigned __int8)v15 < *v12 );
      }
    }
LABEL_50:
    ++v2;
  }
  while ( v2 != 16 );
  return result;
}


// ============================================================

// Address: 0x328ab4
// Original: _ZN14CStuckCarCheck13AddCarToCheckEifjhhhha
// Demangled: CStuckCarCheck::AddCarToCheck(int,float,uint,uchar,uchar,uchar,uchar,signed char)
int __fastcall CStuckCarCheck::AddCarToCheck(
        int this,
        unsigned int a2,
        float a3,
        unsigned int a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        signed __int8 a9)
{
  unsigned int v9; // lr
  unsigned int *v10; // r5
  int v11; // r8
  int v13; // r2
  int v14; // r1
  int v15; // r5
  __int64 v16; // d16
  int v17; // r1

  if ( (a2 & 0x80000000) == 0 )
  {
    v9 = a2 >> 8;
    if ( *(unsigned __int8 *)(*(_DWORD *)(CPools::ms_pVehiclePool + 4) + (a2 >> 8)) == (unsigned __int8)a2 )
    {
      if ( *(_DWORD *)CPools::ms_pVehiclePool + 2604 * v9 )
      {
        if ( *(int *)this < 0 )
        {
          v11 = 0;
          v10 = (unsigned int *)this;
        }
        else
        {
          v10 = (unsigned int *)(this + 36);
          if ( *(int *)(this + 36) <= -1 )
          {
            v11 = 1;
          }
          else
          {
            v10 = (unsigned int *)(this + 72);
            if ( *(int *)(this + 72) < 0 )
            {
              v11 = 2;
            }
            else
            {
              v10 = (unsigned int *)(this + 108);
              if ( *(int *)(this + 108) < 0 )
              {
                v11 = 3;
              }
              else
              {
                v10 = (unsigned int *)(this + 144);
                if ( *(int *)(this + 144) < 0 )
                {
                  v11 = 4;
                }
                else
                {
                  v10 = (unsigned int *)(this + 180);
                  if ( *(int *)(this + 180) < 0 )
                  {
                    v11 = 5;
                  }
                  else
                  {
                    v10 = (unsigned int *)(this + 216);
                    if ( *(int *)(this + 216) < 0 )
                    {
                      v11 = 6;
                    }
                    else
                    {
                      v10 = (unsigned int *)(this + 252);
                      if ( *(int *)(this + 252) < 0 )
                      {
                        v11 = 7;
                      }
                      else if ( *(int *)(this + 288) < 0 )
                      {
                        v10 = (unsigned int *)(this + 288);
                        v11 = 8;
                      }
                      else if ( *(int *)(this + 324) < 0 )
                      {
                        v10 = (unsigned int *)(this + 324);
                        v11 = 9;
                      }
                      else if ( *(int *)(this + 360) < 0 )
                      {
                        v10 = (unsigned int *)(this + 360);
                        v11 = 10;
                      }
                      else if ( *(int *)(this + 396) < 0 )
                      {
                        v10 = (unsigned int *)(this + 396);
                        v11 = 11;
                      }
                      else if ( *(int *)(this + 432) < 0 )
                      {
                        v10 = (unsigned int *)(this + 432);
                        v11 = 12;
                      }
                      else if ( *(int *)(this + 468) < 0 )
                      {
                        v10 = (unsigned int *)(this + 468);
                        v11 = 13;
                      }
                      else if ( *(int *)(this + 504) < 0 )
                      {
                        v10 = (unsigned int *)(this + 504);
                        v11 = 14;
                      }
                      else
                      {
                        if ( *(int *)(this + 540) > -1 )
                          return this;
                        v10 = (unsigned int *)(this + 540);
                        v11 = 15;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        v13 = *(_DWORD *)CPools::ms_pVehiclePool + 2604 * v9;
        *v10 = a2;
        v14 = *(_DWORD *)(v13 + 20);
        v15 = v14 + 48;
        if ( !v14 )
          v15 = v13 + 4;
        v16 = *(_QWORD *)v15;
        this += 36 * v11;
        *(_DWORD *)(this + 12) = *(_DWORD *)(v15 + 8);
        *(_QWORD *)(this + 4) = v16;
        v17 = CTimer::m_snTimeInMilliseconds;
        *(float *)(this + 20) = a3;
        *(_DWORD *)(this + 16) = v17;
        *(_DWORD *)(this + 24) = a4;
        *(_BYTE *)(this + 28) = 0;
        *(_BYTE *)(this + 29) = a5;
        *(_BYTE *)(this + 30) = a6;
        *(_BYTE *)(this + 31) = a7;
        *(_BYTE *)(this + 32) = a8;
        *(_BYTE *)(this + 33) = a9;
      }
    }
  }
  return this;
}


// ============================================================

// Address: 0x328c70
// Original: _ZN14CStuckCarCheck18RemoveCarFromCheckEi
// Demangled: CStuckCarCheck::RemoveCarFromCheck(int)
int __fastcall CStuckCarCheck::RemoveCarFromCheck(int this, int a2)
{
  int i; // r3
  _DWORD *v3; // r4

  for ( i = 0; i != 576; i += 36 )
  {
    if ( *(_DWORD *)(this + i) == a2 )
    {
      v3 = (_DWORD *)(this + i);
      *(_DWORD *)(this + i) = -1;
      v3[1] = -979615744;
      v3[2] = -979615744;
      v3[3] = -979615744;
      v3[4] = -1;
      *(_DWORD *)((char *)v3 + 30) = 0;
      *(_DWORD *)((char *)v3 + 26) = 0;
      v3[5] = 0;
      v3[6] = 0;
    }
  }
  return this;
}


// ============================================================

// Address: 0x328cb2
// Original: _ZN14CStuckCarCheck24HasCarBeenStuckForAWhileEi
// Demangled: CStuckCarCheck::HasCarBeenStuckForAWhile(int)
bool __fastcall CStuckCarCheck::HasCarBeenStuckForAWhile(CStuckCarCheck *this, int a2)
{
  int v2; // r1

  if ( *(_DWORD *)this == a2 )
  {
    v2 = 0;
  }
  else if ( *((_DWORD *)this + 9) == a2 )
  {
    v2 = 1;
  }
  else if ( *((_DWORD *)this + 18) == a2 )
  {
    v2 = 2;
  }
  else if ( *((_DWORD *)this + 27) == a2 )
  {
    v2 = 3;
  }
  else if ( *((_DWORD *)this + 36) == a2 )
  {
    v2 = 4;
  }
  else if ( *((_DWORD *)this + 45) == a2 )
  {
    v2 = 5;
  }
  else if ( *((_DWORD *)this + 54) == a2 )
  {
    v2 = 6;
  }
  else if ( *((_DWORD *)this + 63) == a2 )
  {
    v2 = 7;
  }
  else if ( *((_DWORD *)this + 72) == a2 )
  {
    v2 = 8;
  }
  else if ( *((_DWORD *)this + 81) == a2 )
  {
    v2 = 9;
  }
  else if ( *((_DWORD *)this + 90) == a2 )
  {
    v2 = 10;
  }
  else if ( *((_DWORD *)this + 99) == a2 )
  {
    v2 = 11;
  }
  else if ( *((_DWORD *)this + 108) == a2 )
  {
    v2 = 12;
  }
  else if ( *((_DWORD *)this + 117) == a2 )
  {
    v2 = 13;
  }
  else if ( *((_DWORD *)this + 126) == a2 )
  {
    v2 = 14;
  }
  else
  {
    if ( *((_DWORD *)this + 135) != a2 )
      return 0;
    v2 = 15;
  }
  return *((_BYTE *)this + 36 * v2 + 28) != 0;
}


// ============================================================

// Address: 0x328d7e
// Original: _ZN14CStuckCarCheck20ClearStuckFlagForCarEi
// Demangled: CStuckCarCheck::ClearStuckFlagForCar(int)
int __fastcall CStuckCarCheck::ClearStuckFlagForCar(int this, int a2)
{
  if ( *(_DWORD *)this == a2 )
    *(_BYTE *)(this + 28) = 0;
  if ( *(_DWORD *)(this + 36) == a2 )
    *(_BYTE *)(this + 64) = 0;
  if ( *(_DWORD *)(this + 72) == a2 )
    *(_BYTE *)(this + 100) = 0;
  if ( *(_DWORD *)(this + 108) == a2 )
    *(_BYTE *)(this + 136) = 0;
  if ( *(_DWORD *)(this + 144) == a2 )
    *(_BYTE *)(this + 172) = 0;
  if ( *(_DWORD *)(this + 180) == a2 )
    *(_BYTE *)(this + 208) = 0;
  if ( *(_DWORD *)(this + 216) == a2 )
    *(_BYTE *)(this + 244) = 0;
  if ( *(_DWORD *)(this + 252) == a2 )
    *(_BYTE *)(this + 280) = 0;
  if ( *(_DWORD *)(this + 288) == a2 )
    *(_BYTE *)(this + 316) = 0;
  if ( *(_DWORD *)(this + 324) == a2 )
    *(_BYTE *)(this + 352) = 0;
  if ( *(_DWORD *)(this + 360) == a2 )
    *(_BYTE *)(this + 388) = 0;
  if ( *(_DWORD *)(this + 396) == a2 )
    *(_BYTE *)(this + 424) = 0;
  if ( *(_DWORD *)(this + 432) == a2 )
    *(_BYTE *)(this + 460) = 0;
  if ( *(_DWORD *)(this + 468) == a2 )
    *(_BYTE *)(this + 496) = 0;
  if ( *(_DWORD *)(this + 504) == a2 )
    *(_BYTE *)(this + 532) = 0;
  if ( *(_DWORD *)(this + 540) == a2 )
    *(_BYTE *)(this + 568) = 0;
  return this;
}


// ============================================================

// Address: 0x328e56
// Original: _ZN14CStuckCarCheck20IsCarInStuckCarArrayEi
// Demangled: CStuckCarCheck::IsCarInStuckCarArray(int)
bool __fastcall CStuckCarCheck::IsCarInStuckCarArray(CStuckCarCheck *this, int a2)
{
  int v2; // r2
  bool v3; // zf
  int v4; // r2
  bool v5; // zf
  int v6; // r2
  bool v7; // zf
  int v8; // r2
  bool v9; // zf
  int v10; // r2
  bool v11; // zf
  int v12; // r2
  bool v13; // zf
  int v14; // r2
  bool v15; // zf

  if ( *(_DWORD *)this == a2 )
    return 1;
  v2 = *((_DWORD *)this + 9);
  v3 = v2 == a2;
  if ( v2 != a2 )
    v3 = *((_DWORD *)this + 18) == a2;
  if ( v3 )
    return 1;
  v4 = *((_DWORD *)this + 27);
  v5 = v4 == a2;
  if ( v4 != a2 )
    v5 = *((_DWORD *)this + 36) == a2;
  if ( v5 )
    return 1;
  v6 = *((_DWORD *)this + 45);
  v7 = v6 == a2;
  if ( v6 != a2 )
    v7 = *((_DWORD *)this + 54) == a2;
  if ( v7 )
    return 1;
  v8 = *((_DWORD *)this + 63);
  v9 = v8 == a2;
  if ( v8 != a2 )
    v9 = *((_DWORD *)this + 72) == a2;
  if ( v9 )
    return 1;
  v10 = *((_DWORD *)this + 81);
  v11 = v10 == a2;
  if ( v10 != a2 )
    v11 = *((_DWORD *)this + 90) == a2;
  if ( v11 )
    return 1;
  v12 = *((_DWORD *)this + 99);
  v13 = v12 == a2;
  if ( v12 != a2 )
    v13 = *((_DWORD *)this + 108) == a2;
  if ( v13 )
    return 1;
  v14 = *((_DWORD *)this + 117);
  v15 = v14 == a2;
  if ( v14 != a2 )
    v15 = *((_DWORD *)this + 126) == a2;
  return v15 || *((_DWORD *)this + 135) == a2;
}


// ============================================================
