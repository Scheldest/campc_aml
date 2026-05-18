
// Address: 0x18cb84
// Original: j__ZN10CSkidmarks6RenderEv
// Demangled: CSkidmarks::Render(void)
// attributes: thunk
int __fastcall CSkidmarks::Render(CSkidmarks *this)
{
  return _ZN10CSkidmarks6RenderEv(this);
}


// ============================================================

// Address: 0x18d100
// Original: j__ZN10CSkidmarks8ShutdownEv
// Demangled: CSkidmarks::Shutdown(void)
// attributes: thunk
int __fastcall CSkidmarks::Shutdown(CSkidmarks *this)
{
  return _ZN10CSkidmarks8ShutdownEv(this);
}


// ============================================================

// Address: 0x199288
// Original: j__ZN10CSkidmarks11RegisterOneEjRK7CVectorff13eSkidmarkTypePbf
// Demangled: CSkidmarks::RegisterOne(uint,CVector const&,float,float,eSkidmarkType,bool *,float)
// attributes: thunk
int __fastcall CSkidmarks::RegisterOne(int a1, int a2, int a3, int a4, int a5, int a6, float a7)
{
  return _ZN10CSkidmarks11RegisterOneEjRK7CVectorff13eSkidmarkTypePbf(a1, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x199664
// Original: j__ZN10CSkidmarks6UpdateEv
// Demangled: CSkidmarks::Update(void)
// attributes: thunk
int __fastcall CSkidmarks::Update(CSkidmarks *this)
{
  return _ZN10CSkidmarks6UpdateEv(this);
}


// ============================================================

// Address: 0x199758
// Original: j__ZN10CSkidmarks4InitEv
// Demangled: CSkidmarks::Init(void)
// attributes: thunk
int __fastcall CSkidmarks::Init(CSkidmarks *this)
{
  return _ZN10CSkidmarks4InitEv(this);
}


// ============================================================

// Address: 0x19b6c4
// Original: j__ZN10CSkidmarks5ClearEv
// Demangled: CSkidmarks::Clear(void)
// attributes: thunk
int __fastcall CSkidmarks::Clear(CSkidmarks *this)
{
  return _ZN10CSkidmarks5ClearEv(this);
}


// ============================================================

// Address: 0x5be718
// Original: _ZN10CSkidmarks4InitEv
// Demangled: CSkidmarks::Init(void)
int __fastcall CSkidmarks::Init(CSkidmarks *this)
{
  const char *v1; // r1
  CTxdStore *TxdSlot; // r0
  const char *v3; // r2
  int i; // r1
  char *v5; // r2
  int result; // r0
  int v7; // r1
  _WORD *v8; // r3

  CTxdStore::PushCurrentTxd(this);
  TxdSlot = (CTxdStore *)CTxdStore::FindTxdSlot((CTxdStore *)"particle", v1);
  CTxdStore::SetCurrentTxd(TxdSlot, 0, v3);
  dword_A5626C = RwTextureRead("particleskid", 0);
  CTxdStore::PopCurrentTxd((CTxdStore *)dword_A5626C);
  for ( i = 0; i != 11008; i += 344 )
  {
    v5 = (char *)&CSkidmarks::aSkidmarks + i;
    *((_WORD *)v5 + 171) = 0;
  }
  result = 0;
  v7 = 3;
  do
  {
    *(_WORD *)((char *)&unk_A56270 + result) = v7 - 3;
    v8 = (_WORD *)((char *)&unk_A56270 + result);
    result += 12;
    v8[1] = v7 - 1;
    v8[2] = v7 - 2;
    v8[3] = v7 - 2;
    v8[4] = v7 - 1;
    v8[5] = v7;
    v7 += 2;
  }
  while ( result != 192 );
  return result;
}


// ============================================================

// Address: 0x5be7b0
// Original: _ZN10CSkidmarks8ShutdownEv
// Demangled: CSkidmarks::Shutdown(void)
int __fastcall CSkidmarks::Shutdown(CSkidmarks *this)
{
  int result; // r0

  RwTextureDestroy(dword_A5626C);
  result = 0;
  dword_A5626C = 0;
  return result;
}


// ============================================================

// Address: 0x5be7c8
// Original: _ZN10CSkidmarks5ClearEv
// Demangled: CSkidmarks::Clear(void)
int __fastcall CSkidmarks::Clear(CSkidmarks *this)
{
  int result; // r0
  int i; // r2
  char *v3; // r3

  result = 0;
  for ( i = 0; i != 11008; i += 344 )
  {
    v3 = (char *)&CSkidmarks::aSkidmarks + i;
    *((_WORD *)v3 + 171) = 0;
  }
  return result;
}


// ============================================================

// Address: 0x5be7e8
// Original: _ZN10CSkidmarks6UpdateEv
// Demangled: CSkidmarks::Update(void)
unsigned int __fastcall CSkidmarks::Update(CSkidmarks *this)
{
  int v1; // r6
  unsigned int result; // r0
  int v3; // r12
  char *v4; // r5
  int v5; // r4
  int v6; // r4
  __int64 v7; // r4
  bool v8; // cc
  char *v9; // r4

  v1 = 0;
  result = CTimer::m_snTimeInMilliseconds;
  v3 = CTimer::m_snTimeInMilliseconds + 2500;
  do
  {
    v4 = (char *)&CSkidmarks::aSkidmarks + v1;
    v5 = *((unsigned __int8 *)&CSkidmarks::aSkidmarks + v1 + 342);
    if ( v5 == 2 )
    {
      if ( result > *(_DWORD *)((char *)&CSkidmarks::aSkidmarks + v1 + 332) )
        v4[342] = 0;
    }
    else if ( v5 == 1 && !*((_BYTE *)&CSkidmarks::aSkidmarks + v1 + 343) )
    {
      v4[342] = 2;
      v6 = *(__int16 *)((char *)&CSkidmarks::aSkidmarks + v1 + 340);
      if ( v6 >= 4 )
      {
        v8 = v6 < 9;
        v7 = 85899345930000LL;
        if ( v8 )
          v7 = 0x271000001388LL;
        LODWORD(v7) = v7 + result;
      }
      else
      {
        v7 = (unsigned int)v3 | 0x138800000000LL;
      }
      HIDWORD(v7) += result;
      *(_QWORD *)((char *)&CSkidmarks::aSkidmarks + v1 + 328) = v7;
    }
    v9 = (char *)&CSkidmarks::aSkidmarks + v1;
    v1 += 344;
    v9[343] = 0;
  }
  while ( v1 != 11008 );
  return result;
}


// ============================================================

// Address: 0x5be8c4
// Original: _ZN10CSkidmarks6RenderEv
// Demangled: CSkidmarks::Render(void)
int __fastcall CSkidmarks::Render(CSkidmarks *this)
{
  int v1; // r5
  int i; // r4
  char *v3; // r0
  char *v4; // r1
  unsigned __int8 *v5; // r8
  unsigned int v6; // r2
  unsigned __int8 *v7; // r1
  unsigned int v8; // r0
  unsigned __int8 *v9; // r3
  unsigned int v10; // r1
  char *v11; // r6
  unsigned int v12; // r2
  float v13; // s0
  unsigned int v14; // s2
  unsigned int v15; // s4
  unsigned int v16; // s0
  int v17; // r1
  unsigned int v18; // r1
  unsigned int v19; // r0
  unsigned int v20; // r12
  __int16 v21; // r9
  int *v22; // r2
  unsigned int v23; // r11
  int v24; // r6
  int v25; // r1
  int v26; // r4
  __int16 v27; // r8
  int v28; // s0
  float *v29; // r5
  float *v30; // r0
  float v31; // s0
  unsigned int v32; // r3
  float v33; // s6
  float v34; // s2
  float v35; // s4
  float v36; // s6
  float v37; // s8
  float v38; // s10
  int v40; // [sp+28h] [bp-68h]
  int v41; // [sp+2Ch] [bp-64h]
  __int16 *v42; // [sp+30h] [bp-60h]
  int v43; // [sp+34h] [bp-5Ch]
  char v44; // [sp+38h] [bp-58h]
  unsigned int v45; // [sp+40h] [bp-50h]
  unsigned __int8 v46; // [sp+44h] [bp-4Ch] BYREF
  unsigned __int8 v47; // [sp+45h] [bp-4Bh]
  unsigned __int8 v48; // [sp+46h] [bp-4Ah]
  char v49; // [sp+47h] [bp-49h]

  RwRenderStateSet(8, 0);
  RwRenderStateSet(12, 1);
  RwRenderStateSet(10, 5);
  RwRenderStateSet(11, 6);
  RwRenderStateSet(14, 1);
  RwRenderStateSet(1, *(_DWORD *)dword_A5626C);
  v1 = 0;
  for ( i = 0; i != 32; ++i )
  {
    v3 = (char *)&CSkidmarks::aSkidmarks + 344 * i;
    if ( v3[342] )
    {
      v4 = (char *)&CSkidmarks::aSkidmarks + 344 * i;
      if ( *((__int16 *)v4 + 170) >= 1 )
      {
        v5 = (unsigned __int8 *)(v3 + 342);
        v42 = (__int16 *)(v4 + 340);
        CRGBA::CRGBA((CRGBA *)&v46, 0, 0, 0, 0xFFu);
        v6 = *((_DWORD *)&CSkidmarks::aSkidmarks + 86 * i + 84);
        if ( v6 >= 4 )
        {
          v8 = v46;
          v10 = v47;
          v12 = v48;
        }
        else
        {
          v7 = (unsigned __int8 *)*(&off_66E33C + v6);
          v8 = *(unsigned __int8 *)*(&off_66E32C + v6);
          v46 = *(_BYTE *)*(&off_66E32C + v6);
          v9 = (unsigned __int8 *)*(&off_66E34C + v6);
          v10 = *v7;
          v11 = (char *)*(&off_66E35C + v6);
          v47 = v10;
          v12 = *v9;
          v48 = *v9;
          v49 = *v11;
        }
        v13 = (float)((float)(1.0 - *(float *)&CCustomBuildingDNPipeline::m_fDNBalanceParam) * 0.6) + 0.4;
        v14 = (unsigned int)(float)(v13 * (float)v12);
        v15 = (unsigned int)(float)(v13 * (float)v8);
        v16 = (unsigned int)(float)(v13 * (float)v10);
        v17 = *v5;
        v46 = v15;
        v45 = v15;
        v47 = v16;
        v48 = v14;
        v44 = v17;
        v40 = i;
        v41 = v1;
        if ( v17 == 1
          || (v18 = *((_DWORD *)&CSkidmarks::aSkidmarks + 86 * i + 82), CTimer::m_snTimeInMilliseconds < v18) )
        {
          LOWORD(v19) = 255;
        }
        else
        {
          v19 = 255
              * (*((_DWORD *)&CSkidmarks::aSkidmarks + 86 * i + 83) - CTimer::m_snTimeInMilliseconds)
              / (*((_DWORD *)&CSkidmarks::aSkidmarks + 86 * i + 83) - v18);
        }
        v43 = *v42;
        if ( v43 >= 0 )
        {
          v20 = v16 << 8;
          v21 = v19;
          v22 = TempVertexBuffer;
          v23 = v14 << 16;
          v24 = 0;
          v25 = v1;
          v26 = v1;
          do
          {
            if ( v24 )
            {
              v27 = 128;
              if ( v43 != v24 || v44 != 2 )
                goto LABEL_18;
              v44 = 2;
            }
            v27 = 0;
LABEL_18:
            v28 = v24++;
            v29 = (float *)((char *)&CSkidmarks::aSkidmarks + v25);
            v30 = (float *)((char *)&CSkidmarks::aSkidmarks + v26);
            v31 = (float)v28 * 5.01;
            v32 = ((v27 * v21) << 16) & 0xFF000000 | v45 | v20 | v23;
            v33 = *(float *)((char *)&CSkidmarks::aSkidmarks + v26 + 8);
            v25 += 4;
            v34 = *(float *)((char *)&CSkidmarks::aSkidmarks + v26);
            v26 += 12;
            v35 = v30[1];
            v36 = v33 + 0.1;
            v37 = v29[48];
            v38 = v29[64];
            v22[6] = v32;
            v22[7] = 0;
            v22[15] = v32;
            v22[16] = 1065353216;
            *((float *)v22 + 17) = v31;
            *(float *)v22 = v34 + v37;
            *((float *)v22 + 1) = v35 + v38;
            *((float *)v22 + 2) = v36;
            *((float *)v22 + 8) = v31;
            *((float *)v22 + 9) = v34 - v37;
            *((float *)v22 + 10) = v35 - v38;
            *((float *)v22 + 11) = v36;
            v22 += 18;
          }
          while ( v43 + 1 != v24 );
        }
        LittleTest();
        if ( RwIm3DTransform() )
        {
          RwIm3DRenderIndexedPrimitive();
          RwIm3DEnd();
        }
        i = v40;
        v1 = v41;
      }
    }
    v1 += 344;
  }
  RwRenderStateSet(12, 0);
  RwRenderStateSet(8, 1);
  return RwRenderStateSet(6, 1);
}


// ============================================================

// Address: 0x5bec40
// Original: _ZN10CSkidmarks11RegisterOneEjRK7CVectorffPbS3_f
// Demangled: CSkidmarks::RegisterOne(uint,CVector const&,float,float,bool *,bool *,float)
int __fastcall CSkidmarks::RegisterOne(
        CSkidmarks *this,
        int a2,
        const CVector *a3,
        int a4,
        _BYTE *a5,
        bool *a6,
        bool *a7,
        float a8)
{
  int v8; // lr

  if ( *a6 )
    v8 = 3;
  else
    v8 = (unsigned __int8)*a5;
  return CSkidmarks::RegisterOne((int)this, a2, (int)a3, a4, v8, (int)a6, *(float *)&a7);
}


// ============================================================

// Address: 0x5bec74
// Original: _ZN10CSkidmarks11RegisterOneEjRK7CVectorff13eSkidmarkTypePbf
// Demangled: CSkidmarks::RegisterOne(uint,CVector const&,float,float,eSkidmarkType,bool *,float)
int *__fastcall CSkidmarks::RegisterOne(int *result, __int64 *a2, float a3, float a4, __int64 a5, float a6)
{
  int v7; // r6
  _BYTE *v8; // r12
  float v9; // s2
  int *v11; // r4
  int v12; // r1
  int v13; // r2
  bool v14; // zf
  char *v15; // r3
  int v16; // r1
  int v17; // r4
  unsigned int v19; // r5
  int v20; // r9
  int v21; // r11
  float v22; // s0
  float v23; // s2
  float v24; // s4
  float *v25; // r0
  float v26; // s6
  float v27; // s10
  char *v28; // r4
  __int64 v29; // d16
  int v30; // r1
  int v31; // r2
  int v32; // r1
  int v33; // r2
  __int64 v34; // d16
  int *v35; // r1
  int v36; // r1
  int *v37; // r2
  float v38; // s6
  float v39; // s10
  float v40; // s12
  float v41; // s10
  int v42; // r2
  __int64 v43; // d16
  float v44; // s12
  float v45; // s4
  float v46; // s2
  int v47; // r1
  int v48; // r2
  int v49; // [sp+0h] [bp-48h]
  int v50; // [sp+8h] [bp-40h]
  float v51; // [sp+14h] [bp-34h] BYREF
  float v52; // [sp+18h] [bp-30h]
  float v53; // [sp+1Ch] [bp-2Ch]

  v8 = (_BYTE *)HIDWORD(a5);
  v7 = a5;
  v9 = a4;
  v11 = &dword_A5381C;
  v12 = -1;
  while ( 1 )
  {
    v13 = *((unsigned __int8 *)v11 + 150);
    v14 = v13 == 1;
    if ( v13 == 1 )
      v14 = v11[32] == (_DWORD)result;
    if ( v14 )
      break;
    ++v12;
    v11 += 86;
    if ( v12 >= 31 )
    {
      v15 = &byte_A538B2;
      v16 = 0;
      while ( *v15 )
      {
        v17 = v16 + 1;
        v15 += 344;
        if ( v16++ >= 31 )
        {
          v49 = (int)result;
          v19 = -1;
          v20 = 0;
          v21 = 0;
          v50 = -1;
          do
          {
            if ( !*((_BYTE *)&CSkidmarks::aSkidmarks + v20 + 343)
              && *(_DWORD *)((char *)&CSkidmarks::aSkidmarks + v20 + 324) < v19 )
            {
              v22 = *(float *)((char *)&CSkidmarks::aSkidmarks + v20);
              v23 = *(float *)((char *)&CSkidmarks::aSkidmarks + v20 + 4);
              v24 = *(float *)((char *)&CSkidmarks::aSkidmarks + v20 + 8);
              v25 = (float *)((char *)&CSkidmarks::aSkidmarks
                            + 12 * *(__int16 *)((char *)&CSkidmarks::aSkidmarks + v20 + 340)
                            + v20);
              v26 = v22 + *v25;
              v27 = v25[2];
              v52 = (float)(v23 + v25[1]) * 0.5;
              v51 = v26 * 0.5;
              v53 = (float)(v24 + v27) * 0.5;
              if ( !CCamera::IsSphereVisible(
                      (CCamera *)&TheCamera,
                      (const CVector *)&v51,
                      sqrtf(
                        (float)((float)((float)(v22 - v51) * (float)(v22 - v51))
                              + (float)((float)(v23 - v52) * (float)(v23 - v52)))
                      + (float)((float)(v24 - v53) * (float)(v24 - v53)))) )
              {
                v19 = *(_DWORD *)((char *)&CSkidmarks::aSkidmarks + v20 + 324);
                v50 = v21;
              }
            }
            v20 += 344;
            ++v21;
          }
          while ( v20 != 11008 );
          if ( v50 > -1 )
            v17 = v50;
          v8 = (_BYTE *)HIDWORD(a5);
          v7 = a5;
          result = (int *)v49;
          if ( v17 > 31 )
          {
LABEL_18:
            result = 0;
            *v8 = 0;
            return result;
          }
LABEL_20:
          v28 = (char *)&CSkidmarks::aSkidmarks + 344 * v17;
          *((_DWORD *)v28 + 80) = result;
          v28[342] = 1;
          v29 = *a2;
          v30 = CTimer::m_snTimeInMilliseconds - 1000;
          *((_DWORD *)v28 + 2) = *((_DWORD *)a2 + 2);
          *((_DWORD *)v28 + 48) = 0;
          *((_DWORD *)v28 + 64) = 0;
          v28[343] = 1;
          *((_WORD *)v28 + 170) = 0;
          *(_QWORD *)v28 = v29;
          *((_DWORD *)v28 + 81) = v30;
          if ( *v8 )
            v7 = 3;
          *((_DWORD *)v28 + 84) = v7;
          return result;
        }
      }
      v17 = v16;
      goto LABEL_20;
    }
  }
  if ( (v11[36] == 3) == *(_BYTE *)HIDWORD(a5) )
  {
    v31 = v11[33];
    *((_BYTE *)v11 + 151) = 1;
    v32 = CTimer::m_snTimeInMilliseconds;
    if ( (unsigned int)(CTimer::m_snTimeInMilliseconds - v31) < 0x65 )
    {
      v43 = *a2;
      result = &v11[3 * *((__int16 *)v11 + 74)];
      *(result - 46) = *((_DWORD *)a2 + 2);
      *((_QWORD *)result - 24) = v43;
    }
    else
    {
      v33 = *((__int16 *)v11 + 74);
      v11[33] = CTimer::m_snTimeInMilliseconds;
      if ( v33 > 14 )
      {
        *((_BYTE *)v11 + 150) = 2;
        v11[33] = v32;
        v11[34] = v32 + 10000;
        v11[35] = v32 + 20000;
        goto LABEL_18;
      }
      *((_WORD *)v11 + 74) = v33 + 1;
      v34 = *a2;
      v35 = &v11[3 * (__int16)(v33 + 1)];
      *(v35 - 46) = *((_DWORD *)a2 + 2);
      *((_QWORD *)v35 - 24) = v34;
      v36 = *((__int16 *)v11 + 74);
      v37 = &v11[3 * v36];
      v38 = *((float *)v37 - 51) - *((float *)v37 - 48);
      v39 = *((float *)v37 - 47) - *((float *)v37 - 50);
      v40 = sqrtf((float)(v39 * v39) + (float)(v38 * v38));
      if ( v40 <= 0.0 )
      {
        v41 = 1.0;
      }
      else
      {
        v38 = v38 / v40;
        v41 = v39 / v40;
      }
      v44 = sqrtf((float)(a3 * a3) + (float)(a4 * a4));
      if ( v44 <= 0.0 )
      {
        v45 = 1.0;
      }
      else
      {
        v9 = a4 / v44;
        v45 = a3 / v44;
      }
      v46 = fabsf((float)(v38 * v9) + (float)(v41 * v45)) + 1.0;
      *(float *)&v11[v36] = (float)((float)(v41 * v46) * a6) * 0.5;
      *(float *)&v11[*((__int16 *)v11 + 74) + 16] = (float)((float)(v38 * v46) * a6) * 0.5;
      v47 = *((__int16 *)v11 + 74);
      if ( v47 == 1 )
      {
        v48 = v11[17];
        *v11 = v11[1];
        v11[16] = v48;
      }
      else if ( v47 >= 9 )
      {
        goto LABEL_18;
      }
    }
  }
  else
  {
    *((_BYTE *)v11 + 150) = 2;
    v42 = CTimer::m_snTimeInMilliseconds + 20000;
    v11[34] = CTimer::m_snTimeInMilliseconds + 10000;
    v11[35] = v42;
  }
  return result;
}


// ============================================================
