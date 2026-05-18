
// Address: 0x1914cc
// Original: j__ZN15CSexyPedScanner20ScanForSexyPedEventsERK4CPedPP7CEntityi
// Demangled: CSexyPedScanner::ScanForSexyPedEvents(CPed const&,CEntity **,int)
// attributes: thunk
int __fastcall CSexyPedScanner::ScanForSexyPedEvents(CSexyPedScanner *this, const CPed *a2, CEntity **a3, int a4)
{
  return _ZN15CSexyPedScanner20ScanForSexyPedEventsERK4CPedPP7CEntityi(this, a2, a3, a4);
}


// ============================================================

// Address: 0x4bce40
// Original: _ZNK15CSexyPedScanner15IsScanPermittedERK4CPed
// Demangled: CSexyPedScanner::IsScanPermitted(CPed const&)
bool __fastcall CSexyPedScanner::IsScanPermitted(CSexyPedScanner *this, const CPed *a2)
{
  return *((_BYTE *)a2 + 1096) == 2 || *((unsigned __int8 *)a2 + 1157) << 31 == 0;
}


// ============================================================

// Address: 0x4bce5c
// Original: _ZN15CSexyPedScanner20ScanForSexyPedEventsERK4CPedPP7CEntityi
// Demangled: CSexyPedScanner::ScanForSexyPedEvents(CPed const&,CEntity **,int)
void __fastcall CSexyPedScanner::ScanForSexyPedEvents(CSexyPedScanner *this, const CPed *a2, CEntity **a3, int a4)
{
  int v5; // r6
  int v8; // r0
  int v9; // r0
  bool v10; // zf
  int v11; // r0
  float *v12; // r1
  double v13; // d16
  CPed *v14; // r9
  float v15; // s16
  int v16; // r11
  int v17; // r0
  int v18; // r1
  float v19; // s24
  float v20; // s22
  float v21; // s26
  float v22; // s20
  bool v23; // [sp+14h] [bp-7Ch]
  double v24; // [sp+18h] [bp-78h] BYREF
  float v25; // [sp+20h] [bp-70h]
  double v26; // [sp+30h] [bp-60h] BYREF
  float v27; // [sp+38h] [bp-58h]

  v5 = a4;
  if ( !*((_BYTE *)this + 8) )
  {
    *(_QWORD *)this = (unsigned int)CTimer::m_snTimeInMilliseconds | 0x1F400000000LL;
    *((_BYTE *)this + 8) = 1;
  }
  if ( *((_BYTE *)this + 9) )
  {
    v8 = CTimer::m_snTimeInMilliseconds;
    *((_BYTE *)this + 9) = 0;
    *(_DWORD *)this = v8;
  }
  else
  {
    v8 = *(_DWORD *)this;
  }
  if ( v8 + *((_DWORD *)this + 1) <= (unsigned int)CTimer::m_snTimeInMilliseconds )
  {
    *(_DWORD *)this = CTimer::m_snTimeInMilliseconds;
    *((_DWORD *)this + 1) = 500;
    *((_BYTE *)this + 8) = 1;
    v9 = *((unsigned __int8 *)a2 + 1096);
    v10 = v9 == 2;
    if ( v9 != 2 )
      v10 = *((unsigned __int8 *)a2 + 1157) << 31 == 0;
    if ( v10 )
    {
      v11 = *((_DWORD *)a2 + 5);
      v12 = (float *)(v11 + 48);
      if ( !v11 )
        v12 = (float *)((char *)a2 + 4);
      v13 = *(double *)v12;
      v27 = v12[2];
      v26 = v13;
      if ( a4 >= 1 )
      {
        v14 = 0;
        v15 = 1.0e10;
        do
        {
          v16 = (int)*a3;
          if ( *a3
            && *(_DWORD *)(v16 + 1436) == 5
            && *(char *)(*(_DWORD *)(v16 + 1440) + 39) > *(char *)(*((_DWORD *)a2 + 360) + 39)
            && !(*(unsigned __int8 *)(v16 + 1157) << 31) )
          {
            v17 = *(_DWORD *)(v16 + 20);
            v18 = v17 + 48;
            if ( !v17 )
              v18 = v16 + 4;
            v24 = *(double *)v18;
            v19 = *(float *)&v24 - *(float *)&v26;
            v20 = *((float *)&v24 + 1) - *((float *)&v26 + 1);
            v25 = *(float *)(v18 + 8);
            v21 = v25 - v27;
            v22 = (float)((float)(v19 * v19) + (float)(v20 * v20)) + (float)(v21 * v21);
            if ( v22 < 10000.0 )
            {
              if ( *((_DWORD *)a2 + 273) )
                CInterestingEvents::Add();
              if ( v22 < v15
                && (float)((float)((float)(v19 * *(float *)(*((_DWORD *)a2 + 5) + 16))
                                 + (float)(v20 * *(float *)(*((_DWORD *)a2 + 5) + 20)))
                         + (float)(v21 * *(float *)(*((_DWORD *)a2 + 5) + 24))) > 0.0
                && CWorld::GetIsLineOfSightClear(
                     (CWorld *)&v26,
                     (const CVector *)&v24,
                     (const CVector *)((char *)&stderr + 1),
                     0,
                     0,
                     1,
                     0,
                     0,
                     0,
                     v23) )
              {
                v15 = (float)((float)(v19 * v19) + (float)(v20 * v20)) + (float)(v21 * v21);
                v14 = (CPed *)v16;
              }
            }
          }
          --v5;
          ++a3;
        }
        while ( v5 );
        if ( v14 )
        {
          CEventSexyPed::CEventSexyPed((CEventSexyPed *)&v24, v14);
          CEventGroup::Add((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), (CEvent *)&v24, 0);
          *(_QWORD *)this = (unsigned int)CTimer::m_snTimeInMilliseconds | 0xBB800000000LL;
          *((_BYTE *)this + 8) = 1;
          CEventSexyPed::~CEventSexyPed((CEventSexyPed *)&v24);
        }
      }
    }
  }
}


// ============================================================
