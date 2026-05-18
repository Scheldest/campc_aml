
// Address: 0x192470
// Original: j__ZN13CCreepingFire6UpdateEv
// Demangled: CCreepingFire::Update(void)
// attributes: thunk
int __fastcall CCreepingFire::Update(CCreepingFire *this)
{
  return _ZN13CCreepingFire6UpdateEv(this);
}


// ============================================================

// Address: 0x19d2ac
// Original: j__ZN13CCreepingFire21TryToStartFireAtCoorsE7CVectorabbf
// Demangled: CCreepingFire::TryToStartFireAtCoors(CVector,signed char,bool,bool,float)
// attributes: thunk
int CCreepingFire::TryToStartFireAtCoors()
{
  return _ZN13CCreepingFire21TryToStartFireAtCoorsE7CVectorabbf();
}


// ============================================================

// Address: 0x3f2b64
// Original: _ZN13CCreepingFire21TryToStartFireAtCoorsE7CVectorabbf
// Demangled: CCreepingFire::TryToStartFireAtCoors(CVector,signed char,bool,bool,float)
int __fastcall CCreepingFire::TryToStartFireAtCoors(float a1, float a2, float a3, int a4, int a5, char a6, float a7)
{
  char *v7; // r3
  int v8; // r6
  char *v9; // r9
  int v10; // r3
  char *v11; // r5
  int v12; // r6
  int v13; // r5
  _BYTE *started; // r0
  _DWORD v16[2]; // [sp+1Ch] [bp-54h] BYREF
  float v17; // [sp+24h] [bp-4Ch]
  char v18[4]; // [sp+28h] [bp-48h] BYREF
  char v19[8]; // [sp+2Ch] [bp-44h] BYREF
  float v20; // [sp+34h] [bp-3Ch]

  v7 = (char *)&CCreepingFire::m_aFireStatus + 32 * ((int)a1 & 0x1F);
  v8 = (int)a2 & 0x1F;
  if ( v7[v8] )
    return 0;
  v9 = &v7[v8];
  v10 = 0;
  v11 = gFireManager;
  v12 = -1;
  while ( (unsigned __int8)*v11 << 31 )
  {
LABEL_6:
    ++v12;
    v11 += 40;
    if ( v12 >= 59 )
      return 0;
  }
  if ( v10 <= 4 )
  {
    ++v10;
    goto LABEL_6;
  }
  *(float *)v16 = a1;
  *(float *)&v16[1] = a2;
  v17 = a3;
  v13 = 0;
  if ( CWorld::ProcessVerticalLine((CVector *)v16, COERCE_INT(a3 - a7), (int)v19, (int)v18, 1, 0, 0, 0, 0, 0, 0) == 1 )
  {
    *v9 = 6;
    v17 = v20;
    started = (_BYTE *)CFireManager::StartFire();
    if ( started )
    {
      *started = *started & 0xED | (2 * a6);
      return 1;
    }
  }
  return v13;
}


// ============================================================

// Address: 0x3f35d8
// Original: _ZN13CCreepingFire14SetReadyToBurnEv
// Demangled: CCreepingFire::SetReadyToBurn(void)
void __fastcall CCreepingFire::SetReadyToBurn(CCreepingFire *this)
{
  memset(&CCreepingFire::m_aFireStatus, 0, 0x400u);
}


// ============================================================

// Address: 0x3f35f0
// Original: _ZN13CCreepingFire6UpdateEv
// Demangled: CCreepingFire::Update(void)
_BYTE *__fastcall CCreepingFire::Update(CCreepingFire *this)
{
  _BYTE *result; // r0
  unsigned int v2; // r1
  unsigned int v3; // r2

  result = (char *)&CCreepingFire::m_aFireStatus + 32 * (CTimer::m_FrameCounter & 0x1F);
  v2 = ((unsigned int)CTimer::m_FrameCounter >> 5) & 0x1F;
  v3 = (unsigned __int8)(result[v2] - 4);
  if ( v3 <= 2 )
  {
    result += v2;
    *result = 0x50400u >> (8 * v3);
  }
  return result;
}


// ============================================================
