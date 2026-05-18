
// Address: 0x18dab0
// Original: j__ZN6CRopes8FindRopeEj
// Demangled: CRopes::FindRope(uint)
// attributes: thunk
int __fastcall CRopes::FindRope(CRopes *this, unsigned int a2)
{
  return _ZN6CRopes8FindRopeEj(this, a2);
}


// ============================================================

// Address: 0x18dd20
// Original: j__ZN6CRopes12RegisterRopeEjj7CVectorbhbP9CPhysicali
// Demangled: CRopes::RegisterRope(uint,uint,CVector,bool,uchar,bool,CPhysical *,int)
// attributes: thunk
int CRopes::RegisterRope()
{
  return _ZN6CRopes12RegisterRopeEjj7CVectorbhbP9CPhysicali();
}


// ============================================================

// Address: 0x18f444
// Original: j__ZN6CRopes6UpdateEv
// Demangled: CRopes::Update(void)
// attributes: thunk
int __fastcall CRopes::Update(CRopes *this)
{
  return _ZN6CRopes6UpdateEv(this);
}


// ============================================================

// Address: 0x18f8e0
// Original: j__ZN6CRopes18FindCoorsAlongRopeEjfP7CVectorS1_
// Demangled: CRopes::FindCoorsAlongRope(uint,float,CVector *,CVector *)
// attributes: thunk
int __fastcall CRopes::FindCoorsAlongRope(CRopes *this, unsigned int a2, float a3, CVector *a4, CVector *a5)
{
  return _ZN6CRopes18FindCoorsAlongRopeEjfP7CVectorS1_(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x192de8
// Original: j__ZN6CRopes15IsCarriedByRopeEP9CPhysical
// Demangled: CRopes::IsCarriedByRope(CPhysical *)
// attributes: thunk
int __fastcall CRopes::IsCarriedByRope(CRopes *this, CPhysical *a2)
{
  return _ZN6CRopes15IsCarriedByRopeEP9CPhysical(this, a2);
}


// ============================================================

// Address: 0x19401c
// Original: j__ZN6CRopes16FindPickUpHeightEP7CEntity
// Demangled: CRopes::FindPickUpHeight(CEntity *)
// attributes: thunk
int __fastcall CRopes::FindPickUpHeight(CRopes *this, CEntity *a2)
{
  return _ZN6CRopes16FindPickUpHeightEP7CEntity(this, a2);
}


// ============================================================

// Address: 0x1963c0
// Original: j__ZN6CRopes6RenderEv
// Demangled: CRopes::Render(void)
// attributes: thunk
int __fastcall CRopes::Render(CRopes *this)
{
  return _ZN6CRopes6RenderEv(this);
}


// ============================================================

// Address: 0x199934
// Original: j__ZN6CRopes20CreateRopeForSwatPedERK7CVector
// Demangled: CRopes::CreateRopeForSwatPed(CVector const&)
// attributes: thunk
int __fastcall CRopes::CreateRopeForSwatPed(CRopes *this, const CVector *a2)
{
  return _ZN6CRopes20CreateRopeForSwatPedERK7CVector(this, a2);
}


// ============================================================

// Address: 0x199e78
// Original: j__ZN6CRopes17SetSpeedOfTopNodeEj7CVector
// Demangled: CRopes::SetSpeedOfTopNode(uint,CVector)
// attributes: thunk
int CRopes::SetSpeedOfTopNode()
{
  return _ZN6CRopes17SetSpeedOfTopNodeEj7CVector();
}


// ============================================================

// Address: 0x19abd4
// Original: j__ZN6CRopes4InitEv
// Demangled: CRopes::Init(void)
// attributes: thunk
int __fastcall CRopes::Init(CRopes *this)
{
  return _ZN6CRopes4InitEv(this);
}


// ============================================================

// Address: 0x1a05cc
// Original: j__ZN6CRopes8ShutdownEv
// Demangled: CRopes::Shutdown(void)
// attributes: thunk
int __fastcall CRopes::Shutdown(CRopes *this)
{
  return _ZN6CRopes8ShutdownEv(this);
}


// ============================================================

// Address: 0x4126a0
// Original: _ZN6CRopes4InitEv
// Demangled: CRopes::Init(void)
void *__fastcall CRopes::Init(CRopes *this)
{
  void *result; // r0

  result = &CRopes::aRopes;
  byte_964185 = 0;
  byte_9644AD = 0;
  byte_9647D5 = 0;
  byte_9634E5 = 0;
  byte_9631BD = 0;
  byte_96380D = 0;
  byte_963B35 = 0;
  byte_963E5D = 0;
  CRopes::PlayerControlsCrane = 0;
  return result;
}


// ============================================================

// Address: 0x4126e0
// Original: _ZN6CRopes6UpdateEv
// Demangled: CRopes::Update(void)
int __fastcall CRopes::Update(CRopes *this)
{
  int result; // r0

  if ( byte_9631BD )
    CRope::Update((CRope *)&CRopes::aRopes);
  if ( byte_9634E5 )
    CRope::Update((CRope *)&unk_9631C0);
  if ( byte_96380D )
    CRope::Update((CRope *)&unk_9634E8);
  if ( byte_963B35 )
    CRope::Update((CRope *)&unk_963810);
  if ( byte_963E5D )
    CRope::Update((CRope *)&unk_963B38);
  if ( byte_964185 )
    CRope::Update((CRope *)&unk_963E60);
  if ( byte_9644AD )
    CRope::Update((CRope *)&unk_964188);
  result = (unsigned __int8)byte_9647D5;
  if ( byte_9647D5 )
    return CRope::Update((CRope *)&unk_9644B0);
  return result;
}


// ============================================================

// Address: 0x413d5c
// Original: _ZN6CRopes6RenderEv
// Demangled: CRopes::Render(void)
int __fastcall CRopes::Render(CRopes *this)
{
  int result; // r0

  if ( byte_9631BD )
    CRope::Render((CRope *)&CRopes::aRopes);
  if ( byte_9634E5 )
    CRope::Render((CRope *)&unk_9631C0);
  if ( byte_96380D )
    CRope::Render((CRope *)&unk_9634E8);
  if ( byte_963B35 )
    CRope::Render((CRope *)&unk_963810);
  if ( byte_963E5D )
    CRope::Render((CRope *)&unk_963B38);
  if ( byte_964185 )
    CRope::Render((CRope *)&unk_963E60);
  if ( byte_9644AD )
    CRope::Render((CRope *)&unk_964188);
  result = (unsigned __int8)byte_9647D5;
  if ( byte_9647D5 )
    return CRope::Render((CRope *)&unk_9644B0);
  return result;
}


// ============================================================

// Address: 0x413ff0
// Original: _ZN6CRopes8ShutdownEv
// Demangled: CRopes::Shutdown(void)
CWorld *__fastcall CRopes::Shutdown(CRopes *this)
{
  int v1; // r8
  int v2; // r11
  CWorld *result; // r0
  char *v4; // r0
  int v5; // r1
  char *v6; // r0
  int v7; // r1
  __int64 v8; // r2
  CEntity *v9; // r1
  CWorld **v10; // r9

  v1 = 0;
  v2 = 0;
  do
  {
    result = (CWorld *)((char *)&CRopes::aRopes + v1);
    if ( *((_BYTE *)&CRopes::aRopes + v1 + 805) )
    {
      *((_BYTE *)result + 805) = 0;
      v4 = (char *)&CRopes::aRopes + v1;
      v5 = *(_DWORD *)((char *)&CRopes::aRopes + v1 + 792);
      if ( v5 )
      {
        *(_DWORD *)(v5 + 68) &= ~0x2000000u;
        *(_DWORD *)(*((_DWORD *)v4 + 198) + 68) &= ~0x80000000;
        *((_DWORD *)v4 + 198) = 0;
        v6 = (char *)&CRopes::aRopes + v1;
        v7 = *(_DWORD *)((char *)&CRopes::aRopes + v1 + 788);
        v8 = *(_QWORD *)(v7 + 28);
        LODWORD(v8) = v8 | 1;
        *(_QWORD *)(v7 + 28) = v8;
        v9 = (CEntity *)&off_3C;
        *((_BYTE *)&CRopes::aRopes + v1 + 806) = 60;
      }
      else
      {
        v9 = (CEntity *)&CRopes::aRopes;
        v6 = (char *)&CRopes::aRopes + 808 * v2;
      }
      v10 = (CWorld **)(v6 + 788);
      result = (CWorld *)*((_DWORD *)v6 + 197);
      if ( result )
      {
        CWorld::Remove(result, v9);
        result = *v10;
        if ( *v10 )
          result = (CWorld *)(*(int (__fastcall **)(CWorld *))(*(_DWORD *)result + 4))(result);
        *v10 = 0;
      }
    }
    v1 += 808;
    ++v2;
  }
  while ( v1 != 6464 );
  return result;
}


// ============================================================

// Address: 0x41411c
// Original: _ZN6CRopes12RegisterRopeEjj7CVectorbhbP9CPhysicali
// Demangled: CRopes::RegisterRope(uint,uint,CVector,bool,uchar,bool,CPhysical *,int)
int __fastcall CRopes::RegisterRope(
        int a1,
        unsigned __int8 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        char a7,
        char a8,
        CEntity *a9,
        int a10)
{
  int v10; // r9
  char *v11; // r0
  _DWORD *v12; // r5
  char v13; // r4
  char v14; // r6
  int v15; // r4
  int v16; // r4
  int v18; // r6
  int v19; // r5
  bool v20; // zf
  int v21; // r6
  int v22; // r5
  int v23; // r8
  int v24; // r6
  int v25; // r11
  unsigned __int8 v26; // r8
  char v27; // r11
  int v28; // r8
  char *v29; // r11
  char *v30; // r8
  char v31; // r2
  int *v32; // r12
  float v33; // s0
  int v34; // r5
  char *v35; // r3
  float v36; // s0
  float v37; // s2
  char *v38; // r0
  float *v39; // r0
  char *v40; // r0
  float *v41; // r0
  float v42; // s0
  float *v43; // r1
  int v44; // r2
  int v45; // r3
  int v46; // r6
  char *v47; // r5
  int v48; // r6
  float *v49; // r1
  int v50; // r2
  float v51; // s2
  float v52; // s6
  float i; // s0
  float *v54; // r5
  int v55; // [sp+4h] [bp-3Ch]
  int v56; // [sp+8h] [bp-38h]
  _BOOL4 v57; // [sp+10h] [bp-30h]
  int v58; // [sp+14h] [bp-2Ch]
  int v59; // [sp+14h] [bp-2Ch]
  int v60; // [sp+20h] [bp-20h]

  if ( dword_963198 == a1 && byte_9631BD )
  {
    LOWORD(v10) = 0;
    goto LABEL_24;
  }
  if ( dword_9634C0 == a1 && byte_9634E5 )
  {
    LOWORD(v10) = 1;
    goto LABEL_24;
  }
  if ( dword_9637E8 == a1 && byte_96380D )
  {
    LOWORD(v10) = 2;
    goto LABEL_24;
  }
  if ( dword_963B10 == a1 && byte_963B35 )
  {
    LOWORD(v10) = 3;
    goto LABEL_24;
  }
  if ( dword_963E38 == a1 && byte_963E5D )
  {
    LOWORD(v10) = 4;
    goto LABEL_24;
  }
  if ( dword_964160 == a1 && byte_964185 )
  {
    LOWORD(v10) = 5;
    goto LABEL_24;
  }
  if ( dword_964488 == a1 && byte_9644AD )
  {
    LOWORD(v10) = 6;
LABEL_24:
    v11 = (char *)&CRopes::aRopes + 808 * (__int16)v10;
    *(_DWORD *)v11 = a3;
    *((_DWORD *)v11 + 1) = a4;
    *((_DWORD *)v11 + 2) = a5;
    v12 = v11;
    *((_DWORD *)v11 + 96) = 0;
    *((_DWORD *)v11 + 97) = 0;
    *((_DWORD *)v11 + 98) = 0;
    v13 = v11[807];
    v11[804] = a7;
    v14 = v13 | 1;
    v15 = -1;
    v11[807] = v14;
    do
    {
      *v12 = a3;
      v12[1] = a4;
      v12[2] = a5;
      ++v15;
      v12[96] = 0;
      v12[97] = 0;
      v12[98] = 0;
      v12 += 3;
    }
    while ( v15 < (unsigned __int8)v11[804] );
    goto LABEL_26;
  }
  v10 = 7;
  if ( dword_9647B0 == a1 && byte_9647D5 )
    goto LABEL_24;
  v16 = 0;
  v18 = (unsigned __int8)byte_9631BD;
  v57 = byte_9631BD == 0 || byte_9634E5 == 0;
  if ( byte_9631BD )
    v18 = 1;
  v19 = 0;
  if ( byte_9631BD != 0 && byte_9634E5 != 0 )
    v18 = 2;
  v58 = v18;
  if ( !byte_96380D )
    v19 = 1;
  v21 = v57 | v19;
  v20 = (v57 | v19) == 0;
  v22 = v58;
  v56 = v21;
  if ( v20 )
    v22 = 3;
  v23 = v21 | (byte_963B35 == 0);
  v24 = v22;
  v55 = v23;
  if ( !v23 )
    v24 = 4;
  v25 = v23 | (byte_963E5D == 0);
  v59 = v25;
  if ( !v25 )
    v24 = 5;
  v26 = (byte_964185 == 0) | v25;
  v27 = 0;
  v60 = v26 & 1;
  if ( (v26 & 1) == 0 )
    v24 = 6;
  if ( !byte_9644AD )
    v27 = 1;
  v28 = (v26 | (unsigned __int8)v27) & 1;
  if ( v28 )
    v10 = v24;
  v29 = &byte_9634E5;
  if ( !byte_9631BD )
    v29 = &byte_9631BD;
  if ( !v57 )
    v29 = &byte_96380D;
  if ( !v56 )
    v29 = &byte_963B35;
  if ( !v55 )
    v29 = &byte_963E5D;
  if ( !v59 )
    v29 = &byte_964185;
  if ( !v60 )
    v29 = &byte_9644AD;
  if ( v28 || (v29 = &byte_9647D5, !byte_9647D5) )
  {
    v30 = (char *)&CRopes::aRopes + 808 * v10;
    *(_DWORD *)v30 = a3;
    *((_DWORD *)v30 + 96) = 0;
    *((_DWORD *)v30 + 97) = 0;
    *((_DWORD *)v30 + 98) = 0;
    v31 = v30[807];
    v30[804] = a7;
    *((_DWORD *)v30 + 192) = a1;
    *((_DWORD *)v30 + 193) = 0;
    *((_DWORD *)v30 + 197) = 0;
    *((_DWORD *)v30 + 198) = 0;
    v30[807] = v31 & 0xF8 | (4 * a8) | 1;
    *((_DWORD *)v30 + 2) = a5;
    *((_DWORD *)v30 + 1) = a4;
    v32 = (int *)(v30 + 4);
    if ( a9 && (*((_BYTE *)a9 + 58) & 7) == 2 )
      v33 = 0.9;
    else
      v33 = 0.5;
    v34 = a6;
    v35 = (char *)&CRopes::aRopes + 808 * v10;
    *((_DWORD *)v35 + 196) = a9;
    v35[806] = 0;
    *((float *)v35 + 199) = v33;
    *v29 = a2;
    if ( a9 )
    {
      CEntity::RegisterReference(a9, (CEntity **)v35 + 196);
      a2 = *v29;
      v32 = (int *)(v30 + 4);
    }
    if ( a6 )
      v34 = CTimer::m_snTimeInMilliseconds + a10;
    *((_DWORD *)&CRopes::aRopes + 202 * v10 + 200) = v34;
    if ( (unsigned int)a2 - 5 >= 3 )
    {
      if ( a2 == 3 )
      {
        v36 = 0.32258;
        v40 = (char *)&CRopes::aRopes + 808 * v10;
        *((_DWORD *)v40 + 194) = 1092616192;
        *((_DWORD *)v40 + 195) = 1051011402;
        v39 = (float *)(v40 + 780);
        goto LABEL_81;
      }
      if ( a2 == 4 )
      {
        v36 = 1.6129;
        v38 = (char *)&CRopes::aRopes + 808 * v10;
        *((_DWORD *)v38 + 194) = 1112014848;
        *((_DWORD *)v38 + 195) = 1070494621;
        v39 = (float *)(v38 + 780);
        goto LABEL_78;
      }
      v37 = 20.0;
      v36 = 0.64516;
    }
    else
    {
      v36 = 2.1935;
      v37 = 68.0;
    }
    v41 = (float *)((char *)&CRopes::aRopes + 808 * v10);
    v41[194] = v37;
    v41[195] = v36;
    v39 = v41 + 195;
    if ( (a2 & 0xFC) == 4 )
    {
LABEL_78:
      v42 = *((float *)v30 + 2) - v36;
      v43 = (float *)((char *)&CRopes::aRopes + 808 * v10);
      v44 = *v32;
      v45 = *(_DWORD *)v43;
      v46 = 0;
      v43[5] = v42;
      *((_DWORD *)v43 + 3) = v45;
      *((_DWORD *)v43 + 4) = v44;
      do
      {
        v47 = (char *)&v43[v46];
        v46 += 3;
        v42 = v42 - *v39;
        *((_DWORD *)v47 + 6) = v45;
        *((_DWORD *)v47 + 7) = v44;
        *((float *)v47 + 8) = v42;
      }
      while ( v46 != 90 );
LABEL_86:
      v11 = (char *)&CRopes::aRopes + 808 * v10;
LABEL_26:
      CRope::CreateHookObjectForRope((CRope *)v11);
      return 1;
    }
LABEL_81:
    v48 = 0;
    v49 = (float *)((char *)&CRopes::aRopes + 808 * v10);
    v50 = 1;
    v51 = *v49;
LABEL_84:
    v51 = v36 + v51;
    v52 = v49[v48 + 1] + 0.0;
    for ( i = v49[v48 + 2] + 0.0; ; i = v49[v48 + 2] )
    {
      v54 = &v49[v48];
      v54[3] = v51;
      v54[4] = v52;
      v54[5] = i;
      v54[99] = 0.0;
      v54[100] = 0.0;
      v54[101] = 0.0;
      if ( v48 == 90 )
        break;
      ++v50;
      v36 = *v39;
      v48 += 3;
      if ( v50 << 31 )
        goto LABEL_84;
      v51 = v51 - v36;
      v52 = v49[v48 + 1];
    }
    goto LABEL_86;
  }
  return v16;
}


// ============================================================

// Address: 0x414a4c
// Original: _ZN6CRopes17SetSpeedOfTopNodeEj7CVector
// Demangled: CRopes::SetSpeedOfTopNode(uint,CVector)
char *__fastcall CRopes::SetSpeedOfTopNode(char *result, int a2, int a3, int a4)
{
  __int16 v4; // r12
  _DWORD *v5; // r0

  if ( byte_9631BD && (char *)dword_963198 == result )
  {
    v4 = 0;
LABEL_25:
    v5 = (_DWORD *)((char *)&CRopes::aRopes + 808 * v4 + 384);
    *v5 = a2;
    v5[1] = a3;
    v5[2] = a4;
    return (char *)&CRopes::aRopes + 808 * v4 + 396;
  }
  if ( byte_9634E5 && (char *)dword_9634C0 == result )
  {
    v4 = 1;
    goto LABEL_25;
  }
  if ( byte_96380D && (char *)dword_9637E8 == result )
  {
    v4 = 2;
    goto LABEL_25;
  }
  if ( byte_963B35 && (char *)dword_963B10 == result )
  {
    v4 = 3;
    goto LABEL_25;
  }
  if ( byte_963E5D && (char *)dword_963E38 == result )
  {
    v4 = 4;
    goto LABEL_25;
  }
  if ( byte_964185 && (char *)dword_964160 == result )
  {
    v4 = 5;
    goto LABEL_25;
  }
  if ( byte_9644AD && (char *)dword_964488 == result )
  {
    v4 = 6;
    goto LABEL_25;
  }
  if ( byte_9647D5 && (char *)dword_9647B0 == result )
  {
    v4 = 7;
    goto LABEL_25;
  }
  return result;
}


// ============================================================

// Address: 0x414bb4
// Original: _ZN6CRopes18FindCoorsAlongRopeEjfP7CVectorS1_
// Demangled: CRopes::FindCoorsAlongRope(uint,float,CVector *,CVector *)
int __fastcall CRopes::FindCoorsAlongRope(int a1, unsigned __int32 a2, float *a3, int a4)
{
  float32x2_t v4; // d0
  float32x2_t v5; // d2
  float32x2_t v6; // d3
  __int16 v7; // lr
  int v8; // r12
  float v9; // s0
  int v10; // r1
  float v11; // s0
  float *v12; // r0
  float v13; // s4
  float v14; // s6
  float v15; // s0
  char *v16; // r0
  __int64 v17; // d16

  if ( byte_9631BD && dword_963198 == a1 )
  {
    v7 = 0;
  }
  else if ( byte_9634E5 && dword_9634C0 == a1 )
  {
    v7 = 1;
  }
  else if ( byte_96380D && dword_9637E8 == a1 )
  {
    v7 = 2;
  }
  else if ( byte_963B35 && dword_963B10 == a1 )
  {
    v7 = 3;
  }
  else if ( byte_963E5D && dword_963E38 == a1 )
  {
    v7 = 4;
  }
  else if ( byte_964185 && dword_964160 == a1 )
  {
    v7 = 5;
  }
  else if ( byte_9644AD && dword_964488 == a1 )
  {
    v7 = 6;
  }
  else
  {
    v8 = 0;
    if ( !byte_9647D5 || dword_9647B0 != a1 )
      return v8;
    v7 = 7;
  }
  v5.n64_u32[0] = 0;
  v4.n64_u32[0] = a2;
  v6.n64_u32[0] = 1065336439;
  v9 = vmin_f32(vmax_f32(v4, v5), v6).n64_f32[0] * 31.0;
  v10 = (int)v9;
  v11 = v9 - (float)(int)v9;
  v12 = (float *)((char *)&CRopes::aRopes + 808 * v7 + 12 * v10);
  v13 = (float)((float)(1.0 - v11) * *v12) + (float)(v11 * v12[3]);
  v14 = (float)((float)(1.0 - v11) * v12[1]) + (float)(v11 * v12[4]);
  v15 = (float)((float)(1.0 - v11) * v12[2]) + (float)(v11 * v12[5]);
  *a3 = v13;
  a3[1] = v14;
  a3[2] = v15;
  if ( a4 )
  {
    v16 = (char *)&CRopes::aRopes + 808 * v7 + 12 * v10 + 12;
    v17 = *((_QWORD *)v16 + 48);
    *(_DWORD *)(a4 + 8) = *((_DWORD *)v16 + 98);
    *(_QWORD *)a4 = v17;
  }
  return 1;
}


// ============================================================

// Address: 0x414dac
// Original: _ZN6CRopes15IsCarriedByRopeEP9CPhysical
// Demangled: CRopes::IsCarriedByRope(CPhysical *)
bool __fastcall CRopes::IsCarriedByRope(CRopes *this, CPhysical *a2)
{
  if ( !this )
    return 0;
  if ( byte_9631BD && (CRopes *)dword_9631B0 == this
    || byte_9634E5 && (CRopes *)dword_9634D8 == this
    || byte_96380D && (CRopes *)dword_963800 == this
    || byte_963B35 && (CRopes *)dword_963B28 == this
    || byte_963E5D && (CRopes *)dword_963E50 == this
    || byte_964185 && (CRopes *)dword_964178 == this
    || byte_9644AD && (CRopes *)dword_9644A0 == this )
  {
    return 1;
  }
  return byte_9647D5 != 0 && dword_9647C8 == (_DWORD)this;
}


// ============================================================

// Address: 0x414e94
// Original: _ZN6CRopes16FindPickUpHeightEP7CEntity
// Demangled: CRopes::FindPickUpHeight(CEntity *)
int __fastcall CRopes::FindPickUpHeight(CRopes *this, CEntity *a2)
{
  return *(_DWORD *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*((__int16 *)this + 19)]) + 44) + 20);
}


// ============================================================

// Address: 0x414f38
// Original: _ZN6CRopes8FindRopeEj
// Demangled: CRopes::FindRope(uint)
int __fastcall CRopes::FindRope(CRopes *this, unsigned int a2)
{
  int result; // r0
  bool v3; // zf

  if ( byte_9631BD && (CRopes *)dword_963198 == this )
    return 0;
  if ( byte_9634E5 && (CRopes *)dword_9634C0 == this )
    return 1;
  if ( byte_96380D && (CRopes *)dword_9637E8 == this )
    return 2;
  if ( byte_963B35 && (CRopes *)dword_963B10 == this )
    return 3;
  if ( byte_963E5D && (CRopes *)dword_963E38 == this )
    return 4;
  if ( byte_964185 && (CRopes *)dword_964160 == this )
    return 5;
  if ( byte_9644AD && (CRopes *)dword_964488 == this )
    return 6;
  v3 = dword_9647B0 == (_DWORD)this;
  result = -1;
  if ( v3 )
    result = 7;
  if ( !byte_9647D5 )
    return -1;
  return result;
}


// ============================================================

// Address: 0x41513c
// Original: _ZN6CRopes20CreateRopeForSwatPedERK7CVector
// Demangled: CRopes::CreateRopeForSwatPed(CVector const&)
int __fastcall CRopes::CreateRopeForSwatPed(CRopes *this, const CVector *a2)
{
  int v2; // r4

  v2 = dword_9647DC + 100;
  if ( CRopes::RegisterRope() < 0 )
    return -1;
  dword_9647DC = (unsigned __int8)(dword_9647DC + 1);
  return v2;
}


// ============================================================
