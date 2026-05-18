
// Address: 0x192754
// Original: j__ZN13CMovingThings4InitEv
// Demangled: CMovingThings::Init(void)
// attributes: thunk
int __fastcall CMovingThings::Init(CMovingThings *this)
{
  return _ZN13CMovingThings4InitEv(this);
}


// ============================================================

// Address: 0x19479c
// Original: j__ZN13CMovingThings6UpdateEv
// Demangled: CMovingThings::Update(void)
// attributes: thunk
int __fastcall CMovingThings::Update(CMovingThings *this)
{
  return _ZN13CMovingThings6UpdateEv(this);
}


// ============================================================

// Address: 0x1986f4
// Original: j__ZN13CMovingThings19Render_BeforeCloudsEv
// Demangled: CMovingThings::Render_BeforeClouds(void)
// attributes: thunk
int __fastcall CMovingThings::Render_BeforeClouds(CMovingThings *this)
{
  return _ZN13CMovingThings19Render_BeforeCloudsEv(this);
}


// ============================================================

// Address: 0x19885c
// Original: j__ZN13CMovingThings6RenderEv
// Demangled: CMovingThings::Render(void)
// attributes: thunk
int __fastcall CMovingThings::Render(CMovingThings *this)
{
  return _ZN13CMovingThings6RenderEv(this);
}


// ============================================================

// Address: 0x19d81c
// Original: j__ZN13CMovingThings8ShutdownEv
// Demangled: CMovingThings::Shutdown(void)
// attributes: thunk
int __fastcall CMovingThings::Shutdown(CMovingThings *this)
{
  return _ZN13CMovingThings8ShutdownEv(this);
}


// ============================================================

// Address: 0x5a620c
// Original: _ZN13CMovingThings4InitEv
// Demangled: CMovingThings::Init(void)
int __fastcall CMovingThings::Init(CMovingThings *this)
{
  CEscalators *v1; // r0

  unk_A2959C = 0LL;
  unk_A295A4 = 0LL;
  unk_A2958C = 0LL;
  unk_A29594 = 0LL;
  unk_A2957C = 0LL;
  unk_A29584 = 0LL;
  unk_A2969C = 0LL;
  unk_A296A4 = 0LL;
  unk_A2968C = 0LL;
  unk_A29694 = 0LL;
  unk_A2967C = 0LL;
  unk_A29684 = 0LL;
  unk_A2966C = 0LL;
  unk_A29674 = 0LL;
  unk_A2956C = 0LL;
  unk_A29574 = 0LL;
  qword_A2976C[6] = 0LL;
  qword_A2976C[7] = 0LL;
  qword_A2976C[4] = 0LL;
  qword_A2976C[5] = 0LL;
  qword_A2976C[2] = 0LL;
  qword_A2976C[3] = 0LL;
  qword_A2976C[0] = 0LL;
  qword_A2976C[1] = 0LL;
  v1 = (CEscalators *)CPointLights::Init((CPointLights *)qword_A2976C);
  return CEscalators::Init(v1);
}


// ============================================================

// Address: 0x5a64c0
// Original: _ZN13CMovingThings8ShutdownEv
// Demangled: CMovingThings::Shutdown(void)
char *__fastcall CMovingThings::Shutdown(CMovingThings *this)
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

// Address: 0x5a66b0
// Original: _ZN13CMovingThings6UpdateEv
// Demangled: CMovingThings::Update(void)
int __fastcall CMovingThings::Update(CMovingThings *this)
{
  int i; // r4
  int result; // r0

  CPlaneTrails::Update(this);
  for ( i = 0; i != 10752; i += 336 )
  {
    result = *((unsigned __int8 *)&CEscalators::aArray + i + 120);
    if ( *((_BYTE *)&CEscalators::aArray + i + 120) )
      result = CEscalator::Update((CEscalator *)((char *)&CEscalators::aArray + i));
  }
  return result;
}


// ============================================================

// Address: 0x5a6a70
// Original: _ZN13CMovingThings19Render_BeforeCloudsEv
// Demangled: CMovingThings::Render_BeforeClouds(void)
// attributes: thunk
int __fastcall CMovingThings::Render_BeforeClouds(CMovingThings *this)
{
  return CPlaneTrails::Render(this);
}


// ============================================================

// Address: 0x5a6b58
// Original: _ZN13CMovingThings6RenderEv
// Demangled: CMovingThings::Render(void)
void __fastcall CMovingThings::Render(CMovingThings *this)
{
  ;
}


// ============================================================
