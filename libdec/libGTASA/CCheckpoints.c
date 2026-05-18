
// Address: 0x18ca58
// Original: j__ZN12CCheckpoints10SetHeadingEjf
// Demangled: CCheckpoints::SetHeading(uint,float)
// attributes: thunk
int __fastcall CCheckpoints::SetHeading(CCheckpoints *this, unsigned int a2, float a3)
{
  return _ZN12CCheckpoints10SetHeadingEjf(this, a2, a3);
}


// ============================================================

// Address: 0x192db8
// Original: j__ZN12CCheckpoints6UpdateEv
// Demangled: CCheckpoints::Update(void)
// attributes: thunk
int __fastcall CCheckpoints::Update(CCheckpoints *this)
{
  return _ZN12CCheckpoints6UpdateEv(this);
}


// ============================================================

// Address: 0x1954a0
// Original: j__ZN12CCheckpoints11PlaceMarkerEjtR7CVectorS1_fhhhhtfs
// Demangled: CCheckpoints::PlaceMarker(uint,ushort,CVector &,CVector &,float,uchar,uchar,uchar,uchar,ushort,float,short)
// attributes: thunk
int __fastcall CCheckpoints::PlaceMarker(
        CCheckpoints *this,
        unsigned int a2,
        unsigned __int16 a3,
        CVector *a4,
        CVector *a5,
        float a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        unsigned __int8 a9,
        unsigned __int8 a10,
        float a11,
        float a12,
        __int16 a13)
{
  return _ZN12CCheckpoints11PlaceMarkerEjtR7CVectorS1_fhhhhtfs(this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
}


// ============================================================

// Address: 0x19db70
// Original: j__ZN12CCheckpoints8DeleteCPEjt
// Demangled: CCheckpoints::DeleteCP(uint,ushort)
// attributes: thunk
int __fastcall CCheckpoints::DeleteCP(CCheckpoints *this, unsigned int a2, unsigned __int16 a3)
{
  return _ZN12CCheckpoints8DeleteCPEjt(this, a2, a3);
}


// ============================================================

// Address: 0x1a0238
// Original: j__ZN12CCheckpoints9UpdatePosEjR7CVector
// Demangled: CCheckpoints::UpdatePos(uint,CVector &)
// attributes: thunk
int __fastcall CCheckpoints::UpdatePos(CCheckpoints *this, unsigned int a2, CVector *a3)
{
  return _ZN12CCheckpoints9UpdatePosEjR7CVector(this, a2, a3);
}


// ============================================================

// Address: 0x5bfd00
// Original: _ZN12CCheckpoints4InitEv
// Demangled: CCheckpoints::Init(void)
int *__fastcall CCheckpoints::Init(CCheckpoints *this)
{
  int v1; // r5
  __int16 *v2; // r6
  __int16 *v3; // r2
  int *result; // r0

  v1 = 0;
  do
  {
    v2 = &CCheckpoints::m_aCheckPtArray[v1];
    CCheckpoints::m_aCheckPtArray[v1] = 257;
    v3 = &CCheckpoints::m_aCheckPtArray[v1 + 20];
    *((_BYTE *)v2 + 2) = 0;
    v1 += 28;
    *((_DWORD *)v2 + 1) = 0;
    *((_DWORD *)v2 + 2) = -1;
    v2[6] = 1024;
    v2[7] = 5;
    *((_DWORD *)v2 + 8) = 0;
    *((_DWORD *)v2 + 9) = 0;
    *((_BYTE *)v2 + 3) = 1;
    *(_QWORD *)v3 = 0x3F8000003E800000LL;
    *((_QWORD *)v3 + 1) = 0LL;
    *((_QWORD *)v2 + 2) = 0LL;
    *((_QWORD *)v2 + 3) = 0LL;
  }
  while ( v1 != 896 );
  result = &CCheckpoints::NumActiveCPts;
  CCheckpoints::NumActiveCPts = 0;
  return result;
}


// ============================================================

// Address: 0x5c06b4
// Original: _ZN12CCheckpoints6UpdateEv
// Demangled: CCheckpoints::Update(void)
char *__fastcall CCheckpoints::Update(CCheckpoints *this)
{
  int i; // r8
  char *result; // r0
  float v3; // s0
  int v4; // r2
  bool v5; // zf
  float *v6; // r1
  float v7; // s0
  float *v8; // r0
  float v9; // s2
  float v10; // s4
  float v11; // s0
  float v12; // s0
  int v13; // r2
  int *v14; // r1
  float v15; // s0
  float v16; // s0
  float v17; // s2
  float v18; // s6
  float v19; // s8
  float v20; // s4
  float v21; // s12
  float v22; // s10
  float v23; // s0
  int v24; // r2
  int *v25; // r1
  float v26; // s0
  float v27; // s0
  float v28; // s2
  float v29; // s0
  __int16 *v30; // r0
  float v31; // s0
  float v32; // [sp+34h] [bp-5Ch] BYREF
  float v33; // [sp+38h] [bp-58h]
  float v34; // [sp+3Ch] [bp-54h]

  FindPlayerCoors((int)&v32);
  for ( i = 0; i != 896; i += 28 )
  {
    result = (char *)(unsigned __int16)CCheckpoints::m_aCheckPtArray[i];
    if ( result == &byte_5 )
    {
      v3 = *(float *)&CCheckpoints::m_aCheckPtArray[i + 26];
      if ( v3 > 0.5 && HIBYTE(CCheckpoints::m_aCheckPtArray[i + 1]) )
        HIBYTE(CCheckpoints::m_aCheckPtArray[i + 1]) = 0;
      v4 = HIBYTE(CCheckpoints::m_aCheckPtArray[i + 1]);
      if ( v3 < -0.5 )
      {
        v5 = v4 == 0;
        v4 = 1;
        if ( v5 )
        {
          HIBYTE(CCheckpoints::m_aCheckPtArray[i + 1]) = 1;
          v4 = 1;
        }
      }
      v6 = (float *)sub_5C09F0;
      if ( v4 )
        v6 = (float *)&dword_5C09F4;
      v7 = *v6;
      *(float *)&CCheckpoints::m_aCheckPtArray[i + 26] = *v6;
      v8 = (float *)&CCheckpoints::m_aCheckPtArray[i];
      v9 = *(float *)&CCheckpoints::m_aCheckPtArray[i + 14] + v7;
      v10 = v7 + *(float *)&CCheckpoints::m_aCheckPtArray[i + 16];
      v11 = v7 + *(float *)&CCheckpoints::m_aCheckPtArray[i + 18];
      v8[7] = v9;
      v8[8] = v10;
      v8[9] = v11;
      CVector::Normalise((CVector *)&CCheckpoints::m_aCheckPtArray[i + 14]);
      result = (char *)(unsigned __int16)CCheckpoints::m_aCheckPtArray[i];
    }
    if ( result == byte_8 )
    {
      v16 = v32;
      v17 = v33;
      v18 = *(float *)&CCheckpoints::m_aCheckPtArray[i + 8];
      v19 = *(float *)&CCheckpoints::m_aCheckPtArray[i + 10];
      v20 = *(float *)&CCheckpoints::m_aCheckPtArray[i + 22];
    }
    else
    {
      if ( result != &byte_7 )
      {
        if ( result == byte_6 )
        {
          result = (char *)&CCheckpoints::m_aCheckPtArray[i];
          v12 = *(float *)&CCheckpoints::m_aCheckPtArray[i + 26];
          if ( v12 > 0.75 && HIBYTE(CCheckpoints::m_aCheckPtArray[i + 1]) )
            HIBYTE(CCheckpoints::m_aCheckPtArray[i + 1]) = 0;
          v13 = HIBYTE(CCheckpoints::m_aCheckPtArray[i + 1]);
          if ( v12 < 0.0 )
          {
            v5 = v13 == 0;
            v13 = 1;
            if ( v5 )
            {
              HIBYTE(CCheckpoints::m_aCheckPtArray[i + 1]) = 1;
              v13 = 1;
            }
          }
          v14 = dword_5C0A3C;
          if ( v13 )
            v14 = &dword_5C0A3C[1];
          v15 = v12 + *(float *)v14;
          *((float *)result + 13) = v15;
          if ( v15 < 0.0 )
          {
            result = (char *)CCheckpoints::m_aCheckPtArray;
            CCheckpoints::m_aCheckPtArray[i] = 257;
          }
        }
        continue;
      }
      v16 = v32;
      v17 = v33;
      v18 = *(float *)&CCheckpoints::m_aCheckPtArray[i + 8];
      v19 = *(float *)&CCheckpoints::m_aCheckPtArray[i + 10];
      v20 = *(float *)&CCheckpoints::m_aCheckPtArray[i + 22];
      v21 = fabsf(v32 - v18);
      v22 = fabsf(v33 - v19);
      if ( (float)((float)(v21 * v21) + (float)(v22 * v22)) > (float)(v20 * v20) )
      {
        v23 = *(float *)&CCheckpoints::m_aCheckPtArray[i + 26];
        if ( v23 > 0.2 && HIBYTE(CCheckpoints::m_aCheckPtArray[i + 1]) )
          HIBYTE(CCheckpoints::m_aCheckPtArray[i + 1]) = 0;
        v24 = HIBYTE(CCheckpoints::m_aCheckPtArray[i + 1]);
        if ( v23 < -0.2 )
        {
          v5 = v24 == 0;
          v24 = 1;
          if ( v5 )
          {
            HIBYTE(CCheckpoints::m_aCheckPtArray[i + 1]) = 1;
            v24 = 1;
          }
        }
        v25 = dword_5C0A24;
        if ( v24 )
          v25 = &dword_5C0A24[1];
        v26 = v23 + *(float *)v25;
        *(float *)&CCheckpoints::m_aCheckPtArray[i + 26] = v26;
        result = (char *)&CCheckpoints::m_aCheckPtArray[i];
        v27 = *(float *)&CCheckpoints::m_aCheckPtArray[i + 12] + v26;
        goto LABEL_41;
      }
      CCheckpoints::m_aCheckPtArray[i] = 8;
      *(_DWORD *)&CCheckpoints::m_aCheckPtArray[i + 26] = -1110651699;
    }
    v28 = fabsf(v17 - v19);
    v29 = fabsf(v16 - v18);
    if ( (float)((float)(v29 * v29) + (float)(v28 * v28)) > (float)(v20 * v20) )
    {
      CCheckpoints::m_aCheckPtArray[i] = 7;
      v30 = &CCheckpoints::m_aCheckPtArray[i];
      *((_BYTE *)v30 + 3) = 1;
      *((_DWORD *)v30 + 13) = 1017370378;
    }
    result = (char *)&CCheckpoints::m_aCheckPtArray[i];
    v31 = *(float *)&CCheckpoints::m_aCheckPtArray[i + 12];
    if ( v31 > (float)(v34 + -0.75) )
    {
      v27 = v31 + *(float *)&CCheckpoints::m_aCheckPtArray[i + 26];
LABEL_41:
      *((float *)result + 6) = v27;
      continue;
    }
  }
  return result;
}


// ============================================================

// Address: 0x5c14d8
// Original: _ZN12CCheckpoints6RenderEv
// Demangled: CCheckpoints::Render(void)
int __fastcall CCheckpoints::Render(CCheckpoints *this)
{
  int i; // r4

  for ( i = 0; i != 896; i += 28 )
  {
    if ( LOBYTE(CCheckpoints::m_aCheckPtArray[i + 1]) )
      CCheckpoint::Render((CCheckpoint *)&CCheckpoints::m_aCheckPtArray[i]);
  }
  return sub_192888();
}


// ============================================================

// Address: 0x5c42b0
// Original: _ZN12CCheckpoints8ShutdownEv
// Demangled: CCheckpoints::Shutdown(void)
void __fastcall CCheckpoints::Shutdown(CCheckpoints *this)
{
  ;
}


// ============================================================

// Address: 0x5c42b4
// Original: _ZN12CCheckpoints9UpdatePosEjR7CVector
// Demangled: CCheckpoints::UpdatePos(uint,CVector &)
int __fastcall CCheckpoints::UpdatePos(int this, float *a2, CVector *a3)
{
  int v3; // r3
  float *i; // r12
  float v5; // s0

  v3 = -1;
  for ( i = (float *)&unk_A58DB8; *((_DWORD *)i - 12) != this; i += 14 )
  {
    if ( ++v3 >= 31 )
      return this;
  }
  this = *((unsigned __int16 *)i - 26);
  *(i - 9) = *a2;
  *(i - 8) = a2[1];
  if ( this != 8 )
  {
    if ( this == 7 )
      v5 = a2[2] + *i;
    else
      v5 = a2[2];
    *(i - 7) = v5;
  }
  return this;
}


// ============================================================

// Address: 0x5c430c
// Original: _ZN12CCheckpoints10SetHeadingEjf
// Demangled: CCheckpoints::SetHeading(uint,float)
int __fastcall CCheckpoints::SetHeading(int this, float a2, float a3)
{
  int v4; // r1
  float *i; // r4
  float v6; // s0

  v4 = -1;
  for ( i = (float *)&dword_A58DA0; *((_DWORD *)i - 6) != this; i += 14 )
  {
    if ( ++v4 >= 31 )
      return this;
  }
  v6 = (float)(a2 * 3.1416) / 180.0;
  i[1] = sinf(v6);
  *i = cosf(v6);
  return j_CVector::Normalise((CVector *)i);
}


// ============================================================

// Address: 0x5c4370
// Original: _ZN12CCheckpoints11PlaceMarkerEjtR7CVectorS1_fhhhhtfs
// Demangled: CCheckpoints::PlaceMarker(uint,ushort,CVector &,CVector &,float,uchar,uchar,uchar,uchar,ushort,float,short)
// local variable allocation has failed, the output may be wrong!
__int16 *__fastcall CCheckpoints::PlaceMarker(
        CCheckpoints *this,
        unsigned int a2,
        float *a3,
        CVector *a4,
        CVector *a5,
        float a6,
        unsigned __int8 a7,
        char a8,
        unsigned __int8 a9,
        __int16 a10,
        float a11,
        float a12,
        __int16 a13)
{
  float *PlayerCentreOfWorld; // r0
  float v18; // s0
  float v19; // s2
  int v20; // r0
  float v21; // s22
  __int16 v22; // r11
  __int16 v23; // r10
  __int16 v24; // r12
  unsigned __int8 v25; // r2
  char v26; // r3
  unsigned __int8 v27; // lr
  __int16 *v28; // r5
  float v29; // s18
  int v30; // r0
  float v31; // s24
  float v32; // s26
  float v33; // s28
  float v34; // s30
  float v35; // s17
  float v36; // s19
  char v37; // r0
  int v38; // r0
  float v39; // s0
  __int64 v40; // d16
  __int64 v41; // d16
  float v42; // s0
  float v43; // s2
  float v44; // s4
  float v45; // s6
  float v46; // s0
  float v48[3]; // [sp+0h] [bp-90h] BYREF
  char v49[4]; // [sp+Ch] [bp-84h] BYREF
  float v50; // [sp+10h] [bp-80h]
  float v51[3]; // [sp+18h] [bp-78h] BYREF
  float v52[27]; // [sp+24h] [bp-6Ch] BYREF

  PlayerCentreOfWorld = (float *)FindPlayerCentreOfWorld(0);
  v18 = *PlayerCentreOfWorld;
  v19 = PlayerCentreOfWorld[1];
  v20 = -1;
  v21 = *a3;
  v22 = a2;
  v23 = LOWORD(a12);
  v24 = a10;
  v25 = a7;
  v26 = a8;
  v27 = a9;
  v28 = CCheckpoints::m_aCheckPtArray;
  v29 = sqrtf((float)((float)(*a3 - v18) * (float)(*a3 - v18)) + (float)((float)(a3[1] - v19) * (float)(a3[1] - v19)));
  do
  {
    if ( *((_BYTE *)v28 + 2) && *((CCheckpoints **)v28 + 1) == this )
    {
      if ( a2 <= 7 && ((1 << a2) & 0xA8) != 0 )
      {
        FindPlayerCoors((int)v52);
        v31 = *a3;
        v32 = v52[0];
        FindPlayerCoors((int)v51);
        v33 = a3[1];
        v34 = v51[0];
        FindPlayerCoors((int)v49);
        v35 = a3[1];
        v36 = v50;
        FindPlayerCoors((int)v48);
        v27 = a9;
        v26 = a8;
        v25 = a7;
        v23 = LOWORD(a12);
        v24 = a10;
        v37 = LOBYTE(a6);
        if ( sqrtf((float)((float)(v21 - v32) * (float)(v31 - v34)) + (float)((float)(v33 - v36) * (float)(v35 - v48[1]))) < 2.0 )
        {
          v22 = 6;
          if ( a2 == 7 )
            v22 = 8;
        }
      }
      else
      {
LABEL_27:
        v37 = LOBYTE(a6);
      }
      v28[7] = v23;
      *((_BYTE *)v28 + 8) = v37;
      *((_DWORD *)v28 + 11) = a5;
      *((float *)v28 + 12) = v29;
      *((_BYTE *)v28 + 9) = v25;
      *((_BYTE *)v28 + 11) = v27;
      *((_BYTE *)v28 + 10) = v26;
      v40 = *(_QWORD *)a3;
      *((float *)v28 + 6) = a3[2];
      *((_QWORD *)v28 + 2) = v40;
      v41 = *(_QWORD *)a4;
      *((_DWORD *)v28 + 9) = *((_DWORD *)a4 + 2);
      v42 = *((float *)v28 + 4);
      v43 = *((float *)v28 + 5);
      *(_QWORD *)(v28 + 14) = v41;
      v44 = *((float *)v28 + 7);
      v45 = *((float *)v28 + 8);
      *((_BYTE *)v28 + 2) = 1;
      *((_DWORD *)v28 + 1) = this;
      *v28 = v22;
      v28[6] = v24;
      *((float *)v28 + 10) = a11;
      *((float *)v28 + 7) = v44 - v42;
      v46 = *((float *)v28 + 9);
      *((float *)v28 + 8) = v45 - v43;
      *((float *)v28 + 9) = v46 - *((float *)v28 + 6);
      CVector::Normalise((CVector *)(v28 + 14));
      return v28;
    }
    ++v20;
    v28 += 28;
  }
  while ( v20 < 31 );
  v28 = CCheckpoints::m_aCheckPtArray;
  v30 = -1;
  while ( *v28 != 257 )
  {
    ++v30;
    v28 += 28;
    if ( v30 > 30 )
      goto LABEL_17;
  }
  if ( v28 )
  {
    v25 = a7;
    goto LABEL_27;
  }
LABEL_17:
  v38 = 0;
  v28 = 0;
  do
  {
    v39 = *(float *)&CCheckpoints::m_aCheckPtArray[v38 + 24];
    if ( v29 < v39 )
    {
      if ( v28 )
      {
        if ( v39 > *((float *)v28 + 12) )
          v28 = &CCheckpoints::m_aCheckPtArray[v38];
      }
      else
      {
        v28 = &CCheckpoints::m_aCheckPtArray[v38];
      }
    }
    v38 += 28;
  }
  while ( v38 != 896 );
  v25 = a7;
  if ( v28 )
  {
    *v28 = 257;
    goto LABEL_27;
  }
  return 0;
}


// ============================================================

// Address: 0x5c4598
// Original: _ZN12CCheckpoints8DeleteCPEjt
// Demangled: CCheckpoints::DeleteCP(uint,ushort)
int __fastcall CCheckpoints::DeleteCP(int this, unsigned int a2, unsigned __int16 a3)
{
  int i; // r6

  for ( i = 0; i != 896; i += 28 )
  {
    if ( LOBYTE(CCheckpoints::m_aCheckPtArray[i + 1])
      && *(_DWORD *)&CCheckpoints::m_aCheckPtArray[i + 2] == this
      && (unsigned __int16)CCheckpoints::m_aCheckPtArray[i] == a2 )
    {
      LOBYTE(CCheckpoints::m_aCheckPtArray[i + 1]) = 0;
      CCheckpoints::m_aCheckPtArray[i] = 257;
      *(_DWORD *)&CCheckpoints::m_aCheckPtArray[i + 2] = 0;
    }
  }
  return this;
}


// ============================================================
