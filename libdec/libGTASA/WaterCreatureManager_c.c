
// Address: 0x199940
// Original: j__ZN22WaterCreatureManager_c4InitEv
// Demangled: WaterCreatureManager_c::Init(void)
// attributes: thunk
int __fastcall WaterCreatureManager_c::Init(WaterCreatureManager_c *this)
{
  return _ZN22WaterCreatureManager_c4InitEv(this);
}


// ============================================================

// Address: 0x19d53c
// Original: j__ZN22WaterCreatureManager_c4ExitEv
// Demangled: WaterCreatureManager_c::Exit(void)
// attributes: thunk
int __fastcall WaterCreatureManager_c::Exit(WaterCreatureManager_c *this)
{
  return _ZN22WaterCreatureManager_c4ExitEv(this);
}


// ============================================================

// Address: 0x19fbcc
// Original: j__ZN22WaterCreatureManager_c25TryToFreeUpWaterCreaturesEi
// Demangled: WaterCreatureManager_c::TryToFreeUpWaterCreatures(int)
// attributes: thunk
int __fastcall WaterCreatureManager_c::TryToFreeUpWaterCreatures(WaterCreatureManager_c *this, int a2)
{
  return _ZN22WaterCreatureManager_c25TryToFreeUpWaterCreaturesEi(this, a2);
}


// ============================================================

// Address: 0x1a1760
// Original: j__ZN22WaterCreatureManager_c6UpdateEf
// Demangled: WaterCreatureManager_c::Update(float)
// attributes: thunk
int __fastcall WaterCreatureManager_c::Update(WaterCreatureManager_c *this, float a2)
{
  return _ZN22WaterCreatureManager_c6UpdateEf(this, a2);
}


// ============================================================

// Address: 0x592b80
// Original: _ZN22WaterCreatureManager_c14TryToExitGroupEP15WaterCreature_c
// Demangled: WaterCreatureManager_c::TryToExitGroup(WaterCreature_c *)
_DWORD *__fastcall WaterCreatureManager_c::TryToExitGroup(WaterCreatureManager_c *this, WaterCreature_c *a2)
{
  int v2; // r12
  WaterCreature_c *v3; // r2
  _DWORD *result; // r0
  int v5; // lr
  WaterCreature_c *v6; // r3
  bool v7; // zf
  __int64 *v8; // r3
  int v9; // r2
  float32x2_t v10; // d16
  float v11; // s0
  int v12; // r1
  _DWORD *v13; // r3
  float32x2_t v14; // d17
  unsigned __int64 v15; // d3
  int v16; // r1

  v3 = (WaterCreature_c *)*((_DWORD *)a2 + 7);
  result = (_DWORD *)*((_DWORD *)this + 1667);
  v5 = 0;
  if ( !v3 )
    v3 = a2;
  while ( 1 )
  {
    v6 = (WaterCreature_c *)result;
    if ( !result )
      break;
    result = (_DWORD *)result[1];
    v7 = v3 == v6;
    if ( v3 != v6 )
      v7 = *((_DWORD *)v6 + 7) == (_DWORD)v3;
    if ( v7 )
      *(_DWORD *)(v2 + 4 * v5++) = v6;
  }
  if ( v5 >= 1 )
  {
    v8 = (__int64 *)(dword_951FBC + 48);
    if ( !dword_951FBC )
      v8 = &qword_951FAC;
    v9 = 0;
    v10.n64_u64[0] = *(__int64 *)((char *)v8 + 4);
    v11 = *(float *)v8;
    while ( 1 )
    {
      result = *(_DWORD **)(*(_DWORD *)(v2 + 4 * v9) + 8);
      v12 = result[5];
      v13 = (_DWORD *)(v12 + 48);
      if ( !v12 )
        v13 = result + 1;
      v14.n64_u64[0] = vsub_f32(*(float32x2_t *)(v13 + 1), v10).n64_u64[0];
      v15 = vmul_f32(v14, v14).n64_u64[0];
      if ( (float)((float)((float)((float)(*(float *)v13 - v11) * (float)(*(float *)v13 - v11)) + *(float *)&v15)
                 + *((float *)&v15 + 1)) <= 3600.0 )
        break;
      if ( ++v9 >= v5 )
      {
        for ( result = 0; result != (_DWORD *)v5; result = (_DWORD *)((char *)result + 1) )
        {
          v16 = *(_DWORD *)(v2 + 4 * (_DWORD)result);
          *(_BYTE *)(v16 + 13) = 1;
        }
        return result;
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x592c40
// Original: _ZN22WaterCreatureManager_cC2Ev
// Demangled: WaterCreatureManager_c::WaterCreatureManager_c(void)
void __fastcall WaterCreatureManager_c::WaterCreatureManager_c(WaterCreatureManager_c *this)
{
  int i; // r6
  int v3; // r0

  for ( i = 0; i != 6656; i += 52 )
  {
    ListItem_c::ListItem_c((WaterCreatureManager_c *)((char *)this + i));
    *(_DWORD *)(v3 + 8) = 0;
  }
  List_c::List_c((WaterCreatureManager_c *)((char *)this + 6656));
  List_c::List_c((WaterCreatureManager_c *)((char *)this + 6668));
}


// ============================================================

// Address: 0x592c78
// Original: _ZN22WaterCreatureManager_cD2Ev
// Demangled: WaterCreatureManager_c::~WaterCreatureManager_c()
void __fastcall WaterCreatureManager_c::~WaterCreatureManager_c(WaterCreatureManager_c *this)
{
  int i; // r5

  List_c::~List_c((WaterCreatureManager_c *)((char *)this + 6668));
  List_c::~List_c((WaterCreatureManager_c *)((char *)this + 6656));
  for ( i = 6604; i != -52; i -= 52 )
    ListItem_c::~ListItem_c((WaterCreatureManager_c *)((char *)this + i));
}


// ============================================================

// Address: 0x592ca6
// Original: _ZN22WaterCreatureManager_c4InitEv
// Demangled: WaterCreatureManager_c::Init(void)
int __fastcall WaterCreatureManager_c::Init(WaterCreatureManager_c *this)
{
  List_c *v2; // r5
  int i; // r6

  v2 = (WaterCreatureManager_c *)((char *)this + 6656);
  for ( i = 0; i != 6656; i += 52 )
    List_c::AddItem(v2, (WaterCreatureManager_c *)((char *)this + i));
  *((_DWORD *)this + 1670) = 0;
  return 1;
}


// ============================================================

// Address: 0x592cd8
// Original: _ZN22WaterCreatureManager_c4ExitEv
// Demangled: WaterCreatureManager_c::Exit(void)
int __fastcall WaterCreatureManager_c::Exit(WaterCreatureManager_c *this)
{
  int v2; // r5
  int v3; // r4
  CEntity *v4; // r1
  int v5; // r0

  v2 = *((_DWORD *)this + 1667);
  if ( v2 )
  {
    do
    {
      v3 = *(_DWORD *)(v2 + 4);
      List_c::RemoveItem((List_c *)dword_A15D5C, (ListItem_c *)v2);
      List_c::AddItem((List_c *)&unk_A15D50, (ListItem_c *)v2);
      CWorld::Remove(*(CWorld **)(v2 + 8), v4);
      v5 = *(_DWORD *)(v2 + 8);
      if ( v5 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(v5);
      *(_DWORD *)(v2 + 8) = 0;
      v2 = v3;
      --CObject::nNoTempObjects;
    }
    while ( v3 );
  }
  return sub_19CBF8((WaterCreatureManager_c *)((char *)this + 6656));
}


// ============================================================

// Address: 0x592d58
// Original: _ZN22WaterCreatureManager_c6UpdateEf
// Demangled: WaterCreatureManager_c::Update(float)
int __fastcall WaterCreatureManager_c::Update(WaterCreatureManager_c *this, float a2)
{
  int v4; // r5
  List_c *v5; // r9
  int v6; // r0
  int v7; // r0
  int v8; // s0
  float *v9; // r2
  float v10; // s0
  float v11; // s6
  float v12; // s2
  float v13; // s0
  float v14; // s10
  float v15; // s12
  int v16; // r0
  unsigned __int16 v17; // r0
  int v18; // r1
  int v19; // r1
  int v20; // r2
  int v21; // r3
  bool v22; // zf
  int v23; // r2
  float32x2_t *v24; // r3
  float32x2_t *v25; // r6
  float32x2_t v26; // d17
  unsigned __int64 v27; // d2
  __int16 **v28; // r0
  int v29; // r5
  int v30; // r6
  int NumItems; // r10
  WaterCreature_c *v32; // r5
  int i; // r6
  ListItem_c *v34; // r8
  int result; // r0
  int *v36; // r5
  int v37; // r6
  int v38; // r4
  int v39; // r6
  CEntity *v40; // r1
  int v41; // r0
  float *v42; // [sp+0h] [bp-60h]
  int v43; // [sp+14h] [bp-4Ch]
  float v44; // [sp+18h] [bp-48h] BYREF
  float v45; // [sp+1Ch] [bp-44h] BYREF
  float32x2_t v46; // [sp+20h] [bp-40h] BYREF
  float v47; // [sp+28h] [bp-38h]

  if ( *(unsigned __int8 *)(*(_DWORD *)(FindPlayerPed(0) + 1092) + 142) >= 0x33u )
  {
    v4 = CTimer::m_snTimeInMilliseconds;
    if ( CTimer::m_snTimeInMilliseconds - *((_DWORD *)this + 1670) > 1000 )
    {
      v5 = (WaterCreatureManager_c *)((char *)this + 6656);
      if ( List_c::GetNumItems((WaterCreatureManager_c *)((char *)this + 6656)) >= 1 )
      {
        *((_DWORD *)this + 1670) = v4;
        v6 = rand();
        v46.n64_f32[0] = (float)((float)((float)v6 * 4.6566e-10) + (float)((float)v6 * 4.6566e-10)) + -1.0;
        v7 = rand();
        v47 = 0.0;
        v46.n64_f32[1] = (float)((float)((float)v7 * 4.6566e-10) + (float)((float)v7 * 4.6566e-10)) + -1.0;
        CVector::Normalise((CVector *)&v46);
        v8 = rand();
        v9 = (float *)(dword_951FBC + 48);
        v10 = (float)((float)((float)v8 * 4.6566e-10) * 15.0) + 25.0;
        v11 = v10 * v47;
        v12 = v46.n64_f32[0] * v10;
        v13 = v46.n64_f32[1] * v10;
        v47 = v11;
        if ( !dword_951FBC )
          v9 = (float *)&qword_951FAC;
        v14 = v9[1];
        v15 = v9[2];
        v46.n64_f32[0] = *v9 + v12;
        v46.n64_f32[1] = v14 + v13;
        v47 = v15 + v11;
        if ( !CCamera::IsSphereVisible((CCamera *)&TheCamera, (const CVector *)&v46, 3.0)
          && CWaterLevel::GetWaterDepth((CWaterLevel *)&v46, (const CVector *)&v45, &v44, 0, v42) == 1
          && v45 > 4.5 )
        {
          v16 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0);
          if ( v16 > 79 )
          {
            if ( v16 > 89 )
            {
              v18 = 6;
              if ( v16 < 97 )
                v18 = 5;
              v43 = v18;
            }
            else
            {
              v17 = rand();
              v43 = (int)(float)((float)((float)v17 * 0.000015259) + (float)((float)v17 * 0.000015259)) + 3;
            }
          }
          else
          {
            v43 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 3.0);
          }
          v19 = *((_DWORD *)this + 1667);
          if ( v19 )
          {
            while ( 1 )
            {
              v20 = v19;
              v21 = *(unsigned __int8 *)(v19 + 12);
              v19 = *(_DWORD *)(v19 + 4);
              v22 = v43 == v21;
              if ( v43 == v21 )
                v22 = *(_DWORD *)(v20 + 28) == 0;
              if ( v22 )
              {
                v23 = *(_DWORD *)(v20 + 8);
                v24 = *(float32x2_t **)(v23 + 20);
                v25 = v24 + 6;
                if ( !v24 )
                  v25 = (float32x2_t *)(v23 + 4);
                v26.n64_u64[0] = vsub_f32(v46, (float32x2_t)v25->n64_u64[0]).n64_u64[0];
                v27 = vmul_f32(v26, v26).n64_u64[0];
                if ( (float)((float)(*(float *)&v27 + *((float *)&v27 + 1)) + 0.0) < (float)(*((float *)&WaterCreatureManager_c::ms_waterCreatureInfos
                                                                                             + 11 * v43
                                                                                             + 3)
                                                                                           * *((float *)&WaterCreatureManager_c::ms_waterCreatureInfos
                                                                                             + 11 * v43
                                                                                             + 3)) )
                  break;
              }
              if ( !v19 )
                goto LABEL_26;
            }
          }
          else
          {
LABEL_26:
            v28 = &(&WaterCreatureManager_c::ms_waterCreatureInfos)[11 * v43];
            v29 = *((unsigned __int8 *)v28 + 4);
            v30 = *((unsigned __int8 *)v28 + 5);
            NumItems = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * (float)(v30 - v29)) + v29;
            if ( List_c::GetNumItems((WaterCreatureManager_c *)((char *)this + 6656)) < NumItems )
              NumItems = List_c::GetNumItems((WaterCreatureManager_c *)((char *)this + 6656));
            if ( NumItems >= 1 )
            {
              v32 = 0;
              for ( i = 0; i < NumItems; ++i )
              {
                v34 = (ListItem_c *)List_c::RemoveHead(v5);
                if ( WaterCreature_c::Init(v34, v43, (CVector *)&v46, v32, v44, v45) )
                {
                  List_c::AddItem((WaterCreatureManager_c *)((char *)this + 6668), v34);
                }
                else
                {
                  List_c::AddItem(v5, v34);
                  NumItems = i;
                }
                if ( !v32 )
                  v32 = v34;
                v5 = (WaterCreatureManager_c *)((char *)this + 6656);
              }
            }
          }
        }
      }
    }
  }
  result = *((_DWORD *)this + 1667);
  if ( result )
  {
    v36 = (int *)((char *)this + 6668);
    do
    {
      v37 = *(_DWORD *)(result + 4);
      WaterCreature_c::Update((WaterCreature_c *)result, a2);
      result = v37;
    }
    while ( v37 );
    v38 = *v36;
    if ( *v36 )
    {
      do
      {
        result = *(unsigned __int8 *)(v38 + 13);
        v39 = *(_DWORD *)(v38 + 4);
        if ( *(_BYTE *)(v38 + 13) )
        {
          List_c::RemoveItem((List_c *)dword_A15D5C, (ListItem_c *)v38);
          List_c::AddItem((List_c *)&unk_A15D50, (ListItem_c *)v38);
          CWorld::Remove(*(CWorld **)(v38 + 8), v40);
          v41 = *(_DWORD *)(v38 + 8);
          if ( v41 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v41 + 4))(v41);
          *(_DWORD *)(v38 + 8) = 0;
          result = (unsigned __int16)CObject::nNoTempObjects-- - 1;
        }
        v38 = v39;
      }
      while ( v39 );
    }
  }
  return result;
}


// ============================================================

// Address: 0x5930f0
// Original: _ZN22WaterCreatureManager_c24GetRandomWaterCreatureIdEv
// Demangled: WaterCreatureManager_c::GetRandomWaterCreatureId(void)
int __fastcall WaterCreatureManager_c::GetRandomWaterCreatureId(WaterCreatureManager_c *this)
{
  int v1; // r1
  int result; // r0
  unsigned __int16 v3; // r0

  v1 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0);
  if ( v1 <= 79 )
    return (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 3.0);
  if ( v1 > 89 )
  {
    result = 6;
    if ( v1 < 97 )
      return 5;
  }
  else
  {
    v3 = rand();
    return (int)(float)((float)((float)v3 * 0.000015259) + (float)((float)v3 * 0.000015259)) + 3;
  }
  return result;
}


// ============================================================

// Address: 0x59318c
// Original: _ZN22WaterCreatureManager_c24CanAddWaterCreatureAtPosEi7CVector
// Demangled: WaterCreatureManager_c::CanAddWaterCreatureAtPos(int,CVector)
int __fastcall WaterCreatureManager_c::CanAddWaterCreatureAtPos(int a1, int a2, float a3, float a4)
{
  int v4; // r4
  int v7; // r2
  int v8; // r0
  bool v9; // zf
  int v10; // r0
  int v11; // r2
  float *v12; // r3

  v4 = *(_DWORD *)(a1 + 6668);
  if ( !v4 )
    return 1;
  while ( 1 )
  {
    v7 = v4;
    v8 = *(unsigned __int8 *)(v4 + 12);
    v4 = *(_DWORD *)(v4 + 4);
    v9 = v8 == a2;
    if ( v8 == a2 )
      v9 = *(_DWORD *)(v7 + 28) == 0;
    if ( v9 )
    {
      v10 = *(_DWORD *)(v7 + 8);
      v11 = *(_DWORD *)(v10 + 20);
      v12 = (float *)(v11 + 48);
      if ( !v11 )
        v12 = (float *)(v10 + 4);
      if ( (float)((float)((float)((float)(a3 - *v12) * (float)(a3 - *v12))
                         + (float)((float)(a4 - v12[1]) * (float)(a4 - v12[1])))
                 + 0.0) < (float)(*((float *)&WaterCreatureManager_c::ms_waterCreatureInfos + 11 * a2 + 3)
                                * *((float *)&WaterCreatureManager_c::ms_waterCreatureInfos + 11 * a2 + 3)) )
        break;
    }
    if ( !v4 )
      return 1;
  }
  return 0;
}


// ============================================================

// Address: 0x593224
// Original: _ZN22WaterCreatureManager_c25TryToFreeUpWaterCreaturesEi
// Demangled: WaterCreatureManager_c::TryToFreeUpWaterCreatures(int)
int __fastcall WaterCreatureManager_c::TryToFreeUpWaterCreatures(WaterCreatureManager_c *this, int a2)
{
  int v3; // r4
  int v4; // r5
  int v5; // r6
  CEntity *v6; // r1
  int v7; // r0

  v3 = *((_DWORD *)this + 1667);
  v4 = 0;
  do
  {
    if ( !v3 )
      break;
    v5 = v3;
    while ( 1 )
    {
      v3 = *(_DWORD *)(v5 + 4);
      if ( (*(_BYTE *)(*(_DWORD *)(v5 + 8) + 30) & 2) != 0 )
      {
        if ( *(_DWORD *)(v5 + 28) )
          break;
      }
      v5 = *(_DWORD *)(v5 + 4);
      if ( !v3 )
        return v4;
    }
    List_c::RemoveItem((List_c *)dword_A15D5C, (ListItem_c *)v5);
    List_c::AddItem((List_c *)&unk_A15D50, (ListItem_c *)v5);
    CWorld::Remove(*(CWorld **)(v5 + 8), v6);
    v7 = *(_DWORD *)(v5 + 8);
    if ( v7 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 4))(v7);
    ++v4;
    *(_DWORD *)(v5 + 8) = 0;
    --CObject::nNoTempObjects;
  }
  while ( v4 < a2 );
  return v4;
}


// ============================================================
