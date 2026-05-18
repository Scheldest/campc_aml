
// Address: 0x191fa0
// Original: j__ZN13CBulletTraces6RenderEv
// Demangled: CBulletTraces::Render(void)
// attributes: thunk
int __fastcall CBulletTraces::Render(CBulletTraces *this)
{
  return _ZN13CBulletTraces6RenderEv(this);
}


// ============================================================

// Address: 0x195664
// Original: j__ZN13CBulletTraces8AddTraceEP7CVectorS1_fjh
// Demangled: CBulletTraces::AddTrace(CVector *,CVector *,float,uint,uchar)
// attributes: thunk
int __fastcall CBulletTraces::AddTrace(
        CBulletTraces *this,
        CVector *a2,
        CVector *a3,
        float a4,
        unsigned int a5,
        unsigned __int8 a6)
{
  return _ZN13CBulletTraces8AddTraceEP7CVectorS1_fjh(this, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x19bb58
// Original: j__ZN13CBulletTraces8AddTraceEP7CVectorS1_iP7CEntity
// Demangled: CBulletTraces::AddTrace(CVector *,CVector *,int,CEntity *)
// attributes: thunk
int __fastcall CBulletTraces::AddTrace(CBulletTraces *this, CVector *a2, CVector *a3, int a4, CEntity *a5)
{
  return _ZN13CBulletTraces8AddTraceEP7CVectorS1_iP7CEntity(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x5bfa88
// Original: _ZN13CBulletTraces4InitEv
// Demangled: CBulletTraces::Init(void)
void *__fastcall CBulletTraces::Init(CBulletTraces *this)
{
  void *result; // r0

  result = &CBulletTraces::aTraces;
  byte_A56384 = 0;
  byte_A56358 = 0;
  byte_A563B0 = 0;
  byte_A563DC = 0;
  byte_A56408 = 0;
  byte_A56434 = 0;
  byte_A56460 = 0;
  byte_A5648C = 0;
  byte_A564B8 = 0;
  byte_A564E4 = 0;
  byte_A56510 = 0;
  byte_A5653C = 0;
  byte_A56568 = 0;
  byte_A56594 = 0;
  byte_A565C0 = 0;
  byte_A565EC = 0;
  return result;
}


// ============================================================

// Address: 0x5c0660
// Original: _ZN13CBulletTraces6UpdateEv
// Demangled: CBulletTraces::Update(void)
char *__fastcall CBulletTraces::Update(CBulletTraces *this)
{
  int v1; // r1
  int v2; // lr
  char *result; // r0

  v1 = 0;
  v2 = CTimer::m_snTimeInMilliseconds;
  do
  {
    result = (char *)&CBulletTraces::aTraces + v1;
    if ( *((_BYTE *)&CBulletTraces::aTraces + v1 + 24) )
    {
      if ( (unsigned int)(v2 - *(_DWORD *)((char *)&CBulletTraces::aTraces + v1 + 28)) >= *(_DWORD *)((char *)&CBulletTraces::aTraces + v1 + 32) )
        result[24] = 0;
    }
    v1 += 44;
  }
  while ( v1 != 704 );
  return result;
}


// ============================================================

// Address: 0x5c0c04
// Original: _ZN13CBulletTraces6RenderEv
// Demangled: CBulletTraces::Render(void)
int __fastcall CBulletTraces::Render(CBulletTraces *this)
{
  int v1; // r5
  float *v2; // r9
  float *v3; // r1
  float v4; // s2
  float v5; // s4
  float v6; // s20
  float v7; // s18
  float v8; // s22
  float v9; // s2
  float v10; // s4
  float v11; // s0
  float v12; // s10
  float v13; // s12
  float v14; // s14
  unsigned int v15; // r0
  float v16; // s4
  float v17; // s6
  float v18; // s8
  float v19; // s0
  float v20; // s1
  float v21; // s2
  float v22; // s14
  float v24[3]; // [sp+Ch] [bp-154h] BYREF
  float v25; // [sp+18h] [bp-148h] BYREF
  float v26; // [sp+1Ch] [bp-144h]
  float v27; // [sp+20h] [bp-140h]
  float v28[57]; // [sp+24h] [bp-13Ch] BYREF
  __int64 v29; // [sp+108h] [bp-58h]
  __int64 v30; // [sp+110h] [bp-50h]
  __int64 v31; // [sp+118h] [bp-48h]

  v1 = 0;
  v29 = unk_61FC98;
  v30 = unk_61FCA0;
  v31 = unk_61FCA8;
  do
  {
    if ( *((_BYTE *)&CBulletTraces::aTraces + v1 + 24) )
    {
      v2 = (float *)((char *)&CBulletTraces::aTraces + v1);
      v3 = (float *)(dword_951FBC + 48);
      if ( !dword_951FBC )
        v3 = (float *)&qword_951FAC;
      v4 = *(float *)((char *)&CBulletTraces::aTraces + v1 + 4) - v3[1];
      v5 = *(float *)((char *)&CBulletTraces::aTraces + v1 + 8) - v3[2];
      v28[0] = *(float *)((char *)&CBulletTraces::aTraces + v1) - *v3;
      v28[1] = v4;
      v28[2] = v5;
      CVector::Normalise((CVector *)v28);
      v6 = v2[3] - *v2;
      v8 = v2[5] - v2[2];
      v26 = v2[4] - v2[1];
      v7 = v26;
      v25 = v6;
      v27 = v8;
      CVector::Normalise((CVector *)&v25);
      CrossProduct((const CVector *)v24, (const CVector *)v28);
      CVector::Normalise((CVector *)v24);
      v9 = 1.0
         - (float)((float)(unsigned int)(CTimer::m_snTimeInMilliseconds - *((_DWORD *)v2 + 7))
                 / (float)*((unsigned int *)v2 + 8));
      v10 = (float)*((unsigned __int8 *)v2 + 40);
      LODWORD(v28[9]) = &unk_80FFFF;
      v11 = sqrtf((float)((float)(v6 * v6) + (float)(v7 * v7)) + (float)(v8 * v8));
      LODWORD(v28[18]) = &unk_80FFFF;
      LODWORD(v28[27]) = &unk_80FFFF;
      LODWORD(v28[45]) = &unk_80FFFF;
      v12 = v2[4];
      v13 = v2[5];
      v14 = v9 * v2[9];
      LODWORD(v28[54]) = &unk_80FFFF;
      v15 = (unsigned int)(float)(v9 * v10);
      v16 = v2[3];
      v17 = v16 - (float)(v9 * (float)(v11 * v25));
      v18 = v12 - (float)(v9 * (float)(v11 * v26));
      v19 = v13 - (float)(v9 * (float)(v11 * v27));
      v20 = v14 * v24[1];
      v21 = v24[0] * v14;
      v22 = v14 * v24[2];
      LODWORD(v28[36]) = (unsigned int)&unk_80FFFF | (v15 << 24);
      v28[5] = v19;
      v28[4] = v18;
      v28[3] = v17;
      v28[12] = v21 + v17;
      v28[13] = v20 + v18;
      v28[14] = v22 + v19;
      v28[21] = v17 - v21;
      v28[22] = v18 - v20;
      v28[23] = v19 - v22;
      v28[30] = v16;
      v28[31] = v12;
      v28[32] = v13;
      v28[39] = v21 + v16;
      v28[40] = v20 + v12;
      v28[41] = v22 + v13;
      v28[48] = v16 - v21;
      v28[49] = v12 - v20;
      v28[50] = v13 - v22;
      if ( RwIm3DTransform() )
      {
        RwIm3DRenderIndexedPrimitive();
        RwIm3DEnd();
      }
    }
    v1 += 44;
  }
  while ( v1 != 704 );
  RwRenderStateSet(8, 1);
  RwRenderStateSet(10, 5);
  RwRenderStateSet(11, 6);
  return RwRenderStateSet(20, 2);
}


// ============================================================

// Address: 0x5c1b64
// Original: _ZN13CBulletTraces8AddTraceEP7CVectorS1_iP7CEntity
// Demangled: CBulletTraces::AddTrace(CVector *,CVector *,int,CEntity *)
float *__fastcall CBulletTraces::AddTrace(CBulletTraces *this, CVector *a2, CVector *a3, int a4, CEntity *a5)
{
  int PlayerVehicle; // r0
  float *v9; // r1
  float *v10; // r2
  float *result; // r0
  float v12; // s18
  float v13; // s16
  float v14; // s20
  float v15; // s28
  float v16; // s30
  float v17; // s18
  float v18; // s20
  float v19; // s22
  float v20; // s0
  float v21[3]; // [sp+4h] [bp-74h] BYREF
  float v22[3]; // [sp+10h] [bp-68h] BYREF
  float v23; // [sp+1Ch] [bp-5Ch] BYREF
  float v24; // [sp+20h] [bp-58h]
  float v25; // [sp+24h] [bp-54h]

  if ( FindPlayerPed(-1) == a4 || FindPlayerVehicle(-1, 0) && FindPlayerVehicle(-1, 0) == a4 )
  {
    switch ( *((_WORD *)&TheCamera + 264 * (unsigned __int8)byte_951FFF + 191) )
    {
      case 7:
      case 8:
      case 0x22:
      case 0x27:
      case 0x28:
      case 0x2A:
      case 0x2D:
      case 0x2E:
      case 0x33:
      case 0x34:
        if ( FindPlayerVehicle(-1, 0) )
          PlayerVehicle = FindPlayerVehicle(-1, 0);
        else
          PlayerVehicle = FindPlayerPed(-1);
        v9 = (float *)(PlayerVehicle + 80);
        v10 = (float *)(PlayerVehicle + 76);
        result = (float *)(PlayerVehicle + 72);
        if ( sqrtf((float)((float)(*v10 * *v10) + (float)(*result * *result)) + (float)(*v9 * *v9)) >= 0.05 )
          goto LABEL_9;
        break;
      default:
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    v12 = *(float *)a2 - *(float *)this;
    v14 = *((float *)a2 + 2) - *((float *)this + 2);
    v24 = *((float *)a2 + 1) - *((float *)this + 1);
    v13 = v24;
    v23 = v12;
    v25 = v14;
    CVector::Normalise((CVector *)&v23);
    v15 = sqrtf((float)((float)(v12 * v12) + (float)(v13 * v13)) + (float)(v14 * v14));
    v16 = (float)(v15 * (float)((float)rand() * 4.6566e-10)) + 0.0;
    v17 = *(float *)this + (float)(v23 * v16);
    v18 = (float)(v24 * v16) + *((float *)this + 1);
    v19 = (float)(v25 * v16) + *((float *)this + 2);
    v22[0] = v17;
    v22[1] = v18;
    v22[2] = v19;
    v20 = v15 - v16;
    if ( (float)((float)((float)((float)rand() * 4.6566e-10) * 3.0) + 2.0) < (float)(v15 - v16) )
      v20 = (float)((float)((float)rand() * 4.6566e-10) * 3.0) + 2.0;
    v21[0] = (float)(v20 * v23) + v17;
    v21[1] = (float)(v20 * v24) + v18;
    v21[2] = (float)(v20 * v25) + v19;
    return (float *)CBulletTraces::AddTrace(
                      (CBulletTraces *)v22,
                      (CVector *)v21,
                      (CVector *)0x3C23D70A,
                      COERCE_FLOAT(300),
                      0x46u,
                      LOBYTE(v21[0]));
  }
  return result;
}


// ============================================================

// Address: 0x5c1da8
// Original: _ZN13CBulletTraces8AddTraceEP7CVectorS1_fjh
// Demangled: CBulletTraces::AddTrace(CVector *,CVector *,float,uint,uchar)
float *__fastcall CBulletTraces::AddTrace(
        CBulletTraces *this,
        CVector *a2,
        CVector *a3,
        unsigned int a4,
        char a5,
        unsigned __int8 a6)
{
  int v6; // r10
  float v7; // s0
  unsigned int v8; // r10
  CBulletTraces *v9; // r5
  CVector *v10; // r6
  char v11; // r12
  __int16 v12; // r4
  char *v13; // lr
  __int64 v14; // d16
  char *v15; // r0
  __int64 v16; // d16
  int v17; // r1
  float *result; // r0
  float *v19; // r2
  float v20; // s2
  float v21; // s6
  float v22; // s12
  float v23; // s0
  float v24; // s2
  float v25; // s10
  float v26; // s4
  float v27; // s8
  float v28; // s12
  float v29; // s16
  float v30; // s1
  float v31; // s6
  float v32; // s10
  float v33; // s6
  float v34; // s8
  float v35; // s12
  float v36; // s14
  float v37; // s0
  float v38; // s2
  float v39; // s0
  float v40; // s4
  float v41; // s2
  float v42; // s0
  float v43; // s0
  float v44; // s0
  float v45; // s0
  float v46; // r2
  int v47; // r1

  v6 = (unsigned __int8)byte_A5648C
     + (unsigned __int8)(byte_A56358 + byte_A56384 + byte_A563B0 + byte_A563DC + byte_A56408 + byte_A56434 + byte_A56460)
     + (unsigned __int8)byte_A564B8
     + (unsigned __int8)byte_A564E4
     + (unsigned __int8)byte_A56510
     + (unsigned __int8)byte_A5653C
     + (unsigned __int8)byte_A56568
     + (unsigned __int8)byte_A56594
     + (unsigned __int8)byte_A565C0
     + (unsigned __int8)byte_A565EC;
  if ( v6 >= 10 )
  {
    v7 = 0.25;
    goto LABEL_5;
  }
  if ( v6 >= 5 )
  {
    v7 = 0.5;
LABEL_5:
    v8 = (unsigned int)(float)((float)a4 * v7);
    if ( byte_A56358 )
      goto LABEL_6;
LABEL_23:
    v11 = a5;
    v12 = 0;
    v13 = &byte_A56358;
LABEL_32:
    v9 = this;
    v10 = a2;
    goto LABEL_33;
  }
  v8 = a4;
  if ( !byte_A56358 )
    goto LABEL_23;
LABEL_6:
  if ( !byte_A56384 )
  {
    v11 = a5;
    v12 = 1;
    v13 = &byte_A56384;
    goto LABEL_32;
  }
  if ( !byte_A563B0 )
  {
    v11 = a5;
    v12 = 2;
    v13 = &byte_A563B0;
    goto LABEL_32;
  }
  if ( !byte_A563DC )
  {
    v11 = a5;
    v12 = 3;
    v13 = &byte_A563DC;
    goto LABEL_32;
  }
  if ( !byte_A56408 )
  {
    v11 = a5;
    v12 = 4;
    v13 = &byte_A56408;
    goto LABEL_32;
  }
  if ( !byte_A56434 )
  {
    v11 = a5;
    v12 = 5;
    v13 = &byte_A56434;
    goto LABEL_32;
  }
  if ( !byte_A56460 )
  {
    v11 = a5;
    v12 = 6;
    v13 = &byte_A56460;
    goto LABEL_32;
  }
  if ( !byte_A5648C )
  {
    v11 = a5;
    v12 = 7;
    v13 = &byte_A5648C;
    goto LABEL_32;
  }
  if ( !byte_A564B8 )
  {
    v11 = a5;
    v12 = 8;
    v13 = &byte_A564B8;
    goto LABEL_32;
  }
  v9 = this;
  v10 = a2;
  if ( byte_A564E4 )
  {
    if ( byte_A56510 )
    {
      if ( byte_A5653C )
      {
        if ( byte_A56568 )
        {
          if ( byte_A56594 )
          {
            if ( byte_A565C0 )
            {
              if ( byte_A565EC )
                goto LABEL_34;
              v11 = a5;
              v12 = 15;
              v13 = &byte_A565EC;
            }
            else
            {
              v11 = a5;
              v12 = 14;
              v13 = &byte_A565C0;
            }
          }
          else
          {
            v11 = a5;
            v12 = 13;
            v13 = &byte_A56594;
          }
        }
        else
        {
          v11 = a5;
          v12 = 12;
          v13 = &byte_A56568;
        }
      }
      else
      {
        v11 = a5;
        v12 = 11;
        v13 = &byte_A5653C;
      }
    }
    else
    {
      v11 = a5;
      v12 = 10;
      v13 = &byte_A56510;
    }
  }
  else
  {
    v11 = a5;
    v12 = 9;
    v13 = &byte_A564E4;
  }
LABEL_33:
  v14 = *(_QWORD *)v9;
  v15 = (char *)&CBulletTraces::aTraces + 44 * v12;
  *((_DWORD *)v15 + 2) = *((_DWORD *)v9 + 2);
  *(_QWORD *)v15 = v14;
  v16 = *(_QWORD *)v10;
  v17 = CTimer::m_snTimeInMilliseconds;
  *((_DWORD *)v15 + 5) = *((_DWORD *)v10 + 2);
  *(_QWORD *)(v15 + 12) = v16;
  *v13 = 1;
  v15[40] = v11;
  *((_DWORD *)v15 + 9) = a3;
  *((_DWORD *)v15 + 7) = v17;
  *((_DWORD *)v15 + 8) = v8;
LABEL_34:
  result = (float *)&TheCamera;
  v19 = (float *)(dword_951FBC + 48);
  if ( !dword_951FBC )
    v19 = (float *)&qword_951FAC;
  v20 = v19[1];
  v21 = *((float *)v9 + 1) - v20;
  v22 = v19[2];
  v23 = *((float *)v10 + 1) - v20;
  v24 = *(float *)v10 - *v19;
  v25 = *(float *)v9 - *v19;
  v26 = *((float *)v10 + 2) - v22;
  v27 = *((float *)v9 + 2) - v22;
  v28 = (float)((float)(*(float *)&dword_9528B4 * v24) + (float)(*(float *)&dword_9528B8 * v23))
      + (float)(*(float *)&dword_9528BC * v26);
  v29 = (float)((float)(v25 * *(float *)&dword_9528B4) + (float)(v21 * *(float *)&dword_9528B8))
      + (float)(v27 * *(float *)&dword_9528BC);
  if ( (float)(v29 * v28) < 0.0 )
  {
    v30 = v21 * unk_9528C8;
    result = flt_9528AC;
    v31 = (float)(v25 * unk_9528A4) + (float)(v21 * unk_9528A8);
    v32 = (float)((float)(v25 * flt_9528C4) + v30) + (float)(v27 * unk_9528CC);
    v33 = v31 + (float)(v27 * flt_9528AC[0]);
    v34 = fabsf(v28);
    v35 = fabsf(v29);
    v36 = (float)(flt_9528C4 * v24) + (float)(unk_9528C8 * v23);
    v37 = (float)(unk_9528A4 * v24) + (float)(unk_9528A8 * v23);
    v38 = v35 / (float)(v35 + v34);
    v39 = (float)(v37 + (float)(flt_9528AC[0] * v26)) - v33;
    v40 = (float)((float)(v36 + (float)(unk_9528CC * v26)) - v32) * v38;
    v41 = v33 + (float)(v39 * v38);
    v42 = sqrtf((float)(v41 * v41) + (float)((float)(v32 + v40) * (float)(v32 + v40)));
    if ( v42 < 2.0 )
    {
      v43 = (float)(v42 * -0.5) + 1.0;
      if ( v41 >= 0.0 )
      {
        if ( v43 == 0.0 )
          v45 = -100.0;
        else
          v45 = log10f(v43) * 20.0;
        v46 = v45;
        if ( v29 <= 0.0 )
          v47 = 27;
        else
          v47 = 28;
      }
      else
      {
        if ( v43 == 0.0 )
          v44 = -100.0;
        else
          v44 = log10f(v43) * 20.0;
        v46 = v44;
        if ( v29 <= 0.0 )
          v47 = 29;
        else
          v47 = 30;
      }
      return (float *)j_CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, v47, v46, 1.0);
    }
  }
  return result;
}


// ============================================================
