
// Address: 0x194dcc
// Original: j__ZN11CEscalators6AddOneERK7CVectorS2_S2_S2_bP7CEntity
// Demangled: CEscalators::AddOne(CVector const&,CVector const&,CVector const&,CVector const&,bool,CEntity *)
// attributes: thunk
int __fastcall CEscalators::AddOne(
        CEscalators *this,
        const CVector *a2,
        const CVector *a3,
        const CVector *a4,
        const CVector *a5,
        bool a6,
        CEntity *a7)
{
  return _ZN11CEscalators6AddOneERK7CVectorS2_S2_S2_bP7CEntity(this, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x5a62f8
// Original: _ZN11CEscalators4InitEv
// Demangled: CEscalators::Init(void)
char *__fastcall CEscalators::Init(CEscalators *this)
{
  int v1; // r9
  _DWORD *v2; // r4
  char *v3; // r2
  char *v4; // r2
  int v5; // t1
  char *v6; // r10
  CEntity *v7; // r1
  char *v8; // r10
  CEntity *v9; // t1
  int v10; // r2
  int v11; // r3
  int v12; // r5
  CWorld *v13; // r0
  int v14; // r0
  char *v15; // r0
  int v16; // r8
  _DWORD *v17; // r4
  char *v18; // r2
  char *result; // r0
  char *v20; // r2
  char *v21; // t1
  char *v22; // r11
  CEntity *v23; // r1
  char *v24; // r11
  CEntity *v25; // t1
  int v26; // r2
  int v27; // r3
  int v28; // r6
  CWorld *v29; // r0
  int v30; // r0
  char *v31; // [sp+Ch] [bp-24h]
  char *v32; // [sp+Ch] [bp-24h]

  v1 = 0;
  v2 = &unk_A26B50;
  do
  {
    v3 = (char *)&CEscalators::aArray + 336 * v1;
    v5 = (unsigned __int8)v3[121];
    v4 = v3 + 121;
    if ( v5 )
    {
      v6 = (char *)&CEscalators::aArray + 336 * v1;
      v31 = v4;
      v9 = (CEntity *)*((_DWORD *)v6 + 31);
      v8 = v6 + 124;
      v7 = v9;
      v10 = *((_DWORD *)v8 + 1);
      v11 = *((_DWORD *)v8 + 2);
      if ( (int)v9 + v10 + v11 >= 1 )
      {
        v12 = 0;
        do
        {
          v13 = (CWorld *)v2[v12];
          if ( v13 )
          {
            CWorld::Remove(v13, v7);
            deletingEscalator = 1;
            v14 = v2[v12];
            if ( v14 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 4))(v14);
            v2[v12] = 0;
            v11 = *((_DWORD *)v8 + 2);
            v10 = *((_DWORD *)v8 + 1);
            v7 = *(CEntity **)v8;
            deletingEscalator = 0;
          }
          ++v12;
        }
        while ( v12 < (int)v7 + v10 + v11 );
      }
      *v31 = 0;
    }
    v2 += 84;
    v15 = (char *)&CEscalators::aArray + 336 * v1++;
    v15[120] = 0;
  }
  while ( v1 != 32 );
  v16 = 0;
  v17 = &unk_A26B50;
  do
  {
    v18 = (char *)&CEscalators::aArray + 336 * v16;
    v21 = (char *)(unsigned __int8)v18[121];
    v20 = v18 + 121;
    result = v21;
    if ( v21 )
    {
      v22 = (char *)&CEscalators::aArray + 336 * v16;
      v32 = v20;
      v25 = (CEntity *)*((_DWORD *)v22 + 31);
      v24 = v22 + 124;
      v23 = v25;
      v26 = *((_DWORD *)v24 + 1);
      v27 = *((_DWORD *)v24 + 2);
      if ( (int)v25 + v26 + v27 >= 1 )
      {
        v28 = 0;
        do
        {
          v29 = (CWorld *)v17[v28];
          if ( v29 )
          {
            CWorld::Remove(v29, v23);
            deletingEscalator = 1;
            v30 = v17[v28];
            if ( v30 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 4))(v30);
            v17[v28] = 0;
            v27 = *((_DWORD *)v24 + 2);
            v26 = *((_DWORD *)v24 + 1);
            v23 = *(CEntity **)v24;
            deletingEscalator = 0;
          }
          ++v28;
        }
        while ( v28 < (int)v23 + v26 + v27 );
      }
      result = v32;
      *v32 = 0;
    }
    ++v16;
    v17 += 84;
  }
  while ( v16 != 32 );
  return result;
}


// ============================================================

// Address: 0x5a65b8
// Original: _ZN11CEscalators8ShutdownEv
// Demangled: CEscalators::Shutdown(void)
char *__fastcall CEscalators::Shutdown(CEscalators *this)
{
  int v1; // r9
  _DWORD *v2; // r4
  char *v3; // r2
  char *v4; // r2
  int v5; // t1
  char *v6; // r10
  CEntity *v7; // r1
  char *v8; // r10
  CEntity *v9; // t1
  int v10; // r2
  int v11; // r3
  int v12; // r5
  CWorld *v13; // r0
  int v14; // r0
  char *result; // r0
  char *v16; // [sp+Ch] [bp-24h]

  v1 = 0;
  v2 = &unk_A26B50;
  do
  {
    v3 = (char *)&CEscalators::aArray + 336 * v1;
    v5 = (unsigned __int8)v3[121];
    v4 = v3 + 121;
    if ( v5 )
    {
      v6 = (char *)&CEscalators::aArray + 336 * v1;
      v16 = v4;
      v9 = (CEntity *)*((_DWORD *)v6 + 31);
      v8 = v6 + 124;
      v7 = v9;
      v10 = *((_DWORD *)v8 + 1);
      v11 = *((_DWORD *)v8 + 2);
      if ( (int)v9 + v10 + v11 >= 1 )
      {
        v12 = 0;
        do
        {
          v13 = (CWorld *)v2[v12];
          if ( v13 )
          {
            CWorld::Remove(v13, v7);
            deletingEscalator = 1;
            v14 = v2[v12];
            if ( v14 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 4))(v14);
            v2[v12] = 0;
            v11 = *((_DWORD *)v8 + 2);
            v10 = *((_DWORD *)v8 + 1);
            v7 = *(CEntity **)v8;
            deletingEscalator = 0;
          }
          ++v12;
        }
        while ( v12 < (int)v7 + v10 + v11 );
      }
      *v16 = 0;
    }
    v2 += 84;
    result = (char *)&CEscalators::aArray + 336 * v1++;
    result[120] = 0;
  }
  while ( v1 != 32 );
  return result;
}


// ============================================================

// Address: 0x5a6a30
// Original: _ZN11CEscalators6UpdateEv
// Demangled: CEscalators::Update(void)
int __fastcall CEscalators::Update(CEscalators *this)
{
  int i; // r4
  int result; // r0

  for ( i = 0; i != 10752; i += 336 )
  {
    result = *((unsigned __int8 *)&CEscalators::aArray + i + 120);
    if ( *((_BYTE *)&CEscalators::aArray + i + 120) )
      result = CEscalator::Update((CEscalator *)((char *)&CEscalators::aArray + i));
  }
  return result;
}


// ============================================================

// Address: 0x5a773c
// Original: _ZN11CEscalators6AddOneERK7CVectorS2_S2_S2_bP7CEntity
// Demangled: CEscalators::AddOne(CVector const&,CVector const&,CVector const&,CVector const&,bool,CEntity *)
CEscalator *__fastcall CEscalators::AddOne(
        CEscalators *this,
        const CVector *a2,
        const CVector *a3,
        const CVector *a4,
        const CVector *a5,
        CEntity *a6,
        CEntity *a7)
{
  int v10; // r5
  CEscalator *result; // r0

  v10 = -1;
  result = (CEscalator *)&CEscalators::aArray;
  while ( *((_BYTE *)result + 120) )
  {
    ++v10;
    result = (CEscalator *)((char *)result + 336);
    if ( v10 >= 31 )
      return result;
  }
  return (CEscalator *)CEscalator::AddThisOne(result, this, a2, a3, a4, (bool)a5, a6);
}


// ============================================================
