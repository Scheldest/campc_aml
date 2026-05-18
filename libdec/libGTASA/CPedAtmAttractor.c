
// Address: 0x4ac3ac
// Original: _ZNK16CPedAtmAttractor7GetTypeEv
// Demangled: CPedAtmAttractor::GetType(void)
int __fastcall CPedAtmAttractor::GetType(CPedAtmAttractor *this)
{
  return 0;
}


// ============================================================

// Address: 0x4ac3b0
// Original: _ZN16CPedAtmAttractorD0Ev
// Demangled: CPedAtmAttractor::~CPedAtmAttractor()
void __fastcall CPedAtmAttractor::~CPedAtmAttractor(CPedAtmAttractor *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0
  void *v5; // r0
  void *v6; // r0
  int v7; // r0
  int v8; // r1

  v3 = (CEntity **)((char *)this + 8);
  v2 = (CEntity *)*((_DWORD *)this + 2);
  *(_DWORD *)this = &off_668DF8;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (void *)*((_DWORD *)this + 11);
  *((_DWORD *)this + 10) = 0;
  if ( v4 )
  {
    free(v4);
    *((_DWORD *)this + 11) = 0;
  }
  v5 = (void *)*((_DWORD *)this + 8);
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 9) = 0;
  if ( v5 )
  {
    free(v5);
    *((_DWORD *)this + 8) = 0;
  }
  v6 = (void *)*((_DWORD *)this + 5);
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 6) = 0;
  if ( v6 )
  {
    free(v6);
    *((_DWORD *)this + 5) = 0;
  }
  *((_DWORD *)this + 3) = 0;
  v7 = CPools::ms_pPedAttractorPool;
  v8 = -1601513229 * (((int)this - *(_DWORD *)CPools::ms_pPedAttractorPool) >> 2);
  *(_BYTE *)(*(_DWORD *)(CPools::ms_pPedAttractorPool + 4) + v8) |= 0x80u;
  if ( v8 < *(_DWORD *)(v7 + 12) )
    *(_DWORD *)(v7 + 12) = v8;
}


// ============================================================
