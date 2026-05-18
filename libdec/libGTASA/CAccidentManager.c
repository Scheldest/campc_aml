
// Address: 0x18a308
// Original: j__ZNK16CAccidentManager24ComputeNoOfFreeAccidentsEv
// Demangled: CAccidentManager::ComputeNoOfFreeAccidents(void)
// attributes: thunk
int __fastcall CAccidentManager::ComputeNoOfFreeAccidents(CAccidentManager *this)
{
  return _ZNK16CAccidentManager24ComputeNoOfFreeAccidentsEv(this);
}


// ============================================================

// Address: 0x190cc0
// Original: j__ZN16CAccidentManager35GetNearestFreeAccidentExceptThisOneERK7CVectorP9CAccidentb
// Demangled: CAccidentManager::GetNearestFreeAccidentExceptThisOne(CVector const&,CAccident *,bool)
// attributes: thunk
int __fastcall CAccidentManager::GetNearestFreeAccidentExceptThisOne(
        CAccidentManager *this,
        const CVector *a2,
        CAccident *a3,
        bool a4)
{
  return _ZN16CAccidentManager35GetNearestFreeAccidentExceptThisOneERK7CVectorP9CAccidentb(this, a2, a3, a4);
}


// ============================================================

// Address: 0x191a48
// Original: j__ZN16CAccidentManager22GetNearestFreeAccidentERK7CVectorb
// Demangled: CAccidentManager::GetNearestFreeAccident(CVector const&,bool)
// attributes: thunk
int __fastcall CAccidentManager::GetNearestFreeAccident(CAccidentManager *this, const CVector *a2, bool a3)
{
  return _ZN16CAccidentManager22GetNearestFreeAccidentERK7CVectorb(this, a2, a3);
}


// ============================================================

// Address: 0x19ff68
// Original: j__ZN16CAccidentManager14ReportAccidentEP4CPed
// Demangled: CAccidentManager::ReportAccident(CPed *)
// attributes: thunk
int __fastcall CAccidentManager::ReportAccident(CAccidentManager *this, CPed *a2)
{
  return _ZN16CAccidentManager14ReportAccidentEP4CPed(this, a2);
}


// ============================================================

// Address: 0x3beefc
// Original: _ZN16CAccidentManagerC2Ev
// Demangled: CAccidentManager::CAccidentManager(void)
void __fastcall CAccidentManager::CAccidentManager(CAccidentManager *this)
{
  *(_DWORD *)this = 0;
  *((_WORD *)this + 2) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_WORD *)this + 6) = 0;
  *((_WORD *)this + 10) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_WORD *)this + 14) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_WORD *)this + 18) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_WORD *)this + 22) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_WORD *)this + 26) = 0;
  *((_WORD *)this + 30) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_WORD *)this + 34) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_WORD *)this + 38) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_WORD *)this + 42) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_WORD *)this + 46) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_WORD *)this + 50) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_WORD *)this + 54) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_WORD *)this + 58) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_WORD *)this + 62) = 0;
  *((_DWORD *)this + 30) = 0;
}


// ============================================================

// Address: 0x3bef50
// Original: _ZN16CAccidentManagerD2Ev
// Demangled: CAccidentManager::~CAccidentManager()
void __fastcall CAccidentManager::~CAccidentManager(CAccidentManager *this)
{
  ;
}


// ============================================================

// Address: 0x3bef52
// Original: _ZN16CAccidentManager14ReportAccidentEP4CPed
// Demangled: CAccidentManager::ReportAccident(CPed *)
CPed **__fastcall CAccidentManager::ReportAccident(CPed **this, CPed *a2)
{
  int v2; // r2
  CPed *v3; // r3
  bool v4; // zf
  int v5; // r4
  unsigned int v6; // lr
  int v7; // r12
  unsigned int v8; // r2
  int v9; // r3
  unsigned int v10; // r2
  int v11; // r3
  unsigned int v12; // r2
  int v13; // r3
  unsigned int v14; // r2
  int v15; // r3
  unsigned int v16; // r2
  int v17; // r3
  unsigned int v18; // r2
  int v19; // r3
  unsigned int v20; // r2
  int v21; // r3
  unsigned int v22; // r2
  int v23; // r3
  unsigned int v24; // r2
  int v25; // r3
  unsigned int v26; // r2
  int v27; // r3
  unsigned int v28; // r2
  int v29; // r3
  unsigned int v30; // r2
  int v31; // r3
  unsigned int v32; // r2
  CPed **v33; // r2

  if ( *((_BYTE *)a2 + 1096) != 2 )
  {
    v2 = *((_DWORD *)a2 + 289);
    if ( v2 <= -1 )
    {
      v3 = *this;
      v4 = *this == a2;
      if ( *this != a2 )
      {
        v2 = (int)this[2];
        v4 = v2 == (_DWORD)a2;
      }
      if ( !v4 )
      {
        v5 = (int)*this;
        if ( v3 )
          v5 = -1;
        v6 = (unsigned int)this[4];
        v7 = v5;
        if ( !v2 )
          v7 = 1;
        if ( !v3 )
          v7 = v5;
        if ( (CPed *)v6 != a2 )
        {
          v8 = (unsigned int)this[6];
          if ( !(v6 | ~v7) )
            v7 = 2;
          if ( (CPed *)v8 != a2 )
          {
            v9 = v8 | ~v7;
            v10 = (unsigned int)this[8];
            if ( !v9 )
              v7 = 3;
            if ( (CPed *)v10 != a2 )
            {
              v11 = v10 | ~v7;
              v12 = (unsigned int)this[10];
              if ( !v11 )
                v7 = 4;
              if ( (CPed *)v12 != a2 )
              {
                v13 = v12 | ~v7;
                v14 = (unsigned int)this[12];
                if ( !v13 )
                  v7 = 5;
                if ( (CPed *)v14 != a2 )
                {
                  v15 = v14 | ~v7;
                  v16 = (unsigned int)this[14];
                  if ( !v15 )
                    v7 = 6;
                  if ( (CPed *)v16 != a2 )
                  {
                    v17 = v16 | ~v7;
                    v18 = (unsigned int)this[16];
                    if ( !v17 )
                      v7 = 7;
                    if ( (CPed *)v18 != a2 )
                    {
                      v19 = v18 | ~v7;
                      v20 = (unsigned int)this[18];
                      if ( !v19 )
                        v7 = 8;
                      if ( (CPed *)v20 != a2 )
                      {
                        v21 = v20 | ~v7;
                        v22 = (unsigned int)this[20];
                        if ( !v21 )
                          v7 = 9;
                        if ( (CPed *)v22 != a2 )
                        {
                          v23 = v22 | ~v7;
                          v24 = (unsigned int)this[22];
                          if ( !v23 )
                            v7 = 10;
                          if ( (CPed *)v24 != a2 )
                          {
                            v25 = v24 | ~v7;
                            v26 = (unsigned int)this[24];
                            if ( !v25 )
                              v7 = 11;
                            if ( (CPed *)v26 != a2 )
                            {
                              v27 = v26 | ~v7;
                              v28 = (unsigned int)this[26];
                              if ( !v27 )
                                v7 = 12;
                              if ( (CPed *)v28 != a2 )
                              {
                                v29 = v28 | ~v7;
                                v30 = (unsigned int)this[28];
                                if ( !v29 )
                                  v7 = 13;
                                if ( (CPed *)v30 != a2 )
                                {
                                  v31 = v30 | ~v7;
                                  v32 = (unsigned int)this[30];
                                  if ( !v31 )
                                    v7 = 14;
                                  if ( (CPed *)v32 != a2 )
                                  {
                                    if ( !(v32 | ~v7) )
                                      v7 = 15;
                                    if ( v7 != -1 )
                                    {
                                      v33 = &this[2 * v7];
                                      *v33 = a2;
                                      *((_WORD *)v33 + 2) = 0;
                                      return (CPed **)j_CEntity::RegisterReference(a2, v33);
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return this;
}


// ============================================================

// Address: 0x3bf0b8
// Original: _ZNK16CAccidentManager24ComputeNoOfFreeAccidentsEv
// Demangled: CAccidentManager::ComputeNoOfFreeAccidents(void)
int __fastcall CAccidentManager::ComputeNoOfFreeAccidents(CAccidentManager *this)
{
  int v2; // r2
  int result; // r0
  int v4; // r3
  int v5; // r1
  char *v6; // r4
  bool v7; // zf

  v2 = 0;
  result = 0;
  do
  {
    while ( 1 )
    {
      v4 = v2++;
      v5 = *((_DWORD *)this + 2 * v4);
      if ( v5 )
      {
        v6 = (char *)this + 8 * v4;
        v7 = v6[4] == 0;
        if ( !v6[4] )
          v7 = v6[5] == 0;
        if ( v7 )
          break;
      }
      if ( v2 - 1 >= 15 )
        return result;
    }
    result += ((*(_DWORD *)(v5 + 68) >> 8) & 1) == 0;
  }
  while ( v4 < 15 );
  return result;
}


// ============================================================

// Address: 0x3bf0f8
// Original: _ZN16CAccidentManager22GetNearestFreeAccidentERK7CVectorb
// Demangled: CAccidentManager::GetNearestFreeAccident(CVector const&,bool)
int __fastcall CAccidentManager::GetNearestFreeAccident(int a1, int a2, int a3)
{
  float32x2_t v3; // d2
  float32x2_t v4; // d16
  int v5; // lr
  float v6; // s0
  int v7; // r8
  float v8; // s2
  int i; // r1
  int v10; // r4
  int v11; // r5
  int v12; // r6
  bool v13; // zf
  int v14; // r3
  int v15; // r6
  float32x2_t v16; // d17
  float32x2_t v17; // d3

  v3.n64_u32[0] = 2139095039;
  v4.n64_u64[0] = *(unsigned __int64 *)(a2 + 4);
  v5 = 0;
  v6 = *(float *)a2;
  v7 = 0;
  do
  {
    v8 = v3.n64_f32[0];
    for ( i = 8 * v7; ; i += 8 )
    {
      v10 = v7++;
      v11 = *(_DWORD *)(a1 + 8 * v10);
      if ( v11 )
      {
        v12 = a1 + 8 * v10;
        v13 = *(_BYTE *)(v12 + 4) == 0;
        if ( !*(_BYTE *)(v12 + 4) )
          v13 = *(_BYTE *)(v12 + 5) == 0;
        if ( v13 && !(*(unsigned __int8 *)(v11 + 69) << 31) && (a3 != 1 || !(*(unsigned __int8 *)(v11 + 1157) >> 7)) )
          break;
      }
      if ( v7 - 1 >= 15 )
        return v5;
    }
    v14 = *(_DWORD *)(v11 + 20);
    v15 = v14 + 48;
    if ( !v14 )
      v15 = v11 + 4;
    v16.n64_u64[0] = vsub_f32(v4, *(float32x2_t *)(v15 + 4)).n64_u64[0];
    v17.n64_u64[0] = vmul_f32(v16, v16).n64_u64[0];
    v17.n64_f32[0] = (float)((float)((float)(v6 - *(float *)v15) * (float)(v6 - *(float *)v15)) + v17.n64_f32[0])
                   + v17.n64_f32[1];
    v3.n64_u64[0] = vmin_f32(v17, v3).n64_u64[0];
    if ( v17.n64_f32[0] < v8 )
      v5 = a1 + i;
  }
  while ( v10 < 15 );
  return v5;
}


// ============================================================

// Address: 0x3bf1ac
// Original: _ZN16CAccidentManager35GetNearestFreeAccidentExceptThisOneERK7CVectorP9CAccidentb
// Demangled: CAccidentManager::GetNearestFreeAccidentExceptThisOne(CVector const&,CAccident *,bool)
int __fastcall CAccidentManager::GetNearestFreeAccidentExceptThisOne(int a1, int a2, int a3, int a4)
{
  float32x2_t v4; // d2
  float32x2_t v5; // d16
  int v6; // lr
  float v7; // s0
  int v8; // r9
  float v9; // s2
  int i; // r4
  int v11; // r5
  int v12; // r10
  int v13; // r1
  bool v14; // zf
  char v15; // r1
  int v16; // r1
  int v17; // r6
  float32x2_t v18; // d17
  float32x2_t v19; // d3

  v4.n64_u32[0] = 2139095039;
  v5.n64_u64[0] = *(unsigned __int64 *)(a2 + 4);
  v6 = 0;
  v7 = *(float *)a2;
  v8 = 0;
  do
  {
    v9 = v4.n64_f32[0];
    for ( i = a1 + 8 * v8; ; i += 8 )
    {
      v11 = v8++;
      v12 = *(_DWORD *)(a1 + 8 * v11);
      if ( !v12 )
        goto LABEL_7;
      v13 = a1 + 8 * v11;
      v14 = *(_BYTE *)(v13 + 4) == 0;
      if ( !*(_BYTE *)(v13 + 4) )
        v14 = *(_BYTE *)(v13 + 5) == 0;
      if ( !v14 || *(unsigned __int8 *)(v12 + 69) << 31 )
        goto LABEL_7;
      if ( a4 == 1 )
        break;
      if ( !a3 || a3 != i )
        goto LABEL_18;
LABEL_7:
      if ( v8 - 1 >= 15 )
        return v6;
    }
    v15 = a3;
    if ( a3 )
      v15 = 1;
    if ( *(unsigned __int8 *)(v12 + 1157) >> 7 || ((unsigned __int8)v15 & (a3 == i)) != 0 )
      goto LABEL_7;
LABEL_18:
    v16 = *(_DWORD *)(v12 + 20);
    v17 = v16 + 48;
    if ( !v16 )
      v17 = v12 + 4;
    v18.n64_u64[0] = vsub_f32(v5, *(float32x2_t *)(v17 + 4)).n64_u64[0];
    v19.n64_u64[0] = vmul_f32(v18, v18).n64_u64[0];
    v19.n64_f32[0] = (float)((float)((float)(v7 - *(float *)v17) * (float)(v7 - *(float *)v17)) + v19.n64_f32[0])
                   + v19.n64_f32[1];
    v4.n64_u64[0] = vmin_f32(v19, v4).n64_u64[0];
    if ( v19.n64_f32[0] < v9 )
      v6 = i;
  }
  while ( v11 < 15 );
  return v6;
}


// ============================================================
